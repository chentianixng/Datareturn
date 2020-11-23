#ifndef __GLOG__HELPER__H__
#define __GLOG__HELPER__H__


#include <glog/logging.h>
#include <glog/raw_logging.h>

// #include "lcm/lcm-cpp.hpp"
// #include "exlcm/DiagInfo.hpp"

// static const bool EnableLCM = true;
// enum LogS{ INFO = 0, WARNING, ERROR, FATAL};
// void gLogLcm(LogS logS, std::string& str);
// void gLogLcm(LogS logS, std::string&& str);

void SIGSEGVSignalHandle(const char* data, int size);
class GLogHelper
{
public:

  GLogHelper(char* program, char* LogPath = NULL);
  ~GLogHelper();

};




#endif