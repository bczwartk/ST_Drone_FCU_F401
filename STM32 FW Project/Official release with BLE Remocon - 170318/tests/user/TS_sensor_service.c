#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/sensor_service.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/sensor_service.c");

EXTERN_C_LINKAGE void TS_sensor_service_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_sensor_service_callTest(const char*);

CPPTEST_TEST_SUITE(TS_sensor_service);
        CPPTEST_TEST_SUITE_SETUP(TS_sensor_service_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_sensor_service_testSuiteTearDown);
CPPTEST_TEST(TS_sensor_service_test_ConfigCommandParsing);
CPPTEST_TEST(TS_sensor_service_test_DisableHWFeatures);
CPPTEST_TEST(TS_sensor_service_test_GAP_DisconnectionComplete_CB_no_hw);
CPPTEST_TEST(TS_sensor_service_test_GAP_DisconnectionComplete_CB_with_hw);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_AfterRead_success);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_AfterRead_error_1);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_AfterRead_error_2);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_AfterRead_error_3);
CPPTEST_TEST(TS_sensor_service_test_safe_aci_gatt_update_char_value_breath_10);
CPPTEST_TEST(TS_sensor_service_test_safe_aci_gatt_update_char_value_breath_1);
CPPTEST_TEST(TS_sensor_service_test_safe_aci_gatt_update_char_value_problem);
CPPTEST_TEST(TS_sensor_service_test_safe_aci_gatt_update_char_value_success);
CPPTEST_TEST(TS_sensor_service_test_Add_ConfigW2ST_Service_success);
CPPTEST_TEST(TS_sensor_service_test_Add_ConfigW2ST_Service_add_serv_error);
CPPTEST_TEST(TS_sensor_service_test_Add_ConfigW2ST_Service_add_char_error);
CPPTEST_TEST(TS_sensor_service_test_Term_Update_AfterRead_success);
CPPTEST_TEST(TS_sensor_service_test_Term_Update_AfterRead_error_conxn);
CPPTEST_TEST(TS_sensor_service_test_Term_Update_AfterRead_error_other);
CPPTEST_TEST(TS_sensor_service_test_Add_ConsoleW2ST_Service_add_serv_error);
CPPTEST_TEST(TS_sensor_service_test_Add_ConsoleW2ST_Service_success);
CPPTEST_TEST(TS_sensor_service_test_Add_ConsoleW2ST_Service_add_char_1st_error);
CPPTEST_TEST(TS_sensor_service_test_Add_ConsoleW2ST_Service_add_char_2nd_error);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_ok);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_failed);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_noop);
CPPTEST_TEST(TS_sensor_service_test_Term_Update_ok);
CPPTEST_TEST(TS_sensor_service_test_Term_Update_failed);
CPPTEST_TEST(TS_sensor_service_test_Term_Update_noop);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_ok_mult_chars);
CPPTEST_TEST(TS_sensor_service_test_Term_Update_ok_mult_chars);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_AfterRead_ok);
CPPTEST_TEST(TS_sensor_service_test_Stderr_Update_AfterRead_failed);
CPPTEST_TEST(TS_sensor_service_test_Config_Notify_ok);
CPPTEST_TEST(TS_sensor_service_test_Config_Notify_conxn_error);
CPPTEST_TEST(TS_sensor_service_test_Config_Notify_other_error);
CPPTEST_TEST(TS_sensor_service_test_AccEvent_Notify_ok);
CPPTEST_TEST(TS_sensor_service_test_AccEvent_Notify_conxn_error);
CPPTEST_TEST(TS_sensor_service_test_AccEvent_Notify_other_error);
CPPTEST_TEST(TS_sensor_service_test_AccGyroMag_Update_ok);
CPPTEST_TEST(TS_sensor_service_test_AccGyroMag_Update_conxn_error);
CPPTEST_TEST(TS_sensor_service_test_AccGyroMag_Update_other_error);
CPPTEST_TEST(TS_sensor_service_test_Batt_Env_RSSI_Update_ok_);
CPPTEST_TEST(TS_sensor_service_test_Batt_Env_RSSI_Update_conxn_error);
CPPTEST_TEST(TS_sensor_service_test_Batt_Env_RSSI_Update_other_error);
CPPTEST_TEST(TS_sensor_service_test_ARMING_Update_ok);
CPPTEST_TEST(TS_sensor_service_test_ARMING_Update_conxn_error);
CPPTEST_TEST(TS_sensor_service_test_ARMING_Update_other_error);
CPPTEST_TEST(TS_sensor_service_test_setConnectable);
CPPTEST_TEST(TS_sensor_service_test_GAP_ConnectionComplete_CB_no_hw);
CPPTEST_TEST(TS_sensor_service_test_GAP_ConnectionComplete_CB_with_hw);
CPPTEST_TEST(TS_sensor_service_test_Add_HWServW2ST_Service_success);
CPPTEST_TEST_DS(TS_sensor_service_test_Add_HWServW2ST_Service_error_ds, CPPTEST_DS("TS_sensor_service_test_Add_HWServW2ST_Service_error"));
CPPTEST_TEST(TS_sensor_service_test_Add_HWServW2ST_Service_error_serv);
CPPTEST_TEST_SUITE_END();
        

