#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/main.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/main.c");

EXTERN_C_LINKAGE void TS_main_BlueNRG_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_main_BlueNRG_callTest(const char*);

CPPTEST_TEST_SUITE(TS_main_BlueNRG);
        CPPTEST_TEST_SUITE_SETUP(TS_main_BlueNRG_testSuiteSetUp);
        CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_all_OK);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_main_BlueNRG_testSuiteTearDown);
CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_hw_serv_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_console_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_config_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_BlueNRG_Init_version_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_BlueNRG_Init_aci_hal_write_config_data_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_BlueNRG_Init_aci_gatt_init_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_BlueNRG_Init_aci_gap_init_IDB05A1_fail);
CPPTEST_TEST(TS_main_BlueNRG_test_BlueNRG_Init_aci_gap_set_auth_requirement_fail);
CPPTEST_TEST_SUITE_END();
        
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_all_OK(void);

void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_hw_serv_fail(void);
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_console_fail(void);
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_config_fail(void);
void TS_main_BlueNRG_test_BlueNRG_Init_version_fail(void);
void TS_main_BlueNRG_test_BlueNRG_Init_aci_hal_write_config_data_fail(void);
void TS_main_BlueNRG_test_BlueNRG_Init_aci_gatt_init_fail(void);
void TS_main_BlueNRG_test_BlueNRG_Init_aci_gap_init_IDB05A1_fail(void);
void TS_main_BlueNRG_test_BlueNRG_Init_aci_gap_set_auth_requirement_fail(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_main_BlueNRG);

void TS_main_BlueNRG_testSuiteSetUp(void);
void TS_main_BlueNRG_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_main_BlueNRG_testSuiteTearDown(void);
void TS_main_BlueNRG_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_main_BlueNRG_setUp(void);
void TS_main_BlueNRG_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_main_BlueNRG_tearDown(void);
void TS_main_BlueNRG_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


// callbacks
void CppTest_StubCallback_Add_HWServW2ST_Service_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
{
	*__return = BLE_STATUS_ERROR;
}
void CppTest_StubCallback_Add_ConsoleW2ST_Service_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
{
	*__return = BLE_STATUS_ERROR;
}
void CppTest_StubCallback_Add_ConfigW2ST_Service_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
{
	*__return = BLE_STATUS_ERROR;
}


/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_all_OK */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_all_OK()
{
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_all_OK */

/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_hw_serv_fail */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_hw_serv_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("Add_HWServW2ST_Service", &CppTest_StubCallback_Add_HWServW2ST_Service_fail);
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_hw_serv_fail */

/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_console_fail */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_console_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("Add_ConsoleW2ST_Service", &CppTest_StubCallback_Add_ConsoleW2ST_Service_fail);
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_console_fail */

/* CPPTEST_TEST_CASE_BEGIN test_Init_BlueNRG_Custom_Services_config_fail */
void TS_main_BlueNRG_test_Init_BlueNRG_Custom_Services_config_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("Add_ConfigW2ST_Service", &CppTest_StubCallback_Add_ConfigW2ST_Service_fail);
	Init_BlueNRG_Custom_Services();
}
/* CPPTEST_TEST_CASE_END test_Init_BlueNRG_Custom_Services_config_fail */


uint8_t CppTest_StubCallback_getBlueNRGVersion_ret = BLE_STATUS_SUCCESS;  // BLE_STATUS_ERROR
void CppTest_StubCallback_getBlueNRGVersion(CppTest_StubCallInfo* stubCallInfo, uint8_t* __return, uint8_t * hwVersion, uint16_t * fwVersion)
{
	*__return = CppTest_StubCallback_getBlueNRGVersion_ret;
}
// CPPTEST_REGISTER_STUB_CALLBACK("getBlueNRGVersion", &CppTest_StubCallback_getBlueNRGVersion);

/* CPPTEST_TEST_CASE_BEGIN test_BlueNRG_Init_version_fail */
void TS_main_BlueNRG_test_BlueNRG_Init_version_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("getBlueNRGVersion", &CppTest_StubCallback_getBlueNRGVersion);
	CppTest_StubCallback_getBlueNRGVersion_ret = BLE_STATUS_ERROR;

	BlueNRG_Init();
}
/* CPPTEST_TEST_CASE_END test_BlueNRG_Init_version_fail */


