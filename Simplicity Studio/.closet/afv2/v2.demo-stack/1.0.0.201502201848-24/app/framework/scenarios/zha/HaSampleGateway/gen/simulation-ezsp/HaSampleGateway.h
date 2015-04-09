// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __APP_HASAMPLEGATEWAY_H__
#define __APP_HASAMPLEGATEWAY_H__


/**** Included Header Section ****/

/**** ZCL Section ****/
#define ZA_PROMPT "HaSampleGateway"
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_ON_OFF_CLUSTER_CLIENT
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_ALWAYS

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT 1
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT 1
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT 1
#define EMBER_AF_ON_OFF_CLUSTER_CLIENT_ENDPOINT_COUNT 1

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI
#define EMBER_COMMAND_INTEPRETER_HAS_DESCRIPTION_FIELD

/**** Security Section ****/
#define EMBER_AF_HAS_SECURITY_PROFILE_HA

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS 1
#define EMBER_AF_NETWORK_INDEX_PRIMARY 0
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_COORDINATOR_NETWORK
#define EMBER_AF_HAS_ROUTER_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN

/**** HAL Section ****/

/**** Callback Section ****/
#define EMBER_CALLBACK_STACK_STATUS
#define EMBER_CALLBACK_HAL_BUTTON_ISR
#define EMBER_CALLBACK_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_EZSP_INCOMING_ROUTE_ERROR_HANDLER
#define EZSP_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_GET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_SET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY_RESPONSE
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_CHECK_FOR_SLEEP
#define EMBER_CALLBACK_NCP_IS_AWAKE_ISR
#define EMBER_CALLBACK_GET_CURRENT_SLEEP_CONTROL
#define EMBER_CALLBACK_GET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_SET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_UNUSED_PAN_ID_FOUND
#define EMBER_CALLBACK_JOINABLE_NETWORK_FOUND
#define EMBER_CALLBACK_SCAN_ERROR
#define EMBER_CALLBACK_FIND_UNUSED_PAN_ID_AND_FORM
#define EMBER_CALLBACK_START_SEARCH_FOR_JOINABLE_NETWORK
#define EMBER_CALLBACK_GET_FORM_AND_JOIN_EXTENDED_PAN_ID
#define EMBER_CALLBACK_SET_FORM_AND_JOIN_EXTENDED_PAN_ID
#define EMBER_CALLBACK_CONFIGURE_REPORTING_COMMAND
#define EMBER_CALLBACK_READ_REPORTING_CONFIGURATION_COMMAND
#define EMBER_CALLBACK_CLEAR_REPORT_TABLE
#define EMBER_CALLBACK_REPORTING_ATTRIBUTE_CHANGE
/**** Debug printing section ****/

// Global switch
// #define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_APP 0x0002
#define EMBER_AF_PRINT_ATTRIBUTES 0x0004
#define EMBER_AF_PRINT_BITS { 0x07 }
#define EMBER_AF_PRINT_NAMES { \
  "Core",\
  "Application",\
  "Attributes",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 3


