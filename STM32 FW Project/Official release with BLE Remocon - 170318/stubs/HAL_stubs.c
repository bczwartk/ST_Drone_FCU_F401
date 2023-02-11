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
#include "stm32f4xx_hal.h"

/** User stub definition for function: uint32_t HAL_GetTick(void) */
EXTERN_C_LINKAGE uint32_t HAL_GetTick () ;
EXTERN_C_LINKAGE uint32_t CppTest_Stub_HAL_GetTick (void) 
{
    CPPTEST_STUB_CALLED("HAL_GetTick");

    uint32_t __return = 0U;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, uint32_t* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_GetTick", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_GetTick();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(uint32_t* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else {
        /* just a wrapper over the original by default - special cases handled in stub callbacks */
    	__return = HAL_GetTick();
    }

    return __return;
}

/** User stub definition for function: void HAL_Delay(volatile uint32_t) */
EXTERN_C_LINKAGE void HAL_Delay (volatile uint32_t Delay) ;
EXTERN_C_LINKAGE void CppTest_Stub_HAL_Delay (volatile uint32_t Delay) 
{
    CPPTEST_STUB_CALLED("HAL_Delay");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, volatile uint32_t Delay)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_Delay", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     HAL_Delay(Delay);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(volatile uint32_t Delay);
        CPPTEST_STUB_INVOKE_CALLBACK(Delay);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	// Note: this causes the test exe to get stuck - use callback to bypass
        HAL_Delay(Delay);

    } else {
        /* You can put additional stub logic here. */

    }

}