void CppTest_StubCallback_aci_hal_write_config_data_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t en_high_power, uint8_t pa_level)
{
    *__return = BLE_STATUS_ERROR;
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_hal_write_config_data", &CppTest_StubCallback_aci_hal_write_config_data_fail);

/* CPPTEST_TEST_CASE_BEGIN test_BlueNRG_Init_aci_hal_write_config_data_fail */
void TS_main_BlueNRG_test_BlueNRG_Init_aci_hal_write_config_data_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_hal_write_config_data", &CppTest_StubCallback_aci_hal_write_config_data_fail);
	CPPTEST_REGISTER_STUB_CALLBACK("getBlueNRGVersion", &CppTest_StubCallback_getBlueNRGVersion);
	CppTest_StubCallback_getBlueNRGVersion_ret = BLE_STATUS_SUCCESS;

	BlueNRG_Init();
}
/* CPPTEST_TEST_CASE_END test_BlueNRG_Init_aci_hal_write_config_data_fail */


void CppTest_StubCallback_aci_gatt_init_fail(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
{
	*__return = BLE_STATUS_ERROR;
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_init", &CppTest_StubCallback_aci_gatt_init_fail);

/* CPPTEST_TEST_CASE_BEGIN test_BlueNRG_Init_aci_gatt_init_fail */
void TS_main_BlueNRG_test_BlueNRG_Init_aci_gatt_init_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_init", &CppTest_StubCallback_aci_gatt_init_fail);
	CPPTEST_REGISTER_STUB_CALLBACK("getBlueNRGVersion", &CppTest_StubCallback_getBlueNRGVersion);
	CppTest_StubCallback_getBlueNRGVersion_ret = BLE_STATUS_SUCCESS;

	BlueNRG_Init();
}
/* CPPTEST_TEST_CASE_END test_BlueNRG_Init_aci_gatt_init_fail */


void CppTest_StubCallback_aci_gap_init_IDB05A1_fail(
			CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return,
			uint8_t role, uint8_t privacy_enabled, uint8_t device_name_char_len,
			uint16_t * service_handle, uint16_t * dev_name_char_handle,
			uint16_t * appearance_char_handle)
{
	*__return = BLE_STATUS_ERROR;
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_gap_init_IDB05A1", &CppTest_StubCallback_aci_gap_init_IDB05A1_fail);

/* CPPTEST_TEST_CASE_BEGIN test_BlueNRG_Init_aci_gap_init_IDB05A1_fail */
void TS_main_BlueNRG_test_BlueNRG_Init_aci_gap_init_IDB05A1_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gap_init_IDB05A1", &CppTest_StubCallback_aci_gap_init_IDB05A1_fail);
	CPPTEST_REGISTER_STUB_CALLBACK("getBlueNRGVersion", &CppTest_StubCallback_getBlueNRGVersion);
	CppTest_StubCallback_getBlueNRGVersion_ret = BLE_STATUS_SUCCESS;

	BlueNRG_Init();
}
/* CPPTEST_TEST_CASE_END test_BlueNRG_Init_aci_gap_init_IDB05A1_fail */


void CppTest_StubCallback_aci_gap_set_auth_requirement_fail(
		CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return,
		uint8_t mitm_mode, uint8_t oob_enable, uint8_t * oob_data,
		uint8_t min_encryption_key_size, uint8_t max_encryption_key_size,
		uint8_t use_fixed_pin, uint32_t fixed_pin, uint8_t bonding_mode)
{
	*__return = BLE_STATUS_ERROR;
}
// CPPTEST_REGISTER_STUB_CALLBACK("aci_gap_set_auth_requirement", &CppTest_StubCallback_aci_gap_set_auth_requirement_fail);

/* CPPTEST_TEST_CASE_BEGIN test_BlueNRG_Init_aci_gap_set_auth_requirement_fail */
void TS_main_BlueNRG_test_BlueNRG_Init_aci_gap_set_auth_requirement_fail()
{
	CPPTEST_REGISTER_STUB_CALLBACK("aci_gap_set_auth_requirement", &CppTest_StubCallback_aci_gap_set_auth_requirement_fail);
	CPPTEST_REGISTER_STUB_CALLBACK("getBlueNRGVersion", &CppTest_StubCallback_getBlueNRGVersion);
	CppTest_StubCallback_getBlueNRGVersion_ret = BLE_STATUS_SUCCESS;

	BlueNRG_Init();
}
/* CPPTEST_TEST_CASE_END test_BlueNRG_Init_aci_gap_set_auth_requirement_fail */
