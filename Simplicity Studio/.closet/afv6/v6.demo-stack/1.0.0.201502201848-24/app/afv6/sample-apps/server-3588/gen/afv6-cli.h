// This file is generated. Please do not edit manually.
// 
//

// This file contains the mapping for the command line configuration
// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_AF_COMMAND_LINE__
#define __EMBER_AF_COMMAND_LINE__




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
void emberAfTimeServerSetTimeCommand(void);
void emberAfUptSetReadingCommand(void);
void emberAfUptSetReadingSetDataCommand(void);
void emberAfUptAddHistoricReadingCommand(void);
void emberAfPrintHistoricReadingsCommand(void);
void emberAfPrintReadingCommand(void);
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
void emberAfServerAddTextMessageCommand(void);
void emberAfServerEasyAddTextMessageCommand(void);
void emberAfServerDeleteTextMessageCommand(void);
void emberAfServerCancelTextMessageCommand(void);
void emberAfPrintTextMessagesCommand(void);
void emberAfPrintPowerStatusCommand(void);
void emberAfPrintIpInterfaceCommand(void);


#define EMBER_AF_CLI_COMMANDS \
  {"exi_enable", emberAfExiEnableCommand, "u", ""}, \
  {"print_time", emberAfPrintTimeCommand, "", ""}, \
  {"override_time", emberAfOverrideTimeCommand, "w", ""}, \
  {"set_configuration", emberAfSetConfigurationCommand, "wu", ""}, \
  {"set_port_number", emberAfSetPortNumberCommand, "v", ""}, \
  {"drlc_print_edc_list", emberAfDrlcPrintEndDeviceControlListCommand, "", ""}, \
  {"drlc_test_get_edc_list_size", emberAfDrlcTestGetEndDeviceControlListSizeCommand, "", ""}, \
  {"drlc_test_edc_index", emberAfDrlcTestEndDeviceControlIndexCommand, "bu", ""}, \
  {"subscription_server_print_devices", emberAfServerPrintSubscribedDevicesCommand, "", ""}, \
  {"subscription_server_delete_device", emberAfServerDeleteSubscribedDeviceCommand, "v", ""}, \
  {"subscription_server_delete_all_devices", emberAfServerDeleteAllSubscribedDevicesCommand, "", ""}, \
  {"time_server_set_time", emberAfTimeServerSetTimeCommand, "w", ""}, \
  {"upt_set_reading", emberAfUptSetReadingCommand, "uuwwwu", ""}, \
  {"upt_set_reading_set_data", emberAfUptSetReadingSetDataCommand, "uuuww", ""}, \
  {"upt_add_historic_reading", emberAfUptAddHistoricReadingCommand, "uuuuwwwu", ""}, \
  {"print_historic_readings", emberAfPrintHistoricReadingsCommand, "", ""}, \
  {"print_reading", emberAfPrintReadingCommand, "", ""}, \
  {"esi_start", emberAfEsiStartCommand, "", ""}, \
  {"esi_drlc_load_edc", emberAfEsiDrlcLoadEndDeviceControlCommand, "wuuuubwwu", ""}, \
  {"esi_drlc_easy_load_edc", emberAfEsiDrlcEasyLoadEndDeviceControlCommand, "ww", ""}, \
  {"esi_drlc_cancel_edc", emberAfEsiDrlcCancelCommand, "b", ""}, \
  {"esi_drlc_cancel_all", emberAfEsiDrlcCancelAllCommand, "", ""}, \
  {"esi_drlc_delete_edc", emberAfEsiDrlcDeleteCommand, "b", ""}, \
  {"esi_drlc_delete_all", emberAfEsiDrlcDeleteAllCommand, "", ""}, \
  {"server_print_devices", emberAfServerPrintDevicesCommand, "", ""}, \
  {"server_delete_device", emberAfServerDeleteDeviceCommand, "v", ""}, \
  {"server_delete_all_devices", emberAfServerDeleteAllDevicesCommand, "", ""}, \
  {"server_set_device_information", emberAfServerSetDeviceInformationCommand, "bbbwb", ""}, \
  {"server_print_device_information", emberAfServerPrintDeviceInformationCommand, "", ""}, \
  {"add_text_message", emberAfServerAddTextMessageCommand, "wubwwubbb", ""}, \
  {"easy_add_text_message", emberAfServerEasyAddTextMessageCommand, "wwb", ""}, \
  {"delete_text_message", emberAfServerDeleteTextMessageCommand, "b", ""}, \
  {"cancel_text_message", emberAfServerCancelTextMessageCommand, "b", ""}, \
  {"print_text_messages", emberAfPrintTextMessagesCommand, "", ""}, \
  {"print_power_status", emberAfPrintPowerStatusCommand, "u", ""}, \
  {"print_ip_interface", emberAfPrintIpInterfaceCommand, "", ""}, \


#endif // __EMBER_AF_COMMAND_LINE__
