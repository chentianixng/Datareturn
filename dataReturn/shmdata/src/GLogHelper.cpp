#include <stdlib.h>
#include "GLogHelper.h"
// #include <mutex>
// #include <memory>
//将信息输出到单独的文件和 LOG(ERROR)
void SIGSEGVSignalHandle(const char* data, int size)
{
  std::string str = std::string(data,size);
  LOG(ERROR) << "SignalHandle()";
  LOG(ERROR)<<str;
}

// static lcm::LCM& GetDiagLcm()
// {
//   static std::once_flag flag;
//   static lcm::LCM* pLcmDiag;
//   std::call_once(flag,
//                 [&]() { pLcmDiag = new lcm::LCM("udpm://239.255.76.67:7667?ttl=1"); });
//   return *pLcmDiag;
// }

// void gLogLcm(LogS logS, std::string& str)
// {
//   std::string tmpStr(str);
//   gLogLcm(logS, std::move(tmpStr));
// }

// void gLogLcm(LogS logS, std::string&& str)
// {
//   // static lcm::LCM lcmDiag("udpm://239.255.76.67:7667?ttl=1");
//   auto& lcmDiag = GetDiagLcm();
//   switch (logS){
//     case LogS::INFO:
//       LOG(INFO) << str;
//       break;
      
//     case LogS::WARNING:
//       LOG(WARNING) << str;
//       break;

//     case LogS::ERROR:
//       LOG(ERROR) << str;
//       if(EnableLCM)
//       {
//         exlcm::DiagInfo diagInfo;
//         diagInfo.strInfo = str + '\n';
//         lcmDiag.publish("AIServiceDiag", &diagInfo);
//       }
//       break;

//     case LogS::FATAL:
//       LOG(FATAL) << str;
//       if(EnableLCM)
//       {
//         exlcm::DiagInfo diagInfo;
//         diagInfo.strInfo = str + '\n';
//         lcmDiag.publish("AIServiceDiag", &diagInfo);
//       }
//       break;
//   }
// }

//GLOG配置：
GLogHelper::GLogHelper(char* program, char* LogPath)
{
    
  // This won't change the log destination. If you want to set this
  // value, you should do this before google::InitGoogleLogging .
  if (LogPath != NULL)
    FLAGS_log_dir = LogPath;

  google::InitGoogleLogging(program);
  FLAGS_logbufsecs        = 0;        //缓冲日志输出，默认为30秒，此处改为立即输出
  FLAGS_max_log_size      = 10;  //最大日志大小为 10MB
  FLAGS_stop_logging_if_full_disk = true;     //当磁盘被写满时，停止日志输出
  
  google::InstallFailureSignalHandler();      //捕捉 core dumped
  google::InstallFailureWriter(&SIGSEGVSignalHandle);    //默认捕捉 SIGSEGV 信号信息输出会输出到 stderr，可以通过下面的方法自定义输出>方式：
}
//GLOG内存清理：
GLogHelper::~GLogHelper()
{
  google::ShutdownGoogleLogging();
}