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
#include "stm32f4xx_hal_pcd.h"
#include "stm32f4xx_hal_pcd_ex.h"
#include "stm32f4xx_hal_cortex.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_uart.h"
#include "stm32f4xx_hal_adc.h"
#include "stm32f4xx_hal_tim.h"
#include "stm32f4xx_hal_tim_ex.h"

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
    	// Note: this causes the test exe to get stuck - disabled
        // HAL_Delay(Delay);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_Init(PCD_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_Init (PCD_HandleTypeDef * hpcd) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_Init (PCD_HandleTypeDef * hpcd) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_Init");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_Init(hpcd);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd);

    // calling the original causes tests to hang
    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_Init(hpcd);

    } else {
        /* You can put additional stub logic here. */
    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_DeInit(PCD_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_DeInit (PCD_HandleTypeDef * hpcd) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_DeInit (PCD_HandleTypeDef * hpcd) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_DeInit");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_DeInit", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_DeInit(hpcd);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd);

    // access viol when calling HAL
    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //    __return = HAL_PCD_DeInit(hpcd);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_Start(PCD_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_Start (PCD_HandleTypeDef * hpcd) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_Start (PCD_HandleTypeDef * hpcd) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_Start");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_Start", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_Start(hpcd);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //    __return = HAL_PCD_Start(hpcd);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_Stop(PCD_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_Stop (PCD_HandleTypeDef * hpcd) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_Stop (PCD_HandleTypeDef * hpcd) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_Stop");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_Stop", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_Stop(hpcd);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_Stop(hpcd);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCDEx_SetRxFiFo(PCD_HandleTypeDef *, uint16_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCDEx_SetRxFiFo (PCD_HandleTypeDef * hpcd, uint16_t size) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCDEx_SetRxFiFo (PCD_HandleTypeDef * hpcd, uint16_t size) 
{
    CPPTEST_STUB_CALLED("HAL_PCDEx_SetRxFiFo");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint16_t size)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCDEx_SetRxFiFo", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCDEx_SetRxFiFo(hpcd, size);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint16_t size);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, size);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_PCDEx_SetRxFiFo(hpcd, size);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCDEx_SetTxFiFo(PCD_HandleTypeDef *, uint8_t, uint16_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCDEx_SetTxFiFo (PCD_HandleTypeDef * hpcd, uint8_t fifo, uint16_t size) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCDEx_SetTxFiFo (PCD_HandleTypeDef * hpcd, uint8_t fifo, uint16_t size) 
{
    CPPTEST_STUB_CALLED("HAL_PCDEx_SetTxFiFo");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t fifo, uint16_t size)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCDEx_SetTxFiFo", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCDEx_SetTxFiFo(hpcd, fifo, size);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t fifo, uint16_t size);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, fifo, size);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_PCDEx_SetTxFiFo(hpcd, fifo, size);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_EP_Open(PCD_HandleTypeDef *, uint8_t, uint16_t, uint8_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_EP_Open (PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_EP_Open (PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_EP_Open");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_EP_Open", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_EP_Open(hpcd, ep_addr, ep_mps, ep_type);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, ep_addr, ep_mps, ep_type);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_EP_Open(hpcd, ep_addr, ep_mps, ep_type);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_EP_ClrStall(PCD_HandleTypeDef *, uint8_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_EP_ClrStall (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_EP_ClrStall (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_EP_ClrStall");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_EP_ClrStall", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_EP_ClrStall(hpcd, ep_addr);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, ep_addr);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_EP_ClrStall(hpcd, ep_addr);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_EP_SetStall(PCD_HandleTypeDef *, uint8_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_EP_SetStall (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_EP_SetStall (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_EP_SetStall");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_EP_SetStall", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_EP_SetStall(hpcd, ep_addr);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, ep_addr);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_EP_SetStall(hpcd, ep_addr);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_EP_Close(PCD_HandleTypeDef *, uint8_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_EP_Close (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_EP_Close (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_EP_Close");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_EP_Close", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_EP_Close(hpcd, ep_addr);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, ep_addr);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_EP_Close(hpcd, ep_addr);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_EP_Flush(PCD_HandleTypeDef *, uint8_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_EP_Flush (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_EP_Flush (PCD_HandleTypeDef * hpcd, uint8_t ep_addr) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_EP_Flush");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_EP_Flush", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_EP_Flush(hpcd, ep_addr);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, ep_addr);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_EP_Flush(hpcd, ep_addr);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_EP_Transmit(PCD_HandleTypeDef *, uint8_t, uint8_t *, uint32_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_EP_Transmit (PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_EP_Transmit (PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_EP_Transmit");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_EP_Transmit", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_EP_Transmit(hpcd, ep_addr, pBuf, len);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, ep_addr, pBuf, len);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //     __return = HAL_PCD_EP_Transmit(hpcd, ep_addr, pBuf, len);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_EP_Receive(PCD_HandleTypeDef *, uint8_t, uint8_t *, uint32_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_EP_Receive (PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_EP_Receive (PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_EP_Receive");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_EP_Receive", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_EP_Receive(hpcd, ep_addr, pBuf, len);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t ep_addr, uint8_t * pBuf, uint32_t len);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, ep_addr, pBuf, len);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //    __return = HAL_PCD_EP_Receive(hpcd, ep_addr, pBuf, len);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_PCD_SetAddress(PCD_HandleTypeDef *, uint8_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_PCD_SetAddress (PCD_HandleTypeDef * hpcd, uint8_t address) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_PCD_SetAddress (PCD_HandleTypeDef * hpcd, uint8_t address) 
{
    CPPTEST_STUB_CALLED("HAL_PCD_SetAddress");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t address)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_PCD_SetAddress", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_PCD_SetAddress(hpcd, address);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, PCD_HandleTypeDef * hpcd, uint8_t address);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hpcd, address);

    // } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    //    __return = HAL_PCD_SetAddress(hpcd, address);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void HAL_GPIO_DeInit(GPIO_TypeDef *, uint32_t) */
