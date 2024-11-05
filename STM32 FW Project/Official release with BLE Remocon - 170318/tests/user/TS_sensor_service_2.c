#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/sensor_service.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/sensor_service.c");

EXTERN_C_LINKAGE void TS_sensor_service_2_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_sensor_service_2_callTest(const char*);

CPPTEST_TEST_SUITE(TS_sensor_service_2);
        CPPTEST_TEST_SUITE_SETUP(TS_sensor_service_2_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_sensor_service_2_testSuiteTearDown);
CPPTEST_TEST(TS_sensor_service_2_test_Read_Request_CB_conxn_handle_on);
CPPTEST_TEST(TS_sensor_service_2_test_Read_Request_CB_conxn_handle_off);
CPPTEST_TEST(TS_sensor_service_2_test_Read_Request_CB_TermCharHandle);
CPPTEST_TEST(TS_sensor_service_2_test_Read_Request_CB_StdErrCharHandle);
CPPTEST_TEST(TS_sensor_service_2_test_Read_Request_CB_AccEventCharHandle);
CPPTEST_TEST(TS_sensor_service_2_test_Read_Request_CB_ArmingCharHandle);
CPPTEST_TEST(TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_no_press);
CPPTEST_TEST_DISABLED(TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_not_init);
CPPTEST_TEST_DISABLED(TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_with_press);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_config_char_ignore);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_off);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_on);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_ignore_on);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_ignore_off);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_term_char_on);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_term_char_off);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_term_char_ignore_off);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_term_char_ignore_on);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_term_char_send_back);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_term_char_no_send_back);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_off);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_on);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_ignore_off);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_ignore_on);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_off_with_term);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_on_with_term);
CPPTEST_TEST(TS_sensor_service_2_test_Attribute_Modified_CB_config_char_handle);
CPPTEST_TEST_SUITE_END();
        