void TS_sensor_service_test_ConfigCommandParsing(void);
void TS_sensor_service_test_DisableHWFeatures(void);
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_no_hw(void);
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_with_hw(void);
void TS_sensor_service_test_Stderr_Update_AfterRead_success(void);
void TS_sensor_service_test_Stderr_Update_AfterRead_error_1(void);
void TS_sensor_service_test_Stderr_Update_AfterRead_error_2(void);
void TS_sensor_service_test_Stderr_Update_AfterRead_error_3(void);
void TS_sensor_service_test_safe_aci_gatt_update_char_value_breath_10(void);
void TS_sensor_service_test_safe_aci_gatt_update_char_value_breath_1(void);
void TS_sensor_service_test_safe_aci_gatt_update_char_value_problem(void);
void TS_sensor_service_test_safe_aci_gatt_update_char_value_success(void);
void TS_sensor_service_test_Add_ConfigW2ST_Service_success(void);
void TS_sensor_service_test_Add_ConfigW2ST_Service_add_serv_error(void);
void TS_sensor_service_test_Add_ConfigW2ST_Service_add_char_error(void);
void TS_sensor_service_test_Term_Update_AfterRead_success(void);
void TS_sensor_service_test_Term_Update_AfterRead_error_conxn(void);
void TS_sensor_service_test_Term_Update_AfterRead_error_other(void);
void TS_sensor_service_test_Add_ConsoleW2ST_Service_add_serv_error(void);
void TS_sensor_service_test_Add_ConsoleW2ST_Service_success(void);
void TS_sensor_service_test_Add_ConsoleW2ST_Service_add_char_1st_error(void);
void TS_sensor_service_test_Add_ConsoleW2ST_Service_add_char_2nd_error(void);
void TS_sensor_service_test_Stderr_Update_ok(void);
void TS_sensor_service_test_Stderr_Update_failed(void);
void TS_sensor_service_test_Stderr_Update_noop(void);
void TS_sensor_service_test_Term_Update_ok(void);
void TS_sensor_service_test_Term_Update_failed(void);
void TS_sensor_service_test_Term_Update_noop(void);
void TS_sensor_service_test_Stderr_Update_ok_mult_chars(void);
void TS_sensor_service_test_Term_Update_ok_mult_chars(void);
void TS_sensor_service_test_Stderr_Update_AfterRead_ok(void);
void TS_sensor_service_test_Stderr_Update_AfterRead_failed(void);
void TS_sensor_service_test_Config_Notify_ok(void);
void TS_sensor_service_test_Config_Notify_conxn_error(void);
void TS_sensor_service_test_Config_Notify_other_error(void);
void TS_sensor_service_test_AccEvent_Notify_ok(void);
void TS_sensor_service_test_AccEvent_Notify_conxn_error(void);
void TS_sensor_service_test_AccEvent_Notify_other_error(void);
void TS_sensor_service_test_AccGyroMag_Update_ok(void);
void TS_sensor_service_test_AccGyroMag_Update_conxn_error(void);
void TS_sensor_service_test_AccGyroMag_Update_other_error(void);
void TS_sensor_service_test_Batt_Env_RSSI_Update_ok_(void);
void TS_sensor_service_test_Batt_Env_RSSI_Update_conxn_error(void);
void TS_sensor_service_test_Batt_Env_RSSI_Update_other_error(void);
void TS_sensor_service_test_ARMING_Update_ok(void);
void TS_sensor_service_test_ARMING_Update_conxn_error(void);
void TS_sensor_service_test_ARMING_Update_other_error(void);
void TS_sensor_service_test_setConnectable(void);
void TS_sensor_service_test_GAP_ConnectionComplete_CB_no_hw(void);
void TS_sensor_service_test_GAP_ConnectionComplete_CB_with_hw(void);
void TS_sensor_service_test_Add_HWServW2ST_Service_success(void);
void TS_sensor_service_test_Add_HWServW2ST_Service_error_ds(void);
void TS_sensor_service_test_Add_HWServW2ST_Service_error_serv(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_sensor_service);

void TS_sensor_service_testSuiteSetUp(void);
void TS_sensor_service_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_sensor_service_testSuiteTearDown(void);
void TS_sensor_service_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_sensor_service_setUp(void);
void TS_sensor_service_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_sensor_service_tearDown(void);
void TS_sensor_service_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


// CALLBACKS
static tBleStatus CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;
void CppTest_StubCallback_aci_gatt_update_char_value(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return,
		uint16_t servHandle, uint16_t charHandle, uint8_t charValOffset,
		uint8_t charValueLen, const void * charValue)
{
	*__return = CppTest_StubCallback_aci_gatt_update_char_value_retval;
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_update_char_value);

static tBleStatus CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
void CppTest_StubCallback_aci_gatt_add_serv(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t service_uuid_type,
		const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle)
{
	*__return = CppTest_StubCallback_aci_gatt_add_serv_retval;
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);

