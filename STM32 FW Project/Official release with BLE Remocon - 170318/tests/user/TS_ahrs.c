#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/ahrs.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/ahrs.c");

EXTERN_C_LINKAGE void TS_ahrs_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_ahrs_callTest(const char*);

CPPTEST_TEST_SUITE(TS_ahrs);
        CPPTEST_TEST_SUITE_SETUP(TS_ahrs_testSuiteSetUp);
        CPPTEST_TEST(TS_ahrs_test_ahrs_simple_1);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_ahrs_testSuiteTearDown);
CPPTEST_TEST(TS_ahrs_test_ahrs_simple_2);
CPPTEST_TEST_SUITE_END();
        
void TS_ahrs_test_ahrs_simple_1(void);

void TS_ahrs_test_ahrs_simple_2(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_ahrs);

void TS_ahrs_testSuiteSetUp(void);
void TS_ahrs_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_ahrs_testSuiteTearDown(void);
void TS_ahrs_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_ahrs_setUp(void);
void TS_ahrs_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_ahrs_tearDown(void);
void TS_ahrs_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_ahrs_simple_1 */
void TS_ahrs_test_ahrs_simple_1()
{
	AxesRaw_TypeDef_Float acc_in = { 0.0f, 0.0f, 0.0f };
	AxesRaw_TypeDef_Float gyro_in = { 0.0f, 0.0f, 0.0f };
	AHRS_State_TypeDef ahrs_in = { { 0.0f, 0.0f, 0.0f, 0.0f }, 0.0f, 0.0f, 0.0f };
	gTHR = MIN_THR - 1;

	ahrs_fusion_ag(&acc_in, &gyro_in, &ahrs_in);

	CPPTEST_ASSERT_FLOAT_EQUAL(AHRS_KP_BIG, ahrs_kp, 0.001f)
}
/* CPPTEST_TEST_CASE_END test_ahrs_simple_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ahrs_simple_2 */
void TS_ahrs_test_ahrs_simple_2()
{
	AxesRaw_TypeDef_Float acc_in = { 0.0f, 0.0f, 0.0f };
	AxesRaw_TypeDef_Float gyro_in = { 0.0f, 0.0f, 0.0f };
	AHRS_State_TypeDef ahrs_in = { { 0.0f, 0.0f, 0.0f, 0.0f }, 0.0f, 0.0f, 0.0f };
	gTHR = MIN_THR + 1;

	ahrs_fusion_ag(&acc_in, &gyro_in, &ahrs_in);

	CPPTEST_ASSERT_FLOAT_EQUAL(AHRS_KP_NORM, ahrs_kp, 0.001f)
}
/* CPPTEST_TEST_CASE_END test_ahrs_simple_2 */
