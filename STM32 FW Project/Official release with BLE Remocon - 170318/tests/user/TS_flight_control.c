#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/flight_control.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/flight_control.c");

EXTERN_C_LINKAGE void TS_flight_control_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_flight_control_callTest(const char*);

CPPTEST_TEST_SUITE(TS_flight_control);
        CPPTEST_TEST_SUITE_SETUP(TS_flight_control_testSuiteSetUp);
        CPPTEST_TEST(TS_flight_control_test_PIDControlInit);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_flight_control_testSuiteTearDown);
CPPTEST_TEST(TS_flight_control_test_PIDOuterLoopFrameTrans_zeros);
CPPTEST_TEST_DS(TS_flight_control_test_PIDOuterLoopFrameTrans_ds, CPPTEST_DS("TS_flight_control_PIDOuterLoopFrameTrans"));
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_f_zero);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_OuterLoop_zero);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_innerLoop_zero);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_OuterLoop_gTHR_reset);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_f_gTHR_reset);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_f_above_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_f_below_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_f_at_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_OuterLoop_at_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_OuterLoop_above_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_OuterLoop_below_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_innerLoop_gTHR_reset);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_innerLoop_at_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_innerLoop_above_limits);
CPPTEST_TEST(TS_flight_control_test_FlightControlPID_innerLoop_below_limits);
CPPTEST_TEST_SUITE_END();
        
void TS_flight_control_test_PIDControlInit(void);

void TS_flight_control_test_PIDOuterLoopFrameTrans_zeros(void);
void TS_flight_control_test_PIDOuterLoopFrameTrans_ds(void);
void TS_flight_control_test_FlightControlPID_f_zero(void);
void TS_flight_control_test_FlightControlPID_OuterLoop_zero(void);
void TS_flight_control_test_FlightControlPID_innerLoop_zero(void);
void TS_flight_control_test_FlightControlPID_OuterLoop_gTHR_reset(void);
void TS_flight_control_test_FlightControlPID_f_gTHR_reset(void);
void TS_flight_control_test_FlightControlPID_f_above_limits(void);
void TS_flight_control_test_FlightControlPID_f_below_limits(void);
void TS_flight_control_test_FlightControlPID_f_at_limits(void);
void TS_flight_control_test_FlightControlPID_OuterLoop_at_limits(void);
void TS_flight_control_test_FlightControlPID_OuterLoop_above_limits(void);
void TS_flight_control_test_FlightControlPID_OuterLoop_below_limits(void);
void TS_flight_control_test_FlightControlPID_innerLoop_gTHR_reset(void);
void TS_flight_control_test_FlightControlPID_innerLoop_at_limits(void);
void TS_flight_control_test_FlightControlPID_innerLoop_above_limits(void);
void TS_flight_control_test_FlightControlPID_innerLoop_below_limits(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_flight_control);

