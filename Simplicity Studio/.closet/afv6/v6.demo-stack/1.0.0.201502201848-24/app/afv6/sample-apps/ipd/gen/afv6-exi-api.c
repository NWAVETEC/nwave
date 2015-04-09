// This file is generated. Please do not edit manually.
// 
//

// This file contains generated API for the structs encoder/decoder.

#include PLATFORM_HEADER
#include "app/util/exi/exi.h"
#include "app/util/exi/exi-internal.h"
#include "stack/core/log.h"
#include "afv6-exi-types.h"
#include "afv6-exi-qname.h"
#include "afv6-exi-grammar.h"
const EmberExiStructSpec emEncoderEvents[] = {
  0,        // 0 index is used a null
#define EMBER_EXI_STRUCT EmberExiGeneratedAbstractDevice // index 1
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AbstractDevice, 2, 0, 1291, 66, 0),
    EMBER_EXI_SUBSTRUCT_OPTION(ConfigurationLink, 0, 1, ConfigurationLink, EmberExiGeneratedConfigurationLink, emberExiConfigurationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERListLink, 0, 1, DERListLink, EmberExiGeneratedDERListLink, emberExiDERListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceInformationLink, 0, 1, DeviceInformationLink, EmberExiGeneratedDeviceInformationLink, emberExiDeviceInformationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceStatusLink, 0, 1, DeviceStatusLink, EmberExiGeneratedDeviceStatusLink, emberExiDeviceStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FileStatusLink, 0, 1, FileStatusLink, EmberExiGeneratedFileStatusLink, emberExiFileStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(IPInterfaceListLink, 0, 1, IPInterfaceListLink, EmberExiGeneratedIPInterfaceListLink, emberExiIPInterfaceListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(LoadShedAvailabilityLink, 0, 1, LoadShedAvailabilityLink, EmberExiGeneratedLoadShedAvailabilityLink, emberExiLoadShedAvailabilityLinkStructDataIndex),
    EMBER_EXI_CH(loadShedDeviceCategory, BINARY, 1, loadShedDeviceCategory_option),
    EMBER_EXI_SUBSTRUCT_OPTION(LogEventListLink, 0, 1, LogEventListLink, EmberExiGeneratedLogEventListLink, emberExiLogEventListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerStatusLink, 0, 1, PowerStatusLink, EmberExiGeneratedPowerStatusLink, emberExiPowerStatusLinkStructDataIndex),
    EMBER_EXI_CH(sFDI, UNSIGNED_INTEGER, 255, sFDI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActivePower // index 67
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActivePower, 0, 0, 65535, 12, 1),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTextMessageListLink // index 79
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTextMessageListLink, 2, 0, 781, 6, 2),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedApplianceLoadReduction // index 85
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ApplianceLoadReduction, 0, 0, 65535, 9, 3),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAppliedTargetReduction // index 94
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AppliedTargetReduction, 0, 0, 65535, 12, 5),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCondition // index 106
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Condition, 0, 0, 65535, 15, 6),
    EMBER_EXI_CH(attributeIdentifier, UNSIGNED_INTEGER, 255, attributeIdentifier),
    EMBER_EXI_CH(lowerThreshold, INTEGER, 255, lowerThreshold),
    EMBER_EXI_CH(upperThreshold, INTEGER, 255, upperThreshold),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfiguration // index 121
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Configuration, 2, 0, 1291, 30, 7),
    EMBER_EXI_CH_STRING(currentLocale, STRING, 255, currentLocale),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerConfiguration, 0, 1, PowerConfiguration, EmberExiGeneratedPowerConfiguration, emberExiPowerConfigurationStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PriceResponseCfgListLink, 0, 1, PriceResponseCfgListLink, EmberExiGeneratedPriceResponseCfgListLink, emberExiPriceResponseCfgListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeConfiguration, 0, 1, TimeConfiguration, EmberExiGeneratedTimeConfiguration, emberExiTimeConfigurationStructDataIndex),
    EMBER_EXI_CH_STRING(userDeviceName, STRING, 255, userDeviceName),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfigurationLink // index 151
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConfigurationLink, 1, 0, 757, 6, 8),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAccountListLink // index 157
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAccountListLink, 2, 0, 781, 6, 10),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERListLink // index 163
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERListLink, 2, 0, 781, 6, 11),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgramListLink // index 169
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgramListLink, 2, 0, 781, 6, 12),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDRLCCapabilities // index 175
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DRLCCapabilities, 0, 0, 65535, 21, 13),
    EMBER_EXI_SUBSTRUCT(averageEnergy, 1, 0, averageEnergy, EmberExiGeneratedRealEnergy, emberExiRealEnergyStructDataIndex),
    EMBER_EXI_SUBSTRUCT(maxDemand, 1, 0, maxDemand, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_CH(optionsImplemented, BINARY, 255, optionsImplemented),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDateTimeInterval // index 196
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DateTimeInterval, 0, 0, 65535, 12, 14),
    EMBER_EXI_CH(duration, INTEGER, 255, duration),
    EMBER_EXI_CH(start, INTEGER, 255, start),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramListLink // index 208
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramListLink, 2, 0, 781, 6, 15),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceCapability // index 214
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceCapability, 1, 10, 562, 24, 16),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceListLink, 0, 1, EndDeviceListLink, EmberExiGeneratedEndDeviceListLink, emberExiEndDeviceListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MirrorUsagePointListLink, 0, 1, MirrorUsagePointListLink, EmberExiGeneratedMirrorUsagePointListLink, emberExiMirrorUsagePointListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SelfDeviceLink, 0, 1, SelfDeviceLink, EmberExiGeneratedSelfDeviceLink, emberExiSelfDeviceLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformation // index 238
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformation, 1, 0, 1159, 54, 18),
    EMBER_EXI_SUBSTRUCT_OPTION(DRLCCapabilities, 0, 1, DRLCCapabilities, EmberExiGeneratedDRLCCapabilities, emberExiDRLCCapabilitiesStructDataIndex),
    EMBER_EXI_CH(functionsImplemented, BINARY, 0, functionsImplemented_option),
    EMBER_EXI_CH(lFDI, BINARY, 255, lFDI),
    EMBER_EXI_CH(mfDate, INTEGER, 255, mfDate),
    EMBER_EXI_CH_STRING(mfHwVer, STRING, 255, mfHwVer),
    EMBER_EXI_CH(mfID, INTEGER, 255, mfID),
    EMBER_EXI_CH_STRING(mfInfo, STRING, 0, mfInfo_option),
    EMBER_EXI_CH_STRING(mfModel, STRING, 255, mfModel),
    EMBER_EXI_CH_STRING(mfSerNum, STRING, 255, mfSerNum),
    EMBER_EXI_CH(primaryPower, UNSIGNED_INTEGER, 255, primaryPower),
    EMBER_EXI_CH(secondaryPower, UNSIGNED_INTEGER, 255, secondaryPower),
    EMBER_EXI_SUBSTRUCT_OPTION(SupportedLocaleListLink, 0, 1, SupportedLocaleListLink, EmberExiGeneratedSupportedLocaleListLink, emberExiSupportedLocaleListLinkStructDataIndex),
    EMBER_EXI_CH(swActTime, INTEGER, 255, swActTime),
    EMBER_EXI_CH_STRING(swVer, STRING, 255, swVer),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformationLink // index 292
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformationLink, 1, 0, 757, 6, 19),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatus // index 298
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatus, 1, 0, 1159, 30, 20),
    EMBER_EXI_CH(changedTime, INTEGER, 255, changedTime),
    EMBER_EXI_CH(onCount, UNSIGNED_INTEGER, 0, onCount_option),
    EMBER_EXI_CH(opState, UNSIGNED_INTEGER, 1, opState_option),
    EMBER_EXI_CH(opTime, INTEGER, 2, opTime_option),
    EMBER_EXI_SUBSTRUCT_ARRAY(Temperature, 0, 255, Temperature, EmberExiGeneratedTemperature, emberExiTemperatureStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeLink, 0, 1, TimeLink, EmberExiGeneratedTimeLink, emberExiTimeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatusLink // index 328
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatusLink, 1, 0, 757, 6, 21),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDrResponse // index 334
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DrResponse, 1, 4, 1210, 39, 22),
    EMBER_EXI_SUBSTRUCT_OPTION(ApplianceLoadReduction, 0, 1, ApplianceLoadReduction, EmberExiGeneratedApplianceLoadReduction, emberExiApplianceLoadReductionStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(AppliedTargetReduction, 0, 1, AppliedTargetReduction, EmberExiGeneratedAppliedTargetReduction, emberExiAppliedTargetReductionStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(Offset, 0, 1, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 2, overrideDuration_option),
    EMBER_EXI_SUBSTRUCT_OPTION(SetPoint, 0, 1, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDutyCycle // index 373
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DutyCycle, 0, 0, 65535, 9, 24),
    EMBER_EXI_CH(normalValue, UNSIGNED_INTEGER, 255, normalValue),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDevice // index 382
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDevice, 2, 11, 1, 36, 25),
    EMBER_EXI_SUBSTRUCT_OPTION(FlowReservationRequestListLink, 0, 1, FlowReservationRequestListLink, EmberExiGeneratedFlowReservationRequestListLink, emberExiFlowReservationRequestListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FlowReservationResponseListLink, 0, 1, FlowReservationResponseListLink, EmberExiGeneratedFlowReservationResponseListLink, emberExiFlowReservationResponseListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FunctionSetAssignmentsListLink, 0, 1, FunctionSetAssignmentsListLink, EmberExiGeneratedFunctionSetAssignmentsListLink, emberExiFunctionSetAssignmentsListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(RegistrationLink, 0, 1, RegistrationLink, EmberExiGeneratedRegistrationLink, emberExiRegistrationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SubscriptionListLink, 0, 1, SubscriptionListLink, EmberExiGeneratedSubscriptionListLink, emberExiSubscriptionListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControl // index 418
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControl, 4, 8, 1012, 48, 26),
    EMBER_EXI_SUBSTRUCT_OPTION(ApplianceLoadReduction, 0, 1, ApplianceLoadReduction, EmberExiGeneratedApplianceLoadReduction, emberExiApplianceLoadReductionStructDataIndex),
    EMBER_EXI_CH(deviceCategory, BINARY, 255, deviceCategory),
    EMBER_EXI_CH(drProgramMandatory, BOOLEAN, 255, drProgramMandatory),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_CH(loadShiftForward, BOOLEAN, 255, loadShiftForward),
    EMBER_EXI_SUBSTRUCT_OPTION(Offset, 0, 1, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 5, overrideDuration_option),
    EMBER_EXI_SUBSTRUCT_OPTION(SetPoint, 0, 1, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TargetReduction, 0, 1, TargetReduction, EmberExiGeneratedTargetReduction, emberExiTargetReductionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControlList // index 466
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControlList, 4, 0, 1273, 12, 27),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDeviceControl, 0, 255, EndDeviceControl, EmberExiGeneratedEndDeviceControl, emberExiEndDeviceControlStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceList // index 478
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceList, 4, 0, 1273, 12, 28),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDevice, 0, 255, EndDevice, EmberExiGeneratedEndDevice, emberExiEndDeviceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceListLink // index 490
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceListLink, 2, 0, 781, 6, 29),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEvent // index 496
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Event, 4, 3, 1183, 21, 30),
    EMBER_EXI_CH(creationTime, INTEGER, 255, creationTime),
    EMBER_EXI_SUBSTRUCT(EventStatus, 1, 0, EventStatus, EmberExiGeneratedEventStatus, emberExiEventStatusStructDataIndex),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEventStatus // index 517
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EventStatus, 0, 0, 65535, 21, 31),
    EMBER_EXI_CH(currentStatus, UNSIGNED_INTEGER, 255, currentStatus),
    EMBER_EXI_CH(dateTime, INTEGER, 255, dateTime),
    EMBER_EXI_CH(potentiallySuperseded, BOOLEAN, 255, potentiallySuperseded),
    EMBER_EXI_CH(potentiallySupersededTime, INTEGER, 0, potentiallySupersededTime_option),
    EMBER_EXI_CH_STRING(reason, STRING, 0, reason_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileListLink // index 538
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileListLink, 2, 0, 781, 6, 32),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileStatusLink // index 544
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileStatusLink, 1, 0, 757, 6, 33),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFlowReservationRequestListLink // index 550
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FlowReservationRequestListLink, 2, 0, 781, 6, 34),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFlowReservationResponseListLink // index 556
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FlowReservationResponseListLink, 2, 0, 781, 6, 35),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsBase // index 562
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsBase, 1, 0, 1159, 66, 36),
    EMBER_EXI_SUBSTRUCT_OPTION(CustomerAccountListLink, 0, 1, CustomerAccountListLink, EmberExiGeneratedCustomerAccountListLink, emberExiCustomerAccountListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DemandResponseProgramListLink, 0, 1, DemandResponseProgramListLink, EmberExiGeneratedDemandResponseProgramListLink, emberExiDemandResponseProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERProgramListLink, 0, 1, DERProgramListLink, EmberExiGeneratedDERProgramListLink, emberExiDERProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FileListLink, 0, 1, FileListLink, EmberExiGeneratedFileListLink, emberExiFileListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MessagingProgramListLink, 0, 1, MessagingProgramListLink, EmberExiGeneratedMessagingProgramListLink, emberExiMessagingProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PrepaymentListLink, 0, 1, PrepaymentListLink, EmberExiGeneratedPrepaymentListLink, emberExiPrepaymentListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ResponseSetListLink, 0, 1, ResponseSetListLink, EmberExiGeneratedResponseSetListLink, emberExiResponseSetListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TariffProfileListLink, 0, 1, TariffProfileListLink, EmberExiGeneratedTariffProfileListLink, emberExiTariffProfileListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeLink, 0, 1, TimeLink, EmberExiGeneratedTimeLink, emberExiTimeLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(UsagePointListLink, 0, 1, UsagePointListLink, EmberExiGeneratedUsagePointListLink, emberExiUsagePointListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsListLink // index 628
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsListLink, 2, 0, 781, 6, 37),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPAddrListLink // index 634
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPAddrListLink, 2, 0, 781, 6, 38),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterface // index 640
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterface, 1, 0, 1159, 90, 39),
    EMBER_EXI_CH_STRING(ifDescr, STRING, 0, ifDescr_option),
    EMBER_EXI_CH(ifHighSpeed, INTEGER, 0, ifHighSpeed_option),
    EMBER_EXI_CH(ifInBroadcastPkts, INTEGER, 1, ifInBroadcastPkts_option),
    EMBER_EXI_CH(ifIndex, INTEGER, 2, ifIndex_option),
    EMBER_EXI_CH(ifInDiscards, INTEGER, 3, ifInDiscards_option),
    EMBER_EXI_CH(ifInErrors, INTEGER, 4, ifInErrors_option),
    EMBER_EXI_CH(ifInMulticastPkts, INTEGER, 5, ifInMulticastPkts_option),
    EMBER_EXI_CH(ifInOctets, INTEGER, 6, ifInOctets_option),
    EMBER_EXI_CH(ifInUcastPkts, INTEGER, 7, ifInUcastPkts_option),
    EMBER_EXI_CH(ifInUnknownProtos, INTEGER, 8, ifInUnknownProtos_option),
    EMBER_EXI_CH(ifMtu, INTEGER, 9, ifMtu_option),
    EMBER_EXI_CH_STRING(ifName, STRING, 0, ifName_option),
    EMBER_EXI_CH(ifOperStatus, UNSIGNED_INTEGER, 10, ifOperStatus_option),
    EMBER_EXI_CH(ifOutBroadcastPkts, INTEGER, 11, ifOutBroadcastPkts_option),
    EMBER_EXI_CH(ifOutDiscards, INTEGER, 12, ifOutDiscards_option),
    EMBER_EXI_CH(ifOutErrors, INTEGER, 13, ifOutErrors_option),
    EMBER_EXI_CH(ifOutMulticastPkts, INTEGER, 14, ifOutMulticastPkts_option),
    EMBER_EXI_CH(ifOutOctets, INTEGER, 15, ifOutOctets_option),
    EMBER_EXI_CH(ifOutUcastPkts, INTEGER, 16, ifOutUcastPkts_option),
    EMBER_EXI_CH(ifPromiscuousMode, BOOLEAN, 17, ifPromiscuousMode_option),
    EMBER_EXI_CH(ifSpeed, INTEGER, 18, ifSpeed_option),
    EMBER_EXI_CH(ifType, UNSIGNED_INTEGER, 19, ifType_option),
    EMBER_EXI_SUBSTRUCT_OPTION(IPAddrListLink, 0, 1, IPAddrListLink, EmberExiGeneratedIPAddrListLink, emberExiIPAddrListLinkStructDataIndex),
    EMBER_EXI_CH(lastResetTime, INTEGER, 20, lastResetTime_option),
    EMBER_EXI_CH(lastUpdatedTime, INTEGER, 21, lastUpdatedTime_option),
    EMBER_EXI_SUBSTRUCT_OPTION(LLInterfaceListLink, 0, 1, LLInterfaceListLink, EmberExiGeneratedLLInterfaceListLink, emberExiLLInterfaceListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterfaceListLink // index 730
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterfaceListLink, 2, 0, 781, 6, 40),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIdentifiedObject // index 736
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IdentifiedObject, 1, 0, 1159, 15, 41),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 0, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLLInterfaceListLink // index 751
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LLInterfaceListLink, 2, 0, 781, 6, 42),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLink // index 757
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Link, 0, 0, 65535, 9, 43),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedList // index 766
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_List, 0, 0, 1159, 15, 44),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(results, UNSIGNED_INTEGER, 255, results),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedListLink // index 781
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ListLink, 0, 0, 757, 12, 45),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLoadShedAvailabilityLink // index 793
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LoadShedAvailabilityLink, 1, 0, 757, 6, 46),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEvent // index 799
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEvent, 1, 0, 1159, 27, 48),
    EMBER_EXI_CH(createdDateTime, INTEGER, 255, createdDateTime),
    EMBER_EXI_CH(extendedData, INTEGER, 0, extendedData_option),
    EMBER_EXI_CH(functionSet, UNSIGNED_INTEGER, 255, functionSet),
    EMBER_EXI_CH(logEventCode, UNSIGNED_INTEGER, 255, logEventCode),
    EMBER_EXI_CH(logEventID, UNSIGNED_INTEGER, 255, logEventID),
    EMBER_EXI_CH(logEventPEN, INTEGER, 255, logEventPEN),
    EMBER_EXI_CH(profileID, UNSIGNED_INTEGER, 255, profileID),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventList // index 826
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventList, 4, 0, 1273, 12, 49),
    EMBER_EXI_SUBSTRUCT_ARRAY(LogEvent, 0, 255, LogEvent, EmberExiGeneratedLogEvent, emberExiLogEventStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventListLink // index 838
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventListLink, 2, 0, 781, 6, 50),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgram // index 844
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgram, 2, 3, 1258, 24, 51),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveTextMessageListLink, 0, 1, ActiveTextMessageListLink, EmberExiGeneratedActiveTextMessageListLink, emberExiActiveTextMessageListLinkStructDataIndex),
    EMBER_EXI_CH_STRING(locale, STRING, 255, locale),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
    EMBER_EXI_SUBSTRUCT_OPTION(TextMessageListLink, 0, 1, TextMessageListLink, EmberExiGeneratedTextMessageListLink, emberExiTextMessageListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramList // index 868
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramList, 4, 0, 1273, 12, 52),
    EMBER_EXI_SUBSTRUCT_ARRAY(MessagingProgram, 0, 255, MessagingProgram, EmberExiGeneratedMessagingProgram, emberExiMessagingProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramListLink // index 880
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramListLink, 2, 0, 781, 6, 53),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReading // index 886
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReading, 1, 3, 916, 30, 54),
    EMBER_EXI_SUBSTRUCT_OPTION(RateComponentListLink, 0, 1, RateComponentListLink, EmberExiGeneratedRateComponentListLink, emberExiRateComponentListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingLink, 0, 1, ReadingLink, EmberExiGeneratedReadingLink, emberExiReadingLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingSetListLink, 0, 1, ReadingSetListLink, EmberExiGeneratedReadingSetListLink, emberExiReadingSetListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(ReadingTypeLink, 1, 0, ReadingTypeLink, EmberExiGeneratedReadingTypeLink, emberExiReadingTypeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingBase // index 916
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingBase, 1, 3, 736, 6, 55),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingList // index 922
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingList, 4, 0, 1273, 12, 56),
    EMBER_EXI_SUBSTRUCT_ARRAY(MeterReading, 0, 255, MeterReading, EmberExiGeneratedMeterReading, emberExiMeterReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingListLink // index 934
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingListLink, 2, 0, 781, 6, 57),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMirrorUsagePointListLink // index 940
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MirrorUsagePointListLink, 2, 0, 781, 6, 58),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNotification // index 946
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Notification, 1, 1, 1327, 21, 59),
    EMBER_EXI_CH_STRING(newResourceURI, STRING, 0, newResourceURI_option),
    EMBER_EXI_SUBSTRUCT_OPTION(Resource, 0, 1, Resource, EmberExiGeneratedResource, emberExiResourceStructDataIndex),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
    EMBER_EXI_CH_STRING(subscriptionURI, STRING, 255, subscriptionURI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedOffset // index 967
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Offset, 0, 0, 65535, 15, 60),
    EMBER_EXI_CH(coolingOffset, UNSIGNED_INTEGER, 0, coolingOffset_option),
    EMBER_EXI_CH(heatingOffset, UNSIGNED_INTEGER, 1, heatingOffset_option),
    EMBER_EXI_CH(loadAdjustmentPercentageOffset, UNSIGNED_INTEGER, 2, loadAdjustmentPercentageOffset_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerConfiguration // index 982
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerConfiguration, 0, 0, 65535, 12, 63),
    EMBER_EXI_CH(batteryInstallTime, INTEGER, 0, batteryInstallTime_option),
    EMBER_EXI_CH(lowChargeThreshold, INTEGER, 1, lowChargeThreshold_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerStatusLink // index 994
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerStatusLink, 1, 0, 757, 6, 66),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentListLink // index 1000
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentListLink, 2, 0, 781, 6, 67),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPriceResponseCfgListLink // index 1006
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PriceResponseCfgListLink, 2, 0, 781, 6, 68),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRandomizableEvent // index 1012
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RandomizableEvent, 4, 6, 496, 12, 71),
    EMBER_EXI_CH(randomizeDuration, INTEGER, 3, randomizeDuration_option),
    EMBER_EXI_CH(randomizeStart, INTEGER, 4, randomizeStart_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRateComponentListLink // index 1024
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RateComponentListLink, 2, 0, 781, 6, 72),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReading // index 1030
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Reading, 0, 5, 1045, 15, 73),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 4, subscribable_option),
    EMBER_EXI_CH(localID, BINARY, 5, localID_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingBase // index 1045
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingBase, 1, 0, 1159, 24, 74),
    EMBER_EXI_CH(consumptionBlock, UNSIGNED_INTEGER, 0, consumptionBlock_option),
    EMBER_EXI_CH(qualityFlags, BINARY, 1, qualityFlags_option),
    EMBER_EXI_SUBSTRUCT_OPTION(timePeriod, 0, 1, timePeriod, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
    EMBER_EXI_CH(touTier, UNSIGNED_INTEGER, 2, touTier_option),
    EMBER_EXI_CH(value, INTEGER, 3, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingLink // index 1069
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingLink, 1, 0, 757, 6, 75),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingList // index 1075
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingList, 4, 0, 1273, 12, 76),
    EMBER_EXI_SUBSTRUCT_ARRAY(Reading, 0, 255, Reading, EmberExiGeneratedReading, emberExiReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingListLink // index 1087
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingListLink, 2, 0, 781, 6, 77),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSet // index 1093
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSet, 1, 4, 1105, 12, 78),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingListLink, 0, 1, ReadingListLink, EmberExiGeneratedReadingListLink, emberExiReadingListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSetBase // index 1105
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSetBase, 1, 3, 736, 12, 79),
    EMBER_EXI_SUBSTRUCT(timePeriod, 1, 0, timePeriod, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSetList // index 1117
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSetList, 4, 0, 1273, 12, 80),
    EMBER_EXI_SUBSTRUCT_ARRAY(ReadingSet, 0, 255, ReadingSet, EmberExiGeneratedReadingSet, emberExiReadingSetStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSetListLink // index 1129
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSetListLink, 2, 0, 781, 6, 81),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingTypeLink // index 1135
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingTypeLink, 1, 0, 757, 6, 82),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRealEnergy // index 1141
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RealEnergy, 0, 0, 65535, 12, 83),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRegistrationLink // index 1153
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RegistrationLink, 1, 0, 757, 6, 84),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResource // index 1159
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Resource, 0, 0, 65535, 9, 85),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRespondableResource // index 1168
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RespondableResource, 0, 0, 1159, 15, 86),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRespondableSubscribableIdentifiedObject // index 1183
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RespondableSubscribableIdentifiedObject, 0, 0, 1168, 27, 87),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 1, subscribable_option),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 2, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponse // index 1210
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Response, 1, 0, 1159, 18, 88),
    EMBER_EXI_CH(createdDateTime, INTEGER, 0, createdDateTime_option),
    EMBER_EXI_CH(endDeviceLFDI, BINARY, 255, endDeviceLFDI),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 1, status_option),
    EMBER_EXI_CH(subject, BINARY, 255, subject),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponseSetListLink // index 1228
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ResponseSetListLink, 2, 0, 781, 6, 89),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSelfDevice // index 1234
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SelfDevice, 2, 11, 1, 6, 92),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSelfDeviceLink // index 1240
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SelfDeviceLink, 1, 0, 757, 6, 93),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSetPoint // index 1246
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SetPoint, 0, 0, 65535, 12, 95),
    EMBER_EXI_CH(coolingSetpoint, INTEGER, 0, coolingSetpoint_option),
    EMBER_EXI_CH(heatingSetpoint, INTEGER, 1, heatingSetpoint_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableIdentifiedObject // index 1258
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableIdentifiedObject, 2, 0, 1291, 15, 96),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 1, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableList // index 1273
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableList, 0, 0, 1291, 18, 97),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(results, UNSIGNED_INTEGER, 255, results),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableResource // index 1291
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableResource, 0, 0, 1159, 12, 98),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscription // index 1303
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Subscription, 1, 1, 1327, 24, 99),
    EMBER_EXI_SUBSTRUCT_OPTION(Condition, 0, 1, Condition, EmberExiGeneratedCondition, emberExiConditionStructDataIndex),
    EMBER_EXI_CH(encoding, UNSIGNED_INTEGER, 255, encoding),
    EMBER_EXI_CH_STRING(level, STRING, 255, level),
    EMBER_EXI_CH(limit, UNSIGNED_INTEGER, 255, limit),
    EMBER_EXI_CH_STRING(notificationURI, STRING, 255, notificationURI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionBase // index 1327
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionBase, 1, 0, 1159, 9, 100),
    EMBER_EXI_CH_STRING(subscribedResource, STRING, 255, subscribedResource),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionList // index 1336
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionList, 3, 0, 766, 12, 101),
    EMBER_EXI_SUBSTRUCT_ARRAY(Subscription, 0, 255, Subscription, EmberExiGeneratedSubscription, emberExiSubscriptionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionListLink // index 1348
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionListLink, 2, 0, 781, 6, 102),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupportedLocaleListLink // index 1354
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupportedLocaleListLink, 2, 0, 781, 6, 103),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReduction // index 1360
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReduction, 0, 0, 65535, 12, 105),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileListLink // index 1372
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileListLink, 2, 0, 781, 6, 106),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTemperature // index 1378
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Temperature, 0, 0, 65535, 15, 107),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(subject, UNSIGNED_INTEGER, 255, subject),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessage // index 1393
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessage, 4, 6, 496, 15, 108),
    EMBER_EXI_CH_STRING(originator, STRING, 0, originator_option),
    EMBER_EXI_CH(priority, UNSIGNED_INTEGER, 255, priority),
    EMBER_EXI_CH_STRING(textMessage, STRING, 255, textMessage),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageList // index 1408
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageList, 4, 0, 1273, 12, 109),
    EMBER_EXI_SUBSTRUCT_ARRAY(TextMessage, 0, 255, TextMessage, EmberExiGeneratedTextMessage, emberExiTextMessageStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageListLink // index 1420
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageListLink, 2, 0, 781, 6, 110),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextResponse // index 1426
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextResponse, 1, 4, 1210, 6, 111),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTime // index 1432
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Time, 1, 0, 1159, 27, 112),
    EMBER_EXI_CH(currentTime, INTEGER, 255, currentTime),
    EMBER_EXI_CH(dstEndTime, INTEGER, 255, dstEndTime),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartTime, INTEGER, 255, dstStartTime),
    EMBER_EXI_CH(localTime, INTEGER, 0, localTime_option),
    EMBER_EXI_CH(quality, UNSIGNED_INTEGER, 255, quality),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeConfiguration // index 1459
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeConfiguration, 0, 0, 65535, 18, 113),
    EMBER_EXI_CH(dstEndRule, BINARY, 255, dstEndRule),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartRule, BINARY, 255, dstStartRule),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeLink // index 1477
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeLink, 1, 0, 757, 6, 114),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePoint // index 1483
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePoint, 1, 6, 1495, 12, 118),
    EMBER_EXI_SUBSTRUCT_OPTION(MeterReadingListLink, 0, 1, MeterReadingListLink, EmberExiGeneratedMeterReadingListLink, emberExiMeterReadingListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointBase // index 1495
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointBase, 1, 3, 736, 15, 119),
    EMBER_EXI_CH(roleFlags, BINARY, 255, roleFlags),
    EMBER_EXI_CH(serviceCategoryKind, UNSIGNED_INTEGER, 255, serviceCategoryKind),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointList // index 1510
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointList, 4, 0, 1273, 12, 120),
    EMBER_EXI_SUBSTRUCT_ARRAY(UsagePoint, 0, 255, UsagePoint, EmberExiGeneratedUsagePoint, emberExiUsagePointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointListLink // index 1522
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointListLink, 2, 0, 781, 6, 121),
#undef EMBER_EXI_STRUCT

    EMBER_EXI_QNAME_NONE // terminator

};



