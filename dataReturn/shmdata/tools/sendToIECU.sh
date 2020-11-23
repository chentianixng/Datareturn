#!/bin/bash
PRJNAME=../shmDemo_iecu

cp ../build/shmServer		$PRJNAME
cp ../build/shmClient		$PRJNAME

scp -r $PRJNAME connectIecuQnx:/opt/Free_eMMC2/ctx/