void TS_flight_control_testSuiteSetUp(void);
void TS_flight_control_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_flight_control_testSuiteTearDown(void);
void TS_flight_control_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_flight_control_setUp(void);
void TS_flight_control_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_flight_control_tearDown(void);
void TS_flight_control_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_PIDControlInit */
void TS_flight_control_test_PIDControlInit()
{
	const float32_t DELTA = 0.0001f;
	P_PI_PIDControlTypeDef pid;

	PIDControlInit(&pid);

	CPPTEST_ASSERT_DOUBLES_EQUAL(PID_SAMPLING_TIME, pid.ts, DELTA);

	CPPTEST_ASSERT_DOUBLES_EQUAL(PITCH_PID_KP1, pid.x_kp1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(PITCH_PID_KI1, pid.x_ki1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(PITCH_PID_I1_LIMIT, pid.x_i1_limit, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(PITCH_PID_KP2, pid.x_kp2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(PITCH_PID_KI2, pid.x_ki2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(PITCH_PID_KD2, pid.x_kd2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(PITCH_PID_I2_LIMIT, pid.x_i2_limit, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(0.0f, pid.x_s1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(0.0f, pid.x_s2, DELTA);

	CPPTEST_ASSERT_DOUBLES_EQUAL(ROLL_PID_KP1, pid.y_kp1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(ROLL_PID_KI1, pid.y_ki1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(ROLL_PID_I1_LIMIT, pid.y_i1_limit, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(ROLL_PID_KP2, pid.y_kp2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(ROLL_PID_KI2, pid.y_ki2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(ROLL_PID_KD2, pid.y_kd2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(ROLL_PID_I2_LIMIT, pid.y_i2_limit, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(0.0f, pid.y_s1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(0.0f, pid.y_s2, DELTA);

	CPPTEST_ASSERT_DOUBLES_EQUAL(YAW_PID_KP1, pid.z_kp1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(YAW_PID_KI1, pid.z_ki1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(YAW_PID_I1_LIMIT, pid.z_i1_limit, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(YAW_PID_KP2, pid.z_kp2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(YAW_PID_KI2, pid.z_ki2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(YAW_PID_KD2, pid.z_kd2, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(YAW_PID_I2_LIMIT, pid.z_i2_limit, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(0.0f, pid.z_s1, DELTA);
	CPPTEST_ASSERT_DOUBLES_EQUAL(0.0f, pid.z_s2, DELTA);
}
/* CPPTEST_TEST_CASE_END test_PIDControlInit */

/* CPPTEST_TEST_CASE_BEGIN test_PIDOuterLoopFrameTrans_zeros */
/* CPPTEST_TEST_CASE_CONTEXT void PIDOuterLoopFrameTrans(P_PI_PIDControlTypeDef *, EulerAngleTypeDef *) */
void TS_flight_control_test_PIDOuterLoopFrameTrans_zeros()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pid) */ 
    P_PI_PIDControlTypeDef _pid_0 ;
    _pid_0.y_s1  = 0.0f;
    P_PI_PIDControlTypeDef * _pid  = & _pid_0;
    /* Initializing argument 2 (euler_ahrs) */ 
    EulerAngleTypeDef _euler_ahrs_2 ;
    _euler_ahrs_2.thx  = 0.0f;
    EulerAngleTypeDef * _euler_ahrs  = & _euler_ahrs_2;

    /* Tested function call */
    PIDOuterLoopFrameTrans(_pid, _euler_ahrs);

    /* Post-condition check */
    CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, _pid->y_s1, 0.001);
}
/* CPPTEST_TEST_CASE_END test_PIDOuterLoopFrameTrans_zeros */

/* CPPTEST_TEST_CASE_BEGIN test_PIDOuterLoopFrameTrans_ds */
/* CPPTEST_TEST_CASE_CONTEXT void PIDOuterLoopFrameTrans(P_PI_PIDControlTypeDef *, EulerAngleTypeDef *) */
void TS_flight_control_test_PIDOuterLoopFrameTrans_ds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pid) */ 
    P_PI_PIDControlTypeDef _pid_0 ;
    _pid_0.y_s1  = CPPTEST_DS_GET_FLOAT("in_pid_0.y_s1");
    P_PI_PIDControlTypeDef * _pid  = & _pid_0;
    /* Initializing argument 2 (euler_ahrs) */ 
    EulerAngleTypeDef _euler_ahrs_6 ;
    float32_t _euler_ahrs_6_thx_7 = _euler_ahrs_6.thx  = CPPTEST_DS_GET_FLOAT("in_euler_ahrs_2.thx");
    EulerAngleTypeDef * _euler_ahrs  = & _euler_ahrs_6;

    /* Tested function call */
    PIDOuterLoopFrameTrans(_pid, _euler_ahrs);

    /* Post-condition check */
    CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("out_pid_0.y_s1"), _pid_0.y_s1, 0.001);
}
/* CPPTEST_TEST_CASE_END test_PIDOuterLoopFrameTrans_ds */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_f_zero */
void TS_flight_control_test_FlightControlPID_f_zero()
{
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };

	PIDControlInit(&pid);

	FlightControlPID(&euler_rc_in, &euler_ahrs_in, &gyro_in_rad, &pid, &motor_pwm);

	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_z_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_f_zero */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_OuterLoop_zero */
void TS_flight_control_test_FlightControlPID_OuterLoop_zero()
{
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;

	PIDControlInit(&pid);

	FlightControlPID_OuterLoop(&euler_rc_in, &euler_ahrs_in, &pid);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_OuterLoop_zero */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_innerLoop_zero */
void TS_flight_control_test_FlightControlPID_innerLoop_zero()
{
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };

	PIDControlInit(&pid);

	FlightControlPID_innerLoop(&gyro_in_rad, &pid, &motor_pwm);

	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_innerLoop_zero */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_OuterLoop_gTHR_reset */
void TS_flight_control_test_FlightControlPID_OuterLoop_gTHR_reset()
{
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	FlightControlPID_OuterLoop(&euler_rc_in, &euler_ahrs_in, &pid);

	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_z_integ1, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_OuterLoop_gTHR_reset */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_f_gTHR_reset */
void TS_flight_control_test_FlightControlPID_f_gTHR_reset()
{
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	FlightControlPID(&euler_rc_in, &euler_ahrs_in, &gyro_in_rad, &pid, &motor_pwm);

	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_z_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_f_gTHR_reset */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_f_above_limits */
void TS_flight_control_test_FlightControlPID_f_above_limits()
{
	/* basic reset first */
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest above limits */
	pid_x_integ1 = pid.x_i1_limit + 1.0f;
	pid_x_integ2 = pid.x_i2_limit + 1.0f;
	pid_y_integ1 = pid.y_i1_limit + 1.0f;
	pid_y_integ2 = pid.y_i2_limit + 1.0f;
	pid_z_integ2 = pid.z_i2_limit + 1.0f;

	pid.z_kp2 = 1000.0f;
	pid.z_ki2 = 1000.0f;
	pid.z_kd2 = 1000.0f;

	FlightControlPID(&euler_rc_in, &euler_ahrs_in, &gyro_in_rad, &pid, &motor_pwm);

	/* see if the values were brought back to their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i1_limit, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i2_limit, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i1_limit, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i2_limit, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.z_i2_limit, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_f_above_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_f_below_limits */
void TS_flight_control_test_FlightControlPID_f_below_limits()
{
	/* basic reset first */
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest below limits */
	pid_x_integ1 = -pid.x_i1_limit - 1.0f;
	pid_x_integ2 = -pid.x_i2_limit - 1.0f;
	pid_y_integ1 = -pid.y_i1_limit - 1.0f;
	pid_y_integ2 = -pid.y_i2_limit - 1.0f;
	pid_z_integ2 = -pid.z_i2_limit - 1.0f;

	pid.z_kp2 = 1000.0f;
	pid.z_ki2 = 1000.0f;
	pid.z_kd2 = 1000.0f;

	FlightControlPID(&euler_rc_in, &euler_ahrs_in, &gyro_in_rad, &pid, &motor_pwm);

	/* see if the values were brought back to their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.x_i1_limit, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.x_i2_limit, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.y_i1_limit, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.y_i2_limit, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.z_i2_limit, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_f_below_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_f_at_limits */
void TS_flight_control_test_FlightControlPID_f_at_limits()
{
	/* basic reset first */
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest at limits */
	pid_x_integ1 = pid.x_i1_limit;
	pid_x_integ2 = pid.x_i2_limit;
	pid_y_integ1 = pid.y_i1_limit;
	pid_y_integ2 = pid.y_i2_limit;
	pid_z_integ2 = pid.z_i2_limit;

	FlightControlPID(&euler_rc_in, &euler_ahrs_in, &gyro_in_rad, &pid, &motor_pwm);

	/* see if the values were still at their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i1_limit, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i2_limit, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i1_limit, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i2_limit, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.z_i2_limit, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_f_at_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_OuterLoop_at_limits */
void TS_flight_control_test_FlightControlPID_OuterLoop_at_limits()
{
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest at limits */
	pid_x_integ1 = pid.x_i1_limit;
	pid_y_integ1 = pid.y_i1_limit;
	pid_z_integ1 = pid.z_i2_limit;

	FlightControlPID_OuterLoop(&euler_rc_in, &euler_ahrs_in, &pid);

	/* see if the values were still at their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i1_limit, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i1_limit, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.z_i1_limit, pid_z_integ1, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_OuterLoop_at_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_OuterLoop_above_limits */
void TS_flight_control_test_FlightControlPID_OuterLoop_above_limits()
{
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest above limits */
	pid_x_integ1 = pid.x_i1_limit + 1.0f;
	pid_y_integ1 = pid.y_i1_limit + 1.0f;
	pid_z_integ1 = pid.z_i2_limit + 1.0f;

	FlightControlPID_OuterLoop(&euler_rc_in, &euler_ahrs_in, &pid);

	/* see if the values were brought back to their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i1_limit, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i1_limit, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.z_i1_limit, pid_z_integ1, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_OuterLoop_above_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_OuterLoop_below_limits */
void TS_flight_control_test_FlightControlPID_OuterLoop_below_limits()
{
	EulerAngleTypeDef euler_rc_in = { 0.0f, 0.0f, 0.0f };
	EulerAngleTypeDef euler_ahrs_in = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest above limits */
	pid_x_integ1 = -pid.x_i1_limit - 1.0f;
	pid_y_integ1 = -pid.y_i1_limit - 1.0f;
	pid_z_integ1 = -pid.z_i2_limit - 1.0f;

	FlightControlPID_OuterLoop(&euler_rc_in, &euler_ahrs_in, &pid);

	/* see if the values were brought back to their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.x_i1_limit, pid_x_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.y_i1_limit, pid_y_integ1, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.z_i1_limit, pid_z_integ1, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_OuterLoop_below_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_innerLoop_gTHR_reset */
void TS_flight_control_test_FlightControlPID_innerLoop_gTHR_reset()
{
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	FlightControlPID_innerLoop(&gyro_in_rad, &pid, &motor_pwm);

	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_innerLoop_gTHR_reset */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_innerLoop_at_limits */
void TS_flight_control_test_FlightControlPID_innerLoop_at_limits()
{
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest at limits */
	pid_x_integ2 = pid.x_i2_limit;
	pid_y_integ2 = pid.y_i2_limit;
	pid_z_integ2 = pid.z_i2_limit;

	FlightControlPID_innerLoop(&gyro_in_rad, &pid, &motor_pwm);

	/* see if the values were still at their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i2_limit, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i2_limit, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.z_i2_limit, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_innerLoop_at_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_innerLoop_above_limits */
void TS_flight_control_test_FlightControlPID_innerLoop_above_limits()
{
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest at limits */
	pid_x_integ2 = pid.x_i2_limit + 1.0f;
	pid_y_integ2 = pid.y_i2_limit + 1.0f;
	pid_z_integ2 = pid.z_i2_limit + 1.0f;
	//pid.z_s2 = MAX_ADJ_AMOUNT_YAW + 1.0f;

	pid.z_kp2 = 1000.0f;
	pid.z_ki2 = 1000.0f;
	pid.z_kd2 = 1000.0f;

	FlightControlPID_innerLoop(&gyro_in_rad, &pid, &motor_pwm);

	CPPTEST_REPORT_FLOAT("## z_s2", pid.z_s2);

	/* see if the values were brought back to their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.x_i2_limit, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.y_i2_limit, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(pid.z_i2_limit, pid_z_integ2, 0.001f);
	//CPPTEST_ASSERT_FLOAT_EQUAL(MAX_ADJ_AMOUNT_YAW, pid.z_s2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_innerLoop_above_limits */

/* CPPTEST_TEST_CASE_BEGIN test_FlightControlPID_innerLoop_below_limits */
void TS_flight_control_test_FlightControlPID_innerLoop_below_limits()
{
	Gyro_Rad gyro_in_rad = { 0.0f, 0.0f, 0.0f };
	P_PI_PIDControlTypeDef pid;
	MotorControlTypeDef motor_pwm = { 0.0f, 0.0f, 0.0f, 0.0f };
	gTHR = MIN_THR - 1;

	PIDControlInit(&pid);

	/* make sure the controlled values are not reset */
	gTHR = MIN_THR + 1;

	/* put the values of interest at limits */
	pid_x_integ2 = -pid.x_i2_limit - 1.0f;
	pid_y_integ2 = -pid.y_i2_limit - 1.0f;
	pid_z_integ2 = -pid.z_i2_limit - 1.0f;

	pid.z_kp2 = 1000.0f;
	pid.z_ki2 = 1000.0f;
	pid.z_kd2 = 1000.0f;

	FlightControlPID_innerLoop(&gyro_in_rad, &pid, &motor_pwm);

	CPPTEST_REPORT_FLOAT("## z_s2", pid.z_s2);

	/* see if the values were brought back to their limits */
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.x_i2_limit, pid_x_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.y_i2_limit, pid_y_integ2, 0.001f);
	CPPTEST_ASSERT_FLOAT_EQUAL(-pid.z_i2_limit, pid_z_integ2, 0.001f);
}
/* CPPTEST_TEST_CASE_END test_FlightControlPID_innerLoop_below_limits */
