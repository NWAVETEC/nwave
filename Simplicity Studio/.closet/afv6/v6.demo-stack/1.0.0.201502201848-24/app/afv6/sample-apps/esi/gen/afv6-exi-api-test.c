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

  assert(emberExiStructUnitTest("List",
                                EMBER_EXI_QNAME_List,
                                emberExiListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RPLSourceRoutes",
                                EMBER_EXI_QNAME_RPLSourceRoutes,
                                emberExiRPLSourceRoutesStructData,
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

  assert(emberExiStructUnitTest("EventStatus",
                                EMBER_EXI_QNAME_EventStatus,
                                emberExiEventStatusStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RespondableResource",
                                EMBER_EXI_QNAME_RespondableResource,
                                emberExiRespondableResourceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RespondableSubscribableIdentifiedObject",
                                EMBER_EXI_QNAME_RespondableSubscribableIdentifiedObject,
                                emberExiRespondableSubscribableIdentifiedObjectStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Event",
                                EMBER_EXI_QNAME_Event,
                                emberExiEventStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RandomizableEvent",
                                EMBER_EXI_QNAME_RandomizableEvent,
                                emberExiRandomizableEventStructData,
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

  assert(emberExiStructUnitTest("ActiveTextMessageListLink",
                                EMBER_EXI_QNAME_ActiveTextMessageListLink,
                                emberExiActiveTextMessageListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RPLInstanceListLink",
                                EMBER_EXI_QNAME_RPLInstanceListLink,
                                emberExiRPLInstanceListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IPAddr",
                                EMBER_EXI_QNAME_IPAddr,
                                emberExiIPAddrStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IPAddrList",
                                EMBER_EXI_QNAME_IPAddrList,
                                emberExiIPAddrListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TargetReduction",
                                EMBER_EXI_QNAME_TargetReduction,
                                emberExiTargetReductionStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActiveEndDeviceControlListLink",
                                EMBER_EXI_QNAME_ActiveEndDeviceControlListLink,
                                emberExiActiveEndDeviceControlListLinkStructData,
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

  assert(emberExiStructUnitTest("EndDeviceControlListLink",
                                EMBER_EXI_QNAME_EndDeviceControlListLink,
                                emberExiEndDeviceControlListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DemandResponseProgram",
                                EMBER_EXI_QNAME_DemandResponseProgram,
                                emberExiDemandResponseProgramStructData,
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

  assert(emberExiStructUnitTest("DemandResponseProgramList",
                                EMBER_EXI_QNAME_DemandResponseProgramList,
                                emberExiDemandResponseProgramListStructData,
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

  assert(emberExiStructUnitTest("NeighborListLink",
                                EMBER_EXI_QNAME_NeighborListLink,
                                emberExiNeighborListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IEEE_802_15_4",
                                EMBER_EXI_QNAME_IEEE_802_15_4,
                                emberExiIEEE_802_15_4StructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Neighbor",
                                EMBER_EXI_QNAME_Neighbor,
                                emberExiNeighborStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RPLSourceRoutesListLink",
                                EMBER_EXI_QNAME_RPLSourceRoutesListLink,
                                emberExiRPLSourceRoutesListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("LLInterfaceListLink",
                                EMBER_EXI_QNAME_LLInterfaceListLink,
                                emberExiLLInterfaceListLinkStructData,
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

  assert(emberExiStructUnitTest("EndDeviceControl",
                                EMBER_EXI_QNAME_EndDeviceControl,
                                emberExiEndDeviceControlStructData,
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

  assert(emberExiStructUnitTest("RPLInstance",
                                EMBER_EXI_QNAME_RPLInstance,
                                emberExiRPLInstanceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IPAddrListLink",
                                EMBER_EXI_QNAME_IPAddrListLink,
                                emberExiIPAddrListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IPInterface",
                                EMBER_EXI_QNAME_IPInterface,
                                emberExiIPInterfaceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("IPInterfaceList",
                                EMBER_EXI_QNAME_IPInterfaceList,
                                emberExiIPInterfaceListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TextMessage",
                                EMBER_EXI_QNAME_TextMessage,
                                emberExiTextMessageStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TextMessageList",
                                EMBER_EXI_QNAME_TextMessageList,
                                emberExiTextMessageListStructData,
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

  assert(emberExiStructUnitTest("RPLInstanceList",
                                EMBER_EXI_QNAME_RPLInstanceList,
                                emberExiRPLInstanceListStructData,
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

  assert(emberExiStructUnitTest("loWPAN",
                                EMBER_EXI_QNAME_loWPAN,
                                emberExiloWPANStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("LLInterface",
                                EMBER_EXI_QNAME_LLInterface,
                                emberExiLLInterfaceStructData,
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

  assert(emberExiStructUnitTest("SubscribableIdentifiedObject",
                                EMBER_EXI_QNAME_SubscribableIdentifiedObject,
                                emberExiSubscribableIdentifiedObjectStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RPLSourceRoutesList",
                                EMBER_EXI_QNAME_RPLSourceRoutesList,
                                emberExiRPLSourceRoutesListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("File",
                                EMBER_EXI_QNAME_File,
                                emberExiFileStructData,
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

  assert(emberExiStructUnitTest("TextMessageListLink",
                                EMBER_EXI_QNAME_TextMessageListLink,
                                emberExiTextMessageListLinkStructData,
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

  assert(emberExiStructUnitTest("FunctionSetAssignments",
                                EMBER_EXI_QNAME_FunctionSetAssignments,
                                emberExiFunctionSetAssignmentsStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MessagingProgram",
                                EMBER_EXI_QNAME_MessagingProgram,
                                emberExiMessagingProgramStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("MessagingProgramList",
                                EMBER_EXI_QNAME_MessagingProgramList,
                                emberExiMessagingProgramListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("LLInterfaceList",
                                EMBER_EXI_QNAME_LLInterfaceList,
                                emberExiLLInterfaceListStructData,
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

  assert(emberExiStructUnitTest("PEVInfo",
                                EMBER_EXI_QNAME_PEVInfo,
                                emberExiPEVInfoStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PowerStatus",
                                EMBER_EXI_QNAME_PowerStatus,
                                emberExiPowerStatusStructData,
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

  assert(emberExiStructUnitTest("EndDeviceControlList",
                                EMBER_EXI_QNAME_EndDeviceControlList,
                                emberExiEndDeviceControlListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("FileList",
                                EMBER_EXI_QNAME_FileList,
                                emberExiFileListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("NeighborList",
                                EMBER_EXI_QNAME_NeighborList,
                                emberExiNeighborListStructData,
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

  assert(emberExiStructUnitTest("FunctionSetAssignmentsList",
                                EMBER_EXI_QNAME_FunctionSetAssignmentsList,
                                emberExiFunctionSetAssignmentsListStructData,
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
