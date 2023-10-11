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
#include "bluenrg_gatt_aci.h"

/** User stub definition for function: tBleStatus aci_gatt_update_char_value(uint16_t, uint16_t, uint8_t, uint8_t, const void *) */
EXTERN_C_LINKAGE tBleStatus aci_gatt_update_char_value (uint16_t servHandle, uint16_t charHandle, uint8_t charValOffset, uint8_t charValueLen, const void * charValue) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_gatt_update_char_value (uint16_t servHandle, uint16_t charHandle, uint8_t charValOffset, uint8_t charValueLen, const void * charValue) 
{
    CPPTEST_STUB_CALLED("aci_gatt_update_char_value");

    tBleStatus __return = BLE_STATUS_SUCCESS;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint16_t servHandle, uint16_t charHandle, uint8_t charValOffset, uint8_t charValueLen, const void * charValue)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_update_char_value", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_gatt_update_char_value(servHandle, charHandle, charValOffset, charValueLen, charValue);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint16_t servHandle, uint16_t charHandle, uint8_t charValOffset, uint8_t charValueLen, const void * charValue);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, servHandle, charHandle, charValOffset, charValueLen, charValue);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = aci_gatt_update_char_value(servHandle, charHandle, charValOffset, charValueLen, charValue);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus aci_gatt_add_serv(uint8_t, const uint8_t *, uint8_t, uint8_t, uint16_t *) */
EXTERN_C_LINKAGE tBleStatus aci_gatt_add_serv (uint8_t service_uuid_type, const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_gatt_add_serv (uint8_t service_uuid_type, const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle) 
{
    CPPTEST_STUB_CALLED("aci_gatt_add_serv");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t service_uuid_type, const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_serv", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_gatt_add_serv(service_uuid_type, service_uuid, service_type, max_attr_records, serviceHandle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint8_t service_uuid_type, const uint8_t * service_uuid, uint8_t service_type, uint8_t max_attr_records, uint16_t * serviceHandle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, service_uuid_type, service_uuid, service_type, max_attr_records, serviceHandle);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //    __return = aci_gatt_add_serv(service_uuid_type, service_uuid, service_type, max_attr_records, serviceHandle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus aci_gatt_add_char(uint16_t, uint8_t, const uint8_t *, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint16_t *) */
EXTERN_C_LINKAGE tBleStatus aci_gatt_add_char (uint16_t serviceHandle, uint8_t charUuidType, const uint8_t * charUuid, uint8_t charValueLen, uint8_t charProperties, uint8_t secPermissions, uint8_t gattEvtMask, uint8_t encryKeySize, uint8_t isVariable, uint16_t * charHandle) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_gatt_add_char (uint16_t serviceHandle, uint8_t charUuidType, const uint8_t * charUuid, uint8_t charValueLen, uint8_t charProperties, uint8_t secPermissions, uint8_t gattEvtMask, uint8_t encryKeySize, uint8_t isVariable, uint16_t * charHandle) 
{
    CPPTEST_STUB_CALLED("aci_gatt_add_char");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint16_t serviceHandle, uint8_t charUuidType, const uint8_t * charUuid, uint8_t charValueLen, uint8_t charProperties, uint8_t secPermissions, uint8_t gattEvtMask, uint8_t encryKeySize, uint8_t isVariable, uint16_t * charHandle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_add_char", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_gatt_add_char(serviceHandle, charUuidType, charUuid, charValueLen, charProperties, secPermissions, gattEvtMask, encryKeySize, isVariable, charHandle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint16_t serviceHandle, uint8_t charUuidType, const uint8_t * charUuid, uint8_t charValueLen, uint8_t charProperties, uint8_t secPermissions, uint8_t gattEvtMask, uint8_t encryKeySize, uint8_t isVariable, uint16_t * charHandle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, serviceHandle, charUuidType, charUuid, charValueLen, charProperties, secPermissions, gattEvtMask, encryKeySize, isVariable, charHandle);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //    __return = aci_gatt_add_char(serviceHandle, charUuidType, charUuid, charValueLen, charProperties, secPermissions, gattEvtMask, encryKeySize, isVariable, charHandle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus aci_gatt_allow_read(uint16_t) */
EXTERN_C_LINKAGE tBleStatus aci_gatt_allow_read (uint16_t conn_handle) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_aci_gatt_allow_read (uint16_t conn_handle) 
{
    CPPTEST_STUB_CALLED("aci_gatt_allow_read");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint16_t conn_handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("aci_gatt_allow_read", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = aci_gatt_allow_read(conn_handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint16_t conn_handle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, conn_handle);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        // __return = aci_gatt_allow_read(conn_handle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
