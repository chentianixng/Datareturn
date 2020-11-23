#ifndef __DATA__MIRROR__H__
#define __DATA__MIRROR__H__
#include "RQueue.h"
#include <type_traits>
#include <future>
#include <functional>
#include <thread>
#include "MirrorDataManager_Uploader.hpp"

using namespace atd::mirrorDataManager;

class DataMirror : public ShmServerBase 
{
private:
	std::atomic<bool> m_readyFlag;
	std::atomic<bool> m_writeFinishFlag;
	uint32_t m_offset;
	CUploader* m_uploader;
	std::thread m_writeFile_thread;
	std::thread m_upLoader_thread;
public:
	DataMirror(const std::string shmKey , const uint32_t Shmsize, const char* filename):
	ShmServerBase(shmKey , Shmsize, filename),
	m_offset(0), m_uploader(CUploader::Get()){
	m_uploader->Init();
	m_readyFlag.store(true);
	m_writeFinishFlag.store(false);
	};
	~DataMirror();
	//const char* getfilename() const {return m_filename;};
	void uploader_func();
	uint32_t writeFile_func();
	uint32_t startWrite();
	uint32_t finishWrite();
	uint32_t startUpload();
};

// DataMirror::DataMirror(const std::string shmKey , const uint32_t Shmsize, const char* filename):
// ShmServerBase(shmKey , Shmsize, filename),
// m_offset(0), m_uploader(CUploader::Get())
// {
// 	m_uploader->init();
// 	m_readyFlag.store(true);
// 	m_writeFinishFlag.store(false);
// }

DataMirror::~DataMirror()
{
}
void DataMirror::uploader_func()
{
	while(m_readyFlag) 
	{
		auto current_time =std::chrono::system_clock::now();
		m_uploader->Step();
		std::this_thread::sleep_until(current_time+std::chrono::milliseconds(10));
	}
}

uint32_t DataMirror::writeFile_func()
{
	while(m_writeFinishFlag)
	{
		//printf("**************22%s\n",m_filename);
		uint32_t res= m_uploader->Write((const char *)m_filename, m_offset);
		//uint32_t res= m_uploader->Write("OD_MSG_0.dat", m_offset);
		if (res == EMirrorDataRetCode::e_md_uploader_finished)
		{
			m_writeFinishFlag.store(false);
		}
		int i =0;
		//printf("*******i = %d   res = %d\n",i++, res);
	}
	return E_Return_Type::E_OK;
}

uint32_t DataMirror::startWrite()
{
	m_writeFinishFlag.store(true);
	m_writeFile_thread =std::thread(&DataMirror::writeFile_func ,this);
	return E_Return_Type::E_OK;
}

uint32_t DataMirror::finishWrite()
{
	while(!m_writeFinishFlag)
	{
	if (m_writeFile_thread.joinable())
	{
		m_writeFile_thread.join();
	}
	return E_Return_Type::E_OK;
	}
	return E_Return_Type::E_OK;
}

uint32_t DataMirror::startUpload()
{
	m_upLoader_thread = std::thread(&DataMirror::uploader_func,this);
	m_upLoader_thread.detach();
	return E_Return_Type::E_OK;
}

#endif