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
#include "app/afv6/plugin/common/subscription-defines.h"
#include "app/afv6/plugin/common/uri-handler.h"
#include "app/afv6/plugin/messaging-server/messaging-server.h"
#include "app/afv6/plugin/common/scheduled-object.h"
#include "app/afv6/plugin/messaging-common/text-message.h"
#include "app/afv6/plugin/common/scratchpad.h"
#include "stack/framework/buffer-management.h"
#include "app/afv6/plugin/common/list.h"
#include "app/afv6/plugin/metering-common/reading.h"
#include "app/afv6/plugin/metering-server/metering-server.h"
#include "app/afv6/plugin/server/response.h"
#include "app/afv6/plugin/server/server.h"
#include "app/afv6/plugin/common/end-device.h"
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


