// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_AF_DEBUG_PRINTING_CONFIGURATION__
#define __EMBER_AF_DEBUG_PRINTING_CONFIGURATION__




// This file contains the generated macros for the debug printing
// Global macro, if this is commented out, there is no printing
#define EMBER_AF_PRINT_ENABLE



// Generated bit array and name array that is used by thedebug printing library.
#define EMBER_AF_PRINT_PLUGIN_EXI 0x0001
#define EMBER_AF_PRINT_PLUGIN_HTTP 0x0002
#define EMBER_AF_PRINT_PLUGIN_COMMON 0x0004
#define EMBER_AF_PRINT_PLUGIN_DRLC_COMMON 0x0008
#define EMBER_AF_PRINT_PLUGIN_TIME_CLIENT 0x0010
#define EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT 0x0020
#define EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT 0x0040
#define EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON 0x0080
#define EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT 0x0101
#define EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON 0x0102
#define EMBER_AF_PRINT_PLUGIN_CLI 0x0104
#define EMBER_AF_PRINT_PLUGIN_METERING_COMMON 0x0108
#define EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT 0x0110
#define EMBER_AF_PRINT_PLUGIN_CLIENT 0x0120
#define EMBER_AF_PRINT_PLUGIN_METERING_CLIENT 0x0140
#define EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT 0x0180
#define EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT 0x0201
#define EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT 0x0202
#define EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT 0x0204
#define EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT 0x0208
#define EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON 0x0210
#define EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT 0x0220
#define EMBER_AF_PRINT_PLUGIN_DER_CLIENT 0x0240
#define EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER 0x0280
#define EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT 0x0301
#define EMBER_AF_PRINT_CORE 0x0302
#define EMBER_AF_PRINT_DEBUG 0x0304
#define EMBER_AF_PRINT_APP 0x0308
#define EMBER_AF_PRINT_CUSTOM1 0x0310
#define EMBER_AF_PRINT_CUSTOM2 0x0320
#define EMBER_AF_PRINT_CUSTOM3 0x0340
#define EMBER_AF_PRINT_BITS { 0xFF, 0xFC, 0xFF, 0x7F }
#define EMBER_AF_PRINT_NAMES { \
  "EXI XML compression",\
  "HTTP server",\
  "Common",\
  "DRLC Common",\
  "Time Client",\
  "Subscription Client",\
  "Messaging Client",\
  "Messaging Common",\
  "Log Event Client",\
  "Log Event Common",\
  "CLI",\
  "Metering Common",\
  "DRLC Client",\
  "Client",\
  "Metering Client",\
  "Function Set Assignments Client",\
  "Billing Client",\
  "Power Status Client",\
  "Pricing Client",\
  "Pre-Payment Client",\
  "Power Status Common",\
  "Software Download Client",\
  "Distributed Energy Resource (DER) Client",\
  "Netstat Server",\
  "Netstat Client",\
  "Core",\
  "Debug",\
  "Application",\
  "Custom messages (1)",\
  "Custom messages (2)",\
  "Custom messages (3)",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 31


// Generated functions for use within plugin EXI XML compression
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_EXI)
#define emberAfPluginExiPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_EXI, __VA_ARGS__)
#define emberAfPluginExiPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_EXI,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginExiFlush()
#define emberAfPluginExiDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_EXI) ) { x; }
#define emberAfPluginExiPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_EXI, (buffer), (len), (withSpace))
#define emberAfPluginExiPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_EXI, (buffer))
#else
#define emberAfPluginExiPrint(...)
#define emberAfPluginExiPrintln(...)
#define emberAfPluginExiFlush()
#define emberAfPluginExiDebugExec(x)
#define emberAfPluginExiPrintBuffer(buffer, len, withSpace)
#define emberAfPluginExiPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_EXI)