void TS_sensor_service_2_test_Read_Request_CB_conxn_handle_on(void);
void TS_sensor_service_2_test_Read_Request_CB_conxn_handle_off(void);
void TS_sensor_service_2_test_Read_Request_CB_TermCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_StdErrCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_AccEventCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_ArmingCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_no_press(void);
void TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_not_init(void);
void TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_with_press(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_config_char_ignore(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_off(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_on(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_ignore_on(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_ignore_off(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_on(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_off(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_ignore_off(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_ignore_on(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_send_back(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_no_send_back(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_off(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_on(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_ignore_off(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_ignore_on(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_off_with_term(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_on_with_term(void);
void TS_sensor_service_2_test_Attribute_Modified_CB_config_char_handle(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_sensor_service_2);

void TS_sensor_service_2_testSuiteSetUp(void);
void TS_sensor_service_2_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_sensor_service_2_testSuiteTearDown(void);
void TS_sensor_service_2_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_sensor_service_2_setUp(void);
void TS_sensor_service_2_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_sensor_service_2_tearDown(void);
void TS_sensor_service_2_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

// common input initialization for Read_Request_CB() tests
static void test_helper_Read_Request_CB_init_inputs(void)
{
    // initialize global handles:
	ConfigCharHandle = 1u;
	TermCharHandle  = ConfigCharHandle + 4u;
    ConsoleW2STHandle  = TermCharHandle + 4u;
    StdErrCharHandle  = ConsoleW2STHandle + 4u;
    EnvironmentalCharHandle  = StdErrCharHandle + 4u;
    ArmingCharHandle  = EnvironmentalCharHandle + 4u;
    AccEventCharHandle  = ArmingCharHandle + 4u;
    MaxCharHandle = AccEventCharHandle + 4u;

    // connection handle
    // connection_handle  = 1u;  // on

    // no pressure sensor by default
    TargetBoardFeatures.HandlePressSensor  = 0;

    /*
    TargetBoardFeatures.BoardType  = TARGET_NUCLEO;
    TargetBoardFeatures.NumTempSensors  = 0;
    TargetBoardFeatures.HandleHumSensor  = 0 ;
    TargetBoardFeatures.HWAdvanceFeatures  = 0;
    TargetBoardFeatures.HandleAccSensor  = 0 ;
    TargetBoardFeatures.HandleGyroSensor  = 0 ;
    TargetBoardFeatures.HandleMagSensor  = 0 ;
    TargetBoardFeatures.LedStatus  = 0;
    TargetBoardFeatures.bnrg_expansion_board  = 0;
    TargetBoardFeatures.SnsAltFunc  = 0;
    LastTermLen  = 0;
    LastStderrBuffer[0]  = 0;
    LastStderrLen  = 0;
    BytesToWrite  = 0;
    LastTermBuffer[0]  = 0;
    ConnectionBleStatus  = 0u;
    HWServW2STHandle  = 0u;
    BufferToWrite[0]  = 0;
    */
}

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_conxn_handle_on */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_conxn_handle_on()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    connection_handle  = 1u;  // on
    // input - no handle selected
    uint16_t handle  = 0u;

    /* Tested function call */
	Read_Request_CB(handle);
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_conxn_handle_on */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_conxn_handle_off */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_conxn_handle_off()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 0);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    connection_handle  = 0u;  // off
    // input - no handle selected
    uint16_t handle  = 0u;

    /* Tested function call */
	Read_Request_CB(handle);

}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_conxn_handle_off */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_TermCharHandle */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_TermCharHandle()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);
	CPPTEST_EXPECT_NCALLS("Term_Update_AfterRead", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    connection_handle  = 1u;  // on
    // input
    uint16_t handle  = TermCharHandle + 1u;

    /* Tested function call */
	Read_Request_CB(handle);
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_TermCharHandle */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_StdErrCharHandle */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_StdErrCharHandle()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update_AfterRead", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    connection_handle  = 1u;  // on
    // input
    uint16_t handle  = StdErrCharHandle + 1u;

    /* Tested function call */
	Read_Request_CB(handle);
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_StdErrCharHandle */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_AccEventCharHandle */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_AccEventCharHandle()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    connection_handle  = 1u;  // on
    // input
    uint16_t handle  = AccEventCharHandle + 1u;

    /* Tested function call */
	Read_Request_CB(handle);
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_AccEventCharHandle */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_ArmingCharHandle */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_ArmingCharHandle()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);
	CPPTEST_EXPECT_NCALLS("ARMING_Update", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    connection_handle  = 1u;  // on
    // input
    uint16_t handle  = ArmingCharHandle + 1u;

    /* Tested function call */
	Read_Request_CB(handle);
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_ArmingCharHandle */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_EnvironmentalCharHandle_no_press */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_no_press()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);
	CPPTEST_EXPECT_NCALLS("Batt_Env_RSSI_Update", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    // no pressure sensor
    TargetBoardFeatures.HandlePressSensor  = 0;
    connection_handle  = 1u;  // on

    // input
    uint16_t handle  = EnvironmentalCharHandle + 1u;

    /* Tested function call */
	Read_Request_CB(handle);
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_EnvironmentalCharHandle_no_press */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_EnvironmentalCharHandle_not_init */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_not_init()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);
	CPPTEST_EXPECT_NCALLS("Batt_Env_RSSI_Update", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    // not initialized pressure sensor
	DrvContextTypeDef pressCtx;
	pressCtx.isInitialized = 0u;
    TargetBoardFeatures.HandlePressSensor = &pressCtx;
    connection_handle  = 1u;  // on

    // input
    uint16_t handle  = EnvironmentalCharHandle + 1u;

    /* Tested function call */
	Read_Request_CB(handle);
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_EnvironmentalCharHandle_not_init */

/* CPPTEST_TEST_CASE_BEGIN test_Read_Request_CB_EnvironmentalCharHandle_with_press */
/* CPPTEST_TEST_CASE_CONTEXT void Read_Request_CB(uint16_t) */
void TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_with_press()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_allow_read", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();
    // with pressure sensor
    TargetBoardFeatures.HandlePressSensor  = /* TODO - set to non NULL */ 0;
    connection_handle  = 1u;  // on

    // input
    uint16_t handle  = EnvironmentalCharHandle + 1u;

    /* Tested function call */
	Read_Request_CB(handle);
	CPPTEST_FAIL("TODO");
}
/* CPPTEST_TEST_CASE_END test_Read_Request_CB_EnvironmentalCharHandle_with_press */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_config_char_ignore */
void TS_sensor_service_2_test_Attribute_Modified_CB_config_char_ignore()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ConfigCharHandle + 2;
	att_data = 0u; // ignored
	data_length = 0u;

	Attribute_Modified_CB(attr_handle, &att_data, data_length);
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_config_char_ignore */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_stderr_char_off */
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_off()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = StdErrCharHandle + 2;
	att_data = 0u;  // turn off
	data_length = 1u;
	ConnectionBleStatus |= (W2ST_CONNECT_STD_ERR); // initially set to on

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(0, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_ERR));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_stderr_char_off */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_stderr_char_on */
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_on()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = StdErrCharHandle + 2;
	att_data = 1u;  // turn on
	data_length = 1u;
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_ERR); // initially set to off

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(1, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_ERR));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_stderr_char_on */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_stderr_char_ignore_on */
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_ignore_on()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = StdErrCharHandle + 2;
	att_data = 3u;  // anything
	data_length = 1u;
	ConnectionBleStatus |= (W2ST_CONNECT_STD_ERR); // initially set to on

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(1, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_ERR));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_stderr_char_ignore_on */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_stderr_char_ignore_off */
void TS_sensor_service_2_test_Attribute_Modified_CB_stderr_char_ignore_off()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = StdErrCharHandle + 2;
	att_data = 3u;  // anything
	data_length = 1u;
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_ERR); // initially set to off

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(0, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_ERR));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_stderr_char_ignore_off */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_term_char_on */
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_on()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = TermCharHandle + 2;
	att_data = 1u;  // turn on
	data_length = 1u;
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_TERM); // initially set to off

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(1, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_TERM));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_term_char_on */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_term_char_off */
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_off()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = TermCharHandle + 2;
	att_data = 0u;  // turn off
	data_length = 1u;
	ConnectionBleStatus |= (W2ST_CONNECT_STD_TERM); // initially set to on

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(0, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_TERM));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_term_char_off */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_term_char_ignore_off */
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_ignore_off()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = TermCharHandle + 2;
	att_data = 3u;  // anything
	data_length = 1u;
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_TERM); // initially set to off

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(0, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_TERM));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_term_char_ignore_off */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_term_char_ignore_on */
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_ignore_on()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = TermCharHandle + 2;
	att_data = 3u;  // anything
	data_length = 1u;
	ConnectionBleStatus |= (W2ST_CONNECT_STD_TERM); // initially set to on

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(1, W2ST_CHECK_CONNECTION(W2ST_CONNECT_STD_TERM));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_term_char_ignore_on */


// callback for DebugConsoleCommandParsing()
// return is controlled by setting value of the variable below in a test case
static uint32_t CppTest_StubCallback_DebugConsoleCommandParsing_SendBackData = 0u;
void CppTest_StubCallback_DebugConsoleCommandParsing(
		CppTest_StubCallInfo* stubCallInfo, uint32_t* __return,
		uint8_t * att_data, uint8_t data_length)
{
	*__return = CppTest_StubCallback_DebugConsoleCommandParsing_SendBackData;
}

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_term_char_send_back */
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_send_back()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_REGISTER_STUB_CALLBACK("DebugConsoleCommandParsing", &CppTest_StubCallback_DebugConsoleCommandParsing);
	CPPTEST_EXPECT_NCALLS("DebugConsoleCommandParsing", 1);
	CPPTEST_EXPECT_NCALLS("Term_Update", 1);
	// configure stub callback
	CppTest_StubCallback_DebugConsoleCommandParsing_SendBackData = 1u;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = TermCharHandle + 1;
	att_data = 1u;	  // irrelevant for the test - stubs used
	data_length = 1u; // irrelevant for the test - stubs used

	// test call
	Attribute_Modified_CB(attr_handle, &att_data, data_length);
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_term_char_send_back */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_term_char_no_send_back */
void TS_sensor_service_2_test_Attribute_Modified_CB_term_char_no_send_back()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_REGISTER_STUB_CALLBACK("DebugConsoleCommandParsing", &CppTest_StubCallback_DebugConsoleCommandParsing);
	CPPTEST_EXPECT_NCALLS("DebugConsoleCommandParsing", 1);
	CPPTEST_EXPECT_NCALLS("Term_Update", 0);
	// configure stub callback
	CppTest_StubCallback_DebugConsoleCommandParsing_SendBackData = 0u;

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = TermCharHandle + 1;
	att_data = 1u;	  // irrelevant for the test - stubs used
	data_length = 1u; // irrelevant for the test - stubs used

	// test call
	Attribute_Modified_CB(attr_handle, &att_data, data_length);
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_term_char_no_send_back */


/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_arming_char_off */
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_off()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_EXPECT_NCALLS("ARMING_Update", 0);
	CPPTEST_EXPECT_NCALLS("Term_Update", 0);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ArmingCharHandle + 2;
	att_data = 0u;  // turn off
	data_length = 1u;
	ConnectionBleStatus |= (W2ST_CONNECT_LED); // initially set to on
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_TERM); // keep terminal off for this test

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(0, W2ST_CHECK_CONNECTION(W2ST_CONNECT_LED));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_arming_char_off */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_arming_char_on */
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_on()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_EXPECT_NCALLS("ARMING_Update", 1);
	CPPTEST_EXPECT_NCALLS("Term_Update", 0);

	// initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ArmingCharHandle + 2;
	att_data = 1u;  // turn on
	data_length = 1u;
	ConnectionBleStatus &= ~(W2ST_CONNECT_LED); // initially set to off
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_TERM); // keep terminal off for this test

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(1, W2ST_CHECK_CONNECTION(W2ST_CONNECT_LED));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_arming_char_on */


/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_arming_char_ignore_off */
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_ignore_off()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_EXPECT_NCALLS("ARMING_Update", 0);
	CPPTEST_EXPECT_NCALLS("Term_Update", 0);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ArmingCharHandle + 2;
	att_data = 3u;  // anything
	data_length = 1u;
	ConnectionBleStatus &= ~(W2ST_CONNECT_LED); // initially set to off
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_TERM); // keep terminal off for this test

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(0, W2ST_CHECK_CONNECTION(W2ST_CONNECT_LED));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_arming_char_ignore_off */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_arming_char_ignore_on */
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_ignore_on()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_EXPECT_NCALLS("ARMING_Update", 0);
	CPPTEST_EXPECT_NCALLS("Term_Update", 0);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ArmingCharHandle + 2;
	att_data = 3u;  // anything
	data_length = 1u;
	ConnectionBleStatus |= (W2ST_CONNECT_LED); // initially set to on
	ConnectionBleStatus &= ~(W2ST_CONNECT_STD_TERM); // keep terminal off for this test

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(1, W2ST_CHECK_CONNECTION(W2ST_CONNECT_LED));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_arming_char_ignore_on */

