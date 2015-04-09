// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AFV6_CONFIG__
#define __AFV6_CONFIG__




// Top level macros
#define EMBER_AF_DEVICE_NAME "esi"


// Generated setup headers that are included automatically
#include "afv6-uri-mapper.h"
#include "afv6-cli.h"
#include "afv6-debug-print.h"


// Generated macros for the headers that were generated
#define GENERATED_EXI_GRAMMAR "app/afv6/sample-apps/esi/gen/afv6-exi-grammar.h"
#define GENERATED_EXI_QNAMES "app/afv6/sample-apps/esi/gen/afv6-exi-qname.h"
#define GENERATED_EXI_TYPES "app/afv6/sample-apps/esi/gen/afv6-exi-types.h"


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

// Use this macro to check if plugin drlc-common is included
#define EMBER_AF_PLUGIN_DRLC_COMMON
// User options for plugin drlc-common
#define EMBER_AF_PLUGIN_DRLC_COMMON_END_DEVICE_CONTROL_COUNT 3

// Use this macro to check if plugin drlc-server is included
#define EMBER_AF_PLUGIN_DRLC_SERVER
// User options for plugin drlc-server
#define EMBER_AF_PLUGIN_DRLC_SERVER_PROVIDER_PRIMACY_TYPE 0

// Use this macro to check if plugin exi is included
#define EMBER_AF_PLUGIN_EXI

// Use this macro to check if plugin function-set-assignments-server is included
#define EMBER_AF_PLUGIN_FUNCTION_SET_ASSIGNMENTS_SERVER

// Use this macro to check if plugin http is included
#define EMBER_AF_PLUGIN_HTTP

// Use this macro to check if plugin log-event-common is included
#define EMBER_AF_PLUGIN_LOG_EVENT_COMMON
// User options for plugin log-event-common
#define EMBER_AF_PLUGIN_LOG_EVENT_COMMON_LOG_EVENT_COUNT 10

// Use this macro to check if plugin log-event-server is included
#define EMBER_AF_PLUGIN_LOG_EVENT_SERVER

// Use this macro to check if plugin messaging-common is included
#define EMBER_AF_PLUGIN_MESSAGING_COMMON
// User options for plugin messaging-common
#define EMBER_AF_PLUGIN_MESSAGING_COMMON_TEXT_MESSAGE_COUNT 3

// Use this macro to check if plugin messaging-server is included
#define EMBER_AF_PLUGIN_MESSAGING_SERVER

// Use this macro to check if plugin netstat-server is included
#define EMBER_AF_PLUGIN_NETSTAT_SERVER
#define EMBER_APPLICATION_HAS_COUNTER_HANDLER

// Use this macro to check if plugin power-status-common is included
#define EMBER_AF_PLUGIN_POWER_STATUS_COMMON

// Use this macro to check if plugin power-status-server is included
#define EMBER_AF_PLUGIN_POWER_STATUS_SERVER

// Use this macro to check if plugin server is included
#define EMBER_AF_PLUGIN_SERVER

// Use this macro to check if plugin software-download-server is included
#define EMBER_AF_PLUGIN_SOFTWARE_DOWNLOAD_SERVER

// Use this macro to check if plugin subscription-server is included
#define EMBER_AF_PLUGIN_SUBSCRIPTION_SERVER
// User options for plugin subscription-server
#define EMBER_AF_PLUGIN_SUBSCRIPTION_SERVER_SUBSCRIPTION_COUNT 6

// Use this macro to check if plugin time-server is included
#define EMBER_AF_PLUGIN_TIME_SERVER

#endif // __AFV6_CONFIG__
