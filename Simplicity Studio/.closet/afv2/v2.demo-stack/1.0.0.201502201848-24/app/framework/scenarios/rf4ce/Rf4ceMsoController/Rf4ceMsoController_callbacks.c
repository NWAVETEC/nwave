//

// This callback file is created for your convenience. You may add application code
// to this file. If you regenerate this file over a previous version, the previous
// version will be overwritten and any code you have added will be lost.

#include "app/framework/include/af.h"
#include "app/framework/plugin/rf4ce-profile/rf4ce-profile.h"
#include "app/framework/plugin/rf4ce-mso/rf4ce-mso.h"

// Custom event stubs. Custom events will be run along with all other events in the
// application framework. They should be managed using the Ember Event API
// documented in stack/include/events.h

// Event control struct declaration
EmberEventControl networkEventControl;

// Event function forward declaration
void networkEventHandler(void);

static int8u PGM happyTune[] = {
  NOTE_B4, 1,
  0,       1,
  NOTE_B5, 1,
  0,       0
};
static int8u PGM sadTune[] = {
  NOTE_B5, 1,
  0,       1,
  NOTE_B4, 5,
  0,       0
};
static int8u PGM waitTune[] = {
  NOTE_B4, 1,
  0,       0
};

// Event function stub
void networkEventHandler(void)
{
  if (emberAfRf4ceStart() == EMBER_SUCCESS) {
    emberEventControlSetInactive(networkEventControl);
    halPlayTune_P(waitTune, TRUE);
  } else {
    emberEventControlSetActive(networkEventControl);
    halPlayTune_P(sadTune, TRUE);
  }
}

/** @brief Stack Status
 *
 * This function is called by the application framework from the stack status
 * handler.  This callbacks provides applications an opportunity to be
 * notified of changes to the stack status and take appropriate action.  The
 * return code from this callback is ignored by the framework.  The framework
 * will always process the stack status after the callback returns.
 *
 * @param status   Ver.: always
 */
boolean emberAfStackStatusCallback(EmberStatus status)
{
  if (status == EMBER_NETWORK_UP) {
    emberEventControlSetInactive(networkEventControl);
    halPlayTune_P(happyTune, TRUE);
  } else if (status == EMBER_NETWORK_DOWN
             && emberNetworkState() == EMBER_NO_NETWORK) {
    emberEventControlSetActive(networkEventControl);
  }
  return FALSE;
}

/** @brief Main Init
 *
 * This function is called from the application's main function. It gives the
 * application a chance to do any initialization required at system startup.
 * Any code that you would normally put into the top of the application's
 * main() routine should be put into this function.
        Note: No callback
 * in the Application Framework is associated with resource cleanup. If you
 * are implementing your application on a Unix host where resource cleanup is
 * a consideration, we expect that you will use the standard Posix system
 * calls, including the use of atexit() and handlers for signals such as
 * SIGTERM, SIGINT, SIGCHLD, SIGPIPE and so on. If you use the signal()
 * function to register your signal handler, please mind the returned value
 * which may be an Application Framework function. If the return value is
 * non-null, please make sure that you call the returned function from your
 * handler to avoid negating the resource cleanup of the Application Framework
 * itself.
 *
 */
void emberAfMainInitCallback(void)
{
  emberEventControlSetActive(networkEventControl);
}

/** @brief Temporary Pairing Complete
 *
 * This function is called by the RF4CE MSO plugin when a temporary pairing
 * has been successfully created and the application should begin the
 * validation procedure.  The application must complete the validation within
 * the validation wait time (if set) and also kick the watchdog within the
 * initial watchdog timeout (if set) to avoid the validation automatically
 * failing due to a timeout.
 *
 * @param pairingIndex The index of the pairing entry.  Ver.: always
 * @param eui64 The ::EmberEUI64 of the remote node.  Ver.: always
 * @param vendorInfo The vendor information of the remote node.  Ver.: always
 * @param applicationInfo The application information of the remote node.
 * Ver.: always
 */
void emberAfPluginRf4ceMsoTemporaryPairingCompleteCallback(int8u pairingIndex,
                                                           const EmberEUI64 eui64,
                                                           const EmberRf4ceVendorInfo *vendorInfo,
                                                           const EmberRf4ceApplicationInfo *applicationInfo)
{
}

