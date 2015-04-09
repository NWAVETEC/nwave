// This file is generated. Please do not edit manually.
// 
//

// This file contains generated API for the structs encoder/decoder.

#include PLATFORM_HEADER
#include "app/util/exi/exi.h"
#include "app/util/exi/exi-internal.h"
#include "stack/core/log.h"
#include "afv6-exi-types.h"
#include "afv6-exi-qname.h"
#include "afv6-exi-grammar.h"
const EmberExiStructSpec emEncoderEvents[] = {
  0,        // 0 index is used a null
#define EMBER_EXI_STRUCT EmberExiGeneratedAbstractDevice // index 1
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AbstractDevice, 2, 0, 2863, 66, 0),
    EMBER_EXI_SUBSTRUCT_OPTION(ConfigurationLink, 0, 1, ConfigurationLink, EmberExiGeneratedConfigurationLink, emberExiConfigurationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERListLink, 0, 1, DERListLink, EmberExiGeneratedDERListLink, emberExiDERListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceInformationLink, 0, 1, DeviceInformationLink, EmberExiGeneratedDeviceInformationLink, emberExiDeviceInformationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceStatusLink, 0, 1, DeviceStatusLink, EmberExiGeneratedDeviceStatusLink, emberExiDeviceStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FileStatusLink, 0, 1, FileStatusLink, EmberExiGeneratedFileStatusLink, emberExiFileStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(IPInterfaceListLink, 0, 1, IPInterfaceListLink, EmberExiGeneratedIPInterfaceListLink, emberExiIPInterfaceListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(LoadShedAvailabilityLink, 0, 1, LoadShedAvailabilityLink, EmberExiGeneratedLoadShedAvailabilityLink, emberExiLoadShedAvailabilityLinkStructDataIndex),
    EMBER_EXI_CH(loadShedDeviceCategory, BINARY, 1, loadShedDeviceCategory_option),
    EMBER_EXI_SUBSTRUCT_OPTION(LogEventListLink, 0, 1, LogEventListLink, EmberExiGeneratedLogEventListLink, emberExiLogEventListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerStatusLink, 0, 1, PowerStatusLink, EmberExiGeneratedPowerStatusLink, emberExiPowerStatusLinkStructDataIndex),
    EMBER_EXI_CH(sFDI, UNSIGNED_INTEGER, 255, sFDI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAccountBalance // index 67
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AccountBalance, 1, 0, 2695, 24, 1),
    EMBER_EXI_SUBSTRUCT(availableCredit, 1, 0, availableCredit, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_CH(creditStatus, UNSIGNED_INTEGER, 0, creditStatus_option),
    EMBER_EXI_SUBSTRUCT_OPTION(emergencyCredit, 0, 1, emergencyCredit, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_CH(emergencyCreditStatus, UNSIGNED_INTEGER, 1, emergencyCreditStatus_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAccountBalanceLink // index 91
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AccountBalanceLink, 1, 0, 1882, 6, 2),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAccountingUnit // index 97
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AccountingUnit, 0, 0, 65535, 21, 3),
    EMBER_EXI_SUBSTRUCT_OPTION(energyUnit, 0, 1, energyUnit, EmberExiGeneratedRealEnergy, emberExiRealEnergyStructDataIndex),
    EMBER_EXI_CH(monetaryUnit, UNSIGNED_INTEGER, 255, monetaryUnit),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveBillingPeriodListLink // index 118
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveBillingPeriodListLink, 2, 0, 1906, 6, 4),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveCreditRegisterListLink // index 124
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveCreditRegisterListLink, 2, 0, 1906, 6, 5),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveDERControlListLink // index 130
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveDERControlListLink, 2, 0, 1906, 6, 6),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveEndDeviceControlListLink // index 136
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveEndDeviceControlListLink, 2, 0, 1906, 6, 7),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActivePower // index 142
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActivePower, 0, 0, 65535, 12, 8),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveProjectionReadingListLink // index 154
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveProjectionReadingListLink, 2, 0, 1906, 6, 9),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveSupplyInterruptionOverrideListLink // index 160
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveSupplyInterruptionOverrideListLink, 2, 0, 1906, 6, 10),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTargetReadingListLink // index 166
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTargetReadingListLink, 2, 0, 1906, 6, 11),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTextMessageListLink // index 172
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTextMessageListLink, 2, 0, 1906, 6, 12),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTimeTariffIntervalListLink // index 178
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTimeTariffIntervalListLink, 2, 0, 1906, 6, 13),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedApplianceLoadReduction // index 184
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ApplianceLoadReduction, 0, 0, 65535, 9, 14),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAppliedTargetReduction // index 193
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AppliedTargetReduction, 0, 0, 65535, 12, 16),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAssociatedDERProgramListLink // index 205
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AssociatedDERProgramListLink, 2, 0, 1906, 6, 17),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAssociatedUsagePointLink // index 211
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AssociatedUsagePointLink, 1, 0, 1882, 6, 18),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingMeterReadingBase // index 217
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingMeterReadingBase, 1, 3, 2065, 18, 19),
    EMBER_EXI_SUBSTRUCT_OPTION(BillingReadingSetListLink, 0, 1, BillingReadingSetListLink, EmberExiGeneratedBillingReadingSetListLink, emberExiBillingReadingSetListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingTypeLink, 0, 1, ReadingTypeLink, EmberExiGeneratedReadingTypeLink, emberExiReadingTypeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingPeriod // index 235
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingPeriod, 1, 0, 2695, 21, 20),
    EMBER_EXI_CH(billLastPeriod, INTEGER, 0, billLastPeriod_option),
    EMBER_EXI_CH(billToDate, INTEGER, 1, billToDate_option),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
    EMBER_EXI_CH(statusTimeStamp, INTEGER, 2, statusTimeStamp_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingPeriodList // index 256
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingPeriodList, 4, 0, 2845, 12, 21),
    EMBER_EXI_SUBSTRUCT_ARRAY(BillingPeriod, 0, 255, BillingPeriod, EmberExiGeneratedBillingPeriod, emberExiBillingPeriodStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingPeriodListLink // index 268
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingPeriodListLink, 2, 0, 1906, 6, 22),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingReading // index 274
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingReading, 1, 5, 2581, 12, 23),
    EMBER_EXI_SUBSTRUCT_ARRAY(Charge, 0, 255, Charge, EmberExiGeneratedCharge, emberExiChargeStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingReadingList // index 286
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingReadingList, 3, 0, 1891, 12, 24),
    EMBER_EXI_SUBSTRUCT_ARRAY(BillingReading, 0, 255, BillingReading, EmberExiGeneratedBillingReading, emberExiBillingReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingReadingListLink // index 298
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingReadingListLink, 2, 0, 1906, 6, 25),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingReadingSet // index 304
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingReadingSet, 1, 4, 2641, 12, 26),
    EMBER_EXI_SUBSTRUCT_OPTION(BillingReadingListLink, 0, 1, BillingReadingListLink, EmberExiGeneratedBillingReadingListLink, emberExiBillingReadingListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingReadingSetList // index 316
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingReadingSetList, 4, 0, 2845, 12, 27),
    EMBER_EXI_SUBSTRUCT_ARRAY(BillingReadingSet, 0, 255, BillingReadingSet, EmberExiGeneratedBillingReadingSet, emberExiBillingReadingSetStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingReadingSetListLink // index 328
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingReadingSetListLink, 2, 0, 1906, 6, 28),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCharge // index 334
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Charge, 0, 0, 65535, 15, 29),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(kind, UNSIGNED_INTEGER, 0, kind_option),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCondition // index 349
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Condition, 0, 0, 65535, 15, 31),
    EMBER_EXI_CH(attributeIdentifier, UNSIGNED_INTEGER, 255, attributeIdentifier),
    EMBER_EXI_CH(lowerThreshold, INTEGER, 255, lowerThreshold),
    EMBER_EXI_CH(upperThreshold, INTEGER, 255, upperThreshold),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfiguration // index 364
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Configuration, 2, 0, 2863, 30, 32),
    EMBER_EXI_CH_STRING(currentLocale, STRING, 255, currentLocale),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerConfiguration, 0, 1, PowerConfiguration, EmberExiGeneratedPowerConfiguration, emberExiPowerConfigurationStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PriceResponseCfgListLink, 0, 1, PriceResponseCfgListLink, EmberExiGeneratedPriceResponseCfgListLink, emberExiPriceResponseCfgListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeConfiguration, 0, 1, TimeConfiguration, EmberExiGeneratedTimeConfiguration, emberExiTimeConfigurationStructDataIndex),
    EMBER_EXI_CH_STRING(userDeviceName, STRING, 255, userDeviceName),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfigurationLink // index 394
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConfigurationLink, 1, 0, 1882, 6, 33),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConsumptionTariffInterval // index 400
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConsumptionTariffInterval, 1, 0, 2695, 21, 35),
    EMBER_EXI_CH(consumptionBlock, UNSIGNED_INTEGER, 255, consumptionBlock),
    EMBER_EXI_SUBSTRUCT_ARRAY(EnvironmentalCost, 0, 255, EnvironmentalCost, EmberExiGeneratedEnvironmentalCost, emberExiEnvironmentalCostStructDataIndex),
    EMBER_EXI_CH(price, INTEGER, 0, price_option),
    EMBER_EXI_CH(startValue, UNSIGNED_INTEGER, 255, startValue),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConsumptionTariffIntervalList // index 421
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConsumptionTariffIntervalList, 3, 0, 1891, 12, 36),
    EMBER_EXI_SUBSTRUCT_ARRAY(ConsumptionTariffInterval, 1, 255, ConsumptionTariffInterval, EmberExiGeneratedConsumptionTariffInterval, emberExiConsumptionTariffIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConsumptionTariffIntervalListLink // index 433
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConsumptionTariffIntervalListLink, 2, 0, 1906, 6, 37),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditRegister // index 439
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditRegister, 1, 3, 1789, 21, 39),
    EMBER_EXI_SUBSTRUCT(creditAmount, 1, 0, creditAmount, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_CH(creditType, UNSIGNED_INTEGER, 1, creditType_option),
    EMBER_EXI_CH(effectiveTime, INTEGER, 255, effectiveTime),
    EMBER_EXI_CH_STRING(token, STRING, 255, token),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditRegisterList // index 460
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditRegisterList, 3, 0, 1891, 12, 40),
    EMBER_EXI_SUBSTRUCT_ARRAY(CreditRegister, 0, 255, CreditRegister, EmberExiGeneratedCreditRegister, emberExiCreditRegisterStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditRegisterListLink // index 472
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditRegisterListLink, 2, 0, 1906, 6, 41),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditTypeChange // index 478
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditTypeChange, 0, 0, 65535, 12, 43),
    EMBER_EXI_CH(newType, UNSIGNED_INTEGER, 255, newType),
    EMBER_EXI_CH(startTime, INTEGER, 255, startTime),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCurrentDERProgramLink // index 490
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CurrentDERProgramLink, 1, 0, 1882, 6, 46),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCurveData // index 496
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CurveData, 0, 0, 65535, 15, 47),
    EMBER_EXI_CH(excitation, INTEGER, 0, excitation_option),
    EMBER_EXI_CH(xvalue, INTEGER, 255, xvalue),
    EMBER_EXI_CH(yvalue, INTEGER, 255, yvalue),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCurvePairType // index 511
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CurvePairType, 0, 0, 65535, 18, 48),
    EMBER_EXI_SUBSTRUCT(lowerLimit, 1, 0, lowerLimit, EmberExiGeneratedDERCurveLink, emberExiDERCurveLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(upperLimit, 1, 0, upperLimit, EmberExiGeneratedDERCurveLink, emberExiDERCurveLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAccount // index 529
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAccount, 1, 3, 1789, 30, 49),
    EMBER_EXI_CH(currency, UNSIGNED_INTEGER, 255, currency),
    EMBER_EXI_CH_STRING(customerAccount, STRING, 0, customerAccount_option),
    EMBER_EXI_SUBSTRUCT_OPTION(CustomerAgreementListLink, 0, 1, CustomerAgreementListLink, EmberExiGeneratedCustomerAgreementListLink, emberExiCustomerAgreementListLinkStructDataIndex),
    EMBER_EXI_CH_STRING(customerName, STRING, 0, customerName_option),
    EMBER_EXI_CH(pricePowerOfTenMultiplier, INTEGER, 255, pricePowerOfTenMultiplier),
    EMBER_EXI_SUBSTRUCT_OPTION(ServiceSupplierLink, 0, 1, ServiceSupplierLink, EmberExiGeneratedServiceSupplierLink, emberExiServiceSupplierLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAccountList // index 559
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAccountList, 4, 0, 2845, 12, 50),
    EMBER_EXI_SUBSTRUCT_ARRAY(CustomerAccount, 0, 255, CustomerAccount, EmberExiGeneratedCustomerAccount, emberExiCustomerAccountStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAccountListLink // index 571
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAccountListLink, 2, 0, 1906, 6, 51),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAgreement // index 577
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAgreement, 1, 3, 1789, 72, 52),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveBillingPeriodListLink, 0, 1, ActiveBillingPeriodListLink, EmberExiGeneratedActiveBillingPeriodListLink, emberExiActiveBillingPeriodListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveProjectionReadingListLink, 0, 1, ActiveProjectionReadingListLink, EmberExiGeneratedActiveProjectionReadingListLink, emberExiActiveProjectionReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveTargetReadingListLink, 0, 1, ActiveTargetReadingListLink, EmberExiGeneratedActiveTargetReadingListLink, emberExiActiveTargetReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(BillingPeriodListLink, 0, 1, BillingPeriodListLink, EmberExiGeneratedBillingPeriodListLink, emberExiBillingPeriodListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(HistoricalReadingListLink, 0, 1, HistoricalReadingListLink, EmberExiGeneratedHistoricalReadingListLink, emberExiHistoricalReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PrepaymentLink, 0, 1, PrepaymentLink, EmberExiGeneratedPrepaymentLink, emberExiPrepaymentLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ProjectionReadingListLink, 0, 1, ProjectionReadingListLink, EmberExiGeneratedProjectionReadingListLink, emberExiProjectionReadingListLinkStructDataIndex),
    EMBER_EXI_CH_STRING(serviceAccount, STRING, 0, serviceAccount_option),
    EMBER_EXI_CH_STRING(serviceLocation, STRING, 0, serviceLocation_option),
    EMBER_EXI_SUBSTRUCT_OPTION(TargetReadingListLink, 0, 1, TargetReadingListLink, EmberExiGeneratedTargetReadingListLink, emberExiTargetReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TariffProfileLink, 0, 1, TariffProfileLink, EmberExiGeneratedTariffProfileLink, emberExiTariffProfileLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(UsagePointLink, 0, 1, UsagePointLink, EmberExiGeneratedUsagePointLink, emberExiUsagePointLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAgreementList // index 649
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAgreementList, 4, 0, 2845, 12, 53),
    EMBER_EXI_SUBSTRUCT_ARRAY(CustomerAgreement, 0, 255, CustomerAgreement, EmberExiGeneratedCustomerAgreement, emberExiCustomerAgreementStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAgreementListLink // index 661
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAgreementListLink, 2, 0, 1906, 6, 54),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDER // index 667
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DER, 2, 0, 2863, 48, 55),
    EMBER_EXI_SUBSTRUCT_OPTION(AssociatedDERProgramListLink, 0, 1, AssociatedDERProgramListLink, EmberExiGeneratedAssociatedDERProgramListLink, emberExiAssociatedDERProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(AssociatedUsagePointLink, 0, 1, AssociatedUsagePointLink, EmberExiGeneratedAssociatedUsagePointLink, emberExiAssociatedUsagePointLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(CurrentDERProgramLink, 0, 1, CurrentDERProgramLink, EmberExiGeneratedCurrentDERProgramLink, emberExiCurrentDERProgramLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERAvailabilityLink, 0, 1, DERAvailabilityLink, EmberExiGeneratedDERAvailabilityLink, emberExiDERAvailabilityLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERCapabilityLink, 0, 1, DERCapabilityLink, EmberExiGeneratedDERCapabilityLink, emberExiDERCapabilityLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERSettingsLink, 0, 1, DERSettingsLink, EmberExiGeneratedDERSettingsLink, emberExiDERSettingsLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERStatusLink, 0, 1, DERStatusLink, EmberExiGeneratedDERStatusLink, emberExiDERStatusLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERAvailabilityLink // index 715
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERAvailabilityLink, 1, 0, 1882, 6, 56),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERCapabilityLink // index 721
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERCapabilityLink, 1, 0, 1882, 6, 57),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERControl // index 727
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERControl, 4, 8, 2497, 12, 58),
    EMBER_EXI_SUBSTRUCT(DERControlBase, 1, 0, DERControlBase, EmberExiGeneratedDERControlBase, emberExiDERControlBaseStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERControlBase // index 739
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERControlBase, 0, 0, 65535, 63, 59),
    EMBER_EXI_CH(opModFixedFlow, INTEGER, 0, opModFixedFlow_option),
    EMBER_EXI_SUBSTRUCT_OPTION(opModFixedPF, 0, 1, opModFixedPF, EmberExiGeneratedFixedPowerFactor, emberExiFixedPowerFactorStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(opModFixedVAr, 0, 1, opModFixedVAr, EmberExiGeneratedFixedVAr, emberExiFixedVArStructDataIndex),
    EMBER_EXI_CH(opModFixedW, UNSIGNED_INTEGER, 1, opModFixedW_option),
    EMBER_EXI_SUBSTRUCT_OPTION(opModFreqWatt, 0, 1, opModFreqWatt, EmberExiGeneratedDERCurveLink, emberExiDERCurveLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(opModHVRT, 0, 1, opModHVRT, EmberExiGeneratedCurvePairType, emberExiCurvePairTypeStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(opModLVRT, 0, 1, opModLVRT, EmberExiGeneratedCurvePairType, emberExiCurvePairTypeStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(opModVoltVAr, 0, 1, opModVoltVAr, EmberExiGeneratedDERCurveLink, emberExiDERCurveLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(opModVoltWatt, 0, 1, opModVoltWatt, EmberExiGeneratedDERCurveLink, emberExiDERCurveLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(opModWattPF, 0, 1, opModWattPF, EmberExiGeneratedDERCurveLink, emberExiDERCurveLinkStructDataIndex),
    EMBER_EXI_CH(rampTms, UNSIGNED_INTEGER, 2, rampTms_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERControlList // index 802
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERControlList, 4, 0, 2845, 12, 60),
    EMBER_EXI_SUBSTRUCT_ARRAY(DERControl, 0, 255, DERControl, EmberExiGeneratedDERControl, emberExiDERControlStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERControlListLink // index 814
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERControlListLink, 2, 0, 1906, 6, 61),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERCurve // index 820
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERCurve, 1, 3, 1789, 36, 62),
    EMBER_EXI_CH(creationTime, INTEGER, 255, creationTime),
    EMBER_EXI_SUBSTRUCT_ARRAY(CurveData, 1, 9, CurveData, EmberExiGeneratedCurveData, emberExiCurveDataStructDataIndex),
    EMBER_EXI_CH(curveType, UNSIGNED_INTEGER, 255, curveType),
    EMBER_EXI_CH(rampDecTms, UNSIGNED_INTEGER, 1, rampDecTms_option),
    EMBER_EXI_CH(rampIncTms, UNSIGNED_INTEGER, 2, rampIncTms_option),
    EMBER_EXI_CH(rampPT1Tms, UNSIGNED_INTEGER, 3, rampPT1Tms_option),
    EMBER_EXI_CH(xMultiplier, INTEGER, 255, xMultiplier),
    EMBER_EXI_CH(yMultiplier, INTEGER, 255, yMultiplier),
    EMBER_EXI_CH(yRefType, UNSIGNED_INTEGER, 255, yRefType),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERCurveLink // index 856
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERCurveLink, 1, 0, 1882, 6, 63),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERCurveList // index 862
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERCurveList, 3, 0, 1891, 12, 64),
    EMBER_EXI_SUBSTRUCT_ARRAY(DERCurve, 0, 255, DERCurve, EmberExiGeneratedDERCurve, emberExiDERCurveStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERCurveListLink // index 874
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERCurveListLink, 2, 0, 1906, 6, 65),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERList // index 880
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERList, 3, 0, 1891, 12, 67),
    EMBER_EXI_SUBSTRUCT_ARRAY(DER, 0, 255, DER, EmberExiGeneratedDER, emberExiDERStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERListLink // index 892
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERListLink, 2, 0, 1906, 6, 68),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgram // index 898
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgram, 1, 3, 1789, 33, 69),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveDERControlListLink, 0, 1, ActiveDERControlListLink, EmberExiGeneratedActiveDERControlListLink, emberExiActiveDERControlListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DefaultDERControlLink, 0, 1, DefaultDERControlLink, EmberExiGeneratedDefaultDERControlLink, emberExiDefaultDERControlLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERControlListLink, 0, 1, DERControlListLink, EmberExiGeneratedDERControlListLink, emberExiDERControlListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERCurveListLink, 0, 1, DERCurveListLink, EmberExiGeneratedDERCurveListLink, emberExiDERCurveListLinkStructDataIndex),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgramList // index 931
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgramList, 3, 0, 1891, 12, 70),
    EMBER_EXI_SUBSTRUCT_ARRAY(DERProgram, 0, 255, DERProgram, EmberExiGeneratedDERProgram, emberExiDERProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgramListLink // index 943
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgramListLink, 2, 0, 1906, 6, 71),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERSettingsLink // index 949
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERSettingsLink, 1, 0, 1882, 6, 72),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERStatusLink // index 955
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERStatusLink, 1, 0, 1882, 6, 73),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDRLCCapabilities // index 961
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DRLCCapabilities, 0, 0, 65535, 21, 75),
    EMBER_EXI_SUBSTRUCT(averageEnergy, 1, 0, averageEnergy, EmberExiGeneratedRealEnergy, emberExiRealEnergyStructDataIndex),
    EMBER_EXI_SUBSTRUCT(maxDemand, 1, 0, maxDemand, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_CH(optionsImplemented, BINARY, 255, optionsImplemented),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDateTimeInterval // index 982
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DateTimeInterval, 0, 0, 65535, 12, 76),
    EMBER_EXI_CH(duration, INTEGER, 255, duration),
    EMBER_EXI_CH(start, INTEGER, 255, start),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDefaultDERControlLink // index 994
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DefaultDERControlLink, 1, 0, 1882, 6, 77),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgram // index 1000
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgram, 1, 3, 1789, 30, 78),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveEndDeviceControlListLink, 0, 1, ActiveEndDeviceControlListLink, EmberExiGeneratedActiveEndDeviceControlListLink, emberExiActiveEndDeviceControlListLinkStructDataIndex),
    EMBER_EXI_CH(availabilityUpdatePercentChangeThreshold, UNSIGNED_INTEGER, 1, availabilityUpdatePercentChangeThreshold_option),
    EMBER_EXI_SUBSTRUCT_OPTION(availabilityUpdatePowerChangeThreshold, 0, 1, availabilityUpdatePowerChangeThreshold, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceControlListLink, 0, 1, EndDeviceControlListLink, EmberExiGeneratedEndDeviceControlListLink, emberExiEndDeviceControlListLinkStructDataIndex),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramLink // index 1030
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramLink, 1, 0, 1882, 6, 79),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramList // index 1036
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramList, 4, 0, 2845, 12, 80),
    EMBER_EXI_SUBSTRUCT_ARRAY(DemandResponseProgram, 0, 255, DemandResponseProgram, EmberExiGeneratedDemandResponseProgram, emberExiDemandResponseProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramListLink // index 1048
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramListLink, 2, 0, 1906, 6, 81),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceCapability // index 1054
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceCapability, 1, 10, 1522, 24, 82),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceListLink, 0, 1, EndDeviceListLink, EmberExiGeneratedEndDeviceListLink, emberExiEndDeviceListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MirrorUsagePointListLink, 0, 1, MirrorUsagePointListLink, EmberExiGeneratedMirrorUsagePointListLink, emberExiMirrorUsagePointListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SelfDeviceLink, 0, 1, SelfDeviceLink, EmberExiGeneratedSelfDeviceLink, emberExiSelfDeviceLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformation // index 1078
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformation, 1, 0, 2695, 54, 84),
    EMBER_EXI_SUBSTRUCT_OPTION(DRLCCapabilities, 0, 1, DRLCCapabilities, EmberExiGeneratedDRLCCapabilities, emberExiDRLCCapabilitiesStructDataIndex),
    EMBER_EXI_CH(functionsImplemented, BINARY, 0, functionsImplemented_option),
    EMBER_EXI_CH(lFDI, BINARY, 255, lFDI),
    EMBER_EXI_CH(mfDate, INTEGER, 255, mfDate),
    EMBER_EXI_CH_STRING(mfHwVer, STRING, 255, mfHwVer),
    EMBER_EXI_CH(mfID, INTEGER, 255, mfID),
    EMBER_EXI_CH_STRING(mfInfo, STRING, 0, mfInfo_option),
    EMBER_EXI_CH_STRING(mfModel, STRING, 255, mfModel),
    EMBER_EXI_CH_STRING(mfSerNum, STRING, 255, mfSerNum),
    EMBER_EXI_CH(primaryPower, UNSIGNED_INTEGER, 255, primaryPower),
    EMBER_EXI_CH(secondaryPower, UNSIGNED_INTEGER, 255, secondaryPower),
    EMBER_EXI_SUBSTRUCT_OPTION(SupportedLocaleListLink, 0, 1, SupportedLocaleListLink, EmberExiGeneratedSupportedLocaleListLink, emberExiSupportedLocaleListLinkStructDataIndex),
    EMBER_EXI_CH(swActTime, INTEGER, 255, swActTime),
    EMBER_EXI_CH_STRING(swVer, STRING, 255, swVer),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformationLink // index 1132
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformationLink, 1, 0, 1882, 6, 85),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatus // index 1138
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatus, 1, 0, 2695, 30, 86),
    EMBER_EXI_CH(changedTime, INTEGER, 255, changedTime),
    EMBER_EXI_CH(onCount, UNSIGNED_INTEGER, 0, onCount_option),
    EMBER_EXI_CH(opState, UNSIGNED_INTEGER, 1, opState_option),
    EMBER_EXI_CH(opTime, INTEGER, 2, opTime_option),
    EMBER_EXI_SUBSTRUCT_ARRAY(Temperature, 0, 255, Temperature, EmberExiGeneratedTemperature, emberExiTemperatureStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeLink, 0, 1, TimeLink, EmberExiGeneratedTimeLink, emberExiTimeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatusLink // index 1168
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatusLink, 1, 0, 1882, 6, 87),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDrResponse // index 1174
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DrResponse, 1, 4, 2746, 39, 88),
    EMBER_EXI_SUBSTRUCT_OPTION(ApplianceLoadReduction, 0, 1, ApplianceLoadReduction, EmberExiGeneratedApplianceLoadReduction, emberExiApplianceLoadReductionStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(AppliedTargetReduction, 0, 1, AppliedTargetReduction, EmberExiGeneratedAppliedTargetReduction, emberExiAppliedTargetReductionStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(Offset, 0, 1, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 2, overrideDuration_option),
    EMBER_EXI_SUBSTRUCT_OPTION(SetPoint, 0, 1, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDutyCycle // index 1213
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DutyCycle, 0, 0, 65535, 9, 90),
    EMBER_EXI_CH(normalValue, UNSIGNED_INTEGER, 255, normalValue),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDevice // index 1222
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDevice, 2, 11, 1, 36, 91),
    EMBER_EXI_SUBSTRUCT_OPTION(FlowReservationRequestListLink, 0, 1, FlowReservationRequestListLink, EmberExiGeneratedFlowReservationRequestListLink, emberExiFlowReservationRequestListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FlowReservationResponseListLink, 0, 1, FlowReservationResponseListLink, EmberExiGeneratedFlowReservationResponseListLink, emberExiFlowReservationResponseListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FunctionSetAssignmentsListLink, 0, 1, FunctionSetAssignmentsListLink, EmberExiGeneratedFunctionSetAssignmentsListLink, emberExiFunctionSetAssignmentsListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(RegistrationLink, 0, 1, RegistrationLink, EmberExiGeneratedRegistrationLink, emberExiRegistrationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SubscriptionListLink, 0, 1, SubscriptionListLink, EmberExiGeneratedSubscriptionListLink, emberExiSubscriptionListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControl // index 1258
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControl, 4, 8, 2497, 48, 92),
    EMBER_EXI_SUBSTRUCT_OPTION(ApplianceLoadReduction, 0, 1, ApplianceLoadReduction, EmberExiGeneratedApplianceLoadReduction, emberExiApplianceLoadReductionStructDataIndex),
    EMBER_EXI_CH(deviceCategory, BINARY, 255, deviceCategory),
    EMBER_EXI_CH(drProgramMandatory, BOOLEAN, 255, drProgramMandatory),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_CH(loadShiftForward, BOOLEAN, 255, loadShiftForward),
    EMBER_EXI_SUBSTRUCT_OPTION(Offset, 0, 1, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 5, overrideDuration_option),
    EMBER_EXI_SUBSTRUCT_OPTION(SetPoint, 0, 1, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TargetReduction, 0, 1, TargetReduction, EmberExiGeneratedTargetReduction, emberExiTargetReductionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControlList // index 1306
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControlList, 4, 0, 2845, 12, 93),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDeviceControl, 0, 255, EndDeviceControl, EmberExiGeneratedEndDeviceControl, emberExiEndDeviceControlStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControlListLink // index 1318
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControlListLink, 2, 0, 1906, 6, 94),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceList // index 1324
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceList, 4, 0, 2845, 12, 95),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDevice, 0, 255, EndDevice, EmberExiGeneratedEndDevice, emberExiEndDeviceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceListLink // index 1336
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceListLink, 2, 0, 1906, 6, 96),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEnvironmentalCost // index 1342
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EnvironmentalCost, 0, 0, 65535, 18, 97),
    EMBER_EXI_CH(amount, INTEGER, 255, amount),
    EMBER_EXI_CH(costKind, UNSIGNED_INTEGER, 255, costKind),
    EMBER_EXI_CH(costLevel, UNSIGNED_INTEGER, 255, costLevel),
    EMBER_EXI_CH(numCostLevels, UNSIGNED_INTEGER, 255, numCostLevels),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEvent // index 1360
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Event, 4, 3, 2719, 21, 98),
    EMBER_EXI_CH(creationTime, INTEGER, 255, creationTime),
    EMBER_EXI_SUBSTRUCT(EventStatus, 1, 0, EventStatus, EmberExiGeneratedEventStatus, emberExiEventStatusStructDataIndex),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEventStatus // index 1381
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EventStatus, 0, 0, 65535, 21, 99),
    EMBER_EXI_CH(currentStatus, UNSIGNED_INTEGER, 255, currentStatus),
    EMBER_EXI_CH(dateTime, INTEGER, 255, dateTime),
    EMBER_EXI_CH(potentiallySuperseded, BOOLEAN, 255, potentiallySuperseded),
    EMBER_EXI_CH(potentiallySupersededTime, INTEGER, 0, potentiallySupersededTime_option),
    EMBER_EXI_CH_STRING(reason, STRING, 0, reason_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFile // index 1402
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_File, 1, 0, 2695, 36, 100),
    EMBER_EXI_CH(activateTime, INTEGER, 0, activateTime_option),
    EMBER_EXI_CH_STRING(fileURI, STRING, 255, fileURI),
    EMBER_EXI_CH(lFDI, BINARY, 1, lFDI_option),
    EMBER_EXI_CH_STRING(mfHwVer, STRING, 0, mfHwVer_option),
    EMBER_EXI_CH(mfID, INTEGER, 255, mfID),
    EMBER_EXI_CH_STRING(mfModel, STRING, 255, mfModel),
    EMBER_EXI_CH_STRING(mfSerNum, STRING, 0, mfSerNum_option),
    EMBER_EXI_CH_STRING(mfVer, STRING, 255, mfVer),
    EMBER_EXI_CH(size, INTEGER, 255, size),
    EMBER_EXI_CH(type, BINARY, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileList // index 1438
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileList, 3, 0, 1891, 12, 101),
    EMBER_EXI_SUBSTRUCT_ARRAY(File, 0, 255, File, EmberExiGeneratedFile, emberExiFileStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileListLink // index 1450
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileListLink, 2, 0, 1906, 6, 102),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileStatusLink // index 1456
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileStatusLink, 1, 0, 1882, 6, 103),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFixedPowerFactor // index 1462
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FixedPowerFactor, 0, 0, 65535, 15, 104),
    EMBER_EXI_CH(displacement, INTEGER, 255, displacement),
    EMBER_EXI_CH(excitation, INTEGER, 255, excitation),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFixedVAr // index 1477
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FixedVAr, 0, 0, 65535, 12, 105),
    EMBER_EXI_CH(refType, UNSIGNED_INTEGER, 255, refType),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFlowReservationRequestListLink // index 1489
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FlowReservationRequestListLink, 2, 0, 1906, 6, 106),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFlowReservationResponseListLink // index 1495
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FlowReservationResponseListLink, 2, 0, 1906, 6, 107),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignments // index 1501
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignments, 0, 10, 1522, 21, 108),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 1, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsBase // index 1522
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsBase, 1, 0, 2695, 66, 109),
    EMBER_EXI_SUBSTRUCT_OPTION(CustomerAccountListLink, 0, 1, CustomerAccountListLink, EmberExiGeneratedCustomerAccountListLink, emberExiCustomerAccountListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DemandResponseProgramListLink, 0, 1, DemandResponseProgramListLink, EmberExiGeneratedDemandResponseProgramListLink, emberExiDemandResponseProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERProgramListLink, 0, 1, DERProgramListLink, EmberExiGeneratedDERProgramListLink, emberExiDERProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FileListLink, 0, 1, FileListLink, EmberExiGeneratedFileListLink, emberExiFileListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MessagingProgramListLink, 0, 1, MessagingProgramListLink, EmberExiGeneratedMessagingProgramListLink, emberExiMessagingProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PrepaymentListLink, 0, 1, PrepaymentListLink, EmberExiGeneratedPrepaymentListLink, emberExiPrepaymentListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ResponseSetListLink, 0, 1, ResponseSetListLink, EmberExiGeneratedResponseSetListLink, emberExiResponseSetListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TariffProfileListLink, 0, 1, TariffProfileListLink, EmberExiGeneratedTariffProfileListLink, emberExiTariffProfileListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeLink, 0, 1, TimeLink, EmberExiGeneratedTimeLink, emberExiTimeLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(UsagePointListLink, 0, 1, UsagePointListLink, EmberExiGeneratedUsagePointListLink, emberExiUsagePointListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsList // index 1588
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsList, 4, 0, 2845, 12, 110),
    EMBER_EXI_SUBSTRUCT_ARRAY(FunctionSetAssignments, 0, 255, FunctionSetAssignments, EmberExiGeneratedFunctionSetAssignments, emberExiFunctionSetAssignmentsStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsListLink // index 1600
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsListLink, 2, 0, 1906, 6, 111),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedHistoricalReading // index 1606
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_HistoricalReading, 1, 5, 217, 6, 112),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedHistoricalReadingList // index 1612
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_HistoricalReadingList, 3, 0, 1891, 12, 113),
    EMBER_EXI_SUBSTRUCT_ARRAY(HistoricalReading, 0, 255, HistoricalReading, EmberExiGeneratedHistoricalReading, emberExiHistoricalReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedHistoricalReadingListLink // index 1624
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_HistoricalReadingListLink, 2, 0, 1906, 6, 114),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIEEE_802_15_4 // index 1630
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IEEE_802_15_4, 0, 0, 65535, 18, 115),
    EMBER_EXI_CH(capabilityInfo, BINARY, 255, capabilityInfo),
    EMBER_EXI_SUBSTRUCT_OPTION(NeighborListLink, 0, 1, NeighborListLink, EmberExiGeneratedNeighborListLink, emberExiNeighborListLinkStructDataIndex),
    EMBER_EXI_CH(shortAddress, UNSIGNED_INTEGER, 255, shortAddress),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPAddr // index 1648
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPAddr, 1, 0, 2695, 15, 116),
    EMBER_EXI_CH(address, BINARY, 255, address),
    EMBER_EXI_SUBSTRUCT_OPTION(RPLInstanceListLink, 0, 1, RPLInstanceListLink, EmberExiGeneratedRPLInstanceListLink, emberExiRPLInstanceListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPAddrList // index 1663
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPAddrList, 3, 0, 1891, 12, 117),
    EMBER_EXI_SUBSTRUCT_ARRAY(IPAddr, 0, 255, IPAddr, EmberExiGeneratedIPAddr, emberExiIPAddrStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPAddrListLink // index 1675
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPAddrListLink, 2, 0, 1906, 6, 118),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterface // index 1681
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterface, 1, 0, 2695, 90, 119),
    EMBER_EXI_CH_STRING(ifDescr, STRING, 0, ifDescr_option),
    EMBER_EXI_CH(ifHighSpeed, INTEGER, 0, ifHighSpeed_option),
    EMBER_EXI_CH(ifInBroadcastPkts, INTEGER, 1, ifInBroadcastPkts_option),
    EMBER_EXI_CH(ifIndex, INTEGER, 2, ifIndex_option),
    EMBER_EXI_CH(ifInDiscards, INTEGER, 3, ifInDiscards_option),
    EMBER_EXI_CH(ifInErrors, INTEGER, 4, ifInErrors_option),
    EMBER_EXI_CH(ifInMulticastPkts, INTEGER, 5, ifInMulticastPkts_option),
    EMBER_EXI_CH(ifInOctets, INTEGER, 6, ifInOctets_option),
    EMBER_EXI_CH(ifInUcastPkts, INTEGER, 7, ifInUcastPkts_option),
    EMBER_EXI_CH(ifInUnknownProtos, INTEGER, 8, ifInUnknownProtos_option),
    EMBER_EXI_CH(ifMtu, INTEGER, 9, ifMtu_option),
    EMBER_EXI_CH_STRING(ifName, STRING, 0, ifName_option),
    EMBER_EXI_CH(ifOperStatus, UNSIGNED_INTEGER, 10, ifOperStatus_option),
    EMBER_EXI_CH(ifOutBroadcastPkts, INTEGER, 11, ifOutBroadcastPkts_option),
    EMBER_EXI_CH(ifOutDiscards, INTEGER, 12, ifOutDiscards_option),
    EMBER_EXI_CH(ifOutErrors, INTEGER, 13, ifOutErrors_option),
    EMBER_EXI_CH(ifOutMulticastPkts, INTEGER, 14, ifOutMulticastPkts_option),
    EMBER_EXI_CH(ifOutOctets, INTEGER, 15, ifOutOctets_option),
    EMBER_EXI_CH(ifOutUcastPkts, INTEGER, 16, ifOutUcastPkts_option),
    EMBER_EXI_CH(ifPromiscuousMode, BOOLEAN, 17, ifPromiscuousMode_option),
    EMBER_EXI_CH(ifSpeed, INTEGER, 18, ifSpeed_option),
    EMBER_EXI_CH(ifType, UNSIGNED_INTEGER, 19, ifType_option),
    EMBER_EXI_SUBSTRUCT_OPTION(IPAddrListLink, 0, 1, IPAddrListLink, EmberExiGeneratedIPAddrListLink, emberExiIPAddrListLinkStructDataIndex),
    EMBER_EXI_CH(lastResetTime, INTEGER, 20, lastResetTime_option),
    EMBER_EXI_CH(lastUpdatedTime, INTEGER, 21, lastUpdatedTime_option),
    EMBER_EXI_SUBSTRUCT_OPTION(LLInterfaceListLink, 0, 1, LLInterfaceListLink, EmberExiGeneratedLLInterfaceListLink, emberExiLLInterfaceListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterfaceList // index 1771
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterfaceList, 3, 0, 1891, 12, 120),
    EMBER_EXI_SUBSTRUCT_ARRAY(IPInterface, 0, 255, IPInterface, EmberExiGeneratedIPInterface, emberExiIPInterfaceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterfaceListLink // index 1783
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterfaceListLink, 2, 0, 1906, 6, 121),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIdentifiedObject // index 1789
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IdentifiedObject, 1, 0, 2695, 15, 122),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 0, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLLInterface // index 1804
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LLInterface, 1, 0, 2695, 60, 123),
    EMBER_EXI_CH(CRCerrors, INTEGER, 255, CRCerrors),
    EMBER_EXI_CH(EUI64, BINARY, 255, EUI64),
    EMBER_EXI_SUBSTRUCT_OPTION(IEEE_802_15_4, 0, 1, IEEE_802_15_4, EmberExiGeneratedIEEE_802_15_4, emberExiIEEE_802_15_4StructDataIndex),
    EMBER_EXI_CH(linkLayerType, UNSIGNED_INTEGER, 255, linkLayerType),
    EMBER_EXI_CH(LLAckNotRx, INTEGER, 0, LLAckNotRx_option),
    EMBER_EXI_CH(LLCSMAFail, INTEGER, 1, LLCSMAFail_option),
    EMBER_EXI_CH(LLFramesDropRx, INTEGER, 2, LLFramesDropRx_option),
    EMBER_EXI_CH(LLFramesDropTx, INTEGER, 3, LLFramesDropTx_option),
    EMBER_EXI_CH(LLFramesRx, INTEGER, 4, LLFramesRx_option),
    EMBER_EXI_CH(LLFramesTx, INTEGER, 5, LLFramesTx_option),
    EMBER_EXI_CH(LLMediaAccessFail, INTEGER, 6, LLMediaAccessFail_option),
    EMBER_EXI_CH(LLOctetsRx, INTEGER, 7, LLOctetsRx_option),
    EMBER_EXI_CH(LLOctetsTx, INTEGER, 8, LLOctetsTx_option),
    EMBER_EXI_CH(LLRetryCount, INTEGER, 9, LLRetryCount_option),
    EMBER_EXI_CH(LLSecurityErrorRx, INTEGER, 10, LLSecurityErrorRx_option),
    EMBER_EXI_SUBSTRUCT_OPTION(loWPAN, 0, 1, loWPAN, EmberExiGeneratedloWPAN, emberExiloWPANStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLLInterfaceList // index 1864
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LLInterfaceList, 3, 0, 1891, 12, 124),
    EMBER_EXI_SUBSTRUCT_ARRAY(LLInterface, 0, 255, LLInterface, EmberExiGeneratedLLInterface, emberExiLLInterfaceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLLInterfaceListLink // index 1876
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LLInterfaceListLink, 2, 0, 1906, 6, 125),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLink // index 1882
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Link, 0, 0, 65535, 9, 126),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedList // index 1891
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_List, 0, 0, 2695, 15, 127),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(results, UNSIGNED_INTEGER, 255, results),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedListLink // index 1906
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ListLink, 0, 0, 1882, 12, 128),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLoadShedAvailability // index 1918
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LoadShedAvailability, 1, 0, 2695, 24, 129),
    EMBER_EXI_CH(availabilityDuration, INTEGER, 0, availabilityDuration_option),
    EMBER_EXI_SUBSTRUCT_OPTION(DemandResponseProgramLink, 0, 1, DemandResponseProgramLink, EmberExiGeneratedDemandResponseProgramLink, emberExiDemandResponseProgramLinkStructDataIndex),
    EMBER_EXI_CH(sheddablePercent, UNSIGNED_INTEGER, 1, sheddablePercent_option),
    EMBER_EXI_SUBSTRUCT_OPTION(sheddablePower, 0, 1, sheddablePower, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLoadShedAvailabilityLink // index 1942
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LoadShedAvailabilityLink, 1, 0, 1882, 6, 130),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEvent // index 1948
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEvent, 1, 0, 2695, 27, 132),
    EMBER_EXI_CH(createdDateTime, INTEGER, 255, createdDateTime),
    EMBER_EXI_CH(extendedData, INTEGER, 0, extendedData_option),
    EMBER_EXI_CH(functionSet, UNSIGNED_INTEGER, 255, functionSet),
    EMBER_EXI_CH(logEventCode, UNSIGNED_INTEGER, 255, logEventCode),
    EMBER_EXI_CH(logEventID, UNSIGNED_INTEGER, 255, logEventID),
    EMBER_EXI_CH(logEventPEN, INTEGER, 255, logEventPEN),
    EMBER_EXI_CH(profileID, UNSIGNED_INTEGER, 255, profileID),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventList // index 1975
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventList, 4, 0, 2845, 12, 133),
    EMBER_EXI_SUBSTRUCT_ARRAY(LogEvent, 0, 255, LogEvent, EmberExiGeneratedLogEvent, emberExiLogEventStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventListLink // index 1987
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventListLink, 2, 0, 1906, 6, 134),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgram // index 1993
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgram, 2, 3, 2830, 24, 135),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveTextMessageListLink, 0, 1, ActiveTextMessageListLink, EmberExiGeneratedActiveTextMessageListLink, emberExiActiveTextMessageListLinkStructDataIndex),
    EMBER_EXI_CH_STRING(locale, STRING, 255, locale),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
    EMBER_EXI_SUBSTRUCT_OPTION(TextMessageListLink, 0, 1, TextMessageListLink, EmberExiGeneratedTextMessageListLink, emberExiTextMessageListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramList // index 2017
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramList, 4, 0, 2845, 12, 136),
    EMBER_EXI_SUBSTRUCT_ARRAY(MessagingProgram, 0, 255, MessagingProgram, EmberExiGeneratedMessagingProgram, emberExiMessagingProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramListLink // index 2029
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramListLink, 2, 0, 1906, 6, 137),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReading // index 2035
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReading, 1, 3, 2065, 30, 138),
    EMBER_EXI_SUBSTRUCT_OPTION(RateComponentListLink, 0, 1, RateComponentListLink, EmberExiGeneratedRateComponentListLink, emberExiRateComponentListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingLink, 0, 1, ReadingLink, EmberExiGeneratedReadingLink, emberExiReadingLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingSetListLink, 0, 1, ReadingSetListLink, EmberExiGeneratedReadingSetListLink, emberExiReadingSetListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(ReadingTypeLink, 1, 0, ReadingTypeLink, EmberExiGeneratedReadingTypeLink, emberExiReadingTypeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingBase // index 2065
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingBase, 1, 3, 1789, 6, 139),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingList // index 2071
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingList, 4, 0, 2845, 12, 140),
    EMBER_EXI_SUBSTRUCT_ARRAY(MeterReading, 0, 255, MeterReading, EmberExiGeneratedMeterReading, emberExiMeterReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingListLink // index 2083
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingListLink, 2, 0, 1906, 6, 141),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMirrorUsagePointListLink // index 2089
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MirrorUsagePointListLink, 2, 0, 1906, 6, 142),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNeighbor // index 2095
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Neighbor, 1, 0, 2695, 15, 143),
    EMBER_EXI_CH(isChild, BOOLEAN, 255, isChild),
    EMBER_EXI_CH(linkQuality, UNSIGNED_INTEGER, 255, linkQuality),
    EMBER_EXI_CH(shortAddress, UNSIGNED_INTEGER, 255, shortAddress),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNeighborList // index 2110
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NeighborList, 3, 0, 1891, 12, 144),
    EMBER_EXI_SUBSTRUCT_ARRAY(Neighbor, 0, 255, Neighbor, EmberExiGeneratedNeighbor, emberExiNeighborStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNeighborListLink // index 2122
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NeighborListLink, 2, 0, 1906, 6, 145),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNotification // index 2128
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Notification, 1, 1, 2899, 21, 146),
    EMBER_EXI_CH_STRING(newResourceURI, STRING, 0, newResourceURI_option),
    EMBER_EXI_SUBSTRUCT_OPTION(Resource, 0, 1, Resource, EmberExiGeneratedResource, emberExiResourceStructDataIndex),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
    EMBER_EXI_CH_STRING(subscriptionURI, STRING, 255, subscriptionURI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedOffset // index 2149
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Offset, 0, 0, 65535, 15, 147),
    EMBER_EXI_CH(coolingOffset, UNSIGNED_INTEGER, 0, coolingOffset_option),
    EMBER_EXI_CH(heatingOffset, UNSIGNED_INTEGER, 1, heatingOffset_option),
    EMBER_EXI_CH(loadAdjustmentPercentageOffset, UNSIGNED_INTEGER, 2, loadAdjustmentPercentageOffset_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPEVInfo // index 2164
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PEVInfo, 0, 0, 65535, 36, 150),
    EMBER_EXI_SUBSTRUCT(chargingPowerNow, 1, 0, chargingPowerNow, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_SUBSTRUCT(energyRequestNow, 1, 0, energyRequestNow, EmberExiGeneratedRealEnergy, emberExiRealEnergyStructDataIndex),
    EMBER_EXI_SUBSTRUCT(maxForwardPower, 1, 0, maxForwardPower, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_CH(minimumChargingDuration, INTEGER, 255, minimumChargingDuration),
    EMBER_EXI_CH(targetStateOfCharge, UNSIGNED_INTEGER, 255, targetStateOfCharge),
    EMBER_EXI_CH(timeChargeIsNeeded, INTEGER, 255, timeChargeIsNeeded),
    EMBER_EXI_CH(timeChargingStatusPEV, INTEGER, 255, timeChargingStatusPEV),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerConfiguration // index 2200
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerConfiguration, 0, 0, 65535, 12, 152),
    EMBER_EXI_CH(batteryInstallTime, INTEGER, 0, batteryInstallTime_option),
    EMBER_EXI_CH(lowChargeThreshold, INTEGER, 1, lowChargeThreshold_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerStatus // index 2212
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerStatus, 1, 0, 2695, 33, 155),
    EMBER_EXI_CH(batteryStatus, UNSIGNED_INTEGER, 255, batteryStatus),
    EMBER_EXI_CH(changedTime, INTEGER, 255, changedTime),
    EMBER_EXI_CH(currentPowerSource, UNSIGNED_INTEGER, 255, currentPowerSource),
    EMBER_EXI_CH(estimatedChargeRemaining, UNSIGNED_INTEGER, 0, estimatedChargeRemaining_option),
    EMBER_EXI_CH(estimatedTimeRemaining, INTEGER, 1, estimatedTimeRemaining_option),
    EMBER_EXI_SUBSTRUCT_OPTION(PEVInfo, 0, 1, PEVInfo, EmberExiGeneratedPEVInfo, emberExiPEVInfoStructDataIndex),
    EMBER_EXI_CH(sessionTimeOnBattery, INTEGER, 2, sessionTimeOnBattery_option),
    EMBER_EXI_CH(totalTimeOnBattery, INTEGER, 3, totalTimeOnBattery_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerStatusLink // index 2245
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerStatusLink, 1, 0, 1882, 6, 156),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepayOperationStatus // index 2251
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepayOperationStatus, 1, 0, 2695, 24, 158),
    EMBER_EXI_SUBSTRUCT_OPTION(creditTypeChange, 0, 1, creditTypeChange, EmberExiGeneratedCreditTypeChange, emberExiCreditTypeChangeStructDataIndex),
    EMBER_EXI_CH(creditTypeInUse, UNSIGNED_INTEGER, 0, creditTypeInUse_option),
    EMBER_EXI_SUBSTRUCT_OPTION(serviceChange, 0, 1, serviceChange, EmberExiGeneratedServiceChange, emberExiServiceChangeStructDataIndex),
    EMBER_EXI_CH(serviceStatus, UNSIGNED_INTEGER, 255, serviceStatus),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepayOperationStatusLink // index 2275
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepayOperationStatusLink, 1, 0, 1882, 6, 159),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepayment // index 2281
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Prepayment, 1, 3, 1789, 75, 160),
    EMBER_EXI_SUBSTRUCT(AccountBalanceLink, 1, 0, AccountBalanceLink, EmberExiGeneratedAccountBalanceLink, emberExiAccountBalanceLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveCreditRegisterListLink, 0, 1, ActiveCreditRegisterListLink, EmberExiGeneratedActiveCreditRegisterListLink, emberExiActiveCreditRegisterListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveSupplyInterruptionOverrideListLink, 0, 1, ActiveSupplyInterruptionOverrideListLink, EmberExiGeneratedActiveSupplyInterruptionOverrideListLink, emberExiActiveSupplyInterruptionOverrideListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(creditExpiryLevel, 0, 1, creditExpiryLevel, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_SUBSTRUCT(CreditRegisterListLink, 1, 0, CreditRegisterListLink, EmberExiGeneratedCreditRegisterListLink, emberExiCreditRegisterListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(lowCreditWarningLevel, 0, 1, lowCreditWarningLevel, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(lowEmergencyCreditWarningLevel, 0, 1, lowEmergencyCreditWarningLevel, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_CH(prepayMode, UNSIGNED_INTEGER, 255, prepayMode),
    EMBER_EXI_SUBSTRUCT(PrepayOperationStatusLink, 1, 0, PrepayOperationStatusLink, EmberExiGeneratedPrepayOperationStatusLink, emberExiPrepayOperationStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(SupplyInterruptionOverrideListLink, 1, 0, SupplyInterruptionOverrideListLink, EmberExiGeneratedSupplyInterruptionOverrideListLink, emberExiSupplyInterruptionOverrideListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_ARRAY(UsagePoint, 0, 255, UsagePoint, EmberExiGeneratedUsagePoint, emberExiUsagePointStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(UsagePointLink, 0, 1, UsagePointLink, EmberExiGeneratedUsagePointLink, emberExiUsagePointLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentLink // index 2356
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentLink, 1, 0, 1882, 6, 161),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentList // index 2362
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentList, 4, 0, 2845, 12, 162),
    EMBER_EXI_SUBSTRUCT_ARRAY(Prepayment, 0, 255, Prepayment, EmberExiGeneratedPrepayment, emberExiPrepaymentStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentListLink // index 2374
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentListLink, 2, 0, 1906, 6, 163),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPriceResponseCfgListLink // index 2380
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PriceResponseCfgListLink, 2, 0, 1906, 6, 164),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedProjectionReading // index 2386
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ProjectionReading, 1, 5, 217, 6, 167),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedProjectionReadingList // index 2392
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ProjectionReadingList, 3, 0, 1891, 12, 168),
    EMBER_EXI_SUBSTRUCT_ARRAY(ProjectionReading, 0, 255, ProjectionReading, EmberExiGeneratedProjectionReading, emberExiProjectionReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedProjectionReadingListLink // index 2404
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ProjectionReadingListLink, 2, 0, 1906, 6, 169),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLInstance // index 2410
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLInstance, 1, 0, 2695, 39, 170),
    EMBER_EXI_CH(DODAGid, UNSIGNED_INTEGER, 255, DODAGid),
    EMBER_EXI_CH(DODAGroot, BOOLEAN, 255, DODAGroot),
    EMBER_EXI_CH(flags, UNSIGNED_INTEGER, 255, flags),
    EMBER_EXI_CH(groundedFlag, BOOLEAN, 255, groundedFlag),
    EMBER_EXI_CH(MOP, UNSIGNED_INTEGER, 255, MOP),
    EMBER_EXI_CH(PRF, UNSIGNED_INTEGER, 255, PRF),
    EMBER_EXI_CH(rank, UNSIGNED_INTEGER, 255, rank),
    EMBER_EXI_CH(RPLInstanceID, UNSIGNED_INTEGER, 255, RPLInstanceID),
    EMBER_EXI_SUBSTRUCT_OPTION(RPLSourceRoutesListLink, 0, 1, RPLSourceRoutesListLink, EmberExiGeneratedRPLSourceRoutesListLink, emberExiRPLSourceRoutesListLinkStructDataIndex),
    EMBER_EXI_CH(versionNumber, UNSIGNED_INTEGER, 255, versionNumber),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLInstanceList // index 2449
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLInstanceList, 3, 0, 1891, 12, 171),
    EMBER_EXI_SUBSTRUCT_ARRAY(RPLInstance, 0, 255, RPLInstance, EmberExiGeneratedRPLInstance, emberExiRPLInstanceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLInstanceListLink // index 2461
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLInstanceListLink, 2, 0, 1906, 6, 172),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLSourceRoutes // index 2467
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLSourceRoutes, 1, 0, 2695, 12, 173),
    EMBER_EXI_CH(DestAddress, BINARY, 255, DestAddress),
    EMBER_EXI_CH(SourceRoute, BINARY, 255, SourceRoute),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLSourceRoutesList // index 2479
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLSourceRoutesList, 3, 0, 1891, 12, 174),
    EMBER_EXI_SUBSTRUCT_ARRAY(RPLSourceRoutes, 0, 255, RPLSourceRoutes, EmberExiGeneratedRPLSourceRoutes, emberExiRPLSourceRoutesStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLSourceRoutesListLink // index 2491
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLSourceRoutesListLink, 2, 0, 1906, 6, 175),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRandomizableEvent // index 2497
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RandomizableEvent, 4, 6, 1360, 12, 176),
    EMBER_EXI_CH(randomizeDuration, INTEGER, 3, randomizeDuration_option),
    EMBER_EXI_CH(randomizeStart, INTEGER, 4, randomizeStart_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRateComponent // index 2509
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RateComponent, 1, 3, 1789, 39, 177),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveTimeTariffIntervalListLink, 0, 1, ActiveTimeTariffIntervalListLink, EmberExiGeneratedActiveTimeTariffIntervalListLink, emberExiActiveTimeTariffIntervalListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(flowRateEndLimit, 0, 1, flowRateEndLimit, EmberExiGeneratedUnitValueType, emberExiUnitValueTypeStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(flowRateStartLimit, 0, 1, flowRateStartLimit, EmberExiGeneratedUnitValueType, emberExiUnitValueTypeStructDataIndex),
    EMBER_EXI_SUBSTRUCT(ReadingTypeLink, 1, 0, ReadingTypeLink, EmberExiGeneratedReadingTypeLink, emberExiReadingTypeLinkStructDataIndex),
    EMBER_EXI_CH(roleFlags, BINARY, 255, roleFlags),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeTariffIntervalListLink, 0, 1, TimeTariffIntervalListLink, EmberExiGeneratedTimeTariffIntervalListLink, emberExiTimeTariffIntervalListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRateComponentList // index 2548
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RateComponentList, 3, 0, 1891, 12, 178),
    EMBER_EXI_SUBSTRUCT_ARRAY(RateComponent, 0, 255, RateComponent, EmberExiGeneratedRateComponent, emberExiRateComponentStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRateComponentListLink // index 2560
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RateComponentListLink, 2, 0, 1906, 6, 179),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReading // index 2566
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Reading, 0, 5, 2581, 15, 180),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 4, subscribable_option),
    EMBER_EXI_CH(localID, BINARY, 5, localID_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingBase // index 2581
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingBase, 1, 0, 2695, 24, 181),
    EMBER_EXI_CH(consumptionBlock, UNSIGNED_INTEGER, 0, consumptionBlock_option),
    EMBER_EXI_CH(qualityFlags, BINARY, 1, qualityFlags_option),
    EMBER_EXI_SUBSTRUCT_OPTION(timePeriod, 0, 1, timePeriod, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
    EMBER_EXI_CH(touTier, UNSIGNED_INTEGER, 2, touTier_option),
    EMBER_EXI_CH(value, INTEGER, 3, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingLink // index 2605
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingLink, 1, 0, 1882, 6, 182),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingList // index 2611
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingList, 4, 0, 2845, 12, 183),
    EMBER_EXI_SUBSTRUCT_ARRAY(Reading, 0, 255, Reading, EmberExiGeneratedReading, emberExiReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingListLink // index 2623
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingListLink, 2, 0, 1906, 6, 184),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSet // index 2629
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSet, 1, 4, 2641, 12, 185),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingListLink, 0, 1, ReadingListLink, EmberExiGeneratedReadingListLink, emberExiReadingListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSetBase // index 2641
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSetBase, 1, 3, 1789, 12, 186),
    EMBER_EXI_SUBSTRUCT(timePeriod, 1, 0, timePeriod, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSetList // index 2653
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSetList, 4, 0, 2845, 12, 187),
    EMBER_EXI_SUBSTRUCT_ARRAY(ReadingSet, 0, 255, ReadingSet, EmberExiGeneratedReadingSet, emberExiReadingSetStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingSetListLink // index 2665
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingSetListLink, 2, 0, 1906, 6, 188),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingTypeLink // index 2671
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingTypeLink, 1, 0, 1882, 6, 189),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRealEnergy // index 2677
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RealEnergy, 0, 0, 65535, 12, 190),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRegistrationLink // index 2689
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RegistrationLink, 1, 0, 1882, 6, 191),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResource // index 2695
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Resource, 0, 0, 65535, 9, 192),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRespondableResource // index 2704
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RespondableResource, 0, 0, 2695, 15, 193),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRespondableSubscribableIdentifiedObject // index 2719
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RespondableSubscribableIdentifiedObject, 0, 0, 2704, 27, 194),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 1, subscribable_option),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 2, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponse // index 2746
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Response, 1, 0, 2695, 18, 195),
    EMBER_EXI_CH(createdDateTime, INTEGER, 0, createdDateTime_option),
    EMBER_EXI_CH(endDeviceLFDI, BINARY, 255, endDeviceLFDI),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 1, status_option),
    EMBER_EXI_CH(subject, BINARY, 255, subject),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponseSetListLink // index 2764
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ResponseSetListLink, 2, 0, 1906, 6, 196),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSelfDevice // index 2770
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SelfDevice, 2, 11, 1, 6, 199),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSelfDeviceLink // index 2776
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SelfDeviceLink, 1, 0, 1882, 6, 200),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceChange // index 2782
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceChange, 0, 0, 65535, 12, 201),
    EMBER_EXI_CH(newStatus, UNSIGNED_INTEGER, 255, newStatus),
    EMBER_EXI_CH(startTime, INTEGER, 255, startTime),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceSupplier // index 2794
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceSupplier, 1, 3, 1789, 18, 204),
    EMBER_EXI_CH_STRING(email, STRING, 0, email_option),
    EMBER_EXI_CH_STRING(phone, STRING, 0, phone_option),
    EMBER_EXI_CH(providerID, INTEGER, 1, providerID_option),
    EMBER_EXI_CH_STRING(web, STRING, 0, web_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceSupplierLink // index 2812
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceSupplierLink, 1, 0, 1882, 6, 205),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSetPoint // index 2818
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SetPoint, 0, 0, 65535, 12, 206),
    EMBER_EXI_CH(coolingSetpoint, INTEGER, 0, coolingSetpoint_option),
    EMBER_EXI_CH(heatingSetpoint, INTEGER, 1, heatingSetpoint_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableIdentifiedObject // index 2830
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableIdentifiedObject, 2, 0, 2863, 15, 208),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 1, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableList // index 2845
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableList, 0, 0, 2863, 18, 209),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(results, UNSIGNED_INTEGER, 255, results),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableResource // index 2863
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableResource, 0, 0, 2695, 12, 210),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscription // index 2875
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Subscription, 1, 1, 2899, 24, 211),
    EMBER_EXI_SUBSTRUCT_OPTION(Condition, 0, 1, Condition, EmberExiGeneratedCondition, emberExiConditionStructDataIndex),
    EMBER_EXI_CH(encoding, UNSIGNED_INTEGER, 255, encoding),
    EMBER_EXI_CH_STRING(level, STRING, 255, level),
    EMBER_EXI_CH(limit, UNSIGNED_INTEGER, 255, limit),
    EMBER_EXI_CH_STRING(notificationURI, STRING, 255, notificationURI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionBase // index 2899
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionBase, 1, 0, 2695, 9, 212),
    EMBER_EXI_CH_STRING(subscribedResource, STRING, 255, subscribedResource),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionList // index 2908
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionList, 3, 0, 1891, 12, 213),
    EMBER_EXI_SUBSTRUCT_ARRAY(Subscription, 0, 255, Subscription, EmberExiGeneratedSubscription, emberExiSubscriptionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionListLink // index 2920
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionListLink, 2, 0, 1906, 6, 214),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupplyInterruptionOverride // index 2926
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupplyInterruptionOverride, 1, 0, 2695, 15, 215),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupplyInterruptionOverrideList // index 2941
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupplyInterruptionOverrideList, 3, 0, 1891, 12, 216),
    EMBER_EXI_SUBSTRUCT_ARRAY(SupplyInterruptionOverride, 0, 255, SupplyInterruptionOverride, EmberExiGeneratedSupplyInterruptionOverride, emberExiSupplyInterruptionOverrideStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupplyInterruptionOverrideListLink // index 2953
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupplyInterruptionOverrideListLink, 2, 0, 1906, 6, 217),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupportedLocaleListLink // index 2959
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupportedLocaleListLink, 2, 0, 1906, 6, 218),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReading // index 2965
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReading, 1, 5, 217, 6, 220),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReadingList // index 2971
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReadingList, 3, 0, 1891, 12, 221),
    EMBER_EXI_SUBSTRUCT_ARRAY(TargetReading, 0, 255, TargetReading, EmberExiGeneratedTargetReading, emberExiTargetReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReadingListLink // index 2983
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReadingListLink, 2, 0, 1906, 6, 222),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReduction // index 2989
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReduction, 0, 0, 65535, 12, 223),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfile // index 3001
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfile, 1, 3, 1789, 27, 224),
    EMBER_EXI_CH(currency, UNSIGNED_INTEGER, 1, currency_option),
    EMBER_EXI_CH(pricePowerOfTenMultiplier, INTEGER, 2, pricePowerOfTenMultiplier_option),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
    EMBER_EXI_CH_STRING(rateCode, STRING, 0, rateCode_option),
    EMBER_EXI_SUBSTRUCT_OPTION(RateComponentListLink, 0, 1, RateComponentListLink, EmberExiGeneratedRateComponentListLink, emberExiRateComponentListLinkStructDataIndex),
    EMBER_EXI_CH(serviceCategoryKind, UNSIGNED_INTEGER, 255, serviceCategoryKind),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileLink // index 3028
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileLink, 1, 0, 1882, 6, 225),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileList // index 3034
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileList, 4, 0, 2845, 12, 226),
    EMBER_EXI_SUBSTRUCT_ARRAY(TariffProfile, 0, 255, TariffProfile, EmberExiGeneratedTariffProfile, emberExiTariffProfileStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileListLink // index 3046
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileListLink, 2, 0, 1906, 6, 227),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTemperature // index 3052
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Temperature, 0, 0, 65535, 15, 228),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(subject, UNSIGNED_INTEGER, 255, subject),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessage // index 3067
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessage, 4, 6, 1360, 15, 229),
    EMBER_EXI_CH_STRING(originator, STRING, 0, originator_option),
    EMBER_EXI_CH(priority, UNSIGNED_INTEGER, 255, priority),
    EMBER_EXI_CH_STRING(textMessage, STRING, 255, textMessage),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageList // index 3082
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageList, 4, 0, 2845, 12, 230),
    EMBER_EXI_SUBSTRUCT_ARRAY(TextMessage, 0, 255, TextMessage, EmberExiGeneratedTextMessage, emberExiTextMessageStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageListLink // index 3094
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageListLink, 2, 0, 1906, 6, 231),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextResponse // index 3100
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextResponse, 1, 4, 2746, 6, 232),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTime // index 3106
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Time, 1, 0, 2695, 27, 233),
    EMBER_EXI_CH(currentTime, INTEGER, 255, currentTime),
    EMBER_EXI_CH(dstEndTime, INTEGER, 255, dstEndTime),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartTime, INTEGER, 255, dstStartTime),
    EMBER_EXI_CH(localTime, INTEGER, 0, localTime_option),
    EMBER_EXI_CH(quality, UNSIGNED_INTEGER, 255, quality),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeConfiguration // index 3133
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeConfiguration, 0, 0, 65535, 18, 234),
    EMBER_EXI_CH(dstEndRule, BINARY, 255, dstEndRule),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartRule, BINARY, 255, dstStartRule),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeLink // index 3151
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeLink, 1, 0, 1882, 6, 235),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeTariffInterval // index 3157
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeTariffInterval, 4, 8, 2497, 15, 237),
    EMBER_EXI_SUBSTRUCT_OPTION(ConsumptionTariffIntervalListLink, 0, 1, ConsumptionTariffIntervalListLink, EmberExiGeneratedConsumptionTariffIntervalListLink, emberExiConsumptionTariffIntervalListLinkStructDataIndex),
    EMBER_EXI_CH(touTier, UNSIGNED_INTEGER, 255, touTier),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeTariffIntervalList // index 3172
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeTariffIntervalList, 4, 0, 2845, 12, 238),
    EMBER_EXI_SUBSTRUCT_ARRAY(TimeTariffInterval, 0, 255, TimeTariffInterval, EmberExiGeneratedTimeTariffInterval, emberExiTimeTariffIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeTariffIntervalListLink // index 3184
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeTariffIntervalListLink, 2, 0, 1906, 6, 239),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUnitValueType // index 3190
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UnitValueType, 0, 0, 65535, 15, 242),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 255, unit),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePoint // index 3205
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePoint, 1, 6, 3217, 12, 244),
    EMBER_EXI_SUBSTRUCT_OPTION(MeterReadingListLink, 0, 1, MeterReadingListLink, EmberExiGeneratedMeterReadingListLink, emberExiMeterReadingListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointBase // index 3217
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointBase, 1, 3, 1789, 15, 245),
    EMBER_EXI_CH(roleFlags, BINARY, 255, roleFlags),
    EMBER_EXI_CH(serviceCategoryKind, UNSIGNED_INTEGER, 255, serviceCategoryKind),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointLink // index 3232
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointLink, 1, 0, 1882, 6, 246),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointList // index 3238
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointList, 4, 0, 2845, 12, 247),
    EMBER_EXI_SUBSTRUCT_ARRAY(UsagePoint, 0, 255, UsagePoint, EmberExiGeneratedUsagePoint, emberExiUsagePointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointListLink // index 3250
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointListLink, 2, 0, 1906, 6, 248),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedloWPAN // index 3256
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_loWPAN, 0, 0, 65535, 21, 250),
    EMBER_EXI_CH(octetsRx, INTEGER, 0, octetsRx_option),
    EMBER_EXI_CH(octetsTx, INTEGER, 1, octetsTx_option),
    EMBER_EXI_CH(packetsRx, INTEGER, 255, packetsRx),
    EMBER_EXI_CH(packetsTx, INTEGER, 255, packetsTx),
    EMBER_EXI_CH(rxFragError, INTEGER, 255, rxFragError),
