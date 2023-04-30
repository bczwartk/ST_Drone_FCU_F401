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
CPPTEST_TEST(TS_usbd_cdc_if_test_CDC_Transmit_FS);
CPPTEST_TEST_SUITE_END();
        

void TS_usbd_cdc_if_test_CDC_DeInit_FS(void);
void TS_usbd_cdc_if_test_CDC_Receive_FS(void);
void TS_usbd_cdc_if_test_CDC_Control_FS(void);
void TS_usbd_cdc_if_test_CDC_Init_FS(void);
void TS_usbd_cdc_if_test_CDC_Transmit_FS(void);
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


void CppTest_StubCallback_USBD_CDC_SetTxBuffer(CppTest_StubCallInfo* stubCallInfo, uint8_t* __return, USBD_HandleTypeDef * pdev, uint8_t * pbuff, uint16_t length)
{
	*__return = USBD_OK;
}

void CppTest_StubCallback_USBD_CDC_TransmitPacket(CppTest_StubCallInfo* stubCallInfo, uint8_t* __return, USBD_HandleTypeDef * pdev)
{
	*__return = USBD_OK;
}

/* CPPTEST_TEST_CASE_BEGIN test_CDC_Transmit_FS */
void TS_usbd_cdc_if_test_CDC_Transmit_FS()
{
	// note:  we cannot operate on the real tx buffer not to hang everything
	//        so we stub the functions that do the actual tx stuff,
	//        and only check if they were called
	CPPTEST_REGISTER_STUB_CALLBACK("USBD_CDC_SetTxBuffer", &CppTest_StubCallback_USBD_CDC_SetTxBuffer);
	CPPTEST_REGISTER_STUB_CALLBACK("USBD_CDC_TransmitPacket", &CppTest_StubCallback_USBD_CDC_TransmitPacket);
	CPPTEST_EXPECT_NCALLS("USBD_CDC_SetTxBuffer", 1);
	CPPTEST_EXPECT_NCALLS("USBD_CDC_TransmitPacket", 1);

	uint8_t buf[8u];
    int8_t ret;
    buf[0] = 1u;
    buf[1] = 2u;
    buf[2] = 3u;
    buf[3] = 0u;

    ret = CDC_Transmit_FS(buf, 4u);

    CPPTEST_ASSERT_INTEGER_EQUAL(USBD_OK, ret);
    // no changes expected here:
    CPPTEST_ASSERT_UINTEGER_EQUAL(1u, buf[0]);
    CPPTEST_ASSERT_UINTEGER_EQUAL(2u, buf[1]);
    CPPTEST_ASSERT_UINTEGER_EQUAL(3u, buf[2]);
    CPPTEST_ASSERT_UINTEGER_EQUAL(0u, buf[3]);
}
/* CPPTEST_TEST_CASE_END test_CDC_Transmit_FS */
