#ifndef MOTOR_H
#define MOTOR_H

#include "stm32f4xx_hal.h"
#include "def32.h"

// Uncomment the first row to use 3.7V Motors directly connected to FCU board
#define MOTOR_DC
//#define MOTOR_ESC


#ifdef MOTOR_DC
  #define MOTOR_MAX_PWM_VALUE     1900.0f    /* DC motor configuration */
  #define MOTOR_MIN_PWM_VALUE     0.0f     /* DC motor configuration */
#else
#ifdef MOTOR_ESC
  #define MOTOR_MAX_PWM_VALUE     1700.0f    /* External ESC configuration */
  #define MOTOR_MIN_PWM_VALUE     850.0f     /* 850 for 1msec (Fine tuned for Freq 400Hz), FCU ON motors not ARMED*/
#endif
#endif

typedef struct
{
  float32_t motor1_pwm, motor2_pwm, motor3_pwm, motor4_pwm;
} MotorControlTypeDef;

void set_motor_pwm(const MotorControlTypeDef *motor_pwm_param);
void set_motor_pwm_zero(MotorControlTypeDef *motor_pwm_param);

#endif /* MOTOR_H */
