#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/usbd_conf.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/usbd_conf.c");

EXTERN_C_LINKAGE void TS_usbd_conf_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_usbd_conf_callTest(const char*);

CPPTEST_TEST_SUITE(TS_usbd_conf);
        CPPTEST_TEST_SUITE_SETUP(TS_usbd_conf_testSuiteSetUp);
        CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Delay_value);
        CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Delay_zero);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_usbd_conf_testSuiteTearDown);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Init_no_FS);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Init_with_FS);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_DeInit);
CPPTEST_TEST_SUITE_END();
        
void TS_usbd_conf_test_USBD_LL_Delay_value(void);
void TS_usbd_conf_test_USBD_LL_Delay_zero(void);

void TS_usbd_conf_test_USBD_LL_Init_no_FS(void);
void TS_usbd_conf_test_USBD_LL_Init_with_FS(void);
void TS_usbd_conf_test_USBD_LL_DeInit(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_usbd_conf);

void TS_usbd_conf_testSuiteSetUp(void);
void TS_usbd_conf_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_usbd_conf_testSuiteTearDown(void);
void TS_usbd_conf_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_usbd_conf_setUp(void);
void TS_usbd_conf_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_usbd_conf_tearDown(void);
void TS_usbd_conf_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_DeInit */
void TS_usbd_conf_test_USBD_LL_DeInit()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_DeInit", 1);

    USBD_HandleTypeDef dev;
    USBD_StatusTypeDef ret;

    ret = USBD_LL_DeInit(& dev);

    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_DeInit */

void CppTest_StubCallback_HAL_Delay(CppTest_StubCallInfo* stubCallInfo, volatile uint32_t Delay)
{
	// do nothing - the original causes test exe to get stuck
}

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Delay_value */
void TS_usbd_conf_test_USBD_LL_Delay_value()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_Delay", &CppTest_StubCallback_HAL_Delay);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);
	USBD_LL_Delay(1u);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Delay_value */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Delay_zero */
void TS_usbd_conf_test_USBD_LL_Delay_zero()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_Delay", &CppTest_StubCallback_HAL_Delay);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);
	USBD_LL_Delay(0u);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Delay_zero */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Init_no_FS */
void TS_usbd_conf_test_USBD_LL_Init_no_FS()
{
    USBD_HandleTypeDef dev;
    USBD_StatusTypeDef ret;
    dev.id = DEVICE_FS + 1;

    ret = USBD_LL_Init(& dev);

    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Init_no_FS */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Init_with_FS */
void TS_usbd_conf_test_USBD_LL_Init_with_FS()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_Init", 1);

	USBD_HandleTypeDef dev;
    USBD_StatusTypeDef ret;
    dev.id = DEVICE_FS;

    ret = USBD_LL_Init(& dev);

    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Init_with_FS */
