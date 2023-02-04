#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/timer.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/timer.c");

EXTERN_C_LINKAGE void TS_timer_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_timer_callTest(const char*);

CPPTEST_TEST_SUITE(TS_timer);
        CPPTEST_TEST_SUITE_SETUP(TS_timer_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_timer_testSuiteTearDown);
CPPTEST_TEST(TS_timer_test_ClearTimer);
CPPTEST_TEST(TS_timer_test_StopTimer);
CPPTEST_TEST(TS_timer_test_SetupTimer);
CPPTEST_TEST(TS_timer_test_isTimerEventExist);
CPPTEST_TEST(TS_timer_test_StartTimer);
CPPTEST_TEST(TS_timer_test_TimerProcess_flag_0);
CPPTEST_TEST(TS_timer_test_TimerProcess_flag_1_no_event);
CPPTEST_TEST(TS_timer_test_TimerProcess_flag_1_with_event);
CPPTEST_TEST(TS_timer_test_User_Timer_Callback);
CPPTEST_TEST_SUITE_END();
        

void TS_timer_test_ClearTimer(void);
void TS_timer_test_StopTimer(void);
void TS_timer_test_SetupTimer(void);
void TS_timer_test_isTimerEventExist(void);
void TS_timer_test_StartTimer(void);
void TS_timer_test_TimerProcess_flag_0(void);
void TS_timer_test_TimerProcess_flag_1_no_event(void);
void TS_timer_test_TimerProcess_flag_1_with_event(void);
void TS_timer_test_User_Timer_Callback(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_timer);

void TS_timer_testSuiteSetUp(void);
void TS_timer_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_timer_testSuiteTearDown(void);
void TS_timer_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_timer_setUp(void);
void TS_timer_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_timer_tearDown(void);
void TS_timer_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_ClearTimer */
/* CPPTEST_TEST_CASE_CONTEXT void ClearTimer(tUserTimer *) */
void TS_timer_test_ClearTimer()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    tUserTimer _t_2 ;
     _t_2.target_tick  = 0u;
     _t_2.interval  = 0u;
     _t_2.flag  = 0u;
     _t_2.flag2  = 0u;
     _t_2.event_cnt  = 1u;
    tUserTimer * _t  = & _t_2;
    {
        /* Tested function call */
        ClearTimer(_t);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->event_cnt);
    }
}
/* CPPTEST_TEST_CASE_END test_ClearTimer */

/* CPPTEST_TEST_CASE_BEGIN test_StopTimer */
/* CPPTEST_TEST_CASE_CONTEXT void StopTimer(tUserTimer *) */
void TS_timer_test_StopTimer()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    tUserTimer _t_4 ;
     _t_4.target_tick  = 0u;
     _t_4.interval  = 0u;
     _t_4.flag  = 1u;
     _t_4.flag2  = 0u;
     _t_4.event_cnt  = 0u;
    tUserTimer * _t  = & _t_4;
    {
        /* Tested function call */
        StopTimer(_t);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->flag);
    }
}
/* CPPTEST_TEST_CASE_END test_StopTimer */

/* CPPTEST_TEST_CASE_BEGIN test_SetupTimer */
/* CPPTEST_TEST_CASE_CONTEXT void SetupTimer(tUserTimer *, uint32_t) */
void TS_timer_test_SetupTimer()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    tUserTimer _t_6 ;
     _t_6.target_tick  = 0u;
     _t_6.interval  = 0u;
     _t_6.flag  = 0u;
     _t_6.flag2  = 0u;
     _t_6.event_cnt  = 0u;
    tUserTimer * _t  = & _t_6;
    /* Initializing argument 2 (interval) */ 
    const uint32_t INTERVAL = 200U;
    uint32_t _interval  = INTERVAL;
    {
        /* Tested function call */
        SetupTimer(_t, _interval);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(INTERVAL, _t->interval);
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->flag);
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->flag2);
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->event_cnt);

    }
}
/* CPPTEST_TEST_CASE_END test_SetupTimer */

/* CPPTEST_TEST_CASE_BEGIN test_isTimerEventExist */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t isTimerEventExist(tUserTimer *) */
void TS_timer_test_isTimerEventExist()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
	const uint32_t EVENT_CNT = 200U;
    tUserTimer _t_8 ;
     _t_8.target_tick  = 0u;
     _t_8.interval  = 0u;
     _t_8.flag  = 0u;
     _t_8.flag2  = 0u;
     _t_8.event_cnt  = EVENT_CNT;
    tUserTimer * _t  = & _t_8;
    {
        /* Tested function call */
        uint32_t _return  = isTimerEventExist(_t);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(EVENT_CNT, _t->event_cnt);
    }
}
/* CPPTEST_TEST_CASE_END test_isTimerEventExist */

const uint32_t START_TIMER_TICK = 100U;
void CppTest_StubCallback_HAL_GetTick(CppTest_StubCallInfo* stubCallInfo, uint32_t* __return)
{
	*__return = START_TIMER_TICK;
}

