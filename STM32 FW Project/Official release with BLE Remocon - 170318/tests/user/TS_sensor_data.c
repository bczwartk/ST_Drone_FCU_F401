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
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_simple_defult);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_coord3_default);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_default_no_mag_sensor);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_default_no_pressure_sensor);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_coord1);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_coord2);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_coord4);
CPPTEST_TEST(TS_sensor_data_test_ReadSensorRawData_coord5_fallback);
CPPTEST_TEST_SUITE_END();
        

void TS_sensor_data_test_ReadSensorRawData_simple_defult(void);
void TS_sensor_data_test_ReadSensorRawData_coord3_default(void);
void TS_sensor_data_test_ReadSensorRawData_default_no_mag_sensor(void);
void TS_sensor_data_test_ReadSensorRawData_default_no_pressure_sensor(void);
void TS_sensor_data_test_ReadSensorRawData_coord1(void);
void TS_sensor_data_test_ReadSensorRawData_coord2(void);
void TS_sensor_data_test_ReadSensorRawData_coord4(void);
void TS_sensor_data_test_ReadSensorRawData_coord5_fallback(void);
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

// variables to provide sensor data input, controlled by test cases, used by callbacks
SensorAxes_t test_acc_data = { 0, 0, 0 };
SensorAxes_t test_gyr_data = { 0, 0, 0 };
SensorAxes_t test_mag_data = { 0, 0, 0 };
float test_pressure_data = 0.0f;

void TS_sensor_data_setUp(void);
void TS_sensor_data_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
	// reset test sensor data
	test_acc_data.AXIS_X = 0;
	test_acc_data.AXIS_Y = 0;
	test_acc_data.AXIS_Z = 0;

	test_gyr_data.AXIS_X = 0;
	test_gyr_data.AXIS_Y = 0;
	test_gyr_data.AXIS_Z = 0;

	test_mag_data.AXIS_X = 0;
	test_mag_data.AXIS_Y = 0;
	test_mag_data.AXIS_Z = 0;

	test_pressure_data = 0.0f;
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_sensor_data_tearDown(void);
void TS_sensor_data_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}