// specify return value from the stub - to be set in a test case
static tBleStatus CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;
void CppTest_StubCallback_aci_gatt_add_char(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t service_uuid_type,
		const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle)
{
	*__return = CppTest_StubCallback_aci_gatt_add_char_retval;
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);

// specify at which call of the stub to return the error value - to be set in a test case
// uses CppTest_StubCallback_aci_gatt_add_char_retval to specify return value
// the other calls will return BLE_STATUS_SUCCESS
static int CppTest_StubCallback_aci_gatt_add_char_retval_call_no = 1;
void CppTest_StubCallback_aci_gatt_add_char_counted(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t service_uuid_type,
		const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle)
{
	if (stubCallInfo->callNo == CppTest_StubCallback_aci_gatt_add_char_retval_call_no) {
	    *__return = CppTest_StubCallback_aci_gatt_add_char_retval;
	} else {
		*__return = BLE_STATUS_SUCCESS;
	}
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);


/* CPPTEST_TEST_CASE_BEGIN test_ConfigCommandParsing */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t ConfigCommandParsing(uint8_t *, uint8_t) */
void TS_sensor_service_test_ConfigCommandParsing()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (att_data) */ 
    uint8_t * _att_data  = 0U ;
    /* Initializing argument 2 (data_length) */ 
    uint8_t _data_length  = 0U;
    {
        /* Tested function call */
        uint32_t _return  = ConfigCommandParsing(_att_data, _data_length);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1U, ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_ConfigCommandParsing */

/* CPPTEST_TEST_CASE_BEGIN test_DisableHWFeatures */
/* CPPTEST_TEST_CASE_CONTEXT void DisableHWFeatures(void) */
void TS_sensor_service_test_DisableHWFeatures()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        DisableHWFeatures();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_DisableHWFeatures */

/* CPPTEST_TEST_CASE_BEGIN test_GAP_DisconnectionComplete_CB_no_hw */
/* CPPTEST_TEST_CASE_CONTEXT void GAP_DisconnectionComplete_CB(void) */
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_no_hw()
{
    /* Pre-condition initialization */
	CPPTEST_EXPECT_NCALLS("DisableHWFeatures", 1);

    /* Initializing global variable ConnectionBleStatus */ 
    {
         ConnectionBleStatus  = 1u;
    }
    /* Initializing global variable connected */ 
    {
         connected  = TRUE;
    }
    /* Initializing global variable TargetBoardFeatures */ 
    {
         TargetBoardFeatures.BoardType  = TARGET_NUCLEO;
         TargetBoardFeatures.NumTempSensors  = 0;
         TargetBoardFeatures.HandlePressSensor  = 0 ;
         TargetBoardFeatures.HandleHumSensor  = 0 ;
         TargetBoardFeatures.HWAdvanceFeatures  = 1;
         TargetBoardFeatures.HandleAccSensor  = 0 ;
         TargetBoardFeatures.HandleGyroSensor  = 0 ;
         TargetBoardFeatures.HandleMagSensor  = 0 ;
         TargetBoardFeatures.LedStatus  = 0;
         TargetBoardFeatures.bnrg_expansion_board  = 0;
         TargetBoardFeatures.SnsAltFunc  = 0;
    }
    /* Initializing global variable set_connectable */ 
    {
         set_connectable  = 0;
    }
    {
        /* Tested function call */
        GAP_DisconnectionComplete_CB();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0u, ( ConnectionBleStatus ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(FALSE, ( connected ) );
        CPPTEST_ASSERT_UINTEGER_EQUAL(TRUE, ( set_connectable ) );
    }
}
/* CPPTEST_TEST_CASE_END test_GAP_DisconnectionComplete_CB_no_hw */

/* CPPTEST_TEST_CASE_BEGIN test_GAP_DisconnectionComplete_CB_with_hw */
/* CPPTEST_TEST_CASE_CONTEXT void GAP_DisconnectionComplete_CB(void) */
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_with_hw()
{
    /* Pre-condition initialization */
	CPPTEST_EXPECT_NCALLS("DisableHWFeatures", 0);

	/* Initializing global variable ConnectionBleStatus */
    {
         ConnectionBleStatus  = 1u;
    }
    /* Initializing global variable connected */ 
    {
         connected  = TRUE;
    }
    /* Initializing global variable TargetBoardFeatures */ 
    {
         TargetBoardFeatures.BoardType  = TARGET_NUCLEO;
         TargetBoardFeatures.NumTempSensors  = 0;
         TargetBoardFeatures.HandlePressSensor  = 0 ;
         TargetBoardFeatures.HandleHumSensor  = 0 ;
         TargetBoardFeatures.HWAdvanceFeatures  = 0;
         TargetBoardFeatures.HandleAccSensor  = 0 ;
         TargetBoardFeatures.HandleGyroSensor  = 0 ;
         TargetBoardFeatures.HandleMagSensor  = 0 ;
         TargetBoardFeatures.LedStatus  = 0;
         TargetBoardFeatures.bnrg_expansion_board  = 0;
         TargetBoardFeatures.SnsAltFunc  = 0;
    }
    /* Initializing global variable set_connectable */ 
    {
         set_connectable  = 0;
    }
    {
        /* Tested function call */
        GAP_DisconnectionComplete_CB();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0u, ( ConnectionBleStatus ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(FALSE, ( connected ) );
        CPPTEST_ASSERT_UINTEGER_EQUAL(TRUE, ( set_connectable ) );
    }
}
/* CPPTEST_TEST_CASE_END test_GAP_DisconnectionComplete_CB_with_hw */


/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_AfterRead_success */
void TS_sensor_service_test_Stderr_Update_AfterRead_success()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Stderr_Update_AfterRead();

	CPPTEST_ASSERT_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_AfterRead_success */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_AfterRead_error_1 */
void TS_sensor_service_test_Stderr_Update_AfterRead_error_1()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ERROR;

	ret = Stderr_Update_AfterRead();

	CPPTEST_ASSERT_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_AfterRead_error_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_AfterRead_error_2 */
void TS_sensor_service_test_Stderr_Update_AfterRead_error_2()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;

	ret = Stderr_Update_AfterRead();

	CPPTEST_ASSERT_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_AfterRead_error_2 */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_AfterRead_error_3 */
void TS_sensor_service_test_Stderr_Update_AfterRead_error_3()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_DEV_IN_BLACKLIST;

	ret = Stderr_Update_AfterRead();

	CPPTEST_ASSERT_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_AfterRead_error_3 */

/* CPPTEST_TEST_CASE_BEGIN test_safe_aci_gatt_update_char_value_breath_10 */
void TS_sensor_service_test_safe_aci_gatt_update_char_value_breath_10()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 0);

	uint16_t servHandle = 0u;
	uint16_t charHandle = 0u;
	uint8_t charValOffset = 0u;
	uint8_t charValueLen = 1u;
	uint8_t charValue = 0u;
	tBleStatus ret;

	breath = 10;

	ret = safe_aci_gatt_update_char_value(servHandle, charHandle, charValOffset, charValueLen, & charValue);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_INSUFFICIENT_RESOURCES, ret);
	CPPTEST_ASSERT_INTEGER_EQUAL(9, breath);
}
/* CPPTEST_TEST_CASE_END test_safe_aci_gatt_update_char_value_breath_10 */

