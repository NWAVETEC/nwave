// This file is generated. Please do not edit manually.
// 
//

#include PLATFORM_HEADER
#include "stack/include/ember-types.h"
#include "hal/hal.h"
#include "app/afv6/include/af.h"
#include "app/util/exi/exi.h"
#include GENERATED_EXI_QNAMES
#include GENERATED_EXI_TYPES
#include "stack/framework/buffer-management.h"
#include "app/afv6/plugin/common/se2-library.h"
#include "app/afv6/plugin/common/common.h"
#include "app/afv6/plugin/common/uri-handler.h"
#include "app/afv6/plugin/exi/exi-utilities.h"
#include "app/afv6/plugin/billing-server/billing-server.h"
#include "app/afv6/plugin/common/scratchpad.h"
#include "stack/include/ember-ip.h"
#include "app/util/ip/print-utilities.h"
#include "app/afv6/plugin/der-server/der-server.h"
#include "app/afv6/plugin/common/list.h"
#include "app/afv6/plugin/common/scheduled-object.h"
#include "app/afv6/plugin/drlc-common/end-device-control.h"
#include "app/afv6/plugin/drlc-common/drlc-common.h"
#include "stack/include/stack-info.h"
#include "app/afv6/plugin/drlc-server/drlc-server.h"
#include "app/afv6/plugin/common/subscription-defines.h"
#include "app/afv6/plugin/messaging-server/messaging-server.h"
#include "app/afv6/plugin/messaging-common/text-message.h"
#include "app/afv6/plugin/metering-common/reading.h"
#include "app/afv6/plugin/metering-server/metering-server.h"
#include "app/afv6/plugin/common/uri-discoverer.h"
#include "app/afv6/plugin/server/server.h"
#include "app/afv6/plugin/netstat-server/counters.h"
#include "app/afv6/plugin/netstat-server/netstat-server.h"
#include "app/afv6/plugin/prepayment-server/prepayment-server.h"
#include "app/afv6/plugin/pricing-server/pricing-server.h"
#include "app/afv6/plugin/server/response.h"
#include "app/afv6/plugin/common/end-device.h"
#include "app/afv6/plugin/software-download-server/software-download-server.h"
#include "stack/include/rest.h"
#include "stack/include/event.h"
#include CONFIGURATION_HEADER
#include "app/afv6/plugin/subscription-server/subscription-server.h"
#include "app/afv6/plugin/time-server/time-server.h"


// Init callback is called initially by the framework.
void emberAfv6Init(void)
{
}


//
// for the /bill URI handler
//
boolean emberAfServerFillCustomerAccountList
  (EmberExiGeneratedCustomerAccountList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(CustomerAccountList),
     MAKE_STRUCT_SPEC(CustomerAccount),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillCustomerAccount,
     emberBillUriList,
     scratchpad);
}


//
// for the /bill/# URI handler
//
boolean
emberAfServerFillCustomerAccount(EmberExiGeneratedCustomerAccount *account,
                                 const UriData *data,
                                 Scratchpad *scratchpad)
{
  if (data->numbers[0] == 0) {
    // fill in the service supplier link
    account->ServiceSupplierLink_option =
      emConstructListLink(1, emberBillSsUriList, data, TRUE, scratchpad);

    // fill in the customer agreement list link
    account->CustomerAgreementListLink_option =
      emConstructListLink(1, emberBillBpUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


//
// for the /bill/#/ca URI handler
//
boolean emberAfServerFillCustomerAgreementList
  (EmberExiGeneratedCustomerAgreementList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(CustomerAgreementList),
     MAKE_STRUCT_SPEC(CustomerAgreement),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillCustomerAgreement,
     emberBillUriList,
     scratchpad);
}


//
// for the /bill/#/ca/# URI handler
//
boolean emberAfServerFillCustomerAgreement
  (EmberExiGeneratedCustomerAgreement *agreement,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 2, 0, 0)) {
    agreement->ActiveBillingPeriodListLink_option =
      emConstructListLink(1, emberBillActBpUriList, data, TRUE, scratchpad);
    agreement->ActiveProjectionReadingListLink_option =
      emConstructListLink(1,
                          emberBillActProUriList,
                          data,
                          FALSE,
                          scratchpad);
    agreement->ActiveTargetReadingListLink_option =
      emConstructListLink(1,
                          emberBillActTarUriList,
                          data,
                          FALSE,
                          scratchpad);
    agreement->BillingPeriodListLink_option =
      emConstructListLink(1, emberBillBpUriList, data, TRUE, scratchpad);
    agreement->HistoricalReadingListLink_option =
      emConstructListLink(1, emberBillUriList, data, TRUE, scratchpad);
    agreement->ProjectionReadingListLink_option =
      emConstructListLink(1,
                          emberBillProUriList,
                          data,
                          FALSE,
                          scratchpad);
    return TRUE;
  }

  return FALSE;
}


// for the /bill/#/ca/#/bp/# URI handler
boolean emberAfServerFillBillingPeriod(EmberExiGeneratedBillingPeriod *period,
                                         const UriData *data,
                                         Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    period->interval = emFillScratchpadForExi(DateTimeInterval, scratchpad);
    period->interval->start = 20;
    period->interval->duration = 21;
    return TRUE;
  }

  return FALSE;
}


// for the /bill/#/ca/#/bp URI handler
boolean
emberAfServerFillBillingPeriodList(EmberExiGeneratedBillingPeriodList *list,
                                   const UriData *data,
                                   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(BillingPeriodList),
       MAKE_STRUCT_SPEC(BillingPeriod),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillBillingPeriod,
       emberBillUriList,
       scratchpad);
  }

  return FALSE;
}


// for the /bill/#/ca/#/pro/# URI handler
boolean emberAfServerFillProjectionReading
  (EmberExiGeneratedProjectionReading *reading,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    reading->BillingReadingSetListLink_option =
      emConstructListLink(1, emberBillUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


// for the /bill/#/ca/#/pro URI handler
boolean emberAfServerFillProjectionReadingList
  (EmberExiGeneratedProjectionReadingList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(ProjectionReadingList),
       MAKE_STRUCT_SPEC(ProjectionReading),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillProjectionReading,
       emberBillProUriList,
       scratchpad);
  }

  return FALSE;
}


