// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AFV6_CALLBACKS__
#define __AFV6_CALLBACKS__


#include PLATFORM_HEADER
#include "stack/include/ember-types.h"
#include "hal/hal.h"
#include "app/afv6/include/af.h"
#include "app/util/exi/exi.h"
#include GENERATED_EXI_QNAMES
#include GENERATED_EXI_TYPES
#include "stack/framework/buffer-management.h"
#include "app/afv6/plugin/common/se2-library.h"
#include "app/afv6/plugin/common/common.h"
#include "app/afv6/plugin/common/uri-handler.h"
#include "app/afv6/plugin/exi/exi-utilities.h"
#include "app/afv6/plugin/billing-server/billing-server.h"
#include "app/afv6/plugin/common/scratchpad.h"
#include "stack/include/ember-ip.h"
#include "app/util/ip/print-utilities.h"
#include "app/afv6/plugin/common/list.h"
#include "app/afv6/plugin/common/scheduled-object.h"
#include "app/afv6/plugin/drlc-common/end-device-control.h"
#include "app/afv6/plugin/drlc-common/drlc-common.h"
#include "stack/include/stack-info.h"
#include "app/afv6/plugin/drlc-server/drlc-server.h"
#include "app/afv6/plugin/common/subscription-defines.h"
#include "app/afv6/plugin/messaging-server/messaging-server.h"
#include "app/afv6/plugin/messaging-common/text-message.h"
#include "app/afv6/plugin/metering-common/reading.h"
#include "app/afv6/plugin/metering-server/metering-server.h"
#include "app/afv6/plugin/common/uri-discoverer.h"
#include "app/afv6/plugin/server/server.h"
#include "app/afv6/plugin/netstat-server/counters.h"
#include "app/afv6/plugin/netstat-server/netstat-server.h"
#include "app/afv6/plugin/prepayment-server/prepayment-server.h"
#include "app/afv6/plugin/pricing-server/pricing-server.h"
#include "app/afv6/plugin/server/response.h"
#include "app/afv6/plugin/common/end-device.h"
#include "app/afv6/plugin/software-download-server/software-download-server.h"
#include "stack/include/rest.h"
#include "stack/include/event.h"
#include CONFIGURATION_HEADER
#include "app/afv6/plugin/subscription-server/subscription-server.h"
#include "app/afv6/plugin/time-server/time-server.h"


// Init callback is called initially by the framework.
void emberAfv6Init(void);

int32u emberGetTime(void);