/* CPPTEST_TEST_CASE_BEGIN test_safe_aci_gatt_update_char_value_breath_1 */
void TS_sensor_service_test_safe_aci_gatt_update_char_value_breath_1()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 0);

	uint16_t servHandle = 0u;
	uint16_t charHandle = 0u;
	uint8_t charValOffset = 0u;
	uint8_t charValueLen = 1u;
	uint8_t charValue = 0u;
	tBleStatus ret;

	breath = 1;

	ret = safe_aci_gatt_update_char_value(servHandle, charHandle, charValOffset, charValueLen, & charValue);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_INSUFFICIENT_RESOURCES, ret);
	CPPTEST_ASSERT_INTEGER_EQUAL(0, breath);
}
/* CPPTEST_TEST_CASE_END test_safe_aci_gatt_update_char_value_breath_1 */

/* CPPTEST_TEST_CASE_BEGIN test_safe_aci_gatt_update_char_value_problem */
void TS_sensor_service_test_safe_aci_gatt_update_char_value_problem()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	uint16_t servHandle = 0u;
	uint16_t charHandle = 0u;
	uint8_t charValOffset = 0u;
	uint8_t charValueLen = 1u;
	uint8_t charValue = 0u;
	tBleStatus ret;

	breath = 0;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_DEV_NOT_FOUND_IN_DB;

	ret = safe_aci_gatt_update_char_value(servHandle, charHandle, charValOffset, charValueLen, & charValue);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_DEV_NOT_FOUND_IN_DB, ret);
	CPPTEST_ASSERT_INTEGER_EQUAL(ACC_BLUENRG_CONGESTION_SKIP, breath);
}
/* CPPTEST_TEST_CASE_END test_safe_aci_gatt_update_char_value_problem */

/* CPPTEST_TEST_CASE_BEGIN test_safe_aci_gatt_update_char_value_success */
void TS_sensor_service_test_safe_aci_gatt_update_char_value_success()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	uint16_t servHandle = 0u;
	uint16_t charHandle = 0u;
	uint8_t charValOffset = 0u;
	uint8_t charValueLen = 1u;
	uint8_t charValue = 0u;
	tBleStatus ret;

	breath = 0;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = safe_aci_gatt_update_char_value(servHandle, charHandle, charValOffset, charValueLen, & charValue);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
	CPPTEST_ASSERT_INTEGER_EQUAL(0, breath);
}
/* CPPTEST_TEST_CASE_END test_safe_aci_gatt_update_char_value_success */

/* CPPTEST_TEST_CASE_BEGIN test_Add_ConfigW2ST_Service_success */
void TS_sensor_service_test_Add_ConfigW2ST_Service_success()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 1);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
	ret = Add_ConfigW2ST_Service();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_ConfigW2ST_Service_success */

