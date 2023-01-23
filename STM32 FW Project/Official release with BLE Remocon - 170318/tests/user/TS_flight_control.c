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
CPPTEST_TEST_SUITE_END();
        
void TS_flight_control_test_PIDControlInit(void);

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