//
// for the /bill URI handler
//
boolean emberAfServerFillCustomerAccountList
  (EmberExiGeneratedCustomerAccountList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// for the /bill/# URI handler
//
boolean
emberAfServerFillCustomerAccount(EmberExiGeneratedCustomerAccount *account,
                                 const UriData *data,
                                 Scratchpad *scratchpad);

//
// for the /bill/#/ca URI handler
//
boolean emberAfServerFillCustomerAgreementList
  (EmberExiGeneratedCustomerAgreementList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// for the /bill/#/ca/# URI handler
//
boolean emberAfServerFillCustomerAgreement
  (EmberExiGeneratedCustomerAgreement *agreement,
   const UriData *data,
   Scratchpad *scratchpad);

// for the /bill/#/ca/#/bp/# URI handler
boolean emberAfServerFillBillingPeriod(EmberExiGeneratedBillingPeriod *period,
                                         const UriData *data,
                                         Scratchpad *scratchpad);

// for the /bill/#/ca/#/bp URI handler
boolean
emberAfServerFillBillingPeriodList(EmberExiGeneratedBillingPeriodList *list,
                                   const UriData *data,
                                   Scratchpad *scratchpad);

// for the /bill/#/ca/#/pro/# URI handler
boolean emberAfServerFillProjectionReading
  (EmberExiGeneratedProjectionReading *reading,
   const UriData *data,
   Scratchpad *scratchpad);

// for the /bill/#/ca/#/pro URI handler
boolean emberAfServerFillProjectionReadingList
  (EmberExiGeneratedProjectionReadingList *list,
   const UriData *data,
   Scratchpad *scratchpad);

// for the /bill/#/ca/#/ver/#/brs/#/br/# URI handler
boolean
emberAfServerFillBillingReading(EmberExiGeneratedBillingReading *reading,
                                const UriData *data,
                                Scratchpad *scratchpad);

// for the /bill/#/ca/#/ver/#/brs/# URI handler
boolean
emberAfServerFillBillingReadingSet(EmberExiGeneratedBillingReadingSet *set,
                                   const UriData *data,
                                   Scratchpad *scratchpad);

// for the /bill/#/ca/#/ver/#/brs URI handler
boolean emberAfServerFillBillingReadingSetList
  (EmberExiGeneratedBillingReadingSetList *list,
   const UriData *data,
   Scratchpad *scratchpad);

// for the /bill/#/ca/#/ver/#/brs/#/br URI handler
boolean
emberAfServerFillBillingReadingList(EmberExiGeneratedBillingReadingList *list,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

// for the /bill/#/ca/#/tar/# URI handler
boolean
emberAfServerFillTargetReading(EmberExiGeneratedTargetReading *reading,
                               const UriData *data,
                               Scratchpad *scratchpad);

// for the /bill/#/ca/#/tar URI handler
boolean
emberAfServerFillTargetReadingList(EmberExiGeneratedTargetReadingList *list,
                                   const UriData *data,
                                   Scratchpad *scratchpad);

// for the /bill/#/ca/#/ver/# URI handler
boolean emberAfServerFillHistoricalReading
  (EmberExiGeneratedHistoricalReading *reading,
   const UriData *data,
   Scratchpad *scratchpad);

// for the /bill/#/ca/#/ver URI handler
boolean emberAfServerFillHistoricalReadingList
  (EmberExiGeneratedHistoricalReadingList *list,
   const UriData *data,
   Scratchpad *scratchpad);

// for the /bill/#/ss URI handler
boolean
emberAfServerFillServiceSupplier(EmberExiGeneratedServiceSupplier *supplier,
                                 const UriData *data,
                                 Scratchpad *scratchpad);

// Init callback is called when the application starts
void emberAfSe2AppInit(void);

// Tick callback is called upon each tick
void emberAfSe2AppTick(void);

void emberJoinNetworkReturn(EmberStatus status);

void emberAfServerDiscoveredHandler(Ipv6Address *serverAddress);

void emberInitReturn(EmberStatus status);

void emberFormNetworkReturn(EmberStatus status);

void emberResumeNetworkReturn(EmberStatus status);

void emberSetTxPowerModeReturn(EmberStatus status);

void emberGetRipEntryReturn(int8u index, const EmberRipEntry *entry);

void emberGetCounterReturn(EmberCounterType type, int16u value);

//
// object filler for the /dr/#/edc URI handler
//
boolean emberAfServerFillEndDeviceControlList
  (EmberExiGeneratedEndDeviceControlList *list,
   const UriData *data,
   Scratchpad *scratchpad);

boolean
emberAfServerFillEndDeviceControl(EmberExiGeneratedEndDeviceControl *exiControl,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// the /dr/# URI handler
//
boolean emberAfServerFillDemandResponseProgram
  (EmberExiGeneratedDemandResponseProgram *program,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a demand response program list
// for the /dr URI handler
//
boolean emberAfServerFillDemandResponseProgramList
  (EmberExiGeneratedDemandResponseProgramList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// object creator for the /msg/# URI handler
//
boolean
emberAfServerFillMessagingProgram(EmberExiGeneratedMessagingProgram *program,
                                  UriData *data,
                                  Scratchpad *scratchpad);

boolean emberAfServerFillMessagingProgramList
  (EmberExiGeneratedMessagingProgramList *list,
   UriData *data,
   Scratchpad *scratchpad);

boolean emberAfServerFillPriorReading(EmberExiGeneratedReading *reading,
                                      const UriData *data,
                                      Scratchpad *scratchpad);

//
// create a ReadingList
// for the /upt/#/mr/#/rs/#/r URI handler
//
boolean emberAfServerFillPriorReadingList
  (EmberExiGeneratedReadingList *readingList,
   const UriData *data,
   Scratchpad *scratchpad);

boolean emberAfServerFillReadingSet(EmberExiGeneratedReadingSet *readingSet,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// create a ReadingSetList
// for the /upt/#/mr/#/rs URI handler
//
boolean
emberAfServerFillReadingSetList(EmberExiGeneratedReadingSetList *readingSetList,
                                const UriData *data,
                                Scratchpad *scratchpad);

//
// fill a reading type
//
boolean emberAfServerFillReadingType(EmberExiGeneratedReadingType *type,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// create an instantaneous Reading
// for the /upt/#/mr/#/r URI handler
//
boolean emberAfServerFillReading(EmberExiGeneratedReading *reading,
                                 const UriData *data,
                                 Scratchpad *scratchpad);

boolean emberAfServerFillMeterReading(EmberExiGeneratedMeterReading *reading,
                                      const UriData *data,
                                      Scratchpad *scratchpad);

//
// create a MeterReadingList
// for the /upt/#/mr URI handler
//
boolean
emberAfServerFillMeterReadingList(EmberExiGeneratedMeterReadingList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// create a UsagePoint
// for the /upt/# URI handler
//
boolean emberAfServerFillUsagePoint(EmberExiGeneratedUsagePoint *usagePoint,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// create a UsagePointList
// for the /upt URI handler
//
boolean
emberAfServerFillUsagePointList(EmberExiGeneratedUsagePointList *usagePointList,
                                const UriData *data,
                                Scratchpad *scratchpad);

//
// for the /ns URI handler
//
boolean emberAfServerFillIpInterfaceList(EmberExiGeneratedIPInterfaceList *list,
                                         const UriData *data,
                                         Scratchpad *scratchpad);

//
// for the /ns/# URI handler
//
boolean emberAfServerFillIpInterface(EmberExiGeneratedIPInterface *interface,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// for the /ns/#/addr URI handler
//
boolean emberAfServerFillIpAddrList(EmberExiGeneratedIPAddrList *list,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// for the /ns/#/addr/# URI handler
//
boolean emberAfServerFillIpAddr(EmberExiGeneratedIPAddr *address,
                                const UriData *data,
                                Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl URI handler
//
boolean emberAfServerFillRplInstanceList(EmberExiGeneratedRPLInstanceList *list,
                                         const UriData *data,
                                         Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl/# URI handler
//
boolean emberAfServerFillRplInstance(EmberExiGeneratedRPLInstance *instance,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl/#/srt URI handler
//
boolean
emberAfServerFillRplSourceRoutesList(EmberExiGeneratedRPLSourceRoutesList *list,
                                     const UriData *data,
                                     Scratchpad *scratchpad);

//
// for the /ns/#/addr/#/rpl/#/srt/# URI handler
//
boolean
emberAfServerFillRplSourceRoutes(EmberExiGeneratedRPLSourceRoutes *routes,
                                 const UriData *data,
                                 Scratchpad *scratchpad);

//
// for the /ns/#/ll URI handler
//
boolean
emberAfServerFillLinkLayerInterfaceList(EmberExiGeneratedLLInterfaceList *list,
                                        const UriData *data,
                                        Scratchpad *scratchpad);

//
// for the /ns/#/ll/# URI handler
//
boolean
emberAfServerFillLinkLayerInterface(EmberExiGeneratedLLInterface *interface,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// for the /ns/#/ll/#/nbh URI handler
//
boolean emberAfServerFillNeighborList(EmberExiGeneratedNeighborList *list,
                                      const UriData *data,
                                      Scratchpad *scratchpad);

//
// for the /ns/#/ll/#/nbh/# URI handler
//
boolean emberAfServerFillNeighbor(EmberExiGeneratedNeighbor *neighbor,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// create an operation status
// for the /ppy/#/os URI handler
//
boolean emberAfServerFillPrepayOperationStatus
  (EmberExiGeneratedPrepayOperationStatus *status,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create an interruption override
// for the /ppy/#/si/# URI handler
//
boolean emberAfServerFillSupplyInterruptionOverride
  (EmberExiGeneratedSupplyInterruptionOverride *override,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create an interruption override list
// for the /ppy/#/si URI handler
//
boolean emberAfServerFillSupplyInterruptionOverrideList
  (EmberExiGeneratedSupplyInterruptionOverrideList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a credit register
// for the /ppy/#/cr URI Handler
//
boolean emberAfServerFillCreditRegister
  (EmberExiGeneratedCreditRegister *creditRegister,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a credit register list
// for the /ppy/#/cr URI Handler
//
boolean emberAfServerFillCreditRegisterList
  (EmberExiGeneratedCreditRegisterList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create an account balance
// for the /ppy/#/ab URI handler
//
boolean emberAfServerFillAccountBalance
  (EmberExiGeneratedAccountBalance *balance,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a prepayment
// for the /ppy/# URI handler
//
boolean emberAfServerFillPrepayment(EmberExiGeneratedPrepayment *prepayment,
                                    const UriData *data,
                                    Scratchpad *scratchpad);

//
// create a prepayment list
// for the /ppy URI handler
//
boolean emberAfServerFillPrepaymentList(EmberExiGeneratedPrepaymentList *list,
                                        const UriData *data,
                                        Scratchpad *scratchpad);

//
// create a Tariff Profile List
// for the /tp URI handler
//
boolean emberAfServerFillTariffProfileList
  (EmberExiGeneratedTariffProfileList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a Tariff Profile
// for the /tp/# URI handler
//
boolean emberAfServerFillTariffProfile
  (EmberExiGeneratedTariffProfile *profile,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a Rate Component List
// for the /tp/#/rc URI handler
//
boolean emberAfServerFillRateComponentList
  (EmberExiGeneratedRateComponentList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a Rate Component
// for the /tp/#/rc/# URI handler
//
boolean emberAfServerFillRateComponent
  (EmberExiGeneratedRateComponent *component,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a Time Tariff Interval List
// for the /tp/#/rc/#/tti URI handler
//
boolean  emberAfServerFillTimeTariffIntervalList
  (EmberExiGeneratedTimeTariffIntervalList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a Time Tariff Interval
// for the /tp/#/rc/#/tti/# URI handler
//
boolean emberAfServerFillTimeTariffInterval
  (EmberExiGeneratedTimeTariffInterval *interval,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a Consumption Tariff Interval List
// for the /tp/#/rc/#/tti/#/cti URI Handler
//
boolean emberAfServerFillConsumptionTariffIntervalList
  (EmberExiGeneratedConsumptionTariffIntervalList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// create a Consumption Tariff Interval
// for the /tp/#/rc/#/tti/#/cti/# URI handler
//
boolean emberAfServerFillConsumptionTariffInterval
  (EmberExiGeneratedConsumptionTariffInterval *interval,
   const UriData *data,
   Scratchpad *scratchpad);

//
// object filler for the /edev/# URI handler
//
boolean emberAfServerFillEndDevice
  (EmberExiGeneratedEndDevice *exiEndDevice,
   const UriData *data,
   Scratchpad *scratchpad);

//
// object filler for the /edev URI handler
//
boolean emberAfServerFillEndDeviceList
  (EmberExiGeneratedEndDeviceList *list,
   const UriData *data,
   Scratchpad *scratchpad);

//
// callback for a client POST to /rsp/#/dr
//
void emberAfServerResponseHandler(Response *response);

//
// /shinyNewFirmware URI handler
//
void emberAfServerShinyNewFirmwareUriHandler(const UriData *data);

//
// create a FileList
// for the /file URI handler
//
boolean emberAfServerFillFileList(EmberExiGeneratedFileList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// create a File
// for the /file/# URI handler
//
boolean emberAfServerFillFile(EmberExiGeneratedFile *file,
                              const UriData *data,
                              Scratchpad *scratchpad);

//
// create a subscription for the /edev/#/sub/# URI handler
//
boolean
emberAfServerFillSubscription(EmberExiGeneratedSubscription *subscription,
                              const UriData *data,
                              Scratchpad *scratchpad);

//
// create a subscription list for the /edev/#/sub URI handler
//
boolean
emberAfServerFillSubscriptionList(EmberExiGeneratedSubscriptionList *list,
                                  const UriData *data,
                                  Scratchpad *scratchpad);

//
// Create a Time object
// for the /tm URI handler
//
boolean emberAfServerFillTime(EmberExiGeneratedTime *timeStruct,
                              const UriData *data,
                              Scratchpad *scratchpad);

#endif // __AFV6_CALLBACKS__
