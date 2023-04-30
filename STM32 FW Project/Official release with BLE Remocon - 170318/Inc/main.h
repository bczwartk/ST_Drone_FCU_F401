/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MAIN_H
#define MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */
#include "uuid_ble_service.h"
/* USER CODE END Includes */

/* Exported macro ------------------------------------------------------------*/
#define MCR_BLUEMS_F2I_1D(in, out_int, out_dec) { (out_int) = (int32_t)(in); (out_dec) = (int32_t)(((in) - (out_int)) * 10); };
#define MCR_BLUEMS_F2I_2D(in, out_int, out_dec) { (out_int) = (int32_t)(in); (out_dec) = (int32_t)(((in) - (out_int)) * 100); };


/* Private define ------------------------------------------------------------*/
   
/** @defgroup BLE default values
* @{
*/
#define NAME_BLUEMS 'B','M','2','V','2','1','0'
#define STM32_UUID ((uint32_t *)0x1FFF7A10)
#define GAP_PERIPHERAL_ROLE_IDB05A1			(0x01)
#define GAP_BROADCASTER_ROLE_IDB05A1		(0x02)
#define GAP_CENTRAL_ROLE_IDB05A1			(0x04)
#define GAP_OBSERVER_ROLE_IDB05A1			(0x08)
#define MAC_BLUEMS 0xFF, 0xEE, 0xDD, 0xAA, 0xAA, 0xAA

/* Define the Max dimesion of the Bluetooth characteristics
for each packet used for Console Service */
#define W2ST_CONSOLE_MAX_CHAR_LEN 20

/**
 * @name Configuration values.
 * See @ref aci_hal_write_config_data().
 * @{
 */
#define CONFIG_DATA_PUBADDR_OFFSET          (0x00) /**< Bluetooth public address */
#define CONFIG_DATA_DIV_OFFSET              (0x06) /**< DIV used to derive CSRK */
#define CONFIG_DATA_ER_OFFSET               (0x08) /**< Encryption root key used to derive LTK and CSRK */
#define CONFIG_DATA_IR_OFFSET               (0x18) /**< Identity root key used to derive LTK and CSRK */
#define CONFIG_DATA_LL_WITHOUT_HOST         (0x2C) /**< Switch on/off Link Layer only mode. Set to 1 to disable Host.
 	 	 	 	 	 	 	 	 	 	 	 	 	 It can be written only if aci_hal_write_config_data() is the first command 	 	 	 	 	 	 	 	 	 	 	 	 after reset. */
#define CONFIG_DATA_RANDOM_ADDRESS          (0x80) /**< Stored static random address. Read-only. */
/**
 * @name Length for configuration values.
 * See @ref aci_hal_write_config_data().
 * @{
 */
#define CONFIG_DATA_PUBADDR_LEN             (6)
#define CONFIG_DATA_DIV_LEN                 (2)
#define CONFIG_DATA_ER_LEN                  (16)
#define CONFIG_DATA_IR_LEN                  (16)
#define CONFIG_DATA_LL_WITHOUT_HOST_LEN     (1)
#define CONFIG_DATA_MODE_LEN                (1)
   
/**
 * Select the BlueNRG mode configurations.\n
 * @li Mode 1: slave or master, 1 connection, RAM1 only (small GATT DB)
 * @li Mode 2: slave or master, 1 connection, RAM1 and RAM2 (large GATT DB)
 * @li Mode 3: master/slave, 8 connections, RAM1 and RAM2.
 * @li Mode 4: master/slave, 4 connections, RAM1 and RAM2 simultaneous scanning and advertising.
 */
#define CONFIG_DATA_MODE_OFFSET 			(0x2D)

#define CONFIG_DATA_WATCHDOG_DISABLE 		(0x2F) /**< Set to 1 to disable watchdog. It is enabled by default. */

/**
 * @anchor Auth_req
 * @name Authentication requirements
 * @{
 */
#define BONDING				            (0x01)
#define NO_BONDING				        (0x00)
/**
 * @}
 */

/**
 * @anchor MITM_req
 * @name MITM protection requirements
 * @{
 */
#define MITM_PROTECTION_NOT_REQUIRED	(0x00)
#define MITM_PROTECTION_REQUIRED        (0x01)
/**
 * @}
 */

/**
 * @anchor OOB_Data
 * @name Out-Of-Band data
 * @{
 */
#define OOB_AUTH_DATA_ABSENT		    (0x00)
#define OOB_AUTH_DATA_PRESENT      		(0x01)
/**
 * @}
 */
/**
 * @anchor Use_fixed_pin
 * @name Use fixed pin
 * @{
 */
#define USE_FIXED_PIN_FOR_PAIRING		(0x00)
#define DONOT_USE_FIXED_PIN_FOR_PAIRING	(0x01)
/**
 * @}
 */

extern volatile uint32_t HCI_ProcessEvent;  

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

extern uint8_t BufferToWrite[256];
extern int32_t BytesToWrite;

#endif /* MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
