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
void emberAfClientGetTimeFromServerCommand(void);
void emberAfSubscriptionClientDeleteSubscriptionCommand(void);
void emberAfSubscriptionClientGetSubscriptionListCommand(void);
void emberAfSubscriptionClientGetSubscriptionCommand(void);
void emberAfClientGetMessagingProgramListCommand(void);
void emberAfClientGetMessagingProgramCommand(void);
void emberAfClientGetTextMessageListCommand(void);
void emberAfClientGetTextMessageCommand(void);
void emberAfClientGetActiveTextMessageListCommand(void);
void emberAfPrintTextMessagesCommand(void);
void emberAfPctStartWithoutMdnsCommand(void);
void emberAfPctStartCommand(void);
void emberAfClientGetEndDeviceControlsCommand(void);
void emberAfSetLoadShedAvailabilityCommand(void);
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
  emberCommand("drlc_print_edc_list", emberAfDrlcPrintEndDeviceControlListCommand, "", ""), \
  emberCommand("drlc_test_get_edc_list_size", emberAfDrlcTestGetEndDeviceControlListSizeCommand, "", ""), \
  emberCommand("drlc_test_edc_index", emberAfDrlcTestEndDeviceControlIndexCommand, "bu", ""), \
  emberCommand("get_time_from_server", emberAfClientGetTimeFromServerCommand, "", ""), \
  emberCommand("delete_subscription", emberAfSubscriptionClientDeleteSubscriptionCommand, "uuv*", ""), \
  emberCommand("get_subscription_list", emberAfSubscriptionClientGetSubscriptionListCommand, "uv*", ""), \
  emberCommand("get_subscription", emberAfSubscriptionClientGetSubscriptionCommand, "uuv*", ""), \
  emberCommand("get_messaging_program_list", emberAfClientGetMessagingProgramListCommand, "v*", ""), \
  emberCommand("get_messaging_program", emberAfClientGetMessagingProgramCommand, "uv*", ""), \
  emberCommand("get_text_message_list", emberAfClientGetTextMessageListCommand, "uv*", ""), \
  emberCommand("get_text_message", emberAfClientGetTextMessageCommand, "uuv*", ""), \
  emberCommand("get_active_text_message_list", emberAfClientGetActiveTextMessageListCommand, "uv*", ""), \
  emberCommand("print_text_messages", emberAfPrintTextMessagesCommand, "", ""), \
  emberCommand("pct_start_without_mdns", emberAfPctStartWithoutMdnsCommand, "bb", ""), \
  emberCommand("pct_start", emberAfPctStartCommand, "", ""), \
  emberCommand("get_end_device_controls", emberAfClientGetEndDeviceControlsCommand, "uv*", ""), \
  emberCommand("set_load_shed_availability", emberAfSetLoadShedAvailabilityCommand, "u", ""), \
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