// for the /bill/#/ca/#/ver/#/brs/#/br/# URI handler
boolean
emberAfServerFillBillingReading(EmberExiGeneratedBillingReading *reading,
                                const UriData *data,
                                Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 5, 0, 0, 0, 0, 0)) {
    reading->Charge_count = 0;
    return TRUE;
  }

  return FALSE;
}


// for the /bill/#/ca/#/ver/#/brs/# URI handler
boolean
emberAfServerFillBillingReadingSet(EmberExiGeneratedBillingReadingSet *set,
                                   const UriData *data,
                                   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 4, 0, 0, 0, 0)) {
    set->BillingReadingListLink_option =
      emConstructListLink(1, emberBillUriList, data, TRUE, scratchpad);

    // create the time period
    set->timePeriod = emFillScratchpadForExi(DateTimeInterval, scratchpad);
    set->timePeriod->start = 10;
    set->timePeriod->duration = 100;
    return TRUE;
  }

  return FALSE;
}


// for the /bill/#/ca/#/ver/#/brs URI handler
boolean emberAfServerFillBillingReadingSetList
  (EmberExiGeneratedBillingReadingSetList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(BillingReadingSetList),
       MAKE_STRUCT_SPEC(BillingReadingSet),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillBillingReadingSet,
       emberBillUriList,
       scratchpad);
  }

  return FALSE;
}


// for the /bill/#/ca/#/ver/#/brs/#/br URI handler
boolean
emberAfServerFillBillingReadingList(EmberExiGeneratedBillingReadingList *list,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 4, 0, 0, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(BillingReadingList),
       MAKE_STRUCT_SPEC(BillingReading),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillBillingReadingSet,
       emberBillUriList,
       scratchpad);
  }

  return FALSE;
}


// for the /bill/#/ca/#/tar/# URI handler
boolean
emberAfServerFillTargetReading(EmberExiGeneratedTargetReading *reading,
                               const UriData *data,
                               Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    reading->BillingReadingSetListLink_option =
      emConstructListLink(1, emberBillUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


// for the /bill/#/ca/#/tar URI handler
boolean
emberAfServerFillTargetReadingList(EmberExiGeneratedTargetReadingList *list,
                                   const UriData *data,
                                   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(TargetReadingList),
       MAKE_STRUCT_SPEC(TargetReading),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillTargetReading,
       emberBillTarUriList,
       scratchpad);
  }

  return FALSE;
}


// for the /bill/#/ca/#/ver/# URI handler
boolean emberAfServerFillHistoricalReading
  (EmberExiGeneratedHistoricalReading *reading,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    reading->BillingReadingSetListLink_option =
      emConstructListLink(1, emberBillUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


// for the /bill/#/ca/#/ver URI handler
boolean emberAfServerFillHistoricalReadingList
  (EmberExiGeneratedHistoricalReadingList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(HistoricalReadingList),
       MAKE_STRUCT_SPEC(HistoricalReading),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillHistoricalReading,
       emberBillUriList,
       scratchpad);
  }

  return FALSE;
}


// for the /bill/#/ss URI handler
boolean
emberAfServerFillServiceSupplier(EmberExiGeneratedServiceSupplier *supplier,
                                 const UriData *data,
                                 Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 1, 0)) {
    supplier->email_option =
      emFillScratchpadString(scratchpad, "support@ember.com");
    return TRUE;
  }

  return FALSE;
}


// Init callback is called when the application starts
void emberAfSe2AppInit(void)
{
}


// Tick callback is called upon each tick
void emberAfSe2AppTick(void)
{
}


void emberJoinNetworkReturn(EmberStatus status)
{
  boolean success = (status == EMBER_SUCCESS);
  int16u joinTime = halCommonGetInt16uQuarterSecondTick() - startTimeQs;
  emberAfPluginCommonPrintln("Join %s in %u.%u seconds",
                             success ? "complete" : "failed",
                             joinTime >> 2,
                             25 * (joinTime & 3));
}


void emberAfServerDiscoveredHandler(Ipv6Address *serverAddress)
{
  #ifndef CORTEXM3
    // add a UDP peer
    emberAddUdpPeer(serverAddress->contents);
  #endif
}


void emberInitReturn(EmberStatus status)
{
}


void emberFormNetworkReturn(EmberStatus status)
{
  printFormStatus(status);
  emberPermitJoining(INT16U_MAX, FALSE);
}


void emberResumeNetworkReturn(EmberStatus status)
{
  printStatus(status, "Resume", FALSE);
  emberPermitJoining(INT16U_MAX, FALSE);
}


void emberSetTxPowerModeReturn(EmberStatus status)
{
  assert(status == EMBER_SUCCESS);
}


void emberGetRipEntryReturn(int8u index, const EmberRipEntry *entry)
{
  int8u in = entry->incomingLinkQuality;
  int8u out = entry->outgoingLinkQuality;
  if (entry->ripMetric != 0 || entry->nextHopIndex != 0 || in != 0 || out != 0) {
    if (entry->type == EMBER_ROUTER) {
      int8u in = entry->incomingLinkQuality;
      int8u out = entry->outgoingLinkQuality;
      int8u ripLinkCost = (in == 0
                           || out == 0
                           || ! entry->mleSync
                           || entry->age == 0
                           ? 0 // RIP_INFINITY
                           : (in > 2 || out > 2
                              ? 6 // RIP_MAX_METRIC - 1
                              : (in < out
                                 ? out
                                 : in)));
      emberSerialPrintfLine(
        1,
        "device type: ROUTER index:%u next_hop:%u metric:%u link:%u in:%u out:%u lm:%d sync:%s age:%d",
        index,
        entry->nextHopIndex,
        entry->ripMetric,
        ripLinkCost,
        in,
        out,
        entry->rollingLinkMargin,
        entry->mleSync ? "y" : "-",
        entry->age);
    } else {
      emberSerialPrintf(1, "device type: LURKER index:%u eui:", index);
      int8u i;
      for (i = 0; i < 8; i++) {
        emberSerialPrintf(1, "%x", entry->eui64[7 - i]);
      }
      emberSerialPrintfLine(
      1,
      " in:%u lm:%d sync:%s age:%d",
      entry->incomingLinkQuality,
      entry->outgoingLinkQuality,
      entry->mleSync ? "y" : "-",
      entry->age);
    }
  }
}


