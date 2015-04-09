// This file is generated. Please do not edit manually.
// 
//

#include PLATFORM_HEADER
#include "stack/include/ember-types.h"
#include "hal/hal.h"
#include "stack/include/ember-ip.h"
#include "app/afv6/plugin/common/se2-library.h"
#include GENERATED_EXI_QNAMES
#include GENERATED_EXI_TYPES
#include "app/afv6/include/af.h"
#include "app/afv6/plugin/common/common.h"
#include "app/util/ip/print-utilities.h"
#include "app/util/exi/exi.h"
#include "stack/framework/buffer-management.h"
#include "app/afv6/plugin/common/list.h"
#include "app/afv6/plugin/common/scheduled-object.h"
#include "app/afv6/plugin/drlc-common/end-device-control.h"
#include "app/afv6/plugin/drlc-common/drlc-common.h"
#include "stack/include/stack-info.h"
#include "app/afv6/plugin/common/uri-handler.h"
#include "app/afv6/plugin/drlc-server/drlc-server.h"
#include "app/afv6/plugin/server/response.h"
#include "app/afv6/plugin/server/server.h"
#include "app/afv6/plugin/common/end-device.h"
#include "app/afv6/plugin/common/scratchpad.h"
#include "stack/include/event.h"
#include CONFIGURATION_HEADER
#include "app/afv6/plugin/subscription-server/subscription-server.h"
#include "app/afv6/plugin/exi/exi-utilities.h"
#include "app/afv6/plugin/time-server/time-server.h"


// Init callback is called initially by the framework.
void emberAfv6Init(void)
{
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


