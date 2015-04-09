//

// This callback file is created for your convenience. You may add application code
// to this file. If you regenerate this file over a previous version, the previous
// version will be overwritten and any code you have added will be lost.

#include "app/framework/include/af.h"
#include "app/framework/util/af-main.h"
#include "app/util/serial/command-interpreter2.h"
#include "app/framework/plugin/rf4ce-profile/rf4ce-profile.h"
#include "app/framework/plugin/rf4ce-mso/rf4ce-mso.h"


// Event control struct declarations
EmberEventControl autoToggleEventControl;
EmberEventControl dialogMenuEventControl;
EmberEventControl networkStartEventControl;
EmberEventControl readAttributeEventControl;
EmberEventControl readAttributeTimeoutEventControl;

void autoToggleEventHandler(void);
void dialogMenuEventHandler(void);
void networkStartEventHandler(void);
void readAttributeEventHandler(void);
void readAttributeTimeoutEventHandler(void);

static void joinNetwork(void);
static void leaveNetwork(void);
static void findLight(void);
static void matchDescriptorsCallback(const EmberAfServiceDiscoveryResult *result);
static void lookUpIeeeAddress(void);
static void ieeeAddressCallback(const EmberAfServiceDiscoveryResult *result);
static void setBinding(void);
#define sendReadAttribute readAttributeEventHandler
static void controlLight(int8u commandId);
static void setReadAttributeTimingMs(void);
static void printStatus(void);
static void rf4ceStart(void);
static void setPollingIntervalMs(void);
static void apsAcks(void);

#ifndef EZSP_HOST
static void rf4ceInfo(void);
static void setBaseChannel(void);
static void setNodeCapabilities(void);
static void setMacRetries(void);
#endif

static boolean bindingMatches(void);

#define fatal(message, status)                                     \
  do {                                                             \
    emberAfCorePrintln("%p: %p (0x%x)", "FATAL", message, status); \
    emberSerialWaitSend(EMBER_AF_PRINT_OUTPUT);                    \
    halReboot();                                                   \
  } while (FALSE)
#define error(message, status)                                     \
  do {                                                             \
    emberAfCorePrintln("%p: %p (0x%x)", "ERROR", message, status); \
    sadTune();                                                     \
  } while (FALSE)
#define warning(message, status)                                     \
  do {                                                               \
    emberAfCorePrintln("%p: %p (0x%x)", "WARNING", message, status); \
    /*waitTune();*/                                                  \
  } while (FALSE)
#define info(message)                              \
  do {                                             \
    emberAfCorePrintln("%p: %p", "INFO", message); \
    waitTune();                                    \
  } while (FALSE)
#define success(message)               \
  do {                                 \
    emberAfCorePrintln("%p", message); \
    happyTune();                       \
  } while (FALSE)
#define wait(message)                  \
  do {                                 \
    emberAfCorePrintln("%p", message); \
    waitTune();                        \
  } while (FALSE)

EmberCommandEntry emberAfCustomCommands[] = {
  emberCommandEntryAction("join",           joinNetwork,              "",  "Join a network"),
  emberCommandEntryAction("find",           findLight,                "",  "Find a light"),
  emberCommandEntryAction("read-delay",     setReadAttributeTimingMs, "v",    "Set read attribute frequency"),
  emberCommandEntryAction("read-timeout",   setReadAttributeTimingMs, "v",    "Set read attribute timeout"),
  emberCommandEntryAction("status",         printStatus,              "",     "Print status information"),
  emberCommandEntryAction("rf4ce-start",    rf4ceStart,               "",     "Start the node as target"),
  emberCommandEntryAction("short-poll",     setPollingIntervalMs,     "v",    "Set short poll interval"),
  emberCommandEntryAction("long-poll",      setPollingIntervalMs,     "w",    "Set long poll interval"),
  emberCommandEntryAction("aps-acks",       apsAcks,                  "u",    "Enable/disable APS acks"),
#ifndef EZSP_HOST
  emberCommandEntryAction("rf4ce-info",     rf4ceInfo,                "",     "Print RF4CE network info"),
  emberCommandEntryAction("set-base-ch",    setBaseChannel,           "u",    "Set the RF4CE base channel"),
  emberCommandEntryAction("set-node-cap",   setNodeCapabilities,      "u",    "Set the node capabilities"),
  emberCommandEntryAction("set-mac-retries",setMacRetries,            "u",    "Set the number of MAC retries"),
#endif
  emberCommandEntryTerminator(),
};

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

#define happyTune() halPlayTune_P(happyTune, TRUE);
#define sadTune()   halPlayTune_P(sadTune,   TRUE);
#define waitTune()  halPlayTune_P(waitTune,  TRUE);

static EmberEUI64 theirEui64;
static EmberNodeId theirNodeId = EMBER_NULL_NODE_ID;
static int8u theirEndpoint = 0xFF;
static int8u theirBindingIndex = EMBER_NULL_BINDING;
static boolean theirOnOff = FALSE;
static boolean useApsAcks = FALSE;

static int8u myEndpoint = 0xFF;

static int16u readAttributeEventDelayMs = MILLISECOND_TICKS_PER_SECOND;
static int16u readAttributeTimeoutMs = 30 * MILLISECOND_TICKS_PER_SECOND;

static int16u autoToggleIntervalMS = 0;

