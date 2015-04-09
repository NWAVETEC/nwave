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
  emberCommand("add_log_event", emberAfClientAddLogEventCommand, "uu", ""), \
  emberCommand("add_low_battery_log_event", emberAfAddLowBatteryLogEventCommand, "", ""), \
  emberCommand("get_log_event_list", emberAfClientGetLogEventListCommand, "v*", ""), \
  emberCommand("get_log_event", emberAfClientGetLogEventCommand, "uv*", ""), \
  emberCommand("get_self_log_event", emberAfClientGetSelfLogEventCommand, "uv*", ""), \
  emberCommand("get_self_log_event_list", emberAfClientGetSelfLogEventListCommand, "v*", ""), \
  emberCommand("post_log_event", emberAfClientPostLogEventCommand, "u", ""), \
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
  emberCommand("ipd_start_without_mdns", emberAfIpdStartWithoutMdnsCommand, "bb", ""), \
  emberCommand("ipd_start", emberAfIpdStartCommand, "", ""), \
  emberCommand("ipd_get_reading", emberAfIpdGetReadingCommand, "uuv*", ""), \
  emberCommand("ipd_get_meter_reading", emberAfIpdGetMeterReadingCommand, "uuv*", ""), \
  emberCommand("ipd_get_reading_set", emberAfIpdGetReadingSetCommand, "uuuv*", ""), \
  emberCommand("ipd_get_historic_reading", emberAfIpdGetHistoricReadingCommand, "uuuuv*", ""), \
  emberCommand("billing_get_customer_account", emberAfBillingClientGetCustomerAccountCommand, "uv*", ""), \
  emberCommand("billing_get_customer_account_list", emberAfBillingClientGetCustomerAccountListCommand, "v*", ""), \
  emberCommand("billing_get_customer_agreement", emberAfBillingClientGetCustomerAgreementCommand, "uuv*", ""), \
  emberCommand("billing_get_customer_agreement_list", emberAfBillingClientGetCustomerAgreementListCommand, "uv*", ""), \
  emberCommand("billing_get_billing_reading_set", emberAfBillingClientGetBillingReadingSetCommand, "uuuuv*", ""), \
  emberCommand("billing_get_billing_reading_set_list", emberAfBillingClientGetBillingReadingSetListCommand, "uuuv*", ""), \
  emberCommand("billing_get_billing_period", emberAfBillingClientGetBillingPeriodCommand, "uuuv*", ""), \
  emberCommand("billing_get_billing_period_list", emberAfBillingClientGetBillingPeriodListCommand, "uuv*", ""), \
  emberCommand("set_power_status", emberAfSetPowerStatusCommand, "uwuu", ""), \
  emberCommand("put_power_status", emberAfPutPowerStatusCommand, "v*", ""), \
  emberCommand("get_power_status", emberAfGetPowerStatusCommand, "v*", ""), \
  emberCommand("pricing_get_tariff_profile_list", emberAfPricingClientGetTariffProfileListCommand, "v*", ""), \
  emberCommand("pricing_get_tariff_profile", emberAfPricingClientGetTariffProfileCommand, "uv*", ""), \
  emberCommand("pricing_get_rate_component_list", emberAfPricingClientGetRateComponentListCommand, "uv*", ""), \
  emberCommand("pricing_get_active_time_tariff_interval_list", emberAfPricingClientGetActiveTimeTariffIntervalListCommand, "uuv*", ""), \
  emberCommand("pricing_get_time_tariff_interval", emberAfPricingClientGetTimeTariffIntervalCommand, "uuuv*", ""), \
  emberCommand("pricing_get_consumption_tariff_interval_list", emberAfPricingClientGetConsumptionTariffIntervalListCommand, "uuuv*", ""), \
  emberCommand("pricing_get_consumption_tariff_interval", emberAfPricingClientGetConsumptionTariffIntervalCommand, "uuuuv*", ""), \
  emberCommand("get_prepayment_list", emberAfClientGetPrepaymentListCommand, "v*", ""), \
  emberCommand("get_prepayment", emberAfClientGetPrepaymentCommand, "uv*", ""), \
  emberCommand("get_account_balance", emberAfClientGetAccountBalanceCommand, "uv*", ""), \
  emberCommand("get_credit_register_list", emberAfClientGetCreditRegisterListCommand, "uv*", ""), \
  emberCommand("get_credit_register", emberAfClientGetCreditRegisterCommand, "uuv*", ""), \
  emberCommand("get_file_list", emberAfClientGetFileListCommand, "v*", ""), \
  emberCommand("get_file", emberAfClientGetFileCommand, "uv*", ""), \
  emberCommand("der_get_program_list", emberAfDerClientGetProgramListCommand, "v*", ""), \
  emberCommand("der_get_program", emberAfDerClientGetProgramCommand, "uv*", ""), \
  emberCommand("der_get_control_list", emberAfDerClientGetControlListCommand, "uv*", ""), \
  emberCommand("der_get_control", emberAfDerClientGetControlCommand, "uuv*", ""), \
  emberCommand("der_get_curve_list", emberAfDerClientGetCurveListCommand, "uuv*", ""), \
  emberCommand("der_get_curve", emberAfDerClientGetCurveCommand, "uuuv*", ""), \
  emberCommand("der_get_list", emberAfDerClientGetListCommand, "v*", ""), \
  emberCommand("der_get", emberAfDerClientGetCommand, "uv*", ""), \


#endif // __EMBER_AF_COMMAND_LINE__
