#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/rc.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/rc.c");

EXTERN_C_LINKAGE void TS_rc_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_rc_callTest(const char*);

CPPTEST_TEST_SUITE(TS_rc);
        CPPTEST_TEST_SUITE_SETUP(TS_rc_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_rc_testSuiteTearDown);
CPPTEST_TEST(TS_rc_test_init_queue);
CPPTEST_TEST(TS_rc_test_init_remote_control);
CPPTEST_TEST(TS_rc_test_update_rc_data_calibration_activated);
CPPTEST_TEST(TS_rc_test_update_rc_data_calibration_not_activated_1);
CPPTEST_TEST(TS_rc_test_update_rc_data_calibration_not_activated_2);
CPPTEST_TEST(TS_rc_test_update_rc_data_calibration_not_activated_3);
CPPTEST_TEST(TS_rc_test_update_rc_data_calibration_not_activated_4);
CPPTEST_TEST_DS(TS_rc_test_update_rc_data_arm_disarm_neg_ds, CPPTEST_DS("TS_RC_data_arm_disarm_neg"));
CPPTEST_TEST_DS(TS_rc_test_update_rc_data_arm_disarm_pos_ds, CPPTEST_DS("TS_RS_data_arm_disarm_pos"));
CPPTEST_TEST(TS_rc_test_HAL_TIM_IC_CaptureCallback);
CPPTEST_TEST(TS_rc_test_HAL_SYSTICK_Callback_no_timeout);
CPPTEST_TEST(TS_rc_test_HAL_SYSTICK_Callback_with_timeout);
CPPTEST_TEST_DS(TS_rc_test_limit_value_ds, CPPTEST_DS("TS_RC_limit_value"));
CPPTEST_TEST_DS(TS_rc_test_GetTargetEulerAngle_ds, CPPTEST_DS("TS_RC_GetTargetEulerAngle"));
CPPTEST_TEST_SUITE_END();
        

void TS_rc_test_init_queue(void);
void TS_rc_test_init_remote_control(void);
void TS_rc_test_update_rc_data_calibration_activated(void);
void TS_rc_test_update_rc_data_calibration_not_activated_1(void);
void TS_rc_test_update_rc_data_calibration_not_activated_2(void);
void TS_rc_test_update_rc_data_calibration_not_activated_3(void);
void TS_rc_test_update_rc_data_calibration_not_activated_4(void);
void TS_rc_test_update_rc_data_arm_disarm_neg_ds(void);
void TS_rc_test_update_rc_data_arm_disarm_pos_ds(void);
void TS_rc_test_HAL_TIM_IC_CaptureCallback(void);
void TS_rc_test_HAL_SYSTICK_Callback_no_timeout(void);
void TS_rc_test_HAL_SYSTICK_Callback_with_timeout(void);
void TS_rc_test_limit_value_ds(void);
void TS_rc_test_GetTargetEulerAngle_ds(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_rc);

void TS_rc_testSuiteSetUp(void);
void TS_rc_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_rc_testSuiteTearDown(void);
void TS_rc_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_rc_setUp(void);
void TS_rc_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_rc_tearDown(void);
void TS_rc_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_init_queue */
/* CPPTEST_TEST_CASE_CONTEXT void init_queue(Queue_TypeDef *) */
void TS_rc_test_init_queue()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (q) */ 
    Queue_TypeDef _q_0 ;
     int16_t _q_0_header_1 = _q_0.header  = 123;
     int16_t _q_0_tail_1 = _q_0.tail  = 123;
     int16_t _q_0_length_1 = _q_0.length  = 123;
     int16_t _q_0_full_1 = _q_0.full  = 123;
     int16_t _q_0_empty_1 = _q_0.empty  = 123;
    Queue_TypeDef * _q  = & _q_0;
    {
        /* Tested function call */
        init_queue(_q);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, _q->header);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, _q->tail);
        CPPTEST_ASSERT_INTEGER_EQUAL(QUEUE_LENGTH, _q->length);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, _q->full);
        CPPTEST_ASSERT_INTEGER_EQUAL(1, _q->empty);
        /* TODO: do we need to check if buffer is zeroed? */
    }
}
/* CPPTEST_TEST_CASE_END test_init_queue */

