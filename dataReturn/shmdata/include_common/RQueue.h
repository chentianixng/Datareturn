
#ifndef  RQUEUE_H
#define  RQUEUE_H
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/netmgr.h>
#include <sys/neutrino.h>
#include <sys/dispatch.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "datacommon.h"
// 分配的内存大小 使用最后一个字节做读写互斥
#define DATANUM_MAX 20
#define ALIGNMENT 16

#define SHM_OD "/dev/shmem/shmod"
#define SHM_OTHER  "/dev/shmem/shmother"
#define SHM_LD  "/dev/shmem/shmld"
#define SHM_TFL  "/dev/shmem/shmTFL"
#define MAGIC 0xAA7f8687
#include "GLogHelper.h" 

template<typename T>
class Ringbuf : public ShmBase
{
private:
struct alignas(16) ringbuf_rec
{
	int32_t  magic;
	enum E_Trigger_Event_Type trigger_event;
	uint32_t dataNum;
	uint32_t  length;
};
int m_fd;
const std::string mShmKey;
uint32_t mShmsize;
uint8_t* m_data;
uint8_t* m_tail;
uint32_t   m_bufsize;
// std::atomic<int> m_event_flag;
buffer_tail_t* m_buffer_tail;
ringbuf_rec m_ringbuf_rec;
const uint32_t m_dataLength;
void* mPShmAddr;
Ringbuf(const Ringbuf& other) = delete; 
Ringbuf& operator=(const Ringbuf&) = delete; 
public:
	Ringbuf(const std::string shmKey , const uint32_t Shmsize): 
	ShmBase(),m_fd(-1), mShmKey(shmKey),mShmsize(Shmsize),m_data(nullptr),
	m_tail(nullptr),m_dataLength(sizeof(ringbuf_rec)+sizeof(T)){
		memset(&m_ringbuf_rec, 0, sizeof(ringbuf_rec));
		m_bufsize = Shmsize-sizeof(buffer_tail_t);
	};
	~Ringbuf(){
		if(m_fd !=- 1)
		{
			close(m_fd);
		}
		shm_unlink(mShmKey.c_str());
	};
	uint32_t set_ringbuf()
	{
		m_tail = m_data = (uint8_t*)ringbuf_create();
		if (ringbuf_test_self() != E_Return_Type::E_OK)
	  {
			return E_Return_Type::E_SET_RINGBUFFER_FAIL;
	  }
		uint8_t * addr_mutex = m_data + m_bufsize;
		m_buffer_tail = reinterpret_cast<buffer_tail_t*> (addr_mutex);
		m_ringbuf_rec.magic = MAGIC;
		m_ringbuf_rec.dataNum = 0;
		m_ringbuf_rec.length = sizeof(T);
		// pthread_mutexattr_init(&attrmutex);
		// pthread_mutexattr_setpshared(&attrmutex, PTHREAD_PROCESS_SHARED);
		// pthread_mutex_init(m_mutex, &attrmutex);
		return E_Return_Type::E_OK;
	};
	virtual uint32_t ringbuf_test_self()
	{
		if (m_data == nullptr) {
		SAIC_ASSERT(m_tail == nullptr);
		return E_Return_Type::E_OK;
		}
		if (m_data == m_tail)
		{
		if (m_bufsize % m_dataLength == 0)
  	return E_Return_Type::E_OK;
		}
	return E_Return_Type::E_RINGBUF_ERROR;
	};
	virtual void ringbuf_alloc(){
		if (m_tail + m_dataLength == m_data + m_bufsize)
		{
			m_tail = m_data;
			// m_head += m_dataLength;
		}
		m_tail += m_dataLength;
		if (m_ringbuf_rec.dataNum == DATANUM_MAX)
		{
			m_ringbuf_rec.dataNum = 0;
		}
		m_ringbuf_rec.dataNum++;
		
		// if (m_tail + m_dataLength == m_head)
		// {
		// 	if (m_head + m_dataLength == m_data + m_bufsize)
		// 	{
		// 		m_head = m_data;
		// 		m_tail += m_dataLength;
		// 	}
		// 	m_head += m_dataLength;
		// 	m_tail += m_dataLength;
		// }
	};
	virtual void* ringbuf_create(){
		if (ringbuf_test_self() != E_Return_Type::E_OK)
		{
			return nullptr;
		}
		if(init()!= 0)
		{
			return nullptr;
		}
		return getShmAddr();
	};
    uint32_t init(){
    /* Create a new memory object */
		int m_fd = shm_open( mShmKey.c_str(), O_RDWR, 0777 );
		if( m_fd == -1 ) {
			LOG(ERROR)<<"Open failed: "<<strerror(errno);
			return EXIT_FAILURE;
		}
		/* Map the memory object */
		mPShmAddr = mmap( 0, mShmsize, PROT_READ | PROT_WRITE, MAP_SHARED, m_fd, 0 );
		if( mPShmAddr == MAP_FAILED ) {
			LOG(ERROR)<<"mmap failed: "<<strerror(errno);
			return EXIT_FAILURE;
		}
		return E_Return_Type::E_OK;
	};
	uint32_t ringbuffer_write(T* msg){
		pthread_mutex_lock(&m_buffer_tail->buffer_mutex);
		m_ringbuf_rec.trigger_event = m_buffer_tail->trigger_event;
		memcpy(m_tail, &m_ringbuf_rec , sizeof(m_ringbuf_rec));
		memcpy(m_tail + sizeof(m_ringbuf_rec), msg , sizeof(T));
		pthread_mutex_unlock(&m_buffer_tail->buffer_mutex);
		ringbuf_alloc();
		return E_Return_Type::E_OK;	
	}; 
	void* getShmAddr(){return mPShmAddr;};
};


class ShmServerBase : public ShmBase
{
private:
  /* data */
	buffer_tail_t* m_buffer_tail;
	int m_fd;  
	const std::string mShmKey;
	const uint32_t mShmsize;
	void* mPShmAddr;
	uint32_t m_DataSize;
protected:
	const char* m_filename;
	std::string m_tmpfilename;
public:
  ShmServerBase(const std::string shmKey , const uint32_t Shmsize, const char* filename) :
	ShmBase(),m_fd(-1), mShmKey(shmKey),mShmsize(Shmsize),
	m_DataSize(mShmsize-sizeof(buffer_tail_t)),m_filename(filename){};
  ~ShmServerBase();
  	uint32_t init();
	virtual uint32_t config_shm();
	uint32_t saveBuffer2File();
	void* getShmAddr();
	
	const char* getfilename()  {
		printf("return ****8%s\n",m_filename);
		sleep(1);
		return m_filename;};
	uint32_t setfilename(const char* f_name) {
        m_filename = f_name;
	};
};
#endif 