// Generated functions for use within plugin HTTP server
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_HTTP)
#define emberAfPluginHttpPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_HTTP, __VA_ARGS__)
#define emberAfPluginHttpPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_HTTP,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginHttpFlush()
#define emberAfPluginHttpDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_HTTP) ) { x; }
#define emberAfPluginHttpPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_HTTP, (buffer), (len), (withSpace))
#define emberAfPluginHttpPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_HTTP, (buffer))
#else
#define emberAfPluginHttpPrint(...)
#define emberAfPluginHttpPrintln(...)
#define emberAfPluginHttpFlush()
#define emberAfPluginHttpDebugExec(x)
#define emberAfPluginHttpPrintBuffer(buffer, len, withSpace)
#define emberAfPluginHttpPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_HTTP)


// Generated functions for use within plugin Common
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_COMMON)
#define emberAfPluginCommonPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_COMMON, __VA_ARGS__)
#define emberAfPluginCommonPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_COMMON,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginCommonFlush()
#define emberAfPluginCommonDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_COMMON) ) { x; }
#define emberAfPluginCommonPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_COMMON, (buffer), (len), (withSpace))
#define emberAfPluginCommonPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_COMMON, (buffer))
#else
#define emberAfPluginCommonPrint(...)
#define emberAfPluginCommonPrintln(...)
#define emberAfPluginCommonFlush()
#define emberAfPluginCommonDebugExec(x)
#define emberAfPluginCommonPrintBuffer(buffer, len, withSpace)
#define emberAfPluginCommonPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_COMMON)


// Generated functions for use within plugin DRLC Common
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DRLC_COMMON)
#define emberAfPluginDrlcCommonPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_DRLC_COMMON, __VA_ARGS__)
#define emberAfPluginDrlcCommonPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_DRLC_COMMON,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginDrlcCommonFlush()
#define emberAfPluginDrlcCommonDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_DRLC_COMMON) ) { x; }
#define emberAfPluginDrlcCommonPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_DRLC_COMMON, (buffer), (len), (withSpace))
#define emberAfPluginDrlcCommonPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_DRLC_COMMON, (buffer))
#else
#define emberAfPluginDrlcCommonPrint(...)
#define emberAfPluginDrlcCommonPrintln(...)
#define emberAfPluginDrlcCommonFlush()
#define emberAfPluginDrlcCommonDebugExec(x)
#define emberAfPluginDrlcCommonPrintBuffer(buffer, len, withSpace)
#define emberAfPluginDrlcCommonPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DRLC_COMMON)


// Generated functions for use within plugin Time Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_TIME_CLIENT)
#define emberAfPluginTimeClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_TIME_CLIENT, __VA_ARGS__)
#define emberAfPluginTimeClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_TIME_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginTimeClientFlush()
#define emberAfPluginTimeClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_TIME_CLIENT) ) { x; }
#define emberAfPluginTimeClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_TIME_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginTimeClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_TIME_CLIENT, (buffer))
#else
#define emberAfPluginTimeClientPrint(...)
#define emberAfPluginTimeClientPrintln(...)
#define emberAfPluginTimeClientFlush()
#define emberAfPluginTimeClientDebugExec(x)
#define emberAfPluginTimeClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginTimeClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_TIME_CLIENT)


// Generated functions for use within plugin Subscription Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT)
#define emberAfPluginSubscriptionClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT, __VA_ARGS__)
#define emberAfPluginSubscriptionClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginSubscriptionClientFlush()
#define emberAfPluginSubscriptionClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT) ) { x; }
#define emberAfPluginSubscriptionClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginSubscriptionClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT, (buffer))
#else
#define emberAfPluginSubscriptionClientPrint(...)
#define emberAfPluginSubscriptionClientPrintln(...)
#define emberAfPluginSubscriptionClientFlush()
#define emberAfPluginSubscriptionClientDebugExec(x)
#define emberAfPluginSubscriptionClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginSubscriptionClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_CLIENT)


// Generated functions for use within plugin Messaging Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT)
#define emberAfPluginMessagingClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT, __VA_ARGS__)
#define emberAfPluginMessagingClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginMessagingClientFlush()
#define emberAfPluginMessagingClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT) ) { x; }
#define emberAfPluginMessagingClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginMessagingClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT, (buffer))
#else
#define emberAfPluginMessagingClientPrint(...)
#define emberAfPluginMessagingClientPrintln(...)
#define emberAfPluginMessagingClientFlush()
#define emberAfPluginMessagingClientDebugExec(x)
#define emberAfPluginMessagingClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginMessagingClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_MESSAGING_CLIENT)


