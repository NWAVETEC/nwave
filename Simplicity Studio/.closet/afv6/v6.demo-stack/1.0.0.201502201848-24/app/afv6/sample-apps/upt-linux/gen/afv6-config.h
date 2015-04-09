// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AFV6_CONFIG__
#define __AFV6_CONFIG__




// Top level macros
#define EMBER_AF_DEVICE_NAME "upt-linux"


// Generated setup headers that are included automatically
#include "afv6-debug-print.h"
#include "afv6-uri-mapper.h"
#include "afv6-cli.h"


// Generated macros for the headers that were generated
#define GENERATED_EXI_GRAMMAR "app/afv6/sample-apps/upt-linux/gen/afv6-exi-grammar.h"
#define GENERATED_EXI_QNAMES "app/afv6/sample-apps/upt-linux/gen/afv6-exi-qname.h"
#define GENERATED_EXI_TYPES "app/afv6/sample-apps/upt-linux/gen/afv6-exi-types.h"


// Generated plugin macros


// Use this macro to check if plugin cli is included
#define EMBER_AF_PLUGIN_CLI

// Use this macro to check if plugin common is included
#define EMBER_AF_PLUGIN_COMMON
// User options for plugin common
#define EMBER_AF_PLUGIN_COMMON_LIST_QUERY_COUNT 3
#define EMBER_AF_PLUGIN_COMMON_END_DEVICE_COUNT 5
#define EMBER_AF_PLUGIN_COMMON_GENERIC_URI_HANDLER_SCRATCHPAD_SIZE 500

// Use this macro to check if plugin debug-print is included
#define EMBER_AF_PLUGIN_DEBUG_PRINT
// User options for plugin debug-print
#define EMBER_AF_DEBUG_PRINT_USE_PORT

// Use this macro to check if plugin exi is included
#define EMBER_AF_PLUGIN_EXI

// Use this macro to check if plugin http is included
#define EMBER_AF_PLUGIN_HTTP

// Use this macro to check if plugin log-event-common is included
#define EMBER_AF_PLUGIN_LOG_EVENT_COMMON
// User options for plugin log-event-common
#define EMBER_AF_PLUGIN_LOG_EVENT_COMMON_LOG_EVENT_COUNT 10

// Use this macro to check if plugin log-event-server is included
#define EMBER_AF_PLUGIN_LOG_EVENT_SERVER

// Use this macro to check if plugin metering-common is included
#define EMBER_AF_PLUGIN_METERING_COMMON
// User options for plugin metering-common
#define EMBER_AF_PLUGIN_METERING_COMMON_READING_COUNT 5

// Use this macro to check if plugin metering-server is included
#define EMBER_AF_PLUGIN_METERING_SERVER
// User options for plugin metering-server
#define EMBER_AF_PLUGIN_METERING_SERVER_READING_COUNT 2

// Use this macro to check if plugin server is included
#define EMBER_AF_PLUGIN_SERVER

// Use this macro to check if plugin subscription-server is included
#define EMBER_AF_PLUGIN_SUBSCRIPTION_SERVER
// User options for plugin subscription-server
#define EMBER_AF_PLUGIN_SUBSCRIPTION_SERVER_SUBSCRIPTION_COUNT 6

// Use this macro to check if plugin time-server is included
#define EMBER_AF_PLUGIN_TIME_SERVER

#endif // __AFV6_CONFIG__
