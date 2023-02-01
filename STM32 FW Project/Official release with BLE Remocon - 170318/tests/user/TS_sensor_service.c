#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/sensor_service.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/sensor_service.c");

EXTERN_C_LINKAGE void TS_sensor_service_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_sensor_service_callTest(const char*);

CPPTEST_TEST_SUITE(TS_sensor_service);
        CPPTEST_TEST_SUITE_SETUP(TS_sensor_service_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_sensor_service_testSuiteTearDown);
CPPTEST_TEST(TS_sensor_service_test_ConfigCommandParsing);
CPPTEST_TEST(TS_sensor_service_test_DisableHWFeatures);
CPPTEST_TEST(TS_sensor_service_test_GAP_DisconnectionComplete_CB_no_hw);
CPPTEST_TEST(TS_sensor_service_test_GAP_DisconnectionComplete_CB_with_hw);
CPPTEST_TEST_SUITE_END();
        

void TS_sensor_service_test_ConfigCommandParsing(void);
void TS_sensor_service_test_DisableHWFeatures(void);
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_no_hw(void);
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_with_hw(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_sensor_service);

void TS_sensor_service_testSuiteSetUp(void);
void TS_sensor_service_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_sensor_service_testSuiteTearDown(void);
void TS_sensor_service_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_sensor_service_setUp(void);
void TS_sensor_service_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_sensor_service_tearDown(void);
void TS_sensor_service_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_ConfigCommandParsing */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t ConfigCommandParsing(uint8_t *, uint8_t) */
void TS_sensor_service_test_ConfigCommandParsing()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (att_data) */ 
    uint8_t * _att_data  = 0U ;
    /* Initializing argument 2 (data_length) */ 
    uint8_t _data_length  = 0U;
    {
        /* Tested function call */
        uint32_t _return  = ConfigCommandParsing(_att_data, _data_length);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1U, ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_ConfigCommandParsing */

/* CPPTEST_TEST_CASE_BEGIN test_DisableHWFeatures */
/* CPPTEST_TEST_CASE_CONTEXT void DisableHWFeatures(void) */
void TS_sensor_service_test_DisableHWFeatures()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        DisableHWFeatures();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_DisableHWFeatures */

/* CPPTEST_TEST_CASE_BEGIN test_GAP_DisconnectionComplete_CB_no_hw */
/* CPPTEST_TEST_CASE_CONTEXT void GAP_DisconnectionComplete_CB(void) */
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_no_hw()
{
    /* Pre-condition initialization */
    /* Initializing global variable ConnectionBleStatus */ 
    {
         ConnectionBleStatus  = 1u;
    }
    /* Initializing global variable connected */ 
    {
         connected  = TRUE;
    }
    /* Initializing global variable TargetBoardFeatures */ 
    {
         TargetBoardFeatures.BoardType  = TARGET_NUCLEO;
         TargetBoardFeatures.NumTempSensors  = 0;
         TargetBoardFeatures.HandlePressSensor  = 0 ;
         TargetBoardFeatures.HandleHumSensor  = 0 ;
         TargetBoardFeatures.HWAdvanceFeatures  = 1;
         TargetBoardFeatures.HandleAccSensor  = 0 ;
         TargetBoardFeatures.HandleGyroSensor  = 0 ;
         TargetBoardFeatures.HandleMagSensor  = 0 ;
         TargetBoardFeatures.LedStatus  = 0;
         TargetBoardFeatures.bnrg_expansion_board  = 0;
         TargetBoardFeatures.SnsAltFunc  = 0;
    }
    /* Initializing global variable set_connectable */ 
    {
         set_connectable  = 0;
    }
    {
        /* Tested function call */
        GAP_DisconnectionComplete_CB();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0u, ( ConnectionBleStatus ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(FALSE, ( connected ) );
        CPPTEST_ASSERT_UINTEGER_EQUAL(TRUE, ( set_connectable ) );
    }
}
/* CPPTEST_TEST_CASE_END test_GAP_DisconnectionComplete_CB_no_hw */

/* CPPTEST_TEST_CASE_BEGIN test_GAP_DisconnectionComplete_CB_with_hw */
/* CPPTEST_TEST_CASE_CONTEXT void GAP_DisconnectionComplete_CB(void) */
void TS_sensor_service_test_GAP_DisconnectionComplete_CB_with_hw()
{
    /* Pre-condition initialization */
    /* Initializing global variable ConnectionBleStatus */ 
    {
         ConnectionBleStatus  = 1u;
    }
    /* Initializing global variable connected */ 
    {
         connected  = TRUE;
    }
    /* Initializing global variable TargetBoardFeatures */ 
    {
         TargetBoardFeatures.BoardType  = TARGET_NUCLEO;
         TargetBoardFeatures.NumTempSensors  = 0;
         TargetBoardFeatures.HandlePressSensor  = 0 ;
         TargetBoardFeatures.HandleHumSensor  = 0 ;
         TargetBoardFeatures.HWAdvanceFeatures  = 0;
         TargetBoardFeatures.HandleAccSensor  = 0 ;
         TargetBoardFeatures.HandleGyroSensor  = 0 ;
         TargetBoardFeatures.HandleMagSensor  = 0 ;
         TargetBoardFeatures.LedStatus  = 0;
         TargetBoardFeatures.bnrg_expansion_board  = 0;
         TargetBoardFeatures.SnsAltFunc  = 0;
    }
    /* Initializing global variable set_connectable */ 
    {
         set_connectable  = 0;
    }
    {
        /* Tested function call */
        GAP_DisconnectionComplete_CB();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0u, ( ConnectionBleStatus ) );
        CPPTEST_ASSERT_INTEGER_EQUAL(FALSE, ( connected ) );
        CPPTEST_ASSERT_UINTEGER_EQUAL(TRUE, ( set_connectable ) );
    }
}
/* CPPTEST_TEST_CASE_END test_GAP_DisconnectionComplete_CB_with_hw */