// Generated functions for use within plugin Messaging Common
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON)
#define emberAfPluginMessagingCommonPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON, __VA_ARGS__)
#define emberAfPluginMessagingCommonPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginMessagingCommonFlush()
#define emberAfPluginMessagingCommonDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON) ) { x; }
#define emberAfPluginMessagingCommonPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON, (buffer), (len), (withSpace))
#define emberAfPluginMessagingCommonPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON, (buffer))
#else
#define emberAfPluginMessagingCommonPrint(...)
#define emberAfPluginMessagingCommonPrintln(...)
#define emberAfPluginMessagingCommonFlush()
#define emberAfPluginMessagingCommonDebugExec(x)
#define emberAfPluginMessagingCommonPrintBuffer(buffer, len, withSpace)
#define emberAfPluginMessagingCommonPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_MESSAGING_COMMON)


// Generated functions for use within plugin Log Event Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT)
#define emberAfPluginLogEventClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT, __VA_ARGS__)
#define emberAfPluginLogEventClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginLogEventClientFlush()
#define emberAfPluginLogEventClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT) ) { x; }
#define emberAfPluginLogEventClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginLogEventClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT, (buffer))
#else
#define emberAfPluginLogEventClientPrint(...)
#define emberAfPluginLogEventClientPrintln(...)
#define emberAfPluginLogEventClientFlush()
#define emberAfPluginLogEventClientDebugExec(x)
#define emberAfPluginLogEventClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginLogEventClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_CLIENT)


// Generated functions for use within plugin Log Event Common
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON)
#define emberAfPluginLogEventCommonPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON, __VA_ARGS__)
#define emberAfPluginLogEventCommonPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginLogEventCommonFlush()
#define emberAfPluginLogEventCommonDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON) ) { x; }
#define emberAfPluginLogEventCommonPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON, (buffer), (len), (withSpace))
#define emberAfPluginLogEventCommonPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON, (buffer))
#else
#define emberAfPluginLogEventCommonPrint(...)
#define emberAfPluginLogEventCommonPrintln(...)
#define emberAfPluginLogEventCommonFlush()
#define emberAfPluginLogEventCommonDebugExec(x)
#define emberAfPluginLogEventCommonPrintBuffer(buffer, len, withSpace)
#define emberAfPluginLogEventCommonPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON)


// Generated functions for use within plugin CLI
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_CLI)
#define emberAfPluginCliPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_CLI, __VA_ARGS__)
#define emberAfPluginCliPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_CLI,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginCliFlush()
#define emberAfPluginCliDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_CLI) ) { x; }
#define emberAfPluginCliPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_CLI, (buffer), (len), (withSpace))
#define emberAfPluginCliPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_CLI, (buffer))
#else
#define emberAfPluginCliPrint(...)
#define emberAfPluginCliPrintln(...)
#define emberAfPluginCliFlush()
#define emberAfPluginCliDebugExec(x)
#define emberAfPluginCliPrintBuffer(buffer, len, withSpace)
#define emberAfPluginCliPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_CLI)


// Generated functions for use within plugin Metering Common
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_METERING_COMMON)
#define emberAfPluginMeteringCommonPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_METERING_COMMON, __VA_ARGS__)
#define emberAfPluginMeteringCommonPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_METERING_COMMON,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginMeteringCommonFlush()
#define emberAfPluginMeteringCommonDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_METERING_COMMON) ) { x; }
#define emberAfPluginMeteringCommonPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_METERING_COMMON, (buffer), (len), (withSpace))
#define emberAfPluginMeteringCommonPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_METERING_COMMON, (buffer))
#else
#define emberAfPluginMeteringCommonPrint(...)
#define emberAfPluginMeteringCommonPrintln(...)
#define emberAfPluginMeteringCommonFlush()
#define emberAfPluginMeteringCommonDebugExec(x)
#define emberAfPluginMeteringCommonPrintBuffer(buffer, len, withSpace)
#define emberAfPluginMeteringCommonPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_METERING_COMMON)


