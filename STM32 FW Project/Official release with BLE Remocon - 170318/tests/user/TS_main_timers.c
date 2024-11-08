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


// stub callbacks
// the currently processed timer structure - to be set in a test case init section - either htim2, htim4, or htim9
TIM_TypeDef * pCppTest_StubCallback_HAL_TIM_curr_timer = 0;
TIM_HandleTypeDef * pCppTest_StubCallback_HAL_TIM_curr_handle = 0;

void CppTest_StubCallback_HAL_TIM_Base_Init(CppTest_StubCallInfo* stubCallInfo,
											HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim)
{
	CPPTEST_ASSERT_PTR_EQUAL(pCppTest_StubCallback_HAL_TIM_curr_handle, htim);
	CPPTEST_ASSERT_PTR_EQUAL(pCppTest_StubCallback_HAL_TIM_curr_timer, htim->Instance);
	// delegate to the original
	*__return = HAL_TIM_Base_Init(htim);
}
// CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_Base_Init", &CppTest_StubCallback_HAL_TIM_Base_Init);

void CppTest_StubCallback_HAL_TIM_ConfigClockSource(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return,
								   TIM_HandleTypeDef * htim, TIM_ClockConfigTypeDef * sClockSourceConfig)
{
	CPPTEST_ASSERT_PTR_EQUAL(pCppTest_StubCallback_HAL_TIM_curr_handle, htim);
	CPPTEST_ASSERT_PTR_EQUAL(pCppTest_StubCallback_HAL_TIM_curr_timer, htim->Instance);
	// delegate to the original
	*__return = HAL_TIM_ConfigClockSource(htim, sClockSourceConfig);;
}
// CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_ConfigClockSource", &CppTest_StubCallback_HAL_TIM_ConfigClockSource);


/* CPPTEST_TEST_CASE_BEGIN test_MX_TIM2_Init */
void TS_main_timers_test_MX_TIM2_Init()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_Base_Init", &CppTest_StubCallback_HAL_TIM_Base_Init);
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_ConfigClockSource", &CppTest_StubCallback_HAL_TIM_ConfigClockSource);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_Base_Init", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_ConfigClockSource", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_IC_Init", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIMEx_MasterConfigSynchronization", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_IC_ConfigChannel", 4);

	pCppTest_StubCallback_HAL_TIM_curr_timer = TIM2;
	pCppTest_StubCallback_HAL_TIM_curr_handle = &htim2;

	MX_TIM2_Init();
	CPPTEST_MESSAGE("#### TODO: need assertions and stubs for the test case");
}
/* CPPTEST_TEST_CASE_END test_MX_TIM2_Init */

/* CPPTEST_TEST_CASE_BEGIN test_MX_TIM4_Init */
void TS_main_timers_test_MX_TIM4_Init()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_Base_Init", &CppTest_StubCallback_HAL_TIM_Base_Init);
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_ConfigClockSource", &CppTest_StubCallback_HAL_TIM_ConfigClockSource);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_Base_Init", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_ConfigClockSource", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_PWM_Init", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIMEx_MasterConfigSynchronization", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_PWM_ConfigChannel", 4);

	pCppTest_StubCallback_HAL_TIM_curr_timer = TIM4;
	pCppTest_StubCallback_HAL_TIM_curr_handle = &htim4;

	MX_TIM4_Init();
	CPPTEST_MESSAGE("#### TODO: need assertions and stubs for the test case");
}
/* CPPTEST_TEST_CASE_END test_MX_TIM4_Init */

/* CPPTEST_TEST_CASE_BEGIN test_MX_TIM9_Init */
void TS_main_timers_test_MX_TIM9_Init()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_Base_Init", &CppTest_StubCallback_HAL_TIM_Base_Init);
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_ConfigClockSource", &CppTest_StubCallback_HAL_TIM_ConfigClockSource);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_Base_Init", 1);
	CPPTEST_EXPECT_NCALLS("HAL_TIM_ConfigClockSource", 1);

	pCppTest_StubCallback_HAL_TIM_curr_timer = TIM9;
	pCppTest_StubCallback_HAL_TIM_curr_handle = &htim9;

	MX_TIM9_Init();
	CPPTEST_MESSAGE("#### TODO: need assertions and stubs for the test case");
}
/* CPPTEST_TEST_CASE_END test_MX_TIM9_Init */
