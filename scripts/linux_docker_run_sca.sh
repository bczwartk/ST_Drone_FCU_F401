#!/bin/bash -x


SANDBOX=`pwd`/sandbox
rm -rf ${SANDBOX}
mkdir ${SANDBOX}

pushd ${SANDBOX}
# clone the project
git clone https://github.com/bczwartk/ST_Drone_FCU_F401.git -b cpptest_use_portable_ds
ls -l ./ST_Drone_FCU_F401/

# build the project in STM32CubeIDE

# trace the build into BDF

# run sca

popd