// Generated functions for use within plugin DRLC Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT)
#define emberAfPluginDrlcClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT, __VA_ARGS__)
#define emberAfPluginDrlcClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginDrlcClientFlush()
#define emberAfPluginDrlcClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT) ) { x; }
#define emberAfPluginDrlcClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginDrlcClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT, (buffer))
#else
#define emberAfPluginDrlcClientPrint(...)
#define emberAfPluginDrlcClientPrintln(...)
#define emberAfPluginDrlcClientFlush()
#define emberAfPluginDrlcClientDebugExec(x)
#define emberAfPluginDrlcClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginDrlcClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DRLC_CLIENT)


// Generated functions for use within plugin Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_CLIENT)
#define emberAfPluginClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_CLIENT, __VA_ARGS__)
#define emberAfPluginClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginClientFlush()
#define emberAfPluginClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_CLIENT) ) { x; }
#define emberAfPluginClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_CLIENT, (buffer))
#else
#define emberAfPluginClientPrint(...)
#define emberAfPluginClientPrintln(...)
#define emberAfPluginClientFlush()
#define emberAfPluginClientDebugExec(x)
#define emberAfPluginClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_CLIENT)


// Generated functions for use within plugin Metering Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_METERING_CLIENT)
#define emberAfPluginMeteringClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_METERING_CLIENT, __VA_ARGS__)
#define emberAfPluginMeteringClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_METERING_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginMeteringClientFlush()
#define emberAfPluginMeteringClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_METERING_CLIENT) ) { x; }
#define emberAfPluginMeteringClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_METERING_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginMeteringClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_METERING_CLIENT, (buffer))
#else
#define emberAfPluginMeteringClientPrint(...)
#define emberAfPluginMeteringClientPrintln(...)
#define emberAfPluginMeteringClientFlush()
#define emberAfPluginMeteringClientDebugExec(x)
#define emberAfPluginMeteringClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginMeteringClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_METERING_CLIENT)


// Generated functions for use within plugin Function Set Assignments Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT)
#define emberAfPluginFunctionSetAssignmentsClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT, __VA_ARGS__)
#define emberAfPluginFunctionSetAssignmentsClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginFunctionSetAssignmentsClientFlush()
#define emberAfPluginFunctionSetAssignmentsClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT) ) { x; }
#define emberAfPluginFunctionSetAssignmentsClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginFunctionSetAssignmentsClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT, (buffer))
#else
#define emberAfPluginFunctionSetAssignmentsClientPrint(...)
#define emberAfPluginFunctionSetAssignmentsClientPrintln(...)
#define emberAfPluginFunctionSetAssignmentsClientFlush()
#define emberAfPluginFunctionSetAssignmentsClientDebugExec(x)
#define emberAfPluginFunctionSetAssignmentsClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginFunctionSetAssignmentsClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_FUNCTION_SET_ASSIGNMENTS_CLIENT)


// Generated functions for use within plugin Billing Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT)
#define emberAfPluginBillingClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT, __VA_ARGS__)
#define emberAfPluginBillingClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginBillingClientFlush()
#define emberAfPluginBillingClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT) ) { x; }
#define emberAfPluginBillingClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginBillingClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT, (buffer))
#else
#define emberAfPluginBillingClientPrint(...)
#define emberAfPluginBillingClientPrintln(...)
#define emberAfPluginBillingClientFlush()
#define emberAfPluginBillingClientDebugExec(x)
#define emberAfPluginBillingClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginBillingClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_BILLING_CLIENT)


