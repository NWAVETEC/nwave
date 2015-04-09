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

boolean emberAfServerFillPriorReading(EmberExiGeneratedReading *reading,
                                      const UriData *data,
                                      Scratchpad *scratchpad);

//
// create a ReadingList
// for the /upt/#/mr/#/rs/#/r URI handler
//
boolean emberAfServerFillPriorReadingList
  (EmberExiGeneratedReadingList *readingList,
   const UriData *data,
   Scratchpad *scratchpad);

boolean emberAfServerFillReadingSet(EmberExiGeneratedReadingSet *readingSet,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// create a ReadingSetList
// for the /upt/#/mr/#/rs URI handler
//
boolean
emberAfServerFillReadingSetList(EmberExiGeneratedReadingSetList *readingSetList,
                                const UriData *data,
                                Scratchpad *scratchpad);

//
// fill a reading type
//
boolean emberAfServerFillReadingType(EmberExiGeneratedReadingType *type,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// create an instantaneous Reading
// for the /upt/#/mr/#/r URI handler
//
boolean emberAfServerFillReading(EmberExiGeneratedReading *reading,
                                 const UriData *data,
                                 Scratchpad *scratchpad);

boolean emberAfServerFillMeterReading(EmberExiGeneratedMeterReading *reading,
                                      const UriData *data,
                                      Scratchpad *scratchpad);

//
// create a MeterReadingList
// for the /upt/#/mr URI handler
//
boolean
emberAfServerFillMeterReadingList(EmberExiGeneratedMeterReadingList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// create a UsagePoint
// for the /upt/# URI handler
//
boolean emberAfServerFillUsagePoint(EmberExiGeneratedUsagePoint *usagePoint,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// create a UsagePointList
// for the /upt URI handler
//
boolean
emberAfServerFillUsagePointList(EmberExiGeneratedUsagePointList *usagePointList,
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
