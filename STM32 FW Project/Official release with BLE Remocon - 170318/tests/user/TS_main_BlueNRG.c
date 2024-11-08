#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/main.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/main.c");

EXTERN_C_LINKAGE void TS_main_BlueNRG_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_main_BlueNRG_callTest(const char*);

CPPTEST_TEST_SUITE(TS_main_BlueNRG);
        CPPTEST_TEST_SUITE_SETUP(TS_main_BlueNRG_testSuiteSetUp);
        CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_all_OK);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_main_BlueNRG_testSuiteTearDown);
CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_hw_serv_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_console_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_config_fail);
CPPTEST_TEST_SUITE_END();
        
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_all_OK(void);

void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_hw_serv_fail(void);
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_console_fail(void);
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_config_fail(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_main_BlueNRG);

void TS_main_BlueNRG_testSuiteSetUp(void);
void TS_main_BlueNRG_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_main_BlueNRG_testSuiteTearDown(void);
void TS_main_BlueNRG_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_main_BlueNRG_setUp(void);
void TS_main_BlueNRG_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_main_BlueNRG_tearDown(void);
void TS_main_BlueNRG_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


// callbacks
void CppTest_StubCallback_Add_HWServW2ST_Service_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
{
	*__return = BLE_STATUS_ERROR;
}
void CppTest_StubCallback_Add_ConsoleW2ST_Service_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
{
	*__return = BLE_STATUS_ERROR;
}
void CppTest_StubCallback_Add_ConfigW2ST_Service_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
{
	*__return = BLE_STATUS_ERROR;
}


/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_all_OK */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_all_OK()
{
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_all_OK */

/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_hw_serv_fail */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_hw_serv_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("Add_HWServW2ST_Service", &CppTest_StubCallback_Add_HWServW2ST_Service_fail);
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_hw_serv_fail */

/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_console_fail */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_console_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("Add_ConsoleW2ST_Service", &CppTest_StubCallback_Add_ConsoleW2ST_Service_fail);
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_console_fail */

/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_config_fail */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_config_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("Add_ConfigW2ST_Service", &CppTest_StubCallback_Add_ConfigW2ST_Service_fail);
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_config_fail */