// Generated functions for use within plugin Power Status Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT)
#define emberAfPluginPowerStatusClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT, __VA_ARGS__)
#define emberAfPluginPowerStatusClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginPowerStatusClientFlush()
#define emberAfPluginPowerStatusClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT) ) { x; }
#define emberAfPluginPowerStatusClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginPowerStatusClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT, (buffer))
#else
#define emberAfPluginPowerStatusClientPrint(...)
#define emberAfPluginPowerStatusClientPrintln(...)
#define emberAfPluginPowerStatusClientFlush()
#define emberAfPluginPowerStatusClientDebugExec(x)
#define emberAfPluginPowerStatusClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginPowerStatusClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_CLIENT)


// Generated functions for use within plugin Pricing Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT)
#define emberAfPluginPricingClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT, __VA_ARGS__)
#define emberAfPluginPricingClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginPricingClientFlush()
#define emberAfPluginPricingClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT) ) { x; }
#define emberAfPluginPricingClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginPricingClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT, (buffer))
#else
#define emberAfPluginPricingClientPrint(...)
#define emberAfPluginPricingClientPrintln(...)
#define emberAfPluginPricingClientFlush()
#define emberAfPluginPricingClientDebugExec(x)
#define emberAfPluginPricingClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginPricingClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_PRICING_CLIENT)


// Generated functions for use within plugin Pre-Payment Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT)
#define emberAfPluginPrepaymentClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT, __VA_ARGS__)
#define emberAfPluginPrepaymentClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginPrepaymentClientFlush()
#define emberAfPluginPrepaymentClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT) ) { x; }
#define emberAfPluginPrepaymentClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginPrepaymentClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT, (buffer))
#else
#define emberAfPluginPrepaymentClientPrint(...)
#define emberAfPluginPrepaymentClientPrintln(...)
#define emberAfPluginPrepaymentClientFlush()
#define emberAfPluginPrepaymentClientDebugExec(x)
#define emberAfPluginPrepaymentClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginPrepaymentClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_PREPAYMENT_CLIENT)


// Generated functions for use within plugin Power Status Common
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON)
#define emberAfPluginPowerStatusCommonPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON, __VA_ARGS__)
#define emberAfPluginPowerStatusCommonPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginPowerStatusCommonFlush()
#define emberAfPluginPowerStatusCommonDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON) ) { x; }
#define emberAfPluginPowerStatusCommonPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON, (buffer), (len), (withSpace))
#define emberAfPluginPowerStatusCommonPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON, (buffer))
#else
#define emberAfPluginPowerStatusCommonPrint(...)
#define emberAfPluginPowerStatusCommonPrintln(...)
#define emberAfPluginPowerStatusCommonFlush()
#define emberAfPluginPowerStatusCommonDebugExec(x)
#define emberAfPluginPowerStatusCommonPrintBuffer(buffer, len, withSpace)
#define emberAfPluginPowerStatusCommonPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_POWER_STATUS_COMMON)


// Generated functions for use within plugin Software Download Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT)
#define emberAfPluginSoftwareDownloadClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT, __VA_ARGS__)
#define emberAfPluginSoftwareDownloadClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginSoftwareDownloadClientFlush()
#define emberAfPluginSoftwareDownloadClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT) ) { x; }
#define emberAfPluginSoftwareDownloadClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginSoftwareDownloadClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT, (buffer))
#else
#define emberAfPluginSoftwareDownloadClientPrint(...)
#define emberAfPluginSoftwareDownloadClientPrintln(...)
#define emberAfPluginSoftwareDownloadClientFlush()
#define emberAfPluginSoftwareDownloadClientDebugExec(x)
#define emberAfPluginSoftwareDownloadClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginSoftwareDownloadClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SOFTWARE_DOWNLOAD_CLIENT)


