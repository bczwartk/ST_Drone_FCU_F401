#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/main.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/main.c");

EXTERN_C_LINKAGE void TS_main_timers_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_main_timers_callTest(const char*);

CPPTEST_TEST_SUITE(TS_main_timers);
        CPPTEST_TEST_SUITE_SETUP(TS_main_timers_testSuiteSetUp);
        CPPTEST_TEST(TS_main_timers_test_MX_TIM2_Init);
        CPPTEST_TEST(TS_main_timers_test_MX_TIM4_Init);
        CPPTEST_TEST(TS_main_timers_test_MX_TIM9_Init);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_main_timers_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TS_main_timers_test_MX_TIM2_Init(void);
void TS_main_timers_test_MX_TIM4_Init(void);
void TS_main_timers_test_MX_TIM9_Init(void);

CPPTEST_TEST_SUITE_REGISTRATION(TS_main_timers);

void TS_main_timers_testSuiteSetUp(void);
void TS_main_timers_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_main_timers_testSuiteTearDown(void);
void TS_main_timers_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_main_timers_setUp(void);
void TS_main_timers_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_main_timers_tearDown(void);
void TS_main_timers_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_MX_TIM2_Init */
void TS_main_timers_test_MX_TIM2_Init()
{
	MX_TIM2_Init();
	CPPTEST_MESSAGE("#### TODO: need assertions and stubs for the test case");
}
/* CPPTEST_TEST_CASE_END test_MX_TIM2_Init */

/* CPPTEST_TEST_CASE_BEGIN test_MX_TIM4_Init */
void TS_main_timers_test_MX_TIM4_Init()
{
	MX_TIM4_Init();
	CPPTEST_MESSAGE("#### TODO: need assertions and stubs for the test case");
}
/* CPPTEST_TEST_CASE_END test_MX_TIM4_Init */

/* CPPTEST_TEST_CASE_BEGIN test_MX_TIM9_Init */
void TS_main_timers_test_MX_TIM9_Init()
{
	MX_TIM9_Init();
	CPPTEST_MESSAGE("#### TODO: need assertions and stubs for the test case");
}
/* CPPTEST_TEST_CASE_END test_MX_TIM9_Init */
