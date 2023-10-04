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
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Start);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Stop);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Stop_copy);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_OpenEP);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_CloseEP);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_FlushEP);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_StallEP);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_ClearStallEP);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_full);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_high);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_default);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_SetupStageCallback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_DataOutStageCallback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_DataInStageCallback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_SOFCallback_not_configured);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_SOFCallback_no_callback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_SOFCallback_with_callback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ISOOUTIncompleteCallback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ISOINIncompleteCallback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ConnectCallback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_DisconnectCallback);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_Transmit);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_PrepareReceive);
CPPTEST_TEST(TS_usbd_conf_test_USBD_LL_SetUSBAddress);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ResumeCallback_1);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_ResumeCallback_2);
CPPTEST_TEST_DS(TS_usbd_conf_test_USBD_LL_GetRxDataSize_ds, CPPTEST_DS("TS_usbd_conf_test_USBD_LL_GetRxDataSiz"));
CPPTEST_TEST_DS(TS_usbd_conf_test_USBD_LL_IsStallEP_ds, CPPTEST_DS("TS_usbd_conf_test_USBD_LL_IsStallEP"));
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_SuspendCallback);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_MspDeInit_no_instance);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_MspDeInit_with_USB_OTG_FS);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_MspInit_no_instance);
CPPTEST_TEST(TS_usbd_conf_test_HAL_PCD_MspInit_with_USB_OTG_FS);
CPPTEST_TEST_SUITE_END();
        
void TS_usbd_conf_test_USBD_LL_Delay_value(void);
void TS_usbd_conf_test_USBD_LL_Delay_zero(void);

void TS_usbd_conf_test_USBD_LL_Init_no_FS(void);
void TS_usbd_conf_test_USBD_LL_Init_with_FS(void);
void TS_usbd_conf_test_USBD_LL_DeInit(void);
void TS_usbd_conf_test_USBD_LL_Start(void);
void TS_usbd_conf_test_USBD_LL_Stop(void);
void TS_usbd_conf_test_USBD_LL_Stop_copy(void);
void TS_usbd_conf_test_USBD_LL_OpenEP(void);
void TS_usbd_conf_test_USBD_LL_CloseEP(void);
void TS_usbd_conf_test_USBD_LL_FlushEP(void);
void TS_usbd_conf_test_USBD_LL_StallEP(void);
void TS_usbd_conf_test_USBD_LL_ClearStallEP(void);
void TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_full(void);
void TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_high(void);
void TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_default(void);
void TS_usbd_conf_test_HAL_PCD_SetupStageCallback(void);
void TS_usbd_conf_test_HAL_PCD_DataOutStageCallback(void);
void TS_usbd_conf_test_HAL_PCD_DataInStageCallback(void);
void TS_usbd_conf_test_HAL_PCD_SOFCallback_not_configured(void);
void TS_usbd_conf_test_HAL_PCD_SOFCallback_not_callback(void);
void TS_usbd_conf_test_HAL_PCD_SOFCallback_with_callback(void);
void TS_usbd_conf_test_HAL_PCD_ISOOUTIncompleteCallback(void);
void TS_usbd_conf_test_HAL_PCD_ISOINIncompleteCallback(void);
void TS_usbd_conf_test_HAL_PCD_ConnectCallback(void);
void TS_usbd_conf_test_HAL_PCD_DisconnectCallback(void);
void TS_usbd_conf_test_USBD_LL_Transmit(void);
void TS_usbd_conf_test_USBD_LL_PrepareReceive(void);
void TS_usbd_conf_test_USBD_LL_SetUSBAddress(void);
void TS_usbd_conf_test_HAL_PCD_ResumeCallback_1(void);
void TS_usbd_conf_test_HAL_PCD_ResumeCallback_2(void);
void TS_usbd_conf_test_USBD_LL_GetRxDataSize_ds(void);
void TS_usbd_conf_test_USBD_LL_IsStallEP_ds(void);
void TS_usbd_conf_test_HAL_PCD_SuspendCallback(void);
void TS_usbd_conf_test_HAL_PCD_MspDeInit_no_instance(void);
void TS_usbd_conf_test_HAL_PCD_MspDeInit_with_USB_OTG_FS(void);
void TS_usbd_conf_test_HAL_PCD_MspInit_no_instance(void);
void TS_usbd_conf_test_HAL_PCD_MspInit_with_USB_OTG_FS(void);
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
	CPPTEST_EXPECT_NCALLS("HAL_PCD_Init", 0);
	CPPTEST_EXPECT_NCALLS("HAL_PCDEx_SetRxFiFo", 0);
	CPPTEST_EXPECT_NCALLS("HAL_PCDEx_SetTxFiFo", 0);

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
	CPPTEST_EXPECT_NCALLS("HAL_PCDEx_SetRxFiFo", 1);
	CPPTEST_EXPECT_NCALLS("HAL_PCDEx_SetTxFiFo", 2);

	USBD_HandleTypeDef dev;
    USBD_StatusTypeDef ret;
    dev.id = DEVICE_FS;

    ret = USBD_LL_Init(& dev);

    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Init_with_FS */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Start */
