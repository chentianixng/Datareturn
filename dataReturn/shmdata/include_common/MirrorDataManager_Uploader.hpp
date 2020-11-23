#ifndef MODULES_MIRRORDATAMANAGER_UPLOADER_H
#define MODULES_MIRRORDATAMANAGER_UPLOADER_H

#include <stdio.h>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "vssapi.h"
#include "vsstype.h"
#include "MirrorDataManager_Entry.hpp"

namespace atd {
namespace mirrorDataManager {

class CConnectionCtx;

enum EUploaderTransferSts {
    transferInit= 0,
    threadCreated,//transfer thread is created
    transferOngoing,//transfer is ongoing
    transferErr,//transfer meet with err
};

class CUploaderTransfer {
public:
    enum ETransferErrCode {
        e_transfer_ok,
        e_transfer_error,
        e_transfer_invalid_req,
        e_transfer_repeat_req,//same request with current processed one
        e_transfer_repeat_finished,//current processed one is done
        e_transfer_busy, //different with current processing one
        e_transfer_requestWhenInit//request write when system is just inited
    };
public:
    CUploaderTransfer(CConnectionCtx* connctx): m_file(nullptr), 
        m_conn(connctx), m_transferedLen(0), m_transferSts(EUploaderTransferSts::transferInit) {}
    void createTransferThread();
    int startTransferThread();
    int stopTransferThread();
    enum EUploaderTransferSts  getTransferStatus();
    void setTransferStatus(enum EUploaderTransferSts);
    void transfer();
    void resetFileCtx()
    {
        m_file = nullptr;
        m_offset = 0;
    }
    unsigned int getTransferredLen()
    {
        return m_transferedLen;
    }
    unsigned int configTransfer(const char* file, unsigned int offset); // m_file = file; m_offset = offset;
private:
    std::condition_variable m_transfer_sync;
    std::mutex m_mtx;
    const char* m_file;
    unsigned int m_offset;
    unsigned int m_transferedLen;
    enum EUploaderTransferSts m_transferSts;
    //??not a good case, since too many unnecessary interface are explored to CUploaderTransfer
    CConnectionCtx* m_conn;
};

// const char* httpHeader = 
//             "POST /pdss_dl/upload HTTP/1.1\r\nUser-Agent: Apache-HttpClient/4.5.6\r\nHost: %s:%d\r\n" \
//             "Content-Length: %d\r\nContent-Type: multipart/form-data; boundary=dataRecorder-boundary\r\n" \
//             "Connection: Keep-Alive\r\n\r\n";

// const char* contentHeader = 
//             "--dataRecorder-boundary\r\n"\
//             "Content-Disposition: form-data; name=\"file\"; filename=\"%s\"\r\n"\
//             "Content-Type: application/octet-stream\r\n"\
//             "Content-Range: bytes %d-%d/%d\r\n"\
//             "Content-Transfer-Encoding: binary\r\n\r\n";

// const char* httpEnd = "--dataRecorder-boundary--\r\n";

#define httpHeader \ 
            "POST /pdss_dl/upload HTTP/1.1\r\nUser-Agent: Apache-HttpClient/4.5.6\r\nHost: %s:%d\r\n" \
            "Content-Length: %d\r\nContent-Type: multipart/form-data; boundary=dataRecorder-boundary\r\n" \
            "Connection: Keep-Alive\r\n\r\n"

#define contentHeader \ 
            "--dataRecorder-boundary\r\n"\
            "Content-Disposition: form-data; name=\"file\"; filename=\"%s\"\r\n"\
            "Content-Type: application/octet-stream\r\n"\
            "Content-Range: bytes %d-%d/%d\r\n"\
            "Content-Transfer-Encoding: binary\r\n\r\n"

#define httpEnd  "--dataRecorder-boundary--\r\n"
class CHttpPackGen {
#define FTLSWRITELEN 2032
public:
    CHttpPackGen(): file_len(0), httpEnd_len(strlen(httpEnd)), httpHeader_len(0), contentHeader_len(0) {
        p = new char[FTLSWRITELEN];        
        memset(p, 0, FTLSWRITELEN);
    }
    ~CHttpPackGen()
    {
        delete p;
    }
    unsigned int returnHttpPack(const char** out)
    {
        *out = p;
        
        return file_len + httpEnd_len + httpHeader_len + contentHeader_len;
    }
    //len is the length of the current poyload, may not be the total length of the file
    int generateHeader(const char* ip, unsigned int port, const char* fileName, unsigned int len, unsigned int start, unsigned int file_total_len)
    {
        int ret = 0;
        char temp_buf[32] = {0};

        memset(p, 0, FTLSWRITELEN);
        file_len = len;

        total_file_len = file_total_len;
        trunk_start = start;
        trunk_end = start + len;

        unsigned int temp_start = snprintf(temp_buf, 32, "%d", trunk_start);//4
        unsigned int temp_end = snprintf(temp_buf, 32, "%d", trunk_end);//4
        unsigned int temp_total_file_len = snprintf(temp_buf, 32, "%d", total_file_len);

        unsigned int tmp_len = len + strlen(httpEnd) - strlen("%s") - 2*strlen("%d") + strlen(contentHeader) + strlen(fileName) + temp_start + temp_end + temp_total_file_len;
        ret = snprintf(p, FTLSWRITELEN, httpHeader, ip, port, tmp_len, fileName);
        httpHeader_len = strlen(p);
        ret = snprintf(p+httpHeader_len, FTLSWRITELEN, contentHeader, fileName, trunk_start, trunk_end, total_file_len);
        contentHeader_len = strlen(p) - httpHeader_len;

        if(httpEnd_len + httpHeader_len + contentHeader_len + len >= FTLSWRITELEN)
        {
            //std::cout << "file write length overflow" << std::endl;
            //real error code needed??
            return 1;
        }

        return ret;
    }
    unsigned int fillData(const char* data)
    {
        memcpy(p+httpHeader_len+contentHeader_len, data, file_len);
    }
    int generateEnd()
    {
        //ret = snprintf(p+httpHeader_len+contentHeader_len+file_len, strlen(httpEnd), "%s", httpEnd);
        memcpy(p+httpHeader_len+contentHeader_len+file_len, (httpEnd), strlen(httpEnd));
    }

private:
    char* p;
    unsigned int file_len;
    unsigned int total_file_len;
    unsigned int trunk_start;
    unsigned int trunk_end;
    unsigned int httpHeader_len;
    unsigned int contentHeader_len;
    unsigned int httpEnd_len;
};

enum EUploaderSts {
    uploader_unconnected = 0,
    uploader_connecting,
    uploader_connected,
    uploader_writing,
    uploader_sts_total
};

class CUploader;

class CFsmUnconnected: public CFsmBase<CUploader> {
public:
    CFsmUnconnected(unsigned int sts_index, CUploader* uploader): CFsmBase(sts_index, uploader) {}
    unsigned int step(unsigned int evt_index) override;
};

class CFsmConnected: public CFsmBase<CUploader> {
public:
    CFsmConnected(unsigned int sts_index, CUploader* uploader): CFsmBase(sts_index, uploader) {}
    unsigned int step(unsigned int evt_index) override;
};
class CFsmConnecting: public CFsmBase<CUploader> {
public:
    CFsmConnecting(unsigned int sts_index, CUploader* uploader): CFsmBase(sts_index, uploader) {}
    unsigned int step(unsigned int evt_index) override;
};
class CFsmWriting: public CFsmBase<CUploader> {
public:
    CFsmWriting(unsigned int sts_index, CUploader* uploader): CFsmBase(sts_index, uploader) {}
    unsigned int step(unsigned int evt_index) override;
};
//ensure the mutex m_conn_mtx is called only once in one thread to avoid dead lock??
class CConnectionCtx {
#define ip_len 16
public:
    CConnectionCtx():m_sock(0), m_connected(false), port(0), m_conn_mtx(),
        m_httpPack() 
    {
        memset((void*)(ip), 0, ip_len);
        memset(&m_ftls_ctx, 0, sizeof(m_ftls_ctx));
        //??real call back for someip communication
        //m_someip_cbk = ;
    }
    unsigned int buildConnection();
    unsigned int closeConnection();
    void setIP(const unsigned char* ip_in, unsigned int port_in) {
        printf("********setIp()****\n");
        memcpy((void*)(ip), ip_in, ip_len);
        port = port_in;
    }
    void getIP(const char** ip_out, unsigned int* port_out)
    {
        *ip_out = ip;
        *port_out = port;
    }
    unsigned int write(UINT8* data, UINT32 start_byte, UINT32 len, UINT8* fileName, UINT32 file_total_len); 
    bool getConnectionSts() {
        std::lock_guard<std::mutex> tmp_mutex(m_conn_mtx);
        return m_connected;
    }
private:
    CHttpPackGen m_httpPack;
    void setConnectionSts(bool sts) {
        std::lock_guard<std::mutex> tmp_mutex(m_conn_mtx);
        
        m_connected = sts;
    }
    FTLS_CTX m_ftls_ctx;
    int m_sock;
    bool m_connected;
    unsigned int port;
    char ip[ip_len];
    ::someip_io_cb* m_someip_cbk;
    std::mutex m_conn_mtx;
};

enum EUploaderInternalEvt {
    evt_null,
    evt_writeReqViaUnconnected,
    evt_all
};
class CUploader {
public:
    unsigned int Init();
    //unsigned int Write(unsigned char* data, unsigned int len);
    unsigned int Write(const char* file, unsigned int offset);
    void Step();
    static CUploader* Get();
    unsigned int GetWritedLen()
    {
        return m_transfer.getTransferredLen();
    }
    EUploaderInternalEvt getInterEvt()
    {
        return m_internalEvt;
    }
    void resetInterEvt()
    {
        m_internalEvt == evt_null;
    }
private:
    CUploader():m_connCtx(), m_internalEvt(EUploaderInternalEvt::evt_null), 
    m_stsUnconnected(EUploaderSts::uploader_unconnected, this),
    m_stsConnecting(EUploaderSts::uploader_connecting, this),  
    m_stsConnected(EUploaderSts::uploader_connected, this),
    m_stsWriting(EUploaderSts::uploader_writing, this),
    //m_connThread(&CConnectionCtx::buildConnection, &m_connCtx),
    m_curSts(&m_stsUnconnected), connFreeLimit(1000),
    m_freeTime(0), m_transfer(&this->getConnCtx())
    {}
    ~CUploader() {
        delete(m_instance);
    }
    EUploaderInternalEvt m_internalEvt;
    CFsmBase<CUploader>* getFsmSts(unsigned int sts_index) 
    {
        CFsmBase<CUploader>* ArrSts[] = 
        {
            &m_stsUnconnected, &m_stsConnecting, &m_stsConnected, &m_stsWriting 
        };

        if(sts_index >= EUploaderSts::uploader_sts_total)
            return NULL;

        return ArrSts[sts_index];
    }
    CConnectionCtx& getConnCtx() {
        return m_connCtx;
    } 
    CUploaderTransfer& getTransferCtx() {
        return m_transfer;
    } 
    const unsigned int getConnFreeTime() {
        return m_freeTime;
    }
    void resetConnFreeTime() {
        m_freeTime = 0;
    }
    void setConnFreeTime() {
        m_freeTime++;
    }
    const unsigned int connFreeLimit;
    static CUploader* m_instance;
    unsigned int m_freeTime;
    CConnectionCtx m_connCtx; 
    CFsmBase<CUploader>* m_curSts;
    CFsmConnected m_stsConnected;
    CFsmConnecting m_stsConnecting;
    friend CFsmUnconnected;
    friend CFsmConnected;
    friend CFsmConnecting;
    friend CFsmWriting;
    CFsmUnconnected m_stsUnconnected;
    CFsmWriting m_stsWriting;
    CUploaderTransfer m_transfer;
    //since the ftls connection cause too much time(>100ms?), need to have a separte thread to handle the connection
    //std::thread m_connThread;
};        

} // namespace mirrorDataManager 
} // namespace atd
#endif