#undef EMBER_EXI_STRUCT

    EMBER_EXI_QNAME_NONE // terminator

};



void emberExiPrintStructAbstractDevice(EmberExiGeneratedAbstractDevice *data)
{
  emExiPrintStruct(emberExiAbstractDeviceStructData,
                   (int8u *) data,
                   0,
                   "AbstractDevice",
                   emberExiQnames);
}


void emberExiToXmlStructAbstractDevice(EmberExiGeneratedAbstractDevice *data) {
  EXI_DEBUG1("Start to XML: AbstractDevice\n");
  emberExiPrintfLine("<AbstractDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
  emberExiPrintfLine("</AbstractDevice>");
  EXI_DEBUG1("End to XML: AbstractDevice\n");
}




void emberExiPrintStructAccountBalance(EmberExiGeneratedAccountBalance *data)
{
  emExiPrintStruct(emberExiAccountBalanceStructData,
                   (int8u *) data,
                   0,
                   "AccountBalance",
                   emberExiQnames);
}


void emberExiToXmlStructAccountBalance(EmberExiGeneratedAccountBalance *data) {
  EXI_DEBUG1("Start to XML: AccountBalance\n");
  emberExiPrintfLine("<AccountBalance");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->availableCredit != NULL )
      emberExiToXmlStructAccountingUnit((data->availableCredit));
  emberExiPrintfLine("  <creditStatus>%d</creditStatus>", data->creditStatus_option);
    if ( data->emergencyCredit_option != NULL )
      emberExiToXmlStructAccountingUnit((data->emergencyCredit_option));
  emberExiPrintfLine("  <emergencyCreditStatus>%d</emergencyCreditStatus>", data->emergencyCreditStatus_option);
  emberExiPrintfLine("</AccountBalance>");
  EXI_DEBUG1("End to XML: AccountBalance\n");
}