void emberGetCounterReturn(EmberCounterType type, int16u value) {}


// /derProgram
boolean emberAfServerFillDerProgramList(EmberExiGeneratedDERProgramList *list,
                                        const UriData *data,
                                        Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(DERProgramList),
     MAKE_STRUCT_SPEC(DERProgram),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillDerProgram,
     emberDerProgramCurveUriList,
     scratchpad);
}


// /derProgram/#
boolean emberAfServerFillDerProgram(EmberExiGeneratedDERProgram *program,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 1, 0)) {
    program->DERControlListLink_option =
      emConstructListLink(1,
                          emberDerProgramControlUriList,
                          data,
                          TRUE,
                          scratchpad);
    program->DERCurveListLink_option =
      emConstructListLink(1,
                          emberDerProgramCurveUriList,
                          data,
                          TRUE,
                          scratchpad);
    return TRUE;
  }

  return FALSE;
}


// /derp/#/derControl
boolean emberAfServerFillDerControlList(EmberExiGeneratedDERControlList *list,
                                        const UriData *data,
                                        Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 1, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(DERControlList),
       MAKE_STRUCT_SPEC(DERControl),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillDerControl,
       emberDerProgramControlUriList,
       scratchpad);
  }

  return FALSE;
}


// /derp/#/derControl/#
boolean emberAfServerFillDerControl(EmberExiGeneratedDERControl *control,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 2, 0, 0)) {
    control->interval = emFillScratchpadForExi(DateTimeInterval, scratchpad);
    control->interval->start = 31338;
    control->interval->duration = 300;
    control->EventStatus = emFillScratchpadForExi(EventStatus, scratchpad);
    control->DERControlBase =
      emFillScratchpadForExi(DERControlBase, scratchpad);
    return TRUE;
  }

  return FALSE;
}


// /der
boolean emberAfServerFillDerList(EmberExiGeneratedDERList *list,
                                 const UriData *data,
                                 Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(DERList),
     MAKE_STRUCT_SPEC(DER),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillDer,
     emberDerUriList,
     scratchpad);
}


// /der/#
boolean emberAfServerFillDer(EmberExiGeneratedDER *der,
                             const UriData *data,
                             Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 1, 0)) {
    return TRUE;
  }

  return FALSE;
}


// /derProgram/#/derCurve
boolean emberAfServerFillDerCurveList(EmberExiGeneratedDERCurveList *list,
                                      const UriData *data,
                                      Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(DERCurveList),
       MAKE_STRUCT_SPEC(DERCurve),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillDerCurve,
       emberDerProgramCurveUriList,
       scratchpad);
  }

  return FALSE;
}


// /derProgram/#/derCurve/#
boolean emberAfServerFillDerCurve(EmberExiGeneratedDERCurve *curve,
                                  const UriData *data,
                                  Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    curve->description_option = emFillScratchpadString(scratchpad, "fixme");
    curve->CurveData_count = 1;
    curve->CurveData_array = emFillScratchpadForExi(CurveData, scratchpad);
    return TRUE;
  }

  return FALSE;
}


//
// object filler for the /dr/#/edc URI handler
//
boolean emberAfServerFillEndDeviceControlList
  (EmberExiGeneratedEndDeviceControlList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,      // the list
     MAKE_STRUCT_SPEC(EndDeviceControlList), // list type
     MAKE_STRUCT_SPEC(EndDeviceControl),     // element type
     emListGetSize(emEndDeviceControlList),  // list size
     data,
     (ObjectFiller)emberAfServerFillEndDeviceControl,
     emberDrUriList,
     scratchpad);
}


boolean
emberAfServerFillEndDeviceControl(EmberExiGeneratedEndDeviceControl *exiControl,
                                  const UriData *data,
                                  Scratchpad *scratchpad)
{
  EndDeviceControl *myControl =
    (EndDeviceControl*)emListGetFromIndex(emEndDeviceControlList,
                                          data->numbers[1]);

  if (myControl == NULL) {
    return FALSE;
  }

  exiControl->structType = emberExiEndDeviceControlStructDataIndex;
  exiControl->DutyCycle_option =
    emFillScratchpadForExi(DutyCycle, scratchpad);
  exiControl->DutyCycle_option->normalValue = myControl->normalValue;

  exiControl->interval =
    emFillScratchpad(scratchpad,
                     NULL,
                     sizeof(EmberExiGeneratedDateTimeInterval));
  exiControl->interval->start = myControl->scheduledObject.start;
  exiControl->interval->duration = myControl->scheduledObject.duration;
  exiControl->creationTime = emberGetTime();

  exiControl->SetPoint_option =
    emFillScratchpadForExi(SetPoint, scratchpad);

  if (myControl->coolingSetPoint != 0xFFFF) {
    exiControl->SetPoint_option->has_coolingSetpoint_option = TRUE;
    exiControl->SetPoint_option->coolingSetpoint_option =
      myControl->coolingSetPoint;
  }

  if (myControl->heatingSetPoint != 0xFFFF) {
    exiControl->SetPoint_option->has_heatingSetpoint_option = TRUE;
    exiControl->SetPoint_option->heatingSetpoint_option =
      myControl->heatingSetPoint;
  }

  exiControl->Offset_option = emFillScratchpadForExi(Offset, scratchpad);

  if (myControl->coolingOffset != 0xFF) {
    exiControl->Offset_option->has_coolingOffset_option = TRUE;
    exiControl->Offset_option->coolingOffset_option =
      myControl->coolingOffset;
  }

  if (myControl->heatingOffset != 0xFF) {
    exiControl->Offset_option->has_heatingOffset_option = TRUE;
    exiControl->Offset_option->heatingOffset_option =
      myControl->heatingOffset;
  }

  exiControl->EventStatus = emFillScratchpadForExi(EventStatus, scratchpad);
  emConvertEventStatusToExiStruct(&myControl->scheduledObject,
                                  exiControl->EventStatus);
  exiControl->EventStatus->reason_option =
    emFillScratchpadString(scratchpad, "my reason");

  exiControl->description_option =
    emFillScratchpadString(scratchpad, "my description");
  exiControl->drProgramMandatory = myControl->drProgramMandatory;

  UriData *newData = emCreateBumpedUriData(data, scratchpad);
  newData->numberCount = 1;

  exiControl->replyTo_option =
    emConstructUri(emberRspsUriList, newData, TRUE, scratchpad);

  exiControl->has_randomizeStart_option = TRUE;
  exiControl->has_randomizeDuration_option = TRUE;
  exiControl->randomizeStart_option = myControl->randomizeStart;
  exiControl->randomizeDuration_option = myControl->randomizeDuration;

  emberStoreHighLowInt32u(exiControl->deviceCategory.bytes,
                          myControl->scheduledObject.deviceCategory);
  exiControl->deviceCategory.length = 4;
  exiControl->mRID.length = sizeof(myControl->scheduledObject.mRid);
  MEMCOPY(exiControl->mRID.bytes,
          myControl->scheduledObject.mRid,
          sizeof(myControl->scheduledObject.mRid));

  exiControl->has_responseRequired_option = TRUE;
  exiControl->responseRequired_option.bytes[0] =
    (myControl->scheduledObject.flags
     & SCHEDULED_OBJECT_RESPONSE_REQUIRED_MASK);
  exiControl->responseRequired_option.length = 1;

  if (myControl->scheduledObject.replyTo != NULL_BUFFER) {
    exiControl->replyTo_option = emFillScratchpadString
      (scratchpad, emGetBufferPointer(myControl->scheduledObject.replyTo));
  }

  return TRUE;
}


