#!/bin/bash -x

IMAGE_NAME=docker_setup/stm32cubeide:latest

# docker build -t ${IMAGE_NAME} .

# docker run --rm -it stm32cubeide bash -c '/opt/st/stm32cubeide_*/plugins/com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.*.linux64_*/tools/bin/arm-none-eabi-g++ --version'
# docker run --rm -it stm32cubeide arm-none-eabi-g++ --version

SANDBOX=`pwd`/sandbox
rm -rf ${SANDBOX}
mkdir ${SANDBOX}
# echo '#include <iostream>' > ${SANDBOX}/main.cpp
# echo 'int main() { std::cout << "Hello ARM World" << std::endl; return 0; }' >> ${SANDBOX}/main.cpp
echo 'int foo(int i) { return i; }' >> ${SANDBOX}/foo.cpp
docker run --rm -it -v ${SANDBOX}:${SANDBOX} -w ${SANDBOX} ${IMAGE_NAME} arm-none-eabi-g++ -c ./foo.cpp -o ./foo.o
# docker run --rm -it -v ${SANDBOX}:${SANDBOX} -w ${SANDBOX} ${IMAGE_NAME} qemu-arm-static -L /usr/arm-linux-gnueabihf/ ./main_arm
docker run --rm -it -v ${SANDBOX}:${SANDBOX} -w ${SANDBOX} ${IMAGE_NAME} arm-none-eabi-nm ./foo.o
docker run --rm -it -v ${SANDBOX}:${SANDBOX} -w ${SANDBOX} ${IMAGE_NAME} file ./foo.o
rm -rf ${SANDBOX}

