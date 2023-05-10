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

static tBleStatus CppTest_StubCallback_aci_gatt_add_char_retval = BLE_STATUS_SUCCESS;
void CppTest_StubCallback_aci_gatt_add_char(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t service_uuid_type,
		const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle)
{
	*__return = CppTest_StubCallback_aci_gatt_add_char_retval;
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
