cmake_minimum_required(VERSION 3.0)
 
# Define project name
project(shmDemo)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake ${CMAKE_MODULE_PATH})

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -std=c++11 -O3 -D_QNX_SOURCE -Wall -fPIC -fopenmp")
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -std=c++11 -D_QNX_SOURCE -Wall  -fPIC -fopenmp")

INCLUDE_DIRECTORIES(
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/include_common
)
LINK_DIRECTORIES(
	${CMAKE_CURRENT_SOURCE_DIR}/lib
	$ENV{QNX_TARGET}/aarch64le/usr/lib
)

# ------------------------------------------
ADD_EXECUTABLE(dataMirrorDemo 
	src/dataMirrorDemo.cpp
	src/GLogHelper.cpp

)
target_link_libraries(dataMirrorDemo glog
)

# ADD_EXECUTABLE(server
# src/server.cpp
# src/GLogHelper.cpp
# )
# target_link_libraries(server
# glog
# )

ADD_EXECUTABLE(dataUploader
src/dataUploadDemo.cpp
src/server.cpp
src/GLogHelper.cpp
src/MirrorDataManager_Uploader.cpp
src/ftls_stub.cpp
)
target_link_libraries(dataUploader glog socket)