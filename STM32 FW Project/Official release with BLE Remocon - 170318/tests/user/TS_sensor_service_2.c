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
CPPTEST_TEST_SUITE_END();
        

void TS_sensor_service_2_test_Read_Request_CB_conxn_handle_on(void);
void TS_sensor_service_2_test_Read_Request_CB_conxn_handle_off(void);
void TS_sensor_service_2_test_Read_Request_CB_TermCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_StdErrCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_AccEventCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_ArmingCharHandle(void);
void TS_sensor_service_2_test_Read_Request_CB_EnvironmentalCharHandle_no_press(void);
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

// commin input initialization for Read_Request_CB() tests
static void test_helper_Read_Request_CB_init_inputs(void)
{
    // initialize global handles:
    TermCharHandle  = 1u;
    ConsoleW2STHandle  = 2;
    StdErrCharHandle  = 3;
    EnvironmentalCharHandle  = 4;
    ArmingCharHandle  = 5;
    AccEventCharHandle  = 6;

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
