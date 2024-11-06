/******************** (C) COPYRIGHT 2012 STMicroelectronics ********************
* File Name          : ble_status.h
* Author             : AMS - HEA&RF BU
* Version            : V1.0.0
* Date               : 19-July-2012
* Description        : Header file with BLE Stack status codes.
********************************************************************************
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/
#ifndef __BLE_STATUS_H__
#define __BLE_STATUS_H__

#include <hal_types.h>

/** @addtogroup Middlewares
 *  @{
 */

/** @defgroup ST
 *  @{
 */
 
/** @defgroup SimpleBlueNRG_HCI
 *  @{
 */

/** @defgroup ble_status Bluetooth Status/Error Codes
 * @{
 */
 
typedef uint8_t tBleStatus; 

/* Error Codes as specified by the specification 
 * according to the spec the error codes range
 * from 0x00 to 0x3F 
 */
/**
 * @name Standard error codes
 * @brief Standard error codes. See Core v 4.1, Vol. 2, part D.
 * @{
 */
#define ERR_CMD_SUCCESS         	                (0x00u)
#define BLE_STATUS_SUCCESS            		        (0x00u)
#define ERR_UNKNOWN_HCI_COMMAND	                    (0x01u)
#define ERR_UNKNOWN_CONN_IDENTIFIER	                (0x02u)

#define ERR_AUTH_FAILURE                            (0x05u)
#define ERR_PIN_OR_KEY_MISSING                      (0x06u)
#define ERR_MEM_CAPACITY_EXCEEDED                   (0x07u)
#define ERR_CONNECTION_TIMEOUT                      (0x08u)

#define ERR_COMMAND_DISALLOWED				        (0x0Cu)

#define ERR_UNSUPPORTED_FEATURE				        (0x11u)
#define ERR_INVALID_HCI_CMD_PARAMS                  (0x12u)
#define ERR_RMT_USR_TERM_CONN                       (0x13u)
#define ERR_RMT_DEV_TERM_CONN_LOW_RESRCES           (0x14u)
#define ERR_RMT_DEV_TERM_CONN_POWER_OFF             (0x15u)
#define ERR_LOCAL_HOST_TERM_CONN                    (0x16u)

#define ERR_UNSUPP_RMT_FEATURE                      (0x1Au)

#define ERR_INVALID_LMP_PARAM                       (0x1Eu)
#define ERR_UNSPECIFIED_ERROR                       (0x1Fu)

#define ERR_LL_RESP_TIMEOUT                         (0x22u)
#define ERR_LMP_PDU_NOT_ALLOWED                     (0x24u)

#define ERR_INSTANT_PASSED                          (0x28u)

#define ERR_PAIR_UNIT_KEY_NOT_SUPP                  (0x29u)
#define ERR_CONTROLLER_BUSY                         (0x3Au)

#define ERR_DIRECTED_ADV_TIMEOUT                    (0x3Cu)

#define ERR_CONN_END_WITH_MIC_FAILURE               (0x3Du)

#define ERR_CONN_FAILED_TO_ESTABLISH                (0x3Eu)


/**
 * @}
 */
/**
 * @name Vendor-specific error codes
 * @brief Error codes defined by ST related to BlueNRG stack
 * @{
 */
/**
 * The command cannot be executed due to the current state of the device.
 */
#define BLE_STATUS_FAILED             		(0x41u)
/**
 * Some parameters are invalid.
 */
#define BLE_STATUS_INVALID_PARAMS     		(0x42u)
/**
 * It is not allowed to start the procedure (e.g. another the procedure is ongoing
 * or cannot be started on the given handle).
 */
#define BLE_STATUS_NOT_ALLOWED        		(0x46u)
/**
 * Unexpected error.
 */
#define BLE_STATUS_ERROR              		(0x47u)
#define BLE_STATUS_ADDR_NOT_RESOLVED        (0x48u)

#define FLASH_READ_FAILED 					(0x49u)
#define FLASH_WRITE_FAILED 					(0x4Au)
#define FLASH_ERASE_FAILED 					(0x4Bu)

#define BLE_STATUS_INVALID_CID         		(0x50u)

#define TIMER_NOT_VALID_LAYER				(0x54u)
#define TIMER_INSUFFICIENT_RESOURCES		(0x55u)
 
#define BLE_STATUS_CSRK_NOT_FOUND			(0x5Au)
#define BLE_STATUS_IRK_NOT_FOUND			(0x5Bu)
#define BLE_STATUS_DEV_NOT_FOUND_IN_DB		(0x5Cu)
#define BLE_STATUS_SEC_DB_FULL				(0x5Du)
#define BLE_STATUS_DEV_NOT_BONDED           (0x5Eu)
#define BLE_STATUS_DEV_IN_BLACKLIST         (0x5Fu)
 
#define BLE_STATUS_INVALID_HANDLE           (0x60u)
#define BLE_STATUS_INVALID_PARAMETER        (0x61u)
#define BLE_STATUS_OUT_OF_HANDLE            (0x62u)
#define BLE_STATUS_INVALID_OPERATION        (0x63u)
#define BLE_STATUS_INSUFFICIENT_RESOURCES   (0x64u)
#define BLE_INSUFFICIENT_ENC_KEYSIZE		(0x65u)
#define BLE_STATUS_CHARAC_ALREADY_EXISTS    (0x66u)

/**
 * Returned when no valid slots are available (e.g. when there are no available state machines).
  */
#define BLE_STATUS_NO_VALID_SLOT                (0x82u)

/**
 * Returned when a scan window shorter than minimum allowed value has been requested (i.e. 2ms)
 */
 
#define BLE_STATUS_SCAN_WINDOW_SHORT            (0x83u)
/**
 * Returned when the maximum requested interval to be allocated is shorter then the current
 * anchor period and a there is no submultiple for the current anchor period that is between
 * the minimum and the maximum requested intervals.
 */

#define BLE_STATUS_NEW_INTERVAL_FAILED          (0x84u)
/**
 * Returned when the maximum requested interval to be allocated is greater than the current anchor
 * period and there is no multiple of the anchor period that is between the minimum and the maximum
 * requested intervals.
 */

#define BLE_STATUS_INTERVAL_TOO_LARGE           (0x85u)
/**
 * Returned when the current anchor period or a new one can be found that is compatible to the
 * interval range requested by the new slot but the maximum available length that can be allocated is
 * less than the minimum requested slot length.
 */
 
#define BLE_STATUS_LENGTH_FAILED                (0x86u)
/**
 * @}
 */

/**
 * @name Library Error Codes
 * @brief Error codes defined by ST related to MCU library.
 * @{
 */
#define BLE_STATUS_TIMEOUT                      (0xFFu)
#define BLE_STATUS_PROFILE_ALREADY_INITIALIZED  (0xF0u)
#define BLE_STATUS_NULL_PARAM                   (0xF1u)
/**
 * @}
 */

/**
 * @}
 */
 
#endif /* __BLE_STATUS_H__ */
