#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/main.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/main.c");

EXTERN_C_LINKAGE void TS_main_periph_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_main_periph_callTest(const char*);

CPPTEST_TEST_SUITE(TS_main_periph);
        CPPTEST_TEST_SUITE_SETUP(TS_main_periph_testSuiteSetUp);
        CPPTEST_TEST(TS_main_periph_test_SendArmingData);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_main_periph_testSuiteTearDown);
CPPTEST_TEST(TS_main_periph_test_SendMotionData);
CPPTEST_TEST(TS_main_periph_test_initializeAllSensors_all_OK);
CPPTEST_TEST(TS_main_periph_test_enableAllSensors);
CPPTEST_TEST(TS_main_periph_test_MX_GPIO_Init);
CPPTEST_TEST(TS_main_periph_test_MX_USART1_UART_Init);
CPPTEST_TEST(TS_main_periph_test_MX_ADC1_Init);
CPPTEST_TEST(TS_main_periph_test_SystemClock_Config);
CPPTEST_TEST(TS_main_periph_test_SendBattEnvData_default);
CPPTEST_TEST(TS_main_periph_test_SendBattEnvData_conv_fail);
CPPTEST_TEST(TS_main_periph_test_SendBattEnvData_conv_ok);
CPPTEST_TEST(TS_main_periph_test_SendBattEnvData_conv_ok_with_cap);
CPPTEST_TEST_SUITE_END();
        
void TS_main_periph_test_SendArmingData(void);

void TS_main_periph_test_SendMotionData(void);
void TS_main_periph_test_initializeAllSensors_all_OK(void);
void TS_main_periph_test_enableAllSensors(void);
void TS_main_periph_test_MX_GPIO_Init(void);
void TS_main_periph_test_MX_USART1_UART_Init(void);
void TS_main_periph_test_MX_ADC1_Init(void);
void TS_main_periph_test_SystemClock_Config(void);
void TS_main_periph_test_SendBattEnvData_default(void);
void TS_main_periph_test_SendBattEnvData_conv_fail(void);
void TS_main_periph_test_SendBattEnvData_conv_ok(void);
void TS_main_periph_test_SendBattEnvData_conv_ok_with_cap(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_main_periph);

void TS_main_periph_testSuiteSetUp(void);
void TS_main_periph_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_main_periph_testSuiteTearDown(void);
void TS_main_periph_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_main_periph_setUp(void);
void TS_main_periph_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_main_periph_tearDown(void);
void TS_main_periph_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_SendArmingData */
void TS_main_periph_test_SendArmingData()
{
	CPPTEST_EXPECT_NCALLS("ARMING_Update", 1);
	// test call
	SendArmingData();
}
/* CPPTEST_TEST_CASE_END test_SendArmingData */

/* CPPTEST_TEST_CASE_BEGIN test_SendMotionData */
void TS_main_periph_test_SendMotionData()
{
	CPPTEST_EXPECT_NCALLS("AccGyroMag_Update", 1);
	// test call
	SendMotionData();
}
/* CPPTEST_TEST_CASE_END test_SendMotionData */

/* CPPTEST_TEST_CASE_BEGIN test_initializeAllSensors_all_OK */
void TS_main_periph_test_initializeAllSensors_all_OK()
{
	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Init", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Init", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Init", 1);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Init", 1);
	CPPTEST_EXPECT_NCALLS("BSP_TEMPERATURE_Init", 1);
	// test call
	initializeAllSensors();
}
/* CPPTEST_TEST_CASE_END test_initializeAllSensors_all_OK */

/* CPPTEST_TEST_CASE_BEGIN test_enableAllSensors */
void TS_main_periph_test_enableAllSensors()
{
	// test call
	enableAllSensors();
}
/* CPPTEST_TEST_CASE_END test_enableAllSensors */

/* CPPTEST_TEST_CASE_BEGIN test_MX_GPIO_Init */
void TS_main_periph_test_MX_GPIO_Init()
{
	CPPTEST_EXPECT_NCALLS("HAL_GPIO_Init", 1);

	// test call
	MX_GPIO_Init();
}
/* CPPTEST_TEST_CASE_END test_MX_GPIO_Init */

/* CPPTEST_TEST_CASE_BEGIN test_MX_USART1_UART_Init */
void TS_main_periph_test_MX_USART1_UART_Init()
{
	CPPTEST_EXPECT_NCALLS("HAL_UART_Init", 1);

	// test call
	MX_USART1_UART_Init();
}
/* CPPTEST_TEST_CASE_END test_MX_USART1_UART_Init */

