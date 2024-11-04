#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../Src/sensor_service.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../Src/sensor_service.c");

EXTERN_C_LINKAGE void TS_sensor_service_HCI_Event_CB_testSuiteBegin(void);
EXTERN_C_LINKAGE int TS_sensor_service_HCI_Event_CB_callTest(const char*);

CPPTEST_TEST_SUITE(TS_sensor_service_HCI_Event_CB);
        CPPTEST_TEST_SUITE_SETUP(TS_sensor_service_HCI_Event_CB_testSuiteSetUp);
        CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_pckt);
        CPPTEST_TEST_SUITE_TEARDOWN(TS_sensor_service_HCI_Event_CB_testSuiteTearDown);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_evt);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_DISCONN_COMPLETE);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_LE_META_EVENT_incomplete);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_LE_META_EVENT_complete);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_other_evt);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_read_evt);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb05a1);
CPPTEST_TEST(TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb04a1);
CPPTEST_TEST_SUITE_END();
        
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_pckt(void);

void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_evt(void);
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_DISCONN_COMPLETE(void);
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_LE_META_EVENT_incomplete(void);
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_LE_META_EVENT_complete(void);
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_other_evt(void);
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_read_evt(void);
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb05a1(void);
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb04a1(void);
CPPTEST_TEST_SUITE_REGISTRATION(TS_sensor_service_HCI_Event_CB);

void TS_sensor_service_HCI_Event_CB_testSuiteSetUp(void);
void TS_sensor_service_HCI_Event_CB_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TS_sensor_service_HCI_Event_CB_testSuiteTearDown(void);
void TS_sensor_service_HCI_Event_CB_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TS_sensor_service_HCI_Event_CB_setUp(void);
void TS_sensor_service_HCI_Event_CB_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TS_sensor_service_HCI_Event_CB_tearDown(void);
void TS_sensor_service_HCI_Event_CB_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_other_pckt */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_pckt()
{
    // packet of irrelevant type
	hci_uart_pckt pckt;
	pckt.type = HCI_VENDOR_PKT;
	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_other_pckt */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_other_evt */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_other_evt()
{
    // packet of irrelevant type
	hci_event_pckt event;
	event.evt = EVT_CMD_STATUS;  // this event is not handled in HCI_Event_CB() - take default branch
	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_other_evt */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_EVT_DISCONN_COMPLETE */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_DISCONN_COMPLETE()
{
	CPPTEST_EXPECT_NCALLS("GAP_DisconnectionComplete_CB", 1);

    // packet of irrelevant type
	hci_event_pckt event;
	event.evt = EVT_DISCONN_COMPLETE;
	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_EVT_DISCONN_COMPLETE */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_EVT_LE_META_EVENT_incomplete */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_LE_META_EVENT_incomplete()
{
	CPPTEST_EXPECT_NCALLS("GAP_ConnectionComplete_CB", 0);

    // packet of irrelevant type
	evt_le_meta_event subevt;
	subevt.subevent = EVT_LE_ADVERTISING_REPORT;

	hci_event_pckt event;
	event.evt = EVT_LE_META_EVENT;
	memcpy(&event.data[0], &subevt, sizeof(subevt));

	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_EVT_LE_META_EVENT_incomplete */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_EVT_LE_META_EVENT_complete */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_LE_META_EVENT_complete()
{
	CPPTEST_EXPECT_NCALLS("GAP_ConnectionComplete_CB", 1);

	evt_le_connection_complete con;

	evt_le_meta_event subevt;
	subevt.subevent = EVT_LE_CONN_COMPLETE;
	memcpy(&subevt.data[0], &con, sizeof(con));

	hci_event_pckt event;
	event.evt = EVT_LE_META_EVENT;
	memcpy(&event.data[0], &subevt, sizeof(subevt));

	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_EVT_LE_META_EVENT_complete */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_EVT_VENDOR_other_evt */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_other_evt()
{
	CPPTEST_EXPECT_NCALLS("Read_Request_CB", 0);
	CPPTEST_EXPECT_NCALLS("Attribute_Modified_CB", 0);

    // packet of irrelevant type
	evt_gatt_read_permit_req pr;

	evt_blue_aci bevt;
	bevt.ecode = EVT_BLUE_GATT_ERROR_RESP;
	memcpy(&bevt.data[0], &pr, sizeof(pr));

	hci_event_pckt event;
	event.evt = EVT_VENDOR;
	memcpy(&event.data[0], &bevt, sizeof(bevt));

	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_EVT_VENDOR_other_evt */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_EVT_VENDOR_read_evt */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_read_evt()
{
	CPPTEST_EXPECT_NCALLS("Read_Request_CB", 1);
	CPPTEST_EXPECT_NCALLS("Attribute_Modified_CB", 0);

	evt_blue_aci bevt;
	bevt.ecode = EVT_BLUE_GATT_READ_PERMIT_REQ;

	hci_event_pckt event;
	event.evt = EVT_VENDOR;
	memcpy(&event.data[0], &bevt, sizeof(bevt));

	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	HCI_Event_CB(&pckt);
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_EVT_VENDOR_read_evt */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb05a1 */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb05a1()
{
	CPPTEST_EXPECT_NCALLS("Read_Request_CB", 0);
	CPPTEST_EXPECT_NCALLS("Attribute_Modified_CB", 1);

	// set board type for this test
	uint8_t board = TargetBoardFeatures.bnrg_expansion_board;
	TargetBoardFeatures.bnrg_expansion_board = IDB05A1;

	evt_blue_aci bevt;
	bevt.ecode = EVT_BLUE_GATT_ATTRIBUTE_MODIFIED;

	hci_event_pckt event;
	event.evt = EVT_VENDOR;
	memcpy(&event.data[0], &bevt, sizeof(bevt));

	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	// run the test
	HCI_Event_CB(&pckt);

	// restore
	TargetBoardFeatures.bnrg_expansion_board = board;
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb05a1 */

/* CPPTEST_TEST_CASE_BEGIN test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb04a1 */
void TS_sensor_service_HCI_Event_CB_test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb04a1()
{
	CPPTEST_EXPECT_NCALLS("Read_Request_CB", 0);
	CPPTEST_EXPECT_NCALLS("Attribute_Modified_CB", 1);

	// set board type for this test
	uint8_t board = TargetBoardFeatures.bnrg_expansion_board;
	TargetBoardFeatures.bnrg_expansion_board = IDB04A1;

	evt_blue_aci bevt;
	bevt.ecode = EVT_BLUE_GATT_ATTRIBUTE_MODIFIED;

	hci_event_pckt event;
	event.evt = EVT_VENDOR;
	memcpy(&event.data[0], &bevt, sizeof(bevt));

	hci_uart_pckt pckt;
	pckt.type = HCI_EVENT_PKT;
	memcpy(&pckt.data[0], &event, sizeof(event));

	// run the test
	HCI_Event_CB(&pckt);

	// restore
	TargetBoardFeatures.bnrg_expansion_board = board;
}
/* CPPTEST_TEST_CASE_END test_HCI_Event_CB_EVT_VENDOR_attr_evt_idb04a1 */
