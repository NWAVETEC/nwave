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

  assert(emberExiStructUnitTest("ActiveDERControlListLink",
                                EMBER_EXI_QNAME_ActiveDERControlListLink,
                                emberExiActiveDERControlListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DefaultDERControlLink",
                                EMBER_EXI_QNAME_DefaultDERControlLink,
                                emberExiDefaultDERControlLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERControlListLink",
                                EMBER_EXI_QNAME_DERControlListLink,
                                emberExiDERControlListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERCurveListLink",
                                EMBER_EXI_QNAME_DERCurveListLink,
                                emberExiDERCurveListLinkStructData,
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

  assert(emberExiStructUnitTest("DERProgram",
                                EMBER_EXI_QNAME_DERProgram,
                                emberExiDERProgramStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("AssociatedDERProgramListLink",
                                EMBER_EXI_QNAME_AssociatedDERProgramListLink,
                                emberExiAssociatedDERProgramListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("AssociatedUsagePointLink",
                                EMBER_EXI_QNAME_AssociatedUsagePointLink,
                                emberExiAssociatedUsagePointLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CurrentDERProgramLink",
                                EMBER_EXI_QNAME_CurrentDERProgramLink,
                                emberExiCurrentDERProgramLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERAvailabilityLink",
                                EMBER_EXI_QNAME_DERAvailabilityLink,
                                emberExiDERAvailabilityLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERCapabilityLink",
                                EMBER_EXI_QNAME_DERCapabilityLink,
                                emberExiDERCapabilityLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERSettingsLink",
                                EMBER_EXI_QNAME_DERSettingsLink,
                                emberExiDERSettingsLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERStatusLink",
                                EMBER_EXI_QNAME_DERStatusLink,
                                emberExiDERStatusLinkStructData,
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

  assert(emberExiStructUnitTest("DER",
                                EMBER_EXI_QNAME_DER,
                                emberExiDERStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CreditTypeChange",
                                EMBER_EXI_QNAME_CreditTypeChange,
                                emberExiCreditTypeChangeStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ServiceSupplier",
                                EMBER_EXI_QNAME_ServiceSupplier,
                                emberExiServiceSupplierStructData,
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

  assert(emberExiStructUnitTest("Charge",
                                EMBER_EXI_QNAME_Charge,
                                emberExiChargeStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("BillingReading",
                                EMBER_EXI_QNAME_BillingReading,
                                emberExiBillingReadingStructData,
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

  assert(emberExiStructUnitTest("BillingReadingList",
                                EMBER_EXI_QNAME_BillingReadingList,
                                emberExiBillingReadingListStructData,
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

  assert(emberExiStructUnitTest("TargetReadingListLink",
                                EMBER_EXI_QNAME_TargetReadingListLink,
                                emberExiTargetReadingListLinkStructData,
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

  assert(emberExiStructUnitTest("CurveData",
                                EMBER_EXI_QNAME_CurveData,
                                emberExiCurveDataStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERCurve",
                                EMBER_EXI_QNAME_DERCurve,
                                emberExiDERCurveStructData,
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

  assert(emberExiStructUnitTest("ConsumptionTariffIntervalListLink",
                                EMBER_EXI_QNAME_ConsumptionTariffIntervalListLink,
                                emberExiConsumptionTariffIntervalListLinkStructData,
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

  assert(emberExiStructUnitTest("TimeTariffInterval",
                                EMBER_EXI_QNAME_TimeTariffInterval,
                                emberExiTimeTariffIntervalStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActiveBillingPeriodListLink",
                                EMBER_EXI_QNAME_ActiveBillingPeriodListLink,
                                emberExiActiveBillingPeriodListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActiveProjectionReadingListLink",
                                EMBER_EXI_QNAME_ActiveProjectionReadingListLink,
                                emberExiActiveProjectionReadingListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActiveTargetReadingListLink",
                                EMBER_EXI_QNAME_ActiveTargetReadingListLink,
                                emberExiActiveTargetReadingListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("BillingPeriodListLink",
                                EMBER_EXI_QNAME_BillingPeriodListLink,
                                emberExiBillingPeriodListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("HistoricalReadingListLink",
                                EMBER_EXI_QNAME_HistoricalReadingListLink,
                                emberExiHistoricalReadingListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PrepaymentLink",
                                EMBER_EXI_QNAME_PrepaymentLink,
                                emberExiPrepaymentLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ProjectionReadingListLink",
                                EMBER_EXI_QNAME_ProjectionReadingListLink,
                                emberExiProjectionReadingListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TariffProfileLink",
                                EMBER_EXI_QNAME_TariffProfileLink,
                                emberExiTariffProfileLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("UsagePointLink",
                                EMBER_EXI_QNAME_UsagePointLink,
                                emberExiUsagePointLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CustomerAgreement",
                                EMBER_EXI_QNAME_CustomerAgreement,
                                emberExiCustomerAgreementStructData,
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

  assert(emberExiStructUnitTest("FixedPowerFactor",
                                EMBER_EXI_QNAME_FixedPowerFactor,
                                emberExiFixedPowerFactorStructData,
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

  assert(emberExiStructUnitTest("RateComponentListLink",
                                EMBER_EXI_QNAME_RateComponentListLink,
                                emberExiRateComponentListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActiveTimeTariffIntervalListLink",
                                EMBER_EXI_QNAME_ActiveTimeTariffIntervalListLink,
                                emberExiActiveTimeTariffIntervalListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TimeTariffIntervalList",
                                EMBER_EXI_QNAME_TimeTariffIntervalList,
                                emberExiTimeTariffIntervalListStructData,
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

  assert(emberExiStructUnitTest("EndDeviceControl",
                                EMBER_EXI_QNAME_EndDeviceControl,
                                emberExiEndDeviceControlStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SupplyInterruptionOverride",
                                EMBER_EXI_QNAME_SupplyInterruptionOverride,
                                emberExiSupplyInterruptionOverrideStructData,
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

  assert(emberExiStructUnitTest("DERCurveLink",
                                EMBER_EXI_QNAME_DERCurveLink,
                                emberExiDERCurveLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("AccountBalanceLink",
                                EMBER_EXI_QNAME_AccountBalanceLink,
                                emberExiAccountBalanceLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActiveCreditRegisterListLink",
                                EMBER_EXI_QNAME_ActiveCreditRegisterListLink,
                                emberExiActiveCreditRegisterListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ActiveSupplyInterruptionOverrideListLink",
                                EMBER_EXI_QNAME_ActiveSupplyInterruptionOverrideListLink,
                                emberExiActiveSupplyInterruptionOverrideListLinkStructData,
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

  assert(emberExiStructUnitTest("AccountingUnit",
                                EMBER_EXI_QNAME_AccountingUnit,
                                emberExiAccountingUnitStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CreditRegisterListLink",
                                EMBER_EXI_QNAME_CreditRegisterListLink,
                                emberExiCreditRegisterListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PrepayOperationStatusLink",
                                EMBER_EXI_QNAME_PrepayOperationStatusLink,
                                emberExiPrepayOperationStatusLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("SupplyInterruptionOverrideListLink",
                                EMBER_EXI_QNAME_SupplyInterruptionOverrideListLink,
                                emberExiSupplyInterruptionOverrideListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("Prepayment",
                                EMBER_EXI_QNAME_Prepayment,
                                emberExiPrepaymentStructData,
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

  assert(emberExiStructUnitTest("ServiceChange",
                                EMBER_EXI_QNAME_ServiceChange,
                                emberExiServiceChangeStructData,
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

  assert(emberExiStructUnitTest("BillingReadingSetListLink",
                                EMBER_EXI_QNAME_BillingReadingSetListLink,
                                emberExiBillingReadingSetListLinkStructData,
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

  assert(emberExiStructUnitTest("BillingMeterReadingBase",
                                EMBER_EXI_QNAME_BillingMeterReadingBase,
                                emberExiBillingMeterReadingBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ProjectionReading",
                                EMBER_EXI_QNAME_ProjectionReading,
                                emberExiProjectionReadingStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ProjectionReadingList",
                                EMBER_EXI_QNAME_ProjectionReadingList,
                                emberExiProjectionReadingListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("HistoricalReading",
                                EMBER_EXI_QNAME_HistoricalReading,
                                emberExiHistoricalReadingStructData,
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

  assert(emberExiStructUnitTest("FixedVAr",
                                EMBER_EXI_QNAME_FixedVAr,
                                emberExiFixedVArStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CurvePairType",
                                EMBER_EXI_QNAME_CurvePairType,
                                emberExiCurvePairTypeStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERControlBase",
                                EMBER_EXI_QNAME_DERControlBase,
                                emberExiDERControlBaseStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERControl",
                                EMBER_EXI_QNAME_DERControl,
                                emberExiDERControlStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERControlList",
                                EMBER_EXI_QNAME_DERControlList,
                                emberExiDERControlListStructData,
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

  assert(emberExiStructUnitTest("ReadingList",
                                EMBER_EXI_QNAME_ReadingList,
                                emberExiReadingListStructData,
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

  assert(emberExiStructUnitTest("SupplyInterruptionOverrideList",
                                EMBER_EXI_QNAME_SupplyInterruptionOverrideList,
                                emberExiSupplyInterruptionOverrideListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CustomerAgreementListLink",
                                EMBER_EXI_QNAME_CustomerAgreementListLink,
                                emberExiCustomerAgreementListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ServiceSupplierLink",
                                EMBER_EXI_QNAME_ServiceSupplierLink,
                                emberExiServiceSupplierLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CustomerAccount",
                                EMBER_EXI_QNAME_CustomerAccount,
                                emberExiCustomerAccountStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CustomerAccountList",
                                EMBER_EXI_QNAME_CustomerAccountList,
                                emberExiCustomerAccountListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CustomerAgreementList",
                                EMBER_EXI_QNAME_CustomerAgreementList,
                                emberExiCustomerAgreementListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TimeTariffIntervalListLink",
                                EMBER_EXI_QNAME_TimeTariffIntervalListLink,
                                emberExiTimeTariffIntervalListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RateComponent",
                                EMBER_EXI_QNAME_RateComponent,
                                emberExiRateComponentStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("RateComponentList",
                                EMBER_EXI_QNAME_RateComponentList,
                                emberExiRateComponentListStructData,
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

  assert(emberExiStructUnitTest("EnvironmentalCost",
                                EMBER_EXI_QNAME_EnvironmentalCost,
                                emberExiEnvironmentalCostStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ConsumptionTariffInterval",
                                EMBER_EXI_QNAME_ConsumptionTariffInterval,
                                emberExiConsumptionTariffIntervalStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("ConsumptionTariffIntervalList",
                                EMBER_EXI_QNAME_ConsumptionTariffIntervalList,
                                emberExiConsumptionTariffIntervalListStructData,
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

  assert(emberExiStructUnitTest("BillingReadingListLink",
                                EMBER_EXI_QNAME_BillingReadingListLink,
                                emberExiBillingReadingListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("BillingReadingSet",
                                EMBER_EXI_QNAME_BillingReadingSet,
                                emberExiBillingReadingSetStructData,
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

  assert(emberExiStructUnitTest("TariffProfile",
                                EMBER_EXI_QNAME_TariffProfile,
                                emberExiTariffProfileStructData,
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

  assert(emberExiStructUnitTest("TextMessageListLink",
                                EMBER_EXI_QNAME_TextMessageListLink,
                                emberExiTextMessageListLinkStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TargetReading",
                                EMBER_EXI_QNAME_TargetReading,
                                emberExiTargetReadingStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TargetReadingList",
                                EMBER_EXI_QNAME_TargetReadingList,
                                emberExiTargetReadingListStructData,
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

  assert(emberExiStructUnitTest("CreditRegister",
                                EMBER_EXI_QNAME_CreditRegister,
                                emberExiCreditRegisterStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("CreditRegisterList",
                                EMBER_EXI_QNAME_CreditRegisterList,
                                emberExiCreditRegisterListStructData,
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

  assert(emberExiStructUnitTest("MessagingProgramList",
                                EMBER_EXI_QNAME_MessagingProgramList,
                                emberExiMessagingProgramListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("PrepaymentList",
                                EMBER_EXI_QNAME_PrepaymentList,
                                emberExiPrepaymentListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("TariffProfileList",
                                EMBER_EXI_QNAME_TariffProfileList,
                                emberExiTariffProfileListStructData,
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

  assert(emberExiStructUnitTest("PrepayOperationStatus",
                                EMBER_EXI_QNAME_PrepayOperationStatus,
                                emberExiPrepayOperationStatusStructData,
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

  assert(emberExiStructUnitTest("DERList",
                                EMBER_EXI_QNAME_DERList,
                                emberExiDERListStructData,
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

  assert(emberExiStructUnitTest("DERProgramList",
                                EMBER_EXI_QNAME_DERProgramList,
                                emberExiDERProgramListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("BillingPeriod",
                                EMBER_EXI_QNAME_BillingPeriod,
                                emberExiBillingPeriodStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("BillingPeriodList",
                                EMBER_EXI_QNAME_BillingPeriodList,
                                emberExiBillingPeriodListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("DERCurveList",
                                EMBER_EXI_QNAME_DERCurveList,
                                emberExiDERCurveListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("AccountBalance",
                                EMBER_EXI_QNAME_AccountBalance,
                                emberExiAccountBalanceStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

  assert(emberExiStructUnitTest("HistoricalReadingList",
                                EMBER_EXI_QNAME_HistoricalReadingList,
                                emberExiHistoricalReadingListStructData,
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

  assert(emberExiStructUnitTest("BillingReadingSetList",
                                EMBER_EXI_QNAME_BillingReadingSetList,
                                emberExiBillingReadingSetListStructData,
                                grammarSet, bits, outputBuffer,
                                exiUnitTestChildCount)
         == EMBER_EXI_STATUS_OK);
  dot();

}