//
// the /dr/# URI handler
//
boolean emberAfServerFillDemandResponseProgram
  (EmberExiGeneratedDemandResponseProgram *program,
   const UriData *data,
   Scratchpad *scratchpad)
{
  //
  // if you support more than one dr, add them here
  //
  if (data->numbers[0] == 0) {
    program->primacy = EMBER_AF_PLUGIN_DRLC_SERVER_PROVIDER_PRIMACY_TYPE;

    //
    // create the link to the /dr/#/edc list
    //
    program->EndDeviceControlListLink_option =
      emConstructListLink(1, emberDrUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


//
// create a demand response program list
// for the /dr URI handler
//
boolean emberAfServerFillDemandResponseProgramList
  (EmberExiGeneratedDemandResponseProgramList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u demandResponseProgramListSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(DemandResponseProgramList),
     MAKE_STRUCT_SPEC(DemandResponseProgram),
     demandResponseProgramListSize,
     data,
     (ObjectFiller)emberAfServerFillDemandResponseProgram,
     emberDrUriList,
     scratchpad);
}


//
// object creator for the /msg/# URI handler
//
boolean
emberAfServerFillMessagingProgram(EmberExiGeneratedMessagingProgram *program,
                                  UriData *data,
                                  Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 1, 0)) {
    // create a dummy mRID
    program->mRID.length = 16;
    int8u dummyMrid[16] = {0, 1, 2, 3, 4, 5, 6, 7,
                           1, 2, 3, 4, 5, 6, 7, 8};
    MEMCOPY(program->mRID.bytes, dummyMrid, sizeof(dummyMrid));

    // fill the locale
    program->locale = emFillScratchpadString(scratchpad, "en_US");

    // fill the active text message list link
    program->ActiveTextMessageListLink_option =
      emConstructListLink(emListGetSize(emTextMessageList),
                          emberActMsgUriList,
                          data,
                          TRUE,
                          scratchpad);

    // fill the text message list link
    program->TextMessageListLink_option =
      emConstructListLink(emListGetSize(emTextMessageList),
                          emberMsgUriList,
                          data,
                          TRUE,
                          scratchpad);
    return TRUE;
  }

  return FALSE;
}


boolean emberAfServerFillMessagingProgramList
  (EmberExiGeneratedMessagingProgramList *list,
   UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(MessagingProgramList),
     MAKE_STRUCT_SPEC(MessagingProgram),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillMessagingProgram,
     emberMsgUriList,
     scratchpad);
}


boolean emberAfServerFillPriorReading(EmberExiGeneratedReading *reading,
                                      const UriData *data,
                                      Scratchpad *scratchpad)
{
  Reading *myReading =
    (Reading*)emListGetFromIndex(emPriorReadingList, data->numbers[3]);

  if (myReading != NULL) {
    reading->has_value_option = TRUE;
    reading->value_option = myReading->value;
    reading->timePeriod_option =
      emFillScratchpadForExi(DateTimeInterval, scratchpad);
    reading->timePeriod_option->start = myReading->start;
    reading->timePeriod_option->duration = myReading->duration;
    return TRUE;
  }

  return FALSE;
}


//
// create a ReadingList
// for the /upt/#/mr/#/rs/#/r URI handler
//
boolean emberAfServerFillPriorReadingList
  (EmberExiGeneratedReadingList *readingList,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    //
    // there's one reading list, modify as needed
    //
    int8u readingListCount = 1;

    return emberFillExiListResources
      ((EmberExiGeneratedResource *)readingList,
       MAKE_STRUCT_SPEC(ReadingList),
       MAKE_STRUCT_SPEC(Reading),
       readingListCount,
       data,
       (ObjectFiller)emberAfServerFillPriorReading,
       emberUptUriList,
       scratchpad);
  }

  return FALSE;
}


boolean emberAfServerFillReadingSet(EmberExiGeneratedReadingSet *readingSet,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  readingSet->timePeriod =
    emFillScratchpadForExi(DateTimeInterval, scratchpad);

  // edit these values to your needs
  readingSet->timePeriod->start = 100;
  readingSet->timePeriod->duration = 1000;
  readingSet->ReadingListLink_option =
    emConstructListLink(1, emberUptUriList, data, TRUE, scratchpad);
  return TRUE;
}