/* CPPTEST_TEST_CASE_BEGIN test_Add_ConfigW2ST_Service_add_serv_error */
void TS_sensor_service_test_Add_ConfigW2ST_Service_add_serv_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 0);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SEC_DB_FULL;
	ret = Add_ConfigW2ST_Service();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_ConfigW2ST_Service_add_serv_error */

/* CPPTEST_TEST_CASE_BEGIN test_Add_ConfigW2ST_Service_add_char_error */
void TS_sensor_service_test_Add_ConfigW2ST_Service_add_char_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 1);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_IRK_NOT_FOUND;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
	ret = Add_ConfigW2ST_Service();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_ConfigW2ST_Service_add_char_error */

/* CPPTEST_TEST_CASE_BEGIN test_Term_Update_AfterRead_success */
void TS_sensor_service_test_Term_Update_AfterRead_success()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;
	ret = Term_Update_AfterRead();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Term_Update_AfterRead_success */

/* CPPTEST_TEST_CASE_BEGIN test_Term_Update_AfterRead_error_conxn */
void TS_sensor_service_test_Term_Update_AfterRead_error_conxn()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 1);
	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;
	ConnectionBleStatus = W2ST_CONNECT_STD_ERR;
	ret = Term_Update_AfterRead();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Term_Update_AfterRead_error_conxn */

/* CPPTEST_TEST_CASE_BEGIN test_Term_Update_AfterRead_error_other */
void TS_sensor_service_test_Term_Update_AfterRead_error_other()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);
	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;
	ConnectionBleStatus = 0u;
	ret = Term_Update_AfterRead();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Term_Update_AfterRead_error_other */

/* CPPTEST_TEST_CASE_BEGIN test_Add_ConsoleW2ST_Service_add_serv_error */
void TS_sensor_service_test_Add_ConsoleW2ST_Service_add_serv_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 0);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SEC_DB_FULL;
	ret = Add_ConsoleW2ST_Service();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_ConsoleW2ST_Service_add_serv_error */

/* CPPTEST_TEST_CASE_BEGIN test_Add_ConsoleW2ST_Service_success */
void TS_sensor_service_test_Add_ConsoleW2ST_Service_success()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 2);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
	ret = Add_ConsoleW2ST_Service();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_ConsoleW2ST_Service_success */

/* CPPTEST_TEST_CASE_BEGIN test_Add_ConsoleW2ST_Service_add_char_1st_error */
void TS_sensor_service_test_Add_ConsoleW2ST_Service_add_char_1st_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char_counted);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 1);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_IRK_NOT_FOUND;
	CppTest_StubCallback_aci_gatt_add_char_retval_call_no = 1; // return error from the first call
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
	ret = Add_ConsoleW2ST_Service();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_ConsoleW2ST_Service_add_char_1st_error */

/* CPPTEST_TEST_CASE_BEGIN test_Add_ConsoleW2ST_Service_add_char_2nd_error */
void TS_sensor_service_test_Add_ConsoleW2ST_Service_add_char_2nd_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char_counted);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 2);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_IRK_NOT_FOUND;
	CppTest_StubCallback_aci_gatt_add_char_retval_call_no = 2; // return error from the first call
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
	ret = Add_ConsoleW2ST_Service();
	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_ConsoleW2ST_Service_add_char_2nd_error */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_ok */
void TS_sensor_service_test_Stderr_Update_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);

	uint8_t data = 0xab;
	uint8_t length = 1u;
	tBleStatus ret;

	LastStderrBuffer[0u] = 0u;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Stderr_Update(&data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
	// better to assert in the stub
	CPPTEST_ASSERT_UINTEGER_EQUAL(0xab, LastStderrBuffer[0u]);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_ok */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_failed */
void TS_sensor_service_test_Stderr_Update_failed()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);

	uint8_t data = 0xab;
	uint8_t length = 1u;
	tBleStatus ret;

	LastStderrBuffer[0u] = 0u;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;

	ret = Stderr_Update(&data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_failed */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_noop */
void TS_sensor_service_test_Stderr_Update_noop()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 0);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 0);

	uint8_t data = 0xab;
	uint8_t length = 0u;  // nothing to send
	tBleStatus ret;

	ret = Stderr_Update(&data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_noop */


/* CPPTEST_TEST_CASE_BEGIN test_Term_Update_ok */
void TS_sensor_service_test_Term_Update_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);

	uint8_t data = 0xab;
	uint8_t length = 1u;
	tBleStatus ret;

	LastTermBuffer[0u] = 0u;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Term_Update(&data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
	// better to assert in the stub
	CPPTEST_ASSERT_UINTEGER_EQUAL(0xab, LastTermBuffer[0u]);
}
/* CPPTEST_TEST_CASE_END test_Term_Update_ok */

