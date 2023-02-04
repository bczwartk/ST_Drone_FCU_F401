#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/sensor_data.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/sensor_data.c");

EXTERN_C_LINKAGE void TS_sensor_data_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_sensor_data_callTest(const char*);

CPPTEST_TEST_SUITE(TS_sensor_data);
        CPPTEST_TEST_SUITE_SETUP(TS_sensor_data_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_sensor_data_testSuiteTearDown);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_simple);
CPPTEST_TEST_SUITE_END();
        

void TS_sensor_data_test_ReadSensorRawData_simple(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_sensor_data);

void TS_sensor_data_testSuiteSetUp(void);
void TS_sensor_data_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_sensor_data_testSuiteTearDown(void);
void TS_sensor_data_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_sensor_data_setUp(void);
void TS_sensor_data_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_sensor_data_tearDown(void);
void TS_sensor_data_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}



/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_simple */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_simple()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef _acc_4 ;
    AxesRaw_TypeDef * _acc  = & _acc_4;
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef _gyro_5 ;
    AxesRaw_TypeDef * _gyro  = & _gyro_5;
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef _mag_6 ;
    AxesRaw_TypeDef * _mag  = & _mag_6;
    /* Initializing argument 8 (pre) */ 
    float32_t _pre_7  = 0.0f;
    float32_t * _pre  = & _pre_7;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, _acc, _gyro, _mag, _pre);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_PTR("void * _ACC_handle ", ( _ACC_handle ));
        CPPTEST_POST_CONDITION_PTR("void * _GYR_handle ", ( _GYR_handle ));
        CPPTEST_POST_CONDITION_PTR("void * _MAG_handle ", ( _MAG_handle ));
        CPPTEST_POST_CONDITION_PTR("void * _PRE_handle ", ( _PRE_handle ));
        CPPTEST_POST_CONDITION_PTR("AxesRaw_TypeDef * _acc ", ( _acc ));
        CPPTEST_POST_CONDITION_PTR("AxesRaw_TypeDef * _gyro ", ( _gyro ));
        CPPTEST_POST_CONDITION_PTR("AxesRaw_TypeDef * _mag ", ( _mag ));
        CPPTEST_POST_CONDITION_PTR("float32_t * _pre ", ( _pre ));
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_simple */
