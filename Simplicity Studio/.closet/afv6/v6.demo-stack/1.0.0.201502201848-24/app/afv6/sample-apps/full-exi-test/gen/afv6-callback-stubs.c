// This file is generated. Please do not edit manually.
// 
//

#include PLATFORM_HEADER
#include "stack/include/ember-types.h"
#include "hal/hal.h"


// Init callback is called initially by the framework.
void emberAfv6Init(void)
{
}


int32u emberGetTime(void) {
  return halCommonGetInt32uMillisecondTick();
}