/* CPPTEST_TEST_CASE_BEGIN test_init_remote_control */
/* CPPTEST_TEST_CASE_CONTEXT void init_remote_control(void) */
void TS_rc_test_init_remote_control()
{
    /* Pre-condition initialization */
    /* Initializing global variable rc_t */ 
    {
         rc_t[0]  = 1;
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = 123;
    }
    /* Initializing global variable que */ 
    {
         que.header  = 123;
         que.tail  = 123;
         que.length  = 123;
         que.full  = 123;
         que.empty  = 123;
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = 123;
    }
    /* Initializing global variable rc_flag */ 
    {
         rc_flag[0]  = 1;
    }
    /* Initializing global variable rc_connection_flag */ 
    {
         rc_connection_flag  = 1;
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = 123;
    }
    /* Initializing global variable cnt */ 
    {
         cnt  = 123;
    }
    /* Initializing global variable rc_t_rise */ 
    {
         rc_t_rise[0]  = 1;
    }
    /* Initializing global variable rc_t_fall */ 
    {
         rc_t_fall[0]  = 1;
    }
    /* Initializing global variable gELE */ 
    {
         gELE  = 123;
    }
    {
        /* Tested function call */
        init_remote_control();
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( rc_t[0] ));
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( gTHR ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( gAIL ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( rc_flag[0] ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( rc_connection_flag ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( gRUD ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( cnt ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( rc_t_rise[0] ));
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( rc_t_fall[0] ));
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( gELE ) );
    }
}
/* CPPTEST_TEST_CASE_END test_init_remote_control */

/* CPPTEST_TEST_CASE_BEGIN test_update_rc_data_calibration_activated */
/* CPPTEST_TEST_CASE_CONTEXT void update_rc_data(int32_t) */
void TS_rc_test_update_rc_data_calibration_activated()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (idx) */ 
    int32_t _idx  = 0;
    /* Initializing global variable rc_cal_flag */ 
    {
         rc_cal_flag  = 0;
    }
    /* Initializing global variable rc_enable_motor */ 
    {
         rc_enable_motor  = 0;
    }
    /* Initializing global variable fly_ready */ 
    {
         fly_ready  = 0;
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = 0;
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = RC_CAL_THRESHOLD + 1;
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = - RC_CAL_THRESHOLD - 1;
    }
    /* Initializing global variable gELE */ 
    {
         gELE  = - RC_CAL_THRESHOLD - 1;
    }
    {
        /* Tested function call */
        update_rc_data(_idx);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( rc_cal_flag ));

    }
}
/* CPPTEST_TEST_CASE_END test_update_rc_data_calibration_activated */

/* CPPTEST_TEST_CASE_BEGIN test_update_rc_data_calibration_not_activated_1 */
/* CPPTEST_TEST_CASE_CONTEXT void update_rc_data(int32_t) */
void TS_rc_test_update_rc_data_calibration_not_activated_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (idx) */ 
    int32_t _idx  = 0;
    /* Initializing global variable rc_cal_flag */ 
    {
         rc_cal_flag  = 0;
    }
    /* Initializing global variable rc_enable_motor */ 
    {
         rc_enable_motor  = 0;
    }
    /* Initializing global variable fly_ready */ 
    {
         fly_ready  = 0;
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = 1;
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = RC_CAL_THRESHOLD;
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = - RC_CAL_THRESHOLD - 1;
    }
    /* Initializing global variable gELE */ 
    {
         gELE  = - RC_CAL_THRESHOLD - 1;
    }
    {
        /* Tested function call */
        update_rc_data(_idx);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( rc_cal_flag ));

    }
}
/* CPPTEST_TEST_CASE_END test_update_rc_data_calibration_not_activated_1 */