EXTERN_C_LINKAGE void HAL_GPIO_DeInit (GPIO_TypeDef * GPIOx, uint32_t GPIO_Pin) ;
EXTERN_C_LINKAGE void CppTest_Stub_HAL_GPIO_DeInit (GPIO_TypeDef * GPIOx, uint32_t GPIO_Pin) 
{
    CPPTEST_STUB_CALLED("HAL_GPIO_DeInit");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, GPIO_TypeDef * GPIOx, uint32_t GPIO_Pin)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_GPIO_DeInit", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     HAL_GPIO_DeInit(GPIOx, GPIO_Pin);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(GPIO_TypeDef * GPIOx, uint32_t GPIO_Pin);
        CPPTEST_STUB_INVOKE_CALLBACK(GPIOx, GPIO_Pin);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        HAL_GPIO_DeInit(GPIOx, GPIO_Pin);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void HAL_GPIO_Init(GPIO_TypeDef *, GPIO_InitTypeDef *) */
EXTERN_C_LINKAGE void HAL_GPIO_Init (GPIO_TypeDef * GPIOx, GPIO_InitTypeDef * GPIO_Init) ;
EXTERN_C_LINKAGE void CppTest_Stub_HAL_GPIO_Init (GPIO_TypeDef * GPIOx, GPIO_InitTypeDef * GPIO_Init) 
{
    CPPTEST_STUB_CALLED("HAL_GPIO_Init");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, GPIO_TypeDef * GPIOx, GPIO_InitTypeDef * GPIO_Init)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_GPIO_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     HAL_GPIO_Init(GPIOx, GPIO_Init);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(GPIO_TypeDef * GPIOx, GPIO_InitTypeDef * GPIO_Init);
        CPPTEST_STUB_INVOKE_CALLBACK(GPIOx, GPIO_Init);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        HAL_GPIO_Init(GPIOx, GPIO_Init);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void HAL_NVIC_EnableIRQ(IRQn_Type) */
EXTERN_C_LINKAGE void HAL_NVIC_EnableIRQ (IRQn_Type IRQn) ;
EXTERN_C_LINKAGE void CppTest_Stub_HAL_NVIC_EnableIRQ (IRQn_Type IRQn) 
{
    CPPTEST_STUB_CALLED("HAL_NVIC_EnableIRQ");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, IRQn_Type IRQn)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_NVIC_EnableIRQ", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     HAL_NVIC_EnableIRQ(IRQn);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(IRQn_Type IRQn);
        CPPTEST_STUB_INVOKE_CALLBACK(IRQn);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        HAL_NVIC_EnableIRQ(IRQn);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void HAL_NVIC_DisableIRQ(IRQn_Type) */