/** @brief Binding Complete
 *
 * This function is called by the RF4CE MSO plugin when the binding operation
 * completes.  If status is ::EMBER_SUCCESS, binding was successful and
 * pairingIndex indicates the index in the pairing table for the remote node
 * while eui64, vendorInfo, and applicationInfo contain information about the
 * remote node itself.  Otherwise, status indicates the reason for failure and
 * the other arguments are meaningless.
 *
 * @param status The status of the binding operation.  Ver.: always
 * @param pairingIndex The index of the pairing entry.  Ver.: always
 * Ver.: always
 */
void emberAfPluginRf4ceMsoBindingCompleteCallback(EmberAfRf4ceMsoBindingStatus status,
                                                  int8u pairingIndex)
{
  emberAfCorePrintln("Bind completed 0x%x", status);
  halPlayTune_P((status == EMBER_AF_RF4CE_MSO_BINDING_STATUS_SUCCESS
                 ? happyTune
                 : sadTune),
                TRUE);
}

/** @brief User Control Pressed
 *
 * This function is called by the RF4CE MSO plugin when a User Control Pressed
 * message is received by the device.
 *
 * @param commandCode The HDMI CEC operand [UI Command].  Ver.: always
 * @param commandPayload The additional operands, if any, required by the HDMI
 * CEC command.  Ver.: always
 * @param commandPayloadLength The length of the command payload in bytes.
 * Ver.: always
 */
void emberAfPluginRf4ceMsoUserControlPressedCallback(EmberAfRf4ceMsoKeyCode commandCode,
                                                     const int8u *commandPayload,
                                                     int8u commandPayloadLength)
{
}

/** @brief User Control Repeated
 *
 * This function is called by the RF4CE MSO plugin when a User Control
 * Repeated message is received by the device.
 *
 * @param commandCode The HDMI CEC operand [UI Command].  Ver.: always
 * @param commandPayload The additional operands, if any, required by the HDMI
 * CEC command.  Ver.: always
 * @param commandPayloadLength The length of the command payload in bytes.
 * Ver.: always
 */
void emberAfPluginRf4ceMsoUserControlRepeatedCallback(EmberAfRf4ceMsoKeyCode commandCode,
                                                      const int8u *commandPayload,
                                                      int8u commandPayloadLength)
{
}

/** @brief User Control Released
 *
 * This function is called by the RF4CE MSO plugin when a User Control
 * Released message is received by the device.
 *
 * @param commandCode The HDMI CEC operand [UI Command].  Ver.: always
 */
void emberAfPluginRf4ceMsoUserControlReleasedCallback(EmberAfRf4ceMsoKeyCode commandCode)
{
}

/** @brief Set Attribute Request
 *
 * This function is called by the RF4CE MSO plugin when a Set Attribute
 * Request message is received by the device.
 *
 * @param pairingIndex The index of the pairing entry.  Ver.: always
 * @param attributeId The attribute identifier.  Ver.: always
 * @param index The index of the element to store.  Ver.: always
 * @param valueLen The length in octets of the value field.  Ver.: always
 * @param value The value of the attribute element.  Ver.: always
 */
EmberAfRf4ceStatus emberAfPluginRf4ceMsoSetAttributeRequestCallback(int8u pairingIndex,
                                                                    EmberAfRf4ceMsoAttributeId attributeId,
                                                                    int8u index,
                                                                    int8u valueLen,
                                                                    const int8u *value)
{
  return EMBER_AF_RF4CE_STATUS_UNSUPPORTED_ATTRIBUTE;
}

/** @brief Set Attribute Response
 *
 * This function is called by the RF4CE MSO plugin when a Set Attribute
 * Response message is received by the device.
 *
 * @param attributeId The attribute identifier.  Ver.: always
 * @param index The index of the element to store.  Ver.: always
 * @param status The result of the set attribute procedure.  Ver.: always
 */
void emberAfPluginRf4ceMsoSetAttributeResponseCallback(EmberAfRf4ceMsoAttributeId attributeId,
                                                       int8u index,
                                                       EmberAfRf4ceStatus status)
{
  emberAfCorePrintln("Set Attribute Response 0x%x, %d, 0x%x",
                     attributeId,
                     index,
                     status);
}

