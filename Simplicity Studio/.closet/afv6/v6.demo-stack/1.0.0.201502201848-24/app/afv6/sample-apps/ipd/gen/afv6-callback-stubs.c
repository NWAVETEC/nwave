// This file is generated. Please do not edit manually.
// 
//

#include PLATFORM_HEADER
#include "stack/include/ember-types.h"
#include "hal/hal.h"
#include "app/afv6/include/af.h"
#include "app/util/exi/exi.h"
#include "app/util/exi/xml-encoder.h"
#include "app/afv6/plugin/debug-print/print.h"
#include GENERATED_EXI_TYPES
#include GENERATED_EXI_QNAMES
#include "app/afv6/plugin/common/uri-handler.h"
#include "app/afv6/plugin/drlc-client/drlc-client.h"
#include "app/afv6/plugin/common/scratchpad.h"
#include "stack/include/ember-ip.h"
#include "app/afv6/plugin/common/se2-library.h"
#include "app/afv6/plugin/common/common.h"
#include "app/util/ip/print-utilities.h"
#include "app/afv6/plugin/common/scheduled-object.h"
#include "app/afv6/plugin/messaging-common/text-message.h"


// Init callback is called initially by the framework.
void emberAfv6Init(void)
{
}


boolean emberAfClientFillEndDevice(EmberExiGeneratedEndDevice *endDevice,
                                   const UriData *data,
                                   Scratchpad *scratchpad)
{
  //
  // change me
  //
  endDevice->sFDI = halCommonGetRandom();

#ifdef EMBER_AF_PLUGIN_DRLC_CLIENT
  emberAfFillDrlcClientEndDeviceFields(endDevice, scratchpad);
#endif

  return TRUE;
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


void emberAfClientTextMessageEventHandler(TextMessage *textMessage) {
  // put your text messaging event handling code here
  // see app/afv6/plugin/common/scheduled-object.h for event codes
  // that are in the status variable textMessage->scheduledObject.status
}


void emberAfClientMeterReadingListEventHandler(int8u status, EmberExiGeneratedMeterReadingList *meterReadingList) {
  emberAfPluginMeteringClientPrintln("Metering Client: Meter Reading List Event Handler: "
                                     "status: %u",
                                     status);
}


void emberAfClientUsagePointListEventHandler(int8u status, EmberExiGeneratedUsagePointList *usagePointList) {
  emberAfPluginMeteringClientPrintln("Metering Client: Usage Point List Event Handler: "
                                     "status: %u",
                                     status);
}


void emberAfClientReadingSetListEventHandler(int8u status, EmberExiGeneratedReadingSetList *readingSetList) {
  emberAfPluginMeteringClientPrintln("Metering Client: Reading Set List Event Handler: "
                                     "status: %u",
                                     status);
}


