//#include <netinet/tcp.h>
#include <assert.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>

#include <iostream>

#include <cstdlib>
#include <errno.h>
#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>

#include "MirrorDataManager_Uploader.hpp"

using namespace std;
namespace atd {
namespace mirrorDataManager {

CUploader* CUploader::m_instance = nullptr;
std::atomic<bool> flag(false);

unsigned int CUploader::Init()
{
    // should be called only by CCP but not IECU?
    //VssCryptoInit(EVSSAlgoType::SoftAlgo, 0, NULL, NULL);
    //FTLS_ctx_init()
    // set the real ip and port??
    printf("****init()****\n");
    m_connCtx.setIP(reinterpret_cast<const unsigned char*>("192.168.1.36"), 8080);
    return 0;
}
//unsigned int CUploader::Write(unsigned char* data, unsigned int len)
//{
//    return 0;
//}
unsigned int CUploader::Write(const char* file, unsigned int offset)
{
    unsigned int ret = 0;

    if(m_curSts->get_sts() == EUploaderSts::uploader_unconnected || 
        m_curSts->get_sts() == EUploaderSts::uploader_connecting)
    { 
       
        m_internalEvt = EUploaderInternalEvt::evt_writeReqViaUnconnected;
        printf("m_internalEvt = %d\n",m_internalEvt);
        printf("getTransferCtx().getTransferStatus() = %d\n",getTransferCtx().getTransferStatus());
        if(getTransferCtx().getTransferStatus() == EUploaderTransferSts::transferErr)
        {
            getTransferCtx().stopTransferThread();
            return EMirrorDataRetCode::e_md_uploader_error; 
        }
        else
           //
            return EMirrorDataRetCode::e_md_uploader_unstarted;
    }

//?? need to consider the concurrent case between write therad(transfer) and the file manager thread
    ret = m_transfer.configTransfer(file, offset);
   // printf("configTransfer() ret = %d\n",ret);
    if(ret == CUploaderTransfer::ETransferErrCode::e_transfer_repeat_req)
        return EMirrorDataRetCode::e_md_uploader_ongoing;
    else if(ret == CUploaderTransfer::ETransferErrCode::e_transfer_busy)
        return EMirrorDataRetCode::e_md_uploader_busy;
    //trigger internal event for uploader to build connection and create write thread
    else if(ret == CUploaderTransfer::ETransferErrCode::e_transfer_requestWhenInit ||
        ret == CUploaderTransfer::ETransferErrCode::e_transfer_invalid_req)
        return EMirrorDataRetCode::e_md_uploader_unstarted;
    else if(ret == CUploaderTransfer::e_transfer_repeat_finished)
        return EMirrorDataRetCode::e_md_uploader_finished;
    else if(ret == CUploaderTransfer::e_transfer_error)
        return EMirrorDataRetCode::e_md_uploader_error;

    m_transfer.startTransferThread();
    printf("m_transfer.startTransferThread();\n");
    
    return EMirrorDataRetCode::e_md_uploader_accepted;
}
CUploader* CUploader::Get()
{
    if(m_instance == nullptr) 
        m_instance = new CUploader;

    return m_instance;
}

void CUploader::Step()
{
    unsigned int ret_sts = EUploaderSts::uploader_unconnected; 
    unsigned int in_evt = EMirrorDataEvt::e_tick; 

    assert(m_curSts);
    //?? update with real case
    
    ret_sts = m_curSts->step(in_evt);
    m_curSts = getFsmSts(ret_sts);
}

// len is the length of curretn payload, may not be the total file length
unsigned int CConnectionCtx::write(UINT8* data, UINT32 start_byte, UINT32 len, UINT8* fileName, UINT32 file_total_len) 
{
    if(!getConnectionSts())  //connect 成功后为true
    //err code is needed??
        return 1;

    const char* ip = nullptr;
    const char* httpPack = nullptr;
    unsigned int httpPack_len = 0;
    unsigned int port = 0;

    getIP(&ip, &port);

    m_httpPack.generateHeader(ip, port, (const char*)fileName, len, start_byte, file_total_len);
    m_httpPack.fillData((const char*)data);
    m_httpPack.generateEnd();
    httpPack_len = m_httpPack.returnHttpPack(&httpPack);
    
    return FTLS_write(&m_ftls_ctx, (UINT8*)httpPack, httpPack_len);
}

unsigned int CConnectionCtx::closeConnection()
{
    close(m_sock);
    setConnectionSts(false);
    memset(&m_ftls_ctx, 0, sizeof(m_ftls_ctx));
}

unsigned int CConnectionCtx::buildConnection()
{
    if(getConnectionSts())
        return 0;

    unsigned int ret = 0;
    struct sockaddr_in addr;
    m_sock = socket(AF_INET, SOCK_STREAM, 0);

    if(m_sock <= 0)
    {
        std::cout << "socket()" << strerror(errno) << std::endl;
        //??return failure code
        return -1;
    }
    printf("socket  = %d\n",m_sock);
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = inet_addr(reinterpret_cast<const char*>(ip));

    printf("port = %d\n ip = %s\n",port,ip);
   
    if(connect(m_sock, reinterpret_cast<struct sockaddr*>(&addr), sizeof(addr)) < 0)
    {
        //??return failure code
        printf("connect err code!!!!!!\n");
        std::cout << "connect err" << strerror(errno) << std::endl;
        
        return -1;
    }
   
    ret = FTLS_ctx_init(&m_ftls_ctx, m_sock, NULL, 0, NULL, 0, NULL, 0, m_someip_cbk);
    if(ret)
    {
        //??return failure code
        return 1;
    }
   
    ret = FTLS_connect(&m_ftls_ctx);
    if(ret)
    {
        //??return failure code
        return 1;
    }

   
    //process_conn_client(m_sock);
    
    setConnectionSts(true);

    printf("m_connected = true  ret = %d\n",ret);
    return ret;
} 
                                                 //0
unsigned int CFsmUnconnected::step(unsigned int evt_index) {
    unsigned int ret = get_sts();
    // printf("CFsmUnconnected\n");
    if(m_handlingObj->getInterEvt() == EUploaderInternalEvt::evt_writeReqViaUnconnected)
        evt_index = EMirrorDataEvt::e_log_trigger;

    m_handlingObj->resetInterEvt(); 

    switch (evt_index)
    {
    case EMirrorDataEvt::e_log_trigger:
    {
        std::thread connThread(&CConnectionCtx::buildConnection, &(m_handlingObj->getConnCtx()));
        //create thread to build connection since it causes too much time
        connThread.detach();
        m_handlingObj->getTransferCtx().createTransferThread(); // m_transferSts = threadCreated;
        ret = EUploaderSts::uploader_connecting;
        break;
    }
    default:
        break;
    }

    return ret;
}
unsigned int CFsmConnected::step(unsigned int evt_index) {
    //printf("CFsmConnected\n");
    unsigned int ret = get_sts();

    m_handlingObj->resetInterEvt(); 

    m_handlingObj->setConnFreeTime();
    // once the connection is free for specified time, close it
    if(m_handlingObj->getTransferCtx().getTransferStatus() == EUploaderTransferSts::transferOngoing)
        ret = EUploaderSts::uploader_writing;
        
    else if(m_handlingObj->getConnFreeTime() > m_handlingObj->connFreeLimit)
    {
        if(m_handlingObj->getTransferCtx().stopTransferThread() == 0)
        { 
            m_handlingObj->resetConnFreeTime();
            ret = EUploaderSts::uploader_unconnected ;
            printf("close m_sock\n");
            m_handlingObj->getConnCtx().closeConnection();
        }
    }

    return ret;
}
unsigned int CFsmWriting::step(unsigned int evt_index) {
    // printf("CFsmWriting\n");
    unsigned int ret = get_sts();
    m_handlingObj->resetInterEvt(); 
    m_handlingObj->resetConnFreeTime();
    if(m_handlingObj->getTransferCtx().getTransferStatus() == EUploaderTransferSts::threadCreated)
        ret = EUploaderSts::uploader_connected;
    else if(m_handlingObj->getTransferCtx().getTransferStatus() == EUploaderTransferSts::transferErr)
    {
        //m_handlingObj->getTransferCtx().stopTransferThread();
        m_handlingObj->getConnCtx().closeConnection();
        ret = EUploaderSts::uploader_unconnected;
    }

    return ret;
}
unsigned int CFsmConnecting::step(unsigned int evt_index) {
    // printf("CFsmConnecting\n");
    unsigned int ret = get_sts();

    m_handlingObj->resetInterEvt(); 

    //printf("m_handlingObj->getConnCtx().getConnectionSts() : %d\n",m_handlingObj->getConnCtx().getConnectionSts());
    if(m_handlingObj->getConnCtx().getConnectionSts())
        ret = EUploaderSts::uploader_connected;

    return ret;
}

// createTransferThread
void CUploaderTransfer::transfer()
{
    printf("transfer()\n");
    //?? need to consider the influence on stack memory; need to consider the suitable size for ftls_write
    #define tmp_buf_len 1024
    char tmp_buf[tmp_buf_len] = {0};

    while(true)
    {
        unsigned int tmp_total_len = 0;
        std::unique_lock<std::mutex> lk(m_mtx);
        m_transfer_sync.wait(lk); 

        EUploaderTransferSts sts = getTransferStatus();
     
        if(EUploaderTransferSts::transferInit == sts) 
            break;

        lk.unlock();

        unsigned int tmp_len = m_offset;
        int fd = open(m_file,O_RDWR, 0777);
        if (fd == -1) {
            fprintf(stderr, "Open failed : %s\n",
            strerror(errno));
            return;
        }
        lseek(fd, 0, SEEK_SET);
        tmp_total_len = lseek(fd, 0, SEEK_END);
        lseek(fd, m_offset, SEEK_SET);

        unsigned int ret = 0;
        while(tmp_len < tmp_total_len)
        {
            size_t len = read(fd, tmp_buf, tmp_buf_len);
                
            //??need to process the return code
            ret = m_conn->write((unsigned char*)tmp_buf, tmp_len, len, (UINT8*)m_file, tmp_total_len); // 成功 0

            if(ret)
            //big issue: there is not corresponding process to hanlde the error return??
                break;
            tmp_len += len; 
        }
         close(fd);
        
        m_transferedLen = tmp_len;
        //resetFileCtx();
        lk.lock();
        if(ret == 0)
            setTransferStatus(EUploaderTransferSts::threadCreated);
        else
            setTransferStatus(EUploaderTransferSts::transferErr);
        lk.unlock();
    }

}
void CUploaderTransfer::createTransferThread() 
{
    printf("createTransferThread\n");
    std::thread tmp_t(&CUploaderTransfer::transfer, this);
    tmp_t.detach();
    setTransferStatus(EUploaderTransferSts::threadCreated);// m_transferSts = threadCreated;
}
int CUploaderTransfer::startTransferThread() 
{
    std::unique_lock<std::mutex> lk(m_mtx);
    setTransferStatus(EUploaderTransferSts::transferOngoing);
    lk.unlock();
    printf("m_transfer_sync.notify_one();++++++++++++++++++++++\n");
    m_transfer_sync.notify_one();
}
unsigned int CUploaderTransfer::configTransfer(const char* file, unsigned int offset)
{

    unsigned int ret = e_transfer_invalid_req;
    
    switch (m_transferSts)
    {
    case EUploaderTransferSts::transferErr:
        ret = e_transfer_error;
        break;
    case EUploaderTransferSts::transferInit:
        ret = e_transfer_requestWhenInit;
        break;
    case EUploaderTransferSts::threadCreated:
        if(file == m_file && offset == m_offset)
            ret = e_transfer_repeat_finished;
        else
        {
            m_file = file;
            m_offset = offset;

            ret = e_transfer_ok;
        }
        break;
#if 0
    case EUploaderTransferSts::threadCreated:
        m_file = file;
        m_offset = offset;
        ret = 0;
        break;
#endif
    case EUploaderTransferSts::transferOngoing:
        if(file == m_file && offset == m_offset)
            ret = e_transfer_repeat_req;
        else
            ret = e_transfer_busy;
        break;
    default:
        break;
    }
    if(ret == e_transfer_ok)
        m_transferedLen = 0;

    return ret;
}
int CUploaderTransfer::stopTransferThread() 
{
    std::unique_lock<std::mutex> lk(m_mtx);
    //if(getTransferStatus() == EUploaderTransferSts::transferOngoing)
    ////?? real error code
    //    return 1;

    setTransferStatus(EUploaderTransferSts::transferInit);
    lk.unlock();
    m_transfer_sync.notify_one();
    return 0;
}
enum EUploaderTransferSts CUploaderTransfer::getTransferStatus() 
{
    //std::lock_guard<std::mutex> lck(m_mtx);
    return m_transferSts;
}
void CUploaderTransfer::setTransferStatus(enum EUploaderTransferSts sts) 
{
    //std::lock_guard<std::mutex> lck(m_mtx);
    m_transferSts = sts;
}

} // namespace mirrorDataManager 
} // namespace atd