// HA network state machine
enum {
  STATE_HA_NETWORK_DOWN,
  STATE_HA_NETWORK_JOINING,
  STATE_HA_NETWORK_JOINED_LIGHT_NOT_PAIRED,
  STATE_HA_NETWORK_JOINED_LIGHT_PAIRED,
};

// CLI menu state machine
enum {
  STATE_MENU_CLOSED,
  STATE_MENU_HA_JOIN_OPEN,
  STATE_MENU_HA_LIGHT_DISCOVERY_OPEN,
  STATE_MENU_HA_LIGHT_CONTROL_OPEN,
  STATE_MENU_HA_LIGHT_QUERYING_TIME_OPEN,
  STATE_MENU_HA_LIGHT_AUTO_TOGGLING_OPEN,
};

static int8u haNetworkState = STATE_HA_NETWORK_DOWN;
static int8u cliMenuState = STATE_MENU_CLOSED;

#define VALIDATION_CODE_LENGTH 3
static int8u expectedValidationCode[VALIDATION_CODE_LENGTH];
static int8u currentValidationCode[VALIDATION_CODE_LENGTH];
static int8u currentValidationCodeIndex;
static int8u currentValidationPairingIndex = 0xFF;

static void printHAJoinDialogMenu(void);
static void printHALightDiscoveryDialogMenu(void);
static void printHAControlDialogMenu(void);
static void printHALightQueryingTimeDialogMenu(void);
static void printHALightAutoTogglingDialogMenu(void);
static void printLightStatus(void);

#define DEMO_DIALOG_MENU_TIMEOUT_QS           80
#define DEMO_VALIDATION_TIMEOUT_MS            10000
#define DEMO_DEFAULT_SHORT_POLL_INTERVAL_MS   500
#define DEMO_LATENCY_TEST_KEY                 0xFB

/** @brief Pre Command Received
 *
 * This callback is the second in the Application Framework���s message
 * processing chain. At this point in the processing of incoming over-the-air
 * messages, the application has determined that the incoming message is a ZCL
 * command. It parses enough of the message to populate an
 * EmberAfClusterCommand struct. The Application Framework defines this struct
 * value in a local scope to the command processing but also makes it
 * available through a global pointer called emberAfCurrentCommand, in
 * app/framework/util/util.c. When command processing is complete, this
 * pointer is cleared.
 *
 * @param cmd   Ver.: always
 */
boolean emberAfPreCommandReceivedCallback(EmberAfClusterCommand *cmd)
{
  if (bindingMatches()
      && (cmd->apsFrame->profileId == HA_PROFILE_ID
          || cmd->apsFrame->profileId == EMBER_WILDCARD_PROFILE_ID)
      && cmd->apsFrame->clusterId == ZCL_ON_OFF_CLUSTER_ID
      && !cmd->clusterSpecific
      && !cmd->mfgSpecific
      && cmd->direction == ZCL_DIRECTION_SERVER_TO_CLIENT
      && cmd->commandId == ZCL_READ_ATTRIBUTES_RESPONSE_COMMAND_ID
      && cmd->bufLen == 8
      && cmd->payloadStartIndex == 3
      && (emberAfGetInt16u(cmd->buffer, cmd->payloadStartIndex, cmd->bufLen)
          == ZCL_ON_OFF_ATTRIBUTE_ID)
      && (emberAfGetInt8u(cmd->buffer, cmd->payloadStartIndex + 2, cmd->bufLen)
          == EMBER_ZCL_STATUS_SUCCESS)
      && (emberAfGetInt8u(cmd->buffer, cmd->payloadStartIndex + 3, cmd->bufLen)
          == ZCL_BOOLEAN_ATTRIBUTE_TYPE)) {
    boolean onOff = emberAfGetInt8u(cmd->buffer,
                                    cmd->payloadStartIndex + 4,
                                    cmd->bufLen);
    if (theirOnOff != onOff) {
      theirOnOff = onOff;
      printLightStatus();
    }
    emberEventControlSetDelayMS(readAttributeTimeoutEventControl,
                                readAttributeTimeoutMs);
  }
  return FALSE;
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
  if (emberGetCurrentNetwork() == EMBER_AF_NETWORK_INDEX_PRO) {
    if (status == EMBER_NETWORK_UP) {
      success("PRO stack UP");
      haNetworkState = STATE_HA_NETWORK_JOINED_LIGHT_NOT_PAIRED;

      // Set the short poll interval to the default value.
      emberAfSetShortPollIntervalMsCallback(DEMO_DEFAULT_SHORT_POLL_INTERVAL_MS);
    } else if (emberNetworkState() == EMBER_NO_NETWORK) {
      error("PRO stack DOWN", status);

      haNetworkState = STATE_HA_NETWORK_DOWN;
      emberEventControlSetInactive(readAttributeEventControl);
      emberEventControlSetInactive(readAttributeTimeoutEventControl);
    }
  } else {
    if (status == EMBER_NETWORK_UP) {
      success("RF4CE stack UP");
      emberEventControlSetInactive(networkStartEventControl);
    } else if (emberNetworkState() == EMBER_NO_NETWORK) {
      error("RF4CE stack DOWN", status);
      emberEventControlSetActive(networkStartEventControl);
    }
  }
  return FALSE;
}

