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
#include "steval_fcu001_v1_accelero.h"
#include "steval_fcu001_v1_gyro.h"
#include "steval_fcu001_v1_magneto.h"
#include "steval_fcu001_v1_pressure.h"
#include "steval_fcu001_v1_temperature.h"

/** User stub definition for function: DrvStatusTypeDef BSP_ACCELERO_Init(ACCELERO_ID_t, void **) */
EXTERN_C_LINKAGE DrvStatusTypeDef BSP_ACCELERO_Init (ACCELERO_ID_t id, void ** handle) ;
EXTERN_C_LINKAGE DrvStatusTypeDef CppTest_Stub_BSP_ACCELERO_Init (ACCELERO_ID_t id, void ** handle) 
{
    CPPTEST_STUB_CALLED("BSP_ACCELERO_Init");

    DrvStatusTypeDef __return = COMPONENT_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, ACCELERO_ID_t id, void ** handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = BSP_ACCELERO_Init(id, handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(DrvStatusTypeDef* __return, ACCELERO_ID_t id, void ** handle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, id, handle);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// disable as it hangs during tests
        __return = COMPONENT_OK; // BSP_ACCELERO_Init(id, handle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: DrvStatusTypeDef BSP_GYRO_Init(GYRO_ID_t, void **) */
EXTERN_C_LINKAGE DrvStatusTypeDef BSP_GYRO_Init (GYRO_ID_t id, void ** handle) ;
EXTERN_C_LINKAGE DrvStatusTypeDef CppTest_Stub_BSP_GYRO_Init (GYRO_ID_t id, void ** handle) 
{
    CPPTEST_STUB_CALLED("BSP_GYRO_Init");

    DrvStatusTypeDef __return = COMPONENT_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, GYRO_ID_t id, void ** handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = BSP_GYRO_Init(id, handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(DrvStatusTypeDef* __return, GYRO_ID_t id, void ** handle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, id, handle);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// disable as it hangs during tests
        __return = COMPONENT_OK; // BSP_GYRO_Init(id, handle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: DrvStatusTypeDef BSP_MAGNETO_Init(MAGNETO_ID_t, void **) */
EXTERN_C_LINKAGE DrvStatusTypeDef BSP_MAGNETO_Init (MAGNETO_ID_t id, void ** handle) ;
EXTERN_C_LINKAGE DrvStatusTypeDef CppTest_Stub_BSP_MAGNETO_Init (MAGNETO_ID_t id, void ** handle) 
{
    CPPTEST_STUB_CALLED("BSP_MAGNETO_Init");

    DrvStatusTypeDef __return = COMPONENT_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, MAGNETO_ID_t id, void ** handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = BSP_MAGNETO_Init(id, handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(DrvStatusTypeDef* __return, MAGNETO_ID_t id, void ** handle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, id, handle);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// disable as it hangs during tests
        __return = COMPONENT_OK; // BSP_MAGNETO_Init(id, handle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: DrvStatusTypeDef BSP_PRESSURE_Init(PRESSURE_ID_t, void **) */
EXTERN_C_LINKAGE DrvStatusTypeDef BSP_PRESSURE_Init (PRESSURE_ID_t id, void ** handle) ;
EXTERN_C_LINKAGE DrvStatusTypeDef CppTest_Stub_BSP_PRESSURE_Init (PRESSURE_ID_t id, void ** handle) 
{
    CPPTEST_STUB_CALLED("BSP_PRESSURE_Init");

    DrvStatusTypeDef __return = COMPONENT_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, PRESSURE_ID_t id, void ** handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = BSP_PRESSURE_Init(id, handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(DrvStatusTypeDef* __return, PRESSURE_ID_t id, void ** handle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, id, handle);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// disable as it hangs during tests
        __return = COMPONENT_OK; // BSP_PRESSURE_Init(id, handle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: DrvStatusTypeDef BSP_TEMPERATURE_Init(TEMPERATURE_ID_t, void **) */
EXTERN_C_LINKAGE DrvStatusTypeDef BSP_TEMPERATURE_Init (TEMPERATURE_ID_t id, void ** handle) ;
EXTERN_C_LINKAGE DrvStatusTypeDef CppTest_Stub_BSP_TEMPERATURE_Init (TEMPERATURE_ID_t id, void ** handle) 
{
    CPPTEST_STUB_CALLED("BSP_TEMPERATURE_Init");

    DrvStatusTypeDef __return = COMPONENT_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, TEMPERATURE_ID_t id, void ** handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BSP_TEMPERATURE_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = BSP_TEMPERATURE_Init(id, handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(DrvStatusTypeDef* __return, TEMPERATURE_ID_t id, void ** handle);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, id, handle);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// disable as it hangs during tests
        __return = COMPONENT_OK; // BSP_TEMPERATURE_Init(id, handle);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