EXTERN_C_LINKAGE void HAL_NVIC_DisableIRQ (IRQn_Type IRQn) ;
EXTERN_C_LINKAGE void CppTest_Stub_HAL_NVIC_DisableIRQ (IRQn_Type IRQn)
{
    CPPTEST_STUB_CALLED("HAL_NVIC_DisableIRQ");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, IRQn_Type IRQn)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_NVIC_DisableIRQ", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     HAL_NVIC_DisableIRQ(IRQn);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(IRQn_Type IRQn);
        CPPTEST_STUB_INVOKE_CALLBACK(IRQn);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
    	HAL_NVIC_DisableIRQ(IRQn);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: void HAL_NVIC_SetPriority(IRQn_Type, uint32_t, uint32_t) */
EXTERN_C_LINKAGE void HAL_NVIC_SetPriority (IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority) ;
EXTERN_C_LINKAGE void CppTest_Stub_HAL_NVIC_SetPriority (IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority) 
{
    CPPTEST_STUB_CALLED("HAL_NVIC_SetPriority");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_NVIC_SetPriority", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     HAL_NVIC_SetPriority(IRQn, PreemptPriority, SubPriority);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
        CPPTEST_STUB_INVOKE_CALLBACK(IRQn, PreemptPriority, SubPriority);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        HAL_NVIC_SetPriority(IRQn, PreemptPriority, SubPriority);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** User stub definition for function: HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_UART_Init (UART_HandleTypeDef * huart) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_UART_Init (UART_HandleTypeDef * huart) 
{
    CPPTEST_STUB_CALLED("HAL_UART_Init");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, UART_HandleTypeDef * huart)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_UART_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_UART_Init(huart);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, UART_HandleTypeDef * huart);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, huart);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_UART_Init(huart);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef *, ADC_ChannelConfTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_ADC_ConfigChannel (ADC_HandleTypeDef * hadc, ADC_ChannelConfTypeDef * sConfig) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_ADC_ConfigChannel (ADC_HandleTypeDef * hadc, ADC_ChannelConfTypeDef * sConfig) 
{
    CPPTEST_STUB_CALLED("HAL_ADC_ConfigChannel");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc, ADC_ChannelConfTypeDef * sConfig)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_ConfigChannel", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_ADC_ConfigChannel(hadc, sConfig);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc, ADC_ChannelConfTypeDef * sConfig);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hadc, sConfig);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_ADC_ConfigChannel(hadc, sConfig);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_ADC_Init (ADC_HandleTypeDef * hadc) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_ADC_Init (ADC_HandleTypeDef * hadc) 
{
    CPPTEST_STUB_CALLED("HAL_ADC_Init");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_ADC_Init(hadc);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hadc);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_ADC_Init(hadc);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_TIM_Base_Init (TIM_HandleTypeDef * htim) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_TIM_Base_Init (TIM_HandleTypeDef * htim) 
{
    CPPTEST_STUB_CALLED("HAL_TIM_Base_Init");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_Base_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_TIM_Base_Init(htim);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, htim);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_TIM_Base_Init(htim);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *, TIM_ClockConfigTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_TIM_ConfigClockSource (TIM_HandleTypeDef * htim, TIM_ClockConfigTypeDef * sClockSourceConfig) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_TIM_ConfigClockSource (TIM_HandleTypeDef * htim, TIM_ClockConfigTypeDef * sClockSourceConfig) 
{
    CPPTEST_STUB_CALLED("HAL_TIM_ConfigClockSource");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_ClockConfigTypeDef * sClockSourceConfig)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_ConfigClockSource", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_TIM_ConfigClockSource(htim, sClockSourceConfig);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_ClockConfigTypeDef * sClockSourceConfig);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, htim, sClockSourceConfig);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_TIM_ConfigClockSource(htim, sClockSourceConfig);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_TIM_IC_Init (TIM_HandleTypeDef * htim) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_TIM_IC_Init (TIM_HandleTypeDef * htim) 
{
    CPPTEST_STUB_CALLED("HAL_TIM_IC_Init");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_IC_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_TIM_IC_Init(htim);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, htim);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_TIM_IC_Init(htim);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef *, TIM_MasterConfigTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization (TIM_HandleTypeDef * htim, TIM_MasterConfigTypeDef * sMasterConfig) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_TIMEx_MasterConfigSynchronization (TIM_HandleTypeDef * htim, TIM_MasterConfigTypeDef * sMasterConfig) 
{
    CPPTEST_STUB_CALLED("HAL_TIMEx_MasterConfigSynchronization");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_MasterConfigTypeDef * sMasterConfig)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIMEx_MasterConfigSynchronization", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_TIMEx_MasterConfigSynchronization(htim, sMasterConfig);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_MasterConfigTypeDef * sMasterConfig);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, htim, sMasterConfig);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_TIMEx_MasterConfigSynchronization(htim, sMasterConfig);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *, TIM_IC_InitTypeDef *, uint32_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel (TIM_HandleTypeDef * htim, TIM_IC_InitTypeDef * sConfig, uint32_t Channel) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_TIM_IC_ConfigChannel (TIM_HandleTypeDef * htim, TIM_IC_InitTypeDef * sConfig, uint32_t Channel) 
{
    CPPTEST_STUB_CALLED("HAL_TIM_IC_ConfigChannel");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_IC_InitTypeDef * sConfig, uint32_t Channel)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_IC_ConfigChannel", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_TIM_IC_ConfigChannel(htim, sConfig, Channel);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_IC_InitTypeDef * sConfig, uint32_t Channel);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, htim, sConfig, Channel);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_TIM_IC_ConfigChannel(htim, sConfig, Channel);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_TIM_PWM_Init (TIM_HandleTypeDef * htim) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_TIM_PWM_Init (TIM_HandleTypeDef * htim) 
{
    CPPTEST_STUB_CALLED("HAL_TIM_PWM_Init");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_PWM_Init", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_TIM_PWM_Init(htim);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, htim);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_TIM_PWM_Init(htim);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *, TIM_OC_InitTypeDef *, uint32_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel (TIM_HandleTypeDef * htim, TIM_OC_InitTypeDef * sConfig, uint32_t Channel) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_TIM_PWM_ConfigChannel (TIM_HandleTypeDef * htim, TIM_OC_InitTypeDef * sConfig, uint32_t Channel) 
{
    CPPTEST_STUB_CALLED("HAL_TIM_PWM_ConfigChannel");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_OC_InitTypeDef * sConfig, uint32_t Channel)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_TIM_PWM_ConfigChannel", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_TIM_PWM_ConfigChannel(htim, sConfig, Channel);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, TIM_HandleTypeDef * htim, TIM_OC_InitTypeDef * sConfig, uint32_t Channel);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, htim, sConfig, Channel);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_TIM_PWM_ConfigChannel(htim, sConfig, Channel);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef *, uint32_t) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_ADC_PollForConversion (ADC_HandleTypeDef * hadc, uint32_t Timeout) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_ADC_PollForConversion (ADC_HandleTypeDef * hadc, uint32_t Timeout) 
{
    CPPTEST_STUB_CALLED("HAL_ADC_PollForConversion");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc, uint32_t Timeout)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_PollForConversion", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_ADC_PollForConversion(hadc, Timeout);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc, uint32_t Timeout);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hadc, Timeout);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_ADC_PollForConversion(hadc, Timeout);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef *) */
EXTERN_C_LINKAGE uint32_t HAL_ADC_GetValue (ADC_HandleTypeDef * hadc) ;
EXTERN_C_LINKAGE uint32_t CppTest_Stub_HAL_ADC_GetValue (ADC_HandleTypeDef * hadc) 
{
    CPPTEST_STUB_CALLED("HAL_ADC_GetValue");

    uint32_t __return = 0U;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, uint32_t* __return, ADC_HandleTypeDef * hadc)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_GetValue", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_ADC_GetValue(hadc);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(uint32_t* __return, ADC_HandleTypeDef * hadc);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hadc);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_ADC_GetValue(hadc);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_ADC_Start (ADC_HandleTypeDef * hadc) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_ADC_Start (ADC_HandleTypeDef * hadc) 
{
    CPPTEST_STUB_CALLED("HAL_ADC_Start");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_Start", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_ADC_Start(hadc);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hadc);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_ADC_Start(hadc);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef *) */
EXTERN_C_LINKAGE HAL_StatusTypeDef HAL_ADC_Stop (ADC_HandleTypeDef * hadc) ;
EXTERN_C_LINKAGE HAL_StatusTypeDef CppTest_Stub_HAL_ADC_Stop (ADC_HandleTypeDef * hadc) 
{
    CPPTEST_STUB_CALLED("HAL_ADC_Stop");

    HAL_StatusTypeDef __return = HAL_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("HAL_ADC_Stop", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = HAL_ADC_Stop(hadc);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(HAL_StatusTypeDef* __return, ADC_HandleTypeDef * hadc);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, hadc);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = HAL_ADC_Stop(hadc);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
