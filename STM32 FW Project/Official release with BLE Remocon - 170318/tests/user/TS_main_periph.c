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
CPPTEST_TEST_SUITE_END();
        
void TS_main_periph_test_SendArmingData(void);

void TS_main_periph_test_SendMotionData(void);
void TS_main_periph_test_initializeAllSensors_all_OK(void);
void TS_main_periph_test_enableAllSensors(void);
void TS_main_periph_test_MX_GPIO_Init(void);
void TS_main_periph_test_MX_USART1_UART_Init(void);
void TS_main_periph_test_MX_ADC1_Init(void);
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
