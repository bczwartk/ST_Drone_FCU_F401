#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/quaternion.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/quaternion.c");

EXTERN_C_LINKAGE void TS_quaternion_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_quaternion_callTest(const char*);

CPPTEST_TEST_SUITE(TS_quaternion);
        CPPTEST_TEST_SUITE_SETUP(TS_quaternion_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_quaternion_testSuiteTearDown);
CPPTEST_TEST(TS_quaternion_test_QuaternionConj);
CPPTEST_TEST_DS(TS_quaternion_test_QuaternionNorm_ds, CPPTEST_DS("TS_Quaternion_Norm"));
CPPTEST_TEST_DS(TS_quaternion_test_QuaternionMult_ds, CPPTEST_DS("TS_Quaternion_Mult"));
CPPTEST_TEST_SUITE_END();
        

void TS_quaternion_test_QuaternionConj(void);
void TS_quaternion_test_QuaternionNorm_ds(void);
void TS_quaternion_test_QuaternionMult_ds(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_quaternion);

void TS_quaternion_testSuiteSetUp(void);
void TS_quaternion_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_quaternion_testSuiteTearDown(void);
void TS_quaternion_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_quaternion_setUp(void);
void TS_quaternion_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_quaternion_tearDown(void);
void TS_quaternion_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_QuaternionConj */
/* CPPTEST_TEST_CASE_CONTEXT void QuaternionConj(QuaternionTypeDef *, QuaternionTypeDef *) */
void TS_quaternion_test_QuaternionConj()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (qa) */ 
    QuaternionTypeDef _qa_14 ;
     _qa_14.q0  = 1.0f;
     _qa_14.q1  = 2.0;
     _qa_14.q2  = 3.0;
     _qa_14.q3  = 4.0;
    QuaternionTypeDef * _qa  = & _qa_14;
    /* Initializing argument 2 (qo) */ 
    QuaternionTypeDef _qo_16 ;
     _qo_16.q0  = 0.0f;
     _qo_16.q1  = 0.0f;
     _qo_16.q2  = 0.0f;
     _qo_16.q3  = 0.0f;
    QuaternionTypeDef * _qo  = & _qo_16;
    {
        /* Tested function call */
        QuaternionConj(_qa, _qo);
        /* Post-condition check */
        CPPTEST_ASSERT_FLOAT_EQUAL(1.0f, _qo_16.q0, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(-2.0f, _qo_16.q1, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(-3.0f, _qo_16.q2, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(-4.0f, _qo_16.q3, 0.001);
    }
}
/* CPPTEST_TEST_CASE_END test_QuaternionConj */

/* CPPTEST_TEST_CASE_BEGIN test_QuaternionNorm_ds */
/* CPPTEST_TEST_CASE_CONTEXT void QuaternionNorm(QuaternionTypeDef *) */
void TS_quaternion_test_QuaternionNorm_ds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (q) */ 
    QuaternionTypeDef _q_0 ;
     _q_0.q0  = CPPTEST_DS_GET_FLOAT("q0_in");
     _q_0.q1  = CPPTEST_DS_GET_FLOAT("q1_in");
     _q_0.q2  = CPPTEST_DS_GET_FLOAT("q2_in");
     _q_0.q3  = CPPTEST_DS_GET_FLOAT("q3_in");
    QuaternionTypeDef * _q  = & _q_0;
    {
        /* Tested function call */
        QuaternionNorm(_q);
        /* Post-condition check */
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("q0_out"), _q_0.q0, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("q1_out"), _q_0.q1, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("q2_out"), _q_0.q2, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("q3_out"), _q_0.q3, 0.001);
    }
}
/* CPPTEST_TEST_CASE_END test_QuaternionNorm_ds */

/* CPPTEST_TEST_CASE_BEGIN test_QuaternionMult_ds */
/* CPPTEST_TEST_CASE_CONTEXT void QuaternionMult(QuaternionTypeDef *, QuaternionTypeDef *, QuaternionTypeDef *) */
void TS_quaternion_test_QuaternionMult_ds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (qa) */ 
    QuaternionTypeDef _qa_2 ;
     _qa_2.q0  = CPPTEST_DS_GET_FLOAT("qa_q0");
     _qa_2.q1  = CPPTEST_DS_GET_FLOAT("qa_q1");
     _qa_2.q2  = CPPTEST_DS_GET_FLOAT("qa_q2");
     _qa_2.q3  = CPPTEST_DS_GET_FLOAT("qa_q3");
    QuaternionTypeDef * _qa  = & _qa_2;
    /* Initializing argument 2 (qb) */ 
    QuaternionTypeDef _qb_4 ;
     _qb_4.q0  = CPPTEST_DS_GET_FLOAT("qb_q0");
     _qb_4.q1  = CPPTEST_DS_GET_FLOAT("qb_q1");
     _qb_4.q2  = CPPTEST_DS_GET_FLOAT("qb_q2");
     _qb_4.q3  = CPPTEST_DS_GET_FLOAT("qb_q3");
    QuaternionTypeDef * _qb  = & _qb_4;
    /* Initializing argument 3 (qo) */ 
    QuaternionTypeDef _qo_6 ;
     _qo_6.q0  = 0.0f;
     _qo_6.q1  = 0.0f;
     _qo_6.q2  = 0.0f;
     _qo_6.q3  = 0.0f;
    QuaternionTypeDef * _qo  = & _qo_6;
    {
        /* Tested function call */
        QuaternionMult(_qa, _qb, _qo);
        /* Post-condition check */
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("qo_q0"), _qo->q0, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("qo_q1"), _qo->q1, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("qo_q2"), _qo->q2, 0.001);
        CPPTEST_ASSERT_FLOAT_EQUAL(CPPTEST_DS_GET_FLOAT("qo_q3"), _qo->q3, 0.001);
    }
}
/* CPPTEST_TEST_CASE_END test_QuaternionMult_ds */