/* CPPTEST_TEST_CASE_BEGIN test_Term_Update_failed */
void TS_sensor_service_test_Term_Update_failed()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);

	uint8_t data = 0xab;
	uint8_t length = 1u;
	tBleStatus ret;

	LastStderrBuffer[0u] = 0u;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;

	ret = Term_Update(&data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Term_Update_failed */

/* CPPTEST_TEST_CASE_BEGIN test_Term_Update_noop */
void TS_sensor_service_test_Term_Update_noop()
{
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 0);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 0);

	uint8_t data = 0xab;
	uint8_t length = 0u;  // nothing to send
	tBleStatus ret;

	ret = Term_Update(&data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Term_Update_noop */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_ok_mult_chars */
void TS_sensor_service_test_Stderr_Update_ok_mult_chars()
{
	uint8_t data[] = { 0xab, 0xde, 0xad, 0xbe, 0xef, 0x00 };
	uint8_t length = sizeof(data) / sizeof(data[0u]);
	tBleStatus ret;

	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Stderr_Update(data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_ok_mult_chars */

/* CPPTEST_TEST_CASE_BEGIN test_Term_Update_ok_mult_chars */
void TS_sensor_service_test_Term_Update_ok_mult_chars()
{
	uint8_t data[] = { 0xab, 0xde, 0xad, 0xbe, 0xef, 0x00 };
	uint8_t length = sizeof(data) / sizeof(data[0u]);
	tBleStatus ret;

	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("HAL_Delay", 1);

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Term_Update(data, length);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Term_Update_ok_mult_chars */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_AfterRead_ok */
void TS_sensor_service_test_Stderr_Update_AfterRead_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Stderr_Update_AfterRead();

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_AfterRead_ok */

/* CPPTEST_TEST_CASE_BEGIN test_Stderr_Update_AfterRead_failed */
void TS_sensor_service_test_Stderr_Update_AfterRead_failed()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;

	ret = Stderr_Update_AfterRead();

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Stderr_Update_AfterRead_failed */

/* CPPTEST_TEST_CASE_BEGIN test_Config_Notify_ok */
void TS_sensor_service_test_Config_Notify_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	uint32_t feature = 0u;
	uint8_t command = 0u;
	uint8_t data = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Config_Notify(feature, command, data);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Config_Notify_ok */

/* CPPTEST_TEST_CASE_BEGIN test_Config_Notify_conxn_error */
void TS_sensor_service_test_Config_Notify_conxn_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 1);

	tBleStatus ret;
	uint32_t feature = 0u;
	uint8_t command = 0u;
	uint8_t data = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;
	ConnectionBleStatus = W2ST_CONNECT_STD_ERR;

	ret = Config_Notify(feature, command, data);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Config_Notify_conxn_error */

/* CPPTEST_TEST_CASE_BEGIN test_Config_Notify_other_error */
void TS_sensor_service_test_Config_Notify_other_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	uint32_t feature = 0u;
	uint8_t command = 0u;
	uint8_t data = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_IRK_NOT_FOUND;
	ConnectionBleStatus = ~(W2ST_CONNECT_STD_ERR);

	ret = Config_Notify(feature, command, data);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Config_Notify_other_error */

/* CPPTEST_TEST_CASE_BEGIN test_AccEvent_Notify_ok */
void TS_sensor_service_test_AccEvent_Notify_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	uint8_t command = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = AccEvent_Notify(command);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_AccEvent_Notify_ok */

/* CPPTEST_TEST_CASE_BEGIN test_AccEvent_Notify_conxn_error */
void TS_sensor_service_test_AccEvent_Notify_conxn_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 1);

	tBleStatus ret;
	uint8_t command = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;
	ConnectionBleStatus = W2ST_CONNECT_STD_ERR;

	ret = AccEvent_Notify(command);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_AccEvent_Notify_conxn_error */

/* CPPTEST_TEST_CASE_BEGIN test_AccEvent_Notify_other_error */
void TS_sensor_service_test_AccEvent_Notify_other_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	uint8_t command = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_IRK_NOT_FOUND;
	ConnectionBleStatus = ~(W2ST_CONNECT_STD_ERR);

	ret = AccEvent_Notify(command);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_AccEvent_Notify_other_error */

/* CPPTEST_TEST_CASE_BEGIN test_AccGyroMag_Update_ok */
void TS_sensor_service_test_AccGyroMag_Update_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	SensorAxes_t acc = { 1, 2, 3 };
	SensorAxes_t gyro = { 400, 500, 600 };
	SensorAxes_t mag = { 7, 8, 9 };

	breath = 0;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = AccGyroMag_Update(&acc, &gyro, &mag);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_AccGyroMag_Update_ok */

/* CPPTEST_TEST_CASE_BEGIN test_AccGyroMag_Update_conxn_error */
void TS_sensor_service_test_AccGyroMag_Update_conxn_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 1);

	tBleStatus ret;
	SensorAxes_t acc = { 1, 2, 3 };
	SensorAxes_t gyro = { 400, 500, 600 };
	SensorAxes_t mag = { 7, 8, 9 };

	breath = 0;
	ConnectionBleStatus = W2ST_CONNECT_STD_ERR;
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;

	ret = AccGyroMag_Update(&acc, &gyro, &mag);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_AccGyroMag_Update_conxn_error */

/* CPPTEST_TEST_CASE_BEGIN test_AccGyroMag_Update_other_error */
void TS_sensor_service_test_AccGyroMag_Update_other_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	SensorAxes_t acc = { 1, 2, 3 };
	SensorAxes_t gyro = { 400, 500, 600 };
	SensorAxes_t mag = { 7, 8, 9 };

	breath = 0;
	ConnectionBleStatus = ~(W2ST_CONNECT_STD_ERR);
	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_IRK_NOT_FOUND;

	ret = AccGyroMag_Update(&acc, &gyro, &mag);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_AccGyroMag_Update_other_error */

/* CPPTEST_TEST_CASE_BEGIN test_Batt_Env_RSSI_Update_ok_ */
void TS_sensor_service_test_Batt_Env_RSSI_Update_ok_()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	int32_t Press = 0;
	uint16_t Batt = 0u;
	int16_t Temp = 0;
	int16_t RSSI = 0;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = Batt_Env_RSSI_Update(Press, Batt, Temp, RSSI);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Batt_Env_RSSI_Update_ok_ */

/* CPPTEST_TEST_CASE_BEGIN test_Batt_Env_RSSI_Update_conxn_error */
void TS_sensor_service_test_Batt_Env_RSSI_Update_conxn_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 1);

	tBleStatus ret;
	int32_t Press = 0;
	uint16_t Batt = 0u;
	int16_t Temp = 0;
	int16_t RSSI = 0;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;
	ConnectionBleStatus = W2ST_CONNECT_STD_ERR;

	ret = Batt_Env_RSSI_Update(Press, Batt, Temp, RSSI);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Batt_Env_RSSI_Update_conxn_error */

