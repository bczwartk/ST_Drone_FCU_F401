#ifndef AHRS_H
#define AHRS_H

#include "stm32f4xx_hal.h"
#include "steval_fcu001_v1.h"
#include "def32.h"
#include "quaternion.h"

#define AHRS_DEBUG          0
#define COE_MDPS_TO_RADPS   1.745329252e-5
#define COE_RADS_TO_MDPS    (1/(1.745329252e-5))
#define NORM_R              0.25f
#define BIG_R               0.25f
#define AHRS_P_1            1e-1
#define AHRS_P_2            1e-0
#define AHRS_Q              1e-4
#define ACC_OVER_U          (1.0/1250)
#define ACC_OVER_D          (1.0/750)

// Sampling time of sensors
#define SENSOR_SAMPLING_TIME    0.00625f
#define alpha        1.0f
#define BETA_NORM    0.8f            //0.15
#define BETA_ZERO    0
#define zeta         0.006f             //0.003
#define AHRS_KP_BIG  10.0f               //0.4 is tested, so slow in calibrated. 
#define AHRS_KP_NORM 0.4f
#define AHRS_KI      0.1f


typedef struct
{
  QuaternionTypeDef q;    // Current altitude
  float32_t gx,gy,gz;       // Current angle rate @ body frame
}AHRS_State_TypeDef;

typedef struct
{
  float32_t gx, gy, gz;
}Gyro_Rad;

void ahrs_fusion_ag(const AxesRaw_TypeDef_Float *acc_in, const AxesRaw_TypeDef_Float *gyro_in, AHRS_State_TypeDef *ahrs_in);
#endif // AHRS_H