/** @brief Main Init
 *
 * This function is called from the application���s main function. It gives the
 * application a chance to do any initialization required at system startup.
 * Any code that you would normally put into the top of the application���s
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
  emberAfPrintReceivedMessages = FALSE;

  haNetworkState = STATE_HA_NETWORK_DOWN;
  cliMenuState = STATE_MENU_CLOSED;

  emberEventControlSetActive(networkStartEventControl);
}

/** @brief Client Init
 *
 * On/off cluster, Client Init
 *
 * @param endpoint Endpoint that is being initialized  Ver.: always
 */
void emberAfOnOffClusterClientInitCallback(int8u endpoint)
{
  myEndpoint = endpoint;
  assert(emberAfNetworkIndexFromEndpoint(myEndpoint)
         == EMBER_AF_NETWORK_INDEX_PRO);
}

/** @brief Poll Completed
 *
 * This function is called by the End Device Support plugin after a poll is
 * completed.
 *
 * @param status Return status of a completed poll operation  Ver.: always
 */
void emberAfPluginEndDeviceSupportPollCompletedCallback(EmberStatus status)
{
}

/** @brief Finished
 *
 * This callback is fired when the network-find plugin is finished with the
 * forming or joining process.  The result of the operation will be returned
 * in the status parameter.
 *
 * @param status   Ver.: always
 */
void emberAfPluginNetworkFindFinishedCallback(EmberStatus status)
{
  if (status != EMBER_SUCCESS) {
    error("Searching for joinable networks", status);
    haNetworkState = STATE_HA_NETWORK_DOWN;
  }
}

/** @brief Get Radio Power For Channel
 *
 * This callback is called by the framework when it is setting the radio power
 * during the discovery process. The framework will set the radio power
 * depending on what is returned by this callback.
 *
 * @param channel   Ver.: always
 */
int8s emberAfPluginNetworkFindGetRadioPowerForChannelCallback(int8u channel)
{
  return EMBER_AF_PLUGIN_NETWORK_FIND_RADIO_TX_POWER;
}

/** @brief Join
 *
 * This callback is called by the plugin when a joinable network has been
 * found.  If the application returns TRUE, the plugin will attempt to join
 * the network.  Otherwise, the plugin will ignore the network and continue
 * searching.  Applications can use this callback to implement a network
 * blacklist.
 *
 * @param networkFound   Ver.: always
 * @param lqi   Ver.: always
 * @param rssi   Ver.: always
 */
boolean emberAfPluginNetworkFindJoinCallback(EmberZigbeeNetwork *networkFound,
                                             int8u lqi,
                                             int8s rssi)
{
  return TRUE;
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
  int8u i;

  currentValidationCodeIndex = 0;
  currentValidationPairingIndex = pairingIndex;

  waitTune();

  // Generate a random n-digit validation code in [0,9].
  emberAfCorePrint("Incoming pairing: please enter the following %d digit"
                   " validation code: [",
                   VALIDATION_CODE_LENGTH);
  for (i = 0; i < VALIDATION_CODE_LENGTH; i++) {
    expectedValidationCode[i] = (halCommonGetRandom() % 10
                                 + EMBER_AF_RF4CE_MSO_KEY_CODE_DIGIT_0);
    emberAfCorePrint("%d",
                     (expectedValidationCode[i]
                      - EMBER_AF_RF4CE_MSO_KEY_CODE_DIGIT_0));
  }
  emberAfCorePrintln("]");

  if (emberEventControlGetActive(dialogMenuEventControl)) {
    dialogMenuEventHandler();
  }
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
  if (status == EMBER_AF_RF4CE_MSO_BINDING_STATUS_SUCCESS) {
    success("Binding complete");
  } else {
    error("Validation failed", status);
  }
  currentValidationPairingIndex = 0xFF;
}

void dialogMenuEventHandler(void)
{
  emberEventControlSetInactive(dialogMenuEventControl);

  emberAfCorePrintln("***Dialog MENU now closed***");

  cliMenuState = STATE_MENU_CLOSED;
}

void networkStartEventHandler(void)
{
  EmberStatus status = emberAfRf4ceStart();
  if (status == EMBER_SUCCESS) {
    info("RF4CE node started");
    emberEventControlSetInactive(networkStartEventControl);
  } else {
    error("RF4CE start failed", status);
    emberEventControlSetActive(networkStartEventControl);
  }
}

void autoToggleEventHandler(void)
{
  emberEventControlSetInactive(autoToggleEventControl);

  controlLight(ZCL_TOGGLE_COMMAND_ID);

  if (autoToggleIntervalMS > 0) {
    emberEventControlSetDelayMS(autoToggleEventControl, autoToggleIntervalMS);
  }
}

