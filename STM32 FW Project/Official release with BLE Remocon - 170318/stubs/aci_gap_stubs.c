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
// #include "bluenrg_gap_aci.h"
#include "TargetFeatures.h"
#include "main.h"
#include "sensor_service.h"
#include "bluenrg_utils.h"
#include "bluenrg_l2cap_aci.h"


/** User stub definition for function: tBleStatus aci_gap_set_discoverable(uint8_t, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, const char *, uint8_t, uint8_t *, uint16_t, uint16_t) */
EXTERN_C_LINKAGE tBleStatus aci_gap_set_discoverable (uint8_t AdvType, uint16_t AdvIntervMin, uint16_t AdvIntervMax, uint8_t OwnAddrType, uint8_t AdvFilterPolicy, uint8_t LocalNameLen, const char * LocalName, uint8_t ServiceUUIDLen, uint8_t * ServiceUUIDList, uint16_t SlaveConnIntervMin, uint16_t SlaveConnIntervMax) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_gap_set_discoverable (uint8_t AdvType, uint16_t AdvIntervMin, uint16_t AdvIntervMax, uint8_t OwnAddrType, uint8_t AdvFilterPolicy, uint8_t LocalNameLen, const char * LocalName, uint8_t ServiceUUIDLen, uint8_t * ServiceUUIDList, uint16_t SlaveConnIntervMin, uint16_t SlaveConnIntervMax) 
{
    CPPTEST_STUB_CALLED("aci_gap_set_discoverable");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t AdvType, uint16_t AdvIntervMin, uint16_t AdvIntervMax, uint8_t OwnAddrType, uint8_t AdvFilterPolicy, uint8_t LocalNameLen, const char * LocalName, uint8_t ServiceUUIDLen, uint8_t * ServiceUUIDList, uint16_t SlaveConnIntervMin, uint16_t SlaveConnIntervMax)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_gap_set_discoverable", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_gap_set_discoverable(AdvType, AdvIntervMin, AdvIntervMax, OwnAddrType, AdvFilterPolicy, LocalNameLen, LocalName, ServiceUUIDLen, ServiceUUIDList, SlaveConnIntervMin, SlaveConnIntervMax);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint8_t AdvType, uint16_t AdvIntervMin, uint16_t AdvIntervMax,
        		                     uint8_t OwnAddrType, uint8_t AdvFilterPolicy, uint8_t LocalNameLen, const char * LocalName,
									 uint8_t ServiceUUIDLen, uint8_t * ServiceUUIDList, uint16_t SlaveConnIntervMin, uint16_t SlaveConnIntervMax);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, AdvType, AdvIntervMin, AdvIntervMax, OwnAddrType, AdvFilterPolicy,
        							 LocalNameLen, LocalName, ServiceUUIDLen, ServiceUUIDList, SlaveConnIntervMin, SlaveConnIntervMax);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// block the original as it causes exceptions inside HCI/BLE driver code
        // __return = aci_gap_set_discoverable(AdvType, AdvIntervMin, AdvIntervMax, OwnAddrType,
    	// 									   AdvFilterPolicy, LocalNameLen, LocalName, ServiceUUIDLen,
    	//                                     ServiceUUIDList, SlaveConnIntervMin, SlaveConnIntervMax);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus aci_gap_update_adv_data(uint8_t, const uint8_t *) */
EXTERN_C_LINKAGE tBleStatus aci_gap_update_adv_data (uint8_t AdvLen, const uint8_t * AdvData) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_gap_update_adv_data (uint8_t AdvLen, const uint8_t * AdvData) 
{
    CPPTEST_STUB_CALLED("aci_gap_update_adv_data");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t AdvLen, const uint8_t * AdvData)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_gap_update_adv_data", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_gap_update_adv_data(AdvLen, AdvData);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint8_t AdvLen, const uint8_t * AdvData);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, AdvLen, AdvData);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// block the original as it causes exceptions inside HCI/BLE driver code
    	// __return = aci_gap_update_adv_data(AdvLen, AdvData);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