/* CPPTEST_TEST_CASE_BEGIN test_StartTimer */
/* CPPTEST_TEST_CASE_CONTEXT void StartTimer(tUserTimer *) */
void TS_timer_test_StartTimer()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_GetTick", &CppTest_StubCallback_HAL_GetTick);

    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
	const uint32_t INTERVAL = 200U;
    tUserTimer _t_10 ;
     _t_10.target_tick  = 0u;
     _t_10.interval  = INTERVAL;
     _t_10.flag  = 0u;
     _t_10.flag2  = 0u;
     _t_10.event_cnt  = 0u;
    tUserTimer * _t  = & _t_10;
    {
        /* Tested function call */
        StartTimer(_t);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(INTERVAL + START_TIMER_TICK, _t->target_tick);
        CPPTEST_ASSERT_UINTEGER_EQUAL(1U, _t->flag);
    }
}
/* CPPTEST_TEST_CASE_END test_StartTimer */

/* CPPTEST_TEST_CASE_BEGIN test_TimerProcess_flag_0 */
/* CPPTEST_TEST_CASE_CONTEXT void TimerProcess(tUserTimer *) */
void TS_timer_test_TimerProcess_flag_0()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_GetTick", &CppTest_StubCallback_HAL_GetTick);
	CPPTEST_EXPECT_NCALLS("HAL_GetTick", 0);

    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    tUserTimer _t_12 ;
    _t_12.target_tick  = 0u;
    _t_12.flag  = 0u;
    _t_12.event_cnt  = 0u;
    tUserTimer * _t  = & _t_12;
    {
        /* Tested function call */
        TimerProcess(_t);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->event_cnt);
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->target_tick);
    }
}
/* CPPTEST_TEST_CASE_END test_TimerProcess_flag_0 */

/* CPPTEST_TEST_CASE_BEGIN test_TimerProcess_flag_1_no_event */
/* CPPTEST_TEST_CASE_CONTEXT void TimerProcess(tUserTimer *) */
void TS_timer_test_TimerProcess_flag_1_no_event()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_GetTick", &CppTest_StubCallback_HAL_GetTick);
	CPPTEST_EXPECT_NCALLS("HAL_GetTick", 1);

    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    tUserTimer _t_12 ;
    /* set target tick so that the timer event is not reached */
     uint32_t TARGET_TICK = 2U * START_TIMER_TICK;
     _t_12.target_tick  = TARGET_TICK;
     _t_12.flag  = 1u;
     _t_12.event_cnt  = 0u;
    tUserTimer * _t  = & _t_12;
    {
        /* Tested function call */
        TimerProcess(_t);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0U, _t->event_cnt);
        CPPTEST_ASSERT_UINTEGER_EQUAL(TARGET_TICK, _t->target_tick);
    }
}
/* CPPTEST_TEST_CASE_END test_TimerProcess_flag_1_no_event */

/* CPPTEST_TEST_CASE_BEGIN test_TimerProcess_flag_1_with_event */
/* CPPTEST_TEST_CASE_CONTEXT void TimerProcess(tUserTimer *) */
void TS_timer_test_TimerProcess_flag_1_with_event()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_GetTick", &CppTest_StubCallback_HAL_GetTick);
	CPPTEST_EXPECT_NCALLS("HAL_GetTick", 1);

    /* Pre-condition initialization */
    /* Initializing argument 1 (t) */ 
    tUserTimer _t_12 ;
    /* set target tick so that the timer event is reached */
    uint32_t TARGET_TICK = START_TIMER_TICK;
    uint32_t INTERVAL = 50U;
     _t_12.target_tick  = TARGET_TICK;
     _t_12.interval  = INTERVAL;
     _t_12.flag  = 1u;
     _t_12.event_cnt  = 0u;
    tUserTimer * _t  = & _t_12;
    {
        /* Tested function call */
        TimerProcess(_t);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1U, _t->event_cnt);
        CPPTEST_ASSERT_UINTEGER_EQUAL(TARGET_TICK + INTERVAL, _t->target_tick);
    }
}
/* CPPTEST_TEST_CASE_END test_TimerProcess_flag_1_with_event */

/* CPPTEST_TEST_CASE_BEGIN test_User_Timer_Callback */
/* CPPTEST_TEST_CASE_CONTEXT void User_Timer_Callback(void) */
void TS_timer_test_User_Timer_Callback()
{
	CPPTEST_REGISTER_STUB_CALLBACK("HAL_GetTick", &CppTest_StubCallback_HAL_GetTick);
	CPPTEST_EXPECT_NCALLS("HAL_GetTick", 1);

    /* Pre-condition initialization */
    uint32_t TARGET_TICK = START_TIMER_TICK;
    uint32_t INTERVAL = 50U;
    /* Initializing global variable tim */ 
    {
         tim.target_tick  = TARGET_TICK;
         tim.interval  = INTERVAL;
         tim.flag  = 1u;
         tim.event_cnt  = 0u;
    }
    {
        /* Tested function call */
        User_Timer_Callback();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1U, tim.event_cnt);
        CPPTEST_ASSERT_UINTEGER_EQUAL(TARGET_TICK + INTERVAL, tim.target_tick);
    }
}
/* CPPTEST_TEST_CASE_END test_User_Timer_Callback */
