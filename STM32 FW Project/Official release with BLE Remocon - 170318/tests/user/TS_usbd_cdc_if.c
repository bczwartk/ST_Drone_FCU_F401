#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/usbd_cdc_if.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/usbd_cdc_if.c");

EXTERN_C_LINKAGE void TS_usbd_cdc_if_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_usbd_cdc_if_callTest(const char*);

CPPTEST_TEST_SUITE(TS_usbd_cdc_if);
        CPPTEST_TEST_SUITE_SETUP(TS_usbd_cdc_if_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_usbd_cdc_if_testSuiteTearDown);
CPPTEST_TEST(TS_usbd_cdc_if_test_CDC_DeInit_FS);
CPPTEST_TEST(TS_usbd_cdc_if_test_CDC_Receive_FS);
CPPTEST_TEST_DS(TS_usbd_cdc_if_test_CDC_Control_FS, CPPTEST_DS("TS_usbd_cdc_if_CDC_Control_FS"));
CPPTEST_TEST(TS_usbd_cdc_if_test_CDC_Init_FS);
CPPTEST_TEST_SUITE_END();
        

void TS_usbd_cdc_if_test_CDC_DeInit_FS(void);
void TS_usbd_cdc_if_test_CDC_Receive_FS(void);
void TS_usbd_cdc_if_test_CDC_Control_FS(void);
void TS_usbd_cdc_if_test_CDC_Init_FS(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_usbd_cdc_if);

void TS_usbd_cdc_if_testSuiteSetUp(void);
void TS_usbd_cdc_if_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_usbd_cdc_if_testSuiteTearDown(void);
void TS_usbd_cdc_if_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_usbd_cdc_if_setUp(void);
void TS_usbd_cdc_if_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_usbd_cdc_if_tearDown(void);
void TS_usbd_cdc_if_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_CDC_DeInit_FS */
void TS_usbd_cdc_if_test_CDC_DeInit_FS()
{
    int8_t ret;
    ret = CDC_DeInit_FS();
    CPPTEST_ASSERT_INTEGER_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_CDC_DeInit_FS */

/* CPPTEST_TEST_CASE_BEGIN test_CDC_Receive_FS */
void TS_usbd_cdc_if_test_CDC_Receive_FS()
{
	uint8_t buf = 0u;
	uint32_t len = 0u;
    int8_t ret;
    ret = CDC_Receive_FS(&buf, &len);
    CPPTEST_ASSERT_INTEGER_EQUAL(USBD_OK, ret);
    // no changes expected here:
    CPPTEST_ASSERT_UINTEGER_EQUAL(0u, buf);
    CPPTEST_ASSERT_UINTEGER_EQUAL(0u, len);
}
/* CPPTEST_TEST_CASE_END test_CDC_Receive_FS */

/* CPPTEST_TEST_CASE_BEGIN test_CDC_Control_FS */
/* CPPTEST_TEST_CASE_CONTEXT int8_t CDC_Control_FS(uint8_t, uint8_t *, uint16_t) */
void TS_usbd_cdc_if_test_CDC_Control_FS()
{
    uint8_t cmd  = CPPTEST_DS_GET_UINTEGER("command_id");
    uint8_t buf  = 0u;
    uint8_t * pbuf  = & buf;
    uint16_t length  = 0u;
    int8_t ret;

    {
        /* Tested function call */
        ret  = CDC_Control_FS(cmd, pbuf, length);
    }

    CPPTEST_ASSERT_INTEGER_EQUAL(USBD_OK, ret);
    // no changes expected here:
    CPPTEST_ASSERT_UINTEGER_EQUAL(0u, buf);
}
/* CPPTEST_TEST_CASE_END test_CDC_Control_FS */

/* CPPTEST_TEST_CASE_BEGIN test_CDC_Init_FS */
void TS_usbd_cdc_if_test_CDC_Init_FS()
{
    int8_t ret;
    ret = CDC_Init_FS();
    CPPTEST_ASSERT_INTEGER_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_CDC_Init_FS */