static void userControlPressed(int8u commandCode)
{
  if (cliMenuState == STATE_MENU_CLOSED) {
    switch (commandCode) {
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_ROOT_MENU:
      emberEventControlSetDelayQS(dialogMenuEventControl,
                                  DEMO_DIALOG_MENU_TIMEOUT_QS);
      if (haNetworkState == STATE_HA_NETWORK_JOINED_LIGHT_PAIRED) {
        cliMenuState = STATE_MENU_HA_LIGHT_CONTROL_OPEN;
        printHAControlDialogMenu();
      } else if (haNetworkState == STATE_HA_NETWORK_DOWN) {
        cliMenuState = STATE_MENU_HA_JOIN_OPEN;
        printHAJoinDialogMenu();
      } else if (haNetworkState == STATE_HA_NETWORK_JOINED_LIGHT_NOT_PAIRED) {
        cliMenuState = STATE_MENU_HA_LIGHT_DISCOVERY_OPEN;
        printHALightDiscoveryDialogMenu();
      }
      break;
    default:
      emberAfCorePrintln("KEY 0x%x", commandCode);
      break;
    }
  } else if (cliMenuState == STATE_MENU_HA_JOIN_OPEN) {
    cliMenuState = STATE_MENU_CLOSED;
    emberEventControlSetInactive(dialogMenuEventControl);
    switch (commandCode) {
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_ROOT_MENU:
      emberEventControlSetDelayQS(dialogMenuEventControl,
                                  DEMO_DIALOG_MENU_TIMEOUT_QS);
      cliMenuState = STATE_MENU_HA_JOIN_OPEN;
      printHAJoinDialogMenu();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_1:
      joinNetwork();
      break;
#ifndef EZSP_HOST
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_2:
      rf4ceInfo();
      break;
#endif
    default:
      emberAfCorePrintln("Unexpected key 0x%x", commandCode);
      break;
    }
  } else if (cliMenuState == STATE_MENU_HA_LIGHT_DISCOVERY_OPEN) {
    cliMenuState = STATE_MENU_CLOSED;
    emberEventControlSetInactive(dialogMenuEventControl);
    switch (commandCode) {
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_ROOT_MENU:
      emberEventControlSetDelayQS(dialogMenuEventControl,
                                  DEMO_DIALOG_MENU_TIMEOUT_QS);
      cliMenuState = STATE_MENU_HA_LIGHT_DISCOVERY_OPEN;
      printHALightDiscoveryDialogMenu();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_1:
      findLight();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_2:
      leaveNetwork();
      break;
#ifndef EZSP_HOST
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_3:
      rf4ceInfo();
      break;
#endif
    default:
      emberAfCorePrintln("Unexpected key 0x%x", commandCode);
      break;
    }
  } else if (cliMenuState == STATE_MENU_HA_LIGHT_CONTROL_OPEN) {
    cliMenuState = STATE_MENU_CLOSED;
    emberEventControlSetInactive(dialogMenuEventControl);

    switch (commandCode) {
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_ROOT_MENU:
      emberEventControlSetDelayQS(dialogMenuEventControl,
                                  DEMO_DIALOG_MENU_TIMEOUT_QS);
      cliMenuState = STATE_MENU_HA_LIGHT_CONTROL_OPEN;
      printHAControlDialogMenu();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_1:
      printLightStatus();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_2:
      controlLight(ZCL_ON_COMMAND_ID);
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_3:
      controlLight(ZCL_OFF_COMMAND_ID);
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_4:
      controlLight(ZCL_TOGGLE_COMMAND_ID);
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_5:
      leaveNetwork();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_6:
      cliMenuState = STATE_MENU_HA_LIGHT_QUERYING_TIME_OPEN;
      printHALightQueryingTimeDialogMenu();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_7:
      cliMenuState = STATE_MENU_HA_LIGHT_AUTO_TOGGLING_OPEN;
      printHALightAutoTogglingDialogMenu();
      break;
#ifndef EZSP_HOST
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_8:
      rf4ceInfo();
      break;
#endif
    default:
      emberAfCorePrintln("Unexpected key 0x%x", commandCode);
      break;
    }
  } else if (cliMenuState == STATE_MENU_HA_LIGHT_QUERYING_TIME_OPEN) {
    int16u pollRate = DEMO_DEFAULT_SHORT_POLL_INTERVAL_MS;
    cliMenuState = STATE_MENU_CLOSED;
    emberEventControlSetInactive(dialogMenuEventControl);

    switch (commandCode) {
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_ROOT_MENU:
      emberEventControlSetDelayQS(dialogMenuEventControl,
                                  DEMO_DIALOG_MENU_TIMEOUT_QS);
      cliMenuState = STATE_MENU_HA_LIGHT_CONTROL_OPEN;
      printHAControlDialogMenu();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_1:
      readAttributeEventDelayMs = 200;
      pollRate = 100;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_2:
      readAttributeEventDelayMs = 500;
      pollRate = 250;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_3:
      readAttributeEventDelayMs = MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_4:
      readAttributeEventDelayMs = 2*MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_5:
      readAttributeEventDelayMs = 5*MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_6:
      readAttributeEventDelayMs = 10*MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_7:
      readAttributeEventDelayMs = 60*MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_8:
      readAttributeEventDelayMs = 0;
      break;
    default:
      emberAfCorePrintln("Unexpected key 0x%x", commandCode);
      return;
    }

    if (readAttributeEventDelayMs > 0) {
      if (readAttributeEventDelayMs < 1000) {
        emberAfCorePrintln("Querying the HA light every %d milliseconds",
                           readAttributeEventDelayMs);
      } else {
        emberAfCorePrintln("Querying the HA light every %d seconds",
                           readAttributeEventDelayMs/1000);
      }
      emberEventControlSetDelayMS(readAttributeEventControl,
                                  readAttributeEventDelayMs);
    } else {
      emberAfCorePrintln("Not querying the HA light");
      emberEventControlSetInactive(readAttributeEventControl);
    }

    // Set the short polling interval.
    emberAfPushNetworkIndex(EMBER_AF_NETWORK_INDEX_PRO);
    emberAfSetShortPollIntervalMsCallback(pollRate);
    emberAfPopNetworkIndex();
  } else if (cliMenuState == STATE_MENU_HA_LIGHT_AUTO_TOGGLING_OPEN) {
    cliMenuState = STATE_MENU_CLOSED;
    emberEventControlSetInactive(dialogMenuEventControl);

    switch (commandCode) {
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_ROOT_MENU:
      emberEventControlSetDelayQS(dialogMenuEventControl,
                                  DEMO_DIALOG_MENU_TIMEOUT_QS);
      cliMenuState = STATE_MENU_HA_LIGHT_CONTROL_OPEN;
      printHAControlDialogMenu();
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_1:
      autoToggleIntervalMS = 500;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_2:
      autoToggleIntervalMS = MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_3:
      autoToggleIntervalMS = 2*MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_4:
      autoToggleIntervalMS = 5*MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_5:
      autoToggleIntervalMS = 10*MILLISECOND_TICKS_PER_SECOND;
      break;
    case EMBER_AF_RF4CE_USER_CONTROL_CODE_6:
      autoToggleIntervalMS = 0;
      break;
    default:
      emberAfCorePrintln("Unexpected key 0x%x", commandCode);
      return;
    }

    if (autoToggleIntervalMS > 0) {
      if (autoToggleIntervalMS < 1000) {
        emberAfCorePrintln("Auto-toggling every %dms", autoToggleIntervalMS);
      } else {
        emberAfCorePrintln("Auto-toggling every %ds", autoToggleIntervalMS/1000);
      }
      emberEventControlSetDelayMS(autoToggleEventControl,
                                  autoToggleIntervalMS);
    } else {
      emberAfCorePrintln("Auto-toggling disabled");
      emberEventControlSetInactive(autoToggleEventControl);
    }
  }
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
  if (currentValidationPairingIndex != 0xFF) {
    if (currentValidationPairingIndex == emberAfRf4ceGetPairingIndex()) {
      //if (commandCode == EMBER_AF_RF4CE_MSO_KEY_CODE_EXIT) {
      //  emberAfRf4ceMsoAbortValidation(FALSE); // not a full abort
      //  currentValidationPairingIndex = 0xFF;
      //}
      if (EMBER_AF_RF4CE_MSO_KEY_CODE_DIGIT_0 <= commandCode
          && commandCode <= EMBER_AF_RF4CE_MSO_KEY_CODE_DIGIT_9
          && currentValidationCodeIndex < VALIDATION_CODE_LENGTH) {
        emberAfCorePrint("%d ",
                         (commandCode - EMBER_AF_RF4CE_MSO_KEY_CODE_DIGIT_0));
        currentValidationCode[currentValidationCodeIndex++] = commandCode;
        if (currentValidationCodeIndex == VALIDATION_CODE_LENGTH) {
          emberAfCorePrintln("");
          if (MEMCOMPARE(expectedValidationCode,
                         currentValidationCode,
                         VALIDATION_CODE_LENGTH)
              == 0) {
            emberAfRf4ceMsoValidate();
          } else {
            emberAfRf4ceMsoTerminateValidation();
          }
          currentValidationPairingIndex = 0xFF;
        }
      }
    } else {
      // The target may terminate the validation if it receives a user control
      // message from another controller.
      //emberAfRf4ceMsoTerminateValidation();
      //currentValidationPairingIndex = 0xFF;
    }
    return;
  }

  userControlPressed(commandCode);
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
    success("Pairing complete");
  } else {
    error("Pairing failed", status);
  }
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
  userControlPressed(commandCode);
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

