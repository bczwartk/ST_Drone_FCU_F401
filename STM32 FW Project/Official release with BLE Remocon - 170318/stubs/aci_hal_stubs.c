#include "cpptest.h"

/**
 * This file contains user stub definitions.
 *
 * To create a user stub:
 * 1. Open stub template list:
 *    - Eclipse IDE: type 'stub' and press <Ctrl> <Space>
 *    - Microsoft Visual Studio IDE: use context menu C++test->Insert Snippet...
 * 2. Choose the stub template from the list.
 * 3. #include the header file where the function you want to stub is originally 
 *    declared as well as any supporting header files as necessary.
 * 4. Fill out the stub signature to match that of the original function, 
 *    while keeping the CppTest_Stub prefix when it applies.
 *    Note: for C++ operators, use appropriate stub names - e.g.:
 *        CppTest_Stub_operator_new    for operator new
 *        CppTest_Stub_operator_delete for operator delete
 *        CppTest_Stub_operator_plus   for operator +
 *    Refer to C++test User's Guide for a complete list of stub names for operators. 
 * 5. Fill out the body of the stub according to intent.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */
#include "ble_status.h"

/** User stub definition for function: tBleStatus aci_hal_set_tx_power_level(uint8_t, uint8_t) */
EXTERN_C_LINKAGE tBleStatus aci_hal_set_tx_power_level (uint8_t en_high_power, uint8_t pa_level) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_hal_set_tx_power_level (uint8_t en_high_power, uint8_t pa_level) 
{
    CPPTEST_STUB_CALLED("aci_hal_set_tx_power_level");

    tBleStatus __return = BLE_STATUS_SUCCESS;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t en_high_power, uint8_t pa_level)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_hal_set_tx_power_level", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_hal_set_tx_power_level(en_high_power, pa_level);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint8_t en_high_power, uint8_t pa_level);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, en_high_power, pa_level);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// seem to hang tests - disabled
        // __return = aci_hal_set_tx_power_level(en_high_power, pa_level);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus aci_hal_write_config_data(uint8_t, uint8_t, const uint8_t *) */
EXTERN_C_LINKAGE tBleStatus aci_hal_write_config_data (uint8_t offset, uint8_t len, const uint8_t * val) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_hal_write_config_data (uint8_t offset, uint8_t len, const uint8_t * val) 
{
    CPPTEST_STUB_CALLED("aci_hal_write_config_data");

    tBleStatus __return = BLE_STATUS_SUCCESS;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t offset, uint8_t len, const uint8_t * val)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_hal_write_config_data", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_hal_write_config_data(offset, len, val);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint8_t offset, uint8_t len, const uint8_t * val);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, offset, len, val);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// seems to hang - disable
        // __return = aci_hal_write_config_data(offset, len, val);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