/* CPPTEST_TEST_CASE_BEGIN test_update_rc_data_calibration_not_activated_2 */
/* CPPTEST_TEST_CASE_CONTEXT void update_rc_data(int32_t) */
void TS_rc_test_update_rc_data_calibration_not_activated_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (idx) */ 
    int32_t _idx  = 0;
    /* Initializing global variable rc_cal_flag */ 
    {
         rc_cal_flag  = 0;
    }
    /* Initializing global variable rc_enable_motor */ 
    {
         rc_enable_motor  = 0;
    }
    /* Initializing global variable fly_ready */ 
    {
         fly_ready  = 0;
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = 0;
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = RC_CAL_THRESHOLD + 1;
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = - RC_CAL_THRESHOLD - 1;
    }
    /* Initializing global variable gELE */ 
    {
         gELE  = - RC_CAL_THRESHOLD;
    }
    {
        /* Tested function call */
        update_rc_data(_idx);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( rc_cal_flag ));

    }
}
/* CPPTEST_TEST_CASE_END test_update_rc_data_calibration_not_activated_2 */

/* CPPTEST_TEST_CASE_BEGIN test_update_rc_data_calibration_not_activated_3 */
/* CPPTEST_TEST_CASE_CONTEXT void update_rc_data(int32_t) */
void TS_rc_test_update_rc_data_calibration_not_activated_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (idx) */ 
    int32_t _idx  = 0;
    /* Initializing global variable rc_cal_flag */ 
    {
         rc_cal_flag  = 0;
    }
    /* Initializing global variable rc_enable_motor */ 
    {
         rc_enable_motor  = 0;
    }
    /* Initializing global variable fly_ready */ 
    {
         fly_ready  = 0;
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = 0;
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = RC_CAL_THRESHOLD + 1;
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = - RC_CAL_THRESHOLD - 1;
    }
    /* Initializing global variable gELE */ 
    {
         gELE  = - RC_CAL_THRESHOLD - 1;
    }
    {
        /* Tested function call */
        update_rc_data(_idx);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( rc_cal_flag ));

    }
}
/* CPPTEST_TEST_CASE_END test_update_rc_data_calibration_not_activated_3 */

/* CPPTEST_TEST_CASE_BEGIN test_update_rc_data_calibration_not_activated_4 */
/* CPPTEST_TEST_CASE_CONTEXT void update_rc_data(int32_t) */
void TS_rc_test_update_rc_data_calibration_not_activated_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (idx) */ 
    int32_t _idx  = 0;
    /* Initializing global variable rc_cal_flag */ 
    {
         rc_cal_flag  = 0;
    }
    /* Initializing global variable rc_enable_motor */ 
    {
         rc_enable_motor  = 0;
    }
    /* Initializing global variable fly_ready */ 
    {
         fly_ready  = 0;
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = 0;
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = RC_CAL_THRESHOLD + 1;
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = - RC_CAL_THRESHOLD;
    }
    /* Initializing global variable gELE */ 
    {
         gELE  = - RC_CAL_THRESHOLD - 1;
    }
    {
        /* Tested function call */
        update_rc_data(_idx);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( rc_cal_flag ));

    }
}
/* CPPTEST_TEST_CASE_END test_update_rc_data_calibration_not_activated_4 */

/* CPPTEST_TEST_CASE_BEGIN test_update_rc_data_arm_disarm_neg_ds */
/* CPPTEST_TEST_CASE_CONTEXT void update_rc_data(int32_t) */
void TS_rc_test_update_rc_data_arm_disarm_neg_ds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (idx) */ 
    int32_t _idx  = 0;
    /* Initializing global variable gELE */ 
    {
         gELE  = CPPTEST_DS_GET_INTEGER("in_gELE");
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = CPPTEST_DS_GET_INTEGER("in_gTHR");
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = CPPTEST_DS_GET_INTEGER("in_gAIL");
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = CPPTEST_DS_GET_INTEGER("in_gRUD");
    }
    /* Initializing global variable rc_enable_motor */ 
    {
         rc_enable_motor  = CPPTEST_DS_GET_INTEGER("in_rc_enable_motor");
    }
    /* Initializing global variable rc_cal_flag */ 
    {
         rc_cal_flag  = 0;
    }
    /* Initializing global variable fly_ready */ 
    {
         fly_ready  = CPPTEST_DS_GET_INTEGER("in_fly_ready");
    }
    {
        /* Tested function call */
        update_rc_data(_idx);

        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("out_rc_enable_motor"), rc_enable_motor);
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("out_fly_ready"), fly_ready);
    }
}
/* CPPTEST_TEST_CASE_END test_update_rc_data_arm_disarm_neg_ds */

