#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/usbd_desc.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/usbd_desc.c");

EXTERN_C_LINKAGE void TS_usbd_desc_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_usbd_desc_callTest(const char*);

CPPTEST_TEST_SUITE(TS_usbd_desc);
        CPPTEST_TEST_SUITE_SETUP(TS_usbd_desc_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_usbd_desc_testSuiteTearDown);
CPPTEST_TEST(TS_usbd_desc_test_USBD_FS_DeviceDescriptor);
CPPTEST_TEST(TS_usbd_desc_test_USBD_FS_LangIDStrDescriptor);
CPPTEST_TEST_DS(TS_usbd_desc_test_USBD_FS_ProductStrDescriptor_speed_ds, CPPTEST_DS("TS_usbd_desc_speed"));
CPPTEST_TEST(TS_usbd_desc_test_USBD_FS_ManufacturerStrDescriptor);
CPPTEST_TEST_DS(TS_usbd_desc_test_USBD_FS_SerialStrDescriptor_speed_ds, CPPTEST_DS("TS_usbd_desc_speed"));
CPPTEST_TEST_DS(TS_usbd_desc_test_USBD_FS_ConfigStrDescriptor_speed_ds, CPPTEST_DS("TS_usbd_desc_speed"));
CPPTEST_TEST_DS(TS_usbd_desc_test_USBD_FS_InterfaceStrDescriptor_speed_ds, CPPTEST_DS("TS_usbd_desc_speed"));
CPPTEST_TEST_SUITE_END();
        

void TS_usbd_desc_test_USBD_FS_DeviceDescriptor(void);
void TS_usbd_desc_test_USBD_FS_LangIDStrDescriptor(void);
void TS_usbd_desc_test_USBD_FS_ProductStrDescriptor_speed_ds(void);
void TS_usbd_desc_test_USBD_FS_ManufacturerStrDescriptor(void);
void TS_usbd_desc_test_USBD_FS_SerialStrDescriptor_speed_ds(void);
void TS_usbd_desc_test_USBD_FS_ConfigStrDescriptor_speed_ds(void);
void TS_usbd_desc_test_USBD_FS_InterfaceStrDescriptor_speed_ds(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_usbd_desc);

