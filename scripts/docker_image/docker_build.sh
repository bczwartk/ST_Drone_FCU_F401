#!/bin/bash -x

IMAGE_NAME=docker_setup/stm32cubeide

docker build -t ${IMAGE_NAME} -t ${IMAGE_NAME}:1.0 .

# docker run --rm -it stm32cubeide bash -c '/opt/st/stm32cubeide_*/plugins/com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.*.linux64_*/tools/bin/arm-none-eabi-g++ --version'
docker run --rm -it ${IMAGE_NAME} arm-none-eabi-g++ --version