/* CPPTEST_TEST_CASE_BEGIN test_update_rc_data_arm_disarm_pos_ds */
/* CPPTEST_TEST_CASE_CONTEXT void update_rc_data(int32_t) */
void TS_rc_test_update_rc_data_arm_disarm_pos_ds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (idx) */ 
    int32_t _idx  = 0;
    /* Initializing global variable gELE */ 
    {
         gELE  = CPPTEST_DS_GET_INTEGER("in_gELE");
    }
    /* Initializing global variable gTHR */ 
    {
         gTHR  = CPPTEST_DS_GET_INTEGER("in_gTHR");
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = CPPTEST_DS_GET_INTEGER("in_gAIL");
    }
    /* Initializing global variable gRUD */ 
    {
         gRUD  = CPPTEST_DS_GET_INTEGER("in_gRUD");
    }
    /* Initializing global variable rc_enable_motor */ 
    {
         rc_enable_motor  = CPPTEST_DS_GET_INTEGER("in_rc_enable_motor");
    }
    /* Initializing global variable rc_cal_flag */ 
    {
         rc_cal_flag  = 0;
    }
    /* Initializing global variable fly_ready */ 
    {
         fly_ready  = CPPTEST_DS_GET_INTEGER("in_fly_ready");
    }
    {
        /* Tested function call */
        update_rc_data(_idx);

        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("out_rc_enable_motor"), rc_enable_motor);
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("out_fly_ready"), fly_ready);
    }
}
/* CPPTEST_TEST_CASE_END test_update_rc_data_arm_disarm_pos_ds */

void CppTest_StubCallback_update_rc_data(CppTest_StubCallInfo* stubCallInfo, int32_t idx)
{
	update_rc_data(idx);
	// CPPTEST_MESSAGE("##  update_rc_data() stub callback called");
}

/* CPPTEST_TEST_CASE_BEGIN test_HAL_TIM_IC_CaptureCallback */
/* CPPTEST_TEST_CASE_CONTEXT void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *) */
void TS_rc_test_HAL_TIM_IC_CaptureCallback()
{
	CPPTEST_REGISTER_STUB_CALLBACK("update_rc_data", & CppTest_StubCallback_update_rc_data);
	CPPTEST_EXPECT_NCALLS("update_rc_data", 1);

	TIM_HandleTypeDef _htim_0;
	TIM_HandleTypeDef * _htim = & _htim_0;

	// CPPTEST_MESSAGE("##  before call HAL_TIM_IC_CaptureCallback()");
	HAL_TIM_IC_CaptureCallback(_htim);
	// CPPTEST_MESSAGE("##  after call HAL_TIM_IC_CaptureCallback()");


}
/* CPPTEST_TEST_CASE_END test_HAL_TIM_IC_CaptureCallback */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_SYSTICK_Callback_no_timeout */
void TS_rc_test_HAL_SYSTICK_Callback_no_timeout()
{
	CPPTEST_EXPECT_NCALLS("User_Timer_Callback", 1);
	CPPTEST_EXPECT_NCALLS("init_rc_variables", 0);

	int TIMEOUT_VALUE = RC_TIMEOUT_VALUE - 1;
    rc_timeout = TIMEOUT_VALUE;
    rc_connection_flag = 0;

    HAL_SYSTICK_Callback();

    CPPTEST_ASSERT_INTEGER_EQUAL(1, rc_connection_flag);

}
/* CPPTEST_TEST_CASE_END test_HAL_SYSTICK_Callback_no_timeout */

