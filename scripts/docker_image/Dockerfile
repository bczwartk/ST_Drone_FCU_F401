FROM ubuntu:20.04

LABEL org.opencontainers.image.authors="Xander Hendriks <xander.hendriks@nx-solutions.com>"

ENV STM32CUBEIDE_VERSION=1.12.1

ENV DEBIAN_FRONTEND=noninteractive

ENV LICENSE_ALREADY_ACCEPTED=1

ENV TZ=Etc/UTC

# unfortunately, the toolchain path is very specific to the STM32CubeIDE version:
ENV PATH="${PATH}:/opt/st/stm32cubeide_${STM32CUBEIDE_VERSION}:/opt/st/stm32cubeide_${STM32CUBEIDE_VERSION}/plugins/com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.10.3-2021.10.linux64_1.0.200.202301161003/tools/bin"

RUN apt-get -y update && \
	apt-get -y install zip git cmake

# qemu qemu-arm qemu-user-static 

# make sure to download the proper binary from STM site - pick Debian 1.12.1 version:
# https://www.st.com/en/development-tools/stm32cubeide.html#overview
COPY st-stm32cubeide_1.12.1_16088_20230420_1057_amd64.deb_bundle.sh.zip /tmp/stm32cubeide-installer.sh.zip

# Unzip STM32 Cube IDE and delete zip file
RUN unzip -p /tmp/stm32cubeide-installer.sh.zip > /tmp/stm32cubeide-installer.sh && rm /tmp/stm32cubeide-installer.sh.zip

# Install STM32 Cube IDE and delete installer
RUN chmod +x /tmp/stm32cubeide-installer.sh && \
    /tmp/stm32cubeide-installer.sh && \
    rm /tmp/stm32cubeide-installer.sh

# Install dependencies
RUN apt-get -y -f install
