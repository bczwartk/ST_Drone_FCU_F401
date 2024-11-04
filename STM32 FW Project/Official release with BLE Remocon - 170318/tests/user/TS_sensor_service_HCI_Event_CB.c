#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/sensor_service.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/sensor_service.c");

EXTERN_C_LINKAGE void TS_sensor_service_HCI_Event_CB_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_sensor_service_HCI_Event_CB_callTest(const char*);

CPPTEST_TEST_SUITE(TS_sensor_service_HCI_Event_CB);
        CPPTEST_TEST_SUITE_SETUP(TS_sensor_service_HCI_Event_CB_testSuiteSetUp);
        CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_pckt);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_sensor_service_HCI_Event_CB_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_pckt(void);

CPPTEST_TEST_SUITE_REGISTRATION(TS_sensor_service_HCI_Event_CB);

void TS_sensor_service_HCI_Event_CB_testSuiteSetUp(void);
void TS_sensor_service_HCI_Event_CB_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_sensor_service_HCI_Event_CB_testSuiteTearDown(void);
void TS_sensor_service_HCI_Event_CB_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_sensor_service_HCI_Event_CB_setUp(void);
void TS_sensor_service_HCI_Event_CB_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_sensor_service_HCI_Event_CB_tearDown(void);
void TS_sensor_service_HCI_Event_CB_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_other_pckt */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_pckt()
{
    // packet of irrelevant type
	hci_uart_pckt pckt;
	pckt.type = HCI_VENDOR_PKT;
	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_other_pckt */
