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
void emberAfClientAddLogEventCommand(void);
void emberAfAddLowBatteryLogEventCommand(void);
void emberAfClientGetLogEventListCommand(void);
void emberAfClientGetLogEventCommand(void);
void emberAfClientGetSelfLogEventCommand(void);
void emberAfClientGetSelfLogEventListCommand(void);
void emberAfClientPostLogEventCommand(void);
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
void emberAfIpdStartWithoutMdnsCommand(void);
void emberAfIpdStartCommand(void);
void emberAfIpdGetReadingCommand(void);
void emberAfIpdGetMeterReadingCommand(void);
void emberAfIpdGetReadingSetCommand(void);
void emberAfIpdGetHistoricReadingCommand(void);
void emberAfBillingClientGetCustomerAccountCommand(void);
void emberAfBillingClientGetCustomerAccountListCommand(void);
void emberAfBillingClientGetCustomerAgreementCommand(void);
void emberAfBillingClientGetCustomerAgreementListCommand(void);
void emberAfBillingClientGetBillingReadingSetCommand(void);
void emberAfBillingClientGetBillingReadingSetListCommand(void);
void emberAfBillingClientGetBillingPeriodCommand(void);
void emberAfBillingClientGetBillingPeriodListCommand(void);
void emberAfSetPowerStatusCommand(void);
void emberAfPutPowerStatusCommand(void);
void emberAfGetPowerStatusCommand(void);
void emberAfPricingClientGetTariffProfileListCommand(void);
void emberAfPricingClientGetTariffProfileCommand(void);
void emberAfPricingClientGetRateComponentListCommand(void);
void emberAfPricingClientGetActiveTimeTariffIntervalListCommand(void);
void emberAfPricingClientGetTimeTariffIntervalCommand(void);
void emberAfPricingClientGetConsumptionTariffIntervalListCommand(void);
void emberAfPricingClientGetConsumptionTariffIntervalCommand(void);
void emberAfClientGetPrepaymentListCommand(void);
void emberAfClientGetPrepaymentCommand(void);
void emberAfClientGetAccountBalanceCommand(void);
void emberAfClientGetCreditRegisterListCommand(void);
void emberAfClientGetCreditRegisterCommand(void);
void emberAfClientGetFileListCommand(void);
void emberAfClientGetFileCommand(void);
void emberAfDerClientGetProgramListCommand(void);
void emberAfDerClientGetProgramCommand(void);
void emberAfDerClientGetControlListCommand(void);
void emberAfDerClientGetControlCommand(void);
void emberAfDerClientGetCurveListCommand(void);
void emberAfDerClientGetCurveCommand(void);
void emberAfDerClientGetListCommand(void);
void emberAfDerClientGetCommand(void);
void emberAfPrintIpInterfaceCommand(void);
void emberAfGetIpInterfaceListCommand(void);
void emberAfGetIpInterfaceCommand(void);
void emberAfGetIpAddrListCommand(void);
void emberAfGetIpAddrCommand(void);
void emberAfGetRplInstanceListCommand(void);
void emberAfGetRplInstanceCommand(void);
void emberAfGetRplSourceRoutesListCommand(void);
void emberAfGetRplSourceRoutesCommand(void);