void TS_usbd_conf_test_USBD_LL_Start()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_Start", 1);
	USBD_HandleTypeDef dev;
    USBD_StatusTypeDef ret;
    ret = USBD_LL_Start(& dev);
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Start */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Stop */
void TS_usbd_conf_test_USBD_LL_Stop()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_Stop", 1);
	USBD_HandleTypeDef dev;
    USBD_StatusTypeDef ret;
    ret = USBD_LL_Stop(& dev);
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Stop */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Stop_copy */
void TS_usbd_conf_test_USBD_LL_Stop_copy()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_Stop", 1);
	USBD_HandleTypeDef dev;
    USBD_StatusTypeDef ret;
    ret = USBD_LL_Stop(& dev);
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Stop_copy */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_OpenEP */
/* CPPTEST_TEST_CASE_CONTEXT USBD_StatusTypeDef USBD_LL_OpenEP(USBD_HandleTypeDef *, uint8_t, uint8_t, uint16_t) */
void TS_usbd_conf_test_USBD_LL_OpenEP()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_EP_Open", 1);
    USBD_HandleTypeDef pdev ;
    uint8_t ep_addr = 0;
    uint8_t ep_type = 0;
    uint16_t ep_mps = 0u;

    /* Tested function call */
    USBD_StatusTypeDef ret  = USBD_LL_OpenEP(& pdev, ep_addr, ep_type, ep_mps);

    /* Post-condition check */
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_OpenEP */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_CloseEP */
/* CPPTEST_TEST_CASE_CONTEXT USBD_StatusTypeDef USBD_LL_OpenEP(USBD_HandleTypeDef *, uint8_t, uint8_t, uint16_t) */
void TS_usbd_conf_test_USBD_LL_CloseEP()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_EP_Close", 1);
    USBD_HandleTypeDef pdev ;
    uint8_t ep_addr = 0;

    /* Tested function call */
    USBD_StatusTypeDef ret  = USBD_LL_CloseEP(& pdev, ep_addr);

    /* Post-condition check */
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_CloseEP */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_FlushEP */
/* CPPTEST_TEST_CASE_CONTEXT USBD_StatusTypeDef USBD_LL_OpenEP(USBD_HandleTypeDef *, uint8_t, uint8_t, uint16_t) */
void TS_usbd_conf_test_USBD_LL_FlushEP()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_EP_Flush", 1);
    USBD_HandleTypeDef pdev ;
    uint8_t ep_addr = 0;

    /* Tested function call */
    USBD_StatusTypeDef ret = USBD_LL_FlushEP(& pdev, ep_addr);

    /* Post-condition check */
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_FlushEP */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_StallEP */
/* CPPTEST_TEST_CASE_CONTEXT USBD_StatusTypeDef USBD_LL_OpenEP(USBD_HandleTypeDef *, uint8_t, uint8_t, uint16_t) */
void TS_usbd_conf_test_USBD_LL_StallEP()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_EP_SetStall", 1);
    USBD_HandleTypeDef pdev ;
    uint8_t ep_addr = 0;

    /* Tested function call */
    USBD_StatusTypeDef ret  = USBD_LL_StallEP(& pdev, ep_addr);

    /* Post-condition check */
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_StallEP */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_ClearStallEP */
/* CPPTEST_TEST_CASE_CONTEXT USBD_StatusTypeDef USBD_LL_OpenEP(USBD_HandleTypeDef *, uint8_t, uint8_t, uint16_t) */
void TS_usbd_conf_test_USBD_LL_ClearStallEP()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_EP_ClrStall", 1);
    USBD_HandleTypeDef pdev ;
    uint8_t ep_addr = 0;

    /* Tested function call */
    USBD_StatusTypeDef ret = USBD_LL_ClearStallEP(& pdev, ep_addr);

    /* Post-condition check */
    CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_ClearStallEP */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ResetCallback_speed_full */
void TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_full()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_Reset", 1);

	PCD_HandleTypeDef pcdHandle;
	USBD_HandleTypeDef usbdHandle;

	pcdHandle.Init.speed = PCD_SPEED_FULL;
	pcdHandle.pData = & usbdHandle;

	HAL_PCD_ResetCallback(& pcdHandle);

	CPPTEST_ASSERT_EQUAL(USBD_SPEED_FULL, usbdHandle.dev_speed);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ResetCallback_speed_full */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ResetCallback_speed_high */
void TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_high()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_Reset", 1);

	PCD_HandleTypeDef pcdHandle;
	USBD_HandleTypeDef usbdHandle;

	pcdHandle.Init.speed = PCD_SPEED_HIGH;
	pcdHandle.pData = & usbdHandle;

	HAL_PCD_ResetCallback(& pcdHandle);

	CPPTEST_ASSERT_EQUAL(USBD_SPEED_HIGH, usbdHandle.dev_speed);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ResetCallback_speed_high */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ResetCallback_speed_default */
void TS_usbd_conf_test_HAL_PCD_ResetCallback_speed_default()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_Reset", 1);

	PCD_HandleTypeDef pcdHandle;
	USBD_HandleTypeDef usbdHandle;

	// see Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_pcd.h
	pcdHandle.Init.speed = PCD_SPEED_HIGH_IN_FULL; // TODO: set to a "strange" value
	pcdHandle.pData = & usbdHandle;

	HAL_PCD_ResetCallback(& pcdHandle);

	CPPTEST_ASSERT_EQUAL(USBD_SPEED_FULL, usbdHandle.dev_speed);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ResetCallback_speed_default */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_SetupStageCallback */
void TS_usbd_conf_test_HAL_PCD_SetupStageCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_SetupStage", 1);
	PCD_HandleTypeDef pcdHandle;
	HAL_PCD_SetupStageCallback(&pcdHandle);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_SetupStageCallback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_DataOutStageCallback */
void TS_usbd_conf_test_HAL_PCD_DataOutStageCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_DataOutStage", 1);

	uint8_t epnum = 0u;
	PCD_HandleTypeDef pcdHandle;
	USBD_HandleTypeDef usbdHandle;
	pcdHandle.pData = & usbdHandle;
	pcdHandle.OUT_ep[epnum].xfer_buff = NULL; // we can pass null because of no-op stub

	HAL_PCD_DataOutStageCallback(&pcdHandle, epnum);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_DataOutStageCallback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_DataInStageCallback */
void TS_usbd_conf_test_HAL_PCD_DataInStageCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_DataInStage", 1);

	uint8_t epnum = 0u;
	PCD_HandleTypeDef pcdHandle;
	USBD_HandleTypeDef usbdHandle;
	pcdHandle.pData = & usbdHandle;
	pcdHandle.IN_ep[epnum].xfer_buff = NULL; // we can pass null because of no-op stub

	HAL_PCD_DataInStageCallback(&pcdHandle, epnum);}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_DataInStageCallback */

