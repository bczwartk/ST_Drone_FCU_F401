#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/usb_device.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/usb_device.c");

EXTERN_C_LINKAGE void TS_usb_device_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_usb_device_callTest(const char*);

CPPTEST_TEST_SUITE(TS_usb_device);
        CPPTEST_TEST_SUITE_SETUP(TS_usb_device_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_usb_device_testSuiteTearDown);
CPPTEST_TEST(TS_usb_device_test_MX_USB_DEVICE_Init);
CPPTEST_TEST_SUITE_END();
        

void TS_usb_device_test_MX_USB_DEVICE_Init(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_usb_device);

void TS_usb_device_testSuiteSetUp(void);
void TS_usb_device_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_usb_device_testSuiteTearDown(void);
void TS_usb_device_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_usb_device_setUp(void);
void TS_usb_device_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_usb_device_tearDown(void);
void TS_usb_device_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_MX_USB_DEVICE_Init */
/* CPPTEST_TEST_CASE_CONTEXT void MX_USB_DEVICE_Init(void) */
void TS_usb_device_test_MX_USB_DEVICE_Init()
{
    /* Pre-condition initialization */
    /* Initializing global variable hUsbDeviceFS */ 
    {
         hUsbDeviceFS.id  = 0;
         hUsbDeviceFS.dev_config  = 0u;
         hUsbDeviceFS.dev_default_config  = 0u;
         hUsbDeviceFS.dev_config_status  = 0u;
         hUsbDeviceFS.dev_speed  = USBD_SPEED_HIGH;
         hUsbDeviceFS.ep0_state  = 0u;
         hUsbDeviceFS.ep0_data_len  = 0u;
         hUsbDeviceFS.dev_state  = 0;
         hUsbDeviceFS.dev_old_state  = 0;
         hUsbDeviceFS.dev_address  = 0;
         hUsbDeviceFS.dev_connection_status  = 0;
         hUsbDeviceFS.dev_test_mode  = 0;
         hUsbDeviceFS.dev_remote_wakeup  = 0u;
         hUsbDeviceFS.pDesc  = 0 ;
         hUsbDeviceFS.pClass  = 0 ;
         hUsbDeviceFS.pClassData  = 0 ;
         hUsbDeviceFS.pUserData  = 0 ;
         hUsbDeviceFS.pData  = 0 ;
    }
    /* Initializing global variable USBD_CDC */ 
    {
         USBD_CDC.Init  = 0 ;
         USBD_CDC.DeInit  = 0 ;
         USBD_CDC.Setup  = 0 ;
         USBD_CDC.EP0_TxSent  = 0 ;
         USBD_CDC.EP0_RxReady  = 0 ;
         USBD_CDC.DataIn  = 0 ;
         USBD_CDC.DataOut  = 0 ;
         USBD_CDC.SOF  = 0 ;
         USBD_CDC.IsoINIncomplete  = 0 ;
         USBD_CDC.IsoOUTIncomplete  = 0 ;
         USBD_CDC.GetHSConfigDescriptor  = 0 ;
         USBD_CDC.GetFSConfigDescriptor  = 0 ;
         USBD_CDC.GetOtherSpeedConfigDescriptor  = 0 ;
         USBD_CDC.GetDeviceQualifierDescriptor  = 0 ;
    }
    /* Initializing global variable USBD_Interface_fops_FS */ 
    {
         USBD_Interface_fops_FS.Init  = 0 ;
         USBD_Interface_fops_FS.DeInit  = 0 ;
         USBD_Interface_fops_FS.Control  = 0 ;
         USBD_Interface_fops_FS.Receive  = 0 ;
    }
    /* Initializing global variable FS_Desc */ 
    {
         FS_Desc.GetDeviceDescriptor  = 0 ;
         FS_Desc.GetLangIDStrDescriptor  = 0 ;
         FS_Desc.GetManufacturerStrDescriptor  = 0 ;
         FS_Desc.GetProductStrDescriptor  = 0 ;
         FS_Desc.GetSerialStrDescriptor  = 0 ;
         FS_Desc.GetConfigurationStrDescriptor  = 0 ;
         FS_Desc.GetInterfaceStrDescriptor  = 0 ;
    }
    {
        /* Tested function call */
        MX_USB_DEVICE_Init();

        /* Post-condition check */
#if 0
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.Init )(struct _USBD_HandleTypeDef *, uint8_t)", ( USBD_CDC.Init ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.DeInit )(struct _USBD_HandleTypeDef *, uint8_t)", ( USBD_CDC.DeInit ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.Setup )(struct _USBD_HandleTypeDef *, USBD_SetupReqTypedef *)", ( USBD_CDC.Setup ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.EP0_TxSent )(struct _USBD_HandleTypeDef *)", ( USBD_CDC.EP0_TxSent ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.EP0_RxReady )(struct _USBD_HandleTypeDef *)", ( USBD_CDC.EP0_RxReady ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.DataIn )(struct _USBD_HandleTypeDef *, uint8_t)", ( USBD_CDC.DataIn ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.DataOut )(struct _USBD_HandleTypeDef *, uint8_t)", ( USBD_CDC.DataOut ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.SOF )(struct _USBD_HandleTypeDef *)", ( USBD_CDC.SOF ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.IsoINIncomplete )(struct _USBD_HandleTypeDef *, uint8_t)", ( USBD_CDC.IsoINIncomplete ));
        CPPTEST_POST_CONDITION_PTR("uint8_t (* USBD_CDC.IsoOUTIncomplete )(struct _USBD_HandleTypeDef *, uint8_t)", ( USBD_CDC.IsoOUTIncomplete ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* USBD_CDC.GetHSConfigDescriptor )(uint16_t *)", ( USBD_CDC.GetHSConfigDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* USBD_CDC.GetFSConfigDescriptor )(uint16_t *)", ( USBD_CDC.GetFSConfigDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* USBD_CDC.GetOtherSpeedConfigDescriptor )(uint16_t *)", ( USBD_CDC.GetOtherSpeedConfigDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* USBD_CDC.GetDeviceQualifierDescriptor )(uint16_t *)", ( USBD_CDC.GetDeviceQualifierDescriptor ));
        CPPTEST_POST_CONDITION_PTR("int8_t (* USBD_Interface_fops_FS.Init )(void)", ( USBD_Interface_fops_FS.Init ));
        CPPTEST_POST_CONDITION_PTR("int8_t (* USBD_Interface_fops_FS.DeInit )(void)", ( USBD_Interface_fops_FS.DeInit ));
        CPPTEST_POST_CONDITION_PTR("int8_t (* USBD_Interface_fops_FS.Control )(uint8_t, uint8_t *, uint16_t)", ( USBD_Interface_fops_FS.Control ));
        CPPTEST_POST_CONDITION_PTR("int8_t (* USBD_Interface_fops_FS.Receive )(uint8_t *, uint32_t *)", ( USBD_Interface_fops_FS.Receive ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* FS_Desc.GetDeviceDescriptor )(USBD_SpeedTypeDef, uint16_t *)", ( FS_Desc.GetDeviceDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* FS_Desc.GetLangIDStrDescriptor )(USBD_SpeedTypeDef, uint16_t *)", ( FS_Desc.GetLangIDStrDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* FS_Desc.GetManufacturerStrDescriptor )(USBD_SpeedTypeDef, uint16_t *)", ( FS_Desc.GetManufacturerStrDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* FS_Desc.GetProductStrDescriptor )(USBD_SpeedTypeDef, uint16_t *)", ( FS_Desc.GetProductStrDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* FS_Desc.GetSerialStrDescriptor )(USBD_SpeedTypeDef, uint16_t *)", ( FS_Desc.GetSerialStrDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* FS_Desc.GetConfigurationStrDescriptor )(USBD_SpeedTypeDef, uint16_t *)", ( FS_Desc.GetConfigurationStrDescriptor ));
        CPPTEST_POST_CONDITION_PTR("uint8_t *(* FS_Desc.GetInterfaceStrDescriptor )(USBD_SpeedTypeDef, uint16_t *)", ( FS_Desc.GetInterfaceStrDescriptor ));
#endif
    }
}
/* CPPTEST_TEST_CASE_END test_MX_USB_DEVICE_Init */