#define EMBER_AF_CLI_COMMANDS \
  {"exi_enable", emberAfExiEnableCommand, "u", ""}, \
  {"print_time", emberAfPrintTimeCommand, "", ""}, \
  {"override_time", emberAfOverrideTimeCommand, "w", ""}, \
  {"set_configuration", emberAfSetConfigurationCommand, "wu", ""}, \
  {"set_port_number", emberAfSetPortNumberCommand, "v", ""}, \
  {"drlc_print_edc_list", emberAfDrlcPrintEndDeviceControlListCommand, "", ""}, \
  {"drlc_test_get_edc_list_size", emberAfDrlcTestGetEndDeviceControlListSizeCommand, "", ""}, \
  {"drlc_test_edc_index", emberAfDrlcTestEndDeviceControlIndexCommand, "bu", ""}, \
  {"get_time_from_server", emberAfClientGetTimeFromServerCommand, "", ""}, \
  {"delete_subscription", emberAfSubscriptionClientDeleteSubscriptionCommand, "uuv*", ""}, \
  {"get_subscription_list", emberAfSubscriptionClientGetSubscriptionListCommand, "uv*", ""}, \
  {"get_subscription", emberAfSubscriptionClientGetSubscriptionCommand, "uuv*", ""}, \
  {"get_messaging_program_list", emberAfClientGetMessagingProgramListCommand, "v*", ""}, \
  {"get_messaging_program", emberAfClientGetMessagingProgramCommand, "uv*", ""}, \
  {"get_text_message_list", emberAfClientGetTextMessageListCommand, "uv*", ""}, \
  {"get_text_message", emberAfClientGetTextMessageCommand, "uuv*", ""}, \
  {"get_active_text_message_list", emberAfClientGetActiveTextMessageListCommand, "uv*", ""}, \
  {"print_text_messages", emberAfPrintTextMessagesCommand, "", ""}, \
  {"add_log_event", emberAfClientAddLogEventCommand, "uu", ""}, \
  {"add_low_battery_log_event", emberAfAddLowBatteryLogEventCommand, "", ""}, \
  {"get_log_event_list", emberAfClientGetLogEventListCommand, "v*", ""}, \
  {"get_log_event", emberAfClientGetLogEventCommand, "uv*", ""}, \
  {"get_self_log_event", emberAfClientGetSelfLogEventCommand, "uv*", ""}, \
  {"get_self_log_event_list", emberAfClientGetSelfLogEventListCommand, "v*", ""}, \
  {"post_log_event", emberAfClientPostLogEventCommand, "u", ""}, \
  {"pct_start_without_mdns", emberAfPctStartWithoutMdnsCommand, "bb", ""}, \
  {"pct_start", emberAfPctStartCommand, "", ""}, \
  {"get_end_device_controls", emberAfClientGetEndDeviceControlsCommand, "uv*", ""}, \
  {"set_load_shed_availability", emberAfSetLoadShedAvailabilityCommand, "u", ""}, \
  {"client_get", emberAfClientGetCommand, "bb*", ""}, \
  {"client_get_head", emberAfClientGetHeadCommand, "b", ""}, \
  {"client_get_edev", emberAfClientGetEdevCommand, "", ""}, \
  {"client_get_dcap", emberAfClientGetDcapCommand, "", ""}, \
  {"client_get_self_device", emberAfClientGetSelfDeviceCommand, "", ""}, \
  {"client_get_device_information", emberAfClientGetDeviceInformationCommand, "", ""}, \
  {"client_put_device_information", emberAfClientPutDeviceInformationCommand, "bbbwb", ""}, \
  {"client_print_server_address", emberAfClientPrintServerAddressCommand, "", ""}, \
  {"client_put_device_status", emberAfClientPutDeviceStatusCommand, "u", ""}, \
  {"client_get_device_status", emberAfClientGetDeviceStatusCommand, "", ""}, \
  {"client_put_configuration", emberAfClientPutConfigurationCommand, "wu", ""}, \
  {"client_get_configuration", emberAfClientGetConfigurationCommand, "", ""}, \
  {"client_configure_actions", emberAfClientConfigureActionsCommand, "uu*", ""}, \
  {"client_put_end_device", emberAfClientPutEndDeviceCommand, "v*", ""}, \
  {"ipd_start_without_mdns", emberAfIpdStartWithoutMdnsCommand, "bb", ""}, \
  {"ipd_start", emberAfIpdStartCommand, "", ""}, \
  {"ipd_get_reading", emberAfIpdGetReadingCommand, "uuv*", ""}, \
  {"ipd_get_meter_reading", emberAfIpdGetMeterReadingCommand, "uuv*", ""}, \
  {"ipd_get_reading_set", emberAfIpdGetReadingSetCommand, "uuuv*", ""}, \
  {"ipd_get_historic_reading", emberAfIpdGetHistoricReadingCommand, "uuuuv*", ""}, \
  {"billing_get_customer_account", emberAfBillingClientGetCustomerAccountCommand, "uv*", ""}, \
  {"billing_get_customer_account_list", emberAfBillingClientGetCustomerAccountListCommand, "v*", ""}, \
  {"billing_get_customer_agreement", emberAfBillingClientGetCustomerAgreementCommand, "uuv*", ""}, \
  {"billing_get_customer_agreement_list", emberAfBillingClientGetCustomerAgreementListCommand, "uv*", ""}, \
  {"billing_get_billing_reading_set", emberAfBillingClientGetBillingReadingSetCommand, "uuuuv*", ""}, \
  {"billing_get_billing_reading_set_list", emberAfBillingClientGetBillingReadingSetListCommand, "uuuv*", ""}, \
  {"billing_get_billing_period", emberAfBillingClientGetBillingPeriodCommand, "uuuv*", ""}, \
  {"billing_get_billing_period_list", emberAfBillingClientGetBillingPeriodListCommand, "uuv*", ""}, \
  {"set_power_status", emberAfSetPowerStatusCommand, "uwuu", ""}, \
  {"put_power_status", emberAfPutPowerStatusCommand, "v*", ""}, \
  {"get_power_status", emberAfGetPowerStatusCommand, "v*", ""}, \
  {"pricing_get_tariff_profile_list", emberAfPricingClientGetTariffProfileListCommand, "v*", ""}, \
  {"pricing_get_tariff_profile", emberAfPricingClientGetTariffProfileCommand, "uv*", ""}, \
  {"pricing_get_rate_component_list", emberAfPricingClientGetRateComponentListCommand, "uv*", ""}, \
  {"pricing_get_active_time_tariff_interval_list", emberAfPricingClientGetActiveTimeTariffIntervalListCommand, "uuv*", ""}, \
  {"pricing_get_time_tariff_interval", emberAfPricingClientGetTimeTariffIntervalCommand, "uuuv*", ""}, \
  {"pricing_get_consumption_tariff_interval_list", emberAfPricingClientGetConsumptionTariffIntervalListCommand, "uuuv*", ""}, \
  {"pricing_get_consumption_tariff_interval", emberAfPricingClientGetConsumptionTariffIntervalCommand, "uuuuv*", ""}, \
  {"get_prepayment_list", emberAfClientGetPrepaymentListCommand, "v*", ""}, \
  {"get_prepayment", emberAfClientGetPrepaymentCommand, "uv*", ""}, \
  {"get_account_balance", emberAfClientGetAccountBalanceCommand, "uv*", ""}, \
  {"get_credit_register_list", emberAfClientGetCreditRegisterListCommand, "uv*", ""}, \
  {"get_credit_register", emberAfClientGetCreditRegisterCommand, "uuv*", ""}, \
  {"get_file_list", emberAfClientGetFileListCommand, "v*", ""}, \
  {"get_file", emberAfClientGetFileCommand, "uv*", ""}, \
  {"der_get_program_list", emberAfDerClientGetProgramListCommand, "v*", ""}, \
  {"der_get_program", emberAfDerClientGetProgramCommand, "uv*", ""}, \
  {"der_get_control_list", emberAfDerClientGetControlListCommand, "uv*", ""}, \
  {"der_get_control", emberAfDerClientGetControlCommand, "uuv*", ""}, \
  {"der_get_curve_list", emberAfDerClientGetCurveListCommand, "uuv*", ""}, \
  {"der_get_curve", emberAfDerClientGetCurveCommand, "uuuv*", ""}, \
  {"der_get_list", emberAfDerClientGetListCommand, "v*", ""}, \
  {"der_get", emberAfDerClientGetCommand, "uv*", ""}, \
  {"print_ip_interface", emberAfPrintIpInterfaceCommand, "", ""}, \
  {"get_ip_interface_list", emberAfGetIpInterfaceListCommand, "v*", ""}, \
  {"get_ip_interface", emberAfGetIpInterfaceCommand, "uv*", ""}, \
  {"get_ip_addr_list", emberAfGetIpAddrListCommand, "uv*", ""}, \
  {"get_ip_addr", emberAfGetIpAddrCommand, "uuv*", ""}, \
  {"get_rpl_instance_list", emberAfGetRplInstanceListCommand, "uuv*", ""}, \
  {"get_rpl_instance", emberAfGetRplInstanceCommand, "uuuv*", ""}, \
  {"get_rpl_source_routes_list", emberAfGetRplSourceRoutesListCommand, "uuuv*", ""}, \
  {"get_rpl_source_routes", emberAfGetRplSourceRoutesCommand, "uuuuv*", ""}, \


#endif // __EMBER_AF_COMMAND_LINE__
