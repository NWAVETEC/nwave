//

// This callback file is created for your convenience. You may add application code
// to this file. If you regenerate this file over a previous version, the previous
// version will be overwritten and any code you have added will be lost.

#include "app/framework/include/af.h"
#include "app/framework/plugin/rf4ce-profile/rf4ce-profile.h"
#include "app/framework/plugin/rf4ce-zrc11/rf4ce-zrc11.h"

// Custom event stubs. Custom events will be run along with all other events in the
// application framework. They should be managed using the Ember Event API
// documented in stack/include/events.h

// Event control struct declarations
EmberEventControl buttonEventControl;
EmberEventControl networkEventControl;

// Event function forward declarations
void buttonEventHandler(void);
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

#define BUTTON BUTTON0
#define LED BOARDLED2

// Event function stubs
void buttonEventHandler(void)
{
  if (emberAfRf4ceZrc11EnableAutoDiscoveryResponse() == EMBER_SUCCESS) {
    halPlayTune_P(waitTune, TRUE);
    halSetLed(LED);
  } else {
    halPlayTune_P(sadTune, TRUE);
  }
  emberEventControlSetInactive(buttonEventControl);
}

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

/** @brief emberAfHalButtonIsrCallback
 *
 *
 */
// Hal Button ISR Callback
// This callback is called by the framework whenever a button is pressed on the
// device. This callback is called within ISR context.
void emberAfHalButtonIsrCallback(int8u button, int8u state)
{
  if (button == BUTTON && state == BUTTON_PRESSED) {
    emberEventControlSetActive(buttonEventControl);
  }
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

/** @brief Mso Message Sent
 *
 * This function is called by the RF4CE Profile plugin when an MSO message is
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
void emberAfPluginRf4ceProfileMsoMessageSentCallback(int8u pairingIndex,
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

/** @brief Mso Incoming Message
 *
 * This function is called by the RF4CE Profile plugin when an MSO message is
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
void emberAfPluginRf4ceProfileMsoIncomingMessageCallback(int8u pairingIndex,
                                                         int16u vendorId,
                                                         const int8u *message,
                                                         int8u messageLength)
{
}

/** @brief Mso Discovery Request
 *
 * This function is called by the RF4CE Profile plugin when an discovery
 * request is received from a node for the MSO profile.
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
boolean emberAfPluginRf4ceProfileMsoDiscoveryRequestCallback(const EmberEUI64 ieeeAddr,
                                                             int8u nodeCapabilities,
                                                             const EmberRf4ceVendorInfo *vendorInfo,
                                                             const EmberRf4ceApplicationInfo *appInfo,
                                                             int8u searchDevType,
                                                             int8u rxLinkQuality)
{
  return FALSE;
}

/** @brief Mso Discovery Response
 *
 * This function is called by the RF4CE Profile plugin when an discovery
 * response is received from a node that supports the MSO profile.
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
boolean emberAfPluginRf4ceProfileMsoDiscoveryResponseCallback(boolean atCapacity,
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

/** @brief Mso Discovery Complete
 *
 * This function is called by the RF4CE Profile plugin when the discovery
 * process has completed.
 *
 * @param status An ::EmberStatus value indicating whether the discovery
 * succeeded or the failure reason.  Ver.: always
 */
void emberAfPluginRf4ceProfileMsoDiscoveryCompleteCallback(EmberStatus status)
{
}

/** @brief Mso Auto Discovery Response Complete
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
void emberAfPluginRf4ceProfileMsoAutoDiscoveryResponseCompleteCallback(EmberStatus status,
                                                                       const EmberEUI64 srcIeeeAddr,
                                                                       int8u nodeCapabilities,
                                                                       const EmberRf4ceVendorInfo *vendorInfo,
                                                                       const EmberRf4ceApplicationInfo *appInfo,
                                                                       int8u searchDevType)
{
}

/** @brief Mso Pair Request
 *
 * This function is called by the RF4CE Profile plugin when an a pair request
 * is received from a node that supports the MSO profile.
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
boolean emberAfPluginRf4ceProfileMsoPairRequestCallback(EmberStatus status,
                                                        int8u pairingIndex,
                                                        const EmberEUI64 sourceIeeeAddr,
                                                        int8u nodeCapabilities,
                                                        const EmberRf4ceVendorInfo *vendorInfo,
                                                        const EmberRf4ceApplicationInfo *appInfo,
                                                        int8u keyExchangeTransferCount)
{
  return FALSE;
}

/** @brief Mso Pair Complete
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
void emberAfPluginRf4ceProfileMsoPairCompleteCallback(EmberStatus status,
                                                      int8u pairingIndex)
{
}

/** @brief Pairing Complete
 *
 * This function is called by the RF4CE ZRC plugin when the push-button
 * pairing operation completes.  If status is ::EMBER_SUCCESS, pairing was
 * successful and pairingIndex indicates the index in the pairing table for
 * the remote node while eui64, vendorInfo, and applicationInfo contain
 * information about the remote node itself.  Otherwise, status indicates the
 * reason for failure and the other arguments are meaningless.
 *
 * @param status The status of the push-button pairing operation.  Ver.:
 * always
 * @param pairingIndex The index of the pairing entry.  Ver.: always
 * @param eui64 The ::EmberEUI64 of the remote node.  Ver.: always
 * @param vendorInfo The vendor information of the remote node.  Ver.: always
 * @param applicationInfo The application information of the remote node.
 * Ver.: always
 */
void emberAfPluginRf4ceZrc11PairingCompleteCallback(EmberStatus status,
                                                    int8u pairingIndex,
                                                    const EmberEUI64 eui64,
                                                    const EmberRf4ceVendorInfo *vendorInfo,
                                                    const EmberRf4ceApplicationInfo *applicationInfo)
{
  if (status == EMBER_SUCCESS) {
    emberAfCorePrintln("Pairing %p: 0x%x", "complete", pairingIndex);
    halPlayTune_P(happyTune, TRUE);
  } else {
    emberAfCorePrintln("Pairing %p: 0x%x", "failed", status);
    halPlayTune_P(sadTune, TRUE);
  }
  halClearLed(LED);
}

/** @brief User Control Pressed
 *
 * This function is called by the RF4CE ZRC plugin when a User Control Pressed
 * message is received by the device.
 *
 * @param commandCode The HDMI CEC operand [UI Command].  Ver.: always
 * @param commandPayload The additional operands, if any, required by the HDMI
 * CEC command.  Ver.: always
 * @param commandPayloadLength The length of the command payload in bytes.
 * Ver.: always
 */
void emberAfPluginRf4ceZrc11UserControlPressedCallback(EmberAfRf4ceUserControlCode commandCode,
                                                       const int8u *commandPayload,
                                                       int8u commandPayloadLength)
{
  emberAfCorePrint("Pressed 0x%x {", commandCode);
  emberAfCorePrintBuffer(commandPayload, commandPayloadLength, FALSE);
  emberAfCorePrintln("}");
}

/** @brief User Control Repeated
 *
 * This function is called by the RF4CE ZRC plugin when a User Control
 * Repeated message is received by the device.
 *
 * @param commandCode The HDMI CEC operand [UI Command].  Ver.: always
 * @param commandPayload The additional operands, if any, required by the HDMI
 * CEC command.  Ver.: always
 * @param commandPayloadLength The length of the command payload in bytes.
 * Ver.: always
 */
void emberAfPluginRf4ceZrc11UserControlRepeatedCallback(EmberAfRf4ceUserControlCode commandCode,
                                                        const int8u *commandPayload,
                                                        int8u commandPayloadLength)
{
  emberAfCorePrint("Repeated 0x%x {", commandCode);
  emberAfCorePrintBuffer(commandPayload, commandPayloadLength, FALSE);
  emberAfCorePrintln("}");
}

/** @brief User Control Released
 *
 * This function is called by the RF4CE ZRC plugin when a User Control
 * Released message is received by the device.
 *
 * @param commandCode The HDMI CEC operand [UI Command].  Ver.: always
 */
void emberAfPluginRf4ceZrc11UserControlReleasedCallback(EmberAfRf4ceUserControlCode commandCode)
{
  emberAfCorePrintln("Released 0x%x", commandCode);
}

/** @brief Command Discovery Request
 *
 * This function is called by the RF4CE ZRC plugin when a Command Discovery
 * Request message is received by the device.
 *
 * @param commandsSupported The 256-bit field indicating which user control
 * commands are supported.  Ver.: always
 */
void emberAfPluginRf4ceZrc11CommandDiscoveryRequestCallback(int8u *commandsSupported)
{
}

/** @brief Command Discovery Response
 *
 * This function is called by the RF4CE ZRC plugin when a Command Discovery
 * Response message is received by the device.
 *
 * @param commandsSupported The 256-bit field indicating which user control
 * commands are supported.  Ver.: always
 */
void emberAfPluginRf4ceZrc11CommandDiscoveryResponseCallback(const int8u *commandsSupported)
{
}