/* CPPTEST_TEST_CASE_BEGIN test_Batt_Env_RSSI_Update_other_error */
void TS_sensor_service_test_Batt_Env_RSSI_Update_other_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	int32_t Press = 0;
	uint16_t Batt = 0u;
	int16_t Temp = 0;
	int16_t RSSI = 0;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_IRK_NOT_FOUND;
	ConnectionBleStatus = ~(W2ST_CONNECT_STD_ERR);

	ret = Batt_Env_RSSI_Update(Press, Batt, Temp, RSSI);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Batt_Env_RSSI_Update_other_error */

/* CPPTEST_TEST_CASE_BEGIN test_ARMING_Update_ok */
void TS_sensor_service_test_ARMING_Update_ok()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	uint8_t armingStatus = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_SUCCESS;

	ret = ARMING_Update(armingStatus);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_ARMING_Update_ok */

/* CPPTEST_TEST_CASE_BEGIN test_ARMING_Update_conxn_error */
void TS_sensor_service_test_ARMING_Update_conxn_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 1);

	tBleStatus ret;
	uint8_t armingStatus = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_ADDR_NOT_RESOLVED;
	ConnectionBleStatus = W2ST_CONNECT_STD_ERR;

	ret = ARMING_Update(armingStatus);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_ARMING_Update_conxn_error */

/* CPPTEST_TEST_CASE_BEGIN test_ARMING_Update_other_error */
void TS_sensor_service_test_ARMING_Update_other_error()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_aci_gatt_update_char_value);
	CPPTEST_EXPECT_NCALLS("aci_gatt_update_char_value", 1);
	CPPTEST_EXPECT_NCALLS("Stderr_Update", 0);

	tBleStatus ret;
	uint8_t armingStatus = 0u;

	CppTest_StubCallback_aci_gatt_update_char_value_retval = BLE_STATUS_IRK_NOT_FOUND;
	ConnectionBleStatus = ~(W2ST_CONNECT_STD_ERR);

	ret = ARMING_Update(armingStatus);

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_ARMING_Update_other_error */

/* CPPTEST_TEST_CASE_BEGIN test_setConnectable */
void TS_sensor_service_test_setConnectable()
{
	CPPTEST_EXPECT_NCALLS("hci_le_set_scan_resp_data", 1);
	CPPTEST_EXPECT_NCALLS("aci_gap_set_discoverable", 1);
	CPPTEST_EXPECT_NCALLS("aci_gap_update_adv_data", 1);

	setConnectable();
}
/* CPPTEST_TEST_CASE_END test_setConnectable */

