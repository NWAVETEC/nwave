// This file is generated. Please do not edit manually.
// 
//

// This file contains the mapping for the command line configuration
// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_AF_COMMAND_LINE__
#define __EMBER_AF_COMMAND_LINE__




void emberAfServerPrintSubscribedDevicesCommand(void);
void emberAfServerDeleteSubscribedDeviceCommand(void);
void emberAfServerDeleteAllSubscribedDevicesCommand(void);
void emberAfServerPrintDevicesCommand(void);
void emberAfServerDeleteDeviceCommand(void);
void emberAfServerDeleteAllDevicesCommand(void);
void emberAfServerSetDeviceInformationCommand(void);
void emberAfServerPrintDeviceInformationCommand(void);
void emberAfUptSetReadingCommand(void);
void emberAfUptSetReadingSetDataCommand(void);
void emberAfUptAddHistoricReadingCommand(void);
void emberAfPrintHistoricReadingsCommand(void);
void emberAfPrintReadingCommand(void);
void emberAfExiEnableCommand(void);
void emberAfPrintTimeCommand(void);
void emberAfOverrideTimeCommand(void);
void emberAfSetConfigurationCommand(void);
void emberAfSetPortNumberCommand(void);
void emberAfTimeServerSetTimeCommand(void);


#define EMBER_AF_CLI_COMMANDS \
  emberCommand("subscription_server_print_devices", emberAfServerPrintSubscribedDevicesCommand, "", ""), \
  emberCommand("subscription_server_delete_device", emberAfServerDeleteSubscribedDeviceCommand, "v", ""), \
  emberCommand("subscription_server_delete_all_devices", emberAfServerDeleteAllSubscribedDevicesCommand, "", ""), \
  emberCommand("server_print_devices", emberAfServerPrintDevicesCommand, "", ""), \
  emberCommand("server_delete_device", emberAfServerDeleteDeviceCommand, "v", ""), \
  emberCommand("server_delete_all_devices", emberAfServerDeleteAllDevicesCommand, "", ""), \
  emberCommand("server_set_device_information", emberAfServerSetDeviceInformationCommand, "bbbwb", ""), \
  emberCommand("server_print_device_information", emberAfServerPrintDeviceInformationCommand, "", ""), \
  emberCommand("upt_set_reading", emberAfUptSetReadingCommand, "uuwwwu", ""), \
  emberCommand("upt_set_reading_set_data", emberAfUptSetReadingSetDataCommand, "uuuww", ""), \
  emberCommand("upt_add_historic_reading", emberAfUptAddHistoricReadingCommand, "uuuuwwwu", ""), \
  emberCommand("print_historic_readings", emberAfPrintHistoricReadingsCommand, "", ""), \
  emberCommand("print_reading", emberAfPrintReadingCommand, "", ""), \
  emberCommand("exi_enable", emberAfExiEnableCommand, "u", ""), \
  emberCommand("print_time", emberAfPrintTimeCommand, "", ""), \
  emberCommand("override_time", emberAfOverrideTimeCommand, "w", ""), \
  emberCommand("set_configuration", emberAfSetConfigurationCommand, "wu", ""), \
  emberCommand("set_port_number", emberAfSetPortNumberCommand, "v", ""), \
  emberCommand("time_server_set_time", emberAfTimeServerSetTimeCommand, "w", ""), \


#endif // __EMBER_AF_COMMAND_LINE__