/** @brief Get Attribute Request
 *
 * This function is called by the RF4CE MSO plugin when a Get Attribute
 * Request message is received by the device.
 *
 * @param pairingIndex The index of the pairing entry.  Ver.: always
 * @param attributeId The attribute identifier.  Ver.: always
 * @param index The index of the element to retrieve.  Ver.: always
 * @param valueLen The length in octets of the requested attribute field.
 * Ver.: always
 * @param value The value of the attribute element.  Ver.: always
 */
EmberAfRf4ceStatus emberAfPluginRf4ceMsoGetAttributeRequestCallback(int8u pairingIndex,
                                                                    EmberAfRf4ceMsoAttributeId attributeId,
                                                                    int8u index,
                                                                    int8u valueLen,
                                                                    int8u *value)
{
  return EMBER_AF_RF4CE_STATUS_UNSUPPORTED_ATTRIBUTE;
}

/** @brief Get Attribute Response
 *
 * This function is called by the RF4CE MSO plugin when a Get Attribute
 * Response message is received by the device.
 *
 * @param attributeId The attribute identifier.  Ver.: always
 * @param index The index of the element to retrieve.  Ver.: always
 * @param status The result of the get attribute procedure.  Ver.: always
 * @param valueLen The length in octets of the value field.  Ver.: always
 * @param value The value of the attribute element.  Ver.: always
 */
void emberAfPluginRf4ceMsoGetAttributeResponseCallback(EmberAfRf4ceMsoAttributeId attributeId,
                                                       int8u index,
                                                       EmberAfRf4ceStatus status,
                                                       int8u valueLen,
                                                       const int8u *value)
{
  emberAfCorePrint("Get Attribute Response 0x%x, %d, 0x%x, %d, {",
                   attributeId,
                   index,
                   status,
                   valueLen);
  emberAfCorePrintBuffer(value, valueLen, FALSE);
  emberAfCorePrintln("}");
}

/** @brief Gdp Message Sent
 *
 * This function is called by the RF4CE Profile plugin when a GDP message is
 * sent.
 *
 * @param pairingIndex The index of the entry in the pairing table used to
 * transmit the message.  Ver.: always
 * @param vendorId The vendor ID included in the message.  Ver.: always
 * @param message A pointer to the payload of the message that was sent.
 * Ver.: always
 * @param messageLength The length in bytes of the message.  Ver.: always
 * @param status An ::EmberStatus value.  Ver.: always
 */
void emberAfPluginRf4ceProfileGdpMessageSentCallback(int8u pairingIndex,
                                                     int16u vendorId,
                                                     const int8u *message,
                                                     int8u messageLength,
                                                     EmberStatus status)
{
}

/** @brief Remote Control 1 1 Message Sent
 *
 * This function is called by the RF4CE Profile plugin when a Remote Control
 * 1.0 or 1.1 message is sent.
 *
 * @param pairingIndex The index of the entry in the pairing table used to
 * transmit the message.  Ver.: always
 * @param vendorId The vendor ID included in the message.  Ver.: always
 * @param message A pointer to the payload of the message that was sent.
 * Ver.: always
 * @param messageLength The length in bytes of the message.  Ver.: always
 * @param status An ::EmberStatus value.  Ver.: always
 */
void emberAfPluginRf4ceProfileRemoteControl11MessageSentCallback(int8u pairingIndex,
                                                                 int16u vendorId,
                                                                 const int8u *message,
                                                                 int8u messageLength,
                                                                 EmberStatus status)
{
}

/** @brief Zrc 2 0 Message Sent
 *
 * This function is called by the RF4CE Profile plugin when a ZRC 2.0 message
 * is sent.
 *
 * @param pairingIndex The index of the entry in the pairing table used to
 * transmit the message.  Ver.: always
 * @param vendorId The vendor ID included in the message.  Ver.: always
 * @param message A pointer to the payload of the message that was sent.
 * Ver.: always
 * @param messageLength The length in bytes of the message.  Ver.: always
 * @param status An ::EmberStatus value.  Ver.: always
 */
void emberAfPluginRf4ceProfileZrc20MessageSentCallback(int8u pairingIndex,
                                                       int16u vendorId,
                                                       const int8u *message,
                                                       int8u messageLength,
                                                       EmberStatus status)
{
}

/** @brief Gdp Incoming Message
 *
 * This function is called by the RF4CE Profile plugin when a GDP message is
 * received.
 *
 * @param pairingIndex The index of the entry in the pairing table
 * corresponding to the PAN on which the message was received.  Ver.: always
 * @param vendorId The vendor ID included in the message.  Ver.: always
 * @param message A pointer to the payload of the received message.  Ver.:
 * always
 * @param messageLength The length in bytes of the received message.  Ver.:
 * always
 */
