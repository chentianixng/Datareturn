#!/bin/bash

source /home/igs/qnx_iecu/qnx_safety/qnxsdp-env.sh

cd ./build
cmake -DCMAKE_SYSTEM_VERSION="700" \
        -DCMAKE_SYSTEM_PROCESSOR="aarch64" \
        -DCMAKE_TOOLCHAIN_FILE=./cmake/qnx.toolchain.cmake -G"Unix Makefiles" ..

make -j4

