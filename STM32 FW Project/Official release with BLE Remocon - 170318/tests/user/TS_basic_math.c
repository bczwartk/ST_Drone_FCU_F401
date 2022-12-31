#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/basic_math.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/basic_math.c");

EXTERN_C_LINKAGE void TS_basic_math_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_basic_math_callTest(const char*);

CPPTEST_TEST_SUITE(TS_basic_math);
        CPPTEST_TEST_SUITE_SETUP(TS_basic_math_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_basic_math_testSuiteTearDown);
CPPTEST_TEST(TS_basic_math_test_case_Sqrt_4);
CPPTEST_TEST(TS_basic_math_test_case_Sqrt_1);
CPPTEST_TEST_SUITE_END();
        

void TS_basic_math_test_case_Sqrt_4(void);
void TS_basic_math_test_case_Sqrt_1(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_basic_math);

void TS_basic_math_testSuiteSetUp(void);
void TS_basic_math_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_basic_math_testSuiteTearDown(void);
void TS_basic_math_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_basic_math_setUp(void);
void TS_basic_math_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_basic_math_tearDown(void);
void TS_basic_math_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_case_Sqrt_4 */
void TS_basic_math_test_case_Sqrt_4()
{
    float input = 4.0f;
    float ret;

    ret = Sqrt(input);

    CPPTEST_ASSERT_FLOAT_EQUAL(2.0, ret, 0.001);
}
/* CPPTEST_TEST_CASE_END test_case_Sqrt_4 */

/* CPPTEST_TEST_CASE_BEGIN test_case_Sqrt_1 */
void TS_basic_math_test_case_Sqrt_1()
{
    float input = 1.0f;
    float ret;

    ret = Sqrt(input);

    CPPTEST_ASSERT_FLOAT_EQUAL(1.0, ret, 0.001);
}
/* CPPTEST_TEST_CASE_END test_case_Sqrt_1 */