/* CPPTEST_TEST_CASE_BEGIN test_GAP_ConnectionComplete_CB_no_hw */
/* CPPTEST_TEST_CASE_CONTEXT void GAP_DisconnectionComplete_CB(void) */
void TS_sensor_service_test_GAP_ConnectionComplete_CB_no_hw()
{
    /* Pre-condition initialization */
	CPPTEST_EXPECT_NCALLS("aci_l2cap_connection_parameter_update_request", 1);
	CPPTEST_EXPECT_NCALLS("DisableHWFeatures", 1);

	ConnectionBleStatus  = 1u;
	connected  = FALSE;
	uint8_t addr[6] = { 0u };
	connection_handle = 0u;
	const uint16_t handle = 3u;

	TargetBoardFeatures.BoardType  = TARGET_NUCLEO;
	TargetBoardFeatures.NumTempSensors  = 0;
	TargetBoardFeatures.HandlePressSensor  = 0 ;
	TargetBoardFeatures.HandleHumSensor  = 0 ;
	TargetBoardFeatures.HWAdvanceFeatures  = 1;
	TargetBoardFeatures.HandleAccSensor  = 0 ;
	TargetBoardFeatures.HandleGyroSensor  = 0 ;
	TargetBoardFeatures.HandleMagSensor  = 0 ;
	TargetBoardFeatures.LedStatus  = 0;
	TargetBoardFeatures.bnrg_expansion_board  = 0;
	TargetBoardFeatures.SnsAltFunc  = 0;

	/* Tested function call */
	GAP_ConnectionComplete_CB(addr, handle);

	/* Post-condition check */
	CPPTEST_ASSERT_UINTEGER_EQUAL(0u, ConnectionBleStatus);
	CPPTEST_ASSERT_INTEGER_EQUAL(TRUE, connected);
	CPPTEST_ASSERT_UINTEGER_EQUAL(handle, connection_handle);
}
/* CPPTEST_TEST_CASE_END test_GAP_ConnectionComplete_CB_no_hw */

/* CPPTEST_TEST_CASE_BEGIN test_GAP_ConnectionComplete_CB_with_hw */
/* CPPTEST_TEST_CASE_CONTEXT void GAP_DisconnectionComplete_CB(void) */
void TS_sensor_service_test_GAP_ConnectionComplete_CB_with_hw()
{
    /* Pre-condition initialization */
	CPPTEST_EXPECT_NCALLS("aci_l2cap_connection_parameter_update_request", 1);
	CPPTEST_EXPECT_NCALLS("DisableHWFeatures", 0);

	ConnectionBleStatus  = 1u;
	connected  = FALSE;
	uint8_t addr[6] = { 0u };
	connection_handle = 0u;
	const uint16_t handle = 3u;

	TargetBoardFeatures.BoardType  = TARGET_NUCLEO;
	TargetBoardFeatures.NumTempSensors  = 0;
	TargetBoardFeatures.HandlePressSensor  = 0 ;
	TargetBoardFeatures.HandleHumSensor  = 0 ;
	TargetBoardFeatures.HWAdvanceFeatures  = 0;  // use HW
	TargetBoardFeatures.HandleAccSensor  = 0 ;
	TargetBoardFeatures.HandleGyroSensor  = 0 ;
	TargetBoardFeatures.HandleMagSensor  = 0 ;
	TargetBoardFeatures.LedStatus  = 0;
	TargetBoardFeatures.bnrg_expansion_board  = 0;
	TargetBoardFeatures.SnsAltFunc  = 0;

    /* Tested function call */
    GAP_ConnectionComplete_CB(addr, handle);

    /* Post-condition check */
	CPPTEST_ASSERT_UINTEGER_EQUAL(0u, ConnectionBleStatus);
	CPPTEST_ASSERT_INTEGER_EQUAL(TRUE, connected);
	CPPTEST_ASSERT_UINTEGER_EQUAL(handle, connection_handle);
}
/* CPPTEST_TEST_CASE_END test_GAP_ConnectionComplete_CB_with_hw */

/* CPPTEST_TEST_CASE_BEGIN test_Add_HWServW2ST_Service_success */
void TS_sensor_service_test_Add_HWServW2ST_Service_success()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);

	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 5);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;

	ret = Add_HWServW2ST_Service();

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_SUCCESS, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_HWServW2ST_Service_success */

/* CPPTEST_TEST_CASE_BEGIN test_Add_HWServW2ST_Service_error_ds */
void TS_sensor_service_test_Add_HWServW2ST_Service_error_ds()
{
	// Note: the data source is trivial for this case, but it lets iterate the test case required number of times.
	// TODO: consider in-code DS perhaps

	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char_counted);

	const int32_t fail_call_no = CPPTEST_DS_GET_INTEGER("fail_call_no");

	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);
	// number of calls depends on injected point of failure
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", fail_call_no);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_SUCCESS;
	// set the correct call to fail:
	CppTest_StubCallback_aci_gatt_add_char_retval_call_no = fail_call_no;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_IRK_NOT_FOUND;

	ret = Add_HWServW2ST_Service();

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_HWServW2ST_Service_error_ds */

/* CPPTEST_TEST_CASE_BEGIN test_Add_HWServW2ST_Service_error_serv */
void TS_sensor_service_test_Add_HWServW2ST_Service_error_serv()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_aci_gatt_add_serv);
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_aci_gatt_add_char);

	CPPTEST_EXPECT_NCALLS("aci_gatt_add_serv", 1);
	CPPTEST_EXPECT_NCALLS("aci_gatt_add_char", 0);

	tBleStatus ret;
	CppTest_StubCallback_aci_gatt_add_serv_retval = BLE_STATUS_IRK_NOT_FOUND;
	CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;

	ret = Add_HWServW2ST_Service();

	CPPTEST_ASSERT_UINTEGER_EQUAL(BLE_STATUS_ERROR, ret);
}
/* CPPTEST_TEST_CASE_END test_Add_HWServW2ST_Service_error_serv */