/** @brief Select File Descriptors
 *
 * This function is called when the Gateway plugin will do a select() call to
 * yield the processor until it has a timed event that needs to execute.  The
 * function implementor may add additional file descriptors that the
 * application will monitor with select() for data ready.  These file
 * descriptors must be read file descriptors.  The number of file descriptors
 * added must be returned by the function (0 for none added).
 *
 * @param list A pointer to a list of File descriptors that the function
 * implementor may append to  Ver.: always
 * @param maxSize The maximum number of elements that the function implementor
 * may add.  Ver.: always
 */
int emberAfPluginGatewaySelectFileDescriptorsCallback(int* list,
                                                      int maxSize)
{
  return 0;
}

static void joinNetwork(void)
{
  EmberStatus status;

  if (haNetworkState != STATE_HA_NETWORK_DOWN) {
    emberAfCorePrintln("Node already joined to the HA network");
    return;
  }

  emberAfPushNetworkIndex(EMBER_AF_NETWORK_INDEX_PRO);
  status = emberAfStartSearchForJoinableNetwork();
  if (status == EMBER_SUCCESS) {
    haNetworkState = STATE_HA_NETWORK_JOINING;
    info("Searching for joinable network");
  } else {
    error("Error searching for joinable networks", status);
  }
  emberAfPopNetworkIndex();
}