// Generated functions for use within plugin Distributed Energy Resource (DER) Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DER_CLIENT)
#define emberAfPluginDerClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_DER_CLIENT, __VA_ARGS__)
#define emberAfPluginDerClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_DER_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginDerClientFlush()
#define emberAfPluginDerClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_DER_CLIENT) ) { x; }
#define emberAfPluginDerClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_DER_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginDerClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_DER_CLIENT, (buffer))
#else
#define emberAfPluginDerClientPrint(...)
#define emberAfPluginDerClientPrintln(...)
#define emberAfPluginDerClientFlush()
#define emberAfPluginDerClientDebugExec(x)
#define emberAfPluginDerClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginDerClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DER_CLIENT)


// Generated functions for use within plugin Debug Print
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DEBUG_PRINT)
#define emberAfPluginDebugPrintPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_DEBUG_PRINT, __VA_ARGS__)
#define emberAfPluginDebugPrintPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_DEBUG_PRINT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginDebugPrintFlush()
#define emberAfPluginDebugPrintDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_DEBUG_PRINT) ) { x; }
#define emberAfPluginDebugPrintPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_DEBUG_PRINT, (buffer), (len), (withSpace))
#define emberAfPluginDebugPrintPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_DEBUG_PRINT, (buffer))
#else
#define emberAfPluginDebugPrintPrint(...)
#define emberAfPluginDebugPrintPrintln(...)
#define emberAfPluginDebugPrintFlush()
#define emberAfPluginDebugPrintDebugExec(x)
#define emberAfPluginDebugPrintPrintBuffer(buffer, len, withSpace)
#define emberAfPluginDebugPrintPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_DEBUG_PRINT)


// Generated functions for use within plugin Netstat Server
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER)
#define emberAfPluginNetstatServerPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER, __VA_ARGS__)
#define emberAfPluginNetstatServerPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginNetstatServerFlush()
#define emberAfPluginNetstatServerDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER) ) { x; }
#define emberAfPluginNetstatServerPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER, (buffer), (len), (withSpace))
#define emberAfPluginNetstatServerPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER, (buffer))
#else
#define emberAfPluginNetstatServerPrint(...)
#define emberAfPluginNetstatServerPrintln(...)
#define emberAfPluginNetstatServerFlush()
#define emberAfPluginNetstatServerDebugExec(x)
#define emberAfPluginNetstatServerPrintBuffer(buffer, len, withSpace)
#define emberAfPluginNetstatServerPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_NETSTAT_SERVER)


// Generated functions for use within plugin Netstat Client
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT)
#define emberAfPluginNetstatClientPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT, __VA_ARGS__)
#define emberAfPluginNetstatClientPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginNetstatClientFlush()
#define emberAfPluginNetstatClientDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT) ) { x; }
#define emberAfPluginNetstatClientPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT, (buffer), (len), (withSpace))
#define emberAfPluginNetstatClientPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT, (buffer))
#else
#define emberAfPluginNetstatClientPrint(...)
#define emberAfPluginNetstatClientPrintln(...)
#define emberAfPluginNetstatClientFlush()
#define emberAfPluginNetstatClientDebugExec(x)
#define emberAfPluginNetstatClientPrintBuffer(buffer, len, withSpace)
#define emberAfPluginNetstatClientPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_NETSTAT_CLIENT)


// Generated functions for use within area Core
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CORE)
#define emberAfCorePrint(...) emberAfPrint(EMBER_AF_PRINT_CORE, __VA_ARGS__)
#define emberAfCorePrintln(...) emberAfPrintln(EMBER_AF_PRINT_CORE,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfCoreFlush()
#define emberAfCoreDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_CORE) ) { x; }
#define emberAfCorePrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_CORE, (buffer), (len), (withSpace))
#define emberAfCorePrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_CORE, (buffer))
#else
#define emberAfCorePrint(...)
#define emberAfCorePrintln(...)
#define emberAfCoreFlush()
#define emberAfCoreDebugExec(x)
#define emberAfCorePrintBuffer(buffer, len, withSpace)
#define emberAfCorePrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CORE)


