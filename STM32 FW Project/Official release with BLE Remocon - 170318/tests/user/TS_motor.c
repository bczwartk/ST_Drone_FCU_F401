#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/motor.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/motor.c");

EXTERN_C_LINKAGE void TS_motor_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_motor_callTest(const char*);

CPPTEST_TEST_SUITE(TS_motor);
        CPPTEST_TEST_SUITE_SETUP(TS_motor_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_motor_testSuiteTearDown);
CPPTEST_TEST(TS_motor_test_set_motor_pwm_zero);
CPPTEST_TEST(TS_motor_test_set_motor_pwm_within_range);
CPPTEST_TEST(TS_motor_test_set_motor_pwm_min);
CPPTEST_TEST(TS_motor_test_set_motor_pwm_below_min);
CPPTEST_TEST(TS_motor_test_set_motor_pwm_max);
CPPTEST_TEST(TS_motor_test_set_motor_pwm_above_max);
CPPTEST_TEST(TS_motor_test_set_single_motor_pwm_above_max);
CPPTEST_TEST(TS_motor_test_set_single_motor_pwm_below_min);
CPPTEST_TEST(TS_motor_test_set_single_motor_pwm_max);
CPPTEST_TEST(TS_motor_test_set_single_motor_pwm_min);
CPPTEST_TEST(TS_motor_test_set_single_motor_pwm_within_range);
CPPTEST_TEST_SUITE_END();
        

void TS_motor_test_set_motor_pwm_zero(void);
void TS_motor_test_set_motor_pwm_within_range(void);
void TS_motor_test_set_motor_pwm_min(void);
void TS_motor_test_set_motor_pwm_below_min(void);
void TS_motor_test_set_motor_pwm_max(void);
void TS_motor_test_set_motor_pwm_above_max(void);
void TS_motor_test_set_single_motor_pwm_above_max(void);
void TS_motor_test_set_single_motor_pwm_below_min(void);
void TS_motor_test_set_single_motor_pwm_max(void);
void TS_motor_test_set_single_motor_pwm_min(void);
void TS_motor_test_set_single_motor_pwm_within_range(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_motor);

void TS_motor_testSuiteSetUp(void);
void TS_motor_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_motor_testSuiteTearDown(void);
void TS_motor_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_motor_setUp(void);
void TS_motor_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_motor_tearDown(void);
void TS_motor_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_set_motor_pwm_zero */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm_zero(MotorControlTypeDef *) */
void TS_motor_test_set_motor_pwm_zero()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
    MotorControlTypeDef _motor_pwm_0 ;
     _motor_pwm_0.motor1_pwm  = 1.0f;
     _motor_pwm_0.motor2_pwm  = 2.0f;
     _motor_pwm_0.motor3_pwm  = 3.0f;
     _motor_pwm_0.motor4_pwm  = 4.0f;
    MotorControlTypeDef * _motor_pwm  = & _motor_pwm_0;
    {
        /* Tested function call */
        set_motor_pwm_zero(_motor_pwm);
        /* Post-condition check */
        CPPTEST_ASSERT(0 != ( _motor_pwm ) );
        CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, _motor_pwm_0.motor1_pwm, 0.001f);
        CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, _motor_pwm_0.motor2_pwm, 0.001f);
        CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, _motor_pwm_0.motor3_pwm, 0.001f);
        CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, _motor_pwm_0.motor4_pwm, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_set_motor_pwm_zero */

