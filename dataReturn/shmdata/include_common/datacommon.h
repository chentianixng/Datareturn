#include<map>
#include <iostream>
#include <stdio.h>
#define SAIC_ERROR(format, ...) printf(format, ##__VA_ARGS__)
#define SAIC_ASSERT(x)                                            \
    {                                                            \
			int res = (x);                                           \
			if (!res) {                                              \
					SAIC_ERROR("Error for %s, %d\n", __FILE__, __LINE__); \
			}                                                        \
    }
enum E_Trigger_Event_Type
{
	E_NONE = 0,
	E_BRAKE = 1,
};
enum E_Return_Type
{
	E_OK = 0,
	E_RINGBUF_ERROR,
	E_CREATEBUFFER_FAIL,
	E_SET_RINGBUFFER_FAIL,
  E_SERVER_SHMEMORY_OPEN_FAIL,
};
typedef struct DM_OD
{
  int8_t     camera_id;
  int8_t     object_id;
  float      bbox[4];
  float      pts[8];
  float      heading;
  int8_t     label;
  float      score;
  float      distance[2];
  float      distance_std[2];
  float      rel_vel[2];
  float      rel_acc[2];
  float      length;
  float      width;
  float      height;
  int8_t     lane_assignment;
  int8_t     right_out_of_image;
  int8_t     left_out_of_image;
  int8_t     top_out_of_image;
  int8_t     bottom_out_of_image;
}DM_OD_t;
typedef struct od_msg 
{
  int64_t    timestamp;
  int32_t    num_objs;
  int64_t    frame_id;
  int64_t    nt;
  int64_t    ndt;
  int16_t    CIPV_ID;
  int8_t     CIPU_Lost;
  int32_t    pixel_ranges;
  uint8_t  pic_data[512*384*3];
  DM_OD_t objects[5];
}od_msg_t;
typedef struct ld_msg
{

}ld_msg_t;
typedef struct tfl_msg
{

}tfl_msg_t;

	typedef struct _SingalTFLinfo
	{
			float      S_fTFL_Existence_Probability;
		 	int8_t     S_nTFL_Object_ID;
			int8_t     S_nTFL_LightBox_ID;
			int8_t     S_nTFL_Source;
			int8_t     S_nTFL_Mode;
			int8_t     S_nTFL_Color;
			int8_t     S_nTFL_Shape;
			float      S_fTFL_Long_Distance;
			float      S_fTFL_Lat_Distance;
			float      S_fTFL_Rel_Height;
			float      S_fReserved[4];
			int8_t     S_nReserved[4];
	}SingalTFLinfo;

typedef struct  _FrameTFLInfo
	{
			int64_t    S_nTimeStamp;
			uint8_t    S_nFrameID;
			int16_t    S_nCounter;
			int64_t    S_nImageTimeStamp;
			int8_t     S_bLight;
			float      S_fDist2Light;
			int64_t    S_nt;
			int64_t    S_ndt;
			int8_t     S_nStraightLightState;
			int16_t    S_nStraightTimeLeft;
			int8_t     S_nLeftLightState;
			int16_t    S_nLeftTimeLeft;
			int8_t     S_nRightLightState;
			int16_t    S_nRightTimeLeft;
			int8_t     S_nUTurnLightState;
			int16_t    S_nUTurnTimeLeft;
			SingalTFLinfo sTI[10];
			float      S_fReserved[4];
			int8_t     S_nReserved[4];
			uint8_t    S_picdata[640*320];       //压缩图像
	}FrameTFLInfo;

typedef struct buffer_tail
{
  pthread_mutex_t buffer_mutex;
  enum E_Trigger_Event_Type trigger_event;
} buffer_tail_t;


enum ETASK
{
	E_OD = 0,
	E_TFL,
	E_LD,
};
// const std::map<int, std::string> TASKBUFSIZE = {
// 	{ETASK::E_OD, OD_BUF},
// 	{ETASK::E_TFL, TFL_BUF},
// 	{ETASK::E_LD, LD_BUF}
// }
class ShmBase
{
private:
public:
  ShmBase(){};
  ~ShmBase(){};
  virtual uint32_t init() = 0;
  virtual void* getShmAddr() = 0;
};