static uint8_t helper_HAL_PCD_SOFCallback_ncalls = 0u;
static uint8_t helper_HAL_PCD_SOFCallback(struct _USBD_HandleTypeDef *pdev)
{
	helper_HAL_PCD_SOFCallback_ncalls ++;
}

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_SOFCallback_not_configured */
void TS_usbd_conf_test_HAL_PCD_SOFCallback_not_configured()
{
	USBD_ClassTypeDef usbdClass;
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;

	usbdClass.SOF = NULL;
	usbdHandle.dev_state = USBD_STATE_DEFAULT;
	usbdHandle.pClass = & usbdClass;
	pcdHandle.pData = & usbdHandle;

	helper_HAL_PCD_SOFCallback_ncalls = 0u;

	HAL_PCD_SOFCallback(&pcdHandle);

	CPPTEST_ASSERT_UINTEGER_EQUAL(0u, helper_HAL_PCD_SOFCallback_ncalls);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_SOFCallback_not_configured */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_SOFCallback_no_callback */
void TS_usbd_conf_test_HAL_PCD_SOFCallback_no_callback()
{
	USBD_ClassTypeDef usbdClass;
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;

	usbdClass.SOF = NULL;
	usbdHandle.dev_state = USBD_STATE_CONFIGURED;
	usbdHandle.pClass = & usbdClass;
	pcdHandle.pData = & usbdHandle;

	helper_HAL_PCD_SOFCallback_ncalls = 0u;

	HAL_PCD_SOFCallback(&pcdHandle);

	CPPTEST_ASSERT_UINTEGER_EQUAL(0u, helper_HAL_PCD_SOFCallback_ncalls);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_SOFCallback_no_callback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_SOFCallback_with_callback */
void TS_usbd_conf_test_HAL_PCD_SOFCallback_with_callback()
{
	USBD_ClassTypeDef usbdClass;
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;

	usbdClass.SOF = & helper_HAL_PCD_SOFCallback;
	usbdHandle.dev_state = USBD_STATE_CONFIGURED;
	usbdHandle.pClass = & usbdClass;
	pcdHandle.pData = & usbdHandle;

	helper_HAL_PCD_SOFCallback_ncalls = 0u;

	HAL_PCD_SOFCallback(&pcdHandle);

	CPPTEST_ASSERT_UINTEGER_EQUAL(1u, helper_HAL_PCD_SOFCallback_ncalls);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_SOFCallback_with_callback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ISOOUTIncompleteCallback */
/* CPPTEST_TEST_CASE_CONTEXT void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *) */
void TS_usbd_conf_test_HAL_PCD_ISOOUTIncompleteCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_IsoOUTIncomplete", 1);
	uint8_t epnum = 0u;
	PCD_HandleTypeDef pcdHandle;
    HAL_PCD_ISOOUTIncompleteCallback(&pcdHandle, epnum);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ISOOUTIncompleteCallback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ISOINIncompleteCallback */
/* CPPTEST_TEST_CASE_CONTEXT void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *) */
void TS_usbd_conf_test_HAL_PCD_ISOINIncompleteCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_IsoINIncomplete", 1);
	uint8_t epnum = 0u;
	PCD_HandleTypeDef pcdHandle;
	HAL_PCD_ISOINIncompleteCallback(&pcdHandle, epnum);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ISOINIncompleteCallback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ConnectCallback */
/* CPPTEST_TEST_CASE_CONTEXT void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *) */
void TS_usbd_conf_test_HAL_PCD_ConnectCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_DevConnected", 1);
	PCD_HandleTypeDef pcdHandle;
	HAL_PCD_ConnectCallback(&pcdHandle);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ConnectCallback */

static uint8_t helper_HAL_PCD_DisconnectCallback_DeInit_ncalls = 0u;
static uint8_t helper_HAL_PCD_DisconnectCallback_DeInit(struct _USBD_HandleTypeDef *pdev, uint8_t cfgidx)
{
	helper_HAL_PCD_DisconnectCallback_DeInit_ncalls ++;
}

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_DisconnectCallback */
/* CPPTEST_TEST_CASE_CONTEXT void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *) */
void TS_usbd_conf_test_HAL_PCD_DisconnectCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_DevDisconnected", 1);

	USBD_ClassTypeDef usbdClass;
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;

	usbdClass.DeInit = & helper_HAL_PCD_DisconnectCallback_DeInit;
	usbdHandle.dev_state = USBD_STATE_CONFIGURED;
	usbdHandle.pClass = & usbdClass;
	pcdHandle.pData = & usbdHandle;

	helper_HAL_PCD_DisconnectCallback_DeInit_ncalls = 0u;

	HAL_PCD_DisconnectCallback(&pcdHandle);

	CPPTEST_ASSERT_EQUAL(USBD_STATE_DEFAULT, usbdHandle.dev_state);
	CPPTEST_ASSERT_UINTEGER_EQUAL(1u, helper_HAL_PCD_DisconnectCallback_DeInit_ncalls);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_DisconnectCallback */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_Transmit */
void TS_usbd_conf_test_USBD_LL_Transmit()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_EP_Transmit", 1);

	USBD_HandleTypeDef usbdHandle;
	uint8_t epaddr = 0u;
	uint8_t buf[16u] = { 0u };
	uint16_t size = sizeof(buf) / sizeof(buf[0]);
	USBD_StatusTypeDef ret;

	ret = USBD_LL_Transmit(&usbdHandle, epaddr, buf, size);

	CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_Transmit */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_PrepareReceive */
void TS_usbd_conf_test_USBD_LL_PrepareReceive()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_EP_Receive", 1);

    USBD_HandleTypeDef usbdHandle;
	uint8_t epaddr = 0u;
	uint8_t buf[16u] = { 0u };
	uint16_t size = sizeof(buf) / sizeof(buf[0]);
	USBD_StatusTypeDef ret;

	ret = USBD_LL_PrepareReceive(&usbdHandle, epaddr, buf, size);

	CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_PrepareReceive */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_GetRxDataSize_ds */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t USBD_LL_GetRxDataSize(USBD_HandleTypeDef *, uint8_t) */
void TS_usbd_conf_test_USBD_LL_GetRxDataSize_ds()
{
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;
	uint8_t epaddr = CPPTEST_DS_GET_UINTEGER("epaddr_in");
	uint8_t epaddr_trunc = CPPTEST_DS_GET_UINTEGER("epaddr_trunc_in");
	const uint32_t count = CPPTEST_DS_GET_UINTEGER("count");
	uint32_t ret;

	pcdHandle.OUT_ep[epaddr_trunc].xfer_count = count; // the 4 LSB bits of address are important
	usbdHandle.pData = &pcdHandle;

    ret = USBD_LL_GetRxDataSize(&usbdHandle, epaddr);
    CPPTEST_ASSERT_UINTEGER_EQUAL(CPPTEST_DS_GET_UINTEGER("count"), ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_GetRxDataSize_ds */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_SetUSBAddress */
void TS_usbd_conf_test_USBD_LL_SetUSBAddress()
{
	CPPTEST_EXPECT_NCALLS("HAL_PCD_SetAddress", 1);

	USBD_HandleTypeDef usbdHandle;
	uint8_t dev_addr = 0u;
	USBD_StatusTypeDef ret;

	ret = USBD_LL_SetUSBAddress(&usbdHandle, dev_addr);

	CPPTEST_ASSERT_EQUAL(USBD_OK, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_SetUSBAddress */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ResumeCallback_1 */
void TS_usbd_conf_test_HAL_PCD_ResumeCallback_1()
{
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;

	usbdHandle.dev_state = USBD_STATE_SUSPENDED;
	usbdHandle.dev_old_state = USBD_STATE_DEFAULT;
	pcdHandle.pData = & usbdHandle;

	HAL_PCD_ResumeCallback(&pcdHandle);

	CPPTEST_ASSERT_EQUAL(USBD_STATE_DEFAULT, usbdHandle.dev_state);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ResumeCallback_1 */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_ResumeCallback_2 */
void TS_usbd_conf_test_HAL_PCD_ResumeCallback_2()
{
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;

	usbdHandle.dev_state = USBD_STATE_CONFIGURED;
	usbdHandle.dev_old_state = USBD_STATE_ADDRESSED;
	pcdHandle.pData = & usbdHandle;

	HAL_PCD_ResumeCallback(&pcdHandle);

	CPPTEST_ASSERT_EQUAL(USBD_STATE_ADDRESSED, usbdHandle.dev_state);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_ResumeCallback_2 */


/* CPPTEST_TEST_CASE_BEGIN test_USBD_LL_IsStallEP_ds */
/* CPPTEST_TEST_CASE_CONTEXT uint8_t USBD_LL_IsStallEP(USBD_HandleTypeDef *, uint8_t) */
void TS_usbd_conf_test_USBD_LL_IsStallEP_ds()
{
	USBD_HandleTypeDef usbdHandle;
	PCD_HandleTypeDef pcdHandle;
	uint8_t epaddr = CPPTEST_DS_GET_UINTEGER("epaddr_in");
	const uint8_t epaddr_trunc = CPPTEST_DS_GET_UINTEGER("epaddr_trunc_in");
	const uint8_t is_in = CPPTEST_DS_GET_UINTEGER("is_in");
	const uint8_t is_stall_in = CPPTEST_DS_GET_UINTEGER("is_stall");
	uint8_t ret;

	CPPTEST_REPORT_UINTEGER("epaddr", epaddr);

	usbdHandle.pData = & pcdHandle;
	// the 4 LSB bits of address are important
	if (is_in > 0u) {
		epaddr |= 0x80u;
		pcdHandle.IN_ep[epaddr_trunc].is_stall = is_stall_in;
	} else {
		pcdHandle.OUT_ep[epaddr_trunc].is_stall = is_stall_in;
	}

	CPPTEST_REPORT_UINTEGER("epaddr(mod)", epaddr);
	CPPTEST_REPORT_UINTEGER("epaddr_trunc", epaddr_trunc);
	CPPTEST_REPORT_UINTEGER("is_in", is_in);
	CPPTEST_REPORT_UINTEGER("is_stall", is_stall_in);

    ret = USBD_LL_IsStallEP(&usbdHandle, epaddr);

    CPPTEST_ASSERT_UINTEGER_EQUAL(is_stall_in, ret);
}
/* CPPTEST_TEST_CASE_END test_USBD_LL_IsStallEP_ds */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_SuspendCallback */
/* CPPTEST_TEST_CASE_CONTEXT void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *) */
void TS_usbd_conf_test_HAL_PCD_SuspendCallback()
{
	CPPTEST_EXPECT_NCALLS("USBD_LL_Suspend", 1);
	PCD_HandleTypeDef pcdHandle;
	pcdHandle.Instance = NULL;
	HAL_PCD_SuspendCallback(&pcdHandle);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_SuspendCallback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_MspDeInit_no_instance */
void TS_usbd_conf_test_HAL_PCD_MspDeInit_no_instance()
{
	CPPTEST_EXPECT_NCALLS("HAL_GPIO_DeInit", 0);
	CPPTEST_EXPECT_NCALLS("HAL_NVIC_DisableIRQ", 0);
	PCD_HandleTypeDef pcdHandle;
	pcdHandle.Instance = NULL;
	HAL_PCD_MspDeInit(&pcdHandle);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_MspDeInit_no_instance */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_MspDeInit_with_USB_OTG_FS */
void TS_usbd_conf_test_HAL_PCD_MspDeInit_with_USB_OTG_FS()
{
	CPPTEST_EXPECT_NCALLS("HAL_GPIO_DeInit", 1);
	CPPTEST_EXPECT_NCALLS("HAL_NVIC_DisableIRQ", 1);
	PCD_HandleTypeDef pcdHandle;
	pcdHandle.Instance = USB_OTG_FS;
	HAL_PCD_MspDeInit(&pcdHandle);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_MspDeInit_with_USB_OTG_FS */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_MspInit_no_instance */
void TS_usbd_conf_test_HAL_PCD_MspInit_no_instance()
{
	CPPTEST_EXPECT_NCALLS("HAL_GPIO_Init", 0);
	CPPTEST_EXPECT_NCALLS("HAL_NVIC_EnableIRQ", 0);
	CPPTEST_EXPECT_NCALLS("HAL_NVIC_SetPriority", 0);

	PCD_HandleTypeDef pcdHandle;
	pcdHandle.Instance = NULL;
	HAL_PCD_MspInit(&pcdHandle);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_MspInit_no_instance */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_PCD_MspInit_with_USB_OTG_FS */
void TS_usbd_conf_test_HAL_PCD_MspInit_with_USB_OTG_FS()
{
	CPPTEST_EXPECT_NCALLS("HAL_GPIO_Init", 1);
	CPPTEST_EXPECT_NCALLS("HAL_NVIC_EnableIRQ", 1);
	CPPTEST_EXPECT_NCALLS("HAL_NVIC_SetPriority", 1);

	PCD_HandleTypeDef pcdHandle;
	pcdHandle.Instance = USB_OTG_FS;
	HAL_PCD_MspInit(&pcdHandle);
}
/* CPPTEST_TEST_CASE_END test_HAL_PCD_MspInit_with_USB_OTG_FS */