/* CPPTEST_TEST_CASE_BEGIN test_set_motor_pwm_within_range */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_motor_pwm_within_range()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MIN_PWM_VALUE + (MOTOR_MAX_PWM_VALUE - MOTOR_MIN_PWM_VALUE) / 2.0f;
	uint32_t exp = val;
    MotorControlTypeDef _motor_pwm_0 ;
    _motor_pwm_0.motor1_pwm  = val;
    _motor_pwm_0.motor2_pwm  = val;
    _motor_pwm_0.motor3_pwm  = val;
    _motor_pwm_0.motor4_pwm  = val;
    MotorControlTypeDef * _motor_pwm  = & _motor_pwm_0;

    htim4.Instance->CCR1 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR2 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR3 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR4 = MOTOR_MIN_PWM_VALUE;
    {
        /* Tested function call */
        set_motor_pwm(_motor_pwm);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR1);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR2);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR3);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR4);
    }
}
/* CPPTEST_TEST_CASE_END test_set_motor_pwm_within_range */

/* CPPTEST_TEST_CASE_BEGIN test_set_motor_pwm_min */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_motor_pwm_min()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MIN_PWM_VALUE;
	uint32_t exp = MOTOR_MIN_PWM_VALUE;
    MotorControlTypeDef _motor_pwm_0 ;
    _motor_pwm_0.motor1_pwm  = val;
    _motor_pwm_0.motor2_pwm  = val;
    _motor_pwm_0.motor3_pwm  = val;
    _motor_pwm_0.motor4_pwm  = val;
    MotorControlTypeDef * _motor_pwm  = & _motor_pwm_0;

    htim4.Instance->CCR1 = MOTOR_MAX_PWM_VALUE;
    htim4.Instance->CCR2 = MOTOR_MAX_PWM_VALUE;
    htim4.Instance->CCR3 = MOTOR_MAX_PWM_VALUE;
    htim4.Instance->CCR4 = MOTOR_MAX_PWM_VALUE;
    {
        /* Tested function call */
        set_motor_pwm(_motor_pwm);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR1);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR2);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR3);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR4);
    }
}
/* CPPTEST_TEST_CASE_END test_set_motor_pwm_min */

/* CPPTEST_TEST_CASE_BEGIN test_set_motor_pwm_below_min */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_motor_pwm_below_min()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MIN_PWM_VALUE - 100.0f;
	uint32_t exp = MOTOR_MIN_PWM_VALUE;
    MotorControlTypeDef _motor_pwm_0 ;
    _motor_pwm_0.motor1_pwm  = val;
    _motor_pwm_0.motor2_pwm  = val;
    _motor_pwm_0.motor3_pwm  = val;
    _motor_pwm_0.motor4_pwm  = val;
    MotorControlTypeDef * _motor_pwm  = & _motor_pwm_0;

    htim4.Instance->CCR1 = MOTOR_MAX_PWM_VALUE;
    htim4.Instance->CCR2 = MOTOR_MAX_PWM_VALUE;
    htim4.Instance->CCR3 = MOTOR_MAX_PWM_VALUE;
    htim4.Instance->CCR4 = MOTOR_MAX_PWM_VALUE;
    {
        /* Tested function call */
        set_motor_pwm(_motor_pwm);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR1);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR2);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR3);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR4);
    }
}
/* CPPTEST_TEST_CASE_END test_set_motor_pwm_below_min */

/* CPPTEST_TEST_CASE_BEGIN test_set_motor_pwm_max */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_motor_pwm_max()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MAX_PWM_VALUE;
	uint32_t exp = MOTOR_MAX_PWM_VALUE;
    MotorControlTypeDef _motor_pwm_0 ;
    _motor_pwm_0.motor1_pwm  = val;
    _motor_pwm_0.motor2_pwm  = val;
    _motor_pwm_0.motor3_pwm  = val;
    _motor_pwm_0.motor4_pwm  = val;
    MotorControlTypeDef * _motor_pwm  = & _motor_pwm_0;

    htim4.Instance->CCR1 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR2 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR3 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR4 = MOTOR_MIN_PWM_VALUE;
    {
        /* Tested function call */
        set_motor_pwm(_motor_pwm);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR1);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR2);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR3);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR4);    }
}
/* CPPTEST_TEST_CASE_END test_set_motor_pwm_max */

