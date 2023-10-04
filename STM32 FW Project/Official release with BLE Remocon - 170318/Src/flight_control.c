#include "flight_control.h"
#include "rc.h"
#include <math.h>

static float32_t pid_x_integ1 = 0.0f;
static float32_t pid_y_integ1 = 0.0f;
static float32_t pid_z_integ1 = 0.0f;
static float32_t pid_x_integ2 = 0.0f;
static float32_t pid_y_integ2 = 0.0f;
static float32_t pid_z_integ2 = 0.0f;
static float32_t pid_x_pre_error2 = 0.0f;
static float32_t pid_y_pre_error2 = 0.0f;
static float32_t pid_z_pre_error2 = 0.0f;
static float32_t pid_x_pre_deriv = 0.0f;
static float32_t pid_y_pre_deriv = 0.0f;

extern int16_t gTHR;

void PIDControlInit(P_PI_PIDControlTypeDef *thePid)
{
  thePid->ts = PID_SAMPLING_TIME;

  thePid->x_kp1 = PITCH_PID_KP1;
  thePid->x_ki1 = PITCH_PID_KI1;
  thePid->x_i1_limit = PITCH_PID_I1_LIMIT;
  thePid->x_kp2 = PITCH_PID_KP2;
  thePid->x_ki2 = PITCH_PID_KI2;
  thePid->x_kd2 = PITCH_PID_KD2;
  thePid->x_i2_limit = PITCH_PID_I2_LIMIT;
  thePid->x_s1 = 0.0f;
  thePid->x_s2 = 0.0f;

  thePid->y_kp1 = ROLL_PID_KP1;
  thePid->y_ki1 = ROLL_PID_KI1;
  thePid->y_i1_limit = ROLL_PID_I1_LIMIT;
  thePid->y_kp2 = ROLL_PID_KP2;
  thePid->y_ki2 = ROLL_PID_KI2;
  thePid->y_kd2 = ROLL_PID_KD2;
  thePid->y_i2_limit = ROLL_PID_I2_LIMIT;
  thePid->y_s1 = 0.0f;
  thePid->y_s2 = 0.0f;

  thePid->z_kp1 = YAW_PID_KP1;
  thePid->z_ki1 = YAW_PID_KI1;
  thePid->z_i1_limit = YAW_PID_I1_LIMIT;
  thePid->z_kp2 = YAW_PID_KP2;
  thePid->z_ki2 = YAW_PID_KI2;
  thePid->z_kd2 = YAW_PID_KD2;
  thePid->z_i2_limit = YAW_PID_I2_LIMIT;
  thePid->z_s1 = 0.0f;
  thePid->z_s2 = 0.0f;
}

