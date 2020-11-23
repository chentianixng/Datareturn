#!/bin/bash

PROJ_PATH=/home/igs/ctx
PROJ_NAME=shmDemo
#copy source files
rsync -av  ../../${PROJ_NAME}  connectHostQnx:${PROJ_PATH}

#sign in & compile
ssh connectHostQnx << sshRemote
cd ${PROJ_PATH}/${PROJ_NAME}
bash build_q++.sh
exit
sshRemote

echo send and compile done!