#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY
/**** App plugins section ****/
#define EMBER_AF_PLUGIN_CONCENTRATOR
#define EMBER_APPLICATION_HAS_SOURCE_ROUTING
#define EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER
// User options for plugin Concentrator Support
#define EMBER_AF_PLUGIN_CONCENTRATOR_CONCENTRATOR_TYPE LOW_RAM_CONCENTRATOR
#define EMBER_SOURCE_ROUTE_TABLE_SIZE 7
#define EZSP_HOST_SOURCE_ROUTE_TABLE_SIZE 32
#define EMBER_AF_PLUGIN_CONCENTRATOR_MIN_TIME_BETWEEN_BROADCASTS_SECONDS 10
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_TIME_BETWEEN_BROADCASTS_SECONDS 60
#define EMBER_AF_PLUGIN_CONCENTRATOR_ROUTE_ERROR_THRESHOLD 3
#define EMBER_AF_PLUGIN_CONCENTRATOR_DELIVERY_FAILURE_THRESHOLD 1
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_HOPS 0
#define EMBER_AF_PLUGIN_EZMODE_COMMISSIONING
// User options for plugin EZ-Mode Commissioning
#define EMBER_AF_PLUGIN_EZMODE_COMMISSIONING_IDENTIFY_TIMEOUT 180
#define EMBER_AF_PLUGIN_IDENTIFY
#define EMBER_AF_PLUGIN_IDENTIFY_FEEDBACK
// User options for plugin Identify Feedback
#define EMBER_AF_PLUGIN_IDENTIFY_FEEDBACK_LED_FEEDBACK
#define EMBER_AF_PLUGIN_IDLE_SLEEP
// User options for plugin Idle/Sleep
#define EMBER_AF_PLUGIN_NCP_CONFIGURATION
// User options for plugin NCP Configuration
#define EMBER_BINDING_TABLE_SIZE 2
#define EMBER_MAX_END_DEVICE_CHILDREN 6
#define EMBER_KEY_TABLE_SIZE 0
#define EMBER_AF_PLUGIN_NETWORK_FIND
#define EMBER_AF_DISABLE_FORM_AND_JOIN_TICK
// User options for plugin Network Find
#define EMBER_AF_PLUGIN_NETWORK_FIND_CHANNEL_MASK 0x0318C800UL
#define EMBER_AF_PLUGIN_NETWORK_FIND_RADIO_TX_POWER 3
#define EMBER_AF_PLUGIN_NETWORK_FIND_EXTENDED_PAN_ID { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_NETWORK_FIND_DURATION 5
#define EMBER_AF_PLUGIN_NETWORK_FIND_JOINABLE_SCAN_TIMEOUT_MINUTES 1
#define EMBER_AF_PLUGIN_REPORTING
// User options for plugin Reporting
#define EMBER_AF_PLUGIN_REPORTING_TABLE_SIZE 5


// Custom macros
#ifdef APP_SERIAL
#undef APP_SERIAL
#endif
#define APP_SERIAL 1
#ifdef EMBER_ASSERT_SERIAL_PORT
#undef EMBER_ASSERT_SERIAL_PORT
#endif
#define EMBER_ASSERT_SERIAL_PORT 1
#ifdef EMBER_AF_BAUD_RATE
#undef EMBER_AF_BAUD_RATE
#endif
#define EMBER_AF_BAUD_RATE 115200
#ifdef EMBER_SERIAL0_MODE
#undef EMBER_SERIAL0_MODE
#endif
#define EMBER_SERIAL0_MODE EMBER_SERIAL_FIFO
#ifdef EMBER_SERIAL0_RX_QUEUE_SIZE
#undef EMBER_SERIAL0_RX_QUEUE_SIZE
#endif
#define EMBER_SERIAL0_RX_QUEUE_SIZE 128
#ifdef EMBER_SERIAL0_TX_QUEUE_SIZE
#undef EMBER_SERIAL0_TX_QUEUE_SIZE
#endif
#define EMBER_SERIAL0_TX_QUEUE_SIZE 128
#ifdef EMBER_SERIAL0_BLOCKING
#undef EMBER_SERIAL0_BLOCKING
#endif
#define EMBER_SERIAL0_BLOCKING
#ifdef EMBER_SERIAL1_MODE
#undef EMBER_SERIAL1_MODE
#endif
#define EMBER_SERIAL1_MODE EMBER_SERIAL_FIFO
#ifdef EMBER_SERIAL1_RX_QUEUE_SIZE
#undef EMBER_SERIAL1_RX_QUEUE_SIZE
#endif
#define EMBER_SERIAL1_RX_QUEUE_SIZE 128
#ifdef EMBER_SERIAL1_TX_QUEUE_SIZE
#undef EMBER_SERIAL1_TX_QUEUE_SIZE
#endif
#define EMBER_SERIAL1_TX_QUEUE_SIZE 128
#ifdef EMBER_SERIAL1_BLOCKING
#undef EMBER_SERIAL1_BLOCKING
#endif
#define EMBER_SERIAL1_BLOCKING


#endif // __APP_HASAMPLEGATEWAY_H__