void emberAfPluginRf4ceProfileGdpIncomingMessageCallback(int8u pairingIndex,
                                                         int16u vendorId,
                                                         const int8u *message,
                                                         int8u messageLength)
{
}

/** @brief Remote Control 1 1 Incoming Message
 *
 * This function is called by the RF4CE Profile plugin when a Remote Control
 * 1.0 or 1.1 message is received.
 *
 * @param pairingIndex The index of the entry in the pairing table
 * corresponding to the PAN on which the message was received.  Ver.: always
 * @param vendorId The vendor ID included in the message.  Ver.: always
 * @param message A pointer to the payload of the received message.  Ver.:
 * always
 * @param messageLength The length in bytes of the received message.  Ver.:
 * always
 */
void emberAfPluginRf4ceProfileRemoteControl11IncomingMessageCallback(int8u pairingIndex,
                                                                     int16u vendorId,
                                                                     const int8u *message,
                                                                     int8u messageLength)
{
}

/** @brief Zrc 2 0 Incoming Message
 *
 * This function is called by the RF4CE Profile plugin when a ZRC 2.0 message
 * is received.
 *
 * @param pairingIndex The index of the entry in the pairing table
 * corresponding to the PAN on which the message was received.  Ver.: always
 * @param vendorId The vendor ID included in the message.  Ver.: always
 * @param message A pointer to the payload of the received message.  Ver.:
 * always
 * @param messageLength The length in bytes of the received message.  Ver.:
 * always
 */
void emberAfPluginRf4ceProfileZrc20IncomingMessageCallback(int8u pairingIndex,
                                                           int16u vendorId,
                                                           const int8u *message,
                                                           int8u messageLength)
{
}

/** @brief Remote Control 1 1 Discovery Request
 *
 * This function is called by the RF4CE Profile plugin when an discovery
 * request is received from a for the Remote Control 1.1 profile.
 *
 * @param ieeeAddr The IEEE address of the requesting device.  Ver.: always
 * @param nodeCapabilities The capabilities of the requesting device.  Ver.:
 * always
 * @param vendorInfo The vendor information of the requesting device.  Ver.:
 * always
 * @param appInfo The application information of the requesting device.  Ver.:
 * always
 * @param searchDevType The device type requested.  Ver.: always
 * @param rxLinkQuality The LQI of the request.  Ver.: always
 */
boolean emberAfPluginRf4ceProfileRemoteControl11DiscoveryRequestCallback(const EmberEUI64 ieeeAddr,
                                                                         int8u nodeCapabilities,
                                                                         const EmberRf4ceVendorInfo *vendorInfo,
                                                                         const EmberRf4ceApplicationInfo *appInfo,
                                                                         int8u searchDevType,
                                                                         int8u rxLinkQuality)
{
  return FALSE;
}

/** @brief Remote Control 1 1 Discovery Response
 *
 * This function is called by the RF4CE Profile plugin when an discovery
 * response is received from a node that supports the Remote Control 1.1
 * profile.
 *
 * @param atCapacity TRUE if the node sending the discovery response has no
 * free entry in its pairing table, FALSE otherwise.  Ver.: always
 * @param channel The channel on which the discovery response was received.
 * Ver.: always
 * @param panId The PAN identifier of the responding device.  Ver.: always
 * @param ieeeAddr The IEEE address of the responding device.  Ver.: always
 * @param nodeCapabilities The capabilities of the responding device.  Ver.:
 * always
 * @param vendorInfo The vendor information of the responding device.  Ver.:
 * always
 * @param appInfo The application information of the responding device.  Ver.:
 * always
 * @param rxLinkQuality The LQI of the discovery response.   Ver.: always
 * @param discRequestLqi The LQI of the discovery request command frame
 * reported by the responding device.  Ver.: always
 */
boolean emberAfPluginRf4ceProfileRemoteControl11DiscoveryResponseCallback(boolean atCapacity,
                                                                          int8u channel,
                                                                          EmberPanId panId,
                                                                          const EmberEUI64 ieeeAddr,
                                                                          int8u nodeCapabilities,
                                                                          const EmberRf4ceVendorInfo *vendorInfo,
                                                                          const EmberRf4ceApplicationInfo *appInfo,
                                                                          int8u rxLinkQuality,
                                                                          int8u discRequestLqi)
{
  return FALSE;
}

