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
void emberAfSubscriptionClientDeleteSubscriptionCommand(void);
void emberAfSubscriptionClientGetSubscriptionListCommand(void);
void emberAfSubscriptionClientGetSubscriptionCommand(void);
void emberAfClientGetMessagingProgramListCommand(void);
void emberAfClientGetMessagingProgramCommand(void);
void emberAfClientGetTextMessageListCommand(void);
void emberAfClientGetTextMessageCommand(void);
void emberAfClientGetActiveTextMessageListCommand(void);
void emberAfPrintTextMessagesCommand(void);
void emberAfClientAddLogEventCommand(void);
void emberAfAddLowBatteryLogEventCommand(void);
void emberAfClientGetLogEventListCommand(void);
void emberAfClientGetLogEventCommand(void);
void emberAfClientGetSelfLogEventCommand(void);
void emberAfClientGetSelfLogEventListCommand(void);
void emberAfClientPostLogEventCommand(void);
void emberAfClientGetTimeFromServerCommand(void);
void emberAfIpdStartWithoutMdnsCommand(void);
void emberAfIpdStartCommand(void);
void emberAfIpdGetReadingCommand(void);
void emberAfIpdGetMeterReadingCommand(void);
void emberAfIpdGetReadingSetCommand(void);
void emberAfIpdGetHistoricReadingCommand(void);
void emberAfClientGetCommand(void);
void emberAfClientGetHeadCommand(void);
void emberAfClientGetEdevCommand(void);
void emberAfClientGetDcapCommand(void);
void emberAfClientGetSelfDeviceCommand(void);
void emberAfClientGetDeviceInformationCommand(void);
void emberAfClientPutDeviceInformationCommand(void);
void emberAfClientPrintServerAddressCommand(void);
void emberAfClientPutDeviceStatusCommand(void);
void emberAfClientGetDeviceStatusCommand(void);
void emberAfClientPutConfigurationCommand(void);
void emberAfClientGetConfigurationCommand(void);
void emberAfClientConfigureActionsCommand(void);
void emberAfClientPutEndDeviceCommand(void);


#define EMBER_AF_CLI_COMMANDS \
  emberCommand("exi_enable", emberAfExiEnableCommand, "u", ""), \
  emberCommand("print_time", emberAfPrintTimeCommand, "", ""), \
  emberCommand("override_time", emberAfOverrideTimeCommand, "w", ""), \
  emberCommand("set_configuration", emberAfSetConfigurationCommand, "wu", ""), \
  emberCommand("set_port_number", emberAfSetPortNumberCommand, "v", ""), \
  emberCommand("delete_subscription", emberAfSubscriptionClientDeleteSubscriptionCommand, "uuv*", ""), \
  emberCommand("get_subscription_list", emberAfSubscriptionClientGetSubscriptionListCommand, "uv*", ""), \
  emberCommand("get_subscription", emberAfSubscriptionClientGetSubscriptionCommand, "uuv*", ""), \
  emberCommand("get_messaging_program_list", emberAfClientGetMessagingProgramListCommand, "v*", ""), \
  emberCommand("get_messaging_program", emberAfClientGetMessagingProgramCommand, "uv*", ""), \
  emberCommand("get_text_message_list", emberAfClientGetTextMessageListCommand, "uv*", ""), \
  emberCommand("get_text_message", emberAfClientGetTextMessageCommand, "uuv*", ""), \
  emberCommand("get_active_text_message_list", emberAfClientGetActiveTextMessageListCommand, "uv*", ""), \
  emberCommand("print_text_messages", emberAfPrintTextMessagesCommand, "", ""), \
  emberCommand("add_log_event", emberAfClientAddLogEventCommand, "uu", ""), \
  emberCommand("add_low_battery_log_event", emberAfAddLowBatteryLogEventCommand, "", ""), \
  emberCommand("get_log_event_list", emberAfClientGetLogEventListCommand, "v*", ""), \
  emberCommand("get_log_event", emberAfClientGetLogEventCommand, "uv*", ""), \
  emberCommand("get_self_log_event", emberAfClientGetSelfLogEventCommand, "uv*", ""), \
  emberCommand("get_self_log_event_list", emberAfClientGetSelfLogEventListCommand, "v*", ""), \
  emberCommand("post_log_event", emberAfClientPostLogEventCommand, "u", ""), \
  emberCommand("get_time_from_server", emberAfClientGetTimeFromServerCommand, "", ""), \
  emberCommand("ipd_start_without_mdns", emberAfIpdStartWithoutMdnsCommand, "bb", ""), \
  emberCommand("ipd_start", emberAfIpdStartCommand, "", ""), \
  emberCommand("ipd_get_reading", emberAfIpdGetReadingCommand, "uuv*", ""), \
  emberCommand("ipd_get_meter_reading", emberAfIpdGetMeterReadingCommand, "uuv*", ""), \
  emberCommand("ipd_get_reading_set", emberAfIpdGetReadingSetCommand, "uuuv*", ""), \
  emberCommand("ipd_get_historic_reading", emberAfIpdGetHistoricReadingCommand, "uuuuv*", ""), \
  emberCommand("client_get", emberAfClientGetCommand, "bb*", ""), \
  emberCommand("client_get_head", emberAfClientGetHeadCommand, "b", ""), \
  emberCommand("client_get_edev", emberAfClientGetEdevCommand, "", ""), \
  emberCommand("client_get_dcap", emberAfClientGetDcapCommand, "", ""), \
  emberCommand("client_get_self_device", emberAfClientGetSelfDeviceCommand, "", ""), \
  emberCommand("client_get_device_information", emberAfClientGetDeviceInformationCommand, "", ""), \
  emberCommand("client_put_device_information", emberAfClientPutDeviceInformationCommand, "bbbwb", ""), \
  emberCommand("client_print_server_address", emberAfClientPrintServerAddressCommand, "", ""), \
  emberCommand("client_put_device_status", emberAfClientPutDeviceStatusCommand, "u", ""), \
  emberCommand("client_get_device_status", emberAfClientGetDeviceStatusCommand, "", ""), \
  emberCommand("client_put_configuration", emberAfClientPutConfigurationCommand, "wu", ""), \
  emberCommand("client_get_configuration", emberAfClientGetConfigurationCommand, "", ""), \
  emberCommand("client_configure_actions", emberAfClientConfigureActionsCommand, "uu*", ""), \
  emberCommand("client_put_end_device", emberAfClientPutEndDeviceCommand, "v*", ""), \


#endif // __EMBER_AF_COMMAND_LINE__