void emberExiPrintStructAbstractDevice(EmberExiGeneratedAbstractDevice *data)
{
  emExiPrintStruct(emberExiAbstractDeviceStructData,
                   (int8u *) data,
                   0,
                   "AbstractDevice",
                   emberExiQnames);
}


void emberExiToXmlStructAbstractDevice(EmberExiGeneratedAbstractDevice *data) {
  EXI_DEBUG1("Start to XML: AbstractDevice\n");
  emberExiPrintfLine("<AbstractDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
  emberExiPrintfLine("</AbstractDevice>");
  EXI_DEBUG1("End to XML: AbstractDevice\n");
}




void emberExiPrintStructActivePower(EmberExiGeneratedActivePower *data)
{
  emExiPrintStruct(emberExiActivePowerStructData,
                   (int8u *) data,
                   0,
                   "ActivePower",
                   emberExiQnames);
}


void emberExiToXmlStructActivePower(EmberExiGeneratedActivePower *data) {
  EXI_DEBUG1("Start to XML: ActivePower\n");
  emberExiPrintfLine("<ActivePower");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</ActivePower>");
  EXI_DEBUG1("End to XML: ActivePower\n");
}




void emberExiPrintStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data)
{
  emExiPrintStruct(emberExiActiveTextMessageListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveTextMessageListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveTextMessageListLink\n");
  emberExiPrintfLine("<ActiveTextMessageListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveTextMessageListLink>");
  EXI_DEBUG1("End to XML: ActiveTextMessageListLink\n");
}




void emberExiPrintStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data)
{
  emExiPrintStruct(emberExiApplianceLoadReductionStructData,
                   (int8u *) data,
                   0,
                   "ApplianceLoadReduction",
                   emberExiQnames);
}


void emberExiToXmlStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data) {
  EXI_DEBUG1("Start to XML: ApplianceLoadReduction\n");
  emberExiPrintfLine("<ApplianceLoadReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("</ApplianceLoadReduction>");
  EXI_DEBUG1("End to XML: ApplianceLoadReduction\n");
}




void emberExiPrintStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data)
{
  emExiPrintStruct(emberExiAppliedTargetReductionStructData,
                   (int8u *) data,
                   0,
                   "AppliedTargetReduction",
                   emberExiQnames);
}


void emberExiToXmlStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data) {
  EXI_DEBUG1("Start to XML: AppliedTargetReduction\n");
  emberExiPrintfLine("<AppliedTargetReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</AppliedTargetReduction>");
  EXI_DEBUG1("End to XML: AppliedTargetReduction\n");
}




void emberExiPrintStructCondition(EmberExiGeneratedCondition *data)
{
  emExiPrintStruct(emberExiConditionStructData,
                   (int8u *) data,
                   0,
                   "Condition",
                   emberExiQnames);
}


void emberExiToXmlStructCondition(EmberExiGeneratedCondition *data) {
  EXI_DEBUG1("Start to XML: Condition\n");
  emberExiPrintfLine("<Condition");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <attributeIdentifier>%d</attributeIdentifier>", data->attributeIdentifier);
  emberExiPrintfLine("  <lowerThreshold>%d</lowerThreshold>", data->lowerThreshold);
  emberExiPrintfLine("  <upperThreshold>%d</upperThreshold>", data->upperThreshold);
  emberExiPrintfLine("</Condition>");
  EXI_DEBUG1("End to XML: Condition\n");
}




void emberExiPrintStructConfiguration(EmberExiGeneratedConfiguration *data)
{
  emExiPrintStruct(emberExiConfigurationStructData,
                   (int8u *) data,
                   0,
                   "Configuration",
                   emberExiQnames);
}


void emberExiToXmlStructConfiguration(EmberExiGeneratedConfiguration *data) {
  EXI_DEBUG1("Start to XML: Configuration\n");
  emberExiPrintfLine("<Configuration");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentLocale>%s</currentLocale>", data->currentLocale);
    if ( data->PowerConfiguration_option != NULL )
      emberExiToXmlStructPowerConfiguration((data->PowerConfiguration_option));
    if ( data->PriceResponseCfgListLink_option != NULL )
      emberExiToXmlStructPriceResponseCfgListLink((data->PriceResponseCfgListLink_option));
    if ( data->TimeConfiguration_option != NULL )
      emberExiToXmlStructTimeConfiguration((data->TimeConfiguration_option));
  emberExiPrintfLine("  <userDeviceName>%s</userDeviceName>", data->userDeviceName);
  emberExiPrintfLine("</Configuration>");
  EXI_DEBUG1("End to XML: Configuration\n");
}




void emberExiPrintStructConfigurationLink(EmberExiGeneratedConfigurationLink *data)
{
  emExiPrintStruct(emberExiConfigurationLinkStructData,
                   (int8u *) data,
                   0,
                   "ConfigurationLink",
                   emberExiQnames);
}


void emberExiToXmlStructConfigurationLink(EmberExiGeneratedConfigurationLink *data) {
  EXI_DEBUG1("Start to XML: ConfigurationLink\n");
  emberExiPrintfLine("<ConfigurationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ConfigurationLink>");
  EXI_DEBUG1("End to XML: ConfigurationLink\n");
}




void emberExiPrintStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data)
{
  emExiPrintStruct(emberExiCustomerAccountListLinkStructData,
                   (int8u *) data,
                   0,
                   "CustomerAccountListLink",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data) {
  EXI_DEBUG1("Start to XML: CustomerAccountListLink\n");
  emberExiPrintfLine("<CustomerAccountListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</CustomerAccountListLink>");
  EXI_DEBUG1("End to XML: CustomerAccountListLink\n");
}




void emberExiPrintStructDERListLink(EmberExiGeneratedDERListLink *data)
{
  emExiPrintStruct(emberExiDERListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERListLink(EmberExiGeneratedDERListLink *data) {
  EXI_DEBUG1("Start to XML: DERListLink\n");
  emberExiPrintfLine("<DERListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERListLink>");
  EXI_DEBUG1("End to XML: DERListLink\n");
}




void emberExiPrintStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data)
{
  emExiPrintStruct(emberExiDERProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data) {
  EXI_DEBUG1("Start to XML: DERProgramListLink\n");
  emberExiPrintfLine("<DERProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERProgramListLink>");
  EXI_DEBUG1("End to XML: DERProgramListLink\n");
}




void emberExiPrintStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data)
{
  emExiPrintStruct(emberExiDRLCCapabilitiesStructData,
                   (int8u *) data,
                   0,
                   "DRLCCapabilities",
                   emberExiQnames);
}


void emberExiToXmlStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data) {
  EXI_DEBUG1("Start to XML: DRLCCapabilities\n");
  emberExiPrintfLine("<DRLCCapabilities");
  emberExiPrintfLine(">");
    if ( data->averageEnergy != NULL )
      emberExiToXmlStructRealEnergy((data->averageEnergy));
    if ( data->maxDemand != NULL )
      emberExiToXmlStructActivePower((data->maxDemand));
  emberExiPrintfLine("  <optionsImplemented>");
  { int16u i;
    for ( i=0; i<data->optionsImplemented.length; i++ )
      emberExiPrintfLine("%2x", data->optionsImplemented.bytes[i]);
  }
  emberExiPrintfLine("</optionsImplemented>");
  emberExiPrintfLine("</DRLCCapabilities>");
  EXI_DEBUG1("End to XML: DRLCCapabilities\n");
}




void emberExiPrintStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data)
{
  emExiPrintStruct(emberExiDateTimeIntervalStructData,
                   (int8u *) data,
                   0,
                   "DateTimeInterval",
                   emberExiQnames);
}


void emberExiToXmlStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data) {
  EXI_DEBUG1("Start to XML: DateTimeInterval\n");
  emberExiPrintfLine("<DateTimeInterval");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <duration>%d</duration>", data->duration);
  emberExiPrintfLine("  <start>%d</start>", data->start);
  emberExiPrintfLine("</DateTimeInterval>");
  EXI_DEBUG1("End to XML: DateTimeInterval\n");
}




void emberExiPrintStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgramListLink\n");
  emberExiPrintfLine("<DemandResponseProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DemandResponseProgramListLink>");
  EXI_DEBUG1("End to XML: DemandResponseProgramListLink\n");
}




