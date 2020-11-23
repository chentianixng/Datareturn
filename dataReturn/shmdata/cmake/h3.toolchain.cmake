set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

set(CMAKE_C_COMPILER aarch64-poky-linux-gcc)
set(CMAKE_CXX_COMPILER aarch64-poky-linux-g++)
set(CMAKE_C_FLAGS "-march=armv8-a -mtune=cortex-a57.cortex-a53 ${CMAKE_C_FLAGS}")
set(CMAKE_CXX_FLAGS "-march=armv8-a -mtune=cortex-a57.cortex-a53 ${CMAKE_CXX_FLAGS}")

set(CMAKE_SYSROOT "/opt/poky/2.4.2/sysroots/aarch64-poky-linux/")

set(CMAKE_FIND_ROOT_PATH "/opt/poky/2.4.2/sysroots/aarch64-poky-linux/")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE BOTH)