void emberExiPrintStructAccountBalanceLink(EmberExiGeneratedAccountBalanceLink *data)
{
  emExiPrintStruct(emberExiAccountBalanceLinkStructData,
                   (int8u *) data,
                   0,
                   "AccountBalanceLink",
                   emberExiQnames);
}


void emberExiToXmlStructAccountBalanceLink(EmberExiGeneratedAccountBalanceLink *data) {
  EXI_DEBUG1("Start to XML: AccountBalanceLink\n");
  emberExiPrintfLine("<AccountBalanceLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</AccountBalanceLink>");
  EXI_DEBUG1("End to XML: AccountBalanceLink\n");
}




void emberExiPrintStructAccountingUnit(EmberExiGeneratedAccountingUnit *data)
{
  emExiPrintStruct(emberExiAccountingUnitStructData,
                   (int8u *) data,
                   0,
                   "AccountingUnit",
                   emberExiQnames);
}


void emberExiToXmlStructAccountingUnit(EmberExiGeneratedAccountingUnit *data) {
  EXI_DEBUG1("Start to XML: AccountingUnit\n");
  emberExiPrintfLine("<AccountingUnit");
  emberExiPrintfLine(">");
    if ( data->energyUnit_option != NULL )
      emberExiToXmlStructRealEnergy((data->energyUnit_option));
  emberExiPrintfLine("  <monetaryUnit>%d</monetaryUnit>", data->monetaryUnit);
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</AccountingUnit>");
  EXI_DEBUG1("End to XML: AccountingUnit\n");
}




