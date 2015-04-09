// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AF_ENDPOINT_CONFIG__
#define __AF_ENDPOINT_CONFIG__


// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT 1


// MinMax defaults
#define GENERATED_MIN_MAX_DEFAULTS { \
    { \
      (int8u*)0x01, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x0000, \
      (int8u*)0x0000, \
      (int8u*)0xFFFF \
    }, \
  }


// Generated attributes
#define GENERATED_ATTRIBUTES { \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (int8u*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/\
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (int8u*)&(minMaxDefaults[1]) } }, /* 1 / Basic / power source*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[2]) } }, /* 2 / Identify / identify time*/\
  }


// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \
const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback}; \


// Clusters defitions
#define GENERATED_CLUSTERS { \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 2, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[2]), 0, 0, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[2]), 1, 2, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, },    \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[3]), 0, 0, (CLUSTER_MASK_CLIENT), NULL,  },    \
  }


// Endpoint types
#define GENERATED_ENDPOINT_TYPES {        \
    { (EmberAfCluster*)&(generatedClusters[0]), 4, 2 }, \
  }


// Networks
#define EMBER_AF_GENERATED_NETWORKS { \
  { \
    EM_AF_NETWORK_TYPE_ZIGBEE_PRO, \
    { \
      .pro = { \
        ZA_COORDINATOR, \
        EMBER_AF_SECURITY_PROFILE_HA, \
      } \
    } \
  }, \
}
#define EMBER_AF_GENERATED_NETWORK_STRINGS  \
  "Primary (pro)", \


// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT 0

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT 0


// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST 2
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE 2

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 2

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260 }

// Array of profile ids
#define FIXED_DEVICE_IDS { 7 }

// Array of profile ids
#define FIXED_DEVICE_VERSIONS { 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }


// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1; \
  extern EmberEventControl emberAfPluginConcentratorUpdateEventControl; \
  extern void emberAfPluginConcentratorUpdateEventHandler(void); \
  extern EmberEventControl emberAfPluginEzmodeCommissioningStateEventControl; \
  extern void emberAfPluginEzmodeCommissioningStateEventHandler(void); \
  extern EmberEventControl emberAfPluginIdentifyFeedbackProvideFeedbackEventControl; \
  extern void emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler(void); \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl; \
  extern void emberAfPluginNetworkFindTickEventHandler(void); \
  extern EmberEventControl emberAfPluginReportingTickEventControl; \
  extern void emberAfPluginReportingTickEventHandler(void); \
  extern EmberEventControl buttonEventControl; \
  extern void buttonEventHandler(void); \
  static void clusterTickWrapper(EmberEventControl *control, EmberAfTickFunction callback, int8u endpoint) \
  { \
    emberAfPushEndpointNetworkIndex(endpoint); \
    emberEventControlSetInactive(*control); \
    (*callback)(endpoint); \
    emberAfPopNetworkIndex(); \
  } \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallback, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS   \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfPluginConcentratorUpdateEventControl, emberAfPluginConcentratorUpdateEventHandler }, \
  { &emberAfPluginEzmodeCommissioningStateEventControl, emberAfPluginEzmodeCommissioningStateEventHandler }, \
  { &emberAfPluginIdentifyFeedbackProvideFeedbackEventControl, emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler }, \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler }, \
  { &emberAfPluginReportingTickEventControl, emberAfPluginReportingTickEventHandler }, \
  { &buttonEventControl, buttonEventHandler }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS   \
  "Identify Cluster Server EP 1",  \
  "Concentrator Support Plugin Update",  \
  "EZ-Mode Commissioning Plugin State",  \
  "Identify Feedback Plugin ProvideFeedback",  \
  "Network Find Plugin Tick",  \
  "Reporting Plugin Tick",  \
  "button Custom",  \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 1

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1}


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginConcentratorInitCallback(void); \
  void emberAfPluginNetworkFindInitCallback(void); \
  void emberAfPluginReportingInitCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginConcentratorInitCallback(); \
  emberAfPluginNetworkFindInitCallback(); \
  emberAfPluginReportingInitCallback(); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginConcentratorNcpInitCallback(boolean memoryAllocation); \
  void emberAfPluginNcpConfigurationNcpInitCallback(boolean memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS \
  emberAfPluginConcentratorNcpInitCallback(memoryAllocation); \
  emberAfPluginNcpConfigurationNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginConcentratorStackStatusCallback(status); \
  emberAfPluginNetworkFindStackStatusCallback(status); \


#define EMBER_AF_GENERATED_PLUGIN_MESSAGE_SENT_FUNCTION_DECLARATIONS \
  void emberAfPluginConcentratorMessageSentCallback(EmberOutgoingMessageType type, \
                    int16u indexOrDestination, \
                    EmberApsFrame *apsFrame, \
                    EmberStatus status, \
                    int16u messageLength, \
                    int8u *messageContents); \


#define EMBER_AF_GENERATED_PLUGIN_MESSAGE_SENT_FUNCTION_CALLS \
  emberAfPluginConcentratorMessageSentCallback(type, \
                    indexOrDestination, \
                    apsFrame, \
                    status, \
                    messageLength, \
                    messageContents); \

// Generated data for the command discovery
#define GENERATED_COMMANDS { \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */ \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Identify / IdentifyQueryResponse */ \
    { 0x0003, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */ \
    { 0x0006, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / Off */ \
    { 0x0006, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / On */ \
    { 0x0006, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / Toggle */ \
  }
#define EMBER_AF_GENERATED_COMMAND_COUNT 6
#endif // __AF_ENDPOINT_CONFIG__