/* CPPTEST_TEST_CASE_BEGIN test_HAL_SYSTICK_Callback_with_timeout */
void TS_rc_test_HAL_SYSTICK_Callback_with_timeout()
{
	CPPTEST_EXPECT_NCALLS("User_Timer_Callback", 1);
	CPPTEST_EXPECT_NCALLS("init_rc_variables", 1);

	int TIMEOUT_VALUE = RC_TIMEOUT_VALUE + 1;
    rc_timeout = TIMEOUT_VALUE;
    rc_connection_flag = 0;

    HAL_SYSTICK_Callback();

    CPPTEST_ASSERT_INTEGER_EQUAL(1, rc_connection_flag);

}
/* CPPTEST_TEST_CASE_END test_HAL_SYSTICK_Callback_with_timeout */

/* CPPTEST_TEST_CASE_BEGIN test_limit_value_ds */
/* CPPTEST_TEST_CASE_CONTEXT int32_t limit_value(int32_t) */
void TS_rc_test_limit_value_ds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (val) */ 
    int32_t _val  = CPPTEST_DS_GET_INTEGER("val_in");
    {
        /* Tested function call */
        int32_t _return  = limit_value(_val);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("val_out"), ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_limit_value_ds */

/* CPPTEST_TEST_CASE_BEGIN test_GetTargetEulerAngle_ds */
/* CPPTEST_TEST_CASE_CONTEXT void GetTargetEulerAngle(EulerAngleTypeDef *, EulerAngleTypeDef *) */
void TS_rc_test_GetTargetEulerAngle_ds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (euler_rc) */ 
    EulerAngleTypeDef _euler_rc_0 ;
     _euler_rc_0.thx  = CPPTEST_DS_GET_FLOAT("in_erc_thx");
     _euler_rc_0.thy  = CPPTEST_DS_GET_FLOAT("in_erc_thy");
     _euler_rc_0.thz  = CPPTEST_DS_GET_FLOAT("in_erc_thz");
    EulerAngleTypeDef * _euler_rc  = & _euler_rc_0;
    /* Initializing argument 2 (euler_ahrs) */ 
    EulerAngleTypeDef * _euler_ahrs  = 0 ;
    /* Initializing global variable gRUD */ 
    {
         gRUD  = CPPTEST_DS_GET_INTEGER("in_gRUD");
    }
    /* Initializing global variable gAIL */ 
    {
         gAIL  = CPPTEST_DS_GET_INTEGER("in_gAIL");
    }
    /* Initializing global variable gELE */ 
    {
         gELE  = CPPTEST_DS_GET_INTEGER("in_gELE");
    }
    /* Initializing global variable rc_z_control_flag */ 
    {
         rc_z_control_flag  = CPPTEST_DS_GET_INTEGER("in_rc_z_control_flag");
    }
    {
        /* Tested function call */
        GetTargetEulerAngle(_euler_rc, _euler_ahrs);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("in_gRUD"), ( gRUD ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("in_gAIL"), ( gAIL ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("in_gELE"), ( gELE ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("out_rc_z_control_flag"), ( rc_z_control_flag ) );
        CPPTEST_ASSERT_DOUBLES_EQUAL(CPPTEST_DS_GET_FLOAT("out_erc_thx"), _euler_rc_0.thx, 0.00001);
        CPPTEST_ASSERT_DOUBLES_EQUAL(CPPTEST_DS_GET_FLOAT("out_erc_thy"), _euler_rc_0.thy, 0.00001);
        CPPTEST_ASSERT_DOUBLES_EQUAL(CPPTEST_DS_GET_FLOAT("out_erc_thz"), _euler_rc_0.thz, 0.00001);
    }
}
/* CPPTEST_TEST_CASE_END test_GetTargetEulerAngle_ds */
