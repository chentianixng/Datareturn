#include "RQueue.h"
// template class Ringbuf<od_msg_t>;
int main(int argc, char *argv[])
{
	uint32_t dataNum_max = 5 ;
	bool flag = true;
	int count = 0;
	enum ETASK Task = ETASK::E_OD;
	switch (Task)
	{
	case ETASK::E_OD:
	  {uint32_t od_size = sizeof(buffer_tail_t) + (sizeof(od_msg_t) + ALIGNMENT) * dataNum_max;
		std::shared_ptr<Ringbuf<od_msg_t>> pringbuf = std::make_shared<Ringbuf<od_msg_t>>(SHM_OD,od_size);
		pringbuf->set_ringbuf();
		od_msg_t* demoMsg = new od_msg_t;
		demoMsg->timestamp =0x55555555;
		while (flag) 
		{
			pringbuf->ringbuffer_write(demoMsg);
			printf("write once finished!");
			usleep(500000);
			count++;
		}
		}
		break;
	case ETASK::E_TFL:
		{
		uint32_t tfl_size = sizeof(buffer_tail_t) + (sizeof(tfl_msg_t) + ALIGNMENT) * dataNum_max;
		std::shared_ptr<Ringbuf<tfl_msg_t>> tfl_pringbuf = std::make_shared<Ringbuf<tfl_msg_t>>(SHM_TFL,tfl_size);
		}
		break;
	case ETASK::E_LD:
		{
		uint32_t ld_size = sizeof(buffer_tail_t) + (sizeof(ld_msg_t) + ALIGNMENT) * dataNum_max;
		std::shared_ptr<Ringbuf<ld_msg_t>> ld_pringbuf = std::make_shared<Ringbuf<ld_msg_t>>(SHM_LD,ld_size);
		}
		break;
	default:
		break;
	}
	return E_Return_Type::E_OK;
}