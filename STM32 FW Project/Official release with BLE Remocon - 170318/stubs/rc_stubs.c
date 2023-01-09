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
#include "rc.h"

/** User stub definition for function: void update_rc_data(int32_t) */
EXTERN_C_LINKAGE void update_rc_data (int32_t idx) ;
EXTERN_C_LINKAGE void CppTest_Stub_update_rc_data (int32_t idx) 
{
    CPPTEST_STUB_CALLED("update_rc_data");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int32_t idx)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("update_rc_data", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     update_rc_data(idx);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
    	// CPPTEST_MESSAGE("##  update_rc_data() stub");
        CPPTEST_STUB_CALLBACK_PARAMS(int32_t idx);
        CPPTEST_STUB_INVOKE_CALLBACK(idx);

    } else {
    	/* just a wrapper over the original */
    	update_rc_data(idx);
    }

}

/** User stub definition for function: void User_Timer_Callback(void) */
EXTERN_C_LINKAGE void User_Timer_Callback () ;
EXTERN_C_LINKAGE void CppTest_Stub_User_Timer_Callback (void) 
{
    CPPTEST_STUB_CALLED("User_Timer_Callback");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("User_Timer_Callback", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     User_Timer_Callback();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        User_Timer_Callback();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void init_rc_variables(void) */
EXTERN_C_LINKAGE void init_rc_variables (void) ;
EXTERN_C_LINKAGE void CppTest_Stub_init_rc_variables (void) 
{
    CPPTEST_STUB_CALLED("init_rc_variables");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("init_rc_variables", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     init_rc_variables();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        init_rc_variables();

    } else {
        /* You can put additional stub logic here. */

    }

}
