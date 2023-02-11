#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/usb_device.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/usb_device.c");

EXTERN_C_LINKAGE void TS_usb_device_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_usb_device_callTest(const char*);

CPPTEST_TEST_SUITE(TS_usb_device);
        CPPTEST_TEST_SUITE_SETUP(TS_usb_device_testSuiteSetUp);
        CPPTEST_TEST_DISABLED(TS_usb_device_test_MX_USB_DEVICE_Init);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_usb_device_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TS_usb_device_test_MX_USB_DEVICE_Init(void);

CPPTEST_TEST_SUITE_REGISTRATION(TS_usb_device);

void TS_usb_device_testSuiteSetUp(void);
void TS_usb_device_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_usb_device_testSuiteTearDown(void);
void TS_usb_device_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_usb_device_setUp(void);
void TS_usb_device_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_usb_device_tearDown(void);
void TS_usb_device_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_MX_USB_DEVICE_Init */
void TS_usb_device_test_MX_USB_DEVICE_Init()
{
	// disabled for now - causes test exe to hang
	MX_USB_DEVICE_Init();
}
/* CPPTEST_TEST_CASE_END test_MX_USB_DEVICE_Init */