//
// create a ReadingSetList
// for the /upt/#/mr/#/rs URI handler
//
boolean
emberAfServerFillReadingSetList(EmberExiGeneratedReadingSetList *readingSetList,
                                const UriData *data,
                                Scratchpad *scratchpad)
{
  int8u readingSetListCount = 1;

  // support the list at /upt/0/mr/0/rs, change the following line if needed
  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)readingSetList,
       MAKE_STRUCT_SPEC(ReadingSetList),
       MAKE_STRUCT_SPEC(ReadingSet),
       readingSetListCount,
       data,
       (ObjectFiller)emberAfServerFillReadingSet,
       emberUptUriList,
       scratchpad);
  }

  return FALSE;
}


//
// fill a reading type
//
boolean emberAfServerFillReadingType(EmberExiGeneratedReadingType *type,
                                     const UriData *data,
                                     Scratchpad *scratchpad)
{
  // the URI is /upt/0/mr/0/rt, update this as needed
  boolean result = emCheckUriNumbers(data, 2, 0, 0);

  if (result) {
    // fill these in with your values
    type->has_uom_option = TRUE;
    type->uom_option = 125;
  }

  return result;
}


//
// create an instantaneous Reading
// for the /upt/#/mr/#/r URI handler
//
boolean emberAfServerFillReading(EmberExiGeneratedReading *reading,
                                 const UriData *data,
                                 Scratchpad *scratchpad)
{
  assert(data->numberCount == 2);
  int8u readingNumber = data->numbers[1];
  boolean result =
    (readingNumber
     < EMBER_AF_PLUGIN_METERING_SERVER_READING_COUNT);

  if (result && emReadings[readingNumber].status != 0) {
    reading->has_value_option = TRUE;
    reading->value_option = emReadings[readingNumber].value;
    reading->timePeriod_option =
      emFillScratchpadForExi(DateTimeInterval, scratchpad);
    reading->timePeriod_option->duration =
      emReadings[readingNumber].duration;
    reading->timePeriod_option->start =
      emReadings[readingNumber].start;
  }

  return result;
}


boolean emberAfServerFillMeterReading(EmberExiGeneratedMeterReading *reading,
                                      const UriData *data,
                                      Scratchpad *scratchpad)
{
  reading->ReadingTypeLink =
    emConstructLink(emberUptReadingTypeUriList, data, TRUE, scratchpad);
  reading->ReadingLink_option =
    emConstructLink(emberUptReadingUriList, data, TRUE, scratchpad);
  reading->ReadingSetListLink_option =
    emConstructListLink(1, emberUptUriList, data, TRUE, scratchpad); // fixme
  reading->description_option =
    emFillScratchpadString(scratchpad, "Meter Reading #%u", data->numbers[1]);
  return TRUE;
}


//
// create a MeterReadingList
// for the /upt/#/mr URI handler
//
boolean
emberAfServerFillMeterReadingList(EmberExiGeneratedMeterReadingList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad)
{
  int8u meterReadingListCount =
    EMBER_AF_PLUGIN_METERING_SERVER_READING_COUNT;

  if (emCheckUriNumbers(data, 1, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(MeterReadingList),
       MAKE_STRUCT_SPEC(MeterReading),
       meterReadingListCount,
       data,
       (ObjectFiller)emberAfServerFillMeterReading,
       emberUptUriList,
       scratchpad);
  }

  return FALSE;
}


//
// create a UsagePoint
// for the /upt/# URI handler
//
boolean emberAfServerFillUsagePoint(EmberExiGeneratedUsagePoint *usagePoint,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  // set the description
  usagePoint->description_option =
    emFillScratchpadString(scratchpad, "Usage Point #%u", data->numbers[0]);

  // set the meter reading list link
  usagePoint->MeterReadingListLink_option =
    emConstructListLink(1, emberUptUriList, data, TRUE, scratchpad);

  return TRUE;
}


//
// create a UsagePointList
// for the /upt URI handler
//
boolean
emberAfServerFillUsagePointList(EmberExiGeneratedUsagePointList *usagePointList,
                                const UriData *data,
                                Scratchpad *scratchpad)
{
  //
  // there's one usage point, modify as needed
  //
  int8u usagePointCount = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)usagePointList,
     MAKE_STRUCT_SPEC(UsagePointList),
     MAKE_STRUCT_SPEC(UsagePoint),
     usagePointCount,
     data,
     (ObjectFiller)emberAfServerFillUsagePoint,
     emberUptUriList,
     scratchpad);
}


//
// for the /ns URI handler
//
boolean emberAfServerFillIpInterfaceList(EmberExiGeneratedIPInterfaceList *list,
                                         const UriData *data,
                                         Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(IPInterfaceList),
     MAKE_STRUCT_SPEC(IPInterface),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillIpInterface,
     emberNsUriList,
     scratchpad);
}


//
// for the /ns/# URI handler
//
boolean emberAfServerFillIpInterface(EmberExiGeneratedIPInterface *interface,
                                     const UriData *data,
                                     Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 1, 0)) {
    emFillIpInterface(interface);
    interface->IPAddrListLink_option =
      emConstructListLink(1, emberNsUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


//
// for the /ns/#/addr URI handler
//
boolean emberAfServerFillIpAddrList(EmberExiGeneratedIPAddrList *list,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 1, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(IPAddrList),
       MAKE_STRUCT_SPEC(IPAddr),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillIpAddr,
       emberNsUriList,
       scratchpad);
  }

  return FALSE;
}


//
// for the /ns/#/addr/# URI handler
//
boolean emberAfServerFillIpAddr(EmberExiGeneratedIPAddr *address,
                                const UriData *data,
                                Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 2, 0, 0)) {
    // set the address
    address->address.length = 16;
    MEMSET(address->address.bytes, 0, 16);
    address->RPLInstanceListLink_option =
      emConstructListLink(1, emberNsUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


//
// for the /ns/#/addr/#/rpl URI handler
//
boolean emberAfServerFillRplInstanceList(EmberExiGeneratedRPLInstanceList *list,
                                         const UriData *data,
                                         Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(RPLInstanceList),
       MAKE_STRUCT_SPEC(RPLInstance),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillRplInstance,
       emberNsUriList,
       scratchpad);
  }

  return FALSE;
}


