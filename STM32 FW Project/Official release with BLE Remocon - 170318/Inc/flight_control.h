#ifndef FLIGHT_CONTROL_H
#define FLIGHT_CONTROL_H

#include "stm32f4xx_hal.h"
#include "def32.h"
#include "quaternion.h"
#include "ahrs.h"
#include "motor.h"

#ifdef MOTOR_DC
  #define MIN_THR              200              /* DC motor configuration */
#endif
#ifdef MOTOR_ESC
  #define MIN_THR              20                /* External ESC configuration */
#endif

#define MAX_ADJ_AMOUNT       800.0f
#define MAX_ADJ_AMOUNT_YAW   800.0f
#define MAX_ACC_DIFF         10
#define MAX_ACC_DATA         125

#define GYRO_FIL_K           0.05
#define ACC_FIL_K            0.05
#define MAG_FIL_K            1.0
#define EULER_FIL_K          0.001
#define EULER_OFFSET_LIMIT   0.015            //5 degree  0.09
#define EULER_NEAR_ZERO      0.005            //1 degree  0.01745

#define ROLL_PID_KP1         3.0f
#define ROLL_PID_KI1         0.0f
//#define ROLL_PID_KP2         800.0f      /* default */
//#define ROLL_PID_KP2         100.0f        /* test minidrone */
#define ROLL_PID_KP2         80.0f        /* minidrone official Frame Kit*/
//#define ROLL_PID_KP2         200.0f        /* test FPV250 with STEVAL-ESC001V1 */
//#define ROLL_PID_KP2         40.0f        /* test FPV250 with Afro ESC12A */
//#define ROLL_PID_KI2         400.0f        /* default */
//#define ROLL_PID_KI2         100.0f        /* test minidrone */
#define ROLL_PID_KI2         80.0f        /* minidrone official Frame Kit */
//#define ROLL_PID_KI2         200.0f        /* test FPV250 with STEVAL-ESC001V1 */
//#define ROLL_PID_KI2         40.0f        /* test FPV250 with Afro ESC12A */
#define ROLL_PID_KD2         10.0f           //(x/PID_SAMPLING_TIME)
//#define ROLL_PID_KD2         5.0f        /* test FPV250 with STEVAL-ESC001V1 */
#define ROLL_PID_I1_LIMIT    2.0f         //5 degree
//#define ROLL_PID_I2_LIMIT    (100.0f / ROLL_PID_KI2)
#define ROLL_PID_I2_LIMIT    20.0f
//#define ROLL_PID_I2_LIMIT    2.0f


#define PITCH_PID_KP1        ROLL_PID_KP1
#define PITCH_PID_KI1        ROLL_PID_KI1
#define PITCH_PID_KP2        ROLL_PID_KP2
#define PITCH_PID_KI2        ROLL_PID_KI2
#define PITCH_PID_KD2        ROLL_PID_KD2
#define PITCH_PID_I1_LIMIT   ROLL_PID_I1_LIMIT
#define PITCH_PID_I2_LIMIT   ROLL_PID_I2_LIMIT

//#define YAW_PID_KP1          4.0f
//#define YAW_PID_KI1          0.0f
//#define YAW_PID_KP2          1500.0f
//#define YAW_PID_KI2          1500.0f
//#define YAW_PID_KD2          0.0f
//#define YAW_PID_I1_LIMIT     50.0f
//#define YAW_PID_I2_LIMIT     0.1f    //6 degree/s
#define YAW_PID_KP1           4.0f
#define YAW_PID_KI1           0.0f
// #define YAW_PID_KP2         1000.0f
//#define YAW_PID_KI2         0.0f
//#define YAW_PID_KD2         0.0f            //(x/PID_SAMPLING_TIME)

#define YAW_PID_KP2         900.0f     // Minidrone Official Frame Kit
#define YAW_PID_KI2           3.0f           // Minidrone Official Frame Kit
#define YAW_PID_KD2           3.0f            // Minidrone Official Frame Kit
#define YAW_PID_I1_LIMIT      2.0f         //5 degree
//#define YAW_PID_I2_LIMIT    (100.0f / YAW_PID_KI2)
#define YAW_PID_I2_LIMIT      2.0f

#define PID_SAMPLING_TIME     0.00125f

#define D_FILTER_COFF         0.025f

#define MOTOR_OFF1          0
#define MOTOR_OFF2          0
#define MOTOR_OFF3          0
#define MOTOR_OFF4          0

#define X_AXIS_OFFSET       -0.056
#define Y_AXIS_OFFSET       -0.029
//#define X_AXIS_OFFSET       -0.08
//#define Y_AXIS_OFFSET       0

#define GYRO_OFFSET_X       0.094
#define GYRO_OFFSET_Y       0.060
#define GYRO_OFFSET_Z      -0.064

#define FIFO_Order          5
#define MID_FIFO            (FIFO_Order>>1)
#define FIFO_Order_Recip    (1.0/FIFO_Order)

// Structure for P-PI type PID control
//first stage is angle stage, second stage is angle rate stage.
typedef struct
{
    float32_t ts;                                  // sampling time
    float32_t x_kp1, x_ki1, x_kp2, x_ki2, x_kd2;          // stage pid parameter
    float32_t y_kp1, y_ki1, y_kp2, y_ki2, y_kd2;
    float32_t z_kp1, z_ki1, z_kp2, z_ki2, z_kd2;
    float32_t x_i1_limit, y_i1_limit, z_i1_limit;
    float32_t x_i2_limit, y_i2_limit, z_i2_limit;
    float32_t x_s1, x_s2;                   // stage output
    float32_t y_s1, y_s2;
    float32_t z_s1, z_s2;
} P_PI_PIDControlTypeDef;

void FlightControlPID(const EulerAngleTypeDef *euler_rc_in, const EulerAngleTypeDef *euler_ahrs_in,
					  const Gyro_Rad *gyro_in_rad, P_PI_PIDControlTypeDef *thePid, MotorControlTypeDef *motor_pwm);
void FlightControlPID_OuterLoop(const EulerAngleTypeDef *euler_rc_in, const EulerAngleTypeDef *euler_ahrs_in, P_PI_PIDControlTypeDef *thePid);
void FlightControlPID_innerLoop(const Gyro_Rad *gyro_in_rad, P_PI_PIDControlTypeDef *thePid, MotorControlTypeDef *motor_pwm);
void PIDControlInit(P_PI_PIDControlTypeDef *thePid);
void PIDOuterLoopFrameTrans(P_PI_PIDControlTypeDef *thePid, const EulerAngleTypeDef *euler_ahrs_in);





#endif
