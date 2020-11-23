#include "datamirror.h"
// template class Ringbuf<od_msg_t>;
int main(int argc, char *argv[])
{
	uint32_t numODMsg = 5 ;
	bool flag = true;
	int countSeconds = 0;
	uint32_t retval = 0;
	std::future<uint32_t> result_writeFile;
	uint32_t size = sizeof(buffer_tail_t) + (sizeof(FrameTFLInfo) + ALIGNMENT) * 20;
	std::shared_ptr<DataMirror> pDataMirror = std::make_shared<DataMirror>("/dev/shmem/shmodtt",size,"test_MSG");

	uint32_t size_OD = sizeof(buffer_tail_t) + (sizeof(od_msg_t) + ALIGNMENT) * 5;
	std::shared_ptr<DataMirror> pDataMirrorOD = std::make_shared<DataMirror>(SHM_OD,size_OD,"OD_MSG");
	
	// uint32_t size = sizeof(pthread_mutex_t) + (sizeof(tfl_msg_t) + ALIGNMENT) * numTFLMsg;
	// std::shared_ptr<ShmServerBase> pShmServerBase = std::make_shared<ShmServerBase>(SHM_TFL,size);
	// uint32_t size = sizeof(pthread_mutex_t) + (sizeof(ld_msg_t) + ALIGNMENT) * numLDMsg;
	// std::shared_ptr<ShmServerBase> pShmServerBase = std::make_shared<ShmServerBase>(SHM_LD,size);
	retval = pDataMirror->init();
	retval = pDataMirror->config_shm();
	pDataMirror->startUpload();

	pDataMirrorOD->init();
	pDataMirrorOD->config_shm();
	pDataMirrorOD->startUpload();

	while (flag)
	{
		/* code */
		if (countSeconds > 20) // 测试上传策略 20s后上传.
		{
			flag = false;
			retval = pDataMirror->saveBuffer2File();
			pDataMirrorOD->saveBuffer2File();
            //const char *t = pDataMirror->getfilename();
			if (retval==E_Return_Type::E_OK)
			{
				printf("file save finished\n");
			}		
		}
		countSeconds++;
		sleep(1);
	}
	printf("**************112 %s\n",pDataMirror->getfilename());
	pDataMirror->startWrite();
	pDataMirrorOD -> startWrite();
	while (1)
	{
		sleep(1);
	}
	
	return E_Return_Type::E_OK;
}