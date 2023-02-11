#include "motor.h"

/*                                  Note
 * The PWM is handled by TIM4. 
 * In case of DC motor configuration:
 * - the master clock for TIM4 is 1MHz
 * - the counter counts up to 2000, result in 2ms of PWM period (500Hz)
 * - the PWM pulse width data can to 0~1999, coresponding to 0~100% duty cycle
*/

extern TIM_HandleTypeDef htim4;

static void set_single_motor_pwm(__IO uint32_t * pCCR, float32_t motor_pwm_val)
{
	  if (motor_pwm_val >= MOTOR_MAX_PWM_VALUE) {
	    *pCCR = (uint32_t) MOTOR_MAX_PWM_VALUE;
	  } else if (motor_pwm_val <= MOTOR_MIN_PWM_VALUE) {
	    *pCCR = (uint32_t) MOTOR_MIN_PWM_VALUE;
	  } else {
	    *pCCR = (uint32_t) motor_pwm_val;
	  }
}

/*
 * Setup the driving power for 4 motors. p1~p4 data range is 0~1999, which equals
 * to 0~100% duty cycle (for DC motor configuration)
 */
void set_motor_pwm(const MotorControlTypeDef *motor_pwm_param)
{
  set_single_motor_pwm(&htim4.Instance->CCR1, motor_pwm_param->motor1_pwm);
  set_single_motor_pwm(&htim4.Instance->CCR2, motor_pwm_param->motor2_pwm);
  set_single_motor_pwm(&htim4.Instance->CCR3, motor_pwm_param->motor3_pwm);
  set_single_motor_pwm(&htim4.Instance->CCR4, motor_pwm_param->motor4_pwm);
}


void set_motor_pwm_zero(MotorControlTypeDef *motor_pwm_param)
{
  motor_pwm_param->motor1_pwm = 0.0f;
  motor_pwm_param->motor2_pwm = 0.0f;
  motor_pwm_param->motor3_pwm = 0.0f;
  motor_pwm_param->motor4_pwm = 0.0f;
}

