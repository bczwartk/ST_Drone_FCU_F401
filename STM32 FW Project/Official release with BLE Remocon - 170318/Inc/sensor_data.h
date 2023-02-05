#ifndef SENSOR_DATA_H
#define SENSOR_DATA_H

#include "stm32f4xx_hal.h"
#include "def32.h"
#include "config_drone.h"
#include "steval_fcu001_v1.h"

void ReadSensorRawData(void *ACC_handle, void *GYR_handle, void *MAG_handle, void *PRE_handle, AxesRaw_TypeDef *pAcc, AxesRaw_TypeDef *pGyro, AxesRaw_TypeDef *pMag, float32_t *pPre);


#endif /* SENSOR_DATA_H */