//
// for the /ns/#/addr/#/rpl/# URI handler
//
boolean emberAfServerFillRplInstance(EmberExiGeneratedRPLInstance *instance,
                                     const UriData *data,
                                     Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    //DagTableEntry *entry = &emDagTable[0];
    // fix me

    instance->MOP = 3;
    instance->PRF = 3;
    instance->RPLInstanceID = 0; //entry->instanceId;
    instance->versionNumber = 0; //entry->version;
    instance->DODAGid = 1;
    instance->DODAGroot = 1;
    instance->groundedFlag = TRUE;
    instance->RPLSourceRoutesListLink_option =
      emConstructListLink(1, emberNsUriList, data, TRUE, scratchpad);
    return TRUE;
  }

  return FALSE;
}


//
// for the /ns/#/addr/#/rpl/#/srt URI handler
//
boolean
emberAfServerFillRplSourceRoutesList(EmberExiGeneratedRPLSourceRoutesList *list,
                                     const UriData *data,
                                     Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(RPLSourceRoutesList),
       MAKE_STRUCT_SPEC(RPLSourceRoutes),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillRplSourceRoutes,
       emberNsUriList,
       scratchpad);
  }

  return FALSE;
}


//
// for the /ns/#/addr/#/rpl/#/srt/# URI handler
//
boolean
emberAfServerFillRplSourceRoutes(EmberExiGeneratedRPLSourceRoutes *routes,
                                 const UriData *data,
                                 Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 4, 0, 0, 0, 0)) {
    return TRUE;
  }

  return FALSE;
}


//
// for the /ns/#/ll URI handler
//
boolean
emberAfServerFillLinkLayerInterfaceList(EmberExiGeneratedLLInterfaceList *list,
                                        const UriData *data,
                                        Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 1, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(LLInterfaceList),
       MAKE_STRUCT_SPEC(LLInterface),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillLinkLayerInterface,
       emberNsUriList,
       scratchpad);
  }

  return FALSE;
}


//
// for the /ns/#/ll/# URI handler
//
boolean
emberAfServerFillLinkLayerInterface(EmberExiGeneratedLLInterface *interface,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return TRUE;
  }

  return FALSE;
}


//
// for the /ns/#/ll/#/nbh URI handler
//
boolean emberAfServerFillNeighborList(EmberExiGeneratedNeighborList *list,
                                      const UriData *data,
                                      Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(NeighborList),
       MAKE_STRUCT_SPEC(Neighbor),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillNeighbor,
       emberNsUriList,
       scratchpad);
  }

  return FALSE;
}


//
// for the /ns/#/ll/#/nbh/# URI handler
//
boolean emberAfServerFillNeighbor(EmberExiGeneratedNeighbor *neighbor,
                                  const UriData *data,
                                  Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    return TRUE;
  }

  return FALSE;
}


//
// create an operation status
// for the /ppy/#/os URI handler
//
boolean emberAfServerFillPrepayOperationStatus
  (EmberExiGeneratedPrepayOperationStatus *status,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (data->numbers[0] == 0) {
    // set up the credit type change
    status->creditTypeChange_option =
      emFillScratchpadForExi(CreditTypeChange, scratchpad);
    status->creditTypeChange_option->newType = 1;
    status->creditTypeChange_option->startTime = 10;
    return TRUE;
  }

  return FALSE;
}


//
// create an interruption override
// for the /ppy/#/si/# URI handler
//
boolean emberAfServerFillSupplyInterruptionOverride
  (EmberExiGeneratedSupplyInterruptionOverride *override,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 2, 0, 0)) {
    // set up the date time interval
    override->interval = emFillScratchpadForExi(DateTimeInterval, scratchpad);
    override->interval->start = 10;
    override->interval->duration = 100;
    return TRUE;
  }

  return FALSE;
}


//
// create an interruption override list
// for the /ppy/#/si URI handler
//
boolean emberAfServerFillSupplyInterruptionOverrideList
  (EmberExiGeneratedSupplyInterruptionOverrideList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 1, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(SupplyInterruptionOverrideList),
       MAKE_STRUCT_SPEC(SupplyInterruptionOverride),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillSupplyInterruptionOverride,
       emberPrepaymentSiUriList,
       scratchpad);
  }

  return FALSE;
}


//
// create a credit register
// for the /ppy/#/cr URI Handler
//
boolean emberAfServerFillCreditRegister
  (EmberExiGeneratedCreditRegister *creditRegister,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (data->numbers[0] == 0) {
    creditRegister->creditAmount =
      emFillScratchpadForExi(AccountingUnit, scratchpad);
    creditRegister->creditAmount->value = 10;
    return TRUE;
  }

  return FALSE;
}


//
// create a credit register list
// for the /ppy/#/cr URI Handler
//
boolean emberAfServerFillCreditRegisterList
  (EmberExiGeneratedCreditRegisterList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (data->numbers[0] == 0) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(CreditRegisterList),
       MAKE_STRUCT_SPEC(CreditRegister),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillCreditRegister,
       emberPrepaymentCrUriList,
       scratchpad);
  }

  return FALSE;
}


//
// create an account balance
// for the /ppy/#/ab URI handler
//
boolean emberAfServerFillAccountBalance
  (EmberExiGeneratedAccountBalance *balance,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (data->numbers[0] == 0) {
    // set the available credit
    balance->availableCredit =
      emFillScratchpadForExi(AccountingUnit, scratchpad);
    balance->availableCredit->value = 1000;
    return TRUE;
  }

  return FALSE;
}


