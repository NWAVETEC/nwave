// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AF_ENDPOINT_CONFIG__
#define __AF_ENDPOINT_CONFIG__


// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT 2




// Generated attributes
#define GENERATED_ATTRIBUTES { \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (int8u*)0x01 } }, /* 0 / Basic / ZCL version*/\
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (int8u*)0x00 } }, /* 1 / Basic / power source*/\
    { 0x0000, ZCL_UTC_TIME_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 2 / Time / time*/\
    { 0x0001, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_SINGLETON), { (int8u*)0x00 } }, /* 3 / Time / time status*/\
    { 0x0000, ZCL_INT48U_ATTRIBUTE_TYPE, 6, (0x00), { NULL } }, /* 4 / Simple Metering / current summation delivered*/\
    { 0x0200, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (int8u*)0x00 } }, /* 5 / Simple Metering / status*/\
    { 0x0300, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (int8u*)0x00 } }, /* 6 / Simple Metering / unit of measure*/\
    { 0x0303, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (int8u*)0x00 } }, /* 7 / Simple Metering / summation formatting*/\
    { 0x0306, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (int8u*)0x00 } }, /* 8 / Simple Metering / metering device type*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (int8u*)0xFFFF } }, /* 9 / Tunneling / close tunnel timeout*/\
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT|ATTRIBUTE_MASK_SINGLETON), { (int8u*)0x0000 } }, /* 10 / Key Establishment / key establishment suite (client)*/\
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (int8u*)0x0000 } }, /* 11 / Key Establishment / key establishment suite (server)*/\
  }


// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \
const EmberAfGenericClusterFunction emberAfFuncArrayTimeClusterServer[] = { (EmberAfGenericClusterFunction)emberAfTimeClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayPriceClusterServer[] = { (EmberAfGenericClusterFunction)emberAfPriceClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayMessagingClusterServer[] = { (EmberAfGenericClusterFunction)emberAfMessagingClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayTunnelingClusterClient[] = { (EmberAfGenericClusterFunction)emberAfTunnelingClusterClientInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterClient[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientAttributeChangedCallback,(EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientDefaultResponseCallback,(EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientMessageSentCallback,(EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientPreAttributeChangedCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterServer[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerAttributeChangedCallback,(EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerDefaultResponseCallback,(EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerMessageSentCallback,(EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerPreAttributeChangedCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArraySimpleMeteringClusterServer[] = { (EmberAfGenericClusterFunction)emberAfSimpleMeteringClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayTunnelingClusterServer[] = { (EmberAfGenericClusterFunction)emberAfTunnelingClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfTunnelingClusterServerAttributeChangedCallback}; \


// Clusters defitions
#define GENERATED_CLUSTERS { \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 2, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x000A, (EmberAfAttributeMetadata*)&(generatedAttributes[2]), 2, 0, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayTimeClusterServer, },    \
    { 0x0700, (EmberAfAttributeMetadata*)&(generatedAttributes[4]), 0, 0, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayPriceClusterServer, },    \
    { 0x0701, (EmberAfAttributeMetadata*)&(generatedAttributes[4]), 0, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0702, (EmberAfAttributeMetadata*)&(generatedAttributes[4]), 0, 0, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x0703, (EmberAfAttributeMetadata*)&(generatedAttributes[9]), 0, 0, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayMessagingClusterServer, },    \
    { 0x0704, (EmberAfAttributeMetadata*)&(generatedAttributes[9]), 0, 0, (CLUSTER_MASK_CLIENT| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayTunnelingClusterClient, },    \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[10]), 1, 0, (CLUSTER_MASK_CLIENT| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION| CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION| CLUSTER_MASK_MESSAGE_SENT_FUNCTION| CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterClient, },    \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 1, 0, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION| CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION| CLUSTER_MASK_MESSAGE_SENT_FUNCTION| CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterServer, },    \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 2, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0702, (EmberAfAttributeMetadata*)&(generatedAttributes[4]), 5, 10, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArraySimpleMeteringClusterServer, },    \
    { 0x0704, (EmberAfAttributeMetadata*)&(generatedAttributes[9]), 1, 2, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayTunnelingClusterServer, },    \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[10]), 1, 0, (CLUSTER_MASK_CLIENT| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION| CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION| CLUSTER_MASK_MESSAGE_SENT_FUNCTION| CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterClient, },    \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 1, 0, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION| CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION| CLUSTER_MASK_MESSAGE_SENT_FUNCTION| CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterServer, },    \
  }


// Endpoint types
#define GENERATED_ENDPOINT_TYPES {        \
    { (EmberAfCluster*)&(generatedClusters[0]), 9, 0 }, \
    { (EmberAfCluster*)&(generatedClusters[9]), 5, 12 }, \
  }


// Networks
#define EMBER_AF_GENERATED_NETWORKS { \
  { \
    EM_AF_NETWORK_TYPE_ZIGBEE_PRO, \
    { \
      .pro = { \
        ZA_COORDINATOR, \
        EMBER_AF_SECURITY_PROFILE_SE_TEST, \
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
#define ATTRIBUTE_LARGEST 6
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE 11

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 12

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1, 2 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 265, 265 }

// Array of profile ids
#define FIXED_DEVICE_IDS { 1280, 1281 }

// Array of profile ids
#define FIXED_DEVICE_VERSIONS { 0, 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0, 1 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 0 }


// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE \
  EmberEventControl emberAfTimeClusterServerTickCallbackControl1; \
  EmberEventControl emberAfPriceClusterServerTickCallbackControl1; \
  EmberEventControl emberAfTunnelingClusterClientTickCallbackControl1; \
  EmberEventControl emberAfKeyEstablishmentClusterServerTickCallbackControl1; \
  EmberEventControl emberAfSimpleMeteringClusterServerTickCallbackControl2; \
  EmberEventControl emberAfTunnelingClusterServerTickCallbackControl2; \
  EmberEventControl emberAfKeyEstablishmentClusterServerTickCallbackControl2; \
  extern EmberEventControl emberAfPluginConcentratorUpdateEventControl; \
  extern void emberAfPluginConcentratorUpdateEventHandler(void); \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl; \
  extern void emberAfPluginNetworkFindTickEventHandler(void); \
  static void networkEventWrapper(EmberEventControl *control, EmberAfNetworkEventHandler handler, int8u networkIndex) \
  { \
    emberAfPushNetworkIndex(networkIndex); \
    emberEventControlSetInactive(*control); \
    (*handler)(); \
    emberAfPopNetworkIndex(); \
  } \
  EmberEventControl emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[1]; \
  extern void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler(void); \
  void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler, 0); } \
  EmberEventControl emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[1]; \
  extern void emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler(void); \
  void emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler, 0); } \
  static void clusterTickWrapper(EmberEventControl *control, EmberAfTickFunction callback, int8u endpoint) \
  { \
    emberAfPushEndpointNetworkIndex(endpoint); \
    emberEventControlSetInactive(*control); \
    (*callback)(endpoint); \
    emberAfPopNetworkIndex(); \
  } \
  void emberAfTimeClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfTimeClusterServerTickCallbackControl1, emberAfTimeClusterServerTickCallback, 1); } \
  void emberAfPriceClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfPriceClusterServerTickCallbackControl1, emberAfPriceClusterServerTickCallback, 1); } \
  void emberAfTunnelingClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfTunnelingClusterClientTickCallbackControl1, emberAfTunnelingClusterClientTickCallback, 1); } \
  void emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallback, 1); } \
  void emberAfSimpleMeteringClusterServerTickCallbackWrapperFunction2(void) { clusterTickWrapper(&emberAfSimpleMeteringClusterServerTickCallbackControl2, emberAfSimpleMeteringClusterServerTickCallback, 2); } \
  void emberAfTunnelingClusterServerTickCallbackWrapperFunction2(void) { clusterTickWrapper(&emberAfTunnelingClusterServerTickCallbackControl2, emberAfTunnelingClusterServerTickCallback, 2); } \
  void emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction2(void) { clusterTickWrapper(&emberAfKeyEstablishmentClusterServerTickCallbackControl2, emberAfKeyEstablishmentClusterServerTickCallback, 2); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS   \
  { &emberAfTimeClusterServerTickCallbackControl1, emberAfTimeClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfPriceClusterServerTickCallbackControl1, emberAfPriceClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfTunnelingClusterClientTickCallbackControl1, emberAfTunnelingClusterClientTickCallbackWrapperFunction1 }, \
  { &emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfSimpleMeteringClusterServerTickCallbackControl2, emberAfSimpleMeteringClusterServerTickCallbackWrapperFunction2 }, \
  { &emberAfTunnelingClusterServerTickCallbackControl2, emberAfTunnelingClusterServerTickCallbackWrapperFunction2 }, \
  { &emberAfKeyEstablishmentClusterServerTickCallbackControl2, emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction2 }, \
  { &emberAfPluginConcentratorUpdateEventControl, emberAfPluginConcentratorUpdateEventHandler }, \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler }, \
  { &emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0 }, \
  { &emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0 }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS   \
  "Time Cluster Server EP 1",  \
  "Price Cluster Server EP 1",  \
  "Tunneling Cluster Client EP 1",  \
  "Key Establishment Cluster Server EP 1",  \
  "Simple Metering Cluster Server EP 2",  \
  "Tunneling Cluster Server EP 2",  \
  "Key Establishment Cluster Server EP 2",  \
  "Concentrator Support Plugin Update",  \
  "Network Find Plugin Tick",  \
  "Partner Link Key Exchange Plugin Timeout NWK 0", \
  "Smart Energy Registration Plugin Tick NWK 0", \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 7

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0xa, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfTimeClusterServerTickCallbackControl1}, \
{ 0x1, 0x700, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfPriceClusterServerTickCallbackControl1}, \
{ 0x1, 0x704, TRUE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfTunnelingClusterClientTickCallbackControl1}, \
{ 0x1, 0x800, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfKeyEstablishmentClusterServerTickCallbackControl1}, \
{ 0x2, 0x702, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfSimpleMeteringClusterServerTickCallbackControl2}, \
{ 0x2, 0x704, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfTunnelingClusterServerTickCallbackControl2}, \
{ 0x2, 0x800, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfKeyEstablishmentClusterServerTickCallbackControl2}


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginAddressTableInitCallback(void); \
  void emberAfPluginConcentratorInitCallback(void); \
  void emberAfPluginFragmentationInitCallback(void); \
  void emberAfPluginMeterMirrorInitCallback(void); \
  void emberAfPluginMeterSnapshotStorageInitCallback(void); \
  void emberAfPluginNetworkFindInitCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginAddressTableInitCallback(); \
  emberAfPluginConcentratorInitCallback(); \
  emberAfPluginFragmentationInitCallback(); \
  emberAfPluginMeterMirrorInitCallback(); \
  emberAfPluginMeterSnapshotStorageInitCallback(); \
  emberAfPluginNetworkFindInitCallback(); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginAddressTableNcpInitCallback(boolean memoryAllocation); \
  void emberAfPluginConcentratorNcpInitCallback(boolean memoryAllocation); \
  void emberAfPluginFragmentationNcpInitCallback(boolean memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation); \
  emberAfPluginConcentratorNcpInitCallback(memoryAllocation); \
  emberAfPluginFragmentationNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status); \
  void emberAfPluginMeterMirrorStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginConcentratorStackStatusCallback(status); \
  emberAfPluginMeterMirrorStackStatusCallback(status); \
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
    { 0x0700, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Price / PublishPrice */ \
    { 0x0700, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetCurrentPrice */ \
    { 0x0700, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetScheduledPrices */ \
    { 0x0700, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetTariffInformation */ \
    { 0x0700, 0x07, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetPriceMatrix */ \
    { 0x0701, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Demand Response and Load Control / LoadControlEvent */ \
    { 0x0701, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Demand Response and Load Control / CancelLoadControlEvent */ \
    { 0x0701, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Demand Response and Load Control / CancelAllLoadControlEvents */ \
    { 0x0702, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / GetProfileResponse */ \
    { 0x0702, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / GetProfile */ \
    { 0x0702, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / RequestMirror */ \
    { 0x0702, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / RemoveMirror */ \
    { 0x0702, 0x03, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / RequestFastPollModeResponse */ \
    { 0x0702, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / RequestFastPollMode */ \
    { 0x0702, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / ScheduleSnapshot */ \
    { 0x0702, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / TakeSnapshot */ \
    { 0x0702, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / GetSnapshot */ \
    { 0x0702, 0x08, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / ConfigureMirror */ \
    { 0x0703, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Messaging / DisplayMessage */ \
    { 0x0703, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Messaging / GetLastMessage */ \
    { 0x0703, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Messaging / CancelMessage */ \
    { 0x0703, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Messaging / MessageConfirmation */ \
    { 0x0704, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / RequestTunnel */ \
    { 0x0704, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / RequestTunnelResponse */ \
    { 0x0704, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / CloseTunnel */ \
    { 0x0704, 0x01, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / TransferDataServerToClient */ \
    { 0x0704, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / TransferDataClientToServer */ \
    { 0x0704, 0x02, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / TransferDataErrorServerToClient */ \
    { 0x0704, 0x03, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / TransferDataErrorClientToServer */ \
    { 0x0704, 0x06, COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / TunnelClosureNotification */ \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / InitiateKeyEstablishmentRequest */ \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / InitiateKeyEstablishmentResponse */ \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / EphemeralDataRequest */ \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / EphemeralDataResponse */ \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / ConfirmKeyDataRequest */ \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / ConfirmKeyDataResponse */ \
    { 0x0800, 0x03, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / TerminateKeyEstablishment */ \
  }
#define EMBER_AF_GENERATED_COMMAND_COUNT 37
#endif // __AF_ENDPOINT_CONFIG__