void emberExiPrintStructActiveBillingPeriodListLink(EmberExiGeneratedActiveBillingPeriodListLink *data)
{
  emExiPrintStruct(emberExiActiveBillingPeriodListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveBillingPeriodListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveBillingPeriodListLink(EmberExiGeneratedActiveBillingPeriodListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveBillingPeriodListLink\n");
  emberExiPrintfLine("<ActiveBillingPeriodListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveBillingPeriodListLink>");
  EXI_DEBUG1("End to XML: ActiveBillingPeriodListLink\n");
}




void emberExiPrintStructActiveCreditRegisterListLink(EmberExiGeneratedActiveCreditRegisterListLink *data)
{
  emExiPrintStruct(emberExiActiveCreditRegisterListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveCreditRegisterListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveCreditRegisterListLink(EmberExiGeneratedActiveCreditRegisterListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveCreditRegisterListLink\n");
  emberExiPrintfLine("<ActiveCreditRegisterListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveCreditRegisterListLink>");
  EXI_DEBUG1("End to XML: ActiveCreditRegisterListLink\n");
}




void emberExiPrintStructActiveDERControlListLink(EmberExiGeneratedActiveDERControlListLink *data)
{
  emExiPrintStruct(emberExiActiveDERControlListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveDERControlListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveDERControlListLink(EmberExiGeneratedActiveDERControlListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveDERControlListLink\n");
  emberExiPrintfLine("<ActiveDERControlListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveDERControlListLink>");
  EXI_DEBUG1("End to XML: ActiveDERControlListLink\n");
}




void emberExiPrintStructActiveEndDeviceControlListLink(EmberExiGeneratedActiveEndDeviceControlListLink *data)
{
  emExiPrintStruct(emberExiActiveEndDeviceControlListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveEndDeviceControlListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveEndDeviceControlListLink(EmberExiGeneratedActiveEndDeviceControlListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveEndDeviceControlListLink\n");
  emberExiPrintfLine("<ActiveEndDeviceControlListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveEndDeviceControlListLink>");
  EXI_DEBUG1("End to XML: ActiveEndDeviceControlListLink\n");
}




void emberExiPrintStructActivePower(EmberExiGeneratedActivePower *data)
{
  emExiPrintStruct(emberExiActivePowerStructData,
                   (int8u *) data,
                   0,
                   "ActivePower",
                   emberExiQnames);
}


void emberExiToXmlStructActivePower(EmberExiGeneratedActivePower *data) {
  EXI_DEBUG1("Start to XML: ActivePower\n");
  emberExiPrintfLine("<ActivePower");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</ActivePower>");
  EXI_DEBUG1("End to XML: ActivePower\n");
}




void emberExiPrintStructActiveProjectionReadingListLink(EmberExiGeneratedActiveProjectionReadingListLink *data)
{
  emExiPrintStruct(emberExiActiveProjectionReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveProjectionReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveProjectionReadingListLink(EmberExiGeneratedActiveProjectionReadingListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveProjectionReadingListLink\n");
  emberExiPrintfLine("<ActiveProjectionReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveProjectionReadingListLink>");
  EXI_DEBUG1("End to XML: ActiveProjectionReadingListLink\n");
}




void emberExiPrintStructActiveSupplyInterruptionOverrideListLink(EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data)
{
  emExiPrintStruct(emberExiActiveSupplyInterruptionOverrideListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveSupplyInterruptionOverrideListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveSupplyInterruptionOverrideListLink(EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveSupplyInterruptionOverrideListLink\n");
  emberExiPrintfLine("<ActiveSupplyInterruptionOverrideListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveSupplyInterruptionOverrideListLink>");
  EXI_DEBUG1("End to XML: ActiveSupplyInterruptionOverrideListLink\n");
}




void emberExiPrintStructActiveTargetReadingListLink(EmberExiGeneratedActiveTargetReadingListLink *data)
{
  emExiPrintStruct(emberExiActiveTargetReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveTargetReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveTargetReadingListLink(EmberExiGeneratedActiveTargetReadingListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveTargetReadingListLink\n");
  emberExiPrintfLine("<ActiveTargetReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveTargetReadingListLink>");
  EXI_DEBUG1("End to XML: ActiveTargetReadingListLink\n");
}




void emberExiPrintStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data)
{
  emExiPrintStruct(emberExiActiveTextMessageListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveTextMessageListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveTextMessageListLink\n");
  emberExiPrintfLine("<ActiveTextMessageListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveTextMessageListLink>");
  EXI_DEBUG1("End to XML: ActiveTextMessageListLink\n");
}




void emberExiPrintStructActiveTimeTariffIntervalListLink(EmberExiGeneratedActiveTimeTariffIntervalListLink *data)
{
  emExiPrintStruct(emberExiActiveTimeTariffIntervalListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveTimeTariffIntervalListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveTimeTariffIntervalListLink(EmberExiGeneratedActiveTimeTariffIntervalListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveTimeTariffIntervalListLink\n");
  emberExiPrintfLine("<ActiveTimeTariffIntervalListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveTimeTariffIntervalListLink>");
  EXI_DEBUG1("End to XML: ActiveTimeTariffIntervalListLink\n");
}




void emberExiPrintStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data)
{
  emExiPrintStruct(emberExiApplianceLoadReductionStructData,
                   (int8u *) data,
                   0,
                   "ApplianceLoadReduction",
                   emberExiQnames);
}


void emberExiToXmlStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data) {
  EXI_DEBUG1("Start to XML: ApplianceLoadReduction\n");
  emberExiPrintfLine("<ApplianceLoadReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("</ApplianceLoadReduction>");
  EXI_DEBUG1("End to XML: ApplianceLoadReduction\n");
}




void emberExiPrintStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data)
{
  emExiPrintStruct(emberExiAppliedTargetReductionStructData,
                   (int8u *) data,
                   0,
                   "AppliedTargetReduction",
                   emberExiQnames);
}


void emberExiToXmlStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data) {
  EXI_DEBUG1("Start to XML: AppliedTargetReduction\n");
  emberExiPrintfLine("<AppliedTargetReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</AppliedTargetReduction>");
  EXI_DEBUG1("End to XML: AppliedTargetReduction\n");
}




void emberExiPrintStructAssociatedDERProgramListLink(EmberExiGeneratedAssociatedDERProgramListLink *data)
{
  emExiPrintStruct(emberExiAssociatedDERProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "AssociatedDERProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructAssociatedDERProgramListLink(EmberExiGeneratedAssociatedDERProgramListLink *data) {
  EXI_DEBUG1("Start to XML: AssociatedDERProgramListLink\n");
  emberExiPrintfLine("<AssociatedDERProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</AssociatedDERProgramListLink>");
  EXI_DEBUG1("End to XML: AssociatedDERProgramListLink\n");
}




void emberExiPrintStructAssociatedUsagePointLink(EmberExiGeneratedAssociatedUsagePointLink *data)
{
  emExiPrintStruct(emberExiAssociatedUsagePointLinkStructData,
                   (int8u *) data,
                   0,
                   "AssociatedUsagePointLink",
                   emberExiQnames);
}


void emberExiToXmlStructAssociatedUsagePointLink(EmberExiGeneratedAssociatedUsagePointLink *data) {
  EXI_DEBUG1("Start to XML: AssociatedUsagePointLink\n");
  emberExiPrintfLine("<AssociatedUsagePointLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</AssociatedUsagePointLink>");
  EXI_DEBUG1("End to XML: AssociatedUsagePointLink\n");
}




void emberExiPrintStructBillingMeterReadingBase(EmberExiGeneratedBillingMeterReadingBase *data)
{
  emExiPrintStruct(emberExiBillingMeterReadingBaseStructData,
                   (int8u *) data,
                   0,
                   "BillingMeterReadingBase",
                   emberExiQnames);
}


void emberExiToXmlStructBillingMeterReadingBase(EmberExiGeneratedBillingMeterReadingBase *data) {
  EXI_DEBUG1("Start to XML: BillingMeterReadingBase\n");
  emberExiPrintfLine("<BillingMeterReadingBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      emberExiToXmlStructBillingReadingSetListLink((data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink_option));
  emberExiPrintfLine("</BillingMeterReadingBase>");
  EXI_DEBUG1("End to XML: BillingMeterReadingBase\n");
}




void emberExiPrintStructBillingPeriod(EmberExiGeneratedBillingPeriod *data)
{
  emExiPrintStruct(emberExiBillingPeriodStructData,
                   (int8u *) data,
                   0,
                   "BillingPeriod",
                   emberExiQnames);
}


void emberExiToXmlStructBillingPeriod(EmberExiGeneratedBillingPeriod *data) {
  EXI_DEBUG1("Start to XML: BillingPeriod\n");
  emberExiPrintfLine("<BillingPeriod");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <billLastPeriod>%d</billLastPeriod>", data->billLastPeriod_option);
  emberExiPrintfLine("  <billToDate>%d</billToDate>", data->billToDate_option);
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <statusTimeStamp>%d</statusTimeStamp>", data->statusTimeStamp_option);
  emberExiPrintfLine("</BillingPeriod>");
  EXI_DEBUG1("End to XML: BillingPeriod\n");
}




void emberExiPrintStructBillingPeriodList(EmberExiGeneratedBillingPeriodList *data)
{
  emExiPrintStruct(emberExiBillingPeriodListStructData,
                   (int8u *) data,
                   0,
                   "BillingPeriodList",
                   emberExiQnames);
}


void emberExiToXmlStructBillingPeriodList(EmberExiGeneratedBillingPeriodList *data) {
  EXI_DEBUG1("Start to XML: BillingPeriodList\n");
  emberExiPrintfLine("<BillingPeriodList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->BillingPeriod_count; i++ )
    if ( data->BillingPeriod_array != NULL )
      emberExiToXmlStructBillingPeriod(&(data->BillingPeriod_array[i]));
  }
  emberExiPrintfLine("</BillingPeriodList>");
  EXI_DEBUG1("End to XML: BillingPeriodList\n");
}




void emberExiPrintStructBillingPeriodListLink(EmberExiGeneratedBillingPeriodListLink *data)
{
  emExiPrintStruct(emberExiBillingPeriodListLinkStructData,
                   (int8u *) data,
                   0,
                   "BillingPeriodListLink",
                   emberExiQnames);
}


void emberExiToXmlStructBillingPeriodListLink(EmberExiGeneratedBillingPeriodListLink *data) {
  EXI_DEBUG1("Start to XML: BillingPeriodListLink\n");
  emberExiPrintfLine("<BillingPeriodListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</BillingPeriodListLink>");
  EXI_DEBUG1("End to XML: BillingPeriodListLink\n");
}




void emberExiPrintStructBillingReading(EmberExiGeneratedBillingReading *data)
{
  emExiPrintStruct(emberExiBillingReadingStructData,
                   (int8u *) data,
                   0,
                   "BillingReading",
                   emberExiQnames);
}


void emberExiToXmlStructBillingReading(EmberExiGeneratedBillingReading *data) {
  EXI_DEBUG1("Start to XML: BillingReading\n");
  emberExiPrintfLine("<BillingReading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  emberExiPrintfLine("  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      emberExiPrintfLine("%2x", data->qualityFlags_option.bytes[i]);
  }
  emberExiPrintfLine("</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod_option));
  emberExiPrintfLine("  <touTier>%d</touTier>", data->touTier_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  { int16u i;
    for ( i=0; i<data->Charge_count; i++ )
    if ( data->Charge_array != NULL )
      emberExiToXmlStructCharge(&(data->Charge_array[i]));
  }
  emberExiPrintfLine("</BillingReading>");
  EXI_DEBUG1("End to XML: BillingReading\n");
}




void emberExiPrintStructBillingReadingList(EmberExiGeneratedBillingReadingList *data)
{
  emExiPrintStruct(emberExiBillingReadingListStructData,
                   (int8u *) data,
                   0,
                   "BillingReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructBillingReadingList(EmberExiGeneratedBillingReadingList *data) {
  EXI_DEBUG1("Start to XML: BillingReadingList\n");
  emberExiPrintfLine("<BillingReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->BillingReading_count; i++ )
    if ( data->BillingReading_array != NULL )
      emberExiToXmlStructBillingReading(&(data->BillingReading_array[i]));
  }
  emberExiPrintfLine("</BillingReadingList>");
  EXI_DEBUG1("End to XML: BillingReadingList\n");
}




void emberExiPrintStructBillingReadingListLink(EmberExiGeneratedBillingReadingListLink *data)
{
  emExiPrintStruct(emberExiBillingReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "BillingReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructBillingReadingListLink(EmberExiGeneratedBillingReadingListLink *data) {
  EXI_DEBUG1("Start to XML: BillingReadingListLink\n");
  emberExiPrintfLine("<BillingReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</BillingReadingListLink>");
  EXI_DEBUG1("End to XML: BillingReadingListLink\n");
}




void emberExiPrintStructBillingReadingSet(EmberExiGeneratedBillingReadingSet *data)
{
  emExiPrintStruct(emberExiBillingReadingSetStructData,
                   (int8u *) data,
                   0,
                   "BillingReadingSet",
                   emberExiQnames);
}


void emberExiToXmlStructBillingReadingSet(EmberExiGeneratedBillingReadingSet *data) {
  EXI_DEBUG1("Start to XML: BillingReadingSet\n");
  emberExiPrintfLine("<BillingReadingSet");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod));
    if ( data->BillingReadingListLink_option != NULL )
      emberExiToXmlStructBillingReadingListLink((data->BillingReadingListLink_option));
  emberExiPrintfLine("</BillingReadingSet>");
  EXI_DEBUG1("End to XML: BillingReadingSet\n");
}




void emberExiPrintStructBillingReadingSetList(EmberExiGeneratedBillingReadingSetList *data)
{
  emExiPrintStruct(emberExiBillingReadingSetListStructData,
                   (int8u *) data,
                   0,
                   "BillingReadingSetList",
                   emberExiQnames);
}


void emberExiToXmlStructBillingReadingSetList(EmberExiGeneratedBillingReadingSetList *data) {
  EXI_DEBUG1("Start to XML: BillingReadingSetList\n");
  emberExiPrintfLine("<BillingReadingSetList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->BillingReadingSet_count; i++ )
    if ( data->BillingReadingSet_array != NULL )
      emberExiToXmlStructBillingReadingSet(&(data->BillingReadingSet_array[i]));
  }
  emberExiPrintfLine("</BillingReadingSetList>");
  EXI_DEBUG1("End to XML: BillingReadingSetList\n");
}




void emberExiPrintStructBillingReadingSetListLink(EmberExiGeneratedBillingReadingSetListLink *data)
{
  emExiPrintStruct(emberExiBillingReadingSetListLinkStructData,
                   (int8u *) data,
                   0,
                   "BillingReadingSetListLink",
                   emberExiQnames);
}


void emberExiToXmlStructBillingReadingSetListLink(EmberExiGeneratedBillingReadingSetListLink *data) {
  EXI_DEBUG1("Start to XML: BillingReadingSetListLink\n");
  emberExiPrintfLine("<BillingReadingSetListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</BillingReadingSetListLink>");
  EXI_DEBUG1("End to XML: BillingReadingSetListLink\n");
}




void emberExiPrintStructCharge(EmberExiGeneratedCharge *data)
{
  emExiPrintStruct(emberExiChargeStructData,
                   (int8u *) data,
                   0,
                   "Charge",
                   emberExiQnames);
}


void emberExiToXmlStructCharge(EmberExiGeneratedCharge *data) {
  EXI_DEBUG1("Start to XML: Charge\n");
  emberExiPrintfLine("<Charge");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <kind>%d</kind>", data->kind_option);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</Charge>");
  EXI_DEBUG1("End to XML: Charge\n");
}




void emberExiPrintStructCondition(EmberExiGeneratedCondition *data)
{
  emExiPrintStruct(emberExiConditionStructData,
                   (int8u *) data,
                   0,
                   "Condition",
                   emberExiQnames);
}


void emberExiToXmlStructCondition(EmberExiGeneratedCondition *data) {
  EXI_DEBUG1("Start to XML: Condition\n");
  emberExiPrintfLine("<Condition");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <attributeIdentifier>%d</attributeIdentifier>", data->attributeIdentifier);
  emberExiPrintfLine("  <lowerThreshold>%d</lowerThreshold>", data->lowerThreshold);
  emberExiPrintfLine("  <upperThreshold>%d</upperThreshold>", data->upperThreshold);
  emberExiPrintfLine("</Condition>");
  EXI_DEBUG1("End to XML: Condition\n");
}




void emberExiPrintStructConfiguration(EmberExiGeneratedConfiguration *data)
{
  emExiPrintStruct(emberExiConfigurationStructData,
                   (int8u *) data,
                   0,
                   "Configuration",
                   emberExiQnames);
}


void emberExiToXmlStructConfiguration(EmberExiGeneratedConfiguration *data) {
  EXI_DEBUG1("Start to XML: Configuration\n");
  emberExiPrintfLine("<Configuration");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentLocale>%s</currentLocale>", data->currentLocale);
    if ( data->PowerConfiguration_option != NULL )
      emberExiToXmlStructPowerConfiguration((data->PowerConfiguration_option));
    if ( data->PriceResponseCfgListLink_option != NULL )
      emberExiToXmlStructPriceResponseCfgListLink((data->PriceResponseCfgListLink_option));
    if ( data->TimeConfiguration_option != NULL )
      emberExiToXmlStructTimeConfiguration((data->TimeConfiguration_option));
  emberExiPrintfLine("  <userDeviceName>%s</userDeviceName>", data->userDeviceName);
  emberExiPrintfLine("</Configuration>");
  EXI_DEBUG1("End to XML: Configuration\n");
}




void emberExiPrintStructConfigurationLink(EmberExiGeneratedConfigurationLink *data)
{
  emExiPrintStruct(emberExiConfigurationLinkStructData,
                   (int8u *) data,
                   0,
                   "ConfigurationLink",
                   emberExiQnames);
}


void emberExiToXmlStructConfigurationLink(EmberExiGeneratedConfigurationLink *data) {
  EXI_DEBUG1("Start to XML: ConfigurationLink\n");
  emberExiPrintfLine("<ConfigurationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ConfigurationLink>");
  EXI_DEBUG1("End to XML: ConfigurationLink\n");
}




void emberExiPrintStructConsumptionTariffInterval(EmberExiGeneratedConsumptionTariffInterval *data)
{
  emExiPrintStruct(emberExiConsumptionTariffIntervalStructData,
                   (int8u *) data,
                   0,
                   "ConsumptionTariffInterval",
                   emberExiQnames);
}


void emberExiToXmlStructConsumptionTariffInterval(EmberExiGeneratedConsumptionTariffInterval *data) {
  EXI_DEBUG1("Start to XML: ConsumptionTariffInterval\n");
  emberExiPrintfLine("<ConsumptionTariffInterval");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock);
  { int16u i;
    for ( i=0; i<data->EnvironmentalCost_count; i++ )
    if ( data->EnvironmentalCost_array != NULL )
      emberExiToXmlStructEnvironmentalCost(&(data->EnvironmentalCost_array[i]));
  }
  emberExiPrintfLine("  <price>%d</price>", data->price_option);
  emberExiPrintfLine("  <startValue>%d</startValue>", data->startValue);
  emberExiPrintfLine("</ConsumptionTariffInterval>");
  EXI_DEBUG1("End to XML: ConsumptionTariffInterval\n");
}




void emberExiPrintStructConsumptionTariffIntervalList(EmberExiGeneratedConsumptionTariffIntervalList *data)
{
  emExiPrintStruct(emberExiConsumptionTariffIntervalListStructData,
                   (int8u *) data,
                   0,
                   "ConsumptionTariffIntervalList",
                   emberExiQnames);
}


void emberExiToXmlStructConsumptionTariffIntervalList(EmberExiGeneratedConsumptionTariffIntervalList *data) {
  EXI_DEBUG1("Start to XML: ConsumptionTariffIntervalList\n");
  emberExiPrintfLine("<ConsumptionTariffIntervalList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ConsumptionTariffInterval_count; i++ )
    if ( data->ConsumptionTariffInterval_array != NULL )
      emberExiToXmlStructConsumptionTariffInterval(&(data->ConsumptionTariffInterval_array[i]));
  }
  emberExiPrintfLine("</ConsumptionTariffIntervalList>");
  EXI_DEBUG1("End to XML: ConsumptionTariffIntervalList\n");
}




void emberExiPrintStructConsumptionTariffIntervalListLink(EmberExiGeneratedConsumptionTariffIntervalListLink *data)
{
  emExiPrintStruct(emberExiConsumptionTariffIntervalListLinkStructData,
                   (int8u *) data,
                   0,
                   "ConsumptionTariffIntervalListLink",
                   emberExiQnames);
}


void emberExiToXmlStructConsumptionTariffIntervalListLink(EmberExiGeneratedConsumptionTariffIntervalListLink *data) {
  EXI_DEBUG1("Start to XML: ConsumptionTariffIntervalListLink\n");
  emberExiPrintfLine("<ConsumptionTariffIntervalListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ConsumptionTariffIntervalListLink>");
  EXI_DEBUG1("End to XML: ConsumptionTariffIntervalListLink\n");
}




void emberExiPrintStructCreditRegister(EmberExiGeneratedCreditRegister *data)
{
  emExiPrintStruct(emberExiCreditRegisterStructData,
                   (int8u *) data,
                   0,
                   "CreditRegister",
                   emberExiQnames);
}


void emberExiToXmlStructCreditRegister(EmberExiGeneratedCreditRegister *data) {
  EXI_DEBUG1("Start to XML: CreditRegister\n");
  emberExiPrintfLine("<CreditRegister");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->creditAmount != NULL )
      emberExiToXmlStructAccountingUnit((data->creditAmount));
  emberExiPrintfLine("  <creditType>%d</creditType>", data->creditType_option);
  emberExiPrintfLine("  <effectiveTime>%d</effectiveTime>", data->effectiveTime);
  emberExiPrintfLine("  <token>%s</token>", data->token);
  emberExiPrintfLine("</CreditRegister>");
  EXI_DEBUG1("End to XML: CreditRegister\n");
}




void emberExiPrintStructCreditRegisterList(EmberExiGeneratedCreditRegisterList *data)
{
  emExiPrintStruct(emberExiCreditRegisterListStructData,
                   (int8u *) data,
                   0,
                   "CreditRegisterList",
                   emberExiQnames);
}


void emberExiToXmlStructCreditRegisterList(EmberExiGeneratedCreditRegisterList *data) {
  EXI_DEBUG1("Start to XML: CreditRegisterList\n");
  emberExiPrintfLine("<CreditRegisterList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->CreditRegister_count; i++ )
    if ( data->CreditRegister_array != NULL )
      emberExiToXmlStructCreditRegister(&(data->CreditRegister_array[i]));
  }
  emberExiPrintfLine("</CreditRegisterList>");
  EXI_DEBUG1("End to XML: CreditRegisterList\n");
}




void emberExiPrintStructCreditRegisterListLink(EmberExiGeneratedCreditRegisterListLink *data)
{
  emExiPrintStruct(emberExiCreditRegisterListLinkStructData,
                   (int8u *) data,
                   0,
                   "CreditRegisterListLink",
                   emberExiQnames);
}


void emberExiToXmlStructCreditRegisterListLink(EmberExiGeneratedCreditRegisterListLink *data) {
  EXI_DEBUG1("Start to XML: CreditRegisterListLink\n");
  emberExiPrintfLine("<CreditRegisterListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</CreditRegisterListLink>");
  EXI_DEBUG1("End to XML: CreditRegisterListLink\n");
}




void emberExiPrintStructCreditTypeChange(EmberExiGeneratedCreditTypeChange *data)
{
  emExiPrintStruct(emberExiCreditTypeChangeStructData,
                   (int8u *) data,
                   0,
                   "CreditTypeChange",
                   emberExiQnames);
}


void emberExiToXmlStructCreditTypeChange(EmberExiGeneratedCreditTypeChange *data) {
  EXI_DEBUG1("Start to XML: CreditTypeChange\n");
  emberExiPrintfLine("<CreditTypeChange");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <newType>%d</newType>", data->newType);
  emberExiPrintfLine("  <startTime>%d</startTime>", data->startTime);
  emberExiPrintfLine("</CreditTypeChange>");
  EXI_DEBUG1("End to XML: CreditTypeChange\n");
}




void emberExiPrintStructCurrentDERProgramLink(EmberExiGeneratedCurrentDERProgramLink *data)
{
  emExiPrintStruct(emberExiCurrentDERProgramLinkStructData,
                   (int8u *) data,
                   0,
                   "CurrentDERProgramLink",
                   emberExiQnames);
}


void emberExiToXmlStructCurrentDERProgramLink(EmberExiGeneratedCurrentDERProgramLink *data) {
  EXI_DEBUG1("Start to XML: CurrentDERProgramLink\n");
  emberExiPrintfLine("<CurrentDERProgramLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</CurrentDERProgramLink>");
  EXI_DEBUG1("End to XML: CurrentDERProgramLink\n");
}




void emberExiPrintStructCurveData(EmberExiGeneratedCurveData *data)
{
  emExiPrintStruct(emberExiCurveDataStructData,
                   (int8u *) data,
                   0,
                   "CurveData",
                   emberExiQnames);
}


void emberExiToXmlStructCurveData(EmberExiGeneratedCurveData *data) {
  EXI_DEBUG1("Start to XML: CurveData\n");
  emberExiPrintfLine("<CurveData");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <excitation>%d</excitation>", data->excitation_option);
  emberExiPrintfLine("  <xvalue>%d</xvalue>", data->xvalue);
  emberExiPrintfLine("  <yvalue>%d</yvalue>", data->yvalue);
  emberExiPrintfLine("</CurveData>");
  EXI_DEBUG1("End to XML: CurveData\n");
}




void emberExiPrintStructCurvePairType(EmberExiGeneratedCurvePairType *data)
{
  emExiPrintStruct(emberExiCurvePairTypeStructData,
                   (int8u *) data,
                   0,
                   "CurvePairType",
                   emberExiQnames);
}


void emberExiToXmlStructCurvePairType(EmberExiGeneratedCurvePairType *data) {
  EXI_DEBUG1("Start to XML: CurvePairType\n");
  emberExiPrintfLine("<CurvePairType");
  emberExiPrintfLine(">");
    if ( data->lowerLimit != NULL )
      emberExiToXmlStructDERCurveLink((data->lowerLimit));
    if ( data->upperLimit != NULL )
      emberExiToXmlStructDERCurveLink((data->upperLimit));
  emberExiPrintfLine("</CurvePairType>");
  EXI_DEBUG1("End to XML: CurvePairType\n");
}




void emberExiPrintStructCustomerAccount(EmberExiGeneratedCustomerAccount *data)
{
  emExiPrintStruct(emberExiCustomerAccountStructData,
                   (int8u *) data,
                   0,
                   "CustomerAccount",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAccount(EmberExiGeneratedCustomerAccount *data) {
  EXI_DEBUG1("Start to XML: CustomerAccount\n");
  emberExiPrintfLine("<CustomerAccount");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <currency>%d</currency>", data->currency);
  emberExiPrintfLine("  <customerAccount>%s</customerAccount>", data->customerAccount_option);
    if ( data->CustomerAgreementListLink_option != NULL )
      emberExiToXmlStructCustomerAgreementListLink((data->CustomerAgreementListLink_option));
  emberExiPrintfLine("  <customerName>%s</customerName>", data->customerName_option);
  emberExiPrintfLine("  <pricePowerOfTenMultiplier>%d</pricePowerOfTenMultiplier>", data->pricePowerOfTenMultiplier);
    if ( data->ServiceSupplierLink_option != NULL )
      emberExiToXmlStructServiceSupplierLink((data->ServiceSupplierLink_option));
  emberExiPrintfLine("</CustomerAccount>");
  EXI_DEBUG1("End to XML: CustomerAccount\n");
}




void emberExiPrintStructCustomerAccountList(EmberExiGeneratedCustomerAccountList *data)
{
  emExiPrintStruct(emberExiCustomerAccountListStructData,
                   (int8u *) data,
                   0,
                   "CustomerAccountList",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAccountList(EmberExiGeneratedCustomerAccountList *data) {
  EXI_DEBUG1("Start to XML: CustomerAccountList\n");
  emberExiPrintfLine("<CustomerAccountList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->CustomerAccount_count; i++ )
    if ( data->CustomerAccount_array != NULL )
      emberExiToXmlStructCustomerAccount(&(data->CustomerAccount_array[i]));
  }
  emberExiPrintfLine("</CustomerAccountList>");
  EXI_DEBUG1("End to XML: CustomerAccountList\n");
}




void emberExiPrintStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data)
{
  emExiPrintStruct(emberExiCustomerAccountListLinkStructData,
                   (int8u *) data,
                   0,
                   "CustomerAccountListLink",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data) {
  EXI_DEBUG1("Start to XML: CustomerAccountListLink\n");
  emberExiPrintfLine("<CustomerAccountListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</CustomerAccountListLink>");
  EXI_DEBUG1("End to XML: CustomerAccountListLink\n");
}




void emberExiPrintStructCustomerAgreement(EmberExiGeneratedCustomerAgreement *data)
{
  emExiPrintStruct(emberExiCustomerAgreementStructData,
                   (int8u *) data,
                   0,
                   "CustomerAgreement",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAgreement(EmberExiGeneratedCustomerAgreement *data) {
  EXI_DEBUG1("Start to XML: CustomerAgreement\n");
  emberExiPrintfLine("<CustomerAgreement");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      emberExiToXmlStructActiveBillingPeriodListLink((data->ActiveBillingPeriodListLink_option));
    if ( data->ActiveProjectionReadingListLink_option != NULL )
      emberExiToXmlStructActiveProjectionReadingListLink((data->ActiveProjectionReadingListLink_option));
    if ( data->ActiveTargetReadingListLink_option != NULL )
      emberExiToXmlStructActiveTargetReadingListLink((data->ActiveTargetReadingListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      emberExiToXmlStructBillingPeriodListLink((data->BillingPeriodListLink_option));
    if ( data->HistoricalReadingListLink_option != NULL )
      emberExiToXmlStructHistoricalReadingListLink((data->HistoricalReadingListLink_option));
    if ( data->PrepaymentLink_option != NULL )
      emberExiToXmlStructPrepaymentLink((data->PrepaymentLink_option));
    if ( data->ProjectionReadingListLink_option != NULL )
      emberExiToXmlStructProjectionReadingListLink((data->ProjectionReadingListLink_option));
  emberExiPrintfLine("  <serviceAccount>%s</serviceAccount>", data->serviceAccount_option);
  emberExiPrintfLine("  <serviceLocation>%s</serviceLocation>", data->serviceLocation_option);
    if ( data->TargetReadingListLink_option != NULL )
      emberExiToXmlStructTargetReadingListLink((data->TargetReadingListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      emberExiToXmlStructTariffProfileLink((data->TariffProfileLink_option));
    if ( data->UsagePointLink_option != NULL )
      emberExiToXmlStructUsagePointLink((data->UsagePointLink_option));
  emberExiPrintfLine("</CustomerAgreement>");
  EXI_DEBUG1("End to XML: CustomerAgreement\n");
}




void emberExiPrintStructCustomerAgreementList(EmberExiGeneratedCustomerAgreementList *data)
{
  emExiPrintStruct(emberExiCustomerAgreementListStructData,
                   (int8u *) data,
                   0,
                   "CustomerAgreementList",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAgreementList(EmberExiGeneratedCustomerAgreementList *data) {
  EXI_DEBUG1("Start to XML: CustomerAgreementList\n");
  emberExiPrintfLine("<CustomerAgreementList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->CustomerAgreement_count; i++ )
    if ( data->CustomerAgreement_array != NULL )
      emberExiToXmlStructCustomerAgreement(&(data->CustomerAgreement_array[i]));
  }
  emberExiPrintfLine("</CustomerAgreementList>");
  EXI_DEBUG1("End to XML: CustomerAgreementList\n");
}




void emberExiPrintStructCustomerAgreementListLink(EmberExiGeneratedCustomerAgreementListLink *data)
{
  emExiPrintStruct(emberExiCustomerAgreementListLinkStructData,
                   (int8u *) data,
                   0,
                   "CustomerAgreementListLink",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAgreementListLink(EmberExiGeneratedCustomerAgreementListLink *data) {
  EXI_DEBUG1("Start to XML: CustomerAgreementListLink\n");
  emberExiPrintfLine("<CustomerAgreementListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</CustomerAgreementListLink>");
  EXI_DEBUG1("End to XML: CustomerAgreementListLink\n");
}




void emberExiPrintStructDER(EmberExiGeneratedDER *data)
{
  emExiPrintStruct(emberExiDERStructData,
                   (int8u *) data,
                   0,
                   "DER",
                   emberExiQnames);
}


void emberExiToXmlStructDER(EmberExiGeneratedDER *data) {
  EXI_DEBUG1("Start to XML: DER\n");
  emberExiPrintfLine("<DER");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->AssociatedDERProgramListLink_option != NULL )
      emberExiToXmlStructAssociatedDERProgramListLink((data->AssociatedDERProgramListLink_option));
    if ( data->AssociatedUsagePointLink_option != NULL )
      emberExiToXmlStructAssociatedUsagePointLink((data->AssociatedUsagePointLink_option));
    if ( data->CurrentDERProgramLink_option != NULL )
      emberExiToXmlStructCurrentDERProgramLink((data->CurrentDERProgramLink_option));
    if ( data->DERAvailabilityLink_option != NULL )
      emberExiToXmlStructDERAvailabilityLink((data->DERAvailabilityLink_option));
    if ( data->DERCapabilityLink_option != NULL )
      emberExiToXmlStructDERCapabilityLink((data->DERCapabilityLink_option));
    if ( data->DERSettingsLink_option != NULL )
      emberExiToXmlStructDERSettingsLink((data->DERSettingsLink_option));
    if ( data->DERStatusLink_option != NULL )
      emberExiToXmlStructDERStatusLink((data->DERStatusLink_option));
  emberExiPrintfLine("</DER>");
  EXI_DEBUG1("End to XML: DER\n");
}




void emberExiPrintStructDERAvailabilityLink(EmberExiGeneratedDERAvailabilityLink *data)
{
  emExiPrintStruct(emberExiDERAvailabilityLinkStructData,
                   (int8u *) data,
                   0,
                   "DERAvailabilityLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERAvailabilityLink(EmberExiGeneratedDERAvailabilityLink *data) {
  EXI_DEBUG1("Start to XML: DERAvailabilityLink\n");
  emberExiPrintfLine("<DERAvailabilityLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERAvailabilityLink>");
  EXI_DEBUG1("End to XML: DERAvailabilityLink\n");
}




void emberExiPrintStructDERCapabilityLink(EmberExiGeneratedDERCapabilityLink *data)
{
  emExiPrintStruct(emberExiDERCapabilityLinkStructData,
                   (int8u *) data,
                   0,
                   "DERCapabilityLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERCapabilityLink(EmberExiGeneratedDERCapabilityLink *data) {
  EXI_DEBUG1("Start to XML: DERCapabilityLink\n");
  emberExiPrintfLine("<DERCapabilityLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERCapabilityLink>");
  EXI_DEBUG1("End to XML: DERCapabilityLink\n");
}




void emberExiPrintStructDERControl(EmberExiGeneratedDERControl *data)
{
  emExiPrintStruct(emberExiDERControlStructData,
                   (int8u *) data,
                   0,
                   "DERControl",
                   emberExiQnames);
}


void emberExiToXmlStructDERControl(EmberExiGeneratedDERControl *data) {
  EXI_DEBUG1("Start to XML: DERControl\n");
  emberExiPrintfLine("<DERControl");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->DERControlBase != NULL )
      emberExiToXmlStructDERControlBase((data->DERControlBase));
  emberExiPrintfLine("</DERControl>");
  EXI_DEBUG1("End to XML: DERControl\n");
}




void emberExiPrintStructDERControlBase(EmberExiGeneratedDERControlBase *data)
{
  emExiPrintStruct(emberExiDERControlBaseStructData,
                   (int8u *) data,
                   0,
                   "DERControlBase",
                   emberExiQnames);
}


void emberExiToXmlStructDERControlBase(EmberExiGeneratedDERControlBase *data) {
  EXI_DEBUG1("Start to XML: DERControlBase\n");
  emberExiPrintfLine("<DERControlBase");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <opModFixedFlow>%d</opModFixedFlow>", data->opModFixedFlow_option);
    if ( data->opModFixedPF_option != NULL )
      emberExiToXmlStructFixedPowerFactor((data->opModFixedPF_option));
    if ( data->opModFixedVAr_option != NULL )
      emberExiToXmlStructFixedVAr((data->opModFixedVAr_option));
  emberExiPrintfLine("  <opModFixedW>%d</opModFixedW>", data->opModFixedW_option);
    if ( data->opModFreqWatt_option != NULL )
      emberExiToXmlStructDERCurveLink((data->opModFreqWatt_option));
    if ( data->opModHVRT_option != NULL )
      emberExiToXmlStructCurvePairType((data->opModHVRT_option));
    if ( data->opModLVRT_option != NULL )
      emberExiToXmlStructCurvePairType((data->opModLVRT_option));
    if ( data->opModVoltVAr_option != NULL )
      emberExiToXmlStructDERCurveLink((data->opModVoltVAr_option));
    if ( data->opModVoltWatt_option != NULL )
      emberExiToXmlStructDERCurveLink((data->opModVoltWatt_option));
    if ( data->opModWattPF_option != NULL )
      emberExiToXmlStructDERCurveLink((data->opModWattPF_option));
  emberExiPrintfLine("  <rampTms>%d</rampTms>", data->rampTms_option);
  emberExiPrintfLine("</DERControlBase>");
  EXI_DEBUG1("End to XML: DERControlBase\n");
}




void emberExiPrintStructDERControlList(EmberExiGeneratedDERControlList *data)
{
  emExiPrintStruct(emberExiDERControlListStructData,
                   (int8u *) data,
                   0,
                   "DERControlList",
                   emberExiQnames);
}


void emberExiToXmlStructDERControlList(EmberExiGeneratedDERControlList *data) {
  EXI_DEBUG1("Start to XML: DERControlList\n");
  emberExiPrintfLine("<DERControlList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->DERControl_count; i++ )
    if ( data->DERControl_array != NULL )
      emberExiToXmlStructDERControl(&(data->DERControl_array[i]));
  }
  emberExiPrintfLine("</DERControlList>");
  EXI_DEBUG1("End to XML: DERControlList\n");
}




void emberExiPrintStructDERControlListLink(EmberExiGeneratedDERControlListLink *data)
{
  emExiPrintStruct(emberExiDERControlListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERControlListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERControlListLink(EmberExiGeneratedDERControlListLink *data) {
  EXI_DEBUG1("Start to XML: DERControlListLink\n");
  emberExiPrintfLine("<DERControlListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERControlListLink>");
  EXI_DEBUG1("End to XML: DERControlListLink\n");
}




void emberExiPrintStructDERCurve(EmberExiGeneratedDERCurve *data)
{
  emExiPrintStruct(emberExiDERCurveStructData,
                   (int8u *) data,
                   0,
                   "DERCurve",
                   emberExiQnames);
}


void emberExiToXmlStructDERCurve(EmberExiGeneratedDERCurve *data) {
  EXI_DEBUG1("Start to XML: DERCurve\n");
  emberExiPrintfLine("<DERCurve");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
  { int16u i;
    for ( i=0; i<data->CurveData_count; i++ )
    if ( data->CurveData_array != NULL )
      emberExiToXmlStructCurveData(&(data->CurveData_array[i]));
  }
  emberExiPrintfLine("  <curveType>%d</curveType>", data->curveType);
  emberExiPrintfLine("  <rampDecTms>%d</rampDecTms>", data->rampDecTms_option);
  emberExiPrintfLine("  <rampIncTms>%d</rampIncTms>", data->rampIncTms_option);
  emberExiPrintfLine("  <rampPT1Tms>%d</rampPT1Tms>", data->rampPT1Tms_option);
  emberExiPrintfLine("  <xMultiplier>%d</xMultiplier>", data->xMultiplier);
  emberExiPrintfLine("  <yMultiplier>%d</yMultiplier>", data->yMultiplier);
  emberExiPrintfLine("  <yRefType>%d</yRefType>", data->yRefType);
  emberExiPrintfLine("</DERCurve>");
  EXI_DEBUG1("End to XML: DERCurve\n");
}




void emberExiPrintStructDERCurveLink(EmberExiGeneratedDERCurveLink *data)
{
  emExiPrintStruct(emberExiDERCurveLinkStructData,
                   (int8u *) data,
                   0,
                   "DERCurveLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERCurveLink(EmberExiGeneratedDERCurveLink *data) {
  EXI_DEBUG1("Start to XML: DERCurveLink\n");
  emberExiPrintfLine("<DERCurveLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERCurveLink>");
  EXI_DEBUG1("End to XML: DERCurveLink\n");
}




void emberExiPrintStructDERCurveList(EmberExiGeneratedDERCurveList *data)
{
  emExiPrintStruct(emberExiDERCurveListStructData,
                   (int8u *) data,
                   0,
                   "DERCurveList",
                   emberExiQnames);
}


void emberExiToXmlStructDERCurveList(EmberExiGeneratedDERCurveList *data) {
  EXI_DEBUG1("Start to XML: DERCurveList\n");
  emberExiPrintfLine("<DERCurveList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->DERCurve_count; i++ )
    if ( data->DERCurve_array != NULL )
      emberExiToXmlStructDERCurve(&(data->DERCurve_array[i]));
  }
  emberExiPrintfLine("</DERCurveList>");
  EXI_DEBUG1("End to XML: DERCurveList\n");
}




void emberExiPrintStructDERCurveListLink(EmberExiGeneratedDERCurveListLink *data)
{
  emExiPrintStruct(emberExiDERCurveListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERCurveListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERCurveListLink(EmberExiGeneratedDERCurveListLink *data) {
  EXI_DEBUG1("Start to XML: DERCurveListLink\n");
  emberExiPrintfLine("<DERCurveListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERCurveListLink>");
  EXI_DEBUG1("End to XML: DERCurveListLink\n");
}




void emberExiPrintStructDERList(EmberExiGeneratedDERList *data)
{
  emExiPrintStruct(emberExiDERListStructData,
                   (int8u *) data,
                   0,
                   "DERList",
                   emberExiQnames);
}


void emberExiToXmlStructDERList(EmberExiGeneratedDERList *data) {
  EXI_DEBUG1("Start to XML: DERList\n");
  emberExiPrintfLine("<DERList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->DER_count; i++ )
    if ( data->DER_array != NULL )
      emberExiToXmlStructDER(&(data->DER_array[i]));
  }
  emberExiPrintfLine("</DERList>");
  EXI_DEBUG1("End to XML: DERList\n");
}




void emberExiPrintStructDERListLink(EmberExiGeneratedDERListLink *data)
{
  emExiPrintStruct(emberExiDERListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERListLink(EmberExiGeneratedDERListLink *data) {
  EXI_DEBUG1("Start to XML: DERListLink\n");
  emberExiPrintfLine("<DERListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERListLink>");
  EXI_DEBUG1("End to XML: DERListLink\n");
}




void emberExiPrintStructDERProgram(EmberExiGeneratedDERProgram *data)
{
  emExiPrintStruct(emberExiDERProgramStructData,
                   (int8u *) data,
                   0,
                   "DERProgram",
                   emberExiQnames);
}


void emberExiToXmlStructDERProgram(EmberExiGeneratedDERProgram *data) {
  EXI_DEBUG1("Start to XML: DERProgram\n");
  emberExiPrintfLine("<DERProgram");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveDERControlListLink_option != NULL )
      emberExiToXmlStructActiveDERControlListLink((data->ActiveDERControlListLink_option));
    if ( data->DefaultDERControlLink_option != NULL )
      emberExiToXmlStructDefaultDERControlLink((data->DefaultDERControlLink_option));
    if ( data->DERControlListLink_option != NULL )
      emberExiToXmlStructDERControlListLink((data->DERControlListLink_option));
    if ( data->DERCurveListLink_option != NULL )
      emberExiToXmlStructDERCurveListLink((data->DERCurveListLink_option));
  emberExiPrintfLine("  <primacy>%d</primacy>", data->primacy);
  emberExiPrintfLine("</DERProgram>");
  EXI_DEBUG1("End to XML: DERProgram\n");
}




void emberExiPrintStructDERProgramList(EmberExiGeneratedDERProgramList *data)
{
  emExiPrintStruct(emberExiDERProgramListStructData,
                   (int8u *) data,
                   0,
                   "DERProgramList",
                   emberExiQnames);
}


void emberExiToXmlStructDERProgramList(EmberExiGeneratedDERProgramList *data) {
  EXI_DEBUG1("Start to XML: DERProgramList\n");
  emberExiPrintfLine("<DERProgramList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->DERProgram_count; i++ )
    if ( data->DERProgram_array != NULL )
      emberExiToXmlStructDERProgram(&(data->DERProgram_array[i]));
  }
  emberExiPrintfLine("</DERProgramList>");
  EXI_DEBUG1("End to XML: DERProgramList\n");
}




void emberExiPrintStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data)
{
  emExiPrintStruct(emberExiDERProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data) {
  EXI_DEBUG1("Start to XML: DERProgramListLink\n");
  emberExiPrintfLine("<DERProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERProgramListLink>");
  EXI_DEBUG1("End to XML: DERProgramListLink\n");
}




void emberExiPrintStructDERSettingsLink(EmberExiGeneratedDERSettingsLink *data)
{
  emExiPrintStruct(emberExiDERSettingsLinkStructData,
                   (int8u *) data,
                   0,
                   "DERSettingsLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERSettingsLink(EmberExiGeneratedDERSettingsLink *data) {
  EXI_DEBUG1("Start to XML: DERSettingsLink\n");
  emberExiPrintfLine("<DERSettingsLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERSettingsLink>");
  EXI_DEBUG1("End to XML: DERSettingsLink\n");
}




void emberExiPrintStructDERStatusLink(EmberExiGeneratedDERStatusLink *data)
{
  emExiPrintStruct(emberExiDERStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "DERStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERStatusLink(EmberExiGeneratedDERStatusLink *data) {
  EXI_DEBUG1("Start to XML: DERStatusLink\n");
  emberExiPrintfLine("<DERStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERStatusLink>");
  EXI_DEBUG1("End to XML: DERStatusLink\n");
}




void emberExiPrintStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data)
{
  emExiPrintStruct(emberExiDRLCCapabilitiesStructData,
                   (int8u *) data,
                   0,
                   "DRLCCapabilities",
                   emberExiQnames);
}


void emberExiToXmlStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data) {
  EXI_DEBUG1("Start to XML: DRLCCapabilities\n");
  emberExiPrintfLine("<DRLCCapabilities");
  emberExiPrintfLine(">");
    if ( data->averageEnergy != NULL )
      emberExiToXmlStructRealEnergy((data->averageEnergy));
    if ( data->maxDemand != NULL )
      emberExiToXmlStructActivePower((data->maxDemand));
  emberExiPrintfLine("  <optionsImplemented>");
  { int16u i;
    for ( i=0; i<data->optionsImplemented.length; i++ )
      emberExiPrintfLine("%2x", data->optionsImplemented.bytes[i]);
  }
  emberExiPrintfLine("</optionsImplemented>");
  emberExiPrintfLine("</DRLCCapabilities>");
  EXI_DEBUG1("End to XML: DRLCCapabilities\n");
}




void emberExiPrintStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data)
{
  emExiPrintStruct(emberExiDateTimeIntervalStructData,
                   (int8u *) data,
                   0,
                   "DateTimeInterval",
                   emberExiQnames);
}


void emberExiToXmlStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data) {
  EXI_DEBUG1("Start to XML: DateTimeInterval\n");
  emberExiPrintfLine("<DateTimeInterval");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <duration>%d</duration>", data->duration);
  emberExiPrintfLine("  <start>%d</start>", data->start);
  emberExiPrintfLine("</DateTimeInterval>");
  EXI_DEBUG1("End to XML: DateTimeInterval\n");
}




void emberExiPrintStructDefaultDERControlLink(EmberExiGeneratedDefaultDERControlLink *data)
{
  emExiPrintStruct(emberExiDefaultDERControlLinkStructData,
                   (int8u *) data,
                   0,
                   "DefaultDERControlLink",
                   emberExiQnames);
}


void emberExiToXmlStructDefaultDERControlLink(EmberExiGeneratedDefaultDERControlLink *data) {
  EXI_DEBUG1("Start to XML: DefaultDERControlLink\n");
  emberExiPrintfLine("<DefaultDERControlLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DefaultDERControlLink>");
  EXI_DEBUG1("End to XML: DefaultDERControlLink\n");
}




void emberExiPrintStructDemandResponseProgram(EmberExiGeneratedDemandResponseProgram *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgram",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgram(EmberExiGeneratedDemandResponseProgram *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgram\n");
  emberExiPrintfLine("<DemandResponseProgram");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveEndDeviceControlListLink_option != NULL )
      emberExiToXmlStructActiveEndDeviceControlListLink((data->ActiveEndDeviceControlListLink_option));
  emberExiPrintfLine("  <availabilityUpdatePercentChangeThreshold>%d</availabilityUpdatePercentChangeThreshold>", data->availabilityUpdatePercentChangeThreshold_option);
    if ( data->availabilityUpdatePowerChangeThreshold_option != NULL )
      emberExiToXmlStructActivePower((data->availabilityUpdatePowerChangeThreshold_option));
    if ( data->EndDeviceControlListLink_option != NULL )
      emberExiToXmlStructEndDeviceControlListLink((data->EndDeviceControlListLink_option));
  emberExiPrintfLine("  <primacy>%d</primacy>", data->primacy);
  emberExiPrintfLine("</DemandResponseProgram>");
  EXI_DEBUG1("End to XML: DemandResponseProgram\n");
}




void emberExiPrintStructDemandResponseProgramLink(EmberExiGeneratedDemandResponseProgramLink *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramLinkStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgramLink",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgramLink(EmberExiGeneratedDemandResponseProgramLink *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgramLink\n");
  emberExiPrintfLine("<DemandResponseProgramLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DemandResponseProgramLink>");
  EXI_DEBUG1("End to XML: DemandResponseProgramLink\n");
}




void emberExiPrintStructDemandResponseProgramList(EmberExiGeneratedDemandResponseProgramList *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramListStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgramList",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgramList(EmberExiGeneratedDemandResponseProgramList *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgramList\n");
  emberExiPrintfLine("<DemandResponseProgramList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->DemandResponseProgram_count; i++ )
    if ( data->DemandResponseProgram_array != NULL )
      emberExiToXmlStructDemandResponseProgram(&(data->DemandResponseProgram_array[i]));
  }
  emberExiPrintfLine("</DemandResponseProgramList>");
  EXI_DEBUG1("End to XML: DemandResponseProgramList\n");
}




void emberExiPrintStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgramListLink\n");
  emberExiPrintfLine("<DemandResponseProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DemandResponseProgramListLink>");
  EXI_DEBUG1("End to XML: DemandResponseProgramListLink\n");
}




void emberExiPrintStructDeviceCapability(EmberExiGeneratedDeviceCapability *data)
{
  emExiPrintStruct(emberExiDeviceCapabilityStructData,
                   (int8u *) data,
                   0,
                   "DeviceCapability",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceCapability(EmberExiGeneratedDeviceCapability *data) {
  EXI_DEBUG1("Start to XML: DeviceCapability\n");
  emberExiPrintfLine("<DeviceCapability");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      emberExiToXmlStructEndDeviceListLink((data->EndDeviceListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      emberExiToXmlStructMirrorUsagePointListLink((data->MirrorUsagePointListLink_option));
    if ( data->SelfDeviceLink_option != NULL )
      emberExiToXmlStructSelfDeviceLink((data->SelfDeviceLink_option));
  emberExiPrintfLine("</DeviceCapability>");
  EXI_DEBUG1("End to XML: DeviceCapability\n");
}




void emberExiPrintStructDeviceInformation(EmberExiGeneratedDeviceInformation *data)
{
  emExiPrintStruct(emberExiDeviceInformationStructData,
                   (int8u *) data,
                   0,
                   "DeviceInformation",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceInformation(EmberExiGeneratedDeviceInformation *data) {
  EXI_DEBUG1("Start to XML: DeviceInformation\n");
  emberExiPrintfLine("<DeviceInformation");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->DRLCCapabilities_option != NULL )
      emberExiToXmlStructDRLCCapabilities((data->DRLCCapabilities_option));
  emberExiPrintfLine("  <functionsImplemented>");
  { int16u i;
    for ( i=0; i<data->functionsImplemented_option.length; i++ )
      emberExiPrintfLine("%2x", data->functionsImplemented_option.bytes[i]);
  }
  emberExiPrintfLine("</functionsImplemented>");
  emberExiPrintfLine("  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI.length; i++ )
      emberExiPrintfLine("%2x", data->lFDI.bytes[i]);
  }
  emberExiPrintfLine("</lFDI>");
  emberExiPrintfLine("  <mfDate>%d</mfDate>", data->mfDate);
  emberExiPrintfLine("  <mfHwVer>%s</mfHwVer>", data->mfHwVer);
  emberExiPrintfLine("  <mfID>%d</mfID>", data->mfID);
  emberExiPrintfLine("  <mfInfo>%s</mfInfo>", data->mfInfo_option);
  emberExiPrintfLine("  <mfModel>%s</mfModel>", data->mfModel);
  emberExiPrintfLine("  <mfSerNum>%s</mfSerNum>", data->mfSerNum);
  emberExiPrintfLine("  <primaryPower>%d</primaryPower>", data->primaryPower);
  emberExiPrintfLine("  <secondaryPower>%d</secondaryPower>", data->secondaryPower);
    if ( data->SupportedLocaleListLink_option != NULL )
      emberExiToXmlStructSupportedLocaleListLink((data->SupportedLocaleListLink_option));
  emberExiPrintfLine("  <swActTime>%d</swActTime>", data->swActTime);
  emberExiPrintfLine("  <swVer>%s</swVer>", data->swVer);
  emberExiPrintfLine("</DeviceInformation>");
  EXI_DEBUG1("End to XML: DeviceInformation\n");
}




void emberExiPrintStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data)
{
  emExiPrintStruct(emberExiDeviceInformationLinkStructData,
                   (int8u *) data,
                   0,
                   "DeviceInformationLink",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data) {
  EXI_DEBUG1("Start to XML: DeviceInformationLink\n");
  emberExiPrintfLine("<DeviceInformationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DeviceInformationLink>");
  EXI_DEBUG1("End to XML: DeviceInformationLink\n");
}




void emberExiPrintStructDeviceStatus(EmberExiGeneratedDeviceStatus *data)
{
  emExiPrintStruct(emberExiDeviceStatusStructData,
                   (int8u *) data,
                   0,
                   "DeviceStatus",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceStatus(EmberExiGeneratedDeviceStatus *data) {
  EXI_DEBUG1("Start to XML: DeviceStatus\n");
  emberExiPrintfLine("<DeviceStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <changedTime>%d</changedTime>", data->changedTime);
  emberExiPrintfLine("  <onCount>%d</onCount>", data->onCount_option);
  emberExiPrintfLine("  <opState>%d</opState>", data->opState_option);
  emberExiPrintfLine("  <opTime>%d</opTime>", data->opTime_option);
  { int16u i;
    for ( i=0; i<data->Temperature_count; i++ )
    if ( data->Temperature_array != NULL )
      emberExiToXmlStructTemperature(&(data->Temperature_array[i]));
  }
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
  emberExiPrintfLine("</DeviceStatus>");
  EXI_DEBUG1("End to XML: DeviceStatus\n");
}




void emberExiPrintStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data)
{
  emExiPrintStruct(emberExiDeviceStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "DeviceStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data) {
  EXI_DEBUG1("Start to XML: DeviceStatusLink\n");
  emberExiPrintfLine("<DeviceStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DeviceStatusLink>");
  EXI_DEBUG1("End to XML: DeviceStatusLink\n");
}




void emberExiPrintStructDrResponse(EmberExiGeneratedDrResponse *data)
{
  emExiPrintStruct(emberExiDrResponseStructData,
                   (int8u *) data,
                   0,
                   "DrResponse",
                   emberExiQnames);
}


void emberExiToXmlStructDrResponse(EmberExiGeneratedDrResponse *data) {
  EXI_DEBUG1("Start to XML: DrResponse\n");
  emberExiPrintfLine("<DrResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->ApplianceLoadReduction_option != NULL )
      emberExiToXmlStructApplianceLoadReduction((data->ApplianceLoadReduction_option));
    if ( data->AppliedTargetReduction_option != NULL )
      emberExiToXmlStructAppliedTargetReduction((data->AppliedTargetReduction_option));
    if ( data->DutyCycle_option != NULL )
      emberExiToXmlStructDutyCycle((data->DutyCycle_option));
    if ( data->Offset_option != NULL )
      emberExiToXmlStructOffset((data->Offset_option));
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      emberExiToXmlStructSetPoint((data->SetPoint_option));
  emberExiPrintfLine("</DrResponse>");
  EXI_DEBUG1("End to XML: DrResponse\n");
}




void emberExiPrintStructDutyCycle(EmberExiGeneratedDutyCycle *data)
{
  emExiPrintStruct(emberExiDutyCycleStructData,
                   (int8u *) data,
                   0,
                   "DutyCycle",
                   emberExiQnames);
}


void emberExiToXmlStructDutyCycle(EmberExiGeneratedDutyCycle *data) {
  EXI_DEBUG1("Start to XML: DutyCycle\n");
  emberExiPrintfLine("<DutyCycle");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <normalValue>%d</normalValue>", data->normalValue);
  emberExiPrintfLine("</DutyCycle>");
  EXI_DEBUG1("End to XML: DutyCycle\n");
}




void emberExiPrintStructEndDevice(EmberExiGeneratedEndDevice *data)
{
  emExiPrintStruct(emberExiEndDeviceStructData,
                   (int8u *) data,
                   0,
                   "EndDevice",
                   emberExiQnames);
}


void emberExiToXmlStructEndDevice(EmberExiGeneratedEndDevice *data) {
  EXI_DEBUG1("Start to XML: EndDevice\n");
  emberExiPrintfLine("<EndDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
    if ( data->FlowReservationRequestListLink_option != NULL )
      emberExiToXmlStructFlowReservationRequestListLink((data->FlowReservationRequestListLink_option));
    if ( data->FlowReservationResponseListLink_option != NULL )
      emberExiToXmlStructFlowReservationResponseListLink((data->FlowReservationResponseListLink_option));
    if ( data->FunctionSetAssignmentsListLink_option != NULL )
      emberExiToXmlStructFunctionSetAssignmentsListLink((data->FunctionSetAssignmentsListLink_option));
    if ( data->RegistrationLink_option != NULL )
      emberExiToXmlStructRegistrationLink((data->RegistrationLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      emberExiToXmlStructSubscriptionListLink((data->SubscriptionListLink_option));
  emberExiPrintfLine("</EndDevice>");
  EXI_DEBUG1("End to XML: EndDevice\n");
}




void emberExiPrintStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data)
{
  emExiPrintStruct(emberExiEndDeviceControlStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControl",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControl\n");
  emberExiPrintfLine("<EndDeviceControl");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->ApplianceLoadReduction_option != NULL )
      emberExiToXmlStructApplianceLoadReduction((data->ApplianceLoadReduction_option));
  emberExiPrintfLine("  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      emberExiPrintfLine("%2x", data->deviceCategory.bytes[i]);
  }
  emberExiPrintfLine("</deviceCategory>");
  emberExiPrintfLine("  <drProgramMandatory>%d</drProgramMandatory>", data->drProgramMandatory);
    if ( data->DutyCycle_option != NULL )
      emberExiToXmlStructDutyCycle((data->DutyCycle_option));
  emberExiPrintfLine("  <loadShiftForward>%d</loadShiftForward>", data->loadShiftForward);
    if ( data->Offset_option != NULL )
      emberExiToXmlStructOffset((data->Offset_option));
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      emberExiToXmlStructSetPoint((data->SetPoint_option));
    if ( data->TargetReduction_option != NULL )
      emberExiToXmlStructTargetReduction((data->TargetReduction_option));
  emberExiPrintfLine("</EndDeviceControl>");
  EXI_DEBUG1("End to XML: EndDeviceControl\n");
}




void emberExiPrintStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data)
{
  emExiPrintStruct(emberExiEndDeviceControlListStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControlList",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControlList\n");
  emberExiPrintfLine("<EndDeviceControlList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->EndDeviceControl_count; i++ )
    if ( data->EndDeviceControl_array != NULL )
      emberExiToXmlStructEndDeviceControl(&(data->EndDeviceControl_array[i]));
  }
  emberExiPrintfLine("</EndDeviceControlList>");
  EXI_DEBUG1("End to XML: EndDeviceControlList\n");
}




void emberExiPrintStructEndDeviceControlListLink(EmberExiGeneratedEndDeviceControlListLink *data)
{
  emExiPrintStruct(emberExiEndDeviceControlListLinkStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControlListLink",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControlListLink(EmberExiGeneratedEndDeviceControlListLink *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControlListLink\n");
  emberExiPrintfLine("<EndDeviceControlListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</EndDeviceControlListLink>");
  EXI_DEBUG1("End to XML: EndDeviceControlListLink\n");
}




void emberExiPrintStructEndDeviceList(EmberExiGeneratedEndDeviceList *data)
{
  emExiPrintStruct(emberExiEndDeviceListStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceList",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceList(EmberExiGeneratedEndDeviceList *data) {
  EXI_DEBUG1("Start to XML: EndDeviceList\n");
  emberExiPrintfLine("<EndDeviceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->EndDevice_count; i++ )
    if ( data->EndDevice_array != NULL )
      emberExiToXmlStructEndDevice(&(data->EndDevice_array[i]));
  }
  emberExiPrintfLine("</EndDeviceList>");
  EXI_DEBUG1("End to XML: EndDeviceList\n");
}




void emberExiPrintStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data)
{
  emExiPrintStruct(emberExiEndDeviceListLinkStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data) {
  EXI_DEBUG1("Start to XML: EndDeviceListLink\n");
  emberExiPrintfLine("<EndDeviceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</EndDeviceListLink>");
  EXI_DEBUG1("End to XML: EndDeviceListLink\n");
}




void emberExiPrintStructEnvironmentalCost(EmberExiGeneratedEnvironmentalCost *data)
{
  emExiPrintStruct(emberExiEnvironmentalCostStructData,
                   (int8u *) data,
                   0,
                   "EnvironmentalCost",
                   emberExiQnames);
}


void emberExiToXmlStructEnvironmentalCost(EmberExiGeneratedEnvironmentalCost *data) {
  EXI_DEBUG1("Start to XML: EnvironmentalCost\n");
  emberExiPrintfLine("<EnvironmentalCost");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <amount>%d</amount>", data->amount);
  emberExiPrintfLine("  <costKind>%d</costKind>", data->costKind);
  emberExiPrintfLine("  <costLevel>%d</costLevel>", data->costLevel);
  emberExiPrintfLine("  <numCostLevels>%d</numCostLevels>", data->numCostLevels);
  emberExiPrintfLine("</EnvironmentalCost>");
  EXI_DEBUG1("End to XML: EnvironmentalCost\n");
}




void emberExiPrintStructEvent(EmberExiGeneratedEvent *data)
{
  emExiPrintStruct(emberExiEventStructData,
                   (int8u *) data,
                   0,
                   "Event",
                   emberExiQnames);
}


void emberExiToXmlStructEvent(EmberExiGeneratedEvent *data) {
  EXI_DEBUG1("Start to XML: Event\n");
  emberExiPrintfLine("<Event");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("</Event>");
  EXI_DEBUG1("End to XML: Event\n");
}




void emberExiPrintStructEventStatus(EmberExiGeneratedEventStatus *data)
{
  emExiPrintStruct(emberExiEventStatusStructData,
                   (int8u *) data,
                   0,
                   "EventStatus",
                   emberExiQnames);
}


void emberExiToXmlStructEventStatus(EmberExiGeneratedEventStatus *data) {
  EXI_DEBUG1("Start to XML: EventStatus\n");
  emberExiPrintfLine("<EventStatus");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentStatus>%d</currentStatus>", data->currentStatus);
  emberExiPrintfLine("  <dateTime>%d</dateTime>", data->dateTime);
  emberExiPrintfLine("  <potentiallySuperseded>%d</potentiallySuperseded>", data->potentiallySuperseded);
  emberExiPrintfLine("  <potentiallySupersededTime>%d</potentiallySupersededTime>", data->potentiallySupersededTime_option);
  emberExiPrintfLine("  <reason>%s</reason>", data->reason_option);
  emberExiPrintfLine("</EventStatus>");
  EXI_DEBUG1("End to XML: EventStatus\n");
}




void emberExiPrintStructFile(EmberExiGeneratedFile *data)
{
  emExiPrintStruct(emberExiFileStructData,
                   (int8u *) data,
                   0,
                   "File",
                   emberExiQnames);
}


void emberExiToXmlStructFile(EmberExiGeneratedFile *data) {
  EXI_DEBUG1("Start to XML: File\n");
  emberExiPrintfLine("<File");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <activateTime>%d</activateTime>", data->activateTime_option);
  emberExiPrintfLine("  <fileURI>%s</fileURI>", data->fileURI);
  emberExiPrintfLine("  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI_option.length; i++ )
      emberExiPrintfLine("%2x", data->lFDI_option.bytes[i]);
  }
  emberExiPrintfLine("</lFDI>");
  emberExiPrintfLine("  <mfHwVer>%s</mfHwVer>", data->mfHwVer_option);
  emberExiPrintfLine("  <mfID>%d</mfID>", data->mfID);
  emberExiPrintfLine("  <mfModel>%s</mfModel>", data->mfModel);
  emberExiPrintfLine("  <mfSerNum>%s</mfSerNum>", data->mfSerNum_option);
  emberExiPrintfLine("  <mfVer>%s</mfVer>", data->mfVer);
  emberExiPrintfLine("  <size>%d</size>", data->size);
  emberExiPrintfLine("  <type>");
  { int16u i;
    for ( i=0; i<data->type.length; i++ )
      emberExiPrintfLine("%2x", data->type.bytes[i]);
  }
  emberExiPrintfLine("</type>");
  emberExiPrintfLine("</File>");
  EXI_DEBUG1("End to XML: File\n");
}




void emberExiPrintStructFileList(EmberExiGeneratedFileList *data)
{
  emExiPrintStruct(emberExiFileListStructData,
                   (int8u *) data,
                   0,
                   "FileList",
                   emberExiQnames);
}


void emberExiToXmlStructFileList(EmberExiGeneratedFileList *data) {
  EXI_DEBUG1("Start to XML: FileList\n");
  emberExiPrintfLine("<FileList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->File_count; i++ )
    if ( data->File_array != NULL )
      emberExiToXmlStructFile(&(data->File_array[i]));
  }
  emberExiPrintfLine("</FileList>");
  EXI_DEBUG1("End to XML: FileList\n");
}




void emberExiPrintStructFileListLink(EmberExiGeneratedFileListLink *data)
{
  emExiPrintStruct(emberExiFileListLinkStructData,
                   (int8u *) data,
                   0,
                   "FileListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFileListLink(EmberExiGeneratedFileListLink *data) {
  EXI_DEBUG1("Start to XML: FileListLink\n");
  emberExiPrintfLine("<FileListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FileListLink>");
  EXI_DEBUG1("End to XML: FileListLink\n");
}




void emberExiPrintStructFileStatusLink(EmberExiGeneratedFileStatusLink *data)
{
  emExiPrintStruct(emberExiFileStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "FileStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructFileStatusLink(EmberExiGeneratedFileStatusLink *data) {
  EXI_DEBUG1("Start to XML: FileStatusLink\n");
  emberExiPrintfLine("<FileStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FileStatusLink>");
  EXI_DEBUG1("End to XML: FileStatusLink\n");
}




void emberExiPrintStructFixedPowerFactor(EmberExiGeneratedFixedPowerFactor *data)
{
  emExiPrintStruct(emberExiFixedPowerFactorStructData,
                   (int8u *) data,
                   0,
                   "FixedPowerFactor",
                   emberExiQnames);
}


void emberExiToXmlStructFixedPowerFactor(EmberExiGeneratedFixedPowerFactor *data) {
  EXI_DEBUG1("Start to XML: FixedPowerFactor\n");
  emberExiPrintfLine("<FixedPowerFactor");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <displacement>%d</displacement>", data->displacement);
  emberExiPrintfLine("  <excitation>%d</excitation>", data->excitation);
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("</FixedPowerFactor>");
  EXI_DEBUG1("End to XML: FixedPowerFactor\n");
}




void emberExiPrintStructFixedVAr(EmberExiGeneratedFixedVAr *data)
{
  emExiPrintStruct(emberExiFixedVArStructData,
                   (int8u *) data,
                   0,
                   "FixedVAr",
                   emberExiQnames);
}


void emberExiToXmlStructFixedVAr(EmberExiGeneratedFixedVAr *data) {
  EXI_DEBUG1("Start to XML: FixedVAr\n");
  emberExiPrintfLine("<FixedVAr");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <refType>%d</refType>", data->refType);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</FixedVAr>");
  EXI_DEBUG1("End to XML: FixedVAr\n");
}




void emberExiPrintStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data)
{
  emExiPrintStruct(emberExiFlowReservationRequestListLinkStructData,
                   (int8u *) data,
                   0,
                   "FlowReservationRequestListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data) {
  EXI_DEBUG1("Start to XML: FlowReservationRequestListLink\n");
  emberExiPrintfLine("<FlowReservationRequestListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FlowReservationRequestListLink>");
  EXI_DEBUG1("End to XML: FlowReservationRequestListLink\n");
}




void emberExiPrintStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data)
{
  emExiPrintStruct(emberExiFlowReservationResponseListLinkStructData,
                   (int8u *) data,
                   0,
                   "FlowReservationResponseListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data) {
  EXI_DEBUG1("Start to XML: FlowReservationResponseListLink\n");
  emberExiPrintfLine("<FlowReservationResponseListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FlowReservationResponseListLink>");
  EXI_DEBUG1("End to XML: FlowReservationResponseListLink\n");
}




void emberExiPrintStructFunctionSetAssignments(EmberExiGeneratedFunctionSetAssignments *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignments",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignments(EmberExiGeneratedFunctionSetAssignments *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignments\n");
  emberExiPrintfLine("<FunctionSetAssignments");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</FunctionSetAssignments>");
  EXI_DEBUG1("End to XML: FunctionSetAssignments\n");
}




void emberExiPrintStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsBaseStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsBase",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsBase\n");
  emberExiPrintfLine("<FunctionSetAssignmentsBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
  emberExiPrintfLine("</FunctionSetAssignmentsBase>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsBase\n");
}




void emberExiPrintStructFunctionSetAssignmentsList(EmberExiGeneratedFunctionSetAssignmentsList *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsListStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsList",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsList(EmberExiGeneratedFunctionSetAssignmentsList *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsList\n");
  emberExiPrintfLine("<FunctionSetAssignmentsList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->FunctionSetAssignments_count; i++ )
    if ( data->FunctionSetAssignments_array != NULL )
      emberExiToXmlStructFunctionSetAssignments(&(data->FunctionSetAssignments_array[i]));
  }
  emberExiPrintfLine("</FunctionSetAssignmentsList>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsList\n");
}




void emberExiPrintStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsListLinkStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsListLink\n");
  emberExiPrintfLine("<FunctionSetAssignmentsListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FunctionSetAssignmentsListLink>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsListLink\n");
}




void emberExiPrintStructHistoricalReading(EmberExiGeneratedHistoricalReading *data)
{
  emExiPrintStruct(emberExiHistoricalReadingStructData,
                   (int8u *) data,
                   0,
                   "HistoricalReading",
                   emberExiQnames);
}


void emberExiToXmlStructHistoricalReading(EmberExiGeneratedHistoricalReading *data) {
  EXI_DEBUG1("Start to XML: HistoricalReading\n");
  emberExiPrintfLine("<HistoricalReading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      emberExiToXmlStructBillingReadingSetListLink((data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink_option));
  emberExiPrintfLine("</HistoricalReading>");
  EXI_DEBUG1("End to XML: HistoricalReading\n");
}




void emberExiPrintStructHistoricalReadingList(EmberExiGeneratedHistoricalReadingList *data)
{
  emExiPrintStruct(emberExiHistoricalReadingListStructData,
                   (int8u *) data,
                   0,
                   "HistoricalReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructHistoricalReadingList(EmberExiGeneratedHistoricalReadingList *data) {
  EXI_DEBUG1("Start to XML: HistoricalReadingList\n");
  emberExiPrintfLine("<HistoricalReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->HistoricalReading_count; i++ )
    if ( data->HistoricalReading_array != NULL )
      emberExiToXmlStructHistoricalReading(&(data->HistoricalReading_array[i]));
  }
  emberExiPrintfLine("</HistoricalReadingList>");
  EXI_DEBUG1("End to XML: HistoricalReadingList\n");
}




void emberExiPrintStructHistoricalReadingListLink(EmberExiGeneratedHistoricalReadingListLink *data)
{
  emExiPrintStruct(emberExiHistoricalReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "HistoricalReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructHistoricalReadingListLink(EmberExiGeneratedHistoricalReadingListLink *data) {
  EXI_DEBUG1("Start to XML: HistoricalReadingListLink\n");
  emberExiPrintfLine("<HistoricalReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</HistoricalReadingListLink>");
  EXI_DEBUG1("End to XML: HistoricalReadingListLink\n");
}




void emberExiPrintStructIEEE_802_15_4(EmberExiGeneratedIEEE_802_15_4 *data)
{
  emExiPrintStruct(emberExiIEEE_802_15_4StructData,
                   (int8u *) data,
                   0,
                   "IEEE_802_15_4",
                   emberExiQnames);
}


void emberExiToXmlStructIEEE_802_15_4(EmberExiGeneratedIEEE_802_15_4 *data) {
  EXI_DEBUG1("Start to XML: IEEE_802_15_4\n");
  emberExiPrintfLine("<IEEE_802_15_4");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <capabilityInfo>");
  { int16u i;
    for ( i=0; i<data->capabilityInfo.length; i++ )
      emberExiPrintfLine("%2x", data->capabilityInfo.bytes[i]);
  }
  emberExiPrintfLine("</capabilityInfo>");
    if ( data->NeighborListLink_option != NULL )
      emberExiToXmlStructNeighborListLink((data->NeighborListLink_option));
  emberExiPrintfLine("  <shortAddress>%d</shortAddress>", data->shortAddress);
  emberExiPrintfLine("</IEEE_802_15_4>");
  EXI_DEBUG1("End to XML: IEEE_802_15_4\n");
}




void emberExiPrintStructIPAddr(EmberExiGeneratedIPAddr *data)
{
  emExiPrintStruct(emberExiIPAddrStructData,
                   (int8u *) data,
                   0,
                   "IPAddr",
                   emberExiQnames);
}


void emberExiToXmlStructIPAddr(EmberExiGeneratedIPAddr *data) {
  EXI_DEBUG1("Start to XML: IPAddr\n");
  emberExiPrintfLine("<IPAddr");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <address>");
  { int16u i;
    for ( i=0; i<data->address.length; i++ )
      emberExiPrintfLine("%2x", data->address.bytes[i]);
  }
  emberExiPrintfLine("</address>");
    if ( data->RPLInstanceListLink_option != NULL )
      emberExiToXmlStructRPLInstanceListLink((data->RPLInstanceListLink_option));
  emberExiPrintfLine("</IPAddr>");
  EXI_DEBUG1("End to XML: IPAddr\n");
}




void emberExiPrintStructIPAddrList(EmberExiGeneratedIPAddrList *data)
{
  emExiPrintStruct(emberExiIPAddrListStructData,
                   (int8u *) data,
                   0,
                   "IPAddrList",
                   emberExiQnames);
}


void emberExiToXmlStructIPAddrList(EmberExiGeneratedIPAddrList *data) {
  EXI_DEBUG1("Start to XML: IPAddrList\n");
  emberExiPrintfLine("<IPAddrList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->IPAddr_count; i++ )
    if ( data->IPAddr_array != NULL )
      emberExiToXmlStructIPAddr(&(data->IPAddr_array[i]));
  }
  emberExiPrintfLine("</IPAddrList>");
  EXI_DEBUG1("End to XML: IPAddrList\n");
}




void emberExiPrintStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data)
{
  emExiPrintStruct(emberExiIPAddrListLinkStructData,
                   (int8u *) data,
                   0,
                   "IPAddrListLink",
                   emberExiQnames);
}


void emberExiToXmlStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data) {
  EXI_DEBUG1("Start to XML: IPAddrListLink\n");
  emberExiPrintfLine("<IPAddrListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</IPAddrListLink>");
  EXI_DEBUG1("End to XML: IPAddrListLink\n");
}




void emberExiPrintStructIPInterface(EmberExiGeneratedIPInterface *data)
{
  emExiPrintStruct(emberExiIPInterfaceStructData,
                   (int8u *) data,
                   0,
                   "IPInterface",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterface(EmberExiGeneratedIPInterface *data) {
  EXI_DEBUG1("Start to XML: IPInterface\n");
  emberExiPrintfLine("<IPInterface");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <ifDescr>%s</ifDescr>", data->ifDescr_option);
  emberExiPrintfLine("  <ifHighSpeed>%d</ifHighSpeed>", data->ifHighSpeed_option);
  emberExiPrintfLine("  <ifInBroadcastPkts>%d</ifInBroadcastPkts>", data->ifInBroadcastPkts_option);
  emberExiPrintfLine("  <ifIndex>%d</ifIndex>", data->ifIndex_option);
  emberExiPrintfLine("  <ifInDiscards>%d</ifInDiscards>", data->ifInDiscards_option);
  emberExiPrintfLine("  <ifInErrors>%d</ifInErrors>", data->ifInErrors_option);
  emberExiPrintfLine("  <ifInMulticastPkts>%d</ifInMulticastPkts>", data->ifInMulticastPkts_option);
  emberExiPrintfLine("  <ifInOctets>%d</ifInOctets>", data->ifInOctets_option);
  emberExiPrintfLine("  <ifInUcastPkts>%d</ifInUcastPkts>", data->ifInUcastPkts_option);
  emberExiPrintfLine("  <ifInUnknownProtos>%d</ifInUnknownProtos>", data->ifInUnknownProtos_option);
  emberExiPrintfLine("  <ifMtu>%d</ifMtu>", data->ifMtu_option);
  emberExiPrintfLine("  <ifName>%s</ifName>", data->ifName_option);
  emberExiPrintfLine("  <ifOperStatus>%d</ifOperStatus>", data->ifOperStatus_option);
  emberExiPrintfLine("  <ifOutBroadcastPkts>%d</ifOutBroadcastPkts>", data->ifOutBroadcastPkts_option);
  emberExiPrintfLine("  <ifOutDiscards>%d</ifOutDiscards>", data->ifOutDiscards_option);
  emberExiPrintfLine("  <ifOutErrors>%d</ifOutErrors>", data->ifOutErrors_option);
  emberExiPrintfLine("  <ifOutMulticastPkts>%d</ifOutMulticastPkts>", data->ifOutMulticastPkts_option);
  emberExiPrintfLine("  <ifOutOctets>%d</ifOutOctets>", data->ifOutOctets_option);
  emberExiPrintfLine("  <ifOutUcastPkts>%d</ifOutUcastPkts>", data->ifOutUcastPkts_option);
  emberExiPrintfLine("  <ifPromiscuousMode>%d</ifPromiscuousMode>", data->ifPromiscuousMode_option);
  emberExiPrintfLine("  <ifSpeed>%d</ifSpeed>", data->ifSpeed_option);
  emberExiPrintfLine("  <ifType>%d</ifType>", data->ifType_option);
    if ( data->IPAddrListLink_option != NULL )
      emberExiToXmlStructIPAddrListLink((data->IPAddrListLink_option));
  emberExiPrintfLine("  <lastResetTime>%d</lastResetTime>", data->lastResetTime_option);
  emberExiPrintfLine("  <lastUpdatedTime>%d</lastUpdatedTime>", data->lastUpdatedTime_option);
    if ( data->LLInterfaceListLink_option != NULL )
      emberExiToXmlStructLLInterfaceListLink((data->LLInterfaceListLink_option));
  emberExiPrintfLine("</IPInterface>");
  EXI_DEBUG1("End to XML: IPInterface\n");
}




void emberExiPrintStructIPInterfaceList(EmberExiGeneratedIPInterfaceList *data)
{
  emExiPrintStruct(emberExiIPInterfaceListStructData,
                   (int8u *) data,
                   0,
                   "IPInterfaceList",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterfaceList(EmberExiGeneratedIPInterfaceList *data) {
  EXI_DEBUG1("Start to XML: IPInterfaceList\n");
  emberExiPrintfLine("<IPInterfaceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->IPInterface_count; i++ )
    if ( data->IPInterface_array != NULL )
      emberExiToXmlStructIPInterface(&(data->IPInterface_array[i]));
  }
  emberExiPrintfLine("</IPInterfaceList>");
  EXI_DEBUG1("End to XML: IPInterfaceList\n");
}




void emberExiPrintStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data)
{
  emExiPrintStruct(emberExiIPInterfaceListLinkStructData,
                   (int8u *) data,
                   0,
                   "IPInterfaceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data) {
  EXI_DEBUG1("Start to XML: IPInterfaceListLink\n");
  emberExiPrintfLine("<IPInterfaceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</IPInterfaceListLink>");
  EXI_DEBUG1("End to XML: IPInterfaceListLink\n");
}




void emberExiPrintStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data)
{
  emExiPrintStruct(emberExiIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "IdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: IdentifiedObject\n");
  emberExiPrintfLine("<IdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</IdentifiedObject>");
  EXI_DEBUG1("End to XML: IdentifiedObject\n");
}




void emberExiPrintStructLLInterface(EmberExiGeneratedLLInterface *data)
{
  emExiPrintStruct(emberExiLLInterfaceStructData,
                   (int8u *) data,
                   0,
                   "LLInterface",
                   emberExiQnames);
}


void emberExiToXmlStructLLInterface(EmberExiGeneratedLLInterface *data) {
  EXI_DEBUG1("Start to XML: LLInterface\n");
  emberExiPrintfLine("<LLInterface");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <CRCerrors>%d</CRCerrors>", data->CRCerrors);
  emberExiPrintfLine("  <EUI64>");
  { int16u i;
    for ( i=0; i<data->EUI64.length; i++ )
      emberExiPrintfLine("%2x", data->EUI64.bytes[i]);
  }
  emberExiPrintfLine("</EUI64>");
    if ( data->IEEE_802_15_4_option != NULL )
      emberExiToXmlStructIEEE_802_15_4((data->IEEE_802_15_4_option));
  emberExiPrintfLine("  <linkLayerType>%d</linkLayerType>", data->linkLayerType);
  emberExiPrintfLine("  <LLAckNotRx>%d</LLAckNotRx>", data->LLAckNotRx_option);
  emberExiPrintfLine("  <LLCSMAFail>%d</LLCSMAFail>", data->LLCSMAFail_option);
  emberExiPrintfLine("  <LLFramesDropRx>%d</LLFramesDropRx>", data->LLFramesDropRx_option);
  emberExiPrintfLine("  <LLFramesDropTx>%d</LLFramesDropTx>", data->LLFramesDropTx_option);
  emberExiPrintfLine("  <LLFramesRx>%d</LLFramesRx>", data->LLFramesRx_option);
  emberExiPrintfLine("  <LLFramesTx>%d</LLFramesTx>", data->LLFramesTx_option);
  emberExiPrintfLine("  <LLMediaAccessFail>%d</LLMediaAccessFail>", data->LLMediaAccessFail_option);
  emberExiPrintfLine("  <LLOctetsRx>%d</LLOctetsRx>", data->LLOctetsRx_option);
  emberExiPrintfLine("  <LLOctetsTx>%d</LLOctetsTx>", data->LLOctetsTx_option);
  emberExiPrintfLine("  <LLRetryCount>%d</LLRetryCount>", data->LLRetryCount_option);
  emberExiPrintfLine("  <LLSecurityErrorRx>%d</LLSecurityErrorRx>", data->LLSecurityErrorRx_option);
    if ( data->loWPAN_option != NULL )
      emberExiToXmlStructloWPAN((data->loWPAN_option));
  emberExiPrintfLine("</LLInterface>");
  EXI_DEBUG1("End to XML: LLInterface\n");
}




void emberExiPrintStructLLInterfaceList(EmberExiGeneratedLLInterfaceList *data)
{
  emExiPrintStruct(emberExiLLInterfaceListStructData,
                   (int8u *) data,
                   0,
                   "LLInterfaceList",
                   emberExiQnames);
}


void emberExiToXmlStructLLInterfaceList(EmberExiGeneratedLLInterfaceList *data) {
  EXI_DEBUG1("Start to XML: LLInterfaceList\n");
  emberExiPrintfLine("<LLInterfaceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->LLInterface_count; i++ )
    if ( data->LLInterface_array != NULL )
      emberExiToXmlStructLLInterface(&(data->LLInterface_array[i]));
  }
  emberExiPrintfLine("</LLInterfaceList>");
  EXI_DEBUG1("End to XML: LLInterfaceList\n");
}




void emberExiPrintStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data)
{
  emExiPrintStruct(emberExiLLInterfaceListLinkStructData,
                   (int8u *) data,
                   0,
                   "LLInterfaceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data) {
  EXI_DEBUG1("Start to XML: LLInterfaceListLink\n");
  emberExiPrintfLine("<LLInterfaceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LLInterfaceListLink>");
  EXI_DEBUG1("End to XML: LLInterfaceListLink\n");
}




void emberExiPrintStructLink(EmberExiGeneratedLink *data)
{
  emExiPrintStruct(emberExiLinkStructData,
                   (int8u *) data,
                   0,
                   "Link",
                   emberExiQnames);
}


void emberExiToXmlStructLink(EmberExiGeneratedLink *data) {
  EXI_DEBUG1("Start to XML: Link\n");
  emberExiPrintfLine("<Link");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</Link>");
  EXI_DEBUG1("End to XML: Link\n");
}




void emberExiPrintStructList(EmberExiGeneratedList *data)
{
  emExiPrintStruct(emberExiListStructData,
                   (int8u *) data,
                   0,
                   "List",
                   emberExiQnames);
}


void emberExiToXmlStructList(EmberExiGeneratedList *data) {
  EXI_DEBUG1("Start to XML: List\n");
  emberExiPrintfLine("<List");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</List>");
  EXI_DEBUG1("End to XML: List\n");
}




void emberExiPrintStructListLink(EmberExiGeneratedListLink *data)
{
  emExiPrintStruct(emberExiListLinkStructData,
                   (int8u *) data,
                   0,
                   "ListLink",
                   emberExiQnames);
}


void emberExiToXmlStructListLink(EmberExiGeneratedListLink *data) {
  EXI_DEBUG1("Start to XML: ListLink\n");
  emberExiPrintfLine("<ListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ListLink>");
  EXI_DEBUG1("End to XML: ListLink\n");
}




void emberExiPrintStructLoadShedAvailability(EmberExiGeneratedLoadShedAvailability *data)
{
  emExiPrintStruct(emberExiLoadShedAvailabilityStructData,
                   (int8u *) data,
                   0,
                   "LoadShedAvailability",
                   emberExiQnames);
}


void emberExiToXmlStructLoadShedAvailability(EmberExiGeneratedLoadShedAvailability *data) {
  EXI_DEBUG1("Start to XML: LoadShedAvailability\n");
  emberExiPrintfLine("<LoadShedAvailability");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <availabilityDuration>%d</availabilityDuration>", data->availabilityDuration_option);
    if ( data->DemandResponseProgramLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramLink((data->DemandResponseProgramLink_option));
  emberExiPrintfLine("  <sheddablePercent>%d</sheddablePercent>", data->sheddablePercent_option);
    if ( data->sheddablePower_option != NULL )
      emberExiToXmlStructActivePower((data->sheddablePower_option));
  emberExiPrintfLine("</LoadShedAvailability>");
  EXI_DEBUG1("End to XML: LoadShedAvailability\n");
}




void emberExiPrintStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data)
{
  emExiPrintStruct(emberExiLoadShedAvailabilityLinkStructData,
                   (int8u *) data,
                   0,
                   "LoadShedAvailabilityLink",
                   emberExiQnames);
}


void emberExiToXmlStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data) {
  EXI_DEBUG1("Start to XML: LoadShedAvailabilityLink\n");
  emberExiPrintfLine("<LoadShedAvailabilityLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LoadShedAvailabilityLink>");
  EXI_DEBUG1("End to XML: LoadShedAvailabilityLink\n");
}




void emberExiPrintStructLogEvent(EmberExiGeneratedLogEvent *data)
{
  emExiPrintStruct(emberExiLogEventStructData,
                   (int8u *) data,
                   0,
                   "LogEvent",
                   emberExiQnames);
}


void emberExiToXmlStructLogEvent(EmberExiGeneratedLogEvent *data) {
  EXI_DEBUG1("Start to XML: LogEvent\n");
  emberExiPrintfLine("<LogEvent");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  emberExiPrintfLine("  <extendedData>%d</extendedData>", data->extendedData_option);
  emberExiPrintfLine("  <functionSet>%d</functionSet>", data->functionSet);
  emberExiPrintfLine("  <logEventCode>%d</logEventCode>", data->logEventCode);
  emberExiPrintfLine("  <logEventID>%d</logEventID>", data->logEventID);
  emberExiPrintfLine("  <logEventPEN>%d</logEventPEN>", data->logEventPEN);
  emberExiPrintfLine("  <profileID>%d</profileID>", data->profileID);
  emberExiPrintfLine("</LogEvent>");
  EXI_DEBUG1("End to XML: LogEvent\n");
}




void emberExiPrintStructLogEventList(EmberExiGeneratedLogEventList *data)
{
  emExiPrintStruct(emberExiLogEventListStructData,
                   (int8u *) data,
                   0,
                   "LogEventList",
                   emberExiQnames);
}


void emberExiToXmlStructLogEventList(EmberExiGeneratedLogEventList *data) {
  EXI_DEBUG1("Start to XML: LogEventList\n");
  emberExiPrintfLine("<LogEventList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->LogEvent_count; i++ )
    if ( data->LogEvent_array != NULL )
      emberExiToXmlStructLogEvent(&(data->LogEvent_array[i]));
  }
  emberExiPrintfLine("</LogEventList>");
  EXI_DEBUG1("End to XML: LogEventList\n");
}




void emberExiPrintStructLogEventListLink(EmberExiGeneratedLogEventListLink *data)
{
  emExiPrintStruct(emberExiLogEventListLinkStructData,
                   (int8u *) data,
                   0,
                   "LogEventListLink",
                   emberExiQnames);
}


void emberExiToXmlStructLogEventListLink(EmberExiGeneratedLogEventListLink *data) {
  EXI_DEBUG1("Start to XML: LogEventListLink\n");
  emberExiPrintfLine("<LogEventListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LogEventListLink>");
  EXI_DEBUG1("End to XML: LogEventListLink\n");
}




void emberExiPrintStructMessagingProgram(EmberExiGeneratedMessagingProgram *data)
{
  emExiPrintStruct(emberExiMessagingProgramStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgram",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgram(EmberExiGeneratedMessagingProgram *data) {
  EXI_DEBUG1("Start to XML: MessagingProgram\n");
  emberExiPrintfLine("<MessagingProgram");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      emberExiToXmlStructActiveTextMessageListLink((data->ActiveTextMessageListLink_option));
  emberExiPrintfLine("  <locale>%s</locale>", data->locale);
  emberExiPrintfLine("  <primacy>%d</primacy>", data->primacy);
    if ( data->TextMessageListLink_option != NULL )
      emberExiToXmlStructTextMessageListLink((data->TextMessageListLink_option));
  emberExiPrintfLine("</MessagingProgram>");
  EXI_DEBUG1("End to XML: MessagingProgram\n");
}




void emberExiPrintStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data)
{
  emExiPrintStruct(emberExiMessagingProgramListStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgramList",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data) {
  EXI_DEBUG1("Start to XML: MessagingProgramList\n");
  emberExiPrintfLine("<MessagingProgramList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->MessagingProgram_count; i++ )
    if ( data->MessagingProgram_array != NULL )
      emberExiToXmlStructMessagingProgram(&(data->MessagingProgram_array[i]));
  }
  emberExiPrintfLine("</MessagingProgramList>");
  EXI_DEBUG1("End to XML: MessagingProgramList\n");
}




void emberExiPrintStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data)
{
  emExiPrintStruct(emberExiMessagingProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data) {
  EXI_DEBUG1("Start to XML: MessagingProgramListLink\n");
  emberExiPrintfLine("<MessagingProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MessagingProgramListLink>");
  EXI_DEBUG1("End to XML: MessagingProgramListLink\n");
}




void emberExiPrintStructMeterReading(EmberExiGeneratedMeterReading *data)
{
  emExiPrintStruct(emberExiMeterReadingStructData,
                   (int8u *) data,
                   0,
                   "MeterReading",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReading(EmberExiGeneratedMeterReading *data) {
  EXI_DEBUG1("Start to XML: MeterReading\n");
  emberExiPrintfLine("<MeterReading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->RateComponentListLink_option != NULL )
      emberExiToXmlStructRateComponentListLink((data->RateComponentListLink_option));
    if ( data->ReadingLink_option != NULL )
      emberExiToXmlStructReadingLink((data->ReadingLink_option));
    if ( data->ReadingSetListLink_option != NULL )
      emberExiToXmlStructReadingSetListLink((data->ReadingSetListLink_option));
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
  emberExiPrintfLine("</MeterReading>");
  EXI_DEBUG1("End to XML: MeterReading\n");
}




void emberExiPrintStructMeterReadingBase(EmberExiGeneratedMeterReadingBase *data)
{
  emExiPrintStruct(emberExiMeterReadingBaseStructData,
                   (int8u *) data,
                   0,
                   "MeterReadingBase",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReadingBase(EmberExiGeneratedMeterReadingBase *data) {
  EXI_DEBUG1("Start to XML: MeterReadingBase\n");
  emberExiPrintfLine("<MeterReadingBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</MeterReadingBase>");
  EXI_DEBUG1("End to XML: MeterReadingBase\n");
}




void emberExiPrintStructMeterReadingList(EmberExiGeneratedMeterReadingList *data)
{
  emExiPrintStruct(emberExiMeterReadingListStructData,
                   (int8u *) data,
                   0,
                   "MeterReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReadingList(EmberExiGeneratedMeterReadingList *data) {
  EXI_DEBUG1("Start to XML: MeterReadingList\n");
  emberExiPrintfLine("<MeterReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->MeterReading_count; i++ )
    if ( data->MeterReading_array != NULL )
      emberExiToXmlStructMeterReading(&(data->MeterReading_array[i]));
  }
  emberExiPrintfLine("</MeterReadingList>");
  EXI_DEBUG1("End to XML: MeterReadingList\n");
}




void emberExiPrintStructMeterReadingListLink(EmberExiGeneratedMeterReadingListLink *data)
{
  emExiPrintStruct(emberExiMeterReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "MeterReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReadingListLink(EmberExiGeneratedMeterReadingListLink *data) {
  EXI_DEBUG1("Start to XML: MeterReadingListLink\n");
  emberExiPrintfLine("<MeterReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MeterReadingListLink>");
  EXI_DEBUG1("End to XML: MeterReadingListLink\n");
}




void emberExiPrintStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data)
{
  emExiPrintStruct(emberExiMirrorUsagePointListLinkStructData,
                   (int8u *) data,
                   0,
                   "MirrorUsagePointListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data) {
  EXI_DEBUG1("Start to XML: MirrorUsagePointListLink\n");
  emberExiPrintfLine("<MirrorUsagePointListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MirrorUsagePointListLink>");
  EXI_DEBUG1("End to XML: MirrorUsagePointListLink\n");
}




void emberExiPrintStructNeighbor(EmberExiGeneratedNeighbor *data)
{
  emExiPrintStruct(emberExiNeighborStructData,
                   (int8u *) data,
                   0,
                   "Neighbor",
                   emberExiQnames);
}


void emberExiToXmlStructNeighbor(EmberExiGeneratedNeighbor *data) {
  EXI_DEBUG1("Start to XML: Neighbor\n");
  emberExiPrintfLine("<Neighbor");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <isChild>%d</isChild>", data->isChild);
  emberExiPrintfLine("  <linkQuality>%d</linkQuality>", data->linkQuality);
  emberExiPrintfLine("  <shortAddress>%d</shortAddress>", data->shortAddress);
  emberExiPrintfLine("</Neighbor>");
  EXI_DEBUG1("End to XML: Neighbor\n");
}




void emberExiPrintStructNeighborList(EmberExiGeneratedNeighborList *data)
{
  emExiPrintStruct(emberExiNeighborListStructData,
                   (int8u *) data,
                   0,
                   "NeighborList",
                   emberExiQnames);
}


void emberExiToXmlStructNeighborList(EmberExiGeneratedNeighborList *data) {
  EXI_DEBUG1("Start to XML: NeighborList\n");
  emberExiPrintfLine("<NeighborList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Neighbor_count; i++ )
    if ( data->Neighbor_array != NULL )
      emberExiToXmlStructNeighbor(&(data->Neighbor_array[i]));
  }
  emberExiPrintfLine("</NeighborList>");
  EXI_DEBUG1("End to XML: NeighborList\n");
}




void emberExiPrintStructNeighborListLink(EmberExiGeneratedNeighborListLink *data)
{
  emExiPrintStruct(emberExiNeighborListLinkStructData,
                   (int8u *) data,
                   0,
                   "NeighborListLink",
                   emberExiQnames);
}


void emberExiToXmlStructNeighborListLink(EmberExiGeneratedNeighborListLink *data) {
  EXI_DEBUG1("Start to XML: NeighborListLink\n");
  emberExiPrintfLine("<NeighborListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</NeighborListLink>");
  EXI_DEBUG1("End to XML: NeighborListLink\n");
}




void emberExiPrintStructNotification(EmberExiGeneratedNotification *data)
{
  emExiPrintStruct(emberExiNotificationStructData,
                   (int8u *) data,
                   0,
                   "Notification",
                   emberExiQnames);
}


void emberExiToXmlStructNotification(EmberExiGeneratedNotification *data) {
  EXI_DEBUG1("Start to XML: Notification\n");
  emberExiPrintfLine("<Notification");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  emberExiPrintfLine("  <newResourceURI>%s</newResourceURI>", data->newResourceURI_option);
    if ( data->Resource_option != NULL )
      emberExiToXmlStructResource((data->Resource_option));
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("  <subscriptionURI>%s</subscriptionURI>", data->subscriptionURI);
  emberExiPrintfLine("</Notification>");
  EXI_DEBUG1("End to XML: Notification\n");
}




void emberExiPrintStructOffset(EmberExiGeneratedOffset *data)
{
  emExiPrintStruct(emberExiOffsetStructData,
                   (int8u *) data,
                   0,
                   "Offset",
                   emberExiQnames);
}


void emberExiToXmlStructOffset(EmberExiGeneratedOffset *data) {
  EXI_DEBUG1("Start to XML: Offset\n");
  emberExiPrintfLine("<Offset");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <coolingOffset>%d</coolingOffset>", data->coolingOffset_option);
  emberExiPrintfLine("  <heatingOffset>%d</heatingOffset>", data->heatingOffset_option);
  emberExiPrintfLine("  <loadAdjustmentPercentageOffset>%d</loadAdjustmentPercentageOffset>", data->loadAdjustmentPercentageOffset_option);
  emberExiPrintfLine("</Offset>");
  EXI_DEBUG1("End to XML: Offset\n");
}




void emberExiPrintStructPEVInfo(EmberExiGeneratedPEVInfo *data)
{
  emExiPrintStruct(emberExiPEVInfoStructData,
                   (int8u *) data,
                   0,
                   "PEVInfo",
                   emberExiQnames);
}


void emberExiToXmlStructPEVInfo(EmberExiGeneratedPEVInfo *data) {
  EXI_DEBUG1("Start to XML: PEVInfo\n");
  emberExiPrintfLine("<PEVInfo");
  emberExiPrintfLine(">");
    if ( data->chargingPowerNow != NULL )
      emberExiToXmlStructActivePower((data->chargingPowerNow));
    if ( data->energyRequestNow != NULL )
      emberExiToXmlStructRealEnergy((data->energyRequestNow));
    if ( data->maxForwardPower != NULL )
      emberExiToXmlStructActivePower((data->maxForwardPower));
  emberExiPrintfLine("  <minimumChargingDuration>%d</minimumChargingDuration>", data->minimumChargingDuration);
  emberExiPrintfLine("  <targetStateOfCharge>%d</targetStateOfCharge>", data->targetStateOfCharge);
  emberExiPrintfLine("  <timeChargeIsNeeded>%d</timeChargeIsNeeded>", data->timeChargeIsNeeded);
  emberExiPrintfLine("  <timeChargingStatusPEV>%d</timeChargingStatusPEV>", data->timeChargingStatusPEV);
  emberExiPrintfLine("</PEVInfo>");
  EXI_DEBUG1("End to XML: PEVInfo\n");
}




void emberExiPrintStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data)
{
  emExiPrintStruct(emberExiPowerConfigurationStructData,
                   (int8u *) data,
                   0,
                   "PowerConfiguration",
                   emberExiQnames);
}


void emberExiToXmlStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data) {
  EXI_DEBUG1("Start to XML: PowerConfiguration\n");
  emberExiPrintfLine("<PowerConfiguration");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batteryInstallTime>%d</batteryInstallTime>", data->batteryInstallTime_option);
  emberExiPrintfLine("  <lowChargeThreshold>%d</lowChargeThreshold>", data->lowChargeThreshold_option);
  emberExiPrintfLine("</PowerConfiguration>");
  EXI_DEBUG1("End to XML: PowerConfiguration\n");
}




void emberExiPrintStructPowerStatus(EmberExiGeneratedPowerStatus *data)
{
  emExiPrintStruct(emberExiPowerStatusStructData,
                   (int8u *) data,
                   0,
                   "PowerStatus",
                   emberExiQnames);
}


void emberExiToXmlStructPowerStatus(EmberExiGeneratedPowerStatus *data) {
  EXI_DEBUG1("Start to XML: PowerStatus\n");
  emberExiPrintfLine("<PowerStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batteryStatus>%d</batteryStatus>", data->batteryStatus);
  emberExiPrintfLine("  <changedTime>%d</changedTime>", data->changedTime);
  emberExiPrintfLine("  <currentPowerSource>%d</currentPowerSource>", data->currentPowerSource);
  emberExiPrintfLine("  <estimatedChargeRemaining>%d</estimatedChargeRemaining>", data->estimatedChargeRemaining_option);
  emberExiPrintfLine("  <estimatedTimeRemaining>%d</estimatedTimeRemaining>", data->estimatedTimeRemaining_option);
    if ( data->PEVInfo_option != NULL )
      emberExiToXmlStructPEVInfo((data->PEVInfo_option));
  emberExiPrintfLine("  <sessionTimeOnBattery>%d</sessionTimeOnBattery>", data->sessionTimeOnBattery_option);
  emberExiPrintfLine("  <totalTimeOnBattery>%d</totalTimeOnBattery>", data->totalTimeOnBattery_option);
  emberExiPrintfLine("</PowerStatus>");
  EXI_DEBUG1("End to XML: PowerStatus\n");
}




void emberExiPrintStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data)
{
  emExiPrintStruct(emberExiPowerStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "PowerStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data) {
  EXI_DEBUG1("Start to XML: PowerStatusLink\n");
  emberExiPrintfLine("<PowerStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PowerStatusLink>");
  EXI_DEBUG1("End to XML: PowerStatusLink\n");
}




void emberExiPrintStructPrepayOperationStatus(EmberExiGeneratedPrepayOperationStatus *data)
{
  emExiPrintStruct(emberExiPrepayOperationStatusStructData,
                   (int8u *) data,
                   0,
                   "PrepayOperationStatus",
                   emberExiQnames);
}


void emberExiToXmlStructPrepayOperationStatus(EmberExiGeneratedPrepayOperationStatus *data) {
  EXI_DEBUG1("Start to XML: PrepayOperationStatus\n");
  emberExiPrintfLine("<PrepayOperationStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->creditTypeChange_option != NULL )
      emberExiToXmlStructCreditTypeChange((data->creditTypeChange_option));
  emberExiPrintfLine("  <creditTypeInUse>%d</creditTypeInUse>", data->creditTypeInUse_option);
    if ( data->serviceChange_option != NULL )
      emberExiToXmlStructServiceChange((data->serviceChange_option));
  emberExiPrintfLine("  <serviceStatus>%d</serviceStatus>", data->serviceStatus);
  emberExiPrintfLine("</PrepayOperationStatus>");
  EXI_DEBUG1("End to XML: PrepayOperationStatus\n");
}




void emberExiPrintStructPrepayOperationStatusLink(EmberExiGeneratedPrepayOperationStatusLink *data)
{
  emExiPrintStruct(emberExiPrepayOperationStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "PrepayOperationStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructPrepayOperationStatusLink(EmberExiGeneratedPrepayOperationStatusLink *data) {
  EXI_DEBUG1("Start to XML: PrepayOperationStatusLink\n");
  emberExiPrintfLine("<PrepayOperationStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PrepayOperationStatusLink>");
  EXI_DEBUG1("End to XML: PrepayOperationStatusLink\n");
}




void emberExiPrintStructPrepayment(EmberExiGeneratedPrepayment *data)
{
  emExiPrintStruct(emberExiPrepaymentStructData,
                   (int8u *) data,
                   0,
                   "Prepayment",
                   emberExiQnames);
}


void emberExiToXmlStructPrepayment(EmberExiGeneratedPrepayment *data) {
  EXI_DEBUG1("Start to XML: Prepayment\n");
  emberExiPrintfLine("<Prepayment");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->AccountBalanceLink != NULL )
      emberExiToXmlStructAccountBalanceLink((data->AccountBalanceLink));
    if ( data->ActiveCreditRegisterListLink_option != NULL )
      emberExiToXmlStructActiveCreditRegisterListLink((data->ActiveCreditRegisterListLink_option));
    if ( data->ActiveSupplyInterruptionOverrideListLink_option != NULL )
      emberExiToXmlStructActiveSupplyInterruptionOverrideListLink((data->ActiveSupplyInterruptionOverrideListLink_option));
    if ( data->creditExpiryLevel_option != NULL )
      emberExiToXmlStructAccountingUnit((data->creditExpiryLevel_option));
    if ( data->CreditRegisterListLink != NULL )
      emberExiToXmlStructCreditRegisterListLink((data->CreditRegisterListLink));
    if ( data->lowCreditWarningLevel_option != NULL )
      emberExiToXmlStructAccountingUnit((data->lowCreditWarningLevel_option));
    if ( data->lowEmergencyCreditWarningLevel_option != NULL )
      emberExiToXmlStructAccountingUnit((data->lowEmergencyCreditWarningLevel_option));
  emberExiPrintfLine("  <prepayMode>%d</prepayMode>", data->prepayMode);
    if ( data->PrepayOperationStatusLink != NULL )
      emberExiToXmlStructPrepayOperationStatusLink((data->PrepayOperationStatusLink));
    if ( data->SupplyInterruptionOverrideListLink != NULL )
      emberExiToXmlStructSupplyInterruptionOverrideListLink((data->SupplyInterruptionOverrideListLink));
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      emberExiToXmlStructUsagePoint(&(data->UsagePoint_array[i]));
  }
    if ( data->UsagePointLink_option != NULL )
      emberExiToXmlStructUsagePointLink((data->UsagePointLink_option));
  emberExiPrintfLine("</Prepayment>");
  EXI_DEBUG1("End to XML: Prepayment\n");
}




void emberExiPrintStructPrepaymentLink(EmberExiGeneratedPrepaymentLink *data)
{
  emExiPrintStruct(emberExiPrepaymentLinkStructData,
                   (int8u *) data,
                   0,
                   "PrepaymentLink",
                   emberExiQnames);
}


void emberExiToXmlStructPrepaymentLink(EmberExiGeneratedPrepaymentLink *data) {
  EXI_DEBUG1("Start to XML: PrepaymentLink\n");
  emberExiPrintfLine("<PrepaymentLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PrepaymentLink>");
  EXI_DEBUG1("End to XML: PrepaymentLink\n");
}




void emberExiPrintStructPrepaymentList(EmberExiGeneratedPrepaymentList *data)
{
  emExiPrintStruct(emberExiPrepaymentListStructData,
                   (int8u *) data,
                   0,
                   "PrepaymentList",
                   emberExiQnames);
}


void emberExiToXmlStructPrepaymentList(EmberExiGeneratedPrepaymentList *data) {
  EXI_DEBUG1("Start to XML: PrepaymentList\n");
  emberExiPrintfLine("<PrepaymentList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Prepayment_count; i++ )
    if ( data->Prepayment_array != NULL )
      emberExiToXmlStructPrepayment(&(data->Prepayment_array[i]));
  }
  emberExiPrintfLine("</PrepaymentList>");
  EXI_DEBUG1("End to XML: PrepaymentList\n");
}




void emberExiPrintStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data)
{
  emExiPrintStruct(emberExiPrepaymentListLinkStructData,
                   (int8u *) data,
                   0,
                   "PrepaymentListLink",
                   emberExiQnames);
}


void emberExiToXmlStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data) {
  EXI_DEBUG1("Start to XML: PrepaymentListLink\n");
  emberExiPrintfLine("<PrepaymentListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PrepaymentListLink>");
  EXI_DEBUG1("End to XML: PrepaymentListLink\n");
}




void emberExiPrintStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data)
{
  emExiPrintStruct(emberExiPriceResponseCfgListLinkStructData,
                   (int8u *) data,
                   0,
                   "PriceResponseCfgListLink",
                   emberExiQnames);
}


void emberExiToXmlStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data) {
  EXI_DEBUG1("Start to XML: PriceResponseCfgListLink\n");
  emberExiPrintfLine("<PriceResponseCfgListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PriceResponseCfgListLink>");
  EXI_DEBUG1("End to XML: PriceResponseCfgListLink\n");
}




void emberExiPrintStructProjectionReading(EmberExiGeneratedProjectionReading *data)
{
  emExiPrintStruct(emberExiProjectionReadingStructData,
                   (int8u *) data,
                   0,
                   "ProjectionReading",
                   emberExiQnames);
}


void emberExiToXmlStructProjectionReading(EmberExiGeneratedProjectionReading *data) {
  EXI_DEBUG1("Start to XML: ProjectionReading\n");
  emberExiPrintfLine("<ProjectionReading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      emberExiToXmlStructBillingReadingSetListLink((data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink_option));
  emberExiPrintfLine("</ProjectionReading>");
  EXI_DEBUG1("End to XML: ProjectionReading\n");
}




void emberExiPrintStructProjectionReadingList(EmberExiGeneratedProjectionReadingList *data)
{
  emExiPrintStruct(emberExiProjectionReadingListStructData,
                   (int8u *) data,
                   0,
                   "ProjectionReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructProjectionReadingList(EmberExiGeneratedProjectionReadingList *data) {
  EXI_DEBUG1("Start to XML: ProjectionReadingList\n");
  emberExiPrintfLine("<ProjectionReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ProjectionReading_count; i++ )
    if ( data->ProjectionReading_array != NULL )
      emberExiToXmlStructProjectionReading(&(data->ProjectionReading_array[i]));
  }
  emberExiPrintfLine("</ProjectionReadingList>");
  EXI_DEBUG1("End to XML: ProjectionReadingList\n");
}




void emberExiPrintStructProjectionReadingListLink(EmberExiGeneratedProjectionReadingListLink *data)
{
  emExiPrintStruct(emberExiProjectionReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "ProjectionReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructProjectionReadingListLink(EmberExiGeneratedProjectionReadingListLink *data) {
  EXI_DEBUG1("Start to XML: ProjectionReadingListLink\n");
  emberExiPrintfLine("<ProjectionReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ProjectionReadingListLink>");
  EXI_DEBUG1("End to XML: ProjectionReadingListLink\n");
}




void emberExiPrintStructRPLInstance(EmberExiGeneratedRPLInstance *data)
{
  emExiPrintStruct(emberExiRPLInstanceStructData,
                   (int8u *) data,
                   0,
                   "RPLInstance",
                   emberExiQnames);
}


void emberExiToXmlStructRPLInstance(EmberExiGeneratedRPLInstance *data) {
  EXI_DEBUG1("Start to XML: RPLInstance\n");
  emberExiPrintfLine("<RPLInstance");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <DODAGid>%d</DODAGid>", data->DODAGid);
  emberExiPrintfLine("  <DODAGroot>%d</DODAGroot>", data->DODAGroot);
  emberExiPrintfLine("  <flags>%d</flags>", data->flags);
  emberExiPrintfLine("  <groundedFlag>%d</groundedFlag>", data->groundedFlag);
  emberExiPrintfLine("  <MOP>%d</MOP>", data->MOP);
  emberExiPrintfLine("  <PRF>%d</PRF>", data->PRF);
  emberExiPrintfLine("  <rank>%d</rank>", data->rank);
  emberExiPrintfLine("  <RPLInstanceID>%d</RPLInstanceID>", data->RPLInstanceID);
    if ( data->RPLSourceRoutesListLink_option != NULL )
      emberExiToXmlStructRPLSourceRoutesListLink((data->RPLSourceRoutesListLink_option));
  emberExiPrintfLine("  <versionNumber>%d</versionNumber>", data->versionNumber);
  emberExiPrintfLine("</RPLInstance>");
  EXI_DEBUG1("End to XML: RPLInstance\n");
}




void emberExiPrintStructRPLInstanceList(EmberExiGeneratedRPLInstanceList *data)
{
  emExiPrintStruct(emberExiRPLInstanceListStructData,
                   (int8u *) data,
                   0,
                   "RPLInstanceList",
                   emberExiQnames);
}


void emberExiToXmlStructRPLInstanceList(EmberExiGeneratedRPLInstanceList *data) {
  EXI_DEBUG1("Start to XML: RPLInstanceList\n");
  emberExiPrintfLine("<RPLInstanceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->RPLInstance_count; i++ )
    if ( data->RPLInstance_array != NULL )
      emberExiToXmlStructRPLInstance(&(data->RPLInstance_array[i]));
  }
  emberExiPrintfLine("</RPLInstanceList>");
  EXI_DEBUG1("End to XML: RPLInstanceList\n");
}




void emberExiPrintStructRPLInstanceListLink(EmberExiGeneratedRPLInstanceListLink *data)
{
  emExiPrintStruct(emberExiRPLInstanceListLinkStructData,
                   (int8u *) data,
                   0,
                   "RPLInstanceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructRPLInstanceListLink(EmberExiGeneratedRPLInstanceListLink *data) {
  EXI_DEBUG1("Start to XML: RPLInstanceListLink\n");
  emberExiPrintfLine("<RPLInstanceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RPLInstanceListLink>");
  EXI_DEBUG1("End to XML: RPLInstanceListLink\n");
}




void emberExiPrintStructRPLSourceRoutes(EmberExiGeneratedRPLSourceRoutes *data)
{
  emExiPrintStruct(emberExiRPLSourceRoutesStructData,
                   (int8u *) data,
                   0,
                   "RPLSourceRoutes",
                   emberExiQnames);
}


void emberExiToXmlStructRPLSourceRoutes(EmberExiGeneratedRPLSourceRoutes *data) {
  EXI_DEBUG1("Start to XML: RPLSourceRoutes\n");
  emberExiPrintfLine("<RPLSourceRoutes");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <DestAddress>");
  { int16u i;
    for ( i=0; i<data->DestAddress.length; i++ )
      emberExiPrintfLine("%2x", data->DestAddress.bytes[i]);
  }
  emberExiPrintfLine("</DestAddress>");
  emberExiPrintfLine("  <SourceRoute>");
  { int16u i;
    for ( i=0; i<data->SourceRoute.length; i++ )
      emberExiPrintfLine("%2x", data->SourceRoute.bytes[i]);
  }
  emberExiPrintfLine("</SourceRoute>");
  emberExiPrintfLine("</RPLSourceRoutes>");
  EXI_DEBUG1("End to XML: RPLSourceRoutes\n");
}




void emberExiPrintStructRPLSourceRoutesList(EmberExiGeneratedRPLSourceRoutesList *data)
{
  emExiPrintStruct(emberExiRPLSourceRoutesListStructData,
                   (int8u *) data,
                   0,
                   "RPLSourceRoutesList",
                   emberExiQnames);
}


void emberExiToXmlStructRPLSourceRoutesList(EmberExiGeneratedRPLSourceRoutesList *data) {
  EXI_DEBUG1("Start to XML: RPLSourceRoutesList\n");
  emberExiPrintfLine("<RPLSourceRoutesList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->RPLSourceRoutes_count; i++ )
    if ( data->RPLSourceRoutes_array != NULL )
      emberExiToXmlStructRPLSourceRoutes(&(data->RPLSourceRoutes_array[i]));
  }
  emberExiPrintfLine("</RPLSourceRoutesList>");
  EXI_DEBUG1("End to XML: RPLSourceRoutesList\n");
}




void emberExiPrintStructRPLSourceRoutesListLink(EmberExiGeneratedRPLSourceRoutesListLink *data)
{
  emExiPrintStruct(emberExiRPLSourceRoutesListLinkStructData,
                   (int8u *) data,
                   0,
                   "RPLSourceRoutesListLink",
                   emberExiQnames);
}


void emberExiToXmlStructRPLSourceRoutesListLink(EmberExiGeneratedRPLSourceRoutesListLink *data) {
  EXI_DEBUG1("Start to XML: RPLSourceRoutesListLink\n");
  emberExiPrintfLine("<RPLSourceRoutesListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RPLSourceRoutesListLink>");
  EXI_DEBUG1("End to XML: RPLSourceRoutesListLink\n");
}




void emberExiPrintStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data)
{
  emExiPrintStruct(emberExiRandomizableEventStructData,
                   (int8u *) data,
                   0,
                   "RandomizableEvent",
                   emberExiQnames);
}


void emberExiToXmlStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data) {
  EXI_DEBUG1("Start to XML: RandomizableEvent\n");
  emberExiPrintfLine("<RandomizableEvent");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
  emberExiPrintfLine("</RandomizableEvent>");
  EXI_DEBUG1("End to XML: RandomizableEvent\n");
}




void emberExiPrintStructRateComponent(EmberExiGeneratedRateComponent *data)
{
  emExiPrintStruct(emberExiRateComponentStructData,
                   (int8u *) data,
                   0,
                   "RateComponent",
                   emberExiQnames);
}


void emberExiToXmlStructRateComponent(EmberExiGeneratedRateComponent *data) {
  EXI_DEBUG1("Start to XML: RateComponent\n");
  emberExiPrintfLine("<RateComponent");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveTimeTariffIntervalListLink_option != NULL )
      emberExiToXmlStructActiveTimeTariffIntervalListLink((data->ActiveTimeTariffIntervalListLink_option));
    if ( data->flowRateEndLimit_option != NULL )
      emberExiToXmlStructUnitValueType((data->flowRateEndLimit_option));
    if ( data->flowRateStartLimit_option != NULL )
      emberExiToXmlStructUnitValueType((data->flowRateStartLimit_option));
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
    if ( data->TimeTariffIntervalListLink_option != NULL )
      emberExiToXmlStructTimeTariffIntervalListLink((data->TimeTariffIntervalListLink_option));
  emberExiPrintfLine("</RateComponent>");
  EXI_DEBUG1("End to XML: RateComponent\n");
}




void emberExiPrintStructRateComponentList(EmberExiGeneratedRateComponentList *data)
{
  emExiPrintStruct(emberExiRateComponentListStructData,
                   (int8u *) data,
                   0,
                   "RateComponentList",
                   emberExiQnames);
}


void emberExiToXmlStructRateComponentList(EmberExiGeneratedRateComponentList *data) {
  EXI_DEBUG1("Start to XML: RateComponentList\n");
  emberExiPrintfLine("<RateComponentList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->RateComponent_count; i++ )
    if ( data->RateComponent_array != NULL )
      emberExiToXmlStructRateComponent(&(data->RateComponent_array[i]));
  }
  emberExiPrintfLine("</RateComponentList>");
  EXI_DEBUG1("End to XML: RateComponentList\n");
}




void emberExiPrintStructRateComponentListLink(EmberExiGeneratedRateComponentListLink *data)
{
  emExiPrintStruct(emberExiRateComponentListLinkStructData,
                   (int8u *) data,
                   0,
                   "RateComponentListLink",
                   emberExiQnames);
}


void emberExiToXmlStructRateComponentListLink(EmberExiGeneratedRateComponentListLink *data) {
  EXI_DEBUG1("Start to XML: RateComponentListLink\n");
  emberExiPrintfLine("<RateComponentListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RateComponentListLink>");
  EXI_DEBUG1("End to XML: RateComponentListLink\n");
}




void emberExiPrintStructReading(EmberExiGeneratedReading *data)
{
  emExiPrintStruct(emberExiReadingStructData,
                   (int8u *) data,
                   0,
                   "Reading",
                   emberExiQnames);
}


void emberExiToXmlStructReading(EmberExiGeneratedReading *data) {
  EXI_DEBUG1("Start to XML: Reading\n");
  emberExiPrintfLine("<Reading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  emberExiPrintfLine("  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      emberExiPrintfLine("%2x", data->qualityFlags_option.bytes[i]);
  }
  emberExiPrintfLine("</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod_option));
  emberExiPrintfLine("  <touTier>%d</touTier>", data->touTier_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("  <localID>");
  { int16u i;
    for ( i=0; i<data->localID_option.length; i++ )
      emberExiPrintfLine("%2x", data->localID_option.bytes[i]);
  }
  emberExiPrintfLine("</localID>");
  emberExiPrintfLine("</Reading>");
  EXI_DEBUG1("End to XML: Reading\n");
}




void emberExiPrintStructReadingBase(EmberExiGeneratedReadingBase *data)
{
  emExiPrintStruct(emberExiReadingBaseStructData,
                   (int8u *) data,
                   0,
                   "ReadingBase",
                   emberExiQnames);
}


void emberExiToXmlStructReadingBase(EmberExiGeneratedReadingBase *data) {
  EXI_DEBUG1("Start to XML: ReadingBase\n");
  emberExiPrintfLine("<ReadingBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  emberExiPrintfLine("  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      emberExiPrintfLine("%2x", data->qualityFlags_option.bytes[i]);
  }
  emberExiPrintfLine("</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod_option));
  emberExiPrintfLine("  <touTier>%d</touTier>", data->touTier_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</ReadingBase>");
  EXI_DEBUG1("End to XML: ReadingBase\n");
}




void emberExiPrintStructReadingLink(EmberExiGeneratedReadingLink *data)
{
  emExiPrintStruct(emberExiReadingLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingLink(EmberExiGeneratedReadingLink *data) {
  EXI_DEBUG1("Start to XML: ReadingLink\n");
  emberExiPrintfLine("<ReadingLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingLink>");
  EXI_DEBUG1("End to XML: ReadingLink\n");
}




void emberExiPrintStructReadingList(EmberExiGeneratedReadingList *data)
{
  emExiPrintStruct(emberExiReadingListStructData,
                   (int8u *) data,
                   0,
                   "ReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructReadingList(EmberExiGeneratedReadingList *data) {
  EXI_DEBUG1("Start to XML: ReadingList\n");
  emberExiPrintfLine("<ReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      emberExiToXmlStructReading(&(data->Reading_array[i]));
  }
  emberExiPrintfLine("</ReadingList>");
  EXI_DEBUG1("End to XML: ReadingList\n");
}




void emberExiPrintStructReadingListLink(EmberExiGeneratedReadingListLink *data)
{
  emExiPrintStruct(emberExiReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingListLink(EmberExiGeneratedReadingListLink *data) {
  EXI_DEBUG1("Start to XML: ReadingListLink\n");
  emberExiPrintfLine("<ReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingListLink>");
  EXI_DEBUG1("End to XML: ReadingListLink\n");
}




void emberExiPrintStructReadingSet(EmberExiGeneratedReadingSet *data)
{
  emExiPrintStruct(emberExiReadingSetStructData,
                   (int8u *) data,
                   0,
                   "ReadingSet",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSet(EmberExiGeneratedReadingSet *data) {
  EXI_DEBUG1("Start to XML: ReadingSet\n");
  emberExiPrintfLine("<ReadingSet");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod));
    if ( data->ReadingListLink_option != NULL )
      emberExiToXmlStructReadingListLink((data->ReadingListLink_option));
  emberExiPrintfLine("</ReadingSet>");
  EXI_DEBUG1("End to XML: ReadingSet\n");
}




void emberExiPrintStructReadingSetBase(EmberExiGeneratedReadingSetBase *data)
{
  emExiPrintStruct(emberExiReadingSetBaseStructData,
                   (int8u *) data,
                   0,
                   "ReadingSetBase",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSetBase(EmberExiGeneratedReadingSetBase *data) {
  EXI_DEBUG1("Start to XML: ReadingSetBase\n");
  emberExiPrintfLine("<ReadingSetBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod));
  emberExiPrintfLine("</ReadingSetBase>");
  EXI_DEBUG1("End to XML: ReadingSetBase\n");
}




void emberExiPrintStructReadingSetList(EmberExiGeneratedReadingSetList *data)
{
  emExiPrintStruct(emberExiReadingSetListStructData,
                   (int8u *) data,
                   0,
                   "ReadingSetList",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSetList(EmberExiGeneratedReadingSetList *data) {
  EXI_DEBUG1("Start to XML: ReadingSetList\n");
  emberExiPrintfLine("<ReadingSetList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ReadingSet_count; i++ )
    if ( data->ReadingSet_array != NULL )
      emberExiToXmlStructReadingSet(&(data->ReadingSet_array[i]));
  }
  emberExiPrintfLine("</ReadingSetList>");
  EXI_DEBUG1("End to XML: ReadingSetList\n");
}




void emberExiPrintStructReadingSetListLink(EmberExiGeneratedReadingSetListLink *data)
{
  emExiPrintStruct(emberExiReadingSetListLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingSetListLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingSetListLink(EmberExiGeneratedReadingSetListLink *data) {
  EXI_DEBUG1("Start to XML: ReadingSetListLink\n");
  emberExiPrintfLine("<ReadingSetListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingSetListLink>");
  EXI_DEBUG1("End to XML: ReadingSetListLink\n");
}




void emberExiPrintStructReadingTypeLink(EmberExiGeneratedReadingTypeLink *data)
{
  emExiPrintStruct(emberExiReadingTypeLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingTypeLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingTypeLink(EmberExiGeneratedReadingTypeLink *data) {
  EXI_DEBUG1("Start to XML: ReadingTypeLink\n");
  emberExiPrintfLine("<ReadingTypeLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingTypeLink>");
  EXI_DEBUG1("End to XML: ReadingTypeLink\n");
}




void emberExiPrintStructRealEnergy(EmberExiGeneratedRealEnergy *data)
{
  emExiPrintStruct(emberExiRealEnergyStructData,
                   (int8u *) data,
                   0,
                   "RealEnergy",
                   emberExiQnames);
}


void emberExiToXmlStructRealEnergy(EmberExiGeneratedRealEnergy *data) {
  EXI_DEBUG1("Start to XML: RealEnergy\n");
  emberExiPrintfLine("<RealEnergy");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</RealEnergy>");
  EXI_DEBUG1("End to XML: RealEnergy\n");
}




void emberExiPrintStructRegistrationLink(EmberExiGeneratedRegistrationLink *data)
{
  emExiPrintStruct(emberExiRegistrationLinkStructData,
                   (int8u *) data,
                   0,
                   "RegistrationLink",
                   emberExiQnames);
}


void emberExiToXmlStructRegistrationLink(EmberExiGeneratedRegistrationLink *data) {
  EXI_DEBUG1("Start to XML: RegistrationLink\n");
  emberExiPrintfLine("<RegistrationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RegistrationLink>");
  EXI_DEBUG1("End to XML: RegistrationLink\n");
}




void emberExiPrintStructResource(EmberExiGeneratedResource *data)
{
  emExiPrintStruct(emberExiResourceStructData,
                   (int8u *) data,
                   0,
                   "Resource",
                   emberExiQnames);
}


void emberExiToXmlStructResource(EmberExiGeneratedResource *data) {
  EXI_DEBUG1("Start to XML: Resource\n");
  emberExiPrintfLine("<Resource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</Resource>");
  EXI_DEBUG1("End to XML: Resource\n");
}




void emberExiPrintStructRespondableResource(EmberExiGeneratedRespondableResource *data)
{
  emExiPrintStruct(emberExiRespondableResourceStructData,
                   (int8u *) data,
                   0,
                   "RespondableResource",
                   emberExiQnames);
}


void emberExiToXmlStructRespondableResource(EmberExiGeneratedRespondableResource *data) {
  EXI_DEBUG1("Start to XML: RespondableResource\n");
  emberExiPrintfLine("<RespondableResource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RespondableResource>");
  EXI_DEBUG1("End to XML: RespondableResource\n");
}




void emberExiPrintStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data)
{
  emExiPrintStruct(emberExiRespondableSubscribableIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "RespondableSubscribableIdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: RespondableSubscribableIdentifiedObject\n");
  emberExiPrintfLine("<RespondableSubscribableIdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</RespondableSubscribableIdentifiedObject>");
  EXI_DEBUG1("End to XML: RespondableSubscribableIdentifiedObject\n");
}




void emberExiPrintStructResponse(EmberExiGeneratedResponse *data)
{
  emExiPrintStruct(emberExiResponseStructData,
                   (int8u *) data,
                   0,
                   "Response",
                   emberExiQnames);
}


void emberExiToXmlStructResponse(EmberExiGeneratedResponse *data) {
  EXI_DEBUG1("Start to XML: Response\n");
  emberExiPrintfLine("<Response");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
  emberExiPrintfLine("</Response>");
  EXI_DEBUG1("End to XML: Response\n");
}




void emberExiPrintStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data)
{
  emExiPrintStruct(emberExiResponseSetListLinkStructData,
                   (int8u *) data,
                   0,
                   "ResponseSetListLink",
                   emberExiQnames);
}


void emberExiToXmlStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data) {
  EXI_DEBUG1("Start to XML: ResponseSetListLink\n");
  emberExiPrintfLine("<ResponseSetListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ResponseSetListLink>");
  EXI_DEBUG1("End to XML: ResponseSetListLink\n");
}




void emberExiPrintStructSelfDevice(EmberExiGeneratedSelfDevice *data)
{
  emExiPrintStruct(emberExiSelfDeviceStructData,
                   (int8u *) data,
                   0,
                   "SelfDevice",
                   emberExiQnames);
}


void emberExiToXmlStructSelfDevice(EmberExiGeneratedSelfDevice *data) {
  EXI_DEBUG1("Start to XML: SelfDevice\n");
  emberExiPrintfLine("<SelfDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
  emberExiPrintfLine("</SelfDevice>");
  EXI_DEBUG1("End to XML: SelfDevice\n");
}




void emberExiPrintStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data)
{
  emExiPrintStruct(emberExiSelfDeviceLinkStructData,
                   (int8u *) data,
                   0,
                   "SelfDeviceLink",
                   emberExiQnames);
}


void emberExiToXmlStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data) {
  EXI_DEBUG1("Start to XML: SelfDeviceLink\n");
  emberExiPrintfLine("<SelfDeviceLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SelfDeviceLink>");
  EXI_DEBUG1("End to XML: SelfDeviceLink\n");
}




void emberExiPrintStructServiceChange(EmberExiGeneratedServiceChange *data)
{
  emExiPrintStruct(emberExiServiceChangeStructData,
                   (int8u *) data,
                   0,
                   "ServiceChange",
                   emberExiQnames);
}


void emberExiToXmlStructServiceChange(EmberExiGeneratedServiceChange *data) {
  EXI_DEBUG1("Start to XML: ServiceChange\n");
  emberExiPrintfLine("<ServiceChange");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <newStatus>%d</newStatus>", data->newStatus);
  emberExiPrintfLine("  <startTime>%d</startTime>", data->startTime);
  emberExiPrintfLine("</ServiceChange>");
  EXI_DEBUG1("End to XML: ServiceChange\n");
}




void emberExiPrintStructServiceSupplier(EmberExiGeneratedServiceSupplier *data)
{
  emExiPrintStruct(emberExiServiceSupplierStructData,
                   (int8u *) data,
                   0,
                   "ServiceSupplier",
                   emberExiQnames);
}


void emberExiToXmlStructServiceSupplier(EmberExiGeneratedServiceSupplier *data) {
  EXI_DEBUG1("Start to XML: ServiceSupplier\n");
  emberExiPrintfLine("<ServiceSupplier");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <email>%s</email>", data->email_option);
  emberExiPrintfLine("  <phone>%s</phone>", data->phone_option);
  emberExiPrintfLine("  <providerID>%d</providerID>", data->providerID_option);
  emberExiPrintfLine("  <web>%s</web>", data->web_option);
  emberExiPrintfLine("</ServiceSupplier>");
  EXI_DEBUG1("End to XML: ServiceSupplier\n");
}




void emberExiPrintStructServiceSupplierLink(EmberExiGeneratedServiceSupplierLink *data)
{
  emExiPrintStruct(emberExiServiceSupplierLinkStructData,
                   (int8u *) data,
                   0,
                   "ServiceSupplierLink",
                   emberExiQnames);
}


void emberExiToXmlStructServiceSupplierLink(EmberExiGeneratedServiceSupplierLink *data) {
  EXI_DEBUG1("Start to XML: ServiceSupplierLink\n");
  emberExiPrintfLine("<ServiceSupplierLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ServiceSupplierLink>");
  EXI_DEBUG1("End to XML: ServiceSupplierLink\n");
}




void emberExiPrintStructSetPoint(EmberExiGeneratedSetPoint *data)
{
  emExiPrintStruct(emberExiSetPointStructData,
                   (int8u *) data,
                   0,
                   "SetPoint",
                   emberExiQnames);
}


void emberExiToXmlStructSetPoint(EmberExiGeneratedSetPoint *data) {
  EXI_DEBUG1("Start to XML: SetPoint\n");
  emberExiPrintfLine("<SetPoint");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <coolingSetpoint>%d</coolingSetpoint>", data->coolingSetpoint_option);
  emberExiPrintfLine("  <heatingSetpoint>%d</heatingSetpoint>", data->heatingSetpoint_option);
  emberExiPrintfLine("</SetPoint>");
  EXI_DEBUG1("End to XML: SetPoint\n");
}




void emberExiPrintStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data)
{
  emExiPrintStruct(emberExiSubscribableIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "SubscribableIdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: SubscribableIdentifiedObject\n");
  emberExiPrintfLine("<SubscribableIdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</SubscribableIdentifiedObject>");
  EXI_DEBUG1("End to XML: SubscribableIdentifiedObject\n");
}




void emberExiPrintStructSubscribableList(EmberExiGeneratedSubscribableList *data)
{
  emExiPrintStruct(emberExiSubscribableListStructData,
                   (int8u *) data,
                   0,
                   "SubscribableList",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableList(EmberExiGeneratedSubscribableList *data) {
  EXI_DEBUG1("Start to XML: SubscribableList\n");
  emberExiPrintfLine("<SubscribableList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscribableList>");
  EXI_DEBUG1("End to XML: SubscribableList\n");
}




void emberExiPrintStructSubscribableResource(EmberExiGeneratedSubscribableResource *data)
{
  emExiPrintStruct(emberExiSubscribableResourceStructData,
                   (int8u *) data,
                   0,
                   "SubscribableResource",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableResource(EmberExiGeneratedSubscribableResource *data) {
  EXI_DEBUG1("Start to XML: SubscribableResource\n");
  emberExiPrintfLine("<SubscribableResource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscribableResource>");
  EXI_DEBUG1("End to XML: SubscribableResource\n");
}




void emberExiPrintStructSubscription(EmberExiGeneratedSubscription *data)
{
  emExiPrintStruct(emberExiSubscriptionStructData,
                   (int8u *) data,
                   0,
                   "Subscription",
                   emberExiQnames);
}


void emberExiToXmlStructSubscription(EmberExiGeneratedSubscription *data) {
  EXI_DEBUG1("Start to XML: Subscription\n");
  emberExiPrintfLine("<Subscription");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
    if ( data->Condition_option != NULL )
      emberExiToXmlStructCondition((data->Condition_option));
  emberExiPrintfLine("  <encoding>%d</encoding>", data->encoding);
  emberExiPrintfLine("  <level>%s</level>", data->level);
  emberExiPrintfLine("  <limit>%d</limit>", data->limit);
  emberExiPrintfLine("  <notificationURI>%s</notificationURI>", data->notificationURI);
  emberExiPrintfLine("</Subscription>");
  EXI_DEBUG1("End to XML: Subscription\n");
}




void emberExiPrintStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data)
{
  emExiPrintStruct(emberExiSubscriptionBaseStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionBase",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data) {
  EXI_DEBUG1("Start to XML: SubscriptionBase\n");
  emberExiPrintfLine("<SubscriptionBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  emberExiPrintfLine("</SubscriptionBase>");
  EXI_DEBUG1("End to XML: SubscriptionBase\n");
}




void emberExiPrintStructSubscriptionList(EmberExiGeneratedSubscriptionList *data)
{
  emExiPrintStruct(emberExiSubscriptionListStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionList",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionList(EmberExiGeneratedSubscriptionList *data) {
  EXI_DEBUG1("Start to XML: SubscriptionList\n");
  emberExiPrintfLine("<SubscriptionList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Subscription_count; i++ )
    if ( data->Subscription_array != NULL )
      emberExiToXmlStructSubscription(&(data->Subscription_array[i]));
  }
  emberExiPrintfLine("</SubscriptionList>");
  EXI_DEBUG1("End to XML: SubscriptionList\n");
}




void emberExiPrintStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data)
{
  emExiPrintStruct(emberExiSubscriptionListLinkStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionListLink",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data) {
  EXI_DEBUG1("Start to XML: SubscriptionListLink\n");
  emberExiPrintfLine("<SubscriptionListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscriptionListLink>");
  EXI_DEBUG1("End to XML: SubscriptionListLink\n");
}




void emberExiPrintStructSupplyInterruptionOverride(EmberExiGeneratedSupplyInterruptionOverride *data)
{
  emExiPrintStruct(emberExiSupplyInterruptionOverrideStructData,
                   (int8u *) data,
                   0,
                   "SupplyInterruptionOverride",
                   emberExiQnames);
}


void emberExiToXmlStructSupplyInterruptionOverride(EmberExiGeneratedSupplyInterruptionOverride *data) {
  EXI_DEBUG1("Start to XML: SupplyInterruptionOverride\n");
  emberExiPrintfLine("<SupplyInterruptionOverride");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("</SupplyInterruptionOverride>");
  EXI_DEBUG1("End to XML: SupplyInterruptionOverride\n");
}




void emberExiPrintStructSupplyInterruptionOverrideList(EmberExiGeneratedSupplyInterruptionOverrideList *data)
{
  emExiPrintStruct(emberExiSupplyInterruptionOverrideListStructData,
                   (int8u *) data,
                   0,
                   "SupplyInterruptionOverrideList",
                   emberExiQnames);
}


void emberExiToXmlStructSupplyInterruptionOverrideList(EmberExiGeneratedSupplyInterruptionOverrideList *data) {
  EXI_DEBUG1("Start to XML: SupplyInterruptionOverrideList\n");
  emberExiPrintfLine("<SupplyInterruptionOverrideList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->SupplyInterruptionOverride_count; i++ )
    if ( data->SupplyInterruptionOverride_array != NULL )
      emberExiToXmlStructSupplyInterruptionOverride(&(data->SupplyInterruptionOverride_array[i]));
  }
  emberExiPrintfLine("</SupplyInterruptionOverrideList>");
  EXI_DEBUG1("End to XML: SupplyInterruptionOverrideList\n");
}




void emberExiPrintStructSupplyInterruptionOverrideListLink(EmberExiGeneratedSupplyInterruptionOverrideListLink *data)
{
  emExiPrintStruct(emberExiSupplyInterruptionOverrideListLinkStructData,
                   (int8u *) data,
                   0,
                   "SupplyInterruptionOverrideListLink",
                   emberExiQnames);
}


void emberExiToXmlStructSupplyInterruptionOverrideListLink(EmberExiGeneratedSupplyInterruptionOverrideListLink *data) {
  EXI_DEBUG1("Start to XML: SupplyInterruptionOverrideListLink\n");
  emberExiPrintfLine("<SupplyInterruptionOverrideListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SupplyInterruptionOverrideListLink>");
  EXI_DEBUG1("End to XML: SupplyInterruptionOverrideListLink\n");
}




void emberExiPrintStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data)
{
  emExiPrintStruct(emberExiSupportedLocaleListLinkStructData,
                   (int8u *) data,
                   0,
                   "SupportedLocaleListLink",
                   emberExiQnames);
}


void emberExiToXmlStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data) {
  EXI_DEBUG1("Start to XML: SupportedLocaleListLink\n");
  emberExiPrintfLine("<SupportedLocaleListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SupportedLocaleListLink>");
  EXI_DEBUG1("End to XML: SupportedLocaleListLink\n");
}




void emberExiPrintStructTargetReading(EmberExiGeneratedTargetReading *data)
{
  emExiPrintStruct(emberExiTargetReadingStructData,
                   (int8u *) data,
                   0,
                   "TargetReading",
                   emberExiQnames);
}


void emberExiToXmlStructTargetReading(EmberExiGeneratedTargetReading *data) {
  EXI_DEBUG1("Start to XML: TargetReading\n");
  emberExiPrintfLine("<TargetReading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      emberExiToXmlStructBillingReadingSetListLink((data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink_option));
  emberExiPrintfLine("</TargetReading>");
  EXI_DEBUG1("End to XML: TargetReading\n");
}




void emberExiPrintStructTargetReadingList(EmberExiGeneratedTargetReadingList *data)
{
  emExiPrintStruct(emberExiTargetReadingListStructData,
                   (int8u *) data,
                   0,
                   "TargetReadingList",
                   emberExiQnames);
}


void emberExiToXmlStructTargetReadingList(EmberExiGeneratedTargetReadingList *data) {
  EXI_DEBUG1("Start to XML: TargetReadingList\n");
  emberExiPrintfLine("<TargetReadingList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->TargetReading_count; i++ )
    if ( data->TargetReading_array != NULL )
      emberExiToXmlStructTargetReading(&(data->TargetReading_array[i]));
  }
  emberExiPrintfLine("</TargetReadingList>");
  EXI_DEBUG1("End to XML: TargetReadingList\n");
}




void emberExiPrintStructTargetReadingListLink(EmberExiGeneratedTargetReadingListLink *data)
{
  emExiPrintStruct(emberExiTargetReadingListLinkStructData,
                   (int8u *) data,
                   0,
                   "TargetReadingListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTargetReadingListLink(EmberExiGeneratedTargetReadingListLink *data) {
  EXI_DEBUG1("Start to XML: TargetReadingListLink\n");
  emberExiPrintfLine("<TargetReadingListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TargetReadingListLink>");
  EXI_DEBUG1("End to XML: TargetReadingListLink\n");
}




void emberExiPrintStructTargetReduction(EmberExiGeneratedTargetReduction *data)
{
  emExiPrintStruct(emberExiTargetReductionStructData,
                   (int8u *) data,
                   0,
                   "TargetReduction",
                   emberExiQnames);
}


void emberExiToXmlStructTargetReduction(EmberExiGeneratedTargetReduction *data) {
  EXI_DEBUG1("Start to XML: TargetReduction\n");
  emberExiPrintfLine("<TargetReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</TargetReduction>");
  EXI_DEBUG1("End to XML: TargetReduction\n");
}




void emberExiPrintStructTariffProfile(EmberExiGeneratedTariffProfile *data)
{
  emExiPrintStruct(emberExiTariffProfileStructData,
                   (int8u *) data,
                   0,
                   "TariffProfile",
                   emberExiQnames);
}


void emberExiToXmlStructTariffProfile(EmberExiGeneratedTariffProfile *data) {
  EXI_DEBUG1("Start to XML: TariffProfile\n");
  emberExiPrintfLine("<TariffProfile");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <currency>%d</currency>", data->currency_option);
  emberExiPrintfLine("  <pricePowerOfTenMultiplier>%d</pricePowerOfTenMultiplier>", data->pricePowerOfTenMultiplier_option);
  emberExiPrintfLine("  <primacy>%d</primacy>", data->primacy);
  emberExiPrintfLine("  <rateCode>%s</rateCode>", data->rateCode_option);
    if ( data->RateComponentListLink_option != NULL )
      emberExiToXmlStructRateComponentListLink((data->RateComponentListLink_option));
  emberExiPrintfLine("  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  emberExiPrintfLine("</TariffProfile>");
  EXI_DEBUG1("End to XML: TariffProfile\n");
}




void emberExiPrintStructTariffProfileLink(EmberExiGeneratedTariffProfileLink *data)
{
  emExiPrintStruct(emberExiTariffProfileLinkStructData,
                   (int8u *) data,
                   0,
                   "TariffProfileLink",
                   emberExiQnames);
}


void emberExiToXmlStructTariffProfileLink(EmberExiGeneratedTariffProfileLink *data) {
  EXI_DEBUG1("Start to XML: TariffProfileLink\n");
  emberExiPrintfLine("<TariffProfileLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TariffProfileLink>");
  EXI_DEBUG1("End to XML: TariffProfileLink\n");
}




void emberExiPrintStructTariffProfileList(EmberExiGeneratedTariffProfileList *data)
{
  emExiPrintStruct(emberExiTariffProfileListStructData,
                   (int8u *) data,
                   0,
                   "TariffProfileList",
                   emberExiQnames);
}


void emberExiToXmlStructTariffProfileList(EmberExiGeneratedTariffProfileList *data) {
  EXI_DEBUG1("Start to XML: TariffProfileList\n");
  emberExiPrintfLine("<TariffProfileList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->TariffProfile_count; i++ )
    if ( data->TariffProfile_array != NULL )
      emberExiToXmlStructTariffProfile(&(data->TariffProfile_array[i]));
  }
  emberExiPrintfLine("</TariffProfileList>");
  EXI_DEBUG1("End to XML: TariffProfileList\n");
}




void emberExiPrintStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data)
{
  emExiPrintStruct(emberExiTariffProfileListLinkStructData,
                   (int8u *) data,
                   0,
                   "TariffProfileListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data) {
  EXI_DEBUG1("Start to XML: TariffProfileListLink\n");
  emberExiPrintfLine("<TariffProfileListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TariffProfileListLink>");
  EXI_DEBUG1("End to XML: TariffProfileListLink\n");
}




void emberExiPrintStructTemperature(EmberExiGeneratedTemperature *data)
{
  emExiPrintStruct(emberExiTemperatureStructData,
                   (int8u *) data,
                   0,
                   "Temperature",
                   emberExiQnames);
}


void emberExiToXmlStructTemperature(EmberExiGeneratedTemperature *data) {
  EXI_DEBUG1("Start to XML: Temperature\n");
  emberExiPrintfLine("<Temperature");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <subject>%d</subject>", data->subject);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</Temperature>");
  EXI_DEBUG1("End to XML: Temperature\n");
}




void emberExiPrintStructTextMessage(EmberExiGeneratedTextMessage *data)
{
  emExiPrintStruct(emberExiTextMessageStructData,
                   (int8u *) data,
                   0,
                   "TextMessage",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessage(EmberExiGeneratedTextMessage *data) {
  EXI_DEBUG1("Start to XML: TextMessage\n");
  emberExiPrintfLine("<TextMessage");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <originator>%s</originator>", data->originator_option);
  emberExiPrintfLine("  <priority>%d</priority>", data->priority);
  emberExiPrintfLine("  <textMessage>%s</textMessage>", data->textMessage);
  emberExiPrintfLine("</TextMessage>");
  EXI_DEBUG1("End to XML: TextMessage\n");
}




void emberExiPrintStructTextMessageList(EmberExiGeneratedTextMessageList *data)
{
  emExiPrintStruct(emberExiTextMessageListStructData,
                   (int8u *) data,
                   0,
                   "TextMessageList",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessageList(EmberExiGeneratedTextMessageList *data) {
  EXI_DEBUG1("Start to XML: TextMessageList\n");
  emberExiPrintfLine("<TextMessageList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->TextMessage_count; i++ )
    if ( data->TextMessage_array != NULL )
      emberExiToXmlStructTextMessage(&(data->TextMessage_array[i]));
  }
  emberExiPrintfLine("</TextMessageList>");
  EXI_DEBUG1("End to XML: TextMessageList\n");
}




void emberExiPrintStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data)
{
  emExiPrintStruct(emberExiTextMessageListLinkStructData,
                   (int8u *) data,
                   0,
                   "TextMessageListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data) {
  EXI_DEBUG1("Start to XML: TextMessageListLink\n");
  emberExiPrintfLine("<TextMessageListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TextMessageListLink>");
  EXI_DEBUG1("End to XML: TextMessageListLink\n");
}




void emberExiPrintStructTextResponse(EmberExiGeneratedTextResponse *data)
{
  emExiPrintStruct(emberExiTextResponseStructData,
                   (int8u *) data,
                   0,
                   "TextResponse",
                   emberExiQnames);
}


void emberExiToXmlStructTextResponse(EmberExiGeneratedTextResponse *data) {
  EXI_DEBUG1("Start to XML: TextResponse\n");
  emberExiPrintfLine("<TextResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
  emberExiPrintfLine("</TextResponse>");
  EXI_DEBUG1("End to XML: TextResponse\n");
}




void emberExiPrintStructTime(EmberExiGeneratedTime *data)
{
  emExiPrintStruct(emberExiTimeStructData,
                   (int8u *) data,
                   0,
                   "Time",
                   emberExiQnames);
}


void emberExiToXmlStructTime(EmberExiGeneratedTime *data) {
  EXI_DEBUG1("Start to XML: Time\n");
  emberExiPrintfLine("<Time");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentTime>%d</currentTime>", data->currentTime);
  emberExiPrintfLine("  <dstEndTime>%d</dstEndTime>", data->dstEndTime);
  emberExiPrintfLine("  <dstOffset>%d</dstOffset>", data->dstOffset);
  emberExiPrintfLine("  <dstStartTime>%d</dstStartTime>", data->dstStartTime);
  emberExiPrintfLine("  <localTime>%d</localTime>", data->localTime_option);
  emberExiPrintfLine("  <quality>%d</quality>", data->quality);
  emberExiPrintfLine("  <tzOffset>%d</tzOffset>", data->tzOffset);
  emberExiPrintfLine("</Time>");
  EXI_DEBUG1("End to XML: Time\n");
}




void emberExiPrintStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data)
{
  emExiPrintStruct(emberExiTimeConfigurationStructData,
                   (int8u *) data,
                   0,
                   "TimeConfiguration",
                   emberExiQnames);
}


void emberExiToXmlStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data) {
  EXI_DEBUG1("Start to XML: TimeConfiguration\n");
  emberExiPrintfLine("<TimeConfiguration");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <dstEndRule>");
  { int16u i;
    for ( i=0; i<data->dstEndRule.length; i++ )
      emberExiPrintfLine("%2x", data->dstEndRule.bytes[i]);
  }
  emberExiPrintfLine("</dstEndRule>");
  emberExiPrintfLine("  <dstOffset>%d</dstOffset>", data->dstOffset);
  emberExiPrintfLine("  <dstStartRule>");
  { int16u i;
    for ( i=0; i<data->dstStartRule.length; i++ )
      emberExiPrintfLine("%2x", data->dstStartRule.bytes[i]);
  }
  emberExiPrintfLine("</dstStartRule>");
  emberExiPrintfLine("  <tzOffset>%d</tzOffset>", data->tzOffset);
  emberExiPrintfLine("</TimeConfiguration>");
  EXI_DEBUG1("End to XML: TimeConfiguration\n");
}




void emberExiPrintStructTimeLink(EmberExiGeneratedTimeLink *data)
{
  emExiPrintStruct(emberExiTimeLinkStructData,
                   (int8u *) data,
                   0,
                   "TimeLink",
                   emberExiQnames);
}


void emberExiToXmlStructTimeLink(EmberExiGeneratedTimeLink *data) {
  EXI_DEBUG1("Start to XML: TimeLink\n");
  emberExiPrintfLine("<TimeLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TimeLink>");
  EXI_DEBUG1("End to XML: TimeLink\n");
}




void emberExiPrintStructTimeTariffInterval(EmberExiGeneratedTimeTariffInterval *data)
{
  emExiPrintStruct(emberExiTimeTariffIntervalStructData,
                   (int8u *) data,
                   0,
                   "TimeTariffInterval",
                   emberExiQnames);
}


void emberExiToXmlStructTimeTariffInterval(EmberExiGeneratedTimeTariffInterval *data) {
  EXI_DEBUG1("Start to XML: TimeTariffInterval\n");
  emberExiPrintfLine("<TimeTariffInterval");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->ConsumptionTariffIntervalListLink_option != NULL )
      emberExiToXmlStructConsumptionTariffIntervalListLink((data->ConsumptionTariffIntervalListLink_option));
  emberExiPrintfLine("  <touTier>%d</touTier>", data->touTier);
  emberExiPrintfLine("</TimeTariffInterval>");
  EXI_DEBUG1("End to XML: TimeTariffInterval\n");
}




void emberExiPrintStructTimeTariffIntervalList(EmberExiGeneratedTimeTariffIntervalList *data)
{
  emExiPrintStruct(emberExiTimeTariffIntervalListStructData,
                   (int8u *) data,
                   0,
                   "TimeTariffIntervalList",
                   emberExiQnames);
}


void emberExiToXmlStructTimeTariffIntervalList(EmberExiGeneratedTimeTariffIntervalList *data) {
  EXI_DEBUG1("Start to XML: TimeTariffIntervalList\n");
  emberExiPrintfLine("<TimeTariffIntervalList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->TimeTariffInterval_count; i++ )
    if ( data->TimeTariffInterval_array != NULL )
      emberExiToXmlStructTimeTariffInterval(&(data->TimeTariffInterval_array[i]));
  }
  emberExiPrintfLine("</TimeTariffIntervalList>");
  EXI_DEBUG1("End to XML: TimeTariffIntervalList\n");
}




void emberExiPrintStructTimeTariffIntervalListLink(EmberExiGeneratedTimeTariffIntervalListLink *data)
{
  emExiPrintStruct(emberExiTimeTariffIntervalListLinkStructData,
                   (int8u *) data,
                   0,
                   "TimeTariffIntervalListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTimeTariffIntervalListLink(EmberExiGeneratedTimeTariffIntervalListLink *data) {
  EXI_DEBUG1("Start to XML: TimeTariffIntervalListLink\n");
  emberExiPrintfLine("<TimeTariffIntervalListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TimeTariffIntervalListLink>");
  EXI_DEBUG1("End to XML: TimeTariffIntervalListLink\n");
}




void emberExiPrintStructUnitValueType(EmberExiGeneratedUnitValueType *data)
{
  emExiPrintStruct(emberExiUnitValueTypeStructData,
                   (int8u *) data,
                   0,
                   "UnitValueType",
                   emberExiQnames);
}


void emberExiToXmlStructUnitValueType(EmberExiGeneratedUnitValueType *data) {
  EXI_DEBUG1("Start to XML: UnitValueType\n");
  emberExiPrintfLine("<UnitValueType");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <unit>%d</unit>", data->unit);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</UnitValueType>");
  EXI_DEBUG1("End to XML: UnitValueType\n");
}




void emberExiPrintStructUsagePoint(EmberExiGeneratedUsagePoint *data)
{
  emExiPrintStruct(emberExiUsagePointStructData,
                   (int8u *) data,
                   0,
                   "UsagePoint",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePoint(EmberExiGeneratedUsagePoint *data) {
  EXI_DEBUG1("Start to XML: UsagePoint\n");
  emberExiPrintfLine("<UsagePoint");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
  emberExiPrintfLine("  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  emberExiPrintfLine("  <status>%d</status>", data->status);
    if ( data->MeterReadingListLink_option != NULL )
      emberExiToXmlStructMeterReadingListLink((data->MeterReadingListLink_option));
  emberExiPrintfLine("</UsagePoint>");
  EXI_DEBUG1("End to XML: UsagePoint\n");
}




void emberExiPrintStructUsagePointBase(EmberExiGeneratedUsagePointBase *data)
{
  emExiPrintStruct(emberExiUsagePointBaseStructData,
                   (int8u *) data,
                   0,
                   "UsagePointBase",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointBase(EmberExiGeneratedUsagePointBase *data) {
  EXI_DEBUG1("Start to XML: UsagePointBase\n");
  emberExiPrintfLine("<UsagePointBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
  emberExiPrintfLine("  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("</UsagePointBase>");
  EXI_DEBUG1("End to XML: UsagePointBase\n");
}




void emberExiPrintStructUsagePointLink(EmberExiGeneratedUsagePointLink *data)
{
  emExiPrintStruct(emberExiUsagePointLinkStructData,
                   (int8u *) data,
                   0,
                   "UsagePointLink",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointLink(EmberExiGeneratedUsagePointLink *data) {
  EXI_DEBUG1("Start to XML: UsagePointLink\n");
  emberExiPrintfLine("<UsagePointLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</UsagePointLink>");
  EXI_DEBUG1("End to XML: UsagePointLink\n");
}




void emberExiPrintStructUsagePointList(EmberExiGeneratedUsagePointList *data)
{
  emExiPrintStruct(emberExiUsagePointListStructData,
                   (int8u *) data,
                   0,
                   "UsagePointList",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointList(EmberExiGeneratedUsagePointList *data) {
  EXI_DEBUG1("Start to XML: UsagePointList\n");
  emberExiPrintfLine("<UsagePointList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      emberExiToXmlStructUsagePoint(&(data->UsagePoint_array[i]));
  }
  emberExiPrintfLine("</UsagePointList>");
  EXI_DEBUG1("End to XML: UsagePointList\n");
}




void emberExiPrintStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data)
{
  emExiPrintStruct(emberExiUsagePointListLinkStructData,
                   (int8u *) data,
                   0,
                   "UsagePointListLink",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data) {
  EXI_DEBUG1("Start to XML: UsagePointListLink\n");
  emberExiPrintfLine("<UsagePointListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</UsagePointListLink>");
  EXI_DEBUG1("End to XML: UsagePointListLink\n");
}




void emberExiPrintStructloWPAN(EmberExiGeneratedloWPAN *data)
{
  emExiPrintStruct(emberExiloWPANStructData,
                   (int8u *) data,
                   0,
                   "loWPAN",
                   emberExiQnames);
}


void emberExiToXmlStructloWPAN(EmberExiGeneratedloWPAN *data) {
  EXI_DEBUG1("Start to XML: loWPAN\n");
  emberExiPrintfLine("<loWPAN");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <octetsRx>%d</octetsRx>", data->octetsRx_option);
  emberExiPrintfLine("  <octetsTx>%d</octetsTx>", data->octetsTx_option);
  emberExiPrintfLine("  <packetsRx>%d</packetsRx>", data->packetsRx);
  emberExiPrintfLine("  <packetsTx>%d</packetsTx>", data->packetsTx);
  emberExiPrintfLine("  <rxFragError>%d</rxFragError>", data->rxFragError);
  emberExiPrintfLine("</loWPAN>");
  EXI_DEBUG1("End to XML: loWPAN\n");
}



// number -> string map for printing
const char * const emberExiQnames[] = {
  NULL,        // 0 is the null qname
  "AbstractDevice",
  UNUSED_QNAME, // AbstractFlowReservation
  "AccountBalance",
  "AccountBalanceLink",
  "AccountingUnit",
  "AccumulationBehaviourType",
  "ActiveBillingPeriodListLink",
  "ActiveCreditRegisterListLink",
  "ActiveDERControlListLink",
  "ActiveEndDeviceControlListLink",
  UNUSED_QNAME, // ActiveFlowReservationListLink
  "ActivePower",
  "ActiveProjectionReadingListLink",
  "ActiveSupplyInterruptionOverrideListLink",
  "ActiveTargetReadingListLink",
  "ActiveTextMessageListLink",
  "ActiveTimeTariffIntervalListLink",
  UNUSED_QNAME, // AmpereHour
  UNUSED_QNAME, // ApparentPower
  "ApplianceLoadReduction",
  "ApplianceLoadReductionType",
  "AppliedTargetReduction",
  "AssociatedDERProgramListLink",
  "AssociatedUsagePointLink",
  "BillingMeterReadingBase",
  "BillingPeriod",
  "BillingPeriodList",
  "BillingPeriodListLink",
  "BillingReading",
  "BillingReadingList",
  "BillingReadingListLink",
  "BillingReadingSet",
  "BillingReadingSetList",
  "BillingReadingSetListLink",
  "CRCerrors",
  "Charge",
  "ChargeKind",
  "CommodityType",
  "Condition",
  "Configuration",
  "ConfigurationLink",
  UNUSED_QNAME, // ConnectStatusType
  "ConsumptionBlockType",
  "ConsumptionTariffInterval",
  "ConsumptionTariffIntervalList",
  "ConsumptionTariffIntervalListLink",
  "CostKindType",
  "CreditRegister",
  "CreditRegisterList",
  "CreditRegisterListLink",
  "CreditStatusType",
  "CreditTypeChange",
  "CreditTypeType",
  "CurrencyCode",
  "CurrentDERProgramLink",
  UNUSED_QNAME, // CurrentRMS
  "CurveData",
  "CurvePairType",
  "CustomerAccount",
  UNUSED_QNAME, // CustomerAccountLink
  "CustomerAccountList",
  "CustomerAccountListLink",
  "CustomerAgreement",
  "CustomerAgreementList",
  "CustomerAgreementListLink",
  "DER",
  UNUSED_QNAME, // DERAvailability
  "DERAvailabilityLink",
  UNUSED_QNAME, // DERCapability
  "DERCapabilityLink",
  "DERControl",
  "DERControlBase",
  "DERControlList",
  "DERControlListLink",
  "DERControlType",
  "DERCurve",
  "DERCurveLink",
  "DERCurveList",
  "DERCurveListLink",
  "DERCurveType",
  UNUSED_QNAME, // DERLink
  "DERList",
  "DERListLink",
  "DERProgram",
  UNUSED_QNAME, // DERProgramLink
  "DERProgramList",
  "DERProgramListLink",
  UNUSED_QNAME, // DERSettings
  "DERSettingsLink",
  UNUSED_QNAME, // DERStatus
  "DERStatusLink",
  "DERType",
  "DERUnitRefType",
  "DODAGid",
  "DODAGroot",
  "DRLCCapabilities",
  "DataQualifierType",
  "DateTimeInterval",
  UNUSED_QNAME, // DefaultDERControl
  "DefaultDERControlLink",
  "DemandResponseProgram",
  "DemandResponseProgramLink",
  "DemandResponseProgramList",
  "DemandResponseProgramListLink",
  "DestAddress",
  "DeviceCapability",
  UNUSED_QNAME, // DeviceCapabilityLink
  "DeviceCategoryType",
  "DeviceInformation",
  "DeviceInformationLink",
  "DeviceStatus",
  "DeviceStatusLink",
  "DrResponse",
  "DstRuleType",
  "DutyCycle",
  "EUI64",
  "EndDevice",
  "EndDeviceControl",
  "EndDeviceControlList",
  "EndDeviceControlListLink",
  UNUSED_QNAME, // EndDeviceLink
  "EndDeviceList",
  "EndDeviceListLink",
  "EnvironmentalCost",
  UNUSED_QNAME, // Error
  "Event",
  "EventStatus",
  "File",
  UNUSED_QNAME, // FileLink
  "FileList",
  "FileListLink",
  UNUSED_QNAME, // FileStatus
  "FileStatusLink",
  UNUSED_QNAME, // FixedPointType
  "FixedPowerFactor",
  "FixedVAr",
  "FlowDirectionType",
  UNUSED_QNAME, // FlowReservationRequest
  UNUSED_QNAME, // FlowReservationRequestList
  "FlowReservationRequestListLink",
  UNUSED_QNAME, // FlowReservationResponse
  UNUSED_QNAME, // FlowReservationResponseList
  "FlowReservationResponseListLink",
  "FunctionSetAssignments",
  "FunctionSetAssignmentsBase",
  "FunctionSetAssignmentsList",
  "FunctionSetAssignmentsListLink",
  "HexBinary128",
  "HexBinary16",
  "HexBinary160",
  "HexBinary32",
  "HexBinary48",
  "HexBinary64",
  "HexBinary8",
  "HistoricalReading",
  "HistoricalReadingList",
  "HistoricalReadingListLink",
  "IEEE_802_15_4",
  "IPAddr",
  "IPAddrList",
  "IPAddrListLink",
  "IPInterface",
  "IPInterfaceList",
  "IPInterfaceListLink",
  "IdentifiedObject",
  "Int16",
  "Int32",
  "Int48",
  "Int64",
  "Int8",
  UNUSED_QNAME, // InverterStatusType
  "KindType",
  "LLAckNotRx",
  "LLCSMAFail",
  "LLFramesDropRx",
  "LLFramesDropTx",
  "LLFramesRx",
  "LLFramesTx",
  "LLInterface",
  "LLInterfaceList",
  "LLInterfaceListLink",
  "LLMediaAccessFail",
  "LLOctetsRx",
  "LLOctetsTx",
  "LLRetryCount",
  "LLSecurityErrorRx",
  "Link",
  "List",
  "ListLink",
  "LoadShedAvailability",
  "LoadShedAvailabilityLink",
  UNUSED_QNAME, // LocalControlModeStatusType
  "LocaleType",
  "LogEvent",
  "LogEventList",
  "LogEventListLink",
  "MOP",
  UNUSED_QNAME, // ManufacturerStatusType
  "MessagingProgram",
  "MessagingProgramList",
  "MessagingProgramListLink",
  "MeterReading",
  "MeterReadingBase",
  UNUSED_QNAME, // MeterReadingLink
  "MeterReadingList",
  "MeterReadingListLink",
  UNUSED_QNAME, // MirrorMeterReading
  UNUSED_QNAME, // MirrorMeterReadingList
  UNUSED_QNAME, // MirrorReadingSet
  UNUSED_QNAME, // MirrorUsagePoint
  UNUSED_QNAME, // MirrorUsagePointList
  "MirrorUsagePointListLink",
  "Neighbor",
  "NeighborList",
  "NeighborListLink",
  "Notification",
  UNUSED_QNAME, // NotificationList
  UNUSED_QNAME, // NotificationListLink
  "Offset",
  "OneHourRangeType",
  UNUSED_QNAME, // OperationalModeStatusType
  "PENType",
  "PEVInfo",
  "PINType",
  "PRF",
  "PerCent",
  "PhaseCode",
  "PowerConfiguration",
  "PowerOfTenMultiplierType",
  "PowerSourceType",
  "PowerStatus",
  "PowerStatusLink",
  "PrepayModeType",
  "PrepayOperationStatus",
  "PrepayOperationStatusLink",
  "Prepayment",
  "PrepaymentLink",
  "PrepaymentList",
  "PrepaymentListLink",
  UNUSED_QNAME, // PriceResponse
  UNUSED_QNAME, // PriceResponseCfg
  UNUSED_QNAME, // PriceResponseCfgList
  "PriceResponseCfgListLink",
  "PrimacyType",
  "PriorityType",
  "ProjectionReading",
  "ProjectionReadingList",
  "ProjectionReadingListLink",
  "RPLInstance",
  "RPLInstanceID",
  "RPLInstanceList",
  "RPLInstanceListLink",
  "RPLSourceRoutes",
  "RPLSourceRoutesList",
  "RPLSourceRoutesListLink",
  "RandomizableEvent",
  "RateComponent",
  UNUSED_QNAME, // RateComponentLink
  "RateComponentList",
  "RateComponentListLink",
  UNUSED_QNAME, // ReactivePower
  "Reading",
  "ReadingBase",
  "ReadingLink",
  "ReadingList",
  "ReadingListLink",
  "ReadingSet",
  "ReadingSetBase",
  "ReadingSetList",
  "ReadingSetListLink",
  UNUSED_QNAME, // ReadingType
  "ReadingTypeLink",
  "RealEnergy",
  UNUSED_QNAME, // Registration
  "RegistrationLink",
  "ReservationStatusType",
  "Resource",
  UNUSED_QNAME, // RespondableIdentifiedObject
  "RespondableResource",
  "RespondableSubscribableIdentifiedObject",
  "Response",
  UNUSED_QNAME, // ResponseList
  UNUSED_QNAME, // ResponseListLink
  UNUSED_QNAME, // ResponseSet
  UNUSED_QNAME, // ResponseSetList
  "ResponseSetListLink",
  "RoleFlagsType",
  "SFDIType",
  "SelfDevice",
  "SelfDeviceLink",
  "ServiceChange",
  "ServiceKind",
  "ServiceStatusType",
  "ServiceSupplier",
  "ServiceSupplierLink",
  UNUSED_QNAME, // ServiceSupplierList
  "SetPoint",
  "SignedPerCent",
  "SourceRoute",
  UNUSED_QNAME, // StateOfChargeStatusType
  UNUSED_QNAME, // StorageModeStatusType
  "String16",
  "String192",
  "String20",
  "String32",
  "String42",
  "String6",
  "SubscribableIdentifiedObject",
  "SubscribableList",
  "SubscribableResource",
  "SubscribableType",
  "Subscription",
  "SubscriptionBase",
  "SubscriptionList",
  "SubscriptionListLink",
  "SupplyInterruptionOverride",
  "SupplyInterruptionOverrideList",
  "SupplyInterruptionOverrideListLink",
  UNUSED_QNAME, // SupportedLocale
  UNUSED_QNAME, // SupportedLocaleList
  "SupportedLocaleListLink",
  "TOUType",
  "TargetReading",
  "TargetReadingList",
  "TargetReadingListLink",
  "TargetReduction",
  "TariffProfile",
  "TariffProfileLink",
  "TariffProfileList",
  "TariffProfileListLink",
  "Temperature",
  "TextMessage",
  "TextMessageList",
  "TextMessageListLink",
  "TextResponse",
  "Time",
  "TimeConfiguration",
  "TimeLink",
  "TimeOffsetType",
  "TimeTariffInterval",
  "TimeTariffIntervalList",
  "TimeTariffIntervalListLink",
  "TimeType",
  "UInt16",
  "UInt32",
  "UInt40",
  "UInt48",
  "UInt64",
  "UInt8",
  "UnitType",
  "UnitValueType",
  "UomType",
  "UsagePoint",
  "UsagePointBase",
  "UsagePointLink",
  "UsagePointList",
  "UsagePointListLink",
  "VersionType",
  UNUSED_QNAME, // VoltageRMS
  UNUSED_QNAME, // WattHour
  "accumulationBehaviour",
  "activateTime",
  "address",
  "amount",
  "attributeIdentifier",
  "availabilityDuration",
  "availabilityUpdatePercentChangeThreshold",
  "availabilityUpdatePowerChangeThreshold",
  "availableCredit",
  "averageEnergy",
  "batteryInstallTime",
  "batteryStatus",
  "billLastPeriod",
  "billToDate",
  "calorificValue",
  "capabilityInfo",
  "changedTime",
  "chargingPowerNow",
  "commodity",
  "consumeThreshold",
  "consumptionBlock",
  "conversionFactor",
  "coolingOffset",
  "coolingSetpoint",
  "costKind",
  "costLevel",
  "createdDateTime",
  "creationTime",
  "creditAmount",
  "creditExpiryLevel",
  "creditStatus",
  "creditType",
  "creditTypeChange",
  "creditTypeInUse",
  "currency",
  "currentLocale",
  "currentPowerSource",
  "currentStatus",
  "currentTime",
  "curveType",
  "customerAccount",
  "customerName",
  "dataQualifier",
  "dateTime",
  "dateTimeRegistered",
  "description",
  "deviceCategory",
  "deviceLFDI",
  "displacement",
  "drProgramMandatory",
  "dstEndRule",
  "dstEndTime",
  "dstOffset",
  "dstStartRule",
  "dstStartTime",
  "duration",
  "durationRequested",
  "effectiveTime",
  "email",
  "emergencyCredit",
  "emergencyCreditStatus",
  "encoding",
  "endDeviceLFDI",
  "energyAvailable",
  "energyRequestNow",
  "energyRequested",
  "energyUnit",
  "estimatedChargeRemaining",
  "estimatedTimeRemaining",
  "excitation",
  "extendedData",
  "fileURI",
  "flags",
  "flowDirection",
  "flowRateEndLimit",
  "flowRateStartLimit",
  "functionSet",
  "functionsImplemented",
  "genConnectStatus",
  "groundedFlag",
  "heatingOffset",
  "heatingSetpoint",
  "ifDescr",
  "ifHighSpeed",
  "ifInBroadcastPkts",
  "ifInDiscards",
  "ifInErrors",
  "ifInMulticastPkts",
  "ifInOctets",
  "ifInUcastPkts",
  "ifInUnknownProtos",
  "ifIndex",
  "ifMtu",
  "ifName",
  "ifOperStatus",
  "ifOutBroadcastPkts",
  "ifOutDiscards",
  "ifOutErrors",
  "ifOutMulticastPkts",
  "ifOutOctets",
  "ifOutUcastPkts",
  "ifPromiscuousMode",
  "ifSpeed",
  "ifType",
  "interval",
  "intervalLength",
  "inverterStatus",
  "isChild",
  "kind",
  "lFDI",
  "lastResetTime",
  "lastUpdateTime",
  "lastUpdatedTime",
  "level",
  "limit",
  "linkLayerType",
  "linkQuality",
  "loWPAN",
  "loadAdjustmentPercentageOffset",
  "loadPercent",
  "loadShedDeviceCategory",
  "loadShiftForward",
  "localControlModeStatus",
  "localID",
  "localTime",
  "locale",
  "logEventCode",
  "logEventID",
  "logEventPEN",
  "lowChargeThreshold",
  "lowCreditWarningLevel",
  "lowEmergencyCreditWarningLevel",
  "lowerLimit",
  "lowerThreshold",
  "mRID",
  "mRIDType",
  "manufacturerStatus",
  "maxChargeDuration",
  "maxDemand",
  "maxForwardPower",
  "maxNumberOfIntervals",
  "maxReductionThreshold",
  "maxRetryDuration",
  "mfDate",
  "mfHwVer",
  "mfID",
  "mfInfo",
  "mfModel",
  "mfSerNum",
  "mfVer",
  "minimumChargingDuration",
  "modesSupported",
  "monetaryUnit",
  "multiplier",
  "newResourceURI",
  "newStatus",
  "newType",
  "nextRequestAttempt",
  "nextUpdateTime",
  "normalValue",
  "notificationURI",
  "numCostLevels",
  "numberOfConsumptionBlocks",
  "numberOfTouTiers",
  "octetsRx",
  "octetsTx",
  "onCount",
  "opModFixedFlow",
  "opModFixedPF",
  "opModFixedVAr",
  "opModFixedW",
  "opModFreqWatt",
  "opModHVRT",
  "opModLVRT",
  "opModVoltVAr",
  "opModVoltWatt",
  "opModWattPF",
  "opState",
  "opTime",
  "operationalModeStatus",
  "optionsImplemented",
  "originator",
  "overrideDuration",
  "pIN",
  "packetsRx",
  "packetsTx",
  "phase",
  "phone",
  "potentiallySuperseded",
  "potentiallySupersededTime",
  "powerAvailable",
  "powerOfTenMultiplier",
  "powerRequested",
  "prepayMode",
  "price",
  "pricePowerOfTenMultiplier",
  "primacy",
  "primaryPower",
  "priority",
  "profileID",
  "providerID",
  "quality",
  "qualityFlags",
  "rampDecTms",
  "rampIncTms",
  "rampPT1Tms",
  "rampTms",
  "randomizeDuration",
  "randomizeStart",
  "rank",
  "rateCode",
  "readingTime",
  "reason",
  "reasonCode",
  "refType",
  "request503Count",
  "requestFailCount",
  "reservationStatus",
  "reserveChargePercent",
  "reservePercent",
  "roleFlags",
  "rtgA",
  "rtgAh",
  "rtgMaxChargeRate",
  "rtgMaxDischargeRate",
  "rtgMinPF",
  "rtgMinPFUnder",
  "rtgVA",
  "rtgVAr",
  "rtgVArNeg",
  "rtgW",
  "rtgWh",
  "rxFragError",
  "sFDI",
  "secondaryPower",
  "serviceAccount",
  "serviceCategoryKind",
  "serviceChange",
  "serviceLocation",
  "serviceStatus",
  "sessionTimeOnBattery",
  "setGenConnect",
  "setGradW",
  "setMaxChargeRate",
  "setMaxDischargeRate",
  "setMaxVA",
  "setMaxVAr",
  "setMaxVArNeg",
  "setMaxW",
  "setMinPF",
  "setMinPFUnder",
  "setStorConnect",
  "setVRef",
  "setVRefOfs",
  "sheddablePercent",
  "sheddablePower",
  "shortAddress",
  "size",
  "start",
  "startTime",
  "startValue",
  "statVArAvail",
  "statWAvail",
  "stateOfChargeStatus",
  "status",
  "statusTime",
  "statusTimeStamp",
  "storConnectStatus",
  "storageModeStatus",
  "subIntervalLength",
  "subject",
  "subscribedResource",
  "subscriptionURI",
  "supplyLimit",
  "swActTime",
  "swVer",
  "targetStateOfCharge",
  "textMessage",
  "tieredConsumptionBlocks",
  "timeChargeIsNeeded",
  "timeChargingStatusPEV",
  "timePeriod",
  "token",
  "totalTimeOnBattery",
  "touTier",
  "type",
  "tzOffset",
  "unit",
  "uom",
  "updatedTime",
  "upperLimit",
  "upperThreshold",
  "userDeviceName",
  "value",
  "version",
  "versionNumber",
  "web",
  "xMultiplier",
  "xvalue",
  "yMultiplier",
  "yRefType",
  "yvalue",
  "all",
  "href",
  "replyTo",
  "responseRequired",
  "results",
  "subscribable",
  NULL         // helpful terminator
};