static void leaveNetwork(void)
{
  EmberStatus status;

  if (haNetworkState != STATE_HA_NETWORK_JOINED_LIGHT_NOT_PAIRED
      && haNetworkState != STATE_HA_NETWORK_JOINED_LIGHT_PAIRED) {
    emberAfCorePrintln("Node not joined to the HA network");
    return;
  }

  emberAfPushNetworkIndex(EMBER_AF_NETWORK_INDEX_PRO);
  status = emberLeaveNetwork();
  if (status == EMBER_SUCCESS) {
    info("Leaving network");
  } else {
    error("Error leaving network", status);
  }
  emberAfPopNetworkIndex();
}

static void findLight(void)
{
  EmberStatus status;
  emberAfPushNetworkIndex(EMBER_AF_NETWORK_INDEX_PRO);
  theirNodeId = EMBER_NULL_NODE_ID;
  status =
    emberAfFindDevicesByProfileAndCluster(EMBER_RX_ON_WHEN_IDLE_BROADCAST_ADDRESS,
                                          HA_PROFILE_ID,
                                          ZCL_ON_OFF_CLUSTER_ID,
                                          EMBER_AF_SERVER_CLUSTER_DISCOVERY,
                                          matchDescriptorsCallback);
  if (status == EMBER_SUCCESS) {
    info("Searching for lights");
  } else {
    error("Error searching for lights", status);
  }
  emberAfPopNetworkIndex();
}

static void matchDescriptorsCallback(const EmberAfServiceDiscoveryResult *result)
{
  if (emberAfHaveDiscoveryResponseStatus(result->status)) {
    if (theirNodeId == EMBER_NULL_NODE_ID) {
      theirNodeId = result->matchAddress;
      theirEndpoint =
        ((const EmberAfEndpointList *)result->responseData)->list[0];
    }
  } else if (theirNodeId == EMBER_NULL_NODE_ID) {
    error("No lights were found", EMBER_NO_RESPONSE);
  } else {
    lookUpIeeeAddress();
  }
}

static void lookUpIeeeAddress(void)
{
  EmberStatus status = emberLookupEui64ByNodeId(theirNodeId, theirEui64);
  if (status == EMBER_SUCCESS) {
    setBinding();
  } else {
    status = emberAfFindIeeeAddress(theirNodeId, ieeeAddressCallback);
    if (status == EMBER_SUCCESS) {
      info("Identifying light");
    } else {
      error("Error identifying light", status);
    }
  }
}

static void ieeeAddressCallback(const EmberAfServiceDiscoveryResult *result)
{
  if (emberAfHaveDiscoveryResponseStatus(result->status)) {
    MEMCOPY(theirEui64, (int8u *)result->responseData, EUI64_SIZE);
    setBinding();
  } else {
    error("Error identifying light", EMBER_NO_RESPONSE);
  }
}

static void setBinding(void)
{
  EmberStatus status;
  EmberBindingTableEntry entry;
  entry.type = EMBER_UNICAST_BINDING;
  entry.local = myEndpoint;
  entry.clusterId = ZCL_ON_OFF_CLUSTER_ID;
  entry.remote = theirEndpoint;
  MEMCOPY(entry.identifier, theirEui64, EUI64_SIZE);
  status = emberSetBinding(0, &entry);
  if (status == EMBER_SUCCESS) {
    success("Paired with light");
    theirBindingIndex = 0;
    emberSetBindingRemoteNodeId(theirBindingIndex, theirNodeId);
    sendReadAttribute();
    haNetworkState = STATE_HA_NETWORK_JOINED_LIGHT_PAIRED;
  } else {
    error("Unable to bind to the light", status);
  }
}

void readAttributeEventHandler(void)
{
  EmberStatus status;
  int8u attributeIds[] = {
    LOW_BYTE(ZCL_ON_OFF_ATTRIBUTE_ID), HIGH_BYTE(ZCL_ON_OFF_ATTRIBUTE_ID),
  };
  int16u bytes =
    emberAfFillExternalBuffer((ZCL_PROFILE_WIDE_COMMAND
                               | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER
                               | ZCL_DISABLE_DEFAULT_RESPONSE_MASK),
                              ZCL_ON_OFF_CLUSTER_ID,
                              ZCL_READ_ATTRIBUTES_COMMAND_ID,
                              "b",
                              attributeIds,
                              sizeof(attributeIds));
  if (bytes == 0) {
    status = EMBER_MESSAGE_TOO_LONG;
  } else {
    emberAfGetCommandApsFrame()->options = ((useApsAcks)
                                            ? EMBER_APS_OPTION_RETRY
                                            : EMBER_APS_OPTION_NONE);
    status = emberAfSendCommandUnicast(EMBER_OUTGOING_VIA_BINDING,
                                       theirBindingIndex);
  }
  if (!emberEventControlGetActive(readAttributeTimeoutEventControl)) {
    emberEventControlSetDelayMS(readAttributeTimeoutEventControl,
                                readAttributeTimeoutMs);
  }
  //if (status != EMBER_SUCCESS) {
  //  warning("Query failed", status);
  //}
  emberEventControlSetDelayMS(readAttributeEventControl,
                              readAttributeEventDelayMs);
}

void readAttributeTimeoutEventHandler(void)
{
  haNetworkState = STATE_HA_NETWORK_JOINED_LIGHT_NOT_PAIRED;
  error("Lost communication with the light", EMBER_NO_RESPONSE);
  emberEventControlSetInactive(readAttributeEventControl);
  emberEventControlSetInactive(readAttributeTimeoutEventControl);
  emberEventControlSetInactive(autoToggleEventControl);
}