/* CPPTEST_TEST_CASE_BEGIN test_set_motor_pwm_above_max */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_motor_pwm_above_max()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MAX_PWM_VALUE + 100.0f;
	uint32_t exp = MOTOR_MAX_PWM_VALUE;
    MotorControlTypeDef _motor_pwm_0 ;
    _motor_pwm_0.motor1_pwm  = val;
    _motor_pwm_0.motor2_pwm  = val;
    _motor_pwm_0.motor3_pwm  = val;
    _motor_pwm_0.motor4_pwm  = val;
    MotorControlTypeDef * _motor_pwm  = & _motor_pwm_0;

    htim4.Instance->CCR1 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR2 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR3 = MOTOR_MIN_PWM_VALUE;
    htim4.Instance->CCR4 = MOTOR_MIN_PWM_VALUE;
    {
        /* Tested function call */
        set_motor_pwm(_motor_pwm);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR1);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR2);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR3);
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, htim4.Instance->CCR4);
    }
}
/* CPPTEST_TEST_CASE_END test_set_motor_pwm_above_max */

/* CPPTEST_TEST_CASE_BEGIN test_set_single_motor_pwm_above_max */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_single_motor_pwm_above_max()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MAX_PWM_VALUE + 100.0f;
	uint32_t exp = MOTOR_MAX_PWM_VALUE;
	uint32_t ccr = MOTOR_MIN_PWM_VALUE;

    {
        /* Tested function call */
        set_single_motor_pwm(&ccr, val);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, ccr);
    }
}
/* CPPTEST_TEST_CASE_END test_set_single_motor_pwm_above_max */

/* CPPTEST_TEST_CASE_BEGIN test_set_single_motor_pwm_below_min */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_single_motor_pwm_below_min()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MIN_PWM_VALUE - 100.0f;
	uint32_t exp = MOTOR_MIN_PWM_VALUE;
	uint32_t ccr = MOTOR_MAX_PWM_VALUE;

    {
        /* Tested function call */
        set_single_motor_pwm(&ccr, val);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, ccr);
    }
}
/* CPPTEST_TEST_CASE_END test_set_single_motor_pwm_below_min */

/* CPPTEST_TEST_CASE_BEGIN test_set_single_motor_pwm_max */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_single_motor_pwm_max()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MAX_PWM_VALUE;
	uint32_t exp = MOTOR_MAX_PWM_VALUE;
	uint32_t ccr = MOTOR_MIN_PWM_VALUE;

    {
        /* Tested function call */
        set_single_motor_pwm(&ccr, val);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, ccr);
   }
}
/* CPPTEST_TEST_CASE_END test_set_single_motor_pwm_max */

/* CPPTEST_TEST_CASE_BEGIN test_set_single_motor_pwm_min */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_single_motor_pwm_min()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MIN_PWM_VALUE;
	uint32_t exp = MOTOR_MIN_PWM_VALUE;
	uint32_t ccr = MOTOR_MAX_PWM_VALUE;

    {
        /* Tested function call */
        set_single_motor_pwm(&ccr, val);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, ccr);
    }
}
/* CPPTEST_TEST_CASE_END test_set_single_motor_pwm_min */

/* CPPTEST_TEST_CASE_BEGIN test_set_single_motor_pwm_within_range */
/* CPPTEST_TEST_CASE_CONTEXT void set_motor_pwm(MotorControlTypeDef *) */
void TS_motor_test_set_single_motor_pwm_within_range()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (motor_pwm) */ 
	float val = MOTOR_MIN_PWM_VALUE + (MOTOR_MAX_PWM_VALUE - MOTOR_MIN_PWM_VALUE) / 2.0f;
	uint32_t exp = val;
	uint32_t ccr = MOTOR_MIN_PWM_VALUE;

    {
        /* Tested function call */
        set_single_motor_pwm(&ccr, val);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(exp, ccr);
   }
}
/* CPPTEST_TEST_CASE_END test_set_single_motor_pwm_within_range */