/* CPPTEST_TEST_CASE_BEGIN test_MX_ADC1_Init */
void TS_main_periph_test_MX_ADC1_Init()
{
	CPPTEST_EXPECT_NCALLS("HAL_ADC_Init", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_ConfigChannel", 1);

	// test call
	MX_ADC1_Init();
}
/* CPPTEST_TEST_CASE_END test_MX_ADC1_Init */


// system clock configuration tests - sensitive and dangerous as we tamper with system clock
// a strategic set of stub callbacks disabling original calls will be needed
void CppTest_StubCallback_HAL_RCC_OscConfig(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, RCC_OscInitTypeDef * RCC_OscInitStruct)
{
    *__return = HAL_OK;
}
// CPPTEST_REGISTER_STUB_CALLBACK("HAL_RCC_OscConfig", &CppTest_StubCallback_HAL_RCC_OscConfig);

/* CPPTEST_TEST_CASE_BEGIN test_SystemClock_Config */
void TS_main_periph_test_SystemClock_Config()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_RCC_OscConfig", &CppTest_StubCallback_HAL_RCC_OscConfig);

	CPPTEST_EXPECT_NCALLS("HAL_RCC_OscConfig", 1);
	CPPTEST_EXPECT_NCALLS("HAL_RCC_ClockConfig", 1);
	CPPTEST_EXPECT_NCALLS("HAL_SYSTICK_Config", 1);
	CPPTEST_EXPECT_NCALLS("HAL_SYSTICK_CLKSourceConfig", 1);
	CPPTEST_EXPECT_NCALLS("HAL_NVIC_SetPriority", 1);

	// test call
    SystemClock_Config();

	// TODO: cannot really tamper with clock configuration
	//		 while the system is already running
	//		 need to stub what is possible and see if we can even test
	// 	     the SystemClock_Config() function
}
/* CPPTEST_TEST_CASE_END test_SystemClock_Config */

/* CPPTEST_TEST_CASE_BEGIN test_SendBattEnvData_default */
void TS_main_periph_test_SendBattEnvData_default()
{
	SendBattEnvData();
}
/* CPPTEST_TEST_CASE_END test_SendBattEnvData_default */

static HAL_StatusTypeDef CppTest_StubCallback_HAL_ADC_PollForConversion_hal_status = HAL_OK;
void CppTest_StubCallback_HAL_ADC_PollForConversion(
		CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return,
		ADC_HandleTypeDef * hadc, uint32_t Timeout)
{
	*__return = CppTest_StubCallback_HAL_ADC_PollForConversion_hal_status;
}

// control BattToSend:
// ret_val = (((wanted_BattToSend / 10.0) * 4.2 / 100.0) / 1.5) * 4095 / 3.3
static uint32_t CppTest_StubCallback_HAL_ADC_GetValue_val = 0u;
void CppTest_StubCallback_HAL_ADC_GetValue(CppTest_StubCallInfo* stubCallInfo, uint32_t* __return, ADC_HandleTypeDef * hadc)
{
	*__return = CppTest_StubCallback_HAL_ADC_GetValue_val;
}


/* CPPTEST_TEST_CASE_BEGIN test_SendBattEnvData_conv_fail */
void TS_main_periph_test_SendBattEnvData_conv_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_PollForConversion", &CppTest_StubCallback_HAL_ADC_PollForConversion);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_Start", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_PollForConversion", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_GetValue", 0);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_Stop", 1);
	CPPTEST_EXPECT_NCALLS("hci_read_rssi", 1);
	CPPTEST_EXPECT_NCALLS("Batt_Env_RSSI_Update", 1);

	CppTest_StubCallback_HAL_ADC_PollForConversion_hal_status = HAL_ERROR;

	SendBattEnvData();
}
/* CPPTEST_TEST_CASE_END test_SendBattEnvData_conv_fail */

/* CPPTEST_TEST_CASE_BEGIN test_SendBattEnvData_conv_ok */
void TS_main_periph_test_SendBattEnvData_conv_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_PollForConversion", &CppTest_StubCallback_HAL_ADC_PollForConversion);
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_GetValue", &CppTest_StubCallback_HAL_ADC_GetValue);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_Start", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_PollForConversion", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_GetValue", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_Stop", 1);
	CPPTEST_EXPECT_NCALLS("hci_read_rssi", 1);
	CPPTEST_EXPECT_NCALLS("Batt_Env_RSSI_Update", 1);

	CppTest_StubCallback_HAL_ADC_PollForConversion_hal_status = HAL_OK;
	CppTest_StubCallback_HAL_ADC_GetValue_val = 3000u;

	SendBattEnvData();
}
/* CPPTEST_TEST_CASE_END test_SendBattEnvData_conv_ok */

/* CPPTEST_TEST_CASE_BEGIN test_SendBattEnvData_conv_ok_with_cap */
void TS_main_periph_test_SendBattEnvData_conv_ok_with_cap()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_PollForConversion", &CppTest_StubCallback_HAL_ADC_PollForConversion);
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_GetValue", &CppTest_StubCallback_HAL_ADC_GetValue);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_Start", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_PollForConversion", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_GetValue", 1);
	CPPTEST_EXPECT_NCALLS("HAL_ADC_Stop", 1);
	CPPTEST_EXPECT_NCALLS("hci_read_rssi", 1);
	CPPTEST_EXPECT_NCALLS("Batt_Env_RSSI_Update", 1);

	CppTest_StubCallback_HAL_ADC_PollForConversion_hal_status = HAL_OK;
	CppTest_StubCallback_HAL_ADC_GetValue_val = 6000u;

	SendBattEnvData();
}
/* CPPTEST_TEST_CASE_END test_SendBattEnvData_conv_ok_with_cap */
