// This file is generated. Please do not edit manually.
// 
//

// This file contains the generated unit tests for the API

#include PLATFORM_HEADER
#include "app/util/exi/exi.h"
#include "app/util/exi/exi-internal.h"
#include "stack/core/log.h"
#include "afv6-exi-types.h"
#include "afv6-exi-qname.h"
#include "stdlib.h"


// Unit test functions

int8u exiUnitTestChildCount = 0;

void emberExiApiUnitTest(EmberExiGrammarSet *grammarSet, EmberExiBits *bits, int8u *outputBuffer) {
  assert(emberExiStructUnitTest("Link",
                                EMBER_EXI_QNAME_Link,
                                emberExiLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ListLink",
                                EMBER_EXI_QNAME_ListLink,
                                emberExiListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Resource",
                                EMBER_EXI_QNAME_Resource,
                                emberExiResourceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IdentifiedObject",
                                EMBER_EXI_QNAME_IdentifiedObject,
                                emberExiIdentifiedObjectStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SubscribableResource",
                                EMBER_EXI_QNAME_SubscribableResource,
                                emberExiSubscribableResourceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DateTimeInterval",
                                EMBER_EXI_QNAME_DateTimeInterval,
                                emberExiDateTimeIntervalStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingBase",
                                EMBER_EXI_QNAME_ReadingBase,
                                emberExiReadingBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Reading",
                                EMBER_EXI_QNAME_Reading,
                                emberExiReadingStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("List",
                                EMBER_EXI_QNAME_List,
                                emberExiListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MeterReadingListLink",
                                EMBER_EXI_QNAME_MeterReadingListLink,
                                emberExiMeterReadingListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("UsagePointBase",
                                EMBER_EXI_QNAME_UsagePointBase,
                                emberExiUsagePointBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("UsagePoint",
                                EMBER_EXI_QNAME_UsagePoint,
                                emberExiUsagePointStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SubscriptionBase",
                                EMBER_EXI_QNAME_SubscriptionBase,
                                emberExiSubscriptionBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Notification",
                                EMBER_EXI_QNAME_Notification,
                                emberExiNotificationStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ConfigurationLink",
                                EMBER_EXI_QNAME_ConfigurationLink,
                                emberExiConfigurationLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERListLink",
                                EMBER_EXI_QNAME_DERListLink,
                                emberExiDERListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DeviceInformationLink",
                                EMBER_EXI_QNAME_DeviceInformationLink,
                                emberExiDeviceInformationLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DeviceStatusLink",
                                EMBER_EXI_QNAME_DeviceStatusLink,
                                emberExiDeviceStatusLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("FileStatusLink",
                                EMBER_EXI_QNAME_FileStatusLink,
                                emberExiFileStatusLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IPInterfaceListLink",
                                EMBER_EXI_QNAME_IPInterfaceListLink,
                                emberExiIPInterfaceListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("LoadShedAvailabilityLink",
                                EMBER_EXI_QNAME_LoadShedAvailabilityLink,
                                emberExiLoadShedAvailabilityLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("LogEventListLink",
                                EMBER_EXI_QNAME_LogEventListLink,
                                emberExiLogEventListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PowerStatusLink",
                                EMBER_EXI_QNAME_PowerStatusLink,
                                emberExiPowerStatusLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("AbstractDevice",
                                EMBER_EXI_QNAME_AbstractDevice,
                                emberExiAbstractDeviceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SelfDevice",
                                EMBER_EXI_QNAME_SelfDevice,
                                emberExiSelfDeviceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CustomerAccountListLink",
                                EMBER_EXI_QNAME_CustomerAccountListLink,
                                emberExiCustomerAccountListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DemandResponseProgramListLink",
                                EMBER_EXI_QNAME_DemandResponseProgramListLink,
                                emberExiDemandResponseProgramListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERProgramListLink",
                                EMBER_EXI_QNAME_DERProgramListLink,
                                emberExiDERProgramListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("FileListLink",
                                EMBER_EXI_QNAME_FileListLink,
                                emberExiFileListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MessagingProgramListLink",
                                EMBER_EXI_QNAME_MessagingProgramListLink,
                                emberExiMessagingProgramListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PrepaymentListLink",
                                EMBER_EXI_QNAME_PrepaymentListLink,
                                emberExiPrepaymentListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ResponseSetListLink",
                                EMBER_EXI_QNAME_ResponseSetListLink,
                                emberExiResponseSetListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TariffProfileListLink",
                                EMBER_EXI_QNAME_TariffProfileListLink,
                                emberExiTariffProfileListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TimeLink",
                                EMBER_EXI_QNAME_TimeLink,
                                emberExiTimeLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("UsagePointListLink",
                                EMBER_EXI_QNAME_UsagePointListLink,
                                emberExiUsagePointListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("FunctionSetAssignmentsBase",
                                EMBER_EXI_QNAME_FunctionSetAssignmentsBase,
                                emberExiFunctionSetAssignmentsBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Offset",
                                EMBER_EXI_QNAME_Offset,
                                emberExiOffsetStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActivePower",
                                EMBER_EXI_QNAME_ActivePower,
                                emberExiActivePowerStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SubscribableList",
                                EMBER_EXI_QNAME_SubscribableList,
                                emberExiSubscribableListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("LogEvent",
                                EMBER_EXI_QNAME_LogEvent,
                                emberExiLogEventStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("LogEventList",
                                EMBER_EXI_QNAME_LogEventList,
                                emberExiLogEventListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RateComponentListLink",
                                EMBER_EXI_QNAME_RateComponentListLink,
                                emberExiRateComponentListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Time",
                                EMBER_EXI_QNAME_Time,
                                emberExiTimeStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("UsagePointList",
                                EMBER_EXI_QNAME_UsagePointList,
                                emberExiUsagePointListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("UnitValueType",
                                EMBER_EXI_QNAME_UnitValueType,
                                emberExiUnitValueTypeStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingType",
                                EMBER_EXI_QNAME_ReadingType,
                                emberExiReadingTypeStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ApplianceLoadReduction",
                                EMBER_EXI_QNAME_ApplianceLoadReduction,
                                emberExiApplianceLoadReductionStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DutyCycle",
                                EMBER_EXI_QNAME_DutyCycle,
                                emberExiDutyCycleStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SetPoint",
                                EMBER_EXI_QNAME_SetPoint,
                                emberExiSetPointStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("EndDeviceListLink",
                                EMBER_EXI_QNAME_EndDeviceListLink,
                                emberExiEndDeviceListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MirrorUsagePointListLink",
                                EMBER_EXI_QNAME_MirrorUsagePointListLink,
                                emberExiMirrorUsagePointListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SelfDeviceLink",
                                EMBER_EXI_QNAME_SelfDeviceLink,
                                emberExiSelfDeviceLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DeviceCapability",
                                EMBER_EXI_QNAME_DeviceCapability,
                                emberExiDeviceCapabilityStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RealEnergy",
                                EMBER_EXI_QNAME_RealEnergy,
                                emberExiRealEnergyStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Condition",
                                EMBER_EXI_QNAME_Condition,
                                emberExiConditionStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingSetBase",
                                EMBER_EXI_QNAME_ReadingSetBase,
                                emberExiReadingSetBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MeterReadingBase",
                                EMBER_EXI_QNAME_MeterReadingBase,
                                emberExiMeterReadingBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingTypeLink",
                                EMBER_EXI_QNAME_ReadingTypeLink,
                                emberExiReadingTypeLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingSetListLink",
                                EMBER_EXI_QNAME_ReadingSetListLink,
                                emberExiReadingSetListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Response",
                                EMBER_EXI_QNAME_Response,
                                emberExiResponseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Subscription",
                                EMBER_EXI_QNAME_Subscription,
                                emberExiSubscriptionStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingList",
                                EMBER_EXI_QNAME_ReadingList,
                                emberExiReadingListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("FlowReservationRequestListLink",
                                EMBER_EXI_QNAME_FlowReservationRequestListLink,
                                emberExiFlowReservationRequestListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("FlowReservationResponseListLink",
                                EMBER_EXI_QNAME_FlowReservationResponseListLink,
                                emberExiFlowReservationResponseListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("FunctionSetAssignmentsListLink",
                                EMBER_EXI_QNAME_FunctionSetAssignmentsListLink,
                                emberExiFunctionSetAssignmentsListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RegistrationLink",
                                EMBER_EXI_QNAME_RegistrationLink,
                                emberExiRegistrationLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SubscriptionListLink",
                                EMBER_EXI_QNAME_SubscriptionListLink,
                                emberExiSubscriptionListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("EndDevice",
                                EMBER_EXI_QNAME_EndDevice,
                                emberExiEndDeviceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("EndDeviceList",
                                EMBER_EXI_QNAME_EndDeviceList,
                                emberExiEndDeviceListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PriceResponseCfgListLink",
                                EMBER_EXI_QNAME_PriceResponseCfgListLink,
                                emberExiPriceResponseCfgListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingListLink",
                                EMBER_EXI_QNAME_ReadingListLink,
                                emberExiReadingListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingSet",
                                EMBER_EXI_QNAME_ReadingSet,
                                emberExiReadingSetStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingSetList",
                                EMBER_EXI_QNAME_ReadingSetList,
                                emberExiReadingSetListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PowerConfiguration",
                                EMBER_EXI_QNAME_PowerConfiguration,
                                emberExiPowerConfigurationStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TimeConfiguration",
                                EMBER_EXI_QNAME_TimeConfiguration,
                                emberExiTimeConfigurationStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Configuration",
                                EMBER_EXI_QNAME_Configuration,
                                emberExiConfigurationStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("AppliedTargetReduction",
                                EMBER_EXI_QNAME_AppliedTargetReduction,
                                emberExiAppliedTargetReductionStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DrResponse",
                                EMBER_EXI_QNAME_DrResponse,
                                emberExiDrResponseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DRLCCapabilities",
                                EMBER_EXI_QNAME_DRLCCapabilities,
                                emberExiDRLCCapabilitiesStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SupportedLocaleListLink",
                                EMBER_EXI_QNAME_SupportedLocaleListLink,
                                emberExiSupportedLocaleListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DeviceInformation",
                                EMBER_EXI_QNAME_DeviceInformation,
                                emberExiDeviceInformationStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ReadingLink",
                                EMBER_EXI_QNAME_ReadingLink,
                                emberExiReadingLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MeterReading",
                                EMBER_EXI_QNAME_MeterReading,
                                emberExiMeterReadingStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MeterReadingList",
                                EMBER_EXI_QNAME_MeterReadingList,
                                emberExiMeterReadingListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Temperature",
                                EMBER_EXI_QNAME_Temperature,
                                emberExiTemperatureStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DeviceStatus",
                                EMBER_EXI_QNAME_DeviceStatus,
                                emberExiDeviceStatusStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TextResponse",
                                EMBER_EXI_QNAME_TextResponse,
                                emberExiTextResponseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SubscriptionList",
                                EMBER_EXI_QNAME_SubscriptionList,
                                emberExiSubscriptionListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

}