static void controlLight(int8u commandId)
{
  EmberStatus status;
  int16u bytes;

  if (commandId == ZCL_ON_COMMAND_ID) {
    emberAfCorePrintln("Turning the light ON...");
  } else if (commandId == ZCL_OFF_COMMAND_ID) {
    emberAfCorePrintln("Turning the light OFF...");
  } else {
    emberAfCorePrintln("Toggling the light...");
  }
  emberAfCorePrintln("");

  emberAfPushNetworkIndex(EMBER_AF_NETWORK_INDEX_PRO);
  bytes = emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND
                                     | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER
                                     | ZCL_DISABLE_DEFAULT_RESPONSE_MASK),
                                    ZCL_ON_OFF_CLUSTER_ID,
                                    commandId,
                                    "");
  if (bytes == 0) {
    status = EMBER_MESSAGE_TOO_LONG;
  } else {
    emberAfGetCommandApsFrame()->options = ((useApsAcks)
                                            ? EMBER_APS_OPTION_RETRY
                                            : EMBER_APS_OPTION_NONE);
    status = emberAfSendCommandUnicast(EMBER_OUTGOING_VIA_BINDING,
                                       theirBindingIndex);
  }
  emberAfPopNetworkIndex();

  if (status != EMBER_SUCCESS) {
    error("Light command send failed", status);
  }
}

static void setReadAttributeTimingMs(void)
{
  int16u timingMs = (int16u)emberUnsignedCommandArgument(0);
  if (emberCurrentCommand->name[5] == 'd') {
    readAttributeEventDelayMs = timingMs;
    emberEventControlSetDelayMS(readAttributeEventControl,
                                readAttributeEventDelayMs);
  } else {
    readAttributeTimeoutMs = timingMs;
    emberEventControlSetDelayMS(readAttributeTimeoutEventControl,
                                readAttributeTimeoutMs);
  }
}

static void printStatus(void)
{
  emberAfCorePrintln("HA state:                  0x%x", haNetworkState);
  emberAfCorePrintln("MENU state:                0x%x", cliMenuState);
  emberAfCorePrint("theirEui64:                ");
  emberAfCoreDebugExec(emberAfPrintBigEndianEui64(theirEui64));
  emberAfCorePrintln("");
  emberAfCorePrintln("theirNodeId:               0x%2x", theirNodeId);
  emberAfCorePrintln("theirEndpoint:             0x%x",  theirEndpoint);
  emberAfCorePrintln("theirBindingIndex:         0x%x",  theirBindingIndex);
  emberAfCorePrintln("theirOnOff:                %p",    (theirOnOff ? "ON" : "OFF"));
  emberAfCorePrintln("myEndpoint:                0x%x",  myEndpoint);
  emberAfCorePrintln("readAttributeEventDelayMs: %dms",  readAttributeEventDelayMs);
  emberAfCorePrintln("readAttributeTimeoutMs:    %dms",  readAttributeTimeoutMs);
}

static void rf4ceStart(void)
{
  emberEventControlSetActive(networkStartEventControl);
}

static void setPollingIntervalMs(void)
{
  emberAfPushNetworkIndex(EMBER_AF_NETWORK_INDEX_PRO);
  if (emberCurrentCommand->name[0] == 'l') {
    int32u longPollIntervalMs = (int32u)emberUnsignedCommandArgument(0);
    emberAfSetLongPollIntervalMsCallback(longPollIntervalMs);
  } else {
    int16u shortPollIntervalMs = (int16u)emberUnsignedCommandArgument(0);
    emberAfSetShortPollIntervalMsCallback(shortPollIntervalMs);
  }
  emberAfPopNetworkIndex();
}

static void apsAcks(void)
{
  useApsAcks = (emberUnsignedCommandArgument(0) > 0);

  emberAfCorePrintln("APS ACKs %s", (useApsAcks) ? "enabled" : "disabled");
}

#ifndef EZSP_HOST
void emRf4ceSetBaseChannel(int8u channel);
extern int8u emRf4ceBaseChannel;
extern EmberPanId emRf4ceLocalPanId;
extern EmberNodeId emRf4ceLocalNodeId;
extern EmberRf4ceNodeCapabilities emRf4ceNodeCapabilities;
static void rf4ceInfo(void)
{
  int8u i;

  emberAfCorePrintln("");
  if (((emRf4ceNodeCapabilities & EMBER_RF4CE_NODE_CAPABILITIES_IS_TARGET_BIT) > 0)) {
    emberAfCorePrintln("Node is a TARGET");
  } else {
    emberAfCorePrintln("Node is a CONTROLLER");
  }
  emberAfCorePrintln("Base channel: %d", emRf4ceBaseChannel);
  emberAfCorePrintln("Pan ID: 0x%2X", emRf4ceLocalPanId);
  emberAfCorePrintln("Node ID: 0x%2X", emRf4ceLocalNodeId);

  emberAfCorePrint("IEEE address: [(<)");
  for(i=0; i<EUI64_SIZE; i++) {
    emberAfCorePrint("%x", emberGetEui64()[i]);
  }
  emberAfCorePrintln("]");
  emberAfCorePrintln("");
}

static void setBaseChannel(void)
{
  emRf4ceSetBaseChannel(emberUnsignedCommandArgument(0));
}

