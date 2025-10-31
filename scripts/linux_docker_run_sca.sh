#!/bin/bash -x

# notes:
# - requires GitHub repo access to be authenticated 
# - requires proper docker image to be available
# - requires that C/C++test Professional isproperly licensed for automation

SANDBOX=`pwd`/sandbox
rm -rf ${SANDBOX}
mkdir ${SANDBOX}

pushd ${SANDBOX}
# clone the project
git clone https://github.com/bczwartk/ST_Drone_FCU_F401.git -b cpptest_use_portable_ds
ls -l ./ST_Drone_FCU_F401/

# build the project in STM32CubeIDE
docker run -v `pwd`:`pwd` -w `pwd` --rm -it docker_setup/stm32cubeide:latest \
    stm32cubeide --launcher.suppressErrors -nosplash \
    -application org.eclipse.cdt.managedbuilder.core.headlessbuild \
    -data "./eclipse_data" -import './ST_Drone_FCU_F401/STM32 FW Project/Official release with BLE Remocon - 170318/' \
    -build ST_Drone_FCU_F401_Official_BLE_Remocon_170318/Debug

# trace the build into BDF

# run sca

popd