//
// create a prepayment
// for the /ppy/# URI handler
//
boolean emberAfServerFillPrepayment(EmberExiGeneratedPrepayment *prepayment,
                                    const UriData *data,
                                    Scratchpad *scratchpad)
{
  if (data->numbers[0] == 0) {
    // set the credit expiry level
    prepayment->creditExpiryLevel_option =
      emFillScratchpadForExi(AccountingUnit, scratchpad);
    prepayment->creditExpiryLevel_option->value = 100;

    // like /ppy/0/ab
    prepayment->AccountBalanceLink =
      emConstructListLink(1, emberPrepaymentAbUriList, data, TRUE, scratchpad);

    // like /ppy/0/cr
    prepayment->CreditRegisterListLink =
      emConstructListLink(1, emberPrepaymentCrUriList, data, TRUE, scratchpad);

    // like /ppy/0/os
    prepayment->PrepayOperationStatusLink =
      emConstructListLink(1, emberPrepaymentOsUriList, data, TRUE, scratchpad);

    // like /ppy/0/si
    prepayment->SupplyInterruptionOverrideListLink =
      emConstructListLink(1, emberPrepaymentSiUriList, data, TRUE, scratchpad);

    //
    // add the usage point
    //
    prepayment->UsagePoint_count = 0;
    prepayment->UsagePointLink_option =
      emConstructLink(emberUptUriList, data, TRUE, scratchpad);

    return TRUE;
  }

  return FALSE;
}


//
// create a prepayment list
// for the /ppy URI handler
//
boolean emberAfServerFillPrepaymentList(EmberExiGeneratedPrepaymentList *list,
                                        const UriData *data,
                                        Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(PrepaymentList),
     MAKE_STRUCT_SPEC(Prepayment),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillPrepayment,
     emberPrepaymentOsUriList,
     scratchpad);
}


//
// create a Tariff Profile List
// for the /tp URI handler
//
boolean emberAfServerFillTariffProfileList
  (EmberExiGeneratedTariffProfileList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(TariffProfileList),
     MAKE_STRUCT_SPEC(TariffProfile),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillTariffProfile,
     emberPricingUriList,
     scratchpad);
}


//
// create a Tariff Profile
// for the /tp/# URI handler
//
boolean emberAfServerFillTariffProfile
  (EmberExiGeneratedTariffProfile *profile,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 1, 0)) {
    profile->RateComponentListLink_option =
      emConstructListLink(1, emberPricingUriList, data, TRUE, scratchpad);
    profile->serviceCategoryKind = 0;
    return TRUE;
  }

  return FALSE;
}


//
// create a Rate Component List
// for the /tp/#/rc URI handler
//
boolean emberAfServerFillRateComponentList
  (EmberExiGeneratedRateComponentList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(RateComponentList),
     MAKE_STRUCT_SPEC(RateComponent),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillRateComponent,
     emberPricingUriList,
     scratchpad);
}


//
// create a Rate Component
// for the /tp/#/rc/# URI handler
//
boolean emberAfServerFillRateComponent
  (EmberExiGeneratedRateComponent *component,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 2, 0, 0)) {
    component->TimeTariffIntervalListLink_option =
      emConstructListLink(1, emberPricingUriList, data, TRUE, scratchpad);
    component->ReadingTypeLink = emCreateLink(scratchpad, "/rt/0");
    return TRUE;
  }

  return FALSE;
}


//
// create a Time Tariff Interval List
// for the /tp/#/rc/#/tti URI handler
//
boolean  emberAfServerFillTimeTariffIntervalList
  (EmberExiGeneratedTimeTariffIntervalList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 2, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(TimeTariffIntervalList),
       MAKE_STRUCT_SPEC(TimeTariffInterval),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillTimeTariffInterval,
       emberPricingUriList,
       scratchpad);
  }

  return FALSE;
}


//
// create a Time Tariff Interval
// for the /tp/#/rc/#/tti/# URI handler
//
boolean emberAfServerFillTimeTariffInterval
  (EmberExiGeneratedTimeTariffInterval *interval,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    interval->creationTime = 31337;
    interval->touTier = 3;

    //
    // fill in the status
    //
    interval->EventStatus = emFillScratchpadForExi(EventStatus, scratchpad);

    //
    // fill in the interval
    //
    interval->interval =
      emFillScratchpadForExi(DateTimeInterval, scratchpad);
    interval->interval->start = 10;
    interval->interval->duration = 20;

    interval->ConsumptionTariffIntervalListLink_option =
      emConstructListLink(1, emberPricingUriList, data, TRUE, scratchpad);

    return TRUE;
  }

  return FALSE;
}


//
// create a Consumption Tariff Interval List
// for the /tp/#/rc/#/tti/#/cti URI Handler
//
boolean emberAfServerFillConsumptionTariffIntervalList
  (EmberExiGeneratedConsumptionTariffIntervalList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  int8u listSize = 1;

  if (emCheckUriNumbers(data, 3, 0, 0, 0)) {
    return emberFillExiListResources
      ((EmberExiGeneratedResource *)list,
       MAKE_STRUCT_SPEC(ConsumptionTariffIntervalList),
       MAKE_STRUCT_SPEC(ConsumptionTariffInterval),
       listSize,
       data,
       (ObjectFiller)emberAfServerFillConsumptionTariffInterval,
       emberPricingUriList,
       scratchpad);
  }

  return FALSE;
}


//
// create a Consumption Tariff Interval
// for the /tp/#/rc/#/tti/#/cti/# URI handler
//
boolean emberAfServerFillConsumptionTariffInterval
  (EmberExiGeneratedConsumptionTariffInterval *interval,
   const UriData *data,
   Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 4, 0, 0, 0, 0)) {
    interval->consumptionBlock = 10;
    interval->EnvironmentalCost_count = 1;
    interval->EnvironmentalCost_array =
      emFillScratchpadForExi(EnvironmentalCost, scratchpad);
    interval->EnvironmentalCost_array->costLevel = 3;
    interval->EnvironmentalCost_array->amount = 31337;
    interval->EnvironmentalCost_array->costKind = 2;
    interval->startValue = 10;
    return TRUE;
  }

  return FALSE;
}