/** @brief Remote Control 1 1 Discovery Complete
 *
 * This function is called by the RF4CE Profile plugin when the discovery
 * process has completed.
 *
 * @param status An ::EmberStatus value indicating whether the discovery
 * succeeded or the failure reason.  Ver.: always
 */
void emberAfPluginRf4ceProfileRemoteControl11DiscoveryCompleteCallback(EmberStatus status)
{
}

/** @brief Remote Control 1 1 Auto Discovery Response Complete
 *
 * This function is called by the RF4CE Profile plugin when the auto discovery
 * response process has completed.
 *
 * @param status An ::EmberStatus value indicating whether the discovery
 * succeeded or the failure reason.  Ver.: always
 * @param srcIeeeAddr The IEEE address of the node from which the discovery
 * request command frame was received.  This parameter is meaningful only if
 * the status parameter is EMBER_SUCCESS  Ver.: always
 * @param nodeCapabilities The node capabilities of the node that issued the
 * discovery request.  This parameter is meaningful only if the status
 * parameter is EMBER_SUCCESS.  Ver.: always
 * @param vendorInfo A pointer to an ::EmberRf4ceVendorInfo struct containing
 * the vendor information of the node that issued the discovery request.  This
 * parameter is non-NULL only if the status parameter is EMBER_SUCCESS.  Ver.:
 * always
 * @param appInfo A pointer to an ::EmberRf4ceApplicationInfo struct
 * containing the application information of the node that issued the
 * discovery request.  This parameter is non-NULL only if the status parameter
 * is EMBER_SUCCESS.  Ver.: always
 * @param searchDevType The device type being discovered.  If this is 0xFF,
 * any type is being requested.  This parameter is meaningful only if the
 * status parameter is EMBER_SUCCESS.  Ver.: always
 */
void emberAfPluginRf4ceProfileRemoteControl11AutoDiscoveryResponseCompleteCallback(EmberStatus status,
                                                                                   const EmberEUI64 srcIeeeAddr,
                                                                                   int8u nodeCapabilities,
                                                                                   const EmberRf4ceVendorInfo *vendorInfo,
                                                                                   const EmberRf4ceApplicationInfo *appInfo,
                                                                                   int8u searchDevType)
{
}

/** @brief Remote Control 1 1 Pair Request
 *
 * This function is called by the RF4CE Profile plugin when an a pair request
 * is received from a node that supports the Remote Control 1.1 profile.
 *
 * @param status An ::EmberStatus value indicating whether the pairing is a
 * new pairing, a duplicate or if the pairing table is full.  Ver.: always
 * @param pairingIndex The index of the entry that will be used by the stack
 * for the pairing link.  Ver.: always
 * @param sourceIeeeAddr The source IEEE address of the incoming pair request.
 * Ver.: always
 * @param nodeCapabilities The node capabilities of the node that issued the
 * pair request.  Ver.: always
 * @param vendorInfo The vendor information of the requesting device.  Ver.:
 * always
 * @param appInfo The application information of the requesting device.  Ver.:
 * always
 * @param keyExchangeTransferCount The number of transfers to be used to
 * exchange the link key with the pairing originator.  Ver.: always
 */
boolean emberAfPluginRf4ceProfileRemoteControl11PairRequestCallback(EmberStatus status,
                                                                    int8u pairingIndex,
                                                                    const EmberEUI64 sourceIeeeAddr,
                                                                    int8u nodeCapabilities,
                                                                    const EmberRf4ceVendorInfo *vendorInfo,
                                                                    const EmberRf4ceApplicationInfo *appInfo,
                                                                    int8u keyExchangeTransferCount)
{
  return FALSE;
}

/** @brief Remote Control 1 1 Pair Complete
 *
 * This function is called by the RF4CE Profile plugin when the pairing
 * process has completed.
 *
 * @param status An ::EmberStatus value indicating whether the pairing
 * succeeded or the failure reason.  Ver.: always
 * @param pairingIndex The index of the pairing table entry corresponding to
 * the pairing link that was established during the pairing process.  Ver.:
 * always
 */
void emberAfPluginRf4ceProfileRemoteControl11PairCompleteCallback(EmberStatus status,
                                                                  int8u pairingIndex)
{
}
