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
#include "usbd_core.h"

/** User stub definition for function: USBD_StatusTypeDef USBD_LL_Reset(USBD_HandleTypeDef *) */
EXTERN_C_LINKAGE USBD_StatusTypeDef USBD_LL_Reset (USBD_HandleTypeDef * pdev) ;
EXTERN_C_LINKAGE USBD_StatusTypeDef CppTest_Stub_USBD_LL_Reset (USBD_HandleTypeDef * pdev) 
{
    CPPTEST_STUB_CALLED("USBD_LL_Reset");

    USBD_StatusTypeDef __return = USBD_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("USBD_LL_Reset", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = USBD_LL_Reset(pdev);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pdev);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //    __return = USBD_LL_Reset(pdev);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: USBD_StatusTypeDef USBD_LL_SetupStage(USBD_HandleTypeDef *, uint8_t *) */
EXTERN_C_LINKAGE USBD_StatusTypeDef USBD_LL_SetupStage (USBD_HandleTypeDef * pdev, uint8_t * psetup) ;
EXTERN_C_LINKAGE USBD_StatusTypeDef CppTest_Stub_USBD_LL_SetupStage (USBD_HandleTypeDef * pdev, uint8_t * psetup) 
{
    CPPTEST_STUB_CALLED("USBD_LL_SetupStage");

    USBD_StatusTypeDef __return = USBD_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev, uint8_t * psetup)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("USBD_LL_SetupStage", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = USBD_LL_SetupStage(pdev, psetup);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev, uint8_t * psetup);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pdev, psetup);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = USBD_LL_SetupStage(pdev, psetup);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: USBD_StatusTypeDef USBD_LL_DataOutStage(USBD_HandleTypeDef *, uint8_t, uint8_t *) */
EXTERN_C_LINKAGE USBD_StatusTypeDef USBD_LL_DataOutStage (USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata) ;
EXTERN_C_LINKAGE USBD_StatusTypeDef CppTest_Stub_USBD_LL_DataOutStage (USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata) 
{
    CPPTEST_STUB_CALLED("USBD_LL_DataOutStage");

    USBD_StatusTypeDef __return = USBD_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("USBD_LL_DataOutStage", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = USBD_LL_DataOutStage(pdev, epnum, pdata);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pdev, epnum, pdata);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = USBD_LL_DataOutStage(pdev, epnum, pdata);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: USBD_StatusTypeDef USBD_LL_DataInStage(USBD_HandleTypeDef *, uint8_t, uint8_t *) */
EXTERN_C_LINKAGE USBD_StatusTypeDef USBD_LL_DataInStage (USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata) ;
EXTERN_C_LINKAGE USBD_StatusTypeDef CppTest_Stub_USBD_LL_DataInStage (USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata) 
{
    CPPTEST_STUB_CALLED("USBD_LL_DataInStage");

    USBD_StatusTypeDef __return = USBD_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("USBD_LL_DataInStage", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = USBD_LL_DataInStage(pdev, epnum, pdata);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(USBD_StatusTypeDef* __return, USBD_HandleTypeDef * pdev, uint8_t epnum, uint8_t * pdata);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pdev, epnum, pdata);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = USBD_LL_DataInStage(pdev, epnum, pdata);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
