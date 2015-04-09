// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AFV6_CALLBACKS__
#define __AFV6_CALLBACKS__


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
#include "app/afv6/plugin/common/subscription-defines.h"
#include "app/afv6/plugin/messaging-server/messaging-server.h"
#include "app/afv6/plugin/messaging-common/text-message.h"
#include "app/afv6/plugin/common/scratchpad.h"
#include "app/afv6/plugin/common/uri-discoverer.h"
#include "app/afv6/plugin/server/server.h"
#include "app/afv6/plugin/exi/exi-utilities.h"
#include "app/afv6/plugin/netstat-server/counters.h"
#include "app/afv6/plugin/netstat-server/netstat-server.h"
#include "app/afv6/plugin/server/response.h"
#include "app/afv6/plugin/common/end-device.h"
#include "app/afv6/plugin/software-download-server/software-download-server.h"
#include "stack/include/rest.h"
#include "stack/include/event.h"
#include CONFIGURATION_HEADER
#include "app/afv6/plugin/subscription-server/subscription-server.h"
#include "app/afv6/plugin/time-server/time-server.h"


// Init callback is called initially by the framework.
void emberAfv6Init(void);

int32u emberGetTime(void);

// Init callback is called when the application starts
void emberAfSe2AppInit(void);

// Tick callback is called upon each tick
void emberAfSe2AppTick(void);

void emberJoinNetworkReturn(EmberStatus status);

void emberAfServerDiscoveredHandler(Ipv6Address *serverAddress);

void emberInitReturn(EmberStatus status);

void emberFormNetworkReturn(EmberStatus status);

void emberResumeNetworkReturn(EmberStatus status);

void emberSetTxPowerModeReturn(EmberStatus status);

void emberGetRipEntryReturn(int8u index, const EmberRipEntry *entry);

void emberGetCounterReturn(EmberCounterType type, int16u value);

//
// object filler for the /dr/#/edc URI handler
//
boolean emberAfServerFillEndDeviceControlList
  (EmberExiGeneratedEndDeviceControlList *list,
   const UriData *data,
   Scratchpad *scratchpad);

boolean
emberAfServerFillEndDeviceControl(EmberExiGeneratedEndDeviceControl *exiControl,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// the /dr/# URI handler
//
boolean emberAfServerFillDemandResponseProgram
  (EmberExiGeneratedDemandResponseProgram *program,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a demand response program list
// for the /dr URI handler
//
boolean emberAfServerFillDemandResponseProgramList
  (EmberExiGeneratedDemandResponseProgramList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// object creator for the /msg/# URI handler
//
boolean
emberAfServerFillMessagingProgram(EmberExiGeneratedMessagingProgram *program,
                                  UriData *data,
                                  Scratchpad *scratchpad);

boolean emberAfServerFillMessagingProgramList
  (EmberExiGeneratedMessagingProgramList *list,
   UriData *data,
   Scratchpad *scratchpad);

//
// for the /ns URI handler
//
boolean emberAfServerFillIpInterfaceList(EmberExiGeneratedIPInterfaceList *list,
                                         const UriData *data,
                                         Scratchpad *scratchpad);

//
// for the /ns/# URI handler
//
boolean emberAfServerFillIpInterface(EmberExiGeneratedIPInterface *interface,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// for the /ns/#/addr URI handler
//
boolean emberAfServerFillIpAddrList(EmberExiGeneratedIPAddrList *list,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// for the /ns/#/addr/# URI handler
//
boolean emberAfServerFillIpAddr(EmberExiGeneratedIPAddr *address,
                                const UriData *data,
                                Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl URI handler
//
boolean emberAfServerFillRplInstanceList(EmberExiGeneratedRPLInstanceList *list,
                                         const UriData *data,
                                         Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl/# URI handler
//
boolean emberAfServerFillRplInstance(EmberExiGeneratedRPLInstance *instance,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl/#/srt URI handler
//
boolean
emberAfServerFillRplSourceRoutesList(EmberExiGeneratedRPLSourceRoutesList *list,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl/#/srt/# URI handler
//
boolean
emberAfServerFillRplSourceRoutes(EmberExiGeneratedRPLSourceRoutes *routes,
                                 const UriData *data,
                                 Scratchpad *scratchpad);

//
// for the /ns/#/ll URI handler
//
boolean
emberAfServerFillLinkLayerInterfaceList(EmberExiGeneratedLLInterfaceList *list,
                                        const UriData *data,
                                        Scratchpad *scratchpad);

//
// for the /ns/#/ll/# URI handler
//
boolean
emberAfServerFillLinkLayerInterface(EmberExiGeneratedLLInterface *interface,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// for the /ns/#/ll/#/nbh URI handler
//
boolean emberAfServerFillNeighborList(EmberExiGeneratedNeighborList *list,
                                      const UriData *data,
                                      Scratchpad *scratchpad);

//
// for the /ns/#/ll/#/nbh/# URI handler
//
boolean emberAfServerFillNeighbor(EmberExiGeneratedNeighbor *neighbor,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// object filler for the /edev/# URI handler
//
boolean emberAfServerFillEndDevice
  (EmberExiGeneratedEndDevice *exiEndDevice,
   const UriData *data,
   Scratchpad *scratchpad);

//
// object filler for the /edev URI handler
//
boolean emberAfServerFillEndDeviceList
  (EmberExiGeneratedEndDeviceList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// callback for a client POST to /rsp/#/dr
//
void emberAfServerResponseHandler(Response *response);

//
// /shinyNewFirmware URI handler
//
void emberAfServerShinyNewFirmwareUriHandler(const UriData *data);

//
// create a FileList
// for the /file URI handler
//
boolean emberAfServerFillFileList(EmberExiGeneratedFileList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// create a File
// for the /file/# URI handler
//
boolean emberAfServerFillFile(EmberExiGeneratedFile *file,
                              const UriData *data,
                              Scratchpad *scratchpad);

//
// create a subscription for the /edev/#/sub/# URI handler
//
boolean
emberAfServerFillSubscription(EmberExiGeneratedSubscription *subscription,
                              const UriData *data,
                              Scratchpad *scratchpad);

//
// create a subscription list for the /edev/#/sub URI handler
//
boolean
emberAfServerFillSubscriptionList(EmberExiGeneratedSubscriptionList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// Create a Time object
// for the /tm URI handler
//
boolean emberAfServerFillTime(EmberExiGeneratedTime *timeStruct,
                              const UriData *data,
                              Scratchpad *scratchpad);

#endif // __AFV6_CALLBACKS__
