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
CPPTEST_TEST_SUITE_END();
        

void TS_quaternion_test_QuaternionConj(void);
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
