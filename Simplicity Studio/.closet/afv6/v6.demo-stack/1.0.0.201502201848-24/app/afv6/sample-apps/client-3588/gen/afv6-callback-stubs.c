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
#include "stack/framework/buffer-management.h"
#include "app/afv6/plugin/common/scheduled-object.h"
#include "app/afv6/plugin/drlc-common/end-device-control.h"
#include "app/afv6/plugin/common/list.h"
#include "app/afv6/plugin/drlc-common/drlc-common.h"
#include "stack/include/stack-info.h"
#include "app/afv6/plugin/messaging-common/text-message.h"
#include "app/afv6/plugin/common/uri-discoverer.h"
#include "app/afv6/plugin/server/server.h"
#include "app/afv6/plugin/exi/exi-utilities.h"
#include "app/afv6/plugin/netstat-server/counters.h"
#include "app/afv6/plugin/netstat-server/netstat-server.h"
#include "app/afv6/plugin/common/end-device.h"
#include "app/afv6/plugin/power-status-common/power-status-common.h"
#include "app/afv6/plugin/power-status-client/power-status-client.h"


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


void emberAfClientDrlcEventHandler(EndDeviceControl *control) {
  // put your DRLC event handling code here
  // see app/afv6/plugin/common/scheduled-object.h for event codes
  // that are in the status variable control->scheduledObject.status
}


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


boolean emberAfClientFillPowerStatus(EmberExiGeneratedPowerStatus *powerStatus,
                                     const UriData *data,
                                     Scratchpad *scratchpad)
{
  PowerStatus *myPowerStatus = emGetPowerStatus();

  if (myPowerStatus != NULL) {
    // prepare the result!
    emConvertPowerStatusToExiStruct(myPowerStatus, powerStatus);
    return TRUE;
  }

  return FALSE;
}


