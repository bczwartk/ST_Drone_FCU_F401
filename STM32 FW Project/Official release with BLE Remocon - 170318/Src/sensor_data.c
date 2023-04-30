/*
 *  The purpose of this file is to convert the sensor data to proper coordinate
 *  X-axis and Y-axis orientation is in line with Accelerometer sensor mounted on board
 * 
 *  STEVAL-FCU001V1
 *
 *              +---------------------+
 *              |      MOTOR      BAT |
 *              |                     |
 *              |I2C      ^        USB|
 *              |         |           |
 *              |         |       JTAG|
 *              |RC       |           |
 *              |                     |
 *              |    BLE          UART|
 *              +---------------------+
 *       
 *                        ^ (ACC X)
 *                        |          
 *              (ACC Y)<--O(z)
 *  
 *   (1)   Drone FWD direction V (ACC -X)
 *   (2)   Drone FWD direction > (ACC -Y)
 *   (3)   Drone FWD direction ^ (ACC X)
 *   (4)   Drone FWD direction < (ACC Y)
 *  
 * Translation of coordinates for AHRS 
 *  (1) Drone FWD direction > (ACC -X)
 *          
 *           (x)<--O(z)
 *                 |
 *                 V(y)
 * 
 *  (2) Drone FWD direction > (ACC -Y)
 *          
 *                 ^(x)
 *                 |                       
 *           (y)<--O(z)
 *       
 *  (3) Drone FWD direction ^ (ACC X)
 *          
 *                 ^(y)
 *                 |                       
 *              (z)O-->(x)              
 *
 *  (4) Drone FWD direction < (ACC Y)
 *                                       
 *              (z)O-->(y)
 *                 |
 *                 V(x)
 */


#include "sensor_data.h"
#include "steval_fcu001_v1_accelero.h"  
#include "steval_fcu001_v1_gyro.h"  
#include "steval_fcu001_v1_magneto.h"  
#include "steval_fcu001_v1_pressure.h"  


static uint8_t useMagSensor = USE_MAG_SENSOR;
static uint8_t usePressureSensor = USE_PRESSURE_SENSOR;
static uint8_t coordinateSystem = COORDINATE_SYSTEM;

/*
 * This function read sensor data and prepare data for proper coordinate system
 * according to definition of COORDINATE_SYSTEM
 * The unit of each data are:
 *      Acc - mg
 *      Gyro - mdps
 *      Mag - mguass
 */
void ReadSensorRawData(void *ACC_handle, void *GYR_handle, void *MAG_handle, void *PRE_handle, AxesRaw_TypeDef *pAcc, AxesRaw_TypeDef *pGyro, AxesRaw_TypeDef *pMag, float32_t *pPre)
{
    int32_t t1;
    SensorAxes_t acc_temp_int16, gyro_temp_int16, mag_temp_int16;            /* Data Type int16_t */
    AxesRaw_TypeDef acc_temp, gyro_temp; 
    /* Data Type int32_t */
    // Read data is in mg unit
    (void) BSP_ACCELERO_Get_Axes(ACC_handle, &acc_temp_int16);
    acc_temp.AXIS_X = (int32_t) acc_temp_int16.AXIS_X;                /* Casting data to int32_t */
    acc_temp.AXIS_Y = (int32_t) acc_temp_int16.AXIS_Y;
    acc_temp.AXIS_Z = (int32_t) acc_temp_int16.AXIS_Z;
    // Read data is in mdps unit
    (void) BSP_GYRO_Get_Axes(GYR_handle, &gyro_temp_int16);
    gyro_temp.AXIS_X = (int32_t) gyro_temp_int16.AXIS_X;                /* Casting data to int32_t */
    gyro_temp.AXIS_Y = (int32_t) gyro_temp_int16.AXIS_Y;
    gyro_temp.AXIS_Z = (int32_t) gyro_temp_int16.AXIS_Z;
    // Read data is in mg unit
    if (useMagSensor) {
    	(void) BSP_MAGNETO_Get_Axes(MAG_handle, &mag_temp_int16);
    	pMag->AXIS_X = (int32_t) mag_temp_int16.AXIS_X;
    	pMag->AXIS_Y = (int32_t) mag_temp_int16.AXIS_Y;
    	pMag->AXIS_Z = (int32_t) mag_temp_int16.AXIS_Z;
    } else {
    	pMag->AXIS_X = 0;
    	pMag->AXIS_Y = 0;
    	pMag->AXIS_Z = 0;
    }
    
    if (usePressureSensor) {
    	(void) BSP_PRESSURE_Get_Press(PRE_handle, pPre);
    } else {
    	pPre = NULL;
    }
    
    if (coordinateSystem == 1u) {
        // convert acc
        t1 = pAcc->AXIS_X;
        pAcc->AXIS_X = pAcc->AXIS_Y;
        pAcc->AXIS_Y = -t1;
        // convert gyro
        t1 = pGyro->AXIS_X;
        pGyro->AXIS_X = pGyro->AXIS_Y;
        pGyro->AXIS_Y = -t1;
        // convert mag
        t1 = pMag->AXIS_X;
        pMag->AXIS_X = pMag->AXIS_Y;
        pMag->AXIS_Y = -t1;
    } else if (coordinateSystem == 2u) {
        // No need to convert in this case
    } else if (coordinateSystem == 3u) {
    	pAcc->AXIS_X = -acc_temp.AXIS_Y;
    	pAcc->AXIS_Y = acc_temp.AXIS_X;
    	pAcc->AXIS_Z = acc_temp.AXIS_Z;

    	pGyro->AXIS_X = -gyro_temp.AXIS_Y;
    	pGyro->AXIS_Y = gyro_temp.AXIS_X;
    	pGyro->AXIS_Z = gyro_temp.AXIS_Z;
      
        // convert mag
        t1 = pMag->AXIS_X;
        pMag->AXIS_X = - pMag->AXIS_Y;
        pMag->AXIS_Y = t1;
    } else if (coordinateSystem == 4u) {
        // convert acc
    	pAcc->AXIS_X = - pAcc->AXIS_X;
    	pAcc->AXIS_Y = - pAcc->AXIS_Y;
        // convert gyro
    	pGyro->AXIS_X = - pGyro->AXIS_X;
    	pGyro->AXIS_Y = - pGyro->AXIS_Y;
        // convert mag
    	pMag->AXIS_X = - pMag->AXIS_X;
        pMag->AXIS_Y = - pMag->AXIS_Y;
    } else {
    	// nothing to do - MISRAC2012-RULE_15_7-a
    }
}
