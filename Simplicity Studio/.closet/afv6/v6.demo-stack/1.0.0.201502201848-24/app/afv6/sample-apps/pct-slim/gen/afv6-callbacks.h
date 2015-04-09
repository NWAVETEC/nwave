// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AFV6_CALLBACKS__
#define __AFV6_CALLBACKS__


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


// Init callback is called initially by the framework.
void emberAfv6Init(void);

int32u emberGetTime(void);

boolean emberAfClientFillEndDevice(EmberExiGeneratedEndDevice *endDevice,
                                   const UriData *data,
                                   Scratchpad *scratchpad);

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

void emberAfClientDrlcEventHandler(EndDeviceControl *control);

#endif // __AFV6_CALLBACKS__