void emberExiPrintStructDeviceCapability(EmberExiGeneratedDeviceCapability *data)
{
  emExiPrintStruct(emberExiDeviceCapabilityStructData,
                   (int8u *) data,
                   0,
                   "DeviceCapability",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceCapability(EmberExiGeneratedDeviceCapability *data) {
  EXI_DEBUG1("Start to XML: DeviceCapability\n");
  emberExiPrintfLine("<DeviceCapability");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      emberExiToXmlStructEndDeviceListLink((data->EndDeviceListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      emberExiToXmlStructMirrorUsagePointListLink((data->MirrorUsagePointListLink_option));
    if ( data->SelfDeviceLink_option != NULL )
      emberExiToXmlStructSelfDeviceLink((data->SelfDeviceLink_option));
  emberExiPrintfLine("</DeviceCapability>");
  EXI_DEBUG1("End to XML: DeviceCapability\n");
}




void emberExiPrintStructDeviceInformation(EmberExiGeneratedDeviceInformation *data)
{
  emExiPrintStruct(emberExiDeviceInformationStructData,
                   (int8u *) data,
                   0,
                   "DeviceInformation",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceInformation(EmberExiGeneratedDeviceInformation *data) {
  EXI_DEBUG1("Start to XML: DeviceInformation\n");
  emberExiPrintfLine("<DeviceInformation");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->DRLCCapabilities_option != NULL )
      emberExiToXmlStructDRLCCapabilities((data->DRLCCapabilities_option));
  emberExiPrintfLine("  <functionsImplemented>");
  { int16u i;
    for ( i=0; i<data->functionsImplemented_option.length; i++ )
      emberExiPrintfLine("%2x", data->functionsImplemented_option.bytes[i]);
  }
  emberExiPrintfLine("</functionsImplemented>");
  emberExiPrintfLine("  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI.length; i++ )
      emberExiPrintfLine("%2x", data->lFDI.bytes[i]);
  }
  emberExiPrintfLine("</lFDI>");
  emberExiPrintfLine("  <mfDate>%d</mfDate>", data->mfDate);
  emberExiPrintfLine("  <mfHwVer>%s</mfHwVer>", data->mfHwVer);
  emberExiPrintfLine("  <mfID>%d</mfID>", data->mfID);
  emberExiPrintfLine("  <mfInfo>%s</mfInfo>", data->mfInfo_option);
  emberExiPrintfLine("  <mfModel>%s</mfModel>", data->mfModel);
  emberExiPrintfLine("  <mfSerNum>%s</mfSerNum>", data->mfSerNum);
  emberExiPrintfLine("  <primaryPower>%d</primaryPower>", data->primaryPower);
  emberExiPrintfLine("  <secondaryPower>%d</secondaryPower>", data->secondaryPower);
    if ( data->SupportedLocaleListLink_option != NULL )
      emberExiToXmlStructSupportedLocaleListLink((data->SupportedLocaleListLink_option));
  emberExiPrintfLine("  <swActTime>%d</swActTime>", data->swActTime);
  emberExiPrintfLine("  <swVer>%s</swVer>", data->swVer);
  emberExiPrintfLine("</DeviceInformation>");
  EXI_DEBUG1("End to XML: DeviceInformation\n");
}




void emberExiPrintStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data)
{
  emExiPrintStruct(emberExiDeviceInformationLinkStructData,
                   (int8u *) data,
                   0,
                   "DeviceInformationLink",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data) {
  EXI_DEBUG1("Start to XML: DeviceInformationLink\n");
  emberExiPrintfLine("<DeviceInformationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DeviceInformationLink>");
  EXI_DEBUG1("End to XML: DeviceInformationLink\n");
}




void emberExiPrintStructDeviceStatus(EmberExiGeneratedDeviceStatus *data)
{
  emExiPrintStruct(emberExiDeviceStatusStructData,
                   (int8u *) data,
                   0,
                   "DeviceStatus",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceStatus(EmberExiGeneratedDeviceStatus *data) {
  EXI_DEBUG1("Start to XML: DeviceStatus\n");
  emberExiPrintfLine("<DeviceStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <changedTime>%d</changedTime>", data->changedTime);
  emberExiPrintfLine("  <onCount>%d</onCount>", data->onCount_option);
  emberExiPrintfLine("  <opState>%d</opState>", data->opState_option);
  emberExiPrintfLine("  <opTime>%d</opTime>", data->opTime_option);
  { int16u i;
    for ( i=0; i<data->Temperature_count; i++ )
    if ( data->Temperature_array != NULL )
      emberExiToXmlStructTemperature(&(data->Temperature_array[i]));
  }
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
  emberExiPrintfLine("</DeviceStatus>");
  EXI_DEBUG1("End to XML: DeviceStatus\n");
}




void emberExiPrintStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data)
{
  emExiPrintStruct(emberExiDeviceStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "DeviceStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data) {
  EXI_DEBUG1("Start to XML: DeviceStatusLink\n");
  emberExiPrintfLine("<DeviceStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DeviceStatusLink>");
  EXI_DEBUG1("End to XML: DeviceStatusLink\n");
}




void emberExiPrintStructDrResponse(EmberExiGeneratedDrResponse *data)
{
  emExiPrintStruct(emberExiDrResponseStructData,
                   (int8u *) data,
                   0,
                   "DrResponse",
                   emberExiQnames);
}


void emberExiToXmlStructDrResponse(EmberExiGeneratedDrResponse *data) {
  EXI_DEBUG1("Start to XML: DrResponse\n");
  emberExiPrintfLine("<DrResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->ApplianceLoadReduction_option != NULL )
      emberExiToXmlStructApplianceLoadReduction((data->ApplianceLoadReduction_option));
    if ( data->AppliedTargetReduction_option != NULL )
      emberExiToXmlStructAppliedTargetReduction((data->AppliedTargetReduction_option));
    if ( data->DutyCycle_option != NULL )
      emberExiToXmlStructDutyCycle((data->DutyCycle_option));
    if ( data->Offset_option != NULL )
      emberExiToXmlStructOffset((data->Offset_option));
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      emberExiToXmlStructSetPoint((data->SetPoint_option));
  emberExiPrintfLine("</DrResponse>");
  EXI_DEBUG1("End to XML: DrResponse\n");
}




void emberExiPrintStructDutyCycle(EmberExiGeneratedDutyCycle *data)
{
  emExiPrintStruct(emberExiDutyCycleStructData,
                   (int8u *) data,
                   0,
                   "DutyCycle",
                   emberExiQnames);
}


void emberExiToXmlStructDutyCycle(EmberExiGeneratedDutyCycle *data) {
  EXI_DEBUG1("Start to XML: DutyCycle\n");
  emberExiPrintfLine("<DutyCycle");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <normalValue>%d</normalValue>", data->normalValue);
  emberExiPrintfLine("</DutyCycle>");
  EXI_DEBUG1("End to XML: DutyCycle\n");
}




void emberExiPrintStructEndDevice(EmberExiGeneratedEndDevice *data)
{
  emExiPrintStruct(emberExiEndDeviceStructData,
                   (int8u *) data,
                   0,
                   "EndDevice",
                   emberExiQnames);
}


void emberExiToXmlStructEndDevice(EmberExiGeneratedEndDevice *data) {
  EXI_DEBUG1("Start to XML: EndDevice\n");
  emberExiPrintfLine("<EndDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
    if ( data->FlowReservationRequestListLink_option != NULL )
      emberExiToXmlStructFlowReservationRequestListLink((data->FlowReservationRequestListLink_option));
    if ( data->FlowReservationResponseListLink_option != NULL )
      emberExiToXmlStructFlowReservationResponseListLink((data->FlowReservationResponseListLink_option));
    if ( data->FunctionSetAssignmentsListLink_option != NULL )
      emberExiToXmlStructFunctionSetAssignmentsListLink((data->FunctionSetAssignmentsListLink_option));
    if ( data->RegistrationLink_option != NULL )
      emberExiToXmlStructRegistrationLink((data->RegistrationLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      emberExiToXmlStructSubscriptionListLink((data->SubscriptionListLink_option));
  emberExiPrintfLine("</EndDevice>");
  EXI_DEBUG1("End to XML: EndDevice\n");
}




void emberExiPrintStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data)
{
  emExiPrintStruct(emberExiEndDeviceControlStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControl",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControl\n");
  emberExiPrintfLine("<EndDeviceControl");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->ApplianceLoadReduction_option != NULL )
      emberExiToXmlStructApplianceLoadReduction((data->ApplianceLoadReduction_option));
  emberExiPrintfLine("  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      emberExiPrintfLine("%2x", data->deviceCategory.bytes[i]);
  }
  emberExiPrintfLine("</deviceCategory>");
  emberExiPrintfLine("  <drProgramMandatory>%d</drProgramMandatory>", data->drProgramMandatory);
    if ( data->DutyCycle_option != NULL )
      emberExiToXmlStructDutyCycle((data->DutyCycle_option));
  emberExiPrintfLine("  <loadShiftForward>%d</loadShiftForward>", data->loadShiftForward);
    if ( data->Offset_option != NULL )
      emberExiToXmlStructOffset((data->Offset_option));
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      emberExiToXmlStructSetPoint((data->SetPoint_option));
    if ( data->TargetReduction_option != NULL )
      emberExiToXmlStructTargetReduction((data->TargetReduction_option));
  emberExiPrintfLine("</EndDeviceControl>");
  EXI_DEBUG1("End to XML: EndDeviceControl\n");
}




void emberExiPrintStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data)
{
  emExiPrintStruct(emberExiEndDeviceControlListStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControlList",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControlList\n");
  emberExiPrintfLine("<EndDeviceControlList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->EndDeviceControl_count; i++ )
    if ( data->EndDeviceControl_array != NULL )
      emberExiToXmlStructEndDeviceControl(&(data->EndDeviceControl_array[i]));
  }
  emberExiPrintfLine("</EndDeviceControlList>");
  EXI_DEBUG1("End to XML: EndDeviceControlList\n");
}




void emberExiPrintStructEndDeviceList(EmberExiGeneratedEndDeviceList *data)
{
  emExiPrintStruct(emberExiEndDeviceListStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceList",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceList(EmberExiGeneratedEndDeviceList *data) {
  EXI_DEBUG1("Start to XML: EndDeviceList\n");
  emberExiPrintfLine("<EndDeviceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->EndDevice_count; i++ )
    if ( data->EndDevice_array != NULL )
      emberExiToXmlStructEndDevice(&(data->EndDevice_array[i]));
  }
  emberExiPrintfLine("</EndDeviceList>");
  EXI_DEBUG1("End to XML: EndDeviceList\n");
}




void emberExiPrintStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data)
{
  emExiPrintStruct(emberExiEndDeviceListLinkStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data) {
  EXI_DEBUG1("Start to XML: EndDeviceListLink\n");
  emberExiPrintfLine("<EndDeviceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</EndDeviceListLink>");
  EXI_DEBUG1("End to XML: EndDeviceListLink\n");
}




void emberExiPrintStructEvent(EmberExiGeneratedEvent *data)
{
  emExiPrintStruct(emberExiEventStructData,
                   (int8u *) data,
                   0,
                   "Event",
                   emberExiQnames);
}


void emberExiToXmlStructEvent(EmberExiGeneratedEvent *data) {
  EXI_DEBUG1("Start to XML: Event\n");
  emberExiPrintfLine("<Event");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("</Event>");
  EXI_DEBUG1("End to XML: Event\n");
}




void emberExiPrintStructEventStatus(EmberExiGeneratedEventStatus *data)
{
  emExiPrintStruct(emberExiEventStatusStructData,
                   (int8u *) data,
                   0,
                   "EventStatus",
                   emberExiQnames);
}


void emberExiToXmlStructEventStatus(EmberExiGeneratedEventStatus *data) {
  EXI_DEBUG1("Start to XML: EventStatus\n");
  emberExiPrintfLine("<EventStatus");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentStatus>%d</currentStatus>", data->currentStatus);
  emberExiPrintfLine("  <dateTime>%d</dateTime>", data->dateTime);
  emberExiPrintfLine("  <potentiallySuperseded>%d</potentiallySuperseded>", data->potentiallySuperseded);
  emberExiPrintfLine("  <potentiallySupersededTime>%d</potentiallySupersededTime>", data->potentiallySupersededTime_option);
  emberExiPrintfLine("  <reason>%s</reason>", data->reason_option);
  emberExiPrintfLine("</EventStatus>");
  EXI_DEBUG1("End to XML: EventStatus\n");
}




void emberExiPrintStructFileListLink(EmberExiGeneratedFileListLink *data)
{
  emExiPrintStruct(emberExiFileListLinkStructData,
                   (int8u *) data,
                   0,
                   "FileListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFileListLink(EmberExiGeneratedFileListLink *data) {
  EXI_DEBUG1("Start to XML: FileListLink\n");
  emberExiPrintfLine("<FileListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FileListLink>");
  EXI_DEBUG1("End to XML: FileListLink\n");
}




void emberExiPrintStructFileStatusLink(EmberExiGeneratedFileStatusLink *data)
{
  emExiPrintStruct(emberExiFileStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "FileStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructFileStatusLink(EmberExiGeneratedFileStatusLink *data) {
  EXI_DEBUG1("Start to XML: FileStatusLink\n");
  emberExiPrintfLine("<FileStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FileStatusLink>");
  EXI_DEBUG1("End to XML: FileStatusLink\n");
}




void emberExiPrintStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data)
{
  emExiPrintStruct(emberExiFlowReservationRequestListLinkStructData,
                   (int8u *) data,
                   0,
                   "FlowReservationRequestListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data) {
  EXI_DEBUG1("Start to XML: FlowReservationRequestListLink\n");
  emberExiPrintfLine("<FlowReservationRequestListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FlowReservationRequestListLink>");
  EXI_DEBUG1("End to XML: FlowReservationRequestListLink\n");
}




void emberExiPrintStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data)
{
  emExiPrintStruct(emberExiFlowReservationResponseListLinkStructData,
                   (int8u *) data,
                   0,
                   "FlowReservationResponseListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data) {
  EXI_DEBUG1("Start to XML: FlowReservationResponseListLink\n");
  emberExiPrintfLine("<FlowReservationResponseListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FlowReservationResponseListLink>");
  EXI_DEBUG1("End to XML: FlowReservationResponseListLink\n");
}




void emberExiPrintStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsBaseStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsBase",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsBase\n");
  emberExiPrintfLine("<FunctionSetAssignmentsBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
  emberExiPrintfLine("</FunctionSetAssignmentsBase>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsBase\n");
}




void emberExiPrintStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsListLinkStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsListLink\n");
  emberExiPrintfLine("<FunctionSetAssignmentsListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FunctionSetAssignmentsListLink>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsListLink\n");
}




void emberExiPrintStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data)
{
  emExiPrintStruct(emberExiIPAddrListLinkStructData,
                   (int8u *) data,
                   0,
                   "IPAddrListLink",
                   emberExiQnames);
}


void emberExiToXmlStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data) {
  EXI_DEBUG1("Start to XML: IPAddrListLink\n");
  emberExiPrintfLine("<IPAddrListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</IPAddrListLink>");
  EXI_DEBUG1("End to XML: IPAddrListLink\n");
}




void emberExiPrintStructIPInterface(EmberExiGeneratedIPInterface *data)
{
  emExiPrintStruct(emberExiIPInterfaceStructData,
                   (int8u *) data,
                   0,
                   "IPInterface",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterface(EmberExiGeneratedIPInterface *data) {
  EXI_DEBUG1("Start to XML: IPInterface\n");
  emberExiPrintfLine("<IPInterface");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <ifDescr>%s</ifDescr>", data->ifDescr_option);
  emberExiPrintfLine("  <ifHighSpeed>%d</ifHighSpeed>", data->ifHighSpeed_option);
  emberExiPrintfLine("  <ifInBroadcastPkts>%d</ifInBroadcastPkts>", data->ifInBroadcastPkts_option);
  emberExiPrintfLine("  <ifIndex>%d</ifIndex>", data->ifIndex_option);
  emberExiPrintfLine("  <ifInDiscards>%d</ifInDiscards>", data->ifInDiscards_option);
  emberExiPrintfLine("  <ifInErrors>%d</ifInErrors>", data->ifInErrors_option);
  emberExiPrintfLine("  <ifInMulticastPkts>%d</ifInMulticastPkts>", data->ifInMulticastPkts_option);
  emberExiPrintfLine("  <ifInOctets>%d</ifInOctets>", data->ifInOctets_option);
  emberExiPrintfLine("  <ifInUcastPkts>%d</ifInUcastPkts>", data->ifInUcastPkts_option);
  emberExiPrintfLine("  <ifInUnknownProtos>%d</ifInUnknownProtos>", data->ifInUnknownProtos_option);
  emberExiPrintfLine("  <ifMtu>%d</ifMtu>", data->ifMtu_option);
  emberExiPrintfLine("  <ifName>%s</ifName>", data->ifName_option);
  emberExiPrintfLine("  <ifOperStatus>%d</ifOperStatus>", data->ifOperStatus_option);
  emberExiPrintfLine("  <ifOutBroadcastPkts>%d</ifOutBroadcastPkts>", data->ifOutBroadcastPkts_option);
  emberExiPrintfLine("  <ifOutDiscards>%d</ifOutDiscards>", data->ifOutDiscards_option);
  emberExiPrintfLine("  <ifOutErrors>%d</ifOutErrors>", data->ifOutErrors_option);
  emberExiPrintfLine("  <ifOutMulticastPkts>%d</ifOutMulticastPkts>", data->ifOutMulticastPkts_option);
  emberExiPrintfLine("  <ifOutOctets>%d</ifOutOctets>", data->ifOutOctets_option);
  emberExiPrintfLine("  <ifOutUcastPkts>%d</ifOutUcastPkts>", data->ifOutUcastPkts_option);
  emberExiPrintfLine("  <ifPromiscuousMode>%d</ifPromiscuousMode>", data->ifPromiscuousMode_option);
  emberExiPrintfLine("  <ifSpeed>%d</ifSpeed>", data->ifSpeed_option);
  emberExiPrintfLine("  <ifType>%d</ifType>", data->ifType_option);
    if ( data->IPAddrListLink_option != NULL )
      emberExiToXmlStructIPAddrListLink((data->IPAddrListLink_option));
  emberExiPrintfLine("  <lastResetTime>%d</lastResetTime>", data->lastResetTime_option);
  emberExiPrintfLine("  <lastUpdatedTime>%d</lastUpdatedTime>", data->lastUpdatedTime_option);
    if ( data->LLInterfaceListLink_option != NULL )
      emberExiToXmlStructLLInterfaceListLink((data->LLInterfaceListLink_option));
  emberExiPrintfLine("</IPInterface>");
  EXI_DEBUG1("End to XML: IPInterface\n");
}




void emberExiPrintStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data)
{
  emExiPrintStruct(emberExiIPInterfaceListLinkStructData,
                   (int8u *) data,
                   0,
                   "IPInterfaceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data) {
  EXI_DEBUG1("Start to XML: IPInterfaceListLink\n");
  emberExiPrintfLine("<IPInterfaceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</IPInterfaceListLink>");
  EXI_DEBUG1("End to XML: IPInterfaceListLink\n");
}




void emberExiPrintStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data)
{
  emExiPrintStruct(emberExiIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "IdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: IdentifiedObject\n");
  emberExiPrintfLine("<IdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</IdentifiedObject>");
  EXI_DEBUG1("End to XML: IdentifiedObject\n");
}




void emberExiPrintStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data)
{
  emExiPrintStruct(emberExiLLInterfaceListLinkStructData,
                   (int8u *) data,
                   0,
                   "LLInterfaceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data) {
  EXI_DEBUG1("Start to XML: LLInterfaceListLink\n");
  emberExiPrintfLine("<LLInterfaceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LLInterfaceListLink>");
  EXI_DEBUG1("End to XML: LLInterfaceListLink\n");
}




void emberExiPrintStructLink(EmberExiGeneratedLink *data)
{
  emExiPrintStruct(emberExiLinkStructData,
                   (int8u *) data,
                   0,
                   "Link",
                   emberExiQnames);
}


void emberExiToXmlStructLink(EmberExiGeneratedLink *data) {
  EXI_DEBUG1("Start to XML: Link\n");
  emberExiPrintfLine("<Link");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</Link>");
  EXI_DEBUG1("End to XML: Link\n");
}




void emberExiPrintStructList(EmberExiGeneratedList *data)
{
  emExiPrintStruct(emberExiListStructData,
                   (int8u *) data,
                   0,
                   "List",
                   emberExiQnames);
}


void emberExiToXmlStructList(EmberExiGeneratedList *data) {
  EXI_DEBUG1("Start to XML: List\n");
  emberExiPrintfLine("<List");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</List>");
  EXI_DEBUG1("End to XML: List\n");
}




void emberExiPrintStructListLink(EmberExiGeneratedListLink *data)
{
  emExiPrintStruct(emberExiListLinkStructData,
                   (int8u *) data,
                   0,
                   "ListLink",
                   emberExiQnames);
}


void emberExiToXmlStructListLink(EmberExiGeneratedListLink *data) {
  EXI_DEBUG1("Start to XML: ListLink\n");
  emberExiPrintfLine("<ListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ListLink>");
  EXI_DEBUG1("End to XML: ListLink\n");
}




void emberExiPrintStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data)
{
  emExiPrintStruct(emberExiLoadShedAvailabilityLinkStructData,
                   (int8u *) data,
                   0,
                   "LoadShedAvailabilityLink",
                   emberExiQnames);
}


void emberExiToXmlStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data) {
  EXI_DEBUG1("Start to XML: LoadShedAvailabilityLink\n");
  emberExiPrintfLine("<LoadShedAvailabilityLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LoadShedAvailabilityLink>");
  EXI_DEBUG1("End to XML: LoadShedAvailabilityLink\n");
}




void emberExiPrintStructLogEvent(EmberExiGeneratedLogEvent *data)
{
  emExiPrintStruct(emberExiLogEventStructData,
                   (int8u *) data,
                   0,
                   "LogEvent",
                   emberExiQnames);
}


void emberExiToXmlStructLogEvent(EmberExiGeneratedLogEvent *data) {
  EXI_DEBUG1("Start to XML: LogEvent\n");
  emberExiPrintfLine("<LogEvent");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  emberExiPrintfLine("  <extendedData>%d</extendedData>", data->extendedData_option);
  emberExiPrintfLine("  <functionSet>%d</functionSet>", data->functionSet);
  emberExiPrintfLine("  <logEventCode>%d</logEventCode>", data->logEventCode);
  emberExiPrintfLine("  <logEventID>%d</logEventID>", data->logEventID);
  emberExiPrintfLine("  <logEventPEN>%d</logEventPEN>", data->logEventPEN);
  emberExiPrintfLine("  <profileID>%d</profileID>", data->profileID);
  emberExiPrintfLine("</LogEvent>");
  EXI_DEBUG1("End to XML: LogEvent\n");
}




void emberExiPrintStructLogEventList(EmberExiGeneratedLogEventList *data)
{
  emExiPrintStruct(emberExiLogEventListStructData,
                   (int8u *) data,
                   0,
                   "LogEventList",
                   emberExiQnames);
}


void emberExiToXmlStructLogEventList(EmberExiGeneratedLogEventList *data) {
  EXI_DEBUG1("Start to XML: LogEventList\n");
  emberExiPrintfLine("<LogEventList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->LogEvent_count; i++ )
    if ( data->LogEvent_array != NULL )
      emberExiToXmlStructLogEvent(&(data->LogEvent_array[i]));
  }
  emberExiPrintfLine("</LogEventList>");
  EXI_DEBUG1("End to XML: LogEventList\n");
}




void emberExiPrintStructLogEventListLink(EmberExiGeneratedLogEventListLink *data)
{
  emExiPrintStruct(emberExiLogEventListLinkStructData,
                   (int8u *) data,
                   0,
                   "LogEventListLink",
                   emberExiQnames);
}


void emberExiToXmlStructLogEventListLink(EmberExiGeneratedLogEventListLink *data) {
  EXI_DEBUG1("Start to XML: LogEventListLink\n");
  emberExiPrintfLine("<LogEventListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LogEventListLink>");
  EXI_DEBUG1("End to XML: LogEventListLink\n");
}




void emberExiPrintStructMessagingProgram(EmberExiGeneratedMessagingProgram *data)
{
  emExiPrintStruct(emberExiMessagingProgramStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgram",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgram(EmberExiGeneratedMessagingProgram *data) {
  EXI_DEBUG1("Start to XML: MessagingProgram\n");
  emberExiPrintfLine("<MessagingProgram");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      emberExiToXmlStructActiveTextMessageListLink((data->ActiveTextMessageListLink_option));
  emberExiPrintfLine("  <locale>%s</locale>", data->locale);
  emberExiPrintfLine("  <primacy>%d</primacy>", data->primacy);
    if ( data->TextMessageListLink_option != NULL )
      emberExiToXmlStructTextMessageListLink((data->TextMessageListLink_option));
  emberExiPrintfLine("</MessagingProgram>");
  EXI_DEBUG1("End to XML: MessagingProgram\n");
}




void emberExiPrintStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data)
{
  emExiPrintStruct(emberExiMessagingProgramListStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgramList",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data) {
  EXI_DEBUG1("Start to XML: MessagingProgramList\n");
  emberExiPrintfLine("<MessagingProgramList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->MessagingProgram_count; i++ )
    if ( data->MessagingProgram_array != NULL )
      emberExiToXmlStructMessagingProgram(&(data->MessagingProgram_array[i]));
  }
  emberExiPrintfLine("</MessagingProgramList>");
  EXI_DEBUG1("End to XML: MessagingProgramList\n");
}




void emberExiPrintStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data)
{
  emExiPrintStruct(emberExiMessagingProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data) {
  EXI_DEBUG1("Start to XML: MessagingProgramListLink\n");
  emberExiPrintfLine("<MessagingProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MessagingProgramListLink>");
  EXI_DEBUG1("End to XML: MessagingProgramListLink\n");
}




void emberExiPrintStructMeterReading(EmberExiGeneratedMeterReading *data)
{
  emExiPrintStruct(emberExiMeterReadingStructData,
                   (int8u *) data,
                   0,
                   "MeterReading",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReading(EmberExiGeneratedMeterReading *data) {
  EXI_DEBUG1("Start to XML: MeterReading\n");
  emberExiPrintfLine("<MeterReading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->RateComponentListLink_option != NULL )
      emberExiToXmlStructRateComponentListLink((data->RateComponentListLink_option));
    if ( data->ReadingLink_option != NULL )
      emberExiToXmlStructReadingLink((data->ReadingLink_option));
    if ( data->ReadingSetListLink_option != NULL )
      emberExiToXmlStructReadingSetListLink((data->ReadingSetListLink_option));
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
  emberExiPrintfLine("</MeterReading>");
  EXI_DEBUG1("End to XML: MeterReading\n");
}




void emberExiPrintStructMeterReadingBase(EmberExiGeneratedMeterReadingBase *data)
{
  emExiPrintStruct(emberExiMeterReadingBaseStructData,
                   (int8u *) data,
                   0,
                   "MeterReadingBase",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReadingBase(EmberExiGeneratedMeterReadingBase *data) {
  EXI_DEBUG1("Start to XML: MeterReadingBase\n");
  emberExiPrintfLine("<MeterReadingBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</MeterReadingBase>");
  EXI_DEBUG1("End to XML: MeterReadingBase\n");
}




void emberExiPrintStructMeterReadingList(EmberExiGeneratedMeterReadingList *data)
{
  emExiPrintStruct(emberExiMeterReadingListStructData,
                   (int8u *) data,
                   0,
                   "MeterReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReadingList(EmberExiGeneratedMeterReadingList *data) {
  EXI_DEBUG1("Start to XML: MeterReadingList\n");
  emberExiPrintfLine("<MeterReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->MeterReading_count; i++ )
    if ( data->MeterReading_array != NULL )
      emberExiToXmlStructMeterReading(&(data->MeterReading_array[i]));
  }
  emberExiPrintfLine("</MeterReadingList>");
  EXI_DEBUG1("End to XML: MeterReadingList\n");
}




void emberExiPrintStructMeterReadingListLink(EmberExiGeneratedMeterReadingListLink *data)
{
  emExiPrintStruct(emberExiMeterReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "MeterReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReadingListLink(EmberExiGeneratedMeterReadingListLink *data) {
  EXI_DEBUG1("Start to XML: MeterReadingListLink\n");
  emberExiPrintfLine("<MeterReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MeterReadingListLink>");
  EXI_DEBUG1("End to XML: MeterReadingListLink\n");
}




void emberExiPrintStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data)
{
  emExiPrintStruct(emberExiMirrorUsagePointListLinkStructData,
                   (int8u *) data,
                   0,
                   "MirrorUsagePointListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data) {
  EXI_DEBUG1("Start to XML: MirrorUsagePointListLink\n");
  emberExiPrintfLine("<MirrorUsagePointListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MirrorUsagePointListLink>");
  EXI_DEBUG1("End to XML: MirrorUsagePointListLink\n");
}




void emberExiPrintStructNotification(EmberExiGeneratedNotification *data)
{
  emExiPrintStruct(emberExiNotificationStructData,
                   (int8u *) data,
                   0,
                   "Notification",
                   emberExiQnames);
}


void emberExiToXmlStructNotification(EmberExiGeneratedNotification *data) {
  EXI_DEBUG1("Start to XML: Notification\n");
  emberExiPrintfLine("<Notification");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  emberExiPrintfLine("  <newResourceURI>%s</newResourceURI>", data->newResourceURI_option);
    if ( data->Resource_option != NULL )
      emberExiToXmlStructResource((data->Resource_option));
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("  <subscriptionURI>%s</subscriptionURI>", data->subscriptionURI);
  emberExiPrintfLine("</Notification>");
  EXI_DEBUG1("End to XML: Notification\n");
}




void emberExiPrintStructOffset(EmberExiGeneratedOffset *data)
{
  emExiPrintStruct(emberExiOffsetStructData,
                   (int8u *) data,
                   0,
                   "Offset",
                   emberExiQnames);
}


void emberExiToXmlStructOffset(EmberExiGeneratedOffset *data) {
  EXI_DEBUG1("Start to XML: Offset\n");
  emberExiPrintfLine("<Offset");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <coolingOffset>%d</coolingOffset>", data->coolingOffset_option);
  emberExiPrintfLine("  <heatingOffset>%d</heatingOffset>", data->heatingOffset_option);
  emberExiPrintfLine("  <loadAdjustmentPercentageOffset>%d</loadAdjustmentPercentageOffset>", data->loadAdjustmentPercentageOffset_option);
  emberExiPrintfLine("</Offset>");
  EXI_DEBUG1("End to XML: Offset\n");
}




void emberExiPrintStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data)
{
  emExiPrintStruct(emberExiPowerConfigurationStructData,
                   (int8u *) data,
                   0,
                   "PowerConfiguration",
                   emberExiQnames);
}


void emberExiToXmlStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data) {
  EXI_DEBUG1("Start to XML: PowerConfiguration\n");
  emberExiPrintfLine("<PowerConfiguration");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batteryInstallTime>%d</batteryInstallTime>", data->batteryInstallTime_option);
  emberExiPrintfLine("  <lowChargeThreshold>%d</lowChargeThreshold>", data->lowChargeThreshold_option);
  emberExiPrintfLine("</PowerConfiguration>");
  EXI_DEBUG1("End to XML: PowerConfiguration\n");
}




void emberExiPrintStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data)
{
  emExiPrintStruct(emberExiPowerStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "PowerStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data) {
  EXI_DEBUG1("Start to XML: PowerStatusLink\n");
  emberExiPrintfLine("<PowerStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PowerStatusLink>");
  EXI_DEBUG1("End to XML: PowerStatusLink\n");
}




void emberExiPrintStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data)
{
  emExiPrintStruct(emberExiPrepaymentListLinkStructData,
                   (int8u *) data,
                   0,
                   "PrepaymentListLink",
                   emberExiQnames);
}


void emberExiToXmlStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data) {
  EXI_DEBUG1("Start to XML: PrepaymentListLink\n");
  emberExiPrintfLine("<PrepaymentListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PrepaymentListLink>");
  EXI_DEBUG1("End to XML: PrepaymentListLink\n");
}




void emberExiPrintStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data)
{
  emExiPrintStruct(emberExiPriceResponseCfgListLinkStructData,
                   (int8u *) data,
                   0,
                   "PriceResponseCfgListLink",
                   emberExiQnames);
}


void emberExiToXmlStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data) {
  EXI_DEBUG1("Start to XML: PriceResponseCfgListLink\n");
  emberExiPrintfLine("<PriceResponseCfgListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PriceResponseCfgListLink>");
  EXI_DEBUG1("End to XML: PriceResponseCfgListLink\n");
}




void emberExiPrintStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data)
{
  emExiPrintStruct(emberExiRandomizableEventStructData,
                   (int8u *) data,
                   0,
                   "RandomizableEvent",
                   emberExiQnames);
}


void emberExiToXmlStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data) {
  EXI_DEBUG1("Start to XML: RandomizableEvent\n");
  emberExiPrintfLine("<RandomizableEvent");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
  emberExiPrintfLine("</RandomizableEvent>");
  EXI_DEBUG1("End to XML: RandomizableEvent\n");
}




void emberExiPrintStructRateComponentListLink(EmberExiGeneratedRateComponentListLink *data)
{
  emExiPrintStruct(emberExiRateComponentListLinkStructData,
                   (int8u *) data,
                   0,
                   "RateComponentListLink",
                   emberExiQnames);
}


void emberExiToXmlStructRateComponentListLink(EmberExiGeneratedRateComponentListLink *data) {
  EXI_DEBUG1("Start to XML: RateComponentListLink\n");
  emberExiPrintfLine("<RateComponentListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RateComponentListLink>");
  EXI_DEBUG1("End to XML: RateComponentListLink\n");
}




void emberExiPrintStructReading(EmberExiGeneratedReading *data)
{
  emExiPrintStruct(emberExiReadingStructData,
                   (int8u *) data,
                   0,
                   "Reading",
                   emberExiQnames);
}


void emberExiToXmlStructReading(EmberExiGeneratedReading *data) {
  EXI_DEBUG1("Start to XML: Reading\n");
  emberExiPrintfLine("<Reading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  emberExiPrintfLine("  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      emberExiPrintfLine("%2x", data->qualityFlags_option.bytes[i]);
  }
  emberExiPrintfLine("</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod_option));
  emberExiPrintfLine("  <touTier>%d</touTier>", data->touTier_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("  <localID>");
  { int16u i;
    for ( i=0; i<data->localID_option.length; i++ )
      emberExiPrintfLine("%2x", data->localID_option.bytes[i]);
  }
  emberExiPrintfLine("</localID>");
  emberExiPrintfLine("</Reading>");
  EXI_DEBUG1("End to XML: Reading\n");
}




void emberExiPrintStructReadingBase(EmberExiGeneratedReadingBase *data)
{
  emExiPrintStruct(emberExiReadingBaseStructData,
                   (int8u *) data,
                   0,
                   "ReadingBase",
                   emberExiQnames);
}


void emberExiToXmlStructReadingBase(EmberExiGeneratedReadingBase *data) {
  EXI_DEBUG1("Start to XML: ReadingBase\n");
  emberExiPrintfLine("<ReadingBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  emberExiPrintfLine("  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      emberExiPrintfLine("%2x", data->qualityFlags_option.bytes[i]);
  }
  emberExiPrintfLine("</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod_option));
  emberExiPrintfLine("  <touTier>%d</touTier>", data->touTier_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</ReadingBase>");
  EXI_DEBUG1("End to XML: ReadingBase\n");
}




void emberExiPrintStructReadingLink(EmberExiGeneratedReadingLink *data)
{
  emExiPrintStruct(emberExiReadingLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingLink(EmberExiGeneratedReadingLink *data) {
  EXI_DEBUG1("Start to XML: ReadingLink\n");
  emberExiPrintfLine("<ReadingLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingLink>");
  EXI_DEBUG1("End to XML: ReadingLink\n");
}




void emberExiPrintStructReadingList(EmberExiGeneratedReadingList *data)
{
  emExiPrintStruct(emberExiReadingListStructData,
                   (int8u *) data,
                   0,
                   "ReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructReadingList(EmberExiGeneratedReadingList *data) {
  EXI_DEBUG1("Start to XML: ReadingList\n");
  emberExiPrintfLine("<ReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      emberExiToXmlStructReading(&(data->Reading_array[i]));
  }
  emberExiPrintfLine("</ReadingList>");
  EXI_DEBUG1("End to XML: ReadingList\n");
}




void emberExiPrintStructReadingListLink(EmberExiGeneratedReadingListLink *data)
{
  emExiPrintStruct(emberExiReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingListLink(EmberExiGeneratedReadingListLink *data) {
  EXI_DEBUG1("Start to XML: ReadingListLink\n");
  emberExiPrintfLine("<ReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingListLink>");
  EXI_DEBUG1("End to XML: ReadingListLink\n");
}




void emberExiPrintStructReadingSet(EmberExiGeneratedReadingSet *data)
{
  emExiPrintStruct(emberExiReadingSetStructData,
                   (int8u *) data,
                   0,
                   "ReadingSet",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSet(EmberExiGeneratedReadingSet *data) {
  EXI_DEBUG1("Start to XML: ReadingSet\n");
  emberExiPrintfLine("<ReadingSet");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod));
    if ( data->ReadingListLink_option != NULL )
      emberExiToXmlStructReadingListLink((data->ReadingListLink_option));
  emberExiPrintfLine("</ReadingSet>");
  EXI_DEBUG1("End to XML: ReadingSet\n");
}




void emberExiPrintStructReadingSetBase(EmberExiGeneratedReadingSetBase *data)
{
  emExiPrintStruct(emberExiReadingSetBaseStructData,
                   (int8u *) data,
                   0,
                   "ReadingSetBase",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSetBase(EmberExiGeneratedReadingSetBase *data) {
  EXI_DEBUG1("Start to XML: ReadingSetBase\n");
  emberExiPrintfLine("<ReadingSetBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod));
  emberExiPrintfLine("</ReadingSetBase>");
  EXI_DEBUG1("End to XML: ReadingSetBase\n");
}




void emberExiPrintStructReadingSetList(EmberExiGeneratedReadingSetList *data)
{
  emExiPrintStruct(emberExiReadingSetListStructData,
                   (int8u *) data,
                   0,
                   "ReadingSetList",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSetList(EmberExiGeneratedReadingSetList *data) {
  EXI_DEBUG1("Start to XML: ReadingSetList\n");
  emberExiPrintfLine("<ReadingSetList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ReadingSet_count; i++ )
    if ( data->ReadingSet_array != NULL )
      emberExiToXmlStructReadingSet(&(data->ReadingSet_array[i]));
  }
  emberExiPrintfLine("</ReadingSetList>");
  EXI_DEBUG1("End to XML: ReadingSetList\n");
}




void emberExiPrintStructReadingSetListLink(EmberExiGeneratedReadingSetListLink *data)
{
  emExiPrintStruct(emberExiReadingSetListLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingSetListLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSetListLink(EmberExiGeneratedReadingSetListLink *data) {
  EXI_DEBUG1("Start to XML: ReadingSetListLink\n");
  emberExiPrintfLine("<ReadingSetListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingSetListLink>");
  EXI_DEBUG1("End to XML: ReadingSetListLink\n");
}




void emberExiPrintStructReadingTypeLink(EmberExiGeneratedReadingTypeLink *data)
{
  emExiPrintStruct(emberExiReadingTypeLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingTypeLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingTypeLink(EmberExiGeneratedReadingTypeLink *data) {
  EXI_DEBUG1("Start to XML: ReadingTypeLink\n");
  emberExiPrintfLine("<ReadingTypeLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingTypeLink>");
  EXI_DEBUG1("End to XML: ReadingTypeLink\n");
}




void emberExiPrintStructRealEnergy(EmberExiGeneratedRealEnergy *data)
{
  emExiPrintStruct(emberExiRealEnergyStructData,
                   (int8u *) data,
                   0,
                   "RealEnergy",
                   emberExiQnames);
}


void emberExiToXmlStructRealEnergy(EmberExiGeneratedRealEnergy *data) {
  EXI_DEBUG1("Start to XML: RealEnergy\n");
  emberExiPrintfLine("<RealEnergy");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</RealEnergy>");
  EXI_DEBUG1("End to XML: RealEnergy\n");
}




void emberExiPrintStructRegistrationLink(EmberExiGeneratedRegistrationLink *data)
{
  emExiPrintStruct(emberExiRegistrationLinkStructData,
                   (int8u *) data,
                   0,
                   "RegistrationLink",
                   emberExiQnames);
}


void emberExiToXmlStructRegistrationLink(EmberExiGeneratedRegistrationLink *data) {
  EXI_DEBUG1("Start to XML: RegistrationLink\n");
  emberExiPrintfLine("<RegistrationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RegistrationLink>");
  EXI_DEBUG1("End to XML: RegistrationLink\n");
}




void emberExiPrintStructResource(EmberExiGeneratedResource *data)
{
  emExiPrintStruct(emberExiResourceStructData,
                   (int8u *) data,
                   0,
                   "Resource",
                   emberExiQnames);
}


void emberExiToXmlStructResource(EmberExiGeneratedResource *data) {
  EXI_DEBUG1("Start to XML: Resource\n");
  emberExiPrintfLine("<Resource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</Resource>");
  EXI_DEBUG1("End to XML: Resource\n");
}




void emberExiPrintStructRespondableResource(EmberExiGeneratedRespondableResource *data)
{
  emExiPrintStruct(emberExiRespondableResourceStructData,
                   (int8u *) data,
                   0,
                   "RespondableResource",
                   emberExiQnames);
}


void emberExiToXmlStructRespondableResource(EmberExiGeneratedRespondableResource *data) {
  EXI_DEBUG1("Start to XML: RespondableResource\n");
  emberExiPrintfLine("<RespondableResource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RespondableResource>");
  EXI_DEBUG1("End to XML: RespondableResource\n");
}




void emberExiPrintStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data)
{
  emExiPrintStruct(emberExiRespondableSubscribableIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "RespondableSubscribableIdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: RespondableSubscribableIdentifiedObject\n");
  emberExiPrintfLine("<RespondableSubscribableIdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</RespondableSubscribableIdentifiedObject>");
  EXI_DEBUG1("End to XML: RespondableSubscribableIdentifiedObject\n");
}




void emberExiPrintStructResponse(EmberExiGeneratedResponse *data)
{
  emExiPrintStruct(emberExiResponseStructData,
                   (int8u *) data,
                   0,
                   "Response",
                   emberExiQnames);
}


void emberExiToXmlStructResponse(EmberExiGeneratedResponse *data) {
  EXI_DEBUG1("Start to XML: Response\n");
  emberExiPrintfLine("<Response");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
  emberExiPrintfLine("</Response>");
  EXI_DEBUG1("End to XML: Response\n");
}




void emberExiPrintStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data)
{
  emExiPrintStruct(emberExiResponseSetListLinkStructData,
                   (int8u *) data,
                   0,
                   "ResponseSetListLink",
                   emberExiQnames);
}


void emberExiToXmlStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data) {
  EXI_DEBUG1("Start to XML: ResponseSetListLink\n");
  emberExiPrintfLine("<ResponseSetListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ResponseSetListLink>");
  EXI_DEBUG1("End to XML: ResponseSetListLink\n");
}




void emberExiPrintStructSelfDevice(EmberExiGeneratedSelfDevice *data)
{
  emExiPrintStruct(emberExiSelfDeviceStructData,
                   (int8u *) data,
                   0,
                   "SelfDevice",
                   emberExiQnames);
}


void emberExiToXmlStructSelfDevice(EmberExiGeneratedSelfDevice *data) {
  EXI_DEBUG1("Start to XML: SelfDevice\n");
  emberExiPrintfLine("<SelfDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
  emberExiPrintfLine("</SelfDevice>");
  EXI_DEBUG1("End to XML: SelfDevice\n");
}




void emberExiPrintStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data)
{
  emExiPrintStruct(emberExiSelfDeviceLinkStructData,
                   (int8u *) data,
                   0,
                   "SelfDeviceLink",
                   emberExiQnames);
}


void emberExiToXmlStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data) {
  EXI_DEBUG1("Start to XML: SelfDeviceLink\n");
  emberExiPrintfLine("<SelfDeviceLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SelfDeviceLink>");
  EXI_DEBUG1("End to XML: SelfDeviceLink\n");
}




void emberExiPrintStructSetPoint(EmberExiGeneratedSetPoint *data)
{
  emExiPrintStruct(emberExiSetPointStructData,
                   (int8u *) data,
                   0,
                   "SetPoint",
                   emberExiQnames);
}


void emberExiToXmlStructSetPoint(EmberExiGeneratedSetPoint *data) {
  EXI_DEBUG1("Start to XML: SetPoint\n");
  emberExiPrintfLine("<SetPoint");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <coolingSetpoint>%d</coolingSetpoint>", data->coolingSetpoint_option);
  emberExiPrintfLine("  <heatingSetpoint>%d</heatingSetpoint>", data->heatingSetpoint_option);
  emberExiPrintfLine("</SetPoint>");
  EXI_DEBUG1("End to XML: SetPoint\n");
}




void emberExiPrintStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data)
{
  emExiPrintStruct(emberExiSubscribableIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "SubscribableIdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: SubscribableIdentifiedObject\n");
  emberExiPrintfLine("<SubscribableIdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</SubscribableIdentifiedObject>");
  EXI_DEBUG1("End to XML: SubscribableIdentifiedObject\n");
}




void emberExiPrintStructSubscribableList(EmberExiGeneratedSubscribableList *data)
{
  emExiPrintStruct(emberExiSubscribableListStructData,
                   (int8u *) data,
                   0,
                   "SubscribableList",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableList(EmberExiGeneratedSubscribableList *data) {
  EXI_DEBUG1("Start to XML: SubscribableList\n");
  emberExiPrintfLine("<SubscribableList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscribableList>");
  EXI_DEBUG1("End to XML: SubscribableList\n");
}




void emberExiPrintStructSubscribableResource(EmberExiGeneratedSubscribableResource *data)
{
  emExiPrintStruct(emberExiSubscribableResourceStructData,
                   (int8u *) data,
                   0,
                   "SubscribableResource",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableResource(EmberExiGeneratedSubscribableResource *data) {
  EXI_DEBUG1("Start to XML: SubscribableResource\n");
  emberExiPrintfLine("<SubscribableResource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscribableResource>");
  EXI_DEBUG1("End to XML: SubscribableResource\n");
}




void emberExiPrintStructSubscription(EmberExiGeneratedSubscription *data)
{
  emExiPrintStruct(emberExiSubscriptionStructData,
                   (int8u *) data,
                   0,
                   "Subscription",
                   emberExiQnames);
}


void emberExiToXmlStructSubscription(EmberExiGeneratedSubscription *data) {
  EXI_DEBUG1("Start to XML: Subscription\n");
  emberExiPrintfLine("<Subscription");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
    if ( data->Condition_option != NULL )
      emberExiToXmlStructCondition((data->Condition_option));
  emberExiPrintfLine("  <encoding>%d</encoding>", data->encoding);
  emberExiPrintfLine("  <level>%s</level>", data->level);
  emberExiPrintfLine("  <limit>%d</limit>", data->limit);
  emberExiPrintfLine("  <notificationURI>%s</notificationURI>", data->notificationURI);
  emberExiPrintfLine("</Subscription>");
  EXI_DEBUG1("End to XML: Subscription\n");
}




void emberExiPrintStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data)
{
  emExiPrintStruct(emberExiSubscriptionBaseStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionBase",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data) {
  EXI_DEBUG1("Start to XML: SubscriptionBase\n");
  emberExiPrintfLine("<SubscriptionBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  emberExiPrintfLine("</SubscriptionBase>");
  EXI_DEBUG1("End to XML: SubscriptionBase\n");
}




void emberExiPrintStructSubscriptionList(EmberExiGeneratedSubscriptionList *data)
{
  emExiPrintStruct(emberExiSubscriptionListStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionList",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionList(EmberExiGeneratedSubscriptionList *data) {
  EXI_DEBUG1("Start to XML: SubscriptionList\n");
  emberExiPrintfLine("<SubscriptionList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Subscription_count; i++ )
    if ( data->Subscription_array != NULL )
      emberExiToXmlStructSubscription(&(data->Subscription_array[i]));
  }
  emberExiPrintfLine("</SubscriptionList>");
  EXI_DEBUG1("End to XML: SubscriptionList\n");
}




void emberExiPrintStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data)
{
  emExiPrintStruct(emberExiSubscriptionListLinkStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionListLink",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data) {
  EXI_DEBUG1("Start to XML: SubscriptionListLink\n");
  emberExiPrintfLine("<SubscriptionListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscriptionListLink>");
  EXI_DEBUG1("End to XML: SubscriptionListLink\n");
}




void emberExiPrintStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data)
{
  emExiPrintStruct(emberExiSupportedLocaleListLinkStructData,
                   (int8u *) data,
                   0,
                   "SupportedLocaleListLink",
                   emberExiQnames);
}


void emberExiToXmlStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data) {
  EXI_DEBUG1("Start to XML: SupportedLocaleListLink\n");
  emberExiPrintfLine("<SupportedLocaleListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SupportedLocaleListLink>");
  EXI_DEBUG1("End to XML: SupportedLocaleListLink\n");
}




void emberExiPrintStructTargetReduction(EmberExiGeneratedTargetReduction *data)
{
  emExiPrintStruct(emberExiTargetReductionStructData,
                   (int8u *) data,
                   0,
                   "TargetReduction",
                   emberExiQnames);
}


void emberExiToXmlStructTargetReduction(EmberExiGeneratedTargetReduction *data) {
  EXI_DEBUG1("Start to XML: TargetReduction\n");
  emberExiPrintfLine("<TargetReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</TargetReduction>");
  EXI_DEBUG1("End to XML: TargetReduction\n");
}




void emberExiPrintStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data)
{
  emExiPrintStruct(emberExiTariffProfileListLinkStructData,
                   (int8u *) data,
                   0,
                   "TariffProfileListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data) {
  EXI_DEBUG1("Start to XML: TariffProfileListLink\n");
  emberExiPrintfLine("<TariffProfileListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TariffProfileListLink>");
  EXI_DEBUG1("End to XML: TariffProfileListLink\n");
}




void emberExiPrintStructTemperature(EmberExiGeneratedTemperature *data)
{
  emExiPrintStruct(emberExiTemperatureStructData,
                   (int8u *) data,
                   0,
                   "Temperature",
                   emberExiQnames);
}


void emberExiToXmlStructTemperature(EmberExiGeneratedTemperature *data) {
  EXI_DEBUG1("Start to XML: Temperature\n");
  emberExiPrintfLine("<Temperature");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <subject>%d</subject>", data->subject);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</Temperature>");
  EXI_DEBUG1("End to XML: Temperature\n");
}




void emberExiPrintStructTextMessage(EmberExiGeneratedTextMessage *data)
{
  emExiPrintStruct(emberExiTextMessageStructData,
                   (int8u *) data,
                   0,
                   "TextMessage",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessage(EmberExiGeneratedTextMessage *data) {
  EXI_DEBUG1("Start to XML: TextMessage\n");
  emberExiPrintfLine("<TextMessage");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <originator>%s</originator>", data->originator_option);
  emberExiPrintfLine("  <priority>%d</priority>", data->priority);
  emberExiPrintfLine("  <textMessage>%s</textMessage>", data->textMessage);
  emberExiPrintfLine("</TextMessage>");
  EXI_DEBUG1("End to XML: TextMessage\n");
}




void emberExiPrintStructTextMessageList(EmberExiGeneratedTextMessageList *data)
{
  emExiPrintStruct(emberExiTextMessageListStructData,
                   (int8u *) data,
                   0,
                   "TextMessageList",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessageList(EmberExiGeneratedTextMessageList *data) {
  EXI_DEBUG1("Start to XML: TextMessageList\n");
  emberExiPrintfLine("<TextMessageList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->TextMessage_count; i++ )
    if ( data->TextMessage_array != NULL )
      emberExiToXmlStructTextMessage(&(data->TextMessage_array[i]));
  }
  emberExiPrintfLine("</TextMessageList>");
  EXI_DEBUG1("End to XML: TextMessageList\n");
}




void emberExiPrintStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data)
{
  emExiPrintStruct(emberExiTextMessageListLinkStructData,
                   (int8u *) data,
                   0,
                   "TextMessageListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data) {
  EXI_DEBUG1("Start to XML: TextMessageListLink\n");
  emberExiPrintfLine("<TextMessageListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TextMessageListLink>");
  EXI_DEBUG1("End to XML: TextMessageListLink\n");
}




void emberExiPrintStructTextResponse(EmberExiGeneratedTextResponse *data)
{
  emExiPrintStruct(emberExiTextResponseStructData,
                   (int8u *) data,
                   0,
                   "TextResponse",
                   emberExiQnames);
}


void emberExiToXmlStructTextResponse(EmberExiGeneratedTextResponse *data) {
  EXI_DEBUG1("Start to XML: TextResponse\n");
  emberExiPrintfLine("<TextResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
  emberExiPrintfLine("</TextResponse>");
  EXI_DEBUG1("End to XML: TextResponse\n");
}




void emberExiPrintStructTime(EmberExiGeneratedTime *data)
{
  emExiPrintStruct(emberExiTimeStructData,
                   (int8u *) data,
                   0,
                   "Time",
                   emberExiQnames);
}


void emberExiToXmlStructTime(EmberExiGeneratedTime *data) {
  EXI_DEBUG1("Start to XML: Time\n");
  emberExiPrintfLine("<Time");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentTime>%d</currentTime>", data->currentTime);
  emberExiPrintfLine("  <dstEndTime>%d</dstEndTime>", data->dstEndTime);
  emberExiPrintfLine("  <dstOffset>%d</dstOffset>", data->dstOffset);
  emberExiPrintfLine("  <dstStartTime>%d</dstStartTime>", data->dstStartTime);
  emberExiPrintfLine("  <localTime>%d</localTime>", data->localTime_option);
  emberExiPrintfLine("  <quality>%d</quality>", data->quality);
  emberExiPrintfLine("  <tzOffset>%d</tzOffset>", data->tzOffset);
  emberExiPrintfLine("</Time>");
  EXI_DEBUG1("End to XML: Time\n");
}




void emberExiPrintStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data)
{
  emExiPrintStruct(emberExiTimeConfigurationStructData,
                   (int8u *) data,
                   0,
                   "TimeConfiguration",
                   emberExiQnames);
}


void emberExiToXmlStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data) {
  EXI_DEBUG1("Start to XML: TimeConfiguration\n");
  emberExiPrintfLine("<TimeConfiguration");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <dstEndRule>");
  { int16u i;
    for ( i=0; i<data->dstEndRule.length; i++ )
      emberExiPrintfLine("%2x", data->dstEndRule.bytes[i]);
  }
  emberExiPrintfLine("</dstEndRule>");
  emberExiPrintfLine("  <dstOffset>%d</dstOffset>", data->dstOffset);
  emberExiPrintfLine("  <dstStartRule>");
  { int16u i;
    for ( i=0; i<data->dstStartRule.length; i++ )
      emberExiPrintfLine("%2x", data->dstStartRule.bytes[i]);
  }
  emberExiPrintfLine("</dstStartRule>");
  emberExiPrintfLine("  <tzOffset>%d</tzOffset>", data->tzOffset);
  emberExiPrintfLine("</TimeConfiguration>");
  EXI_DEBUG1("End to XML: TimeConfiguration\n");
}




void emberExiPrintStructTimeLink(EmberExiGeneratedTimeLink *data)
{
  emExiPrintStruct(emberExiTimeLinkStructData,
                   (int8u *) data,
                   0,
                   "TimeLink",
                   emberExiQnames);
}


void emberExiToXmlStructTimeLink(EmberExiGeneratedTimeLink *data) {
  EXI_DEBUG1("Start to XML: TimeLink\n");
  emberExiPrintfLine("<TimeLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TimeLink>");
  EXI_DEBUG1("End to XML: TimeLink\n");
}




void emberExiPrintStructUsagePoint(EmberExiGeneratedUsagePoint *data)
{
  emExiPrintStruct(emberExiUsagePointStructData,
                   (int8u *) data,
                   0,
                   "UsagePoint",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePoint(EmberExiGeneratedUsagePoint *data) {
  EXI_DEBUG1("Start to XML: UsagePoint\n");
  emberExiPrintfLine("<UsagePoint");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
  emberExiPrintfLine("  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  emberExiPrintfLine("  <status>%d</status>", data->status);
    if ( data->MeterReadingListLink_option != NULL )
      emberExiToXmlStructMeterReadingListLink((data->MeterReadingListLink_option));
  emberExiPrintfLine("</UsagePoint>");
  EXI_DEBUG1("End to XML: UsagePoint\n");
}




void emberExiPrintStructUsagePointBase(EmberExiGeneratedUsagePointBase *data)
{
  emExiPrintStruct(emberExiUsagePointBaseStructData,
                   (int8u *) data,
                   0,
                   "UsagePointBase",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointBase(EmberExiGeneratedUsagePointBase *data) {
  EXI_DEBUG1("Start to XML: UsagePointBase\n");
  emberExiPrintfLine("<UsagePointBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
  emberExiPrintfLine("  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("</UsagePointBase>");
  EXI_DEBUG1("End to XML: UsagePointBase\n");
}




void emberExiPrintStructUsagePointList(EmberExiGeneratedUsagePointList *data)
{
  emExiPrintStruct(emberExiUsagePointListStructData,
                   (int8u *) data,
                   0,
                   "UsagePointList",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointList(EmberExiGeneratedUsagePointList *data) {
  EXI_DEBUG1("Start to XML: UsagePointList\n");
  emberExiPrintfLine("<UsagePointList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      emberExiToXmlStructUsagePoint(&(data->UsagePoint_array[i]));
  }
  emberExiPrintfLine("</UsagePointList>");
  EXI_DEBUG1("End to XML: UsagePointList\n");
}




void emberExiPrintStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data)
{
  emExiPrintStruct(emberExiUsagePointListLinkStructData,
                   (int8u *) data,
                   0,
                   "UsagePointListLink",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data) {
  EXI_DEBUG1("Start to XML: UsagePointListLink\n");
  emberExiPrintfLine("<UsagePointListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</UsagePointListLink>");
  EXI_DEBUG1("End to XML: UsagePointListLink\n");
}



// number -> string map for printing
const char * const emberExiQnames[] = {
  NULL,        // 0 is the null qname
  "AbstractDevice",
  UNUSED_QNAME, // AbstractFlowReservation
  UNUSED_QNAME, // AccountBalance
  UNUSED_QNAME, // AccountBalanceLink
  UNUSED_QNAME, // AccountingUnit
  "AccumulationBehaviourType",
  UNUSED_QNAME, // ActiveBillingPeriodListLink
  UNUSED_QNAME, // ActiveCreditRegisterListLink
  UNUSED_QNAME, // ActiveDERControlListLink
  UNUSED_QNAME, // ActiveEndDeviceControlListLink
  UNUSED_QNAME, // ActiveFlowReservationListLink
  "ActivePower",
  UNUSED_QNAME, // ActiveProjectionReadingListLink
  UNUSED_QNAME, // ActiveSupplyInterruptionOverrideListLink
  UNUSED_QNAME, // ActiveTargetReadingListLink
  "ActiveTextMessageListLink",
  UNUSED_QNAME, // ActiveTimeTariffIntervalListLink
  UNUSED_QNAME, // AmpereHour
  UNUSED_QNAME, // ApparentPower
  "ApplianceLoadReduction",
  "ApplianceLoadReductionType",
  "AppliedTargetReduction",
  UNUSED_QNAME, // AssociatedDERProgramListLink
  UNUSED_QNAME, // AssociatedUsagePointLink
  UNUSED_QNAME, // BillingMeterReadingBase
  UNUSED_QNAME, // BillingPeriod
  UNUSED_QNAME, // BillingPeriodList
  UNUSED_QNAME, // BillingPeriodListLink
  UNUSED_QNAME, // BillingReading
  UNUSED_QNAME, // BillingReadingList
  UNUSED_QNAME, // BillingReadingListLink
  UNUSED_QNAME, // BillingReadingSet
  UNUSED_QNAME, // BillingReadingSetList
  UNUSED_QNAME, // BillingReadingSetListLink
  "CRCerrors",
  UNUSED_QNAME, // Charge
  "ChargeKind",
  "CommodityType",
  "Condition",
  "Configuration",
  "ConfigurationLink",
  UNUSED_QNAME, // ConnectStatusType
  "ConsumptionBlockType",
  UNUSED_QNAME, // ConsumptionTariffInterval
  UNUSED_QNAME, // ConsumptionTariffIntervalList
  UNUSED_QNAME, // ConsumptionTariffIntervalListLink
  "CostKindType",
  UNUSED_QNAME, // CreditRegister
  UNUSED_QNAME, // CreditRegisterList
  UNUSED_QNAME, // CreditRegisterListLink
  "CreditStatusType",
  UNUSED_QNAME, // CreditTypeChange
  "CreditTypeType",
  "CurrencyCode",
  UNUSED_QNAME, // CurrentDERProgramLink
  UNUSED_QNAME, // CurrentRMS
  UNUSED_QNAME, // CurveData
  UNUSED_QNAME, // CurvePairType
  UNUSED_QNAME, // CustomerAccount
  UNUSED_QNAME, // CustomerAccountLink
  UNUSED_QNAME, // CustomerAccountList
  "CustomerAccountListLink",
  UNUSED_QNAME, // CustomerAgreement
  UNUSED_QNAME, // CustomerAgreementList
  UNUSED_QNAME, // CustomerAgreementListLink
  UNUSED_QNAME, // DER
  UNUSED_QNAME, // DERAvailability
  UNUSED_QNAME, // DERAvailabilityLink
  UNUSED_QNAME, // DERCapability
  UNUSED_QNAME, // DERCapabilityLink
  UNUSED_QNAME, // DERControl
  UNUSED_QNAME, // DERControlBase
  UNUSED_QNAME, // DERControlList
  UNUSED_QNAME, // DERControlListLink
  "DERControlType",
  UNUSED_QNAME, // DERCurve
  UNUSED_QNAME, // DERCurveLink
  UNUSED_QNAME, // DERCurveList
  UNUSED_QNAME, // DERCurveListLink
  "DERCurveType",
  UNUSED_QNAME, // DERLink
  UNUSED_QNAME, // DERList
  "DERListLink",
  UNUSED_QNAME, // DERProgram
  UNUSED_QNAME, // DERProgramLink
  UNUSED_QNAME, // DERProgramList
  "DERProgramListLink",
  UNUSED_QNAME, // DERSettings
  UNUSED_QNAME, // DERSettingsLink
  UNUSED_QNAME, // DERStatus
  UNUSED_QNAME, // DERStatusLink
  "DERType",
  "DERUnitRefType",
  "DODAGid",
  "DODAGroot",
  "DRLCCapabilities",
  "DataQualifierType",
  "DateTimeInterval",
  UNUSED_QNAME, // DefaultDERControl
  UNUSED_QNAME, // DefaultDERControlLink
  UNUSED_QNAME, // DemandResponseProgram
  UNUSED_QNAME, // DemandResponseProgramLink
  UNUSED_QNAME, // DemandResponseProgramList
  "DemandResponseProgramListLink",
  "DestAddress",
  "DeviceCapability",
  UNUSED_QNAME, // DeviceCapabilityLink
  "DeviceCategoryType",
  "DeviceInformation",
  "DeviceInformationLink",
  "DeviceStatus",
  "DeviceStatusLink",
  "DrResponse",
  "DstRuleType",
  "DutyCycle",
  "EUI64",
  "EndDevice",
  "EndDeviceControl",
  "EndDeviceControlList",
  UNUSED_QNAME, // EndDeviceControlListLink
  UNUSED_QNAME, // EndDeviceLink
  "EndDeviceList",
  "EndDeviceListLink",
  UNUSED_QNAME, // EnvironmentalCost
  UNUSED_QNAME, // Error
  "Event",
  "EventStatus",
  UNUSED_QNAME, // File
  UNUSED_QNAME, // FileLink
  UNUSED_QNAME, // FileList
  "FileListLink",
  UNUSED_QNAME, // FileStatus
  "FileStatusLink",
  UNUSED_QNAME, // FixedPointType
  UNUSED_QNAME, // FixedPowerFactor
  UNUSED_QNAME, // FixedVAr
  "FlowDirectionType",
  UNUSED_QNAME, // FlowReservationRequest
  UNUSED_QNAME, // FlowReservationRequestList
  "FlowReservationRequestListLink",
  UNUSED_QNAME, // FlowReservationResponse
  UNUSED_QNAME, // FlowReservationResponseList
  "FlowReservationResponseListLink",
  UNUSED_QNAME, // FunctionSetAssignments
  "FunctionSetAssignmentsBase",
  UNUSED_QNAME, // FunctionSetAssignmentsList
  "FunctionSetAssignmentsListLink",
  "HexBinary128",
  "HexBinary16",
  "HexBinary160",
  "HexBinary32",
  "HexBinary48",
  "HexBinary64",
  "HexBinary8",
  UNUSED_QNAME, // HistoricalReading
  UNUSED_QNAME, // HistoricalReadingList
  UNUSED_QNAME, // HistoricalReadingListLink
  UNUSED_QNAME, // IEEE_802_15_4
  UNUSED_QNAME, // IPAddr
  UNUSED_QNAME, // IPAddrList
  "IPAddrListLink",
  "IPInterface",
  UNUSED_QNAME, // IPInterfaceList
  "IPInterfaceListLink",
  "IdentifiedObject",
  "Int16",
  "Int32",
  "Int48",
  "Int64",
  "Int8",
  UNUSED_QNAME, // InverterStatusType
  "KindType",
  "LLAckNotRx",
  "LLCSMAFail",
  "LLFramesDropRx",
  "LLFramesDropTx",
  "LLFramesRx",
  "LLFramesTx",
  UNUSED_QNAME, // LLInterface
  UNUSED_QNAME, // LLInterfaceList
  "LLInterfaceListLink",
  "LLMediaAccessFail",
  "LLOctetsRx",
  "LLOctetsTx",
  "LLRetryCount",
  "LLSecurityErrorRx",
  "Link",
  "List",
  "ListLink",
  UNUSED_QNAME, // LoadShedAvailability
  "LoadShedAvailabilityLink",
  UNUSED_QNAME, // LocalControlModeStatusType
  "LocaleType",
  "LogEvent",
  "LogEventList",
  "LogEventListLink",
  "MOP",
  UNUSED_QNAME, // ManufacturerStatusType
  "MessagingProgram",
  "MessagingProgramList",
  "MessagingProgramListLink",
  "MeterReading",
  "MeterReadingBase",
  UNUSED_QNAME, // MeterReadingLink
  "MeterReadingList",
  "MeterReadingListLink",
  UNUSED_QNAME, // MirrorMeterReading
  UNUSED_QNAME, // MirrorMeterReadingList
  UNUSED_QNAME, // MirrorReadingSet
  UNUSED_QNAME, // MirrorUsagePoint
  UNUSED_QNAME, // MirrorUsagePointList
  "MirrorUsagePointListLink",
  UNUSED_QNAME, // Neighbor
  UNUSED_QNAME, // NeighborList
  UNUSED_QNAME, // NeighborListLink
  "Notification",
  UNUSED_QNAME, // NotificationList
  UNUSED_QNAME, // NotificationListLink
  "Offset",
  "OneHourRangeType",
  UNUSED_QNAME, // OperationalModeStatusType
  "PENType",
  UNUSED_QNAME, // PEVInfo
  "PINType",
  "PRF",
  "PerCent",
  "PhaseCode",
  "PowerConfiguration",
  "PowerOfTenMultiplierType",
  "PowerSourceType",
  UNUSED_QNAME, // PowerStatus
  "PowerStatusLink",
  "PrepayModeType",
  UNUSED_QNAME, // PrepayOperationStatus
  UNUSED_QNAME, // PrepayOperationStatusLink
  UNUSED_QNAME, // Prepayment
  UNUSED_QNAME, // PrepaymentLink
  UNUSED_QNAME, // PrepaymentList
  "PrepaymentListLink",
  UNUSED_QNAME, // PriceResponse
  UNUSED_QNAME, // PriceResponseCfg
  UNUSED_QNAME, // PriceResponseCfgList
  "PriceResponseCfgListLink",
  "PrimacyType",
  "PriorityType",
  UNUSED_QNAME, // ProjectionReading
  UNUSED_QNAME, // ProjectionReadingList
  UNUSED_QNAME, // ProjectionReadingListLink
  UNUSED_QNAME, // RPLInstance
  "RPLInstanceID",
  UNUSED_QNAME, // RPLInstanceList
  UNUSED_QNAME, // RPLInstanceListLink
  UNUSED_QNAME, // RPLSourceRoutes
  UNUSED_QNAME, // RPLSourceRoutesList
  UNUSED_QNAME, // RPLSourceRoutesListLink
  "RandomizableEvent",
  UNUSED_QNAME, // RateComponent
  UNUSED_QNAME, // RateComponentLink
  UNUSED_QNAME, // RateComponentList
  "RateComponentListLink",
  UNUSED_QNAME, // ReactivePower
  "Reading",
  "ReadingBase",
  "ReadingLink",
  "ReadingList",
  "ReadingListLink",
  "ReadingSet",
  "ReadingSetBase",
  "ReadingSetList",
  "ReadingSetListLink",
  UNUSED_QNAME, // ReadingType
  "ReadingTypeLink",
  "RealEnergy",
  UNUSED_QNAME, // Registration
  "RegistrationLink",
  "ReservationStatusType",
  "Resource",
  UNUSED_QNAME, // RespondableIdentifiedObject
  "RespondableResource",
  "RespondableSubscribableIdentifiedObject",
  "Response",
  UNUSED_QNAME, // ResponseList
  UNUSED_QNAME, // ResponseListLink
  UNUSED_QNAME, // ResponseSet
  UNUSED_QNAME, // ResponseSetList
  "ResponseSetListLink",
  "RoleFlagsType",
  "SFDIType",
  "SelfDevice",
  "SelfDeviceLink",
  UNUSED_QNAME, // ServiceChange
  "ServiceKind",
  "ServiceStatusType",
  UNUSED_QNAME, // ServiceSupplier
  UNUSED_QNAME, // ServiceSupplierLink
  UNUSED_QNAME, // ServiceSupplierList
  "SetPoint",
  "SignedPerCent",
  "SourceRoute",
  UNUSED_QNAME, // StateOfChargeStatusType
  UNUSED_QNAME, // StorageModeStatusType
  "String16",
  "String192",
  "String20",
  "String32",
  "String42",
  "String6",
  "SubscribableIdentifiedObject",
  "SubscribableList",
  "SubscribableResource",
  "SubscribableType",
  "Subscription",
  "SubscriptionBase",
  "SubscriptionList",
  "SubscriptionListLink",
  UNUSED_QNAME, // SupplyInterruptionOverride
  UNUSED_QNAME, // SupplyInterruptionOverrideList
  UNUSED_QNAME, // SupplyInterruptionOverrideListLink
  UNUSED_QNAME, // SupportedLocale
  UNUSED_QNAME, // SupportedLocaleList
  "SupportedLocaleListLink",
  "TOUType",
  UNUSED_QNAME, // TargetReading
  UNUSED_QNAME, // TargetReadingList
  UNUSED_QNAME, // TargetReadingListLink
  "TargetReduction",
  UNUSED_QNAME, // TariffProfile
  UNUSED_QNAME, // TariffProfileLink
  UNUSED_QNAME, // TariffProfileList
  "TariffProfileListLink",
  "Temperature",
  "TextMessage",
  "TextMessageList",
  "TextMessageListLink",
  "TextResponse",
  "Time",
  "TimeConfiguration",
  "TimeLink",
  "TimeOffsetType",
  UNUSED_QNAME, // TimeTariffInterval
  UNUSED_QNAME, // TimeTariffIntervalList
  UNUSED_QNAME, // TimeTariffIntervalListLink
  "TimeType",
  "UInt16",
  "UInt32",
  "UInt40",
  "UInt48",
  "UInt64",
  "UInt8",
  "UnitType",
  UNUSED_QNAME, // UnitValueType
  "UomType",
  "UsagePoint",
  "UsagePointBase",
  UNUSED_QNAME, // UsagePointLink
  "UsagePointList",
  "UsagePointListLink",
  "VersionType",
  UNUSED_QNAME, // VoltageRMS
  UNUSED_QNAME, // WattHour
  "accumulationBehaviour",
  "activateTime",
  "address",
  "amount",
  "attributeIdentifier",
  "availabilityDuration",
  "availabilityUpdatePercentChangeThreshold",
  "availabilityUpdatePowerChangeThreshold",
  "availableCredit",
  "averageEnergy",
  "batteryInstallTime",
  "batteryStatus",
  "billLastPeriod",
  "billToDate",
  "calorificValue",
  "capabilityInfo",
  "changedTime",
  "chargingPowerNow",
  "commodity",
  "consumeThreshold",
  "consumptionBlock",
  "conversionFactor",
  "coolingOffset",
  "coolingSetpoint",
  "costKind",
  "costLevel",
  "createdDateTime",
  "creationTime",
  "creditAmount",
  "creditExpiryLevel",
  "creditStatus",
  "creditType",
  "creditTypeChange",
  "creditTypeInUse",
  "currency",
  "currentLocale",
  "currentPowerSource",
  "currentStatus",
  "currentTime",
  "curveType",
  "customerAccount",
  "customerName",
  "dataQualifier",
  "dateTime",
  "dateTimeRegistered",
  "description",
  "deviceCategory",
  "deviceLFDI",
  "displacement",
  "drProgramMandatory",
  "dstEndRule",
  "dstEndTime",
  "dstOffset",
  "dstStartRule",
  "dstStartTime",
  "duration",
  "durationRequested",
  "effectiveTime",
  "email",
  "emergencyCredit",
  "emergencyCreditStatus",
  "encoding",
  "endDeviceLFDI",
  "energyAvailable",
  "energyRequestNow",
  "energyRequested",
  "energyUnit",
  "estimatedChargeRemaining",
  "estimatedTimeRemaining",
  "excitation",
  "extendedData",
  "fileURI",
  "flags",
  "flowDirection",
  "flowRateEndLimit",
  "flowRateStartLimit",
  "functionSet",
  "functionsImplemented",
  "genConnectStatus",
  "groundedFlag",
  "heatingOffset",
  "heatingSetpoint",
  "ifDescr",
  "ifHighSpeed",
  "ifInBroadcastPkts",
  "ifInDiscards",
  "ifInErrors",
  "ifInMulticastPkts",
  "ifInOctets",
  "ifInUcastPkts",
  "ifInUnknownProtos",
  "ifIndex",
  "ifMtu",
  "ifName",
  "ifOperStatus",
  "ifOutBroadcastPkts",
  "ifOutDiscards",
  "ifOutErrors",
  "ifOutMulticastPkts",
  "ifOutOctets",
  "ifOutUcastPkts",
  "ifPromiscuousMode",
  "ifSpeed",
  "ifType",
  "interval",
  "intervalLength",
  "inverterStatus",
  "isChild",
  "kind",
  "lFDI",
  "lastResetTime",
  "lastUpdateTime",
  "lastUpdatedTime",
  "level",
  "limit",
  "linkLayerType",
  "linkQuality",
  UNUSED_QNAME, // loWPAN
  "loadAdjustmentPercentageOffset",
  "loadPercent",
  "loadShedDeviceCategory",
  "loadShiftForward",
  "localControlModeStatus",
  "localID",
  "localTime",
  "locale",
  "logEventCode",
  "logEventID",
  "logEventPEN",
  "lowChargeThreshold",
  "lowCreditWarningLevel",
  "lowEmergencyCreditWarningLevel",
  "lowerLimit",
  "lowerThreshold",
  "mRID",
  "mRIDType",
  "manufacturerStatus",
  "maxChargeDuration",
  "maxDemand",
  "maxForwardPower",
  "maxNumberOfIntervals",
  "maxReductionThreshold",
  "maxRetryDuration",
  "mfDate",
  "mfHwVer",
  "mfID",
  "mfInfo",
  "mfModel",
  "mfSerNum",
  "mfVer",
  "minimumChargingDuration",
  "modesSupported",
  "monetaryUnit",
  "multiplier",
  "newResourceURI",
  "newStatus",
  "newType",
  "nextRequestAttempt",
  "nextUpdateTime",
  "normalValue",
  "notificationURI",
  "numCostLevels",
  "numberOfConsumptionBlocks",
  "numberOfTouTiers",
  "octetsRx",
  "octetsTx",
  "onCount",
  "opModFixedFlow",
  "opModFixedPF",
  "opModFixedVAr",
  "opModFixedW",
  "opModFreqWatt",
  "opModHVRT",
  "opModLVRT",
  "opModVoltVAr",
  "opModVoltWatt",
  "opModWattPF",
  "opState",
  "opTime",
  "operationalModeStatus",
  "optionsImplemented",
  "originator",
  "overrideDuration",
  "pIN",
  "packetsRx",
  "packetsTx",
  "phase",
  "phone",
  "potentiallySuperseded",
  "potentiallySupersededTime",
  "powerAvailable",
  "powerOfTenMultiplier",
  "powerRequested",
  "prepayMode",
  "price",
  "pricePowerOfTenMultiplier",
  "primacy",
  "primaryPower",
  "priority",
  "profileID",
  "providerID",
  "quality",
  "qualityFlags",
  "rampDecTms",
  "rampIncTms",
  "rampPT1Tms",
  "rampTms",
  "randomizeDuration",
  "randomizeStart",
  "rank",
  "rateCode",
  "readingTime",
  "reason",
  "reasonCode",
  "refType",
  "request503Count",
  "requestFailCount",
  "reservationStatus",
  "reserveChargePercent",
  "reservePercent",
  "roleFlags",
  "rtgA",
  "rtgAh",
  "rtgMaxChargeRate",
  "rtgMaxDischargeRate",
  "rtgMinPF",
  "rtgMinPFUnder",
  "rtgVA",
  "rtgVAr",
  "rtgVArNeg",
  "rtgW",
  "rtgWh",
  "rxFragError",
  "sFDI",
  "secondaryPower",
  "serviceAccount",
  "serviceCategoryKind",
  "serviceChange",
  "serviceLocation",
  "serviceStatus",
  "sessionTimeOnBattery",
  "setGenConnect",
  "setGradW",
  "setMaxChargeRate",
  "setMaxDischargeRate",
  "setMaxVA",
  "setMaxVAr",
  "setMaxVArNeg",
  "setMaxW",
  "setMinPF",
  "setMinPFUnder",
  "setStorConnect",
  "setVRef",
  "setVRefOfs",
  "sheddablePercent",
  "sheddablePower",
  "shortAddress",
  "size",
  "start",
  "startTime",
  "startValue",
  "statVArAvail",
  "statWAvail",
  "stateOfChargeStatus",
  "status",
  "statusTime",
  "statusTimeStamp",
  "storConnectStatus",
  "storageModeStatus",
  "subIntervalLength",
  "subject",
  "subscribedResource",
  "subscriptionURI",
  "supplyLimit",
  "swActTime",
  "swVer",
  "targetStateOfCharge",
  "textMessage",
  "tieredConsumptionBlocks",
  "timeChargeIsNeeded",
  "timeChargingStatusPEV",
  "timePeriod",
  "token",
  "totalTimeOnBattery",
  "touTier",
  "type",
  "tzOffset",
  "unit",
  "uom",
  "updatedTime",
  "upperLimit",
  "upperThreshold",
  "userDeviceName",
  "value",
  "version",
  "versionNumber",
  "web",
  "xMultiplier",
  "xvalue",
  "yMultiplier",
  "yRefType",
  "yvalue",
  "all",
  "href",
  "replyTo",
  "responseRequired",
  "results",
  "subscribable",
  NULL         // helpful terminator
};