// Generated functions for use within area Debug
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_DEBUG)
#define emberAfDebugPrint(...) emberAfPrint(EMBER_AF_PRINT_DEBUG, __VA_ARGS__)
#define emberAfDebugPrintln(...) emberAfPrintln(EMBER_AF_PRINT_DEBUG,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfDebugFlush()
#define emberAfDebugDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_DEBUG) ) { x; }
#define emberAfDebugPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_DEBUG, (buffer), (len), (withSpace))
#define emberAfDebugPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_DEBUG, (buffer))
#else
#define emberAfDebugPrint(...)
#define emberAfDebugPrintln(...)
#define emberAfDebugFlush()
#define emberAfDebugDebugExec(x)
#define emberAfDebugPrintBuffer(buffer, len, withSpace)
#define emberAfDebugPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_DEBUG)


// Generated functions for use within area Application
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_APP)
#define emberAfAppPrint(...) emberAfPrint(EMBER_AF_PRINT_APP, __VA_ARGS__)
#define emberAfAppPrintln(...) emberAfPrintln(EMBER_AF_PRINT_APP,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfAppFlush()
#define emberAfAppDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_APP) ) { x; }
#define emberAfAppPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_APP, (buffer), (len), (withSpace))
#define emberAfAppPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_APP, (buffer))
#else
#define emberAfAppPrint(...)
#define emberAfAppPrintln(...)
#define emberAfAppFlush()
#define emberAfAppDebugExec(x)
#define emberAfAppPrintBuffer(buffer, len, withSpace)
#define emberAfAppPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_APP)


// Generated functions for use within area Custom messages (1)
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CUSTOM1)
#define emberAfCustom1Print(...) emberAfPrint(EMBER_AF_PRINT_CUSTOM1, __VA_ARGS__)
#define emberAfCustom1Println(...) emberAfPrintln(EMBER_AF_PRINT_CUSTOM1,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfCustom1Flush()
#define emberAfCustom1DebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_CUSTOM1) ) { x; }
#define emberAfCustom1PrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_CUSTOM1, (buffer), (len), (withSpace))
#define emberAfCustom1PrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_CUSTOM1, (buffer))
#else
#define emberAfCustom1Print(...)
#define emberAfCustom1Println(...)
#define emberAfCustom1Flush()
#define emberAfCustom1DebugExec(x)
#define emberAfCustom1PrintBuffer(buffer, len, withSpace)
#define emberAfCustom1PrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CUSTOM1)


// Generated functions for use within area Custom messages (2)
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CUSTOM2)
#define emberAfCustom2Print(...) emberAfPrint(EMBER_AF_PRINT_CUSTOM2, __VA_ARGS__)
#define emberAfCustom2Println(...) emberAfPrintln(EMBER_AF_PRINT_CUSTOM2,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfCustom2Flush()
#define emberAfCustom2DebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_CUSTOM2) ) { x; }
#define emberAfCustom2PrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_CUSTOM2, (buffer), (len), (withSpace))
#define emberAfCustom2PrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_CUSTOM2, (buffer))
#else
#define emberAfCustom2Print(...)
#define emberAfCustom2Println(...)
#define emberAfCustom2Flush()
#define emberAfCustom2DebugExec(x)
#define emberAfCustom2PrintBuffer(buffer, len, withSpace)
#define emberAfCustom2PrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CUSTOM2)


// Generated functions for use within area Custom messages (3)
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CUSTOM3)
#define emberAfCustom3Print(...) emberAfPrint(EMBER_AF_PRINT_CUSTOM3, __VA_ARGS__)
#define emberAfCustom3Println(...) emberAfPrintln(EMBER_AF_PRINT_CUSTOM3,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfCustom3Flush()
#define emberAfCustom3DebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_CUSTOM3) ) { x; }
#define emberAfCustom3PrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_CUSTOM3, (buffer), (len), (withSpace))
#define emberAfCustom3PrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_CUSTOM3, (buffer))
#else
#define emberAfCustom3Print(...)
#define emberAfCustom3Println(...)
#define emberAfCustom3Flush()
#define emberAfCustom3DebugExec(x)
#define emberAfCustom3PrintBuffer(buffer, len, withSpace)
#define emberAfCustom3PrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_CUSTOM3)


#endif // __EMBER_AF_DEBUG_PRINTING_CONFIGURATION__
