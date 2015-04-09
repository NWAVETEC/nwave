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