//
// object filler for the /edev/# URI handler
//
boolean emberAfServerFillEndDevice
  (EmberExiGeneratedEndDevice *exiEndDevice,
   const UriData *data,
   Scratchpad *scratchpad)
{
    assert(data->numberCount == 1);
    EndDevice *endDevice =
      (EndDevice*)emListGetFromIndex(emEndDeviceList, data->numbers[0]);

    if (endDevice != NULL) {
      //
      // add the power status link
      //
      exiEndDevice->PowerStatusLink_option =
          emConstructLink(emberPowerStatusUriList, data, TRUE, scratchpad);

      //
      // add the load shed availability link
      //
      exiEndDevice->LoadShedAvailabilityLink_option =
          emConstructLink(emberEdevLsaUriList, data, TRUE, scratchpad);

      //
      // add the log event list link
      //
      exiEndDevice->LogEventListLink_option =
          emConstructListLink(1, emberEdevLelUriList, data, TRUE, scratchpad);

      //
      // add the subscription list link
      //
      exiEndDevice->SubscriptionListLink_option =
        emConstructListLink(1, emberSubscriptionUriList, data, TRUE, scratchpad);

      //
      // add the configuration link
      //
      exiEndDevice->ConfigurationLink_option =
          emConstructLink(emberEdevCfgUriList, data, TRUE, scratchpad);

      //
      // add the device information link
      //
      exiEndDevice->DeviceInformationLink_option =
          emConstructLink(emberEdevDiUriList, data, TRUE, scratchpad);

      //
      // add the device status link
      //
      exiEndDevice->DeviceStatusLink_option =
          emConstructLink(emberEdevDstatUriList, data, TRUE, scratchpad);

      //
      // add the sfdi
      //
      exiEndDevice->sFDI = endDevice->sFdi;

      //
      // maybe add the function set assignments list link
      //
#ifdef EMBER_AF_PLUGIN_FUNCTION_SET_ASSIGNMENTS_SERVER
      exiEndDevice->FunctionSetAssignmentsListLink_option =
          emConstructListLink(1, emberFsaUriList, data, TRUE, scratchpad);
#endif

      return TRUE;
    }

    return FALSE;
}


//
// object filler for the /edev URI handler
//
boolean emberAfServerFillEndDeviceList
  (EmberExiGeneratedEndDeviceList *list,
   const UriData *data,
   Scratchpad *scratchpad)
{
  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,     // the list
     MAKE_STRUCT_SPEC(EndDeviceList),       // list type
     MAKE_STRUCT_SPEC(EndDevice),           // element type
     emListGetSize(emEndDeviceList),        // list size
     data,
     (ObjectFiller)emberAfServerFillEndDevice,
     emberEdevLsaUriList,
     scratchpad);
}


//
// callback for a client POST to /rsp/#/dr
//
void emberAfServerResponseHandler(Response *response) {
  int8u mRidString[50];
  emSprintfMrid(response->mRid,
                SCHEDULED_OBJECT_MRID_SIZE,
                mRidString,
                sizeof(mRidString));
  emberSerialPrintfLine(APP_SERIAL,
                        "Response of type %s at time %u, "
                        "status: %s, mRID: %s",
                        emberExiQnames[response->type],
                        emberGetTime(),
                        emberResponseStatusToString(response->status),
                        mRidString);
}


//
// /shinyNewFirmware URI handler
//
void emberAfServerShinyNewFirmwareUriHandler(const UriData *data)
{
  if (data->type == METHOD_GET) {
    const int8u *fileData = "This is a shiny new firmware!";
    emberCreateDataResponse(STATUS_OK,
                            fileData,
                            emStrlen(fileData),
                            data->content->type);
  } else {
    createEmptyResponse(STATUS_BAD_REQUEST);
  }
}


//
// create a FileList
// for the /file URI handler
//
boolean emberAfServerFillFileList(EmberExiGeneratedFileList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(FileList),
     MAKE_STRUCT_SPEC(File),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillFile,
     emberSoftwareDownloadUriList,
     scratchpad);
}


//
// create a File
// for the /file/# URI handler
//
boolean emberAfServerFillFile(EmberExiGeneratedFile *file,
                              const UriData *data,
                              Scratchpad *scratchpad)
{
  if (emCheckUriNumbers(data, 1, 0)) {
    file->size = 31338;
    file->fileURI = emFillScratchpadString(scratchpad, "/shinyNewFirmware");
    return TRUE;
  }

  return FALSE;
}


//
// create a subscription for the /edev/#/sub/# URI handler
//
boolean
emberAfServerFillSubscription(EmberExiGeneratedSubscription *subscription,
                              const UriData *data,
                              Scratchpad *scratchpad)
{
  if (data->numberCount == 2
      && data->numbers[0] == 0 // edev #0
      && data->numbers[1] < emGetSubscriptionCount()) {
    const Subscription *mySubscription =
      emGetSubscriptionFromIndex(data->numbers[1]);

    if (mySubscription != NULL) {
      subscription->subscribedResource = emFillScratchpadString
        (scratchpad, emGetBufferPointer(mySubscription->subscribedResource));
      subscription->notificationURI = emFillScratchpadString
        (scratchpad, emGetBufferPointer(mySubscription->subscriptionUri));
      subscription->Condition_option =
        emFillScratchpadForExi(Condition, scratchpad);
      return TRUE;
    }
  }

  return FALSE;
}


//
// create a subscription list for the /edev/#/sub URI handler
//
boolean
emberAfServerFillSubscriptionList(EmberExiGeneratedSubscriptionList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad)
{
  int8u listSize = 1;

  return emberFillExiListResources
    ((EmberExiGeneratedResource *)list,
     MAKE_STRUCT_SPEC(SubscriptionList),
     MAKE_STRUCT_SPEC(Subscription),
     listSize,
     data,
     (ObjectFiller)emberAfServerFillSubscription,
     emberSubscriptionUriList,
     scratchpad);
}


//
// Create a Time object
// for the /tm URI handler
//
boolean emberAfServerFillTime(EmberExiGeneratedTime *timeStruct,
                              const UriData *data,
                              Scratchpad *scratchpad)
{
  timeStruct->currentTime = emberGetTime();

#ifdef UNIX_SCRIPTED_HOST
  extern boolean emWritingTrace;
  extern boolean emReadingTrace;

  // we need a static value to match the test cases
  if (emWritingTrace || emReadingTrace) {
    timeStruct->currentTime = 33;
  }
#endif

  timeStruct->dstEndTime = 0;
  timeStruct->dstStartTime = 0;
  timeStruct->tzOffset = 0;
  timeStruct->dstOffset = 0;
  timeStruct->quality = 7;

  return TRUE;
}


