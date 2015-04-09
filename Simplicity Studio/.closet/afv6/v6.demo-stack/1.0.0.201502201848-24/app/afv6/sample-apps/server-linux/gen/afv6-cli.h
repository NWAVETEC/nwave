// This file is generated. Please do not edit manually.
// 
//

// This file contains the mapping for the command line configuration
// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_AF_COMMAND_LINE__
#define __EMBER_AF_COMMAND_LINE__




void emberAfEsiStartCommand(void);
void emberAfEsiDrlcLoadEndDeviceControlCommand(void);
void emberAfEsiDrlcEasyLoadEndDeviceControlCommand(void);
void emberAfEsiDrlcCancelCommand(void);
void emberAfEsiDrlcCancelAllCommand(void);
void emberAfEsiDrlcDeleteCommand(void);
void emberAfEsiDrlcDeleteAllCommand(void);
void emberAfServerPrintDevicesCommand(void);
void emberAfServerDeleteDeviceCommand(void);
void emberAfServerDeleteAllDevicesCommand(void);
void emberAfServerSetDeviceInformationCommand(void);
void emberAfServerPrintDeviceInformationCommand(void);
void emberAfExiEnableCommand(void);
void emberAfPrintTimeCommand(void);
void emberAfOverrideTimeCommand(void);
void emberAfSetConfigurationCommand(void);
void emberAfSetPortNumberCommand(void);
void emberAfDrlcPrintEndDeviceControlListCommand(void);
void emberAfDrlcTestGetEndDeviceControlListSizeCommand(void);
void emberAfDrlcTestEndDeviceControlIndexCommand(void);
void emberAfServerPrintSubscribedDevicesCommand(void);
void emberAfServerDeleteSubscribedDeviceCommand(void);
void emberAfServerDeleteAllSubscribedDevicesCommand(void);
void emberAfServerAddTextMessageCommand(void);
void emberAfServerEasyAddTextMessageCommand(void);
void emberAfServerDeleteTextMessageCommand(void);
void emberAfServerCancelTextMessageCommand(void);
void emberAfPrintTextMessagesCommand(void);
void emberAfTimeServerSetTimeCommand(void);
void emberAfUptSetReadingCommand(void);
void emberAfUptSetReadingSetDataCommand(void);
void emberAfUptAddHistoricReadingCommand(void);
void emberAfPrintHistoricReadingsCommand(void);
void emberAfPrintReadingCommand(void);
void emberAfPrintPowerStatusCommand(void);
void emberAfPrintIpInterfaceCommand(void);


#define EMBER_AF_CLI_COMMANDS \
  emberCommand("esi_start", emberAfEsiStartCommand, "", ""), \
  emberCommand("esi_drlc_load_edc", emberAfEsiDrlcLoadEndDeviceControlCommand, "wuuuubwwu", ""), \
  emberCommand("esi_drlc_easy_load_edc", emberAfEsiDrlcEasyLoadEndDeviceControlCommand, "ww", ""), \
  emberCommand("esi_drlc_cancel_edc", emberAfEsiDrlcCancelCommand, "b", ""), \
  emberCommand("esi_drlc_cancel_all", emberAfEsiDrlcCancelAllCommand, "", ""), \
  emberCommand("esi_drlc_delete_edc", emberAfEsiDrlcDeleteCommand, "b", ""), \
  emberCommand("esi_drlc_delete_all", emberAfEsiDrlcDeleteAllCommand, "", ""), \
  emberCommand("server_print_devices", emberAfServerPrintDevicesCommand, "", ""), \
  emberCommand("server_delete_device", emberAfServerDeleteDeviceCommand, "v", ""), \
  emberCommand("server_delete_all_devices", emberAfServerDeleteAllDevicesCommand, "", ""), \
  emberCommand("server_set_device_information", emberAfServerSetDeviceInformationCommand, "bbbwb", ""), \
  emberCommand("server_print_device_information", emberAfServerPrintDeviceInformationCommand, "", ""), \
  emberCommand("exi_enable", emberAfExiEnableCommand, "u", ""), \
  emberCommand("print_time", emberAfPrintTimeCommand, "", ""), \
  emberCommand("override_time", emberAfOverrideTimeCommand, "w", ""), \
  emberCommand("set_configuration", emberAfSetConfigurationCommand, "wu", ""), \
  emberCommand("set_port_number", emberAfSetPortNumberCommand, "v", ""), \
  emberCommand("drlc_print_edc_list", emberAfDrlcPrintEndDeviceControlListCommand, "", ""), \
  emberCommand("drlc_test_get_edc_list_size", emberAfDrlcTestGetEndDeviceControlListSizeCommand, "", ""), \
  emberCommand("drlc_test_edc_index", emberAfDrlcTestEndDeviceControlIndexCommand, "bu", ""), \
  emberCommand("subscription_server_print_devices", emberAfServerPrintSubscribedDevicesCommand, "", ""), \
  emberCommand("subscription_server_delete_device", emberAfServerDeleteSubscribedDeviceCommand, "v", ""), \
  emberCommand("subscription_server_delete_all_devices", emberAfServerDeleteAllSubscribedDevicesCommand, "", ""), \
  emberCommand("add_text_message", emberAfServerAddTextMessageCommand, "wubwwubbb", ""), \
  emberCommand("easy_add_text_message", emberAfServerEasyAddTextMessageCommand, "wwb", ""), \
  emberCommand("delete_text_message", emberAfServerDeleteTextMessageCommand, "b", ""), \
  emberCommand("cancel_text_message", emberAfServerCancelTextMessageCommand, "b", ""), \
  emberCommand("print_text_messages", emberAfPrintTextMessagesCommand, "", ""), \
  emberCommand("time_server_set_time", emberAfTimeServerSetTimeCommand, "w", ""), \
  emberCommand("upt_set_reading", emberAfUptSetReadingCommand, "uuwwwu", ""), \
  emberCommand("upt_set_reading_set_data", emberAfUptSetReadingSetDataCommand, "uuuww", ""), \
  emberCommand("upt_add_historic_reading", emberAfUptAddHistoricReadingCommand, "uuuuwwwu", ""), \
  emberCommand("print_historic_readings", emberAfPrintHistoricReadingsCommand, "", ""), \
  emberCommand("print_reading", emberAfPrintReadingCommand, "", ""), \
  emberCommand("print_power_status", emberAfPrintPowerStatusCommand, "u", ""), \
  emberCommand("print_ip_interface", emberAfPrintIpInterfaceCommand, "", ""), \


#endif // __EMBER_AF_COMMAND_LINE__
