// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AFV6_EVENTS__
#define __AFV6_EVENTS__


// Generated events.
#include PLATFORM_HEADER
#include "stack/include/ember-types.h"
#include "hal/hal.h"


void emSubscriptionServerEventHandler(void);
extern EmberEventControl emSubscriptionServerEvent;

void emScheduledObjectEventHandler(void);
extern EmberEventControl emScheduledObjectEvent;

void emberAfActionHandlerEventHandler(void);
extern EmberEventControl emberAfActionHandlerEvent;



const EmberEventData emAppEvents[] = {
  {&emSubscriptionServerEvent, emSubscriptionServerEventHandler},
  {&emScheduledObjectEvent, emScheduledObjectEventHandler},
  {&emberAfActionHandlerEvent, emberAfActionHandlerEventHandler},
  {NULL, NULL}
};
#endif // __AFV6_EVENTS__
