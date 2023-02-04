#ifndef SENSOR_DATA_H
#define SENSOR_DATA_H

#include "stm32f4xx_hal.h"
#include "def32.h"
#include "config_drone.h"
//#include "imu_6axes.h"
//#include "magneto.h"
//#include "pressure.h"
//#include "board.h"
#include "steval_fcu001_v1.h"

void ReadSensorRawData(void *ACC_handle, void *GYR_handle, void *MAG_handle, void *PRE_handle, AxesRaw_TypeDef *acc, AxesRaw_TypeDef *gyro, AxesRaw_TypeDef *mag, float32_t *pre);


#endif /* SENSOR_DATA_H */