void TS_usbd_desc_testSuiteSetUp(void);
void TS_usbd_desc_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_usbd_desc_testSuiteTearDown(void);
void TS_usbd_desc_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_usbd_desc_setUp(void);
void TS_usbd_desc_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_usbd_desc_tearDown(void);
void TS_usbd_desc_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_USBD_FS_DeviceDescriptor */
void TS_usbd_desc_test_USBD_FS_DeviceDescriptor()
{
    uint8_t * ret = NULL;
    USBD_SpeedTypeDef speed; // placeholder for unused argument
	uint16_t length = 0u;

	ret = USBD_FS_DeviceDescriptor(speed, &length);

	CPPTEST_ASSERT(NULL != ret);
	CPPTEST_ASSERT(USBD_FS_DeviceDesc == ret);
	CPPTEST_ASSERT(0u < length);
	CPPTEST_REPORT_UINTEGER("##  USBD_FS_DeviceDesc length", length);
}
/* CPPTEST_TEST_CASE_END test_USBD_FS_DeviceDescriptor */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_FS_LangIDStrDescriptor */
void TS_usbd_desc_test_USBD_FS_LangIDStrDescriptor()
{
    uint8_t * ret = NULL;
    USBD_SpeedTypeDef speed; // placeholder for unused argument
	uint16_t length = 0u;

	ret = USBD_FS_LangIDStrDescriptor(speed, &length);

	CPPTEST_ASSERT(NULL != ret);
	CPPTEST_ASSERT(USBD_LangIDDesc == ret);
	CPPTEST_ASSERT(0u < length);
	CPPTEST_REPORT_UINTEGER("##  USBD_LangIDDesc length", length);
}
/* CPPTEST_TEST_CASE_END test_USBD_FS_LangIDStrDescriptor */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_FS_ProductStrDescriptor_speed_ds */
/* CPPTEST_TEST_CASE_CONTEXT uint8_t * USBD_FS_ProductStrDescriptor(USBD_SpeedTypeDef, uint16_t *) */
void TS_usbd_desc_test_USBD_FS_ProductStrDescriptor_speed_ds()
{
    USBD_SpeedTypeDef speed = CPPTEST_DS_GET_ENUM(USBD_SpeedTypeDef, "USBD_SpeedTypeDef");
    uint16_t length = 0u;
    uint8_t * ret = NULL;

	ret = USBD_FS_ProductStrDescriptor(speed, &length);

	CPPTEST_ASSERT(NULL != ret);
	CPPTEST_ASSERT(0u < length);
	CPPTEST_REPORT_UINTEGER("##  USBD_ProductStr length", length);
}
/* CPPTEST_TEST_CASE_END test_USBD_FS_ProductStrDescriptor_speed_ds */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_FS_ManufacturerStrDescriptor */
void TS_usbd_desc_test_USBD_FS_ManufacturerStrDescriptor()
{
    uint8_t * ret = NULL;
    USBD_SpeedTypeDef speed; // placeholder for unused argument
	uint16_t length = 0u;

	ret = USBD_FS_ManufacturerStrDescriptor(speed, &length);

	CPPTEST_ASSERT(NULL != ret);
	CPPTEST_ASSERT(0u < length);
	CPPTEST_REPORT_UINTEGER("##  ManufacturerStr length", length);
}
/* CPPTEST_TEST_CASE_END test_USBD_FS_ManufacturerStrDescriptor */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_FS_SerialStrDescriptor_speed_ds */
/* CPPTEST_TEST_CASE_CONTEXT uint8_t * USBD_FS_ProductStrDescriptor(USBD_SpeedTypeDef, uint16_t *) */
void TS_usbd_desc_test_USBD_FS_SerialStrDescriptor_speed_ds()
{
    USBD_SpeedTypeDef speed = CPPTEST_DS_GET_ENUM(USBD_SpeedTypeDef, "USBD_SpeedTypeDef");
    uint16_t length = 0u;
    uint8_t * ret = NULL;

	ret = USBD_FS_SerialStrDescriptor(speed, &length);

	CPPTEST_ASSERT(NULL != ret);
	CPPTEST_ASSERT(0u < length);
	CPPTEST_REPORT_UINTEGER("##  USBD_SerialStr length", length);
}
/* CPPTEST_TEST_CASE_END test_USBD_FS_SerialStrDescriptor_speed_ds */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_FS_ConfigStrDescriptor_speed_ds */
/* CPPTEST_TEST_CASE_CONTEXT uint8_t * USBD_FS_ProductStrDescriptor(USBD_SpeedTypeDef, uint16_t *) */
void TS_usbd_desc_test_USBD_FS_ConfigStrDescriptor_speed_ds()
{
    USBD_SpeedTypeDef speed = CPPTEST_DS_GET_ENUM(USBD_SpeedTypeDef, "USBD_SpeedTypeDef");
    uint16_t length = 0u;
    uint8_t * ret = NULL;

	ret = USBD_FS_ConfigStrDescriptor(speed, &length);

	CPPTEST_ASSERT(NULL != ret);
	CPPTEST_ASSERT(0u < length);
	CPPTEST_REPORT_UINTEGER("##  USBD_ConfigtStr length", length);
}
/* CPPTEST_TEST_CASE_END test_USBD_FS_ConfigStrDescriptor_speed_ds */

/* CPPTEST_TEST_CASE_BEGIN test_USBD_FS_InterfaceStrDescriptor_speed_ds */
/* CPPTEST_TEST_CASE_CONTEXT uint8_t * USBD_FS_ProductStrDescriptor(USBD_SpeedTypeDef, uint16_t *) */
void TS_usbd_desc_test_USBD_FS_InterfaceStrDescriptor_speed_ds()
{
    USBD_SpeedTypeDef speed = CPPTEST_DS_GET_ENUM(USBD_SpeedTypeDef, "USBD_SpeedTypeDef");
    uint16_t length = 0u;
    uint8_t * ret = NULL;

	ret = USBD_FS_InterfaceStrDescriptor(speed, &length);

	CPPTEST_ASSERT(NULL != ret);
	CPPTEST_ASSERT(0u < length);
	CPPTEST_REPORT_UINTEGER("##  USBD_InterfaceStr length", length);
}
/* CPPTEST_TEST_CASE_END test_USBD_FS_InterfaceStrDescriptor_speed_ds */
