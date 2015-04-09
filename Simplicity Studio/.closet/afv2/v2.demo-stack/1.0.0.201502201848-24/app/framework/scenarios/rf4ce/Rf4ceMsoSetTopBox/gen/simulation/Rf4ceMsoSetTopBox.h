// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __APP_RF4CEMSOSETTOPBOX_H__
#define __APP_RF4CEMSOSETTOPBOX_H__


/**** Included Header Section ****/

/**** ZCL Section ****/
#define ZA_PROMPT "Rf4ceMsoSetTopBox"
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
#define EMBER_KEY_TABLE_SIZE 0
#define EMBER_AF_HAS_SECURITY_PROFILE_HA

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS 2
#define EMBER_AF_NETWORK_INDEX_PRIMARY 0
#define EMBER_AF_NETWORK_INDEX_NETWORK 1
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_NETWORK
#define EMBER_AF_HAS_END_DEVICE_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_HAS_SLEEPY_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN

/*** Bindings section ****/
#define EMBER_BINDING_TABLE_SIZE 2

/**** LED configuration ****/
#define EMBER_AF_HEARTBEAT_ENABLE
#define EMBER_AF_HEARTBEAT_LED BOARDLED1

/**** HAL Section ****/
#define ZA_CLI_FULL

/**** Callback Section ****/
#define EMBER_CALLBACK_STACK_STATUS
#define EMBER_CALLBACK_MAIN_INIT
#define EMBER_CALLBACK_RF4CE_MESSAGE_SENT_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_MESSAGE_SENT_HANDLER
#define EMBER_CALLBACK_RF4CE_INCOMING_MESSAGE_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_INCOMING_MESSAGE_HANDLER
#define EMBER_CALLBACK_RF4CE_DISCOVERY_COMPLETE_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_DISCOVERY_COMPLETE_HANDLER
#define EMBER_CALLBACK_RF4CE_DISCOVERY_REQUEST_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_DISCOVERY_REQUEST_HANDLER
#define EMBER_CALLBACK_RF4CE_DISCOVERY_RESPONSE_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_DISCOVERY_RESPONSE_HANDLER
#define EMBER_CALLBACK_RF4CE_AUTO_DISCOVERY_RESPONSE_COMPLETE_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_AUTO_DISCOVERY_RESPONSE_COMPLETE_HANDLER
#define EMBER_CALLBACK_RF4CE_PAIR_REQUEST_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_PAIR_REQUEST_HANDLER
#define EMBER_CALLBACK_RF4CE_PAIR_COMPLETE_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_PAIR_COMPLETE_HANDLER
#define EMBER_CALLBACK_RF4CE_UNPAIR_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_UNPAIR_HANDLER
#define EMBER_CALLBACK_RF4CE_UNPAIR_COMPLETE_HANDLER
#define EMBER_APPLICATION_HAS_RF4CE_UNPAIR_COMPLETE_HANDLER
/**** Debug printing section ****/

// Global switch
#define EMBER_AF_PRINT_ENABLE
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
#define EMBER_AF_PLUGIN_RF4CE_MSO
// User options for plugin RF4CE Multiple System Operators Profile
#define EMBER_AF_PLUGIN_RF4CE_MSO_KEY_REPEAT_INTERVAL_MS 60
#define EMBER_AF_PLUGIN_RF4CE_MSO_KEY_REPEAT_WAIT_TIME_MS 200
#define EMBER_AF_PLUGIN_RF4CE_MSO_RESPONSE_WAIT_TIME_MS 100
#define EMBER_AF_PLUGIN_RF4CE_MSO_MAX_PAIRING_CANDIDATES 3
#define EMBER_AF_PLUGIN_RF4CE_MSO_LINK_LOST_WAIT_TIME_MS 10000
#define EMBER_AF_PLUGIN_RF4CE_MSO_AUTO_CHECK_VALIDATION_PERIOD_MS 500
#define EMBER_AF_PLUGIN_RF4CE_MSO_VALIDATION_WAIT_TIME_MS 30000
#define EMBER_AF_PLUGIN_RF4CE_MSO_VALIDATION_INITIAL_WATCHDOG_TIME_MS 0
#define EMBER_AF_PLUGIN_RF4CE_MSO_KEY_EXCHANGE_TRANSFER_COUNT 4
#define EMBER_AF_PLUGIN_RF4CE_PROFILE
#define EZSP_APPLICATION_HAS_RF4CE_INCOMING_MESSAGE_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_MESSAGE_SENT_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_DISCOVERY_REQUEST_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_DISCOVERY_RESPONSE_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_AUTO_DISCOVERY_RESPONSE_COMPLETE_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_DISCOVERY_COMPLETE_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_PAIR_REQUEST_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_PAIR_COMPLETE_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_UNPAIR_HANDLER
#define EZSP_APPLICATION_HAS_RF4CE_UNPAIR_COMPLETE_HANDLER
// User options for plugin RF4CE Profile Support
#define EMBER_RF4CE_PAIRING_TABLE_SIZE 5
#define EMBER_RF4CE_PENDING_OUTGOING_PACKET_TABLE_SIZE 8


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
#ifdef EMBER_AF_RF4CE_NODE_CAPABILITIES
#undef EMBER_AF_RF4CE_NODE_CAPABILITIES
#endif
#define EMBER_AF_RF4CE_NODE_CAPABILITIES ( \
  EMBER_RF4CE_NODE_CAPABILITIES_IS_TARGET_BIT \
  | EMBER_RF4CE_NODE_CAPABILITIES_POWER_SOURCE_BIT \
  | EMBER_RF4CE_NODE_CAPABILITIES_SECURITY_BIT \
  | EMBER_RF4CE_NODE_CAPABILITIES_CHANNEL_NORM_BIT \
)
#ifdef EMBER_AF_RF4CE_NODE_TYPE_TARGET
#undef EMBER_AF_RF4CE_NODE_TYPE_TARGET
#endif
#define EMBER_AF_RF4CE_NODE_TYPE_TARGET
#ifdef EMBER_AF_RF4CE_VENDOR_INFO
#undef EMBER_AF_RF4CE_VENDOR_INFO
#endif
#define EMBER_AF_RF4CE_VENDOR_INFO { \
  0xFFF1, /* vendor id */ \
  "\0\0\0\0\0\0\0", /* vendor string */ \
}
#ifdef EMBER_AF_RF4CE_APPLICATION_INFO
#undef EMBER_AF_RF4CE_APPLICATION_INFO
#endif
#define EMBER_AF_RF4CE_APPLICATION_INFO { \
  (1 << EMBER_RF4CE_APP_CAPABILITIES_SUPPORTED_DEVICE_TYPES_OFFSET \
   | 1 << EMBER_RF4CE_APP_CAPABILITIES_SUPPORTED_PROFILES_OFFSET), \
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", /* user string */ \
  {0x09, }, /* device types */ \
  {0xC0, }, /* profile ids */ \
}
#ifdef EMBER_AF_RF4CE_POWER
#undef EMBER_AF_RF4CE_POWER
#endif
#define EMBER_AF_RF4CE_POWER 3


#endif // __APP_RF4CEMSOSETTOPBOX_H__