static void setNodeCapabilities(void)
{
  emRf4ceNodeCapabilities = emberUnsignedCommandArgument(0);
}

extern int8u emDefaultMacMaxAckRetries;
static void setMacRetries(void)
{
  emDefaultMacMaxAckRetries = emberUnsignedCommandArgument(0);
}
#endif

static void printHAJoinDialogMenu(void)
{
  emberAfCorePrintln("--------------------------------------------");
  emberAfCorePrintln("RF4CE/HA MAIN dialog:");
  emberAfCorePrintln("--------------------------------------------");
  emberAfCorePrintln("(1)        Join the HA network as sleepy");
#ifndef EZSP_HOST
  emberAfCorePrintln("(2)        Print RF4CE network info");
#endif
  emberAfCorePrintln("(MENU)     Re-open this MENU");
  emberAfCorePrintln("--------------------------------------------");
  emberAfCorePrintln("");
}

static void printHALightDiscoveryDialogMenu(void)
{
  emberAfCorePrintln("-----------------------------------");
  emberAfCorePrintln("RF4CE/HA MAIN dialog:");
  emberAfCorePrintln("-----------------------------------");
  emberAfCorePrintln("(1)        Find & add HA light");
  emberAfCorePrintln("(2)        Leave the HA network");
#ifndef EZSP_HOST
  emberAfCorePrintln("(3)        Print RF4CE network info");
#endif
  emberAfCorePrintln("(MENU)     Re-open this MENU");
  emberAfCorePrintln("-----------------------------------");
  emberAfCorePrintln("");
}

static void printHAControlDialogMenu(void)
{
  emberAfCorePrintln("----------------------------------------------------");
  emberAfCorePrintln("RF4CE/HA MAIN dialog:");
  emberAfCorePrintln("----------------------------------------------------");
  emberAfCorePrintln("(1)        Print most recent light status");
  emberAfCorePrintln("(2)        Turn the light ON");
  emberAfCorePrintln("(3)        Turn the light OFF");
  emberAfCorePrintln("(4)        TOGGLE the light");
  emberAfCorePrintln("(5)        Leave the HA network");
  emberAfCorePrintln("(6)        Set light querying time");
  emberAfCorePrintln("(7)        Enable/disable auto-toggling the light");
#ifndef EZSP_HOST
  emberAfCorePrintln("(8)        Print RF4CE network info");
#endif
  emberAfCorePrintln("(MENU)     Re-open this MENU");
  emberAfCorePrintln("----------------------------------------------------");
  emberAfCorePrintln("");
}

static void printHALightQueryingTimeDialogMenu(void)
{
  emberAfCorePrintln("------------------------------------");
  emberAfCorePrintln("HA light QUERYING TIME dialog:");
  emberAfCorePrintln("------------------------------------");
  emberAfCorePrintln("(1)        200 milliseconds");
  emberAfCorePrintln("(2)        500 milliseconds");
  emberAfCorePrintln("(3)        1 second (default)");
  emberAfCorePrintln("(4)        2 seconds");
  emberAfCorePrintln("(5)        5 seconds");
  emberAfCorePrintln("(6)        10 seconds");
  emberAfCorePrintln("(7)        60 seconds");
  emberAfCorePrintln("(8)        Don't query the light");
  emberAfCorePrintln("(MENU)     Go back to MAIN menu");
  emberAfCorePrintln("------------------------------------");
  emberAfCorePrintln("");
}

static void printHALightAutoTogglingDialogMenu(void)
{
  emberAfCorePrintln("------------------------------------");
  emberAfCorePrintln("HA light AUTO-TOGGLING dialog:");
  emberAfCorePrintln("------------------------------------");
  emberAfCorePrintln("(1)        500 milliseconds");
  emberAfCorePrintln("(2)        1 second");
  emberAfCorePrintln("(3)        2 seconds");
  emberAfCorePrintln("(4)        5 seconds");
  emberAfCorePrintln("(5)        10 seconds");
  emberAfCorePrintln("(6)        Disable auto-toggling");
  emberAfCorePrintln("(MENU)     Go back to MAIN menu");
  emberAfCorePrintln("------------------------------------");
  emberAfCorePrintln("");
}

static void printLightStatus(void)
{
  emberAfCorePrintln("------------------------");
  emberAfCorePrintln("Light status: %p", (theirOnOff ? "ON" : "OFF"));
  emberAfCorePrintln("------------------------");
  emberAfCorePrintln("");
}

static boolean bindingMatches(void)
{
  EmberBindingTableEntry incomingBinding, theirBinding;
  int8u incomingBindingIndex = emberAfGetBindingIndex();
  return (incomingBindingIndex == theirBindingIndex
          || ((emberGetBinding(incomingBindingIndex, &incomingBinding)
               == EMBER_SUCCESS)
              && (emberGetBinding(theirBindingIndex, &theirBinding)
                  == EMBER_SUCCESS)
              && incomingBinding.type == theirBinding.type
              && incomingBinding.local == theirBinding.local
              && incomingBinding.remote == theirBinding.remote
              && (MEMCOMPARE(incomingBinding.identifier,
                             theirBinding.identifier,
                             EUI64_SIZE)
                  == 0)
              && incomingBinding.networkIndex == theirBinding.networkIndex));
}
