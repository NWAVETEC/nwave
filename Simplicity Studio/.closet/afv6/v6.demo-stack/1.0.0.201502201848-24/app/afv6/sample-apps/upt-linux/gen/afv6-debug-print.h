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
#define EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER 0x0001
#define EMBER_AF_PRINT_PLUGIN_SERVER 0x0002
#define EMBER_AF_PRINT_PLUGIN_METERING_SERVER 0x0004
#define EMBER_AF_PRINT_PLUGIN_COMMON 0x0008
#define EMBER_AF_PRINT_PLUGIN_TIME_SERVER 0x0010
#define EMBER_AF_PRINT_PLUGIN_EXI 0x0020
#define EMBER_AF_PRINT_PLUGIN_METERING_COMMON 0x0040
#define EMBER_AF_PRINT_PLUGIN_HTTP 0x0080
#define EMBER_AF_PRINT_PLUGIN_CLI 0x0101
#define EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER 0x0102
#define EMBER_AF_PRINT_PLUGIN_LOG_EVENT_COMMON 0x0104
#define EMBER_AF_PRINT_CORE 0x0108
#define EMBER_AF_PRINT_DEBUG 0x0110
#define EMBER_AF_PRINT_APP 0x0120
#define EMBER_AF_PRINT_CUSTOM1 0x0140
#define EMBER_AF_PRINT_CUSTOM2 0x0180
#define EMBER_AF_PRINT_CUSTOM3 0x0201
#define EMBER_AF_PRINT_BITS { 0xFF, 0xFF, 0x01 }
#define EMBER_AF_PRINT_NAMES { \
  "Subscription Server",\
  "Server",\
  "Metering Server",\
  "Common",\
  "Time Server",\
  "EXI XML compression",\
  "Metering Common",\
  "HTTP server",\
  "CLI",\
  "Log Event Server",\
  "Log Event Common",\
  "Core",\
  "Debug",\
  "Application",\
  "Custom messages (1)",\
  "Custom messages (2)",\
  "Custom messages (3)",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 17


// Generated functions for use within plugin Subscription Server
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER)
#define emberAfPluginSubscriptionServerPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER, __VA_ARGS__)
#define emberAfPluginSubscriptionServerPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginSubscriptionServerFlush()
#define emberAfPluginSubscriptionServerDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER) ) { x; }
#define emberAfPluginSubscriptionServerPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER, (buffer), (len), (withSpace))
#define emberAfPluginSubscriptionServerPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER, (buffer))
#else
#define emberAfPluginSubscriptionServerPrint(...)
#define emberAfPluginSubscriptionServerPrintln(...)
#define emberAfPluginSubscriptionServerFlush()
#define emberAfPluginSubscriptionServerDebugExec(x)
#define emberAfPluginSubscriptionServerPrintBuffer(buffer, len, withSpace)
#define emberAfPluginSubscriptionServerPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SUBSCRIPTION_SERVER)


// Generated functions for use within plugin Server
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SERVER)
#define emberAfPluginServerPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_SERVER, __VA_ARGS__)
#define emberAfPluginServerPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_SERVER,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginServerFlush()
#define emberAfPluginServerDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_SERVER) ) { x; }
#define emberAfPluginServerPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_SERVER, (buffer), (len), (withSpace))
#define emberAfPluginServerPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_SERVER, (buffer))
#else
#define emberAfPluginServerPrint(...)
#define emberAfPluginServerPrintln(...)
#define emberAfPluginServerFlush()
#define emberAfPluginServerDebugExec(x)
#define emberAfPluginServerPrintBuffer(buffer, len, withSpace)
#define emberAfPluginServerPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_SERVER)


// Generated functions for use within plugin Metering Server
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_METERING_SERVER)
#define emberAfPluginMeteringServerPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_METERING_SERVER, __VA_ARGS__)
#define emberAfPluginMeteringServerPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_METERING_SERVER,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginMeteringServerFlush()
#define emberAfPluginMeteringServerDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_METERING_SERVER) ) { x; }
#define emberAfPluginMeteringServerPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_METERING_SERVER, (buffer), (len), (withSpace))
#define emberAfPluginMeteringServerPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_METERING_SERVER, (buffer))
#else
#define emberAfPluginMeteringServerPrint(...)
#define emberAfPluginMeteringServerPrintln(...)
#define emberAfPluginMeteringServerFlush()
#define emberAfPluginMeteringServerDebugExec(x)
#define emberAfPluginMeteringServerPrintBuffer(buffer, len, withSpace)
#define emberAfPluginMeteringServerPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_METERING_SERVER)


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


// Generated functions for use within plugin Time Server
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_TIME_SERVER)
#define emberAfPluginTimeServerPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_TIME_SERVER, __VA_ARGS__)
#define emberAfPluginTimeServerPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_TIME_SERVER,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginTimeServerFlush()
#define emberAfPluginTimeServerDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_TIME_SERVER) ) { x; }
#define emberAfPluginTimeServerPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_TIME_SERVER, (buffer), (len), (withSpace))
#define emberAfPluginTimeServerPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_TIME_SERVER, (buffer))
#else
#define emberAfPluginTimeServerPrint(...)
#define emberAfPluginTimeServerPrintln(...)
#define emberAfPluginTimeServerFlush()
#define emberAfPluginTimeServerDebugExec(x)
#define emberAfPluginTimeServerPrintBuffer(buffer, len, withSpace)
#define emberAfPluginTimeServerPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_TIME_SERVER)


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


// Generated functions for use within plugin Log Event Server
#if defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER)
#define emberAfPluginLogEventServerPrint(...) emberAfPrint(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER, __VA_ARGS__)
#define emberAfPluginLogEventServerPrintln(...) emberAfPrintln(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER,  __VA_ARGS__)
// Blocking IO is enabled for all serial ports, therefore flush calls are unnecessary.
#define emberAfPluginLogEventServerFlush()
#define emberAfPluginLogEventServerDebugExec(x) if ( emberAfPrintEnabled(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER) ) { x; }
#define emberAfPluginLogEventServerPrintBuffer(buffer, len, withSpace) emberAfPrintBuffer(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER, (buffer), (len), (withSpace))
#define emberAfPluginLogEventServerPrintString(buffer) emberAfPrintString(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER, (buffer))
#else
#define emberAfPluginLogEventServerPrint(...)
#define emberAfPluginLogEventServerPrintln(...)
#define emberAfPluginLogEventServerFlush()
#define emberAfPluginLogEventServerDebugExec(x)
#define emberAfPluginLogEventServerPrintBuffer(buffer, len, withSpace)
#define emberAfPluginLogEventServerPrintString(buffer)
#endif //defined(EMBER_AF_PRINT_ENABLE) && defined(EMBER_AF_PRINT_PLUGIN_LOG_EVENT_SERVER)


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