/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_simple_defult */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_simple_defult()
{
    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = USE_MAG_SENSOR;
	usePressureSensor = USE_PRESSURE_SENSOR;
	coordinateSystem = COORDINATE_SYSTEM;

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
        CPPTEST_ASSERT_EQUAL(NULL, ( _ACC_handle ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _GYR_handle ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _MAG_handle ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _PRE_handle ));
        CPPTEST_ASSERT(0 != ( _acc ));
        CPPTEST_ASSERT(0 != ( _gyro ));
        CPPTEST_ASSERT(0 != ( _mag ));
        CPPTEST_ASSERT(0 != ( _pre ));
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_simple_defult */

static void copy_sensor_data_helper(SensorAxes_t * src, SensorAxes_t * dest)
{
	dest->AXIS_X = src->AXIS_X;
	dest->AXIS_Y = src->AXIS_Y;
	dest->AXIS_Z = src->AXIS_Z;
}

// common call backs - driven by sensor data globals
void CppTest_StubCallback_BSP_ACCELERO_Get_Axes(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, void * handle, SensorAxes_t * acceleration)
{
	copy_sensor_data_helper(&test_acc_data, acceleration);
	*__return = COMPONENT_OK;
}

void CppTest_StubCallback_BSP_GYRO_Get_Axes(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, void * handle, SensorAxes_t * angular_velocity)
{
	copy_sensor_data_helper(&test_gyr_data, angular_velocity);
	*__return = COMPONENT_OK;
}

void CppTest_StubCallback_BSP_MAGNETO_Get_Axes(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, void * handle, SensorAxes_t * magnetic_field)
{
	copy_sensor_data_helper(&test_mag_data, magnetic_field);
	*__return = COMPONENT_OK;
}

void CppTest_StubCallback_BSP_PRESSURE_Get_Press(CppTest_StubCallInfo* stubCallInfo, DrvStatusTypeDef* __return, void * handle, float * pressure)
{
	*pressure = test_pressure_data;
	*__return = COMPONENT_OK;
}

/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_coord3_default */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_coord3_default()
{
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Get_Axes", &CppTest_StubCallback_BSP_ACCELERO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Get_Axes", &CppTest_StubCallback_BSP_GYRO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Get_Axes", &CppTest_StubCallback_BSP_MAGNETO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Get_Press", &CppTest_StubCallback_BSP_PRESSURE_Get_Press);

	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Get_Press", 1);

    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = USE_MAG_SENSOR;
	usePressureSensor = USE_PRESSURE_SENSOR;
	coordinateSystem = COORDINATE_SYSTEM;

	// fake sensor data
	test_acc_data.AXIS_X = 1;
	test_acc_data.AXIS_Y = 2;
	test_acc_data.AXIS_Z = 3;
	test_gyr_data.AXIS_X = 11;
	test_gyr_data.AXIS_Y = 22;
	test_gyr_data.AXIS_Z = 33;
	test_mag_data.AXIS_X = 111;
	test_mag_data.AXIS_Y = 222;
	test_mag_data.AXIS_Z = 333;
	test_pressure_data = 1234.0f;

    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef acc = { 0, 0, 0 };
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef gyro = { 0, 0, 0 };
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef mag = { 0, 0, 0 };
    /* Initializing argument 8 (pre) */ 
    float32_t pre  = 0.0f;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, &acc, &gyro, &mag, &pre);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(-2, acc.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(1, acc.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(3, acc.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(-22, gyro.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(11, gyro.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(33, gyro.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(-222, mag.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(111, mag.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(333, mag.AXIS_Z);
        CPPTEST_ASSERT_FLOAT_EQUAL(1234.0f, pre, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_coord3_default */

/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_default_no_mag_sensor */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_default_no_mag_sensor()
{
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Get_Axes", &CppTest_StubCallback_BSP_ACCELERO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Get_Axes", &CppTest_StubCallback_BSP_GYRO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Get_Axes", &CppTest_StubCallback_BSP_MAGNETO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Get_Press", &CppTest_StubCallback_BSP_PRESSURE_Get_Press);

	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Get_Axes", 0);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Get_Press", 1);

    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = 0u;
	usePressureSensor = USE_PRESSURE_SENSOR;
	coordinateSystem = COORDINATE_SYSTEM;

	// fake sensor data
	test_acc_data.AXIS_X = 1;
	test_acc_data.AXIS_Y = 2;
	test_acc_data.AXIS_Z = 3;
	test_gyr_data.AXIS_X = 11;
	test_gyr_data.AXIS_Y = 22;
	test_gyr_data.AXIS_Z = 33;
	test_mag_data.AXIS_X = 111;
	test_mag_data.AXIS_Y = 222;
	test_mag_data.AXIS_Z = 333;
	test_pressure_data = 1234.0f;

    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef acc = { 0, 0, 0 };
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef gyro = { 0, 0, 0 };
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef mag = { 0, 0, 0 };
    /* Initializing argument 8 (pre) */ 
    float32_t pre  = 0.0f;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, &acc, &gyro, &mag, &pre);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(-2, acc.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(1, acc.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(3, acc.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(-22, gyro.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(11, gyro.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(33, gyro.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, mag.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, mag.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, mag.AXIS_Z);
        CPPTEST_ASSERT_FLOAT_EQUAL(1234.0f, pre, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_default_no_mag_sensor */


/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_default_no_pressure_sensor */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_default_no_pressure_sensor()
{
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Get_Axes", &CppTest_StubCallback_BSP_ACCELERO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Get_Axes", &CppTest_StubCallback_BSP_GYRO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Get_Axes", &CppTest_StubCallback_BSP_MAGNETO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Get_Press", &CppTest_StubCallback_BSP_PRESSURE_Get_Press);

	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Get_Press", 0);

    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = USE_MAG_SENSOR;
	usePressureSensor = 0u;
	coordinateSystem = COORDINATE_SYSTEM;

	// fake sensor data
	test_acc_data.AXIS_X = 1;
	test_acc_data.AXIS_Y = 2;
	test_acc_data.AXIS_Z = 3;
	test_gyr_data.AXIS_X = 11;
	test_gyr_data.AXIS_Y = 22;
	test_gyr_data.AXIS_Z = 33;
	test_mag_data.AXIS_X = 111;
	test_mag_data.AXIS_Y = 222;
	test_mag_data.AXIS_Z = 333;
	test_pressure_data = 1234.0f;

    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef acc = { 0, 0, 0 };
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef gyro = { 0, 0, 0 };
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef mag = { 0, 0, 0 };
    /* Initializing argument 8 (pre) */ 
    float32_t pre  = 0.0f;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, &acc, &gyro, &mag, &pre);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(-2, acc.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(1, acc.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(3, acc.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(-22, gyro.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(11, gyro.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(33, gyro.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(-222, mag.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(111, mag.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(333, mag.AXIS_Z);
        CPPTEST_ASSERT_FLOAT_EQUAL(0.0f, pre, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_default_no_pressure_sensor */

/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_coord1 */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_coord1()
{
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Get_Axes", &CppTest_StubCallback_BSP_ACCELERO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Get_Axes", &CppTest_StubCallback_BSP_GYRO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Get_Axes", &CppTest_StubCallback_BSP_MAGNETO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Get_Press", &CppTest_StubCallback_BSP_PRESSURE_Get_Press);

	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Get_Press", 1);

    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = USE_MAG_SENSOR;
	usePressureSensor = USE_PRESSURE_SENSOR;
	coordinateSystem = 1u;

	// fake sensor data
	test_acc_data.AXIS_X = 1;
	test_acc_data.AXIS_Y = 2;
	test_acc_data.AXIS_Z = 3;
	test_gyr_data.AXIS_X = 11;
	test_gyr_data.AXIS_Y = 22;
	test_gyr_data.AXIS_Z = 33;
	test_mag_data.AXIS_X = 111;
	test_mag_data.AXIS_Y = 222;
	test_mag_data.AXIS_Z = 333;
	test_pressure_data = 1234.0f;

    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef acc = { 0, 0, 0 };
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef gyro = { 0, 0, 0 };
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef mag = { 0, 0, 0 };
    /* Initializing argument 8 (pre) */ 
    float32_t pre  = 0.0f;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, &acc, &gyro, &mag, &pre);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(222, mag.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(-111, mag.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(333, mag.AXIS_Z);
        CPPTEST_ASSERT_FLOAT_EQUAL(1234.0f, pre, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_coord1 */

/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_coord2 */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_coord2()
{
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Get_Axes", &CppTest_StubCallback_BSP_ACCELERO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Get_Axes", &CppTest_StubCallback_BSP_GYRO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Get_Axes", &CppTest_StubCallback_BSP_MAGNETO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Get_Press", &CppTest_StubCallback_BSP_PRESSURE_Get_Press);

	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Get_Press", 1);

    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = USE_MAG_SENSOR;
	usePressureSensor = USE_PRESSURE_SENSOR;
	coordinateSystem = 2u;

	// fake sensor data
	test_acc_data.AXIS_X = 1;
	test_acc_data.AXIS_Y = 2;
	test_acc_data.AXIS_Z = 3;
	test_gyr_data.AXIS_X = 11;
	test_gyr_data.AXIS_Y = 22;
	test_gyr_data.AXIS_Z = 33;
	test_mag_data.AXIS_X = 111;
	test_mag_data.AXIS_Y = 222;
	test_mag_data.AXIS_Z = 333;
	test_pressure_data = 1234.0f;

    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef acc = { 0, 0, 0 };
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef gyro = { 0, 0, 0 };
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef mag = { 0, 0, 0 };
    /* Initializing argument 8 (pre) */ 
    float32_t pre  = 0.0f;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, &acc, &gyro, &mag, &pre);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(111, mag.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(222, mag.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(333, mag.AXIS_Z);
        CPPTEST_ASSERT_FLOAT_EQUAL(1234.0f, pre, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_coord2 */

/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_coord4 */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_coord4()
{
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Get_Axes", &CppTest_StubCallback_BSP_ACCELERO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Get_Axes", &CppTest_StubCallback_BSP_GYRO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Get_Axes", &CppTest_StubCallback_BSP_MAGNETO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Get_Press", &CppTest_StubCallback_BSP_PRESSURE_Get_Press);

	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Get_Press", 1);

    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = USE_MAG_SENSOR;
	usePressureSensor = USE_PRESSURE_SENSOR;
	coordinateSystem = 4u;

	// fake sensor data
	test_acc_data.AXIS_X = 1;
	test_acc_data.AXIS_Y = 2;
	test_acc_data.AXIS_Z = 3;
	test_gyr_data.AXIS_X = 11;
	test_gyr_data.AXIS_Y = 22;
	test_gyr_data.AXIS_Z = 33;
	test_mag_data.AXIS_X = 111;
	test_mag_data.AXIS_Y = 222;
	test_mag_data.AXIS_Z = 333;
	test_pressure_data = 1234.0f;

    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef acc = { 0, 0, 0 };
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef gyro = { 0, 0, 0 };
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef mag = { 0, 0, 0 };
    /* Initializing argument 8 (pre) */ 
    float32_t pre  = 0.0f;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, &acc, &gyro, &mag, &pre);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(-111, mag.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(-222, mag.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(333, mag.AXIS_Z);
        CPPTEST_ASSERT_FLOAT_EQUAL(1234.0f, pre, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_coord4 */

/* CPPTEST_TEST_CASE_BEGIN test_ReadSensorRawData_coord5_fallback */
/* CPPTEST_TEST_CASE_CONTEXT void ReadSensorRawData(void *, void *, void *, void *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, AxesRaw_TypeDef *, float32_t *) */
void TS_sensor_data_test_ReadSensorRawData_coord5_fallback()
{
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_ACCELERO_Get_Axes", &CppTest_StubCallback_BSP_ACCELERO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_GYRO_Get_Axes", &CppTest_StubCallback_BSP_GYRO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_MAGNETO_Get_Axes", &CppTest_StubCallback_BSP_MAGNETO_Get_Axes);
	CPPTEST_REGISTER_STUB_CALLBACK("BSP_PRESSURE_Get_Press", &CppTest_StubCallback_BSP_PRESSURE_Get_Press);

	CPPTEST_EXPECT_NCALLS("BSP_ACCELERO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_GYRO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_MAGNETO_Get_Axes", 1);
	CPPTEST_EXPECT_NCALLS("BSP_PRESSURE_Get_Press", 1);

    /* Pre-condition initialization */

	// globals - set defaults
	useMagSensor = USE_MAG_SENSOR;
	usePressureSensor = USE_PRESSURE_SENSOR;
	coordinateSystem = 5u;

	// fake sensor data
	test_acc_data.AXIS_X = 1;
	test_acc_data.AXIS_Y = 2;
	test_acc_data.AXIS_Z = 3;
	test_gyr_data.AXIS_X = 11;
	test_gyr_data.AXIS_Y = 22;
	test_gyr_data.AXIS_Z = 33;
	test_mag_data.AXIS_X = 111;
	test_mag_data.AXIS_Y = 222;
	test_mag_data.AXIS_Z = 333;
	test_pressure_data = 1234.0f;

    /* Initializing argument 1 (ACC_handle) */ 

    void * _ACC_handle  = NULL;
    /* Initializing argument 2 (GYR_handle) */ 

    void * _GYR_handle  = NULL;
    /* Initializing argument 3 (MAG_handle) */ 

    void * _MAG_handle  = NULL;
    /* Initializing argument 4 (PRE_handle) */ 

    void * _PRE_handle  = NULL;
    /* Initializing argument 5 (acc) */ 
    AxesRaw_TypeDef acc = { 0, 0, 0 };
    /* Initializing argument 6 (gyro) */ 
    AxesRaw_TypeDef gyro = { 0, 0, 0 };
    /* Initializing argument 7 (mag) */ 
    AxesRaw_TypeDef mag = { 0, 0, 0 };
    /* Initializing argument 8 (pre) */ 
    float32_t pre  = 0.0f;
    {
        /* Tested function call */
        ReadSensorRawData(_ACC_handle, _GYR_handle, _MAG_handle, _PRE_handle, &acc, &gyro, &mag, &pre);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, acc.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(0, gyro.AXIS_Z);
        CPPTEST_ASSERT_INTEGER_EQUAL(111, mag.AXIS_X);
        CPPTEST_ASSERT_INTEGER_EQUAL(222, mag.AXIS_Y);
        CPPTEST_ASSERT_INTEGER_EQUAL(333, mag.AXIS_Z);
        CPPTEST_ASSERT_FLOAT_EQUAL(1234.0f, pre, 0.001f);
    }
}
/* CPPTEST_TEST_CASE_END test_ReadSensorRawData_coord5_fallback */