void FlightControlPID(const EulerAngleTypeDef *euler_rc_in, const EulerAngleTypeDef *euler_ahrs_in, const Gyro_Rad *gyro_in_rad_arg,
					  P_PI_PIDControlTypeDef *thePid, MotorControlTypeDef *motor_pwm_out)
{
  float32_t error, deriv, motor_thr;

  if (gTHR < MIN_THR) {
    pid_x_integ1 = 0.0f;
    pid_y_integ1 = 0.0f;
    pid_z_integ1 = 0.0f;
    pid_x_integ2 = 0.0f;
    pid_y_integ2 = 0.0f;
    pid_z_integ2 = 0.0f;
  }

  
  // x-axis pid
  error = euler_rc_in->thx - euler_ahrs_in->thx;
  pid_x_integ1 += error * thePid->ts;
  if (pid_x_integ1 > thePid->x_i1_limit) {
    pid_x_integ1 = thePid->x_i1_limit;
  } else if (pid_x_integ1 < -thePid->x_i1_limit) {
    pid_x_integ1 = -thePid->x_i1_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  thePid->x_s1 =  (thePid->x_kp1 * error) + (thePid->x_ki1 * pid_x_integ1);

  error = euler_rc_in->thx - gyro_in_rad_arg->gx;
  pid_x_integ2 += error * thePid->ts;
  if (pid_x_integ2 > thePid->x_i2_limit) {
    pid_x_integ2 = thePid->x_i2_limit;
  } else if (pid_x_integ2 < -thePid->x_i2_limit) {
    pid_x_integ2 = -thePid->x_i2_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  deriv = error - pid_x_pre_error2;
  pid_x_pre_error2 = error;
  thePid->x_s2 = (thePid->x_kp2 * error) + (thePid->x_ki2 * pid_x_integ2) + (thePid->x_kd2 * deriv);

  if (thePid->x_s2 > MAX_ADJ_AMOUNT)  {
	  thePid->x_s2 = MAX_ADJ_AMOUNT;
  }
  if (thePid->x_s2 < -MAX_ADJ_AMOUNT)  {
	  thePid->x_s2 = -MAX_ADJ_AMOUNT;
  }


  // y-axis pid
  error = euler_rc_in->thy - euler_ahrs_in->thy;
  pid_y_integ1 += error * thePid->ts;
  if (pid_y_integ1 > thePid->y_i1_limit) {
    pid_y_integ1 = thePid->y_i1_limit;
  } else if (pid_y_integ1 < -thePid->y_i1_limit) {
    pid_y_integ1 = -thePid->y_i1_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  thePid->y_s1 =  (thePid->y_kp1 * error) + (thePid->y_ki1 * pid_y_integ1);

  error = euler_rc_in->thy - gyro_in_rad_arg->gy;
  pid_y_integ2 += error * thePid->ts;
  if (pid_y_integ2 > thePid->y_i2_limit) {
    pid_y_integ2 = thePid->y_i2_limit;
  } else if (pid_y_integ2 < -thePid->y_i2_limit) {
    pid_y_integ2 = -thePid->y_i2_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  deriv = error - pid_y_pre_error2;
  pid_y_pre_error2 = error;
  thePid->y_s2 = (thePid->y_kp2 * error) + (thePid->y_ki2 * pid_y_integ2) + (thePid->y_kd2 * deriv);

  if (thePid->y_s2 > MAX_ADJ_AMOUNT)  {
	  thePid->y_s2 = MAX_ADJ_AMOUNT;
  }
  if (thePid->y_s2 < -MAX_ADJ_AMOUNT)  {
	  thePid->y_s2 = -MAX_ADJ_AMOUNT;
  }


  // z-axis pid
  error = euler_rc_in->thz - gyro_in_rad_arg->gz;
  pid_z_integ2 += error * thePid->ts;
  if (pid_z_integ2 > thePid->z_i2_limit) {
    pid_z_integ2 = thePid->z_i2_limit;
  } else if (pid_z_integ2 < -thePid->z_i2_limit) {
    pid_z_integ2 = -thePid->z_i2_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  deriv = error - pid_z_pre_error2;
  pid_z_pre_error2 = error;
  thePid->z_s2 = (thePid->z_kp2 * error) + (thePid->z_ki2 * pid_y_integ2) + (thePid->z_kd2 * deriv);

  if (thePid->z_s2 > MAX_ADJ_AMOUNT)  {
	  thePid->z_s2 = MAX_ADJ_AMOUNT;
  }
  if (thePid->z_s2 < -MAX_ADJ_AMOUNT)  {
	  thePid->z_s2 = -MAX_ADJ_AMOUNT;
  }

  #ifdef MOTOR_DC

  motor_thr = (0.33333f * (float32_t)gTHR) + 633.333f;           //Devo7E >> 630 to 1700
  
  #endif
  
  #ifdef MOTOR_ESC
  
    //motor_thr = (0.28f * gTHR) + 750.0f;                              //TGY-i6 remocon and external ESC STEVAL-ESC001V1
    motor_thr = (0.28f * (float32_t)gTHR) + 850.0f;       //TGY-i6 remocon and external ESC Afro12A

  #endif
  
  
  motor_pwm_out->motor1_pwm = motor_thr - thePid->x_s2 - thePid->y_s2 + thePid->z_s2 + MOTOR_OFF1;
  motor_pwm_out->motor2_pwm = motor_thr + thePid->x_s2 - thePid->y_s2 - thePid->z_s2 + MOTOR_OFF2;
  motor_pwm_out->motor3_pwm = motor_thr + thePid->x_s2 + thePid->y_s2 + thePid->z_s2 + MOTOR_OFF3;
  motor_pwm_out->motor4_pwm = motor_thr - thePid->x_s2 + thePid->y_s2 - thePid->z_s2 + MOTOR_OFF4;
}

void FlightControlPID_OuterLoop(const EulerAngleTypeDef *euler_rc_in, const EulerAngleTypeDef *euler_ahrs_in, P_PI_PIDControlTypeDef *thePid)
{
  float32_t error;

  if (gTHR < MIN_THR) {
    pid_x_integ1 = 0.0f;
    pid_y_integ1 = 0.0f;
    pid_z_integ1 = 0.0f;
  }

  //x-axis pid
  error = euler_rc_in->thx - euler_ahrs_in->thx;
  pid_x_integ1 += error * thePid->ts;
  if (pid_x_integ1 > thePid->x_i1_limit) {
    pid_x_integ1 = thePid->x_i1_limit;
  } else if (pid_x_integ1 < -thePid->x_i1_limit) {
    pid_x_integ1 = -thePid->x_i1_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  thePid->x_s1 =  (thePid->x_kp1 * error) + (thePid->x_ki1 * pid_x_integ1);

  //y-axis pid
  error = euler_rc_in->thy - euler_ahrs_in->thy;
  pid_y_integ1 += error * thePid->ts;
  if (pid_y_integ1 > thePid->y_i1_limit) {
    pid_y_integ1 = thePid->y_i1_limit;
  } else if (pid_y_integ1 < -thePid->y_i1_limit) {
    pid_y_integ1 = -thePid->y_i1_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  thePid->y_s1 =  (thePid->y_kp1 * error) + (thePid->y_ki1 * pid_y_integ1);

  //z-axis pid
  error = euler_rc_in->thz - euler_ahrs_in->thz;
  pid_z_integ1 += error * thePid->ts;
  if (pid_z_integ1 > thePid->z_i1_limit) {
    pid_z_integ1 = thePid->z_i1_limit;
  } else if (pid_z_integ1 < -thePid->z_i1_limit) {
    pid_z_integ1 = -thePid->z_i1_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  thePid->z_s1 = (thePid->z_kp1 * error) + (thePid->z_ki1 * pid_z_integ1);
}

void FlightControlPID_innerLoop(const Gyro_Rad *gyro_in_rad_arg, P_PI_PIDControlTypeDef *thePid, MotorControlTypeDef *motor_pwm_out)
{
  float32_t dt_recip, error, deriv, motor_thr;

  if (gTHR < MIN_THR) {
    pid_x_integ2 = 0.0f;
    pid_y_integ2 = 0.0f;
    pid_z_integ2 = 0.0f;
  }
  
  dt_recip = 1.0f / thePid->ts;

  // X Axis
  error = thePid->x_s1 - gyro_in_rad_arg->gx;
  pid_x_integ2 += error * thePid->ts;
  if (pid_x_integ2 > thePid->x_i2_limit) {
    pid_x_integ2 = thePid->x_i2_limit;
  } else if (pid_x_integ2 < -thePid->x_i2_limit) {
    pid_x_integ2 = -thePid->x_i2_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  deriv = (error - pid_x_pre_error2) * dt_recip;
  pid_x_pre_error2 = error;
  deriv = pid_x_pre_deriv + ((deriv - pid_x_pre_deriv) * D_FILTER_COFF);
  pid_x_pre_deriv = deriv;
  thePid->x_s2 = (thePid->x_kp2 * error) + (thePid->x_ki2 * pid_x_integ2) + (thePid->x_kd2 * deriv);
  
  if (thePid->x_s2 > MAX_ADJ_AMOUNT)  {
	  thePid->x_s2 = MAX_ADJ_AMOUNT;
  }
  if (thePid->x_s2 < -MAX_ADJ_AMOUNT)  {
	  thePid->x_s2 = -MAX_ADJ_AMOUNT;
  }

  // Y Axis
  error = thePid->y_s1 - gyro_in_rad_arg->gy;
  pid_y_integ2 += error * thePid->ts;
  if (pid_y_integ2 > thePid->y_i2_limit) {
    pid_y_integ2 = thePid->y_i2_limit;
  } else if (pid_y_integ2 < -thePid->y_i2_limit) {
    pid_y_integ2 = -thePid->y_i2_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  deriv = (error - pid_y_pre_error2) * dt_recip;
  pid_y_pre_error2 = error;
  deriv = pid_y_pre_deriv + ((deriv - pid_y_pre_deriv) * D_FILTER_COFF);
  pid_y_pre_deriv = deriv;
  thePid->y_s2 = (thePid->y_kp2 * error) + (thePid->y_ki2 * pid_y_integ2) + (thePid->y_kd2 * deriv);

  if (thePid->y_s2 > MAX_ADJ_AMOUNT)  {
	  thePid->y_s2 = MAX_ADJ_AMOUNT;
  }
  if (thePid->y_s2 < -MAX_ADJ_AMOUNT)  {
	  thePid->y_s2 = -MAX_ADJ_AMOUNT;
  }

  // Z Axis
  error = thePid->z_s1 - gyro_in_rad_arg->gz;
  pid_z_integ2 += error * thePid->ts;
  if (pid_z_integ2 > thePid->z_i2_limit) {
    pid_z_integ2 = thePid->z_i2_limit;
  } else if (pid_z_integ2 < -thePid->z_i2_limit) {
    pid_z_integ2 = -thePid->z_i2_limit;
  } else {
	  // no action needed - MISRAC2012-RULE_15_7-a
  }
  deriv = (error - pid_z_pre_error2) * dt_recip;
  pid_z_pre_error2 = error;
  thePid->z_s2 = (thePid->z_kp2 * error) + (thePid->z_ki2 * pid_z_integ2) + (thePid->z_kd2 * deriv);

  if (thePid->z_s2 > MAX_ADJ_AMOUNT_YAW)  {
	  thePid->z_s2 = MAX_ADJ_AMOUNT_YAW;
  }
  if (thePid->z_s2 < -MAX_ADJ_AMOUNT_YAW)  {
	  thePid->z_s2 = -MAX_ADJ_AMOUNT_YAW;
  }

  
#ifdef MOTOR_DC

  motor_thr = (0.05f * (float32_t)gTHR) + 633.333f;           //Official MiniDrone Kit >> 630 to 1700
  //motor_thr =((int16_t) ((0.333f * (float32_t)gTHR) + 633.33f));           //Remocon Devo7E >> 630 to 1700
  
#endif
  
#ifdef MOTOR_ESC
  
  //motor_thr = 0.28f*gTHR + 750.0f;                 //TGY-i6 remocon and external ESC STEVAL-ESC001V1
    motor_thr = (0.28f * (float32_t)gTHR) + 850.0f;                 //TGY-i6 remocon and external ESC Afro12A

#endif

  motor_pwm_out->motor1_pwm = motor_thr - thePid->x_s2 - thePid->y_s2 + thePid->z_s2 + MOTOR_OFF1;
  motor_pwm_out->motor2_pwm = motor_thr + thePid->x_s2 - thePid->y_s2 - thePid->z_s2 + MOTOR_OFF2;
  motor_pwm_out->motor3_pwm = motor_thr + thePid->x_s2 + thePid->y_s2 + thePid->z_s2 + MOTOR_OFF3;
  motor_pwm_out->motor4_pwm = motor_thr - thePid->x_s2 + thePid->y_s2 - thePid->z_s2 + MOTOR_OFF4;
}

void PIDOuterLoopFrameTrans(P_PI_PIDControlTypeDef *thePid, const EulerAngleTypeDef *euler_ahrs_in)
{
  float32_t cosx;
  cosx = cos(euler_ahrs_in->thx);
  thePid->y_s1 = cosx * thePid->y_s1;
}