void CppTest_StubCallback_Term_Update_Buf_Check_On(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t * data, uint8_t length)
{
	*__return = Term_Update(data, length);
	CPPTEST_ASSERT_CSTR_N_EQUAL("ON", (data + 8), 2);
}
void CppTest_StubCallback_Term_Update_Buf_Check_Off(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t * data, uint8_t length)
{
	*__return = Term_Update(data, length);
	CPPTEST_ASSERT_CSTR_N_EQUAL("OFF", (data + 8), 3);
}

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_arming_char_off_with_term */
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_off_with_term()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_REGISTER_STUB_CALLBACK("Term_Update", &CppTest_StubCallback_Term_Update_Buf_Check_Off);
	CPPTEST_EXPECT_NCALLS("ARMING_Update", 0);
	CPPTEST_EXPECT_NCALLS("Term_Update", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ArmingCharHandle + 2;
	att_data = 0u;  // turn off
	data_length = 1u;
	ConnectionBleStatus |= (W2ST_CONNECT_LED); // initially set to on
	ConnectionBleStatus |= (W2ST_CONNECT_STD_TERM); // keep terminal on for this test

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(0, W2ST_CHECK_CONNECTION(W2ST_CONNECT_LED));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_arming_char_off_with_term */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_arming_char_on_with_term */
void TS_sensor_service_2_test_Attribute_Modified_CB_arming_char_on_with_term()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_REGISTER_STUB_CALLBACK("Term_Update", &CppTest_StubCallback_Term_Update_Buf_Check_On);
	CPPTEST_EXPECT_NCALLS("ARMING_Update", 1);
	CPPTEST_EXPECT_NCALLS("Term_Update", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ArmingCharHandle + 2;
	att_data = 1u;  // turn on
	data_length = 1u;
	ConnectionBleStatus &= ~(W2ST_CONNECT_LED); // initially set to off
	ConnectionBleStatus |= (W2ST_CONNECT_STD_TERM); // keep terminal on for this test

	Attribute_Modified_CB(attr_handle, &att_data, data_length);

	CPPTEST_ASSERT_INTEGER_EQUAL(1, W2ST_CHECK_CONNECTION(W2ST_CONNECT_LED));
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_arming_char_on_with_term */

/* CPPTEST_TEST_CASE_BEGIN test_Attribute_Modified_CB_config_char_handle */
void TS_sensor_service_2_test_Attribute_Modified_CB_config_char_handle()
{
	uint16_t attr_handle;
	uint8_t att_data;
	uint8_t data_length;

	CPPTEST_EXPECT_NCALLS("ConfigCommandParsing", 1);

    // initialize globals
	test_helper_Read_Request_CB_init_inputs();

	attr_handle = ConfigCharHandle + 1;
	att_data = 0u; // ignored
	data_length = 0u;

	Attribute_Modified_CB(attr_handle, &att_data, data_length);
}
/* CPPTEST_TEST_CASE_END test_Attribute_Modified_CB_config_char_handle */
