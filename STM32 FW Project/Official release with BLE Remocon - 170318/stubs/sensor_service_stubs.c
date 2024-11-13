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
#include "sensor_service.h"

/** User stub definition for function: tBleStatus Stderr_Update(uint8_t *, uint8_t) */
EXTERN_C_LINKAGE tBleStatus Stderr_Update (const uint8_t * data, uint8_t length) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Stderr_Update (const uint8_t * data, uint8_t length)
{
    CPPTEST_STUB_CALLED("Stderr_Update");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t * data, uint8_t length)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Stderr_Update", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Stderr_Update(data, length);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, const uint8_t * data, uint8_t length);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, data, length);

    // had to comment it out not to hang tests waiting for stderr
    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = Stderr_Update(data, length);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void DisableHWFeatures(void) */
EXTERN_C_LINKAGE void DisableHWFeatures (void) ;
EXTERN_C_LINKAGE void CppTest_Stub_DisableHWFeatures (void) 
{
    CPPTEST_STUB_CALLED("DisableHWFeatures");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("DisableHWFeatures", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: tBleStatus Term_Update_AfterRead(void) */
EXTERN_C_LINKAGE tBleStatus Term_Update_AfterRead (void) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Term_Update_AfterRead (void) 
{
    CPPTEST_STUB_CALLED("Term_Update_AfterRead");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Term_Update_AfterRead", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus Stderr_Update_AfterRead(void) */
EXTERN_C_LINKAGE tBleStatus Stderr_Update_AfterRead (void) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Stderr_Update_AfterRead (void) 
{
    CPPTEST_STUB_CALLED("Stderr_Update_AfterRead");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Stderr_Update_AfterRead", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus ARMING_Update(uint8_t) */
EXTERN_C_LINKAGE tBleStatus ARMING_Update (uint8_t ArmingStatus) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_ARMING_Update (uint8_t ArmingStatus) 
{
    CPPTEST_STUB_CALLED("ARMING_Update");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t ArmingStatus)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("ARMING_Update", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = ARMING_Update(ArmingStatus);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, uint8_t ArmingStatus);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, ArmingStatus);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = ARMING_Update(ArmingStatus);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus Batt_Env_RSSI_Update(int32_t, uint16_t, int16_t, int16_t) */
EXTERN_C_LINKAGE tBleStatus Batt_Env_RSSI_Update (int32_t Press, uint16_t Batt, int16_t Temp, int16_t RSSI) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Batt_Env_RSSI_Update (int32_t Press, uint16_t Batt, int16_t Temp, int16_t RSSI) 
{
    CPPTEST_STUB_CALLED("Batt_Env_RSSI_Update");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, int32_t Press, uint16_t Batt, int16_t Temp, int16_t RSSI)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Batt_Env_RSSI_Update", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Batt_Env_RSSI_Update(Press, Batt, Temp, RSSI);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, int32_t Press, uint16_t Batt, int16_t Temp, int16_t RSSI);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, Press, Batt, Temp, RSSI);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = Batt_Env_RSSI_Update(Press, Batt, Temp, RSSI);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void GAP_DisconnectionComplete_CB(void) */
EXTERN_C_LINKAGE void GAP_DisconnectionComplete_CB (void) ;
EXTERN_C_LINKAGE void CppTest_Stub_GAP_DisconnectionComplete_CB (void) 
{
    CPPTEST_STUB_CALLED("GAP_DisconnectionComplete_CB");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("GAP_DisconnectionComplete_CB", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

//    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
//    	GAP_DisconnectionComplete_CB();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void GAP_ConnectionComplete_CB(uint8_t *, uint16_t) */
EXTERN_C_LINKAGE void GAP_ConnectionComplete_CB (uint8_t  addr[6], uint16_t handle) ;
EXTERN_C_LINKAGE void CppTest_Stub_GAP_ConnectionComplete_CB (uint8_t  addr[6], uint16_t handle) 
{
    CPPTEST_STUB_CALLED("GAP_ConnectionComplete_CB");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, uint8_t * addr, uint16_t handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("GAP_ConnectionComplete_CB", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(uint8_t * addr, uint16_t handle);
        CPPTEST_STUB_INVOKE_CALLBACK(addr, handle);

        //    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        //    	GAP_ConnectionComplete_CB(addr, handle);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void Read_Request_CB(uint16_t) */
EXTERN_C_LINKAGE void Read_Request_CB (uint16_t handle) ;
EXTERN_C_LINKAGE void CppTest_Stub_Read_Request_CB (uint16_t handle) 
{
    CPPTEST_STUB_CALLED("Read_Request_CB");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, uint16_t handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Read_Request_CB", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     Read_Request_CB(handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(uint16_t handle);
        CPPTEST_STUB_INVOKE_CALLBACK(handle);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        Read_Request_CB(handle);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void Attribute_Modified_CB(uint16_t, uint8_t *, uint8_t) */
EXTERN_C_LINKAGE void Attribute_Modified_CB (uint16_t attr_handle, uint8_t * att_data, uint8_t data_length) ;
EXTERN_C_LINKAGE void CppTest_Stub_Attribute_Modified_CB (uint16_t attr_handle, uint8_t * att_data, uint8_t data_length) 
{
    CPPTEST_STUB_CALLED("Attribute_Modified_CB");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, uint16_t attr_handle, uint8_t * att_data, uint8_t data_length)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Attribute_Modified_CB", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     Attribute_Modified_CB(attr_handle, att_data, data_length);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(uint16_t attr_handle, uint8_t * att_data, uint8_t data_length);
        CPPTEST_STUB_INVOKE_CALLBACK(attr_handle, att_data, data_length);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        Attribute_Modified_CB(attr_handle, att_data, data_length);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: uint32_t DebugConsoleCommandParsing(uint8_t *, uint8_t) */
EXTERN_C_LINKAGE uint32_t DebugConsoleCommandParsing (uint8_t * att_data, uint8_t data_length) ;
EXTERN_C_LINKAGE uint32_t CppTest_Stub_DebugConsoleCommandParsing (uint8_t * att_data, uint8_t data_length) 
{
    CPPTEST_STUB_CALLED("DebugConsoleCommandParsing");

    uint32_t __return = 0U;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, uint32_t* __return, uint8_t * att_data, uint8_t data_length)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("DebugConsoleCommandParsing", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(uint32_t* __return, uint8_t * att_data, uint8_t data_length);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, att_data, data_length);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus Term_Update(uint8_t *, uint8_t) */
EXTERN_C_LINKAGE tBleStatus Term_Update (const uint8_t * data, uint8_t length) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Term_Update (const uint8_t * data, uint8_t length)
{
    CPPTEST_STUB_CALLED("Term_Update");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, uint8_t * data, uint8_t length)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Term_Update", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Term_Update(data, length);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, const uint8_t * data, uint8_t length);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, data, length);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	Term_Update(data, length);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: uint32_t ConfigCommandParsing(const uint8_t *, uint8_t) */
EXTERN_C_LINKAGE uint32_t ConfigCommandParsing (const uint8_t * att_data, uint8_t data_length) ;
EXTERN_C_LINKAGE uint32_t CppTest_Stub_ConfigCommandParsing (const uint8_t * att_data, uint8_t data_length) 
{
    CPPTEST_STUB_CALLED("ConfigCommandParsing");

    uint32_t __return = 1U;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, uint32_t* __return, const uint8_t * att_data, uint8_t data_length)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("ConfigCommandParsing", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(uint32_t* __return, const uint8_t * att_data, uint8_t data_length);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, att_data, data_length);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus AccGyroMag_Update(SensorAxes_t *, SensorAxes_t *, SensorAxes_t *) */
EXTERN_C_LINKAGE tBleStatus AccGyroMag_Update (const SensorAxes_t * Acc, SensorAxes_t * Gyro, const SensorAxes_t * Mag) ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_AccGyroMag_Update (const SensorAxes_t * Acc, SensorAxes_t * Gyro, const SensorAxes_t * Mag)
{
    CPPTEST_STUB_CALLED("AccGyroMag_Update");

    tBleStatus __return = (unsigned char)0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return, SensorAxes_t * Acc, SensorAxes_t * Gyro, SensorAxes_t * Mag)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("AccGyroMag_Update", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = AccGyroMag_Update(Acc, Gyro, Mag);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return, const SensorAxes_t * Acc, SensorAxes_t * Gyro, const SensorAxes_t * Mag);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, Acc, Gyro, Mag);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = AccGyroMag_Update(Acc, Gyro, Mag);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus Add_HWServW2ST_Service(void) */
EXTERN_C_LINKAGE tBleStatus Add_HWServW2ST_Service () ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Add_HWServW2ST_Service (void) 
{
    CPPTEST_STUB_CALLED("Add_HWServW2ST_Service");

    tBleStatus __return = BLE_STATUS_SUCCESS;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Add_HWServW2ST_Service", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Add_HWServW2ST_Service();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = Add_HWServW2ST_Service();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus Add_ConsoleW2ST_Service(void) */
EXTERN_C_LINKAGE tBleStatus Add_ConsoleW2ST_Service () ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Add_ConsoleW2ST_Service (void) 
{
    CPPTEST_STUB_CALLED("Add_ConsoleW2ST_Service");

    tBleStatus __return = BLE_STATUS_SUCCESS;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Add_ConsoleW2ST_Service", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Add_ConsoleW2ST_Service();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = Add_ConsoleW2ST_Service();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: tBleStatus Add_ConfigW2ST_Service(void) */
EXTERN_C_LINKAGE tBleStatus Add_ConfigW2ST_Service () ;
EXTERN_C_LINKAGE tBleStatus CppTest_Stub_Add_ConfigW2ST_Service (void) 
{
    CPPTEST_STUB_CALLED("Add_ConfigW2ST_Service");

    tBleStatus __return = BLE_STATUS_SUCCESS;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, tBleStatus* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Add_ConfigW2ST_Service", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = Add_ConfigW2ST_Service();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(tBleStatus* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = Add_ConfigW2ST_Service();

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
