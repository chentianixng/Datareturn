#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include "RQueue.h"
#include <sstream>
// ShmServerBase::ShmServerBase(const std::string shmKey , const uint32_t Shmsize) : 
// 	ShmBase(),m_fd(-1), mShmKey(shmKey),mShmsize(Shmsize),
// 	m_DataSize(mShmsize-sizeof(pthread_mutex_t))
// {}

ShmServerBase::~ShmServerBase()
{
	shm_unlink(mShmKey.c_str());
}
uint32_t ShmServerBase::init()
{
	//configure and init share memory
	shm_unlink(mShmKey.c_str());
	m_fd = shm_open( mShmKey.c_str(), O_RDWR | O_CREAT, 0777 );
	if( m_fd == -1 ) {
		LOG(ERROR)<<"Open share memery failed: "<<strerror( errno );
		return E_Return_Type::E_SERVER_SHMEMORY_OPEN_FAIL;
	}
	/* Set the memory object's size */
	if( ftruncate( m_fd, mShmsize ) == -1 ) {
		LOG(ERROR)<<"ftruncate failed: "<<strerror( errno );
		return E_Return_Type::E_SERVER_SHMEMORY_OPEN_FAIL;
	}
	/* Map the memory object */
	mPShmAddr = mmap( 0, mShmsize, PROT_READ | PROT_WRITE, MAP_SHARED, m_fd, 0 );
	if( mPShmAddr == MAP_FAILED ) {
		LOG(ERROR)<<"mmap failed: "<<strerror( errno );
		return E_Return_Type::E_SERVER_SHMEMORY_OPEN_FAIL;
	}
	memset(mPShmAddr, 0, mShmsize);
	return E_Return_Type::E_OK;;
}
uint32_t ShmServerBase::config_shm()
{
	uint8_t* addr_mutex = (uint8_t*)mPShmAddr + m_DataSize;
	m_buffer_tail = reinterpret_cast<buffer_tail_t*> (addr_mutex) ;
	pthread_mutexattr_t attrmutex;
	pthread_mutexattr_init(&attrmutex);
	pthread_mutexattr_setpshared(&attrmutex, PTHREAD_PROCESS_SHARED);
	pthread_mutex_init(&m_buffer_tail->buffer_mutex, &attrmutex);
	return E_Return_Type::E_OK;
}
uint32_t ShmServerBase::saveBuffer2File()
{
	std::stringstream filename;
	filename<<m_filename<<"_"<<m_buffer_tail->trigger_event<<".dat";
   
	m_tmpfilename = filename.str();
	m_filename = m_tmpfilename.c_str();

	std::ofstream outFile(filename.str(), std::ofstream::out | std::ofstream::binary | std::ofstream::app);
	pthread_mutex_lock(&m_buffer_tail->buffer_mutex);
	outFile.write((char*)mPShmAddr, m_DataSize);
	pthread_mutex_unlock(&m_buffer_tail->buffer_mutex);
	outFile.close();
	return E_Return_Type::E_OK;
}
void* ShmServerBase::getShmAddr()
{
	return mPShmAddr;
}

// int main(int argc, char *argv[])
// {
// 	uint32_t numODMsg = 20 ;
// 	bool flag = true;
// 	int countSeconds = 0;
// 	uint32_t retval = 0;
// 	uint32_t size = sizeof(buffer_tail_t) + (sizeof(od_msg_t) + ALIGNMENT) * numODMsg;
// 	std::shared_ptr<ShmServerBase> pShmServerBase = std::make_shared<ShmServerBase>(SHM_OD,size);
// 	// uint32_t size = sizeof(pthread_mutex_t) + (sizeof(tfl_msg_t) + ALIGNMENT) * numTFLMsg;
// 	// std::shared_ptr<ShmServerBase> pShmServerBase = std::make_shared<ShmServerBase>(SHM_TFL,size);
// 	// uint32_t size = sizeof(pthread_mutex_t) + (sizeof(ld_msg_t) + ALIGNMENT) * numLDMsg;
// 	// std::shared_ptr<ShmServerBase> pShmServerBase = std::make_shared<ShmServerBase>(SHM_LD,size);
//   retval = pShmServerBase->init();
// 	retval = pShmServerBase->config_shm();
// 	while (flag)
// 	{
// 		/* code */
// 		if (countSeconds > 20)
// 		{
// 			flag = false;
// 			retval = pShmServerBase->saveBuffer2File("testdemo.dat");
// 			if (retval==E_Return_Type::E_OK)
// 			{
// 				printf("file save finished");
// 			}		
// 		}
// 		countSeconds++;
// 		sleep(1);
// 	}
// 	return E_Return_Type::E_OK;
// }