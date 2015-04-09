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
#define EMBER_EXI_STRUCT EmberExiGeneratedAccountBalance // index 1
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AccountBalance, 5, 0, 2101, 24, 0),
    EMBER_EXI_SUBSTRUCT(availableCredit, 1, 0, availableCredit, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_CH(creditStatus, UNSIGNED_INTEGER, 3, creditStatus_option),
    EMBER_EXI_SUBSTRUCT_OPTION(emergencyCredit, 0, 1, emergencyCredit, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_CH(emergencyCreditStatus, UNSIGNED_INTEGER, 4, emergencyCreditStatus_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAccountBalanceLink // index 25
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AccountBalanceLink, 1, 0, 1321, 6, 1),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAccountingUnit // index 31
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AccountingUnit, 0, 0, 65535, 21, 2),
    EMBER_EXI_SUBSTRUCT_OPTION(energyUnit, 0, 1, energyUnit, EmberExiGeneratedRealEnergy, emberExiRealEnergyStructDataIndex),
    EMBER_EXI_CH(monetaryUnit, UNSIGNED_INTEGER, 0, monetaryUnit_option),
    EMBER_EXI_CH(multiplier, INTEGER, 1, multiplier_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 2, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActivation // index 52
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Activation, 0, 0, 65535, 12, 4),
    EMBER_EXI_CH(activateTime, INTEGER, 255, activateTime),
    EMBER_EXI_CH(currentTime, INTEGER, 255, currentTime),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveBillingPeriodListLink // index 64
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveBillingPeriodListLink, 2, 0, 1357, 6, 5),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveChargeReservationListLink // index 70
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveChargeReservationListLink, 2, 0, 1357, 6, 6),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveCreditRegisterListLink // index 76
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveCreditRegisterListLink, 2, 0, 1357, 6, 7),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveDERControlListLink // index 82
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveDERControlListLink, 2, 0, 1357, 6, 8),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveEndDeviceControlListLink // index 88
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveEndDeviceControlListLink, 2, 0, 1357, 6, 9),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActivePower // index 94
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActivePower, 0, 0, 65535, 15, 10),
    EMBER_EXI_CH(multiplier, INTEGER, 0, multiplier_option),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 1, unit_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 2, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActivePowerChargeRate // index 109
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActivePowerChargeRate, 0, 0, 65535, 15, 11),
    EMBER_EXI_CH(multiplier, INTEGER, 0, multiplier_option),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 1, unit_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 2, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveProjectionReadingListLink // index 124
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveProjectionReadingListLink, 2, 0, 1357, 6, 12),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveSupplyInterruptionOverrideListLink // index 130
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveSupplyInterruptionOverrideListLink, 2, 0, 1357, 6, 13),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTargetReadingListLink // index 136
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTargetReadingListLink, 2, 0, 1357, 6, 14),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTextMessageListLink // index 142
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTextMessageListLink, 2, 0, 1357, 6, 15),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTimeTariffIntervalListLink // index 148
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTimeTariffIntervalListLink, 2, 0, 1357, 6, 16),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAmpereHour // index 154
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AmpereHour, 0, 0, 65535, 15, 17),
    EMBER_EXI_CH(multiplier, INTEGER, 0, multiplier_option),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 1, unit_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 2, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingPeriod // index 169
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingPeriod, 5, 2, 1252, 12, 18),
    EMBER_EXI_SUBSTRUCT_OPTION(interval, 0, 1, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingPeriodList // index 181
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingPeriodList, 7, 0, 1330, 12, 19),
    EMBER_EXI_SUBSTRUCT_ARRAY(BillingPeriod, 0, 255, BillingPeriod, EmberExiGeneratedBillingPeriod, emberExiBillingPeriodStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedBillingPeriodListLink // index 193
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_BillingPeriodListLink, 2, 0, 1357, 6, 20),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCharge // index 199
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Charge, 5, 5, 1495, 9, 21),
    EMBER_EXI_CH(kind, UNSIGNED_INTEGER, 4, kind_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargeList // index 208
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargeList, 7, 0, 1330, 12, 23),
    EMBER_EXI_SUBSTRUCT_ARRAY(Charge, 0, 255, Charge, EmberExiGeneratedCharge, emberExiChargeStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargeListLink // index 220
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargeListLink, 2, 0, 1357, 6, 24),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargeReservation // index 226
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargeReservation, 5, 2, 1252, 21, 25),
    EMBER_EXI_SUBSTRUCT_OPTION(ChargerLink, 0, 1, ChargerLink, EmberExiGeneratedChargerLink, emberExiChargerLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(scheduledInterval, 1, 0, scheduledInterval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargeReservationList // index 247
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargeReservationList, 7, 0, 1330, 12, 26),
    EMBER_EXI_SUBSTRUCT_ARRAY(ChargeReservation, 0, 255, ChargeReservation, EmberExiGeneratedChargeReservation, emberExiChargeReservationStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargeReservationListLink // index 259
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargeReservationListLink, 2, 0, 1357, 6, 27),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCharger // index 265
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Charger, 5, 2, 1252, 27, 28),
    EMBER_EXI_SUBSTRUCT_OPTION(ChargerStatus, 0, 1, ChargerStatus, EmberExiGeneratedChargerStatus, emberExiChargerStatusStructDataIndex),
    EMBER_EXI_SUBSTRUCT(powerRequired, 1, 0, powerRequired, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_SUBSTRUCT(rate, 1, 0, rate, EmberExiGeneratedActivePowerChargeRate, emberExiActivePowerChargeRateStructDataIndex),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargerLink // index 292
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargerLink, 1, 0, 1321, 6, 29),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargerListLink // index 298
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargerListLink, 2, 0, 1357, 6, 30),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedChargerStatus // index 304
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ChargerStatus, 0, 0, 65535, 12, 31),
    EMBER_EXI_CH(batChaSt, UNSIGNED_INTEGER, 255, batChaSt),
    EMBER_EXI_CH(chaTms, INTEGER, 0, chaTms_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCondition // index 316
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Condition, 0, 0, 65535, 15, 33),
    EMBER_EXI_CH(attributeIdentifier, UNSIGNED_INTEGER, 255, attributeIdentifier),
    EMBER_EXI_CH(lowerThreshold, INTEGER, 255, lowerThreshold),
    EMBER_EXI_CH(upperThreshold, INTEGER, 255, upperThreshold),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfiguration // index 331
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Configuration, 5, 2, 1252, 24, 34),
    EMBER_EXI_CH_STRING(locale, STRING, 255, locale),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerConfiguration, 0, 1, PowerConfiguration, EmberExiGeneratedPowerConfiguration, emberExiPowerConfigurationStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeConfiguration, 0, 1, TimeConfiguration, EmberExiGeneratedTimeConfiguration, emberExiTimeConfigurationStructDataIndex),
    EMBER_EXI_CH_STRING(userDeviceName, STRING, 255, userDeviceName),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfigurationLink // index 355
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConfigurationLink, 1, 0, 1321, 6, 35),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConsumptionTariffInterval // index 361
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConsumptionTariffInterval, 0, 0, 65535, 18, 36),
    EMBER_EXI_SUBSTRUCT_ARRAY(Cost, 0, 255, Cost, EmberExiGeneratedCost, emberExiCostStructDataIndex),
    EMBER_EXI_CH(price, INTEGER, 0, price_option),
    EMBER_EXI_CH(startValue, UNSIGNED_INTEGER, 255, startValue),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCost // index 379
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Cost, 0, 0, 65535, 12, 38),
    EMBER_EXI_CH(amount, INTEGER, 255, amount),
    EMBER_EXI_CH(costKind, UNSIGNED_INTEGER, 255, costKind),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditRegister // index 391
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditRegister, 5, 2, 1252, 21, 40),
    EMBER_EXI_SUBSTRUCT(creditAmount, 1, 0, creditAmount, EmberExiGeneratedAccountingUnit, emberExiAccountingUnitStructDataIndex),
    EMBER_EXI_CH(creditType, UNSIGNED_INTEGER, 4, creditType_option),
    EMBER_EXI_CH(effectiveTime, INTEGER, 255, effectiveTime),
    EMBER_EXI_CH_STRING(token, STRING, 255, token),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditRegisterList // index 412
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditRegisterList, 7, 0, 1330, 12, 41),
    EMBER_EXI_SUBSTRUCT_ARRAY(CreditRegister, 0, 255, CreditRegister, EmberExiGeneratedCreditRegister, emberExiCreditRegisterStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditRegisterListLink // index 424
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditRegisterListLink, 2, 0, 1357, 6, 42),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCreditTypeChange // index 430
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CreditTypeChange, 0, 0, 65535, 12, 44),
    EMBER_EXI_CH(newType, UNSIGNED_INTEGER, 255, newType),
    EMBER_EXI_CH(startTime, INTEGER, 255, startTime),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAccount // index 442
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAccount, 5, 6, 904, 57, 47),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveBillingPeriodListLink, 0, 1, ActiveBillingPeriodListLink, EmberExiGeneratedActiveBillingPeriodListLink, emberExiActiveBillingPeriodListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveProjectionReadingListLink, 0, 1, ActiveProjectionReadingListLink, EmberExiGeneratedActiveProjectionReadingListLink, emberExiActiveProjectionReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveTargetReadingListLink, 0, 1, ActiveTargetReadingListLink, EmberExiGeneratedActiveTargetReadingListLink, emberExiActiveTargetReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(BillingPeriodListLink, 0, 1, BillingPeriodListLink, EmberExiGeneratedBillingPeriodListLink, emberExiBillingPeriodListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ChargeListLink, 0, 1, ChargeListLink, EmberExiGeneratedChargeListLink, emberExiChargeListLinkStructDataIndex),
    EMBER_EXI_CH(currency, UNSIGNED_INTEGER, 7, currency_option),
    EMBER_EXI_SUBSTRUCT_OPTION(HistoricalReadingListLink, 0, 1, HistoricalReadingListLink, EmberExiGeneratedHistoricalReadingListLink, emberExiHistoricalReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ProjectionReadingListLink, 0, 1, ProjectionReadingListLink, EmberExiGeneratedProjectionReadingListLink, emberExiProjectionReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TargetReadingListLink, 0, 1, TargetReadingListLink, EmberExiGeneratedTargetReadingListLink, emberExiTargetReadingListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAccountLink // index 499
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAccountLink, 1, 0, 1321, 6, 48),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDER // index 505
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DER, 5, 0, 2101, 33, 49),
    EMBER_EXI_SUBSTRUCT_OPTION(ahRating, 0, 1, ahRating, EmberExiGeneratedAmpereHour, emberExiAmpereHourStructDataIndex),
    EMBER_EXI_SUBSTRUCT(DERStatusLink, 1, 0, DERStatusLink, EmberExiGeneratedDERStatusLink, emberExiDERStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(nominalVoltage, 1, 0, nominalVoltage, EmberExiGeneratedVoltage, emberExiVoltageStructDataIndex),
    EMBER_EXI_SUBSTRUCT(powerLimit, 1, 0, powerLimit, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERControl // index 538
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERControl, 5, 2, 1252, 42, 50),
    EMBER_EXI_CH(gnBlk, BOOLEAN, 4, gnBlk_option),
    EMBER_EXI_CH(gnCtl, BOOLEAN, 5, gnCtl_option),
    EMBER_EXI_CH(gnRL, BOOLEAN, 6, gnRL_option),
    EMBER_EXI_SUBSTRUCT(maxOperatingPower, 1, 0, maxOperatingPower, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_SUBSTRUCT(scheduledInterval, 1, 0, scheduledInterval, EmberExiGeneratedRandomizedDateTimeInterval, emberExiRandomizedDateTimeIntervalStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(Status, 0, 1, Status, EmberExiGeneratedStatus, emberExiStatusStructDataIndex),
    EMBER_EXI_SUBSTRUCT(targetPowerFactor, 1, 0, targetPowerFactor, EmberExiGeneratedPowerFactor, emberExiPowerFactorStructDataIndex),
    EMBER_EXI_CH(varSupportMode, BOOLEAN, 255, varSupportMode),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERControlList // index 580
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERControlList, 7, 0, 1330, 12, 51),
    EMBER_EXI_SUBSTRUCT_ARRAY(DERControl, 0, 255, DERControl, EmberExiGeneratedDERControl, emberExiDERControlStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERControlListLink // index 592
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERControlListLink, 2, 0, 1357, 6, 52),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERLink // index 598
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERLink, 1, 0, 1321, 6, 53),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERListLink // index 604
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERListLink, 2, 0, 1357, 6, 54),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgram // index 610
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgram, 5, 2, 1252, 33, 55),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveChargeReservationListLink, 0, 1, ActiveChargeReservationListLink, EmberExiGeneratedActiveChargeReservationListLink, emberExiActiveChargeReservationListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveDERControlListLink, 0, 1, ActiveDERControlListLink, EmberExiGeneratedActiveDERControlListLink, emberExiActiveDERControlListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ChargeReservationListLink, 0, 1, ChargeReservationListLink, EmberExiGeneratedChargeReservationListLink, emberExiChargeReservationListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERControlListLink, 0, 1, DERControlListLink, EmberExiGeneratedDERControlListLink, emberExiDERControlListLinkStructDataIndex),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgramList // index 643
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgramList, 7, 0, 1330, 12, 56),
    EMBER_EXI_SUBSTRUCT_ARRAY(DERProgram, 0, 255, DERProgram, EmberExiGeneratedDERProgram, emberExiDERProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgramListLink // index 655
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgramListLink, 2, 0, 1357, 6, 57),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERStatus // index 661
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERStatus, 5, 2, 1252, 27, 58),
    EMBER_EXI_CH(estimatedTimeRemaining, INTEGER, 255, estimatedTimeRemaining),
    EMBER_EXI_CH(stateOfCharge, UNSIGNED_INTEGER, 255, stateOfCharge),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 4, status_option),
    EMBER_EXI_CH(statusTime, INTEGER, 255, statusTime),
    EMBER_EXI_CH(testResult, UNSIGNED_INTEGER, 5, testResult_option),
    EMBER_EXI_CH(voltageHigh, BOOLEAN, 6, voltageHigh_option),
    EMBER_EXI_CH(voltageLow, BOOLEAN, 7, voltageLow_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERStatusLink // index 688
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERStatusLink, 1, 0, 1321, 6, 59),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDateTimeInterval // index 694
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DateTimeInterval, 0, 0, 65535, 12, 61),
    EMBER_EXI_CH(duration, INTEGER, 255, duration),
    EMBER_EXI_CH(start, INTEGER, 255, start),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgram // index 706
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgram, 5, 2, 1252, 21, 62),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveEndDeviceControlListLink, 0, 1, ActiveEndDeviceControlListLink, EmberExiGeneratedActiveEndDeviceControlListLink, emberExiActiveEndDeviceControlListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceControlListLink, 0, 1, EndDeviceControlListLink, EmberExiGeneratedEndDeviceControlListLink, emberExiEndDeviceControlListLinkStructDataIndex),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramLink // index 727
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramLink, 1, 0, 1321, 6, 63),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramList // index 733
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramList, 7, 0, 1330, 12, 64),
    EMBER_EXI_SUBSTRUCT_ARRAY(DemandResponseProgram, 0, 255, DemandResponseProgram, EmberExiGeneratedDemandResponseProgram, emberExiDemandResponseProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramListLink // index 745
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramListLink, 2, 0, 1357, 6, 65),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceCapability // index 751
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceCapability, 5, 11, 1078, 60, 66),
    EMBER_EXI_SUBSTRUCT_OPTION(ConfigurationLink, 0, 1, ConfigurationLink, EmberExiGeneratedConfigurationLink, emberExiConfigurationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceInformationLink, 0, 1, DeviceInformationLink, EmberExiGeneratedDeviceInformationLink, emberExiDeviceInformationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceGroupListLink, 0, 1, EndDeviceGroupListLink, EmberExiGeneratedEndDeviceGroupListLink, emberExiEndDeviceGroupListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceListLink, 0, 1, EndDeviceListLink, EmberExiGeneratedEndDeviceListLink, emberExiEndDeviceListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(LogEventListLink, 0, 1, LogEventListLink, EmberExiGeneratedLogEventListLink, emberExiLogEventListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MirrorUsagePointListLink, 0, 1, MirrorUsagePointListLink, EmberExiGeneratedMirrorUsagePointListLink, emberExiMirrorUsagePointListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(NetworkStatusLink, 0, 1, NetworkStatusLink, EmberExiGeneratedNetworkStatusLink, emberExiNetworkStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerStatusLink, 0, 1, PowerStatusLink, EmberExiGeneratedPowerStatusLink, emberExiPowerStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SubscriptionListLink, 0, 1, SubscriptionListLink, EmberExiGeneratedSubscriptionListLink, emberExiSubscriptionListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceCapabilityLink // index 811
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceCapabilityLink, 1, 0, 1321, 6, 67),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformation // index 817
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformation, 5, 0, 2101, 45, 68),
    EMBER_EXI_CH(gUID, BINARY, 255, gUID),
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

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformationLink // index 862
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformationLink, 1, 0, 1321, 6, 69),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatus // index 868
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatus, 5, 0, 2101, 30, 70),
    EMBER_EXI_CH(changedTime, INTEGER, 255, changedTime),
    EMBER_EXI_CH(onCount, UNSIGNED_INTEGER, 3, onCount_option),
    EMBER_EXI_CH(opState, UNSIGNED_INTEGER, 4, opState_option),
    EMBER_EXI_CH(opTime, INTEGER, 5, opTime_option),
    EMBER_EXI_SUBSTRUCT_ARRAY(Temperature, 0, 255, Temperature, EmberExiGeneratedTemperature, emberExiTemperatureStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeLink, 0, 1, TimeLink, EmberExiGeneratedTimeLink, emberExiTimeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatusLink // index 898
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatusLink, 1, 0, 1321, 6, 71),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDocument // index 904
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Document, 5, 2, 1252, 18, 72),
    EMBER_EXI_CH_STRING(category, STRING, 0, category_option),
    EMBER_EXI_CH(createdDateTime, INTEGER, 4, createdDateTime_option),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 5, status_option),
    EMBER_EXI_CH(subject, BINARY, 6, subject_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDrResponse // index 922
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DrResponse, 5, 9, 2122, 27, 73),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_SUBSTRUCT_ARRAY(Offset, 0, 255, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 255, overrideDuration),
    EMBER_EXI_SUBSTRUCT_OPTION(SetPoint, 0, 1, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDutyCycle // index 949
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DutyCycle, 0, 0, 65535, 9, 74),
    EMBER_EXI_CH(normalValue, UNSIGNED_INTEGER, 255, normalValue),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDevice // index 958
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDevice, 5, 2, 1252, 45, 75),
    EMBER_EXI_CH(category, BINARY, 4, category_option),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceStatusLink, 0, 1, DeviceStatusLink, EmberExiGeneratedDeviceStatusLink, emberExiDeviceStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceGroupListLink, 0, 1, EndDeviceGroupListLink, EmberExiGeneratedEndDeviceGroupListLink, emberExiEndDeviceGroupListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FileListLink, 0, 1, FileListLink, EmberExiGeneratedFileListLink, emberExiFileListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(LoadShedAvailabilityListLink, 0, 1, LoadShedAvailabilityListLink, EmberExiGeneratedLoadShedAvailabilityListLink, emberExiLoadShedAvailabilityListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(RegistrationLink, 0, 1, RegistrationLink, EmberExiGeneratedRegistrationLink, emberExiRegistrationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SubscriptionListLink, 0, 1, SubscriptionListLink, EmberExiGeneratedSubscriptionListLink, emberExiSubscriptionListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControl // index 1003
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControl, 5, 2, 1252, 57, 77),
    EMBER_EXI_CH(creationTime, INTEGER, 255, creationTime),
    EMBER_EXI_CH(deviceCategory, BINARY, 255, deviceCategory),
    EMBER_EXI_CH(drProgramMandatory, BOOLEAN, 255, drProgramMandatory),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_CH(loadShiftForward, BOOLEAN, 255, loadShiftForward),
    EMBER_EXI_SUBSTRUCT_ARRAY(Offset, 0, 255, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 255, overrideDuration),
    EMBER_EXI_SUBSTRUCT(scheduledInterval, 1, 0, scheduledInterval, EmberExiGeneratedRandomizedDateTimeInterval, emberExiRandomizedDateTimeIntervalStructDataIndex),
    EMBER_EXI_SUBSTRUCT_ARRAY(SetPoint, 0, 2, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
    EMBER_EXI_SUBSTRUCT(Status, 1, 0, Status, EmberExiGeneratedStatus, emberExiStatusStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TargetReduction, 0, 1, TargetReduction, EmberExiGeneratedTargetReduction, emberExiTargetReductionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControlList // index 1060
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControlList, 7, 0, 1330, 12, 78),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDeviceControl, 0, 255, EndDeviceControl, EmberExiGeneratedEndDeviceControl, emberExiEndDeviceControlStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControlListLink // index 1072
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControlListLink, 2, 0, 1357, 6, 79),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceGroup // index 1078
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceGroup, 5, 2, 1252, 60, 80),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveBillingPeriodListLink, 0, 1, ActiveBillingPeriodListLink, EmberExiGeneratedActiveBillingPeriodListLink, emberExiActiveBillingPeriodListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(BillingPeriodListLink, 0, 1, BillingPeriodListLink, EmberExiGeneratedBillingPeriodListLink, emberExiBillingPeriodListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DemandResponseProgramListLink, 0, 1, DemandResponseProgramListLink, EmberExiGeneratedDemandResponseProgramListLink, emberExiDemandResponseProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERListLink, 0, 1, DERListLink, EmberExiGeneratedDERListLink, emberExiDERListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERProgramListLink, 0, 1, DERProgramListLink, EmberExiGeneratedDERProgramListLink, emberExiDERProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MessagingProgramListLink, 0, 1, MessagingProgramListLink, EmberExiGeneratedMessagingProgramListLink, emberExiMessagingProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PrepaymentListLink, 0, 1, PrepaymentListLink, EmberExiGeneratedPrepaymentListLink, emberExiPrepaymentListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TariffProfileLink, 0, 1, TariffProfileLink, EmberExiGeneratedTariffProfileLink, emberExiTariffProfileLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(UsagePointListLink, 0, 1, UsagePointListLink, EmberExiGeneratedUsagePointListLink, emberExiUsagePointListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceGroupList // index 1138
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceGroupList, 7, 0, 1330, 12, 81),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDeviceGroup, 0, 255, EndDeviceGroup, EmberExiGeneratedEndDeviceGroup, emberExiEndDeviceGroupStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceGroupListLink // index 1150
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceGroupListLink, 2, 0, 1357, 6, 82),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceLink // index 1156
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceLink, 1, 0, 1321, 6, 83),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceList // index 1162
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceList, 7, 0, 1330, 12, 84),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDevice, 0, 255, EndDevice, EmberExiGeneratedEndDevice, emberExiEndDeviceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceListLink // index 1174
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceListLink, 2, 0, 1357, 6, 85),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFile // index 1180
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_File, 0, 0, 65535, 15, 86),
    EMBER_EXI_CH_STRING(fileURI, STRING, 255, fileURI),
    EMBER_EXI_CH(Size, INTEGER, 255, Size),
    EMBER_EXI_CH(Type, BINARY, 255, Type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileList // index 1195
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileList, 7, 0, 1330, 12, 87),
    EMBER_EXI_SUBSTRUCT_ARRAY(File, 0, 255, File, EmberExiGeneratedFile, emberExiFileStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileListLink // index 1207
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileListLink, 2, 0, 1357, 6, 88),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileStatus // index 1213
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileStatus, 0, 0, 65535, 15, 89),
    EMBER_EXI_CH(deviceID, BINARY, 255, deviceID),
    EMBER_EXI_CH_STRING(fileURI, STRING, 255, fileURI),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedHistoricalReading // index 1228
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_HistoricalReading, 5, 5, 1495, 6, 91),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedHistoricalReadingList // index 1234
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_HistoricalReadingList, 7, 0, 1330, 12, 92),
    EMBER_EXI_SUBSTRUCT_ARRAY(HistoricalReading, 0, 255, HistoricalReading, EmberExiGeneratedHistoricalReading, emberExiHistoricalReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedHistoricalReadingListLink // index 1246
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_HistoricalReadingListLink, 2, 0, 1357, 6, 93),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIdentifiedObject // index 1252
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IdentifiedObject, 5, 0, 2101, 12, 94),
    EMBER_EXI_CH(mRID, BINARY, 3, mRID_option),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIntervalBlock // index 1264
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IntervalBlock, 5, 2, 1252, 18, 95),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
    EMBER_EXI_SUBSTRUCT_ARRAY(IntervalReading, 0, 96, IntervalReading, EmberExiGeneratedIntervalReading, emberExiIntervalReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIntervalBlockList // index 1282
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IntervalBlockList, 7, 0, 1330, 12, 96),
    EMBER_EXI_SUBSTRUCT_ARRAY(IntervalBlock, 0, 255, IntervalBlock, EmberExiGeneratedIntervalBlock, emberExiIntervalBlockStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIntervalBlockListLink // index 1294
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IntervalBlockListLink, 2, 0, 1357, 6, 97),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIntervalReading // index 1300
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IntervalReading, 0, 0, 65535, 21, 98),
    EMBER_EXI_SUBSTRUCT_ARRAY(ReadingQuality, 0, 255, ReadingQuality, EmberExiGeneratedReadingQuality, emberExiReadingQualityStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(timePeriod, 0, 1, timePeriod, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLink // index 1321
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Link, 0, 0, 65535, 9, 100),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedList // index 1330
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_List, 0, 0, 2101, 27, 101),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 3, all_option),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
    EMBER_EXI_AT(results, UNSIGNED_INTEGER, 4, results_option),
    EMBER_EXI_AT(signatureRequired, BOOLEAN, 1, signatureRequired_option),
    EMBER_EXI_AT(subscribable, BOOLEAN, 2, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedListLink // index 1357
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ListLink, 0, 0, 65535, 12, 102),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLoadShedAvailability // index 1369
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LoadShedAvailability, 5, 2, 1252, 27, 103),
    EMBER_EXI_CH(availabilityDuration, INTEGER, 4, availabilityDuration_option),
    EMBER_EXI_CH(consuming, BOOLEAN, 255, consuming),
    EMBER_EXI_SUBSTRUCT_OPTION(DemandResponseProgramLink, 0, 1, DemandResponseProgramLink, EmberExiGeneratedDemandResponseProgramLink, emberExiDemandResponseProgramLinkStructDataIndex),
    EMBER_EXI_CH(shed, BOOLEAN, 255, shed),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLoadShedAvailabilityList // index 1396
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LoadShedAvailabilityList, 7, 0, 1330, 12, 104),
    EMBER_EXI_SUBSTRUCT_ARRAY(LoadShedAvailability, 0, 255, LoadShedAvailability, EmberExiGeneratedLoadShedAvailability, emberExiLoadShedAvailabilityStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLoadShedAvailabilityListLink // index 1408
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LoadShedAvailabilityListLink, 2, 0, 1357, 6, 105),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEvent // index 1414
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEvent, 5, 2, 1252, 24, 107),
    EMBER_EXI_CH(createdDateTime, INTEGER, 255, createdDateTime),
    EMBER_EXI_CH(functionSet, UNSIGNED_INTEGER, 255, functionSet),
    EMBER_EXI_CH(logEventCode, UNSIGNED_INTEGER, 255, logEventCode),
    EMBER_EXI_CH(logEventPEN, INTEGER, 4, logEventPEN_option),
    EMBER_EXI_CH(profileID, UNSIGNED_INTEGER, 255, profileID),
    EMBER_EXI_CH(vendorDefined, BOOLEAN, 5, vendorDefined_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventList // index 1438
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventList, 7, 0, 1330, 12, 108),
    EMBER_EXI_SUBSTRUCT_ARRAY(LogEvent, 0, 255, LogEvent, EmberExiGeneratedLogEvent, emberExiLogEventStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventListLink // index 1450
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventListLink, 2, 0, 1357, 6, 109),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgram // index 1456
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgram, 5, 2, 1252, 21, 110),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveTextMessageListLink, 0, 1, ActiveTextMessageListLink, EmberExiGeneratedActiveTextMessageListLink, emberExiActiveTextMessageListLinkStructDataIndex),
    EMBER_EXI_CH_STRING(locale, STRING, 255, locale),
    EMBER_EXI_SUBSTRUCT_OPTION(TextMessageListLink, 0, 1, TextMessageListLink, EmberExiGeneratedTextMessageListLink, emberExiTextMessageListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramList // index 1477
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramList, 7, 0, 1330, 12, 111),
    EMBER_EXI_SUBSTRUCT_ARRAY(MessagingProgram, 0, 255, MessagingProgram, EmberExiGeneratedMessagingProgram, emberExiMessagingProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramListLink // index 1489
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramListLink, 2, 0, 1357, 6, 112),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReading // index 1495
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReading, 5, 2, 1519, 24, 113),
    EMBER_EXI_SUBSTRUCT_OPTION(IntervalBlockListLink, 0, 1, IntervalBlockListLink, EmberExiGeneratedIntervalBlockListLink, emberExiIntervalBlockListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ReadingLink, 0, 1, ReadingLink, EmberExiGeneratedReadingLink, emberExiReadingLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(ReadingTypeLink, 1, 0, ReadingTypeLink, EmberExiGeneratedReadingTypeLink, emberExiReadingTypeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingBase // index 1519
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingBase, 5, 2, 1252, 6, 114),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingLink // index 1525
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingLink, 1, 0, 1321, 6, 115),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingList // index 1531
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingList, 7, 0, 1330, 12, 116),
    EMBER_EXI_SUBSTRUCT_ARRAY(MeterReading, 0, 255, MeterReading, EmberExiGeneratedMeterReading, emberExiMeterReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMeterReadingListLink // index 1543
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MeterReadingListLink, 2, 0, 1357, 6, 117),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMirrorMeterReading // index 1549
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MirrorMeterReading, 5, 2, 1519, 30, 118),
    EMBER_EXI_SUBSTRUCT_ARRAY(IntervalBlock, 0, 255, IntervalBlock, EmberExiGeneratedIntervalBlock, emberExiIntervalBlockStructDataIndex),
    EMBER_EXI_CH(lastUpdateTime, INTEGER, 4, lastUpdateTime_option),
    EMBER_EXI_CH(nextUpdateTime, INTEGER, 5, nextUpdateTime_option),
    EMBER_EXI_SUBSTRUCT_ARRAY(Reading, 0, 255, Reading, EmberExiGeneratedReading, emberExiReadingStructDataIndex),
    EMBER_EXI_SUBSTRUCT(ReadingType, 1, 0, ReadingType, EmberExiGeneratedReadingType, emberExiReadingTypeStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMirrorUsagePoint // index 1579
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MirrorUsagePoint, 5, 4, 2653, 27, 119),
    EMBER_EXI_CH(creationTime, INTEGER, 255, creationTime),
    EMBER_EXI_CH(manufacturerID, BINARY, 255, manufacturerID),
    EMBER_EXI_SUBSTRUCT_ARRAY(MirrorMeterReading, 0, 255, MirrorMeterReading, EmberExiGeneratedMirrorMeterReading, emberExiMirrorMeterReadingStructDataIndex),
    EMBER_EXI_CH_STRING(serialNumber, STRING, 255, serialNumber),
    EMBER_EXI_SUBSTRUCT(ServiceCategory, 1, 0, ServiceCategory, EmberExiGeneratedServiceCategory, emberExiServiceCategoryStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMirrorUsagePointList // index 1606
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MirrorUsagePointList, 7, 0, 1330, 12, 120),
    EMBER_EXI_SUBSTRUCT_ARRAY(MirrorUsagePoint, 0, 255, MirrorUsagePoint, EmberExiGeneratedMirrorUsagePoint, emberExiMirrorUsagePointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMirrorUsagePointListLink // index 1618
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MirrorUsagePointListLink, 2, 0, 1357, 6, 121),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNetworkStatus // index 1624
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NetworkStatus, 5, 2, 1252, 6, 122),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNetworkStatusLink // index 1630
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NetworkStatusLink, 1, 0, 1321, 6, 123),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNotification // index 1636
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Notification, 5, 2, 1252, 18, 124),
    EMBER_EXI_CH_STRING(resource, STRING, 255, resource),
    EMBER_EXI_SUBSTRUCT_OPTION(Resource, 0, 1, Resource, EmberExiGeneratedResource, emberExiResourceStructDataIndex),
    EMBER_EXI_CH_STRING(subscriptionURI, STRING, 255, subscriptionURI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNotificationList // index 1654
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NotificationList, 7, 0, 1330, 12, 125),
    EMBER_EXI_SUBSTRUCT_ARRAY(Notification, 0, 255, Notification, EmberExiGeneratedNotification, emberExiNotificationStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNotificationListLink // index 1666
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NotificationListLink, 2, 0, 1357, 6, 126),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedOffset // index 1672
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Offset, 0, 0, 65535, 12, 127),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerConfiguration // index 1684
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerConfiguration, 5, 0, 2101, 12, 131),
    EMBER_EXI_CH(batteryInstallTime, INTEGER, 3, batteryInstallTime_option),
    EMBER_EXI_CH(lowChargeThreshold, UNSIGNED_INTEGER, 4, lowChargeThreshold_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerFactor // index 1696
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerFactor, 0, 0, 65535, 15, 132),
    EMBER_EXI_CH(multiplier, INTEGER, 0, multiplier_option),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 1, unit_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 2, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerStatus // index 1711
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerStatus, 5, 0, 2101, 21, 135),
    EMBER_EXI_CH(batteryStatus, UNSIGNED_INTEGER, 255, batteryStatus),
    EMBER_EXI_CH(currentPowerSource, UNSIGNED_INTEGER, 255, currentPowerSource),
    EMBER_EXI_CH(estimatedChargeRemaining, INTEGER, 3, estimatedChargeRemaining_option),
    EMBER_EXI_CH(estimatedTimeRemaining, INTEGER, 4, estimatedTimeRemaining_option),
    EMBER_EXI_CH(timeOnBattery, INTEGER, 5, timeOnBattery_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerStatusLink // index 1732
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerStatusLink, 1, 0, 1321, 6, 136),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepayOperationStatus // index 1738
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepayOperationStatus, 5, 0, 2101, 24, 138),
    EMBER_EXI_SUBSTRUCT_OPTION(creditTypeChange, 0, 1, creditTypeChange, EmberExiGeneratedCreditTypeChange, emberExiCreditTypeChangeStructDataIndex),
    EMBER_EXI_CH(creditTypeInUse, UNSIGNED_INTEGER, 3, creditTypeInUse_option),
    EMBER_EXI_SUBSTRUCT_OPTION(serviceChange, 0, 1, serviceChange, EmberExiGeneratedServiceChange, emberExiServiceChangeStructDataIndex),
    EMBER_EXI_CH(serviceStatus, UNSIGNED_INTEGER, 255, serviceStatus),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepayOperationStatusLink // index 1762
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepayOperationStatusLink, 1, 0, 1321, 6, 139),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepayResponse // index 1768
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepayResponse, 5, 9, 2122, 12, 140),
    EMBER_EXI_CH(creditTypeApplied, UNSIGNED_INTEGER, 255, creditTypeApplied),
    EMBER_EXI_CH(serviceStatusApplied, UNSIGNED_INTEGER, 255, serviceStatusApplied),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepayment // index 1780
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Prepayment, 5, 2, 1252, 63, 141),
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
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentLink // index 1843
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentLink, 1, 0, 1321, 6, 142),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentList // index 1849
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentList, 7, 0, 1330, 12, 143),
    EMBER_EXI_SUBSTRUCT_ARRAY(Prepayment, 0, 255, Prepayment, EmberExiGeneratedPrepayment, emberExiPrepaymentStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentListLink // index 1861
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentListLink, 2, 0, 1357, 6, 144),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPriceResponse // index 1867
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PriceResponse, 5, 9, 2122, 6, 145),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedProjectionReading // index 1873
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ProjectionReading, 5, 5, 1495, 6, 148),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedProjectionReadingList // index 1879
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ProjectionReadingList, 7, 0, 1330, 12, 149),
    EMBER_EXI_SUBSTRUCT_ARRAY(ProjectionReading, 0, 255, ProjectionReading, EmberExiGeneratedProjectionReading, emberExiProjectionReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedProjectionReadingListLink // index 1891
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ProjectionReadingListLink, 2, 0, 1357, 6, 150),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRandomizedDateTimeInterval // index 1897
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RandomizedDateTimeInterval, 0, 2, 694, 12, 152),
    EMBER_EXI_CH(randomizeEnd, INTEGER, 0, randomizeEnd_option),
    EMBER_EXI_CH(randomizeStart, INTEGER, 1, randomizeStart_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRateComponent // index 1909
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RateComponent, 5, 2, 1252, 27, 153),
    EMBER_EXI_SUBSTRUCT(ActiveTimeTariffIntervalListLink, 1, 0, ActiveTimeTariffIntervalListLink, EmberExiGeneratedActiveTimeTariffIntervalListLink, emberExiActiveTimeTariffIntervalListLinkStructDataIndex),
    EMBER_EXI_CH(powerLimit, UNSIGNED_INTEGER, 4, powerLimit_option),
    EMBER_EXI_SUBSTRUCT(ReadingTypeLink, 1, 0, ReadingTypeLink, EmberExiGeneratedReadingTypeLink, emberExiReadingTypeLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(TimeTariffIntervalListLink, 1, 0, TimeTariffIntervalListLink, EmberExiGeneratedTimeTariffIntervalListLink, emberExiTimeTariffIntervalListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRateComponentList // index 1936
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RateComponentList, 7, 0, 1330, 12, 154),
    EMBER_EXI_SUBSTRUCT_ARRAY(RateComponent, 0, 255, RateComponent, EmberExiGeneratedRateComponent, emberExiRateComponentStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRateComponentListLink // index 1948
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RateComponentListLink, 2, 0, 1357, 6, 155),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReading // index 1954
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Reading, 5, 0, 2101, 18, 156),
    EMBER_EXI_SUBSTRUCT_ARRAY(ReadingQuality, 0, 255, ReadingQuality, EmberExiGeneratedReadingQuality, emberExiReadingQualityStructDataIndex),
    EMBER_EXI_CH(timeStamp, INTEGER, 3, timeStamp_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingLink // index 1972
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingLink, 1, 0, 1321, 6, 157),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingList // index 1978
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingList, 7, 0, 1330, 12, 158),
    EMBER_EXI_SUBSTRUCT_ARRAY(Reading, 0, 255, Reading, EmberExiGeneratedReading, emberExiReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingQuality // index 1990
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingQuality, 0, 0, 65535, 9, 159),
    EMBER_EXI_CH(quality, UNSIGNED_INTEGER, 255, quality),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingType // index 1999
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingType, 5, 2, 1252, 42, 160),
    EMBER_EXI_CH(accumulationBehaviour, UNSIGNED_INTEGER, 4, accumulationBehaviour_option),
    EMBER_EXI_CH(commodity, UNSIGNED_INTEGER, 5, commodity_option),
    EMBER_EXI_CH(consumptionTier, UNSIGNED_INTEGER, 6, consumptionTier_option),
    EMBER_EXI_CH(currency, UNSIGNED_INTEGER, 7, currency_option),
    EMBER_EXI_CH(dataQualifier, UNSIGNED_INTEGER, 8, dataQualifier_option),
    EMBER_EXI_CH(flowDirection, UNSIGNED_INTEGER, 9, flowDirection_option),
    EMBER_EXI_CH(kind, UNSIGNED_INTEGER, 10, kind_option),
    EMBER_EXI_CH(phase, UNSIGNED_INTEGER, 11, phase_option),
    EMBER_EXI_CH(powerOfTenMultiplier, INTEGER, 12, powerOfTenMultiplier_option),
    EMBER_EXI_CH(timeAttribute, UNSIGNED_INTEGER, 13, timeAttribute_option),
    EMBER_EXI_CH(tou, UNSIGNED_INTEGER, 14, tou_option),
    EMBER_EXI_CH(uom, UNSIGNED_INTEGER, 15, uom_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingTypeLink // index 2041
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingTypeLink, 1, 0, 1321, 6, 161),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingTypeList // index 2047
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingTypeList, 7, 0, 1330, 12, 162),
    EMBER_EXI_SUBSTRUCT_ARRAY(ReadingType, 0, 255, ReadingType, EmberExiGeneratedReadingType, emberExiReadingTypeStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedReadingTypeListLink // index 2059
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ReadingTypeListLink, 2, 0, 1357, 6, 163),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRealEnergy // index 2065
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RealEnergy, 0, 0, 65535, 15, 164),
    EMBER_EXI_CH(multiplier, INTEGER, 0, multiplier_option),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 1, unit_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 2, value_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRegistration // index 2080
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Registration, 5, 2, 1252, 9, 165),
    EMBER_EXI_CH(installCode, INTEGER, 255, installCode),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRegistrationLink // index 2089
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RegistrationLink, 1, 0, 1321, 6, 166),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRegistrationListLink // index 2095
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RegistrationListLink, 2, 0, 1357, 6, 167),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResource // index 2101
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Resource, 0, 0, 65535, 21, 169),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
    EMBER_EXI_AT(signatureRequired, BOOLEAN, 1, signatureRequired_option),
    EMBER_EXI_AT(subscribable, BOOLEAN, 2, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponse // index 2122
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Response, 5, 6, 904, 24, 170),
    EMBER_EXI_SUBSTRUCT(EndDeviceLink, 1, 0, EndDeviceLink, EmberExiGeneratedEndDeviceLink, emberExiEndDeviceLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(ServiceSupplierLink, 1, 0, ServiceSupplierLink, EmberExiGeneratedServiceSupplierLink, emberExiServiceSupplierLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(Signature, 0, 1, Signature, EmberExiGeneratedSignature, emberExiSignatureStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponseList // index 2146
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ResponseList, 7, 0, 1330, 12, 171),
    EMBER_EXI_SUBSTRUCT_ARRAY(Response, 0, 255, Response, EmberExiGeneratedResponse, emberExiResponseStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponseListLink // index 2158
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ResponseListLink, 2, 0, 1357, 6, 172),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceCategory // index 2164
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceCategory, 0, 0, 65535, 9, 173),
    EMBER_EXI_CH(kind, UNSIGNED_INTEGER, 255, kind),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceChange // index 2173
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceChange, 0, 0, 65535, 12, 174),
    EMBER_EXI_CH(newStatus, UNSIGNED_INTEGER, 255, newStatus),
    EMBER_EXI_CH(startTime, INTEGER, 255, startTime),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceSupplier // index 2185
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceSupplier, 5, 2, 1252, 18, 177),
    EMBER_EXI_CH_STRING(email, STRING, 0, email_option),
    EMBER_EXI_CH_STRING(phone, STRING, 0, phone_option),
    EMBER_EXI_CH(providerID, INTEGER, 4, providerID_option),
    EMBER_EXI_CH_STRING(web, STRING, 0, web_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceSupplierLink // index 2203
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceSupplierLink, 1, 0, 1321, 6, 178),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedServiceSupplierList // index 2209
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ServiceSupplierList, 7, 0, 1330, 12, 179),
    EMBER_EXI_SUBSTRUCT_ARRAY(ServiceSupplier, 0, 255, ServiceSupplier, EmberExiGeneratedServiceSupplier, emberExiServiceSupplierStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSetPoint // index 2221
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SetPoint, 0, 0, 65535, 12, 180),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSignature // index 2233
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Signature, 0, 0, 65535, 12, 182),
    EMBER_EXI_CH(algorithm, UNSIGNED_INTEGER, 255, algorithm),
    EMBER_EXI_CH_STRING(value, STRING, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedStatus // index 2245
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Status, 0, 0, 65535, 21, 184),
    EMBER_EXI_CH(dateTime, INTEGER, 255, dateTime),
    EMBER_EXI_CH(potentiallySuperseded, BOOLEAN, 255, potentiallySuperseded),
    EMBER_EXI_CH(potentiallySupersededTime, INTEGER, 255, potentiallySupersededTime),
    EMBER_EXI_CH_STRING(reason, STRING, 0, reason_option),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscription // index 2266
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Subscription, 5, 2, 1252, 27, 186),
    EMBER_EXI_SUBSTRUCT_OPTION(Condition, 0, 1, Condition, EmberExiGeneratedCondition, emberExiConditionStructDataIndex),
    EMBER_EXI_CH(limit, INTEGER, 255, limit),
    EMBER_EXI_CH_STRING(newResourceURI, STRING, 0, newResourceURI_option),
    EMBER_EXI_CH_STRING(pushURI, STRING, 255, pushURI),
    EMBER_EXI_CH_STRING(resource, STRING, 255, resource),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionList // index 2293
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionList, 7, 0, 1330, 12, 187),
    EMBER_EXI_SUBSTRUCT_ARRAY(Subscription, 0, 255, Subscription, EmberExiGeneratedSubscription, emberExiSubscriptionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionListLink // index 2305
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionListLink, 2, 0, 1357, 6, 188),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupplyInterruptionOverride // index 2311
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupplyInterruptionOverride, 5, 2, 1252, 12, 189),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupplyInterruptionOverrideList // index 2323
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupplyInterruptionOverrideList, 7, 0, 1330, 12, 190),
    EMBER_EXI_SUBSTRUCT_ARRAY(SupplyInterruptionOverride, 0, 255, SupplyInterruptionOverride, EmberExiGeneratedSupplyInterruptionOverride, emberExiSupplyInterruptionOverrideStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupplyInterruptionOverrideListLink // index 2335
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupplyInterruptionOverrideListLink, 2, 0, 1357, 6, 191),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupportedLocale // index 2341
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupportedLocale, 5, 2, 1252, 9, 192),
    EMBER_EXI_CH_STRING(locale, STRING, 255, locale),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupportedLocaleList // index 2350
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupportedLocaleList, 7, 0, 1330, 12, 193),
    EMBER_EXI_SUBSTRUCT_ARRAY(SupportedLocale, 0, 255, SupportedLocale, EmberExiGeneratedSupportedLocale, emberExiSupportedLocaleStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupportedLocaleListLink // index 2362
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupportedLocaleListLink, 2, 0, 1357, 6, 194),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReading // index 2368
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReading, 5, 5, 1495, 6, 196),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReadingList // index 2374
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReadingList, 7, 0, 1330, 12, 197),
    EMBER_EXI_SUBSTRUCT_ARRAY(TargetReading, 0, 255, TargetReading, EmberExiGeneratedTargetReading, emberExiTargetReadingStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReadingListLink // index 2386
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReadingListLink, 2, 0, 1357, 6, 198),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReduction // index 2392
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReduction, 0, 0, 65535, 12, 199),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfile // index 2404
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfile, 5, 2, 1252, 15, 200),
    EMBER_EXI_CH_STRING(rateCode, STRING, 0, rateCode_option),
    EMBER_EXI_SUBSTRUCT(RateComponentListLink, 1, 0, RateComponentListLink, EmberExiGeneratedRateComponentListLink, emberExiRateComponentListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileLink // index 2419
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileLink, 1, 0, 1321, 6, 201),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileList // index 2425
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileList, 7, 0, 1330, 12, 202),
    EMBER_EXI_SUBSTRUCT_ARRAY(TariffProfile, 0, 255, TariffProfile, EmberExiGeneratedTariffProfile, emberExiTariffProfileStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileListLink // index 2437
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileListLink, 2, 0, 1357, 6, 203),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTemperature // index 2443
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Temperature, 0, 0, 65535, 18, 204),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(subject, UNSIGNED_INTEGER, 255, subject),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 0, unit_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessage // index 2461
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessage, 5, 2, 1252, 33, 205),
    EMBER_EXI_CH(createdDateTime, INTEGER, 255, createdDateTime),
    EMBER_EXI_CH(deviceCategory, BINARY, 255, deviceCategory),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
    EMBER_EXI_CH(messageLength, UNSIGNED_INTEGER, 255, messageLength),
    EMBER_EXI_CH_STRING(originator, STRING, 255, originator),
    EMBER_EXI_CH(priority, UNSIGNED_INTEGER, 255, priority),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
    EMBER_EXI_CH_STRING(textMessage, STRING, 255, textMessage),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageList // index 2494
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageList, 7, 0, 1330, 12, 206),
    EMBER_EXI_SUBSTRUCT_ARRAY(TextMessage, 0, 255, TextMessage, EmberExiGeneratedTextMessage, emberExiTextMessageStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageListLink // index 2506
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageListLink, 2, 0, 1357, 6, 207),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextResponse // index 2512
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextResponse, 5, 9, 2122, 6, 208),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTime // index 2518
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Time, 5, 0, 2101, 27, 209),
    EMBER_EXI_CH(dstEndTime, INTEGER, 255, dstEndTime),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartTime, INTEGER, 255, dstStartTime),
    EMBER_EXI_CH(localTime, INTEGER, 3, localTime_option),
    EMBER_EXI_CH(quality, UNSIGNED_INTEGER, 255, quality),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
    EMBER_EXI_CH(UTCTime, INTEGER, 255, UTCTime),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeConfiguration // index 2545
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeConfiguration, 0, 0, 65535, 18, 211),
    EMBER_EXI_CH(dstEndRule, BINARY, 255, dstEndRule),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartRule, BINARY, 255, dstStartRule),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeLink // index 2563
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeLink, 1, 0, 1321, 6, 212),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeTariffInterval // index 2569
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeTariffInterval, 5, 2, 1252, 30, 213),
    EMBER_EXI_SUBSTRUCT_ARRAY(ConsumptionTariffInterval, 0, 255, ConsumptionTariffInterval, EmberExiGeneratedConsumptionTariffInterval, emberExiConsumptionTariffIntervalStructDataIndex),
    EMBER_EXI_CH(creationTime, INTEGER, 255, creationTime),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedRandomizedDateTimeInterval, emberExiRandomizedDateTimeIntervalStructDataIndex),
    EMBER_EXI_CH(isActive, BOOLEAN, 255, isActive),
    EMBER_EXI_CH(numPriceLevels, UNSIGNED_INTEGER, 255, numPriceLevels),
    EMBER_EXI_CH(priceLevel, UNSIGNED_INTEGER, 255, priceLevel),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeTariffIntervalList // index 2599
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeTariffIntervalList, 7, 0, 1330, 12, 214),
    EMBER_EXI_SUBSTRUCT_ARRAY(TimeTariffInterval, 0, 255, TimeTariffInterval, EmberExiGeneratedTimeTariffInterval, emberExiTimeTariffIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeTariffIntervalListLink // index 2611
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeTariffIntervalListLink, 2, 0, 1357, 6, 215),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePoint // index 2617
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePoint, 5, 4, 2653, 36, 218),
    EMBER_EXI_SUBSTRUCT_OPTION(CustomerAccountLink, 0, 1, CustomerAccountLink, EmberExiGeneratedCustomerAccountLink, emberExiCustomerAccountLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(LoadShedAvailabilityListLink, 0, 1, LoadShedAvailabilityListLink, EmberExiGeneratedLoadShedAvailabilityListLink, emberExiLoadShedAvailabilityListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MeterReadingListLink, 0, 1, MeterReadingListLink, EmberExiGeneratedMeterReadingListLink, emberExiMeterReadingListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PrepaymentLink, 0, 1, PrepaymentLink, EmberExiGeneratedPrepaymentLink, emberExiPrepaymentLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT(ServiceCategory, 1, 0, ServiceCategory, EmberExiGeneratedServiceCategory, emberExiServiceCategoryStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointBase // index 2653
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointBase, 5, 2, 1252, 12, 219),
    EMBER_EXI_CH(roleFlags, BINARY, 255, roleFlags),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointLink // index 2665
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointLink, 1, 0, 1321, 6, 220),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointList // index 2671
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointList, 7, 0, 1330, 12, 221),
    EMBER_EXI_SUBSTRUCT_ARRAY(UsagePoint, 0, 255, UsagePoint, EmberExiGeneratedUsagePoint, emberExiUsagePointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointListLink // index 2683
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointListLink, 2, 0, 1357, 6, 222),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedVoltage // index 2689
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Voltage, 0, 0, 65535, 15, 223),
    EMBER_EXI_CH(multiplier, INTEGER, 0, multiplier_option),
    EMBER_EXI_CH(unit, UNSIGNED_INTEGER, 1, unit_option),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 2, value_option),
#undef EMBER_EXI_STRUCT

    EMBER_EXI_QNAME_NONE // terminator

};



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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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
  emberExiPrintfLine("  <monetaryUnit>%d</monetaryUnit>", data->monetaryUnit_option);
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</AccountingUnit>");
  EXI_DEBUG1("End to XML: AccountingUnit\n");
}




void emberExiPrintStructActivation(EmberExiGeneratedActivation *data)
{
  emExiPrintStruct(emberExiActivationStructData,
                   (int8u *) data,
                   0,
                   "Activation",
                   emberExiQnames);
}


void emberExiToXmlStructActivation(EmberExiGeneratedActivation *data) {
  EXI_DEBUG1("Start to XML: Activation\n");
  emberExiPrintfLine("<Activation");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <activateTime>%d</activateTime>", data->activateTime);
  emberExiPrintfLine("  <currentTime>%d</currentTime>", data->currentTime);
  emberExiPrintfLine("</Activation>");
  EXI_DEBUG1("End to XML: Activation\n");
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




void emberExiPrintStructActiveChargeReservationListLink(EmberExiGeneratedActiveChargeReservationListLink *data)
{
  emExiPrintStruct(emberExiActiveChargeReservationListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveChargeReservationListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveChargeReservationListLink(EmberExiGeneratedActiveChargeReservationListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveChargeReservationListLink\n");
  emberExiPrintfLine("<ActiveChargeReservationListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveChargeReservationListLink>");
  EXI_DEBUG1("End to XML: ActiveChargeReservationListLink\n");
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
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier_option);
  emberExiPrintfLine("  <unit>%d</unit>", data->unit_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</ActivePower>");
  EXI_DEBUG1("End to XML: ActivePower\n");
}




void emberExiPrintStructActivePowerChargeRate(EmberExiGeneratedActivePowerChargeRate *data)
{
  emExiPrintStruct(emberExiActivePowerChargeRateStructData,
                   (int8u *) data,
                   0,
                   "ActivePowerChargeRate",
                   emberExiQnames);
}


void emberExiToXmlStructActivePowerChargeRate(EmberExiGeneratedActivePowerChargeRate *data) {
  EXI_DEBUG1("Start to XML: ActivePowerChargeRate\n");
  emberExiPrintfLine("<ActivePowerChargeRate");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier_option);
  emberExiPrintfLine("  <unit>%d</unit>", data->unit_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</ActivePowerChargeRate>");
  EXI_DEBUG1("End to XML: ActivePowerChargeRate\n");
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




void emberExiPrintStructAmpereHour(EmberExiGeneratedAmpereHour *data)
{
  emExiPrintStruct(emberExiAmpereHourStructData,
                   (int8u *) data,
                   0,
                   "AmpereHour",
                   emberExiQnames);
}


void emberExiToXmlStructAmpereHour(EmberExiGeneratedAmpereHour *data) {
  EXI_DEBUG1("Start to XML: AmpereHour\n");
  emberExiPrintfLine("<AmpereHour");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier_option);
  emberExiPrintfLine("  <unit>%d</unit>", data->unit_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</AmpereHour>");
  EXI_DEBUG1("End to XML: AmpereHour\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->interval_option != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval_option));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      emberExiToXmlStructIntervalBlockListLink((data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      emberExiToXmlStructReadingLink((data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
  emberExiPrintfLine("  <kind>%d</kind>", data->kind_option);
  emberExiPrintfLine("</Charge>");
  EXI_DEBUG1("End to XML: Charge\n");
}




void emberExiPrintStructChargeList(EmberExiGeneratedChargeList *data)
{
  emExiPrintStruct(emberExiChargeListStructData,
                   (int8u *) data,
                   0,
                   "ChargeList",
                   emberExiQnames);
}


void emberExiToXmlStructChargeList(EmberExiGeneratedChargeList *data) {
  EXI_DEBUG1("Start to XML: ChargeList\n");
  emberExiPrintfLine("<ChargeList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Charge_count; i++ )
    if ( data->Charge_array != NULL )
      emberExiToXmlStructCharge(&(data->Charge_array[i]));
  }
  emberExiPrintfLine("</ChargeList>");
  EXI_DEBUG1("End to XML: ChargeList\n");
}




void emberExiPrintStructChargeListLink(EmberExiGeneratedChargeListLink *data)
{
  emExiPrintStruct(emberExiChargeListLinkStructData,
                   (int8u *) data,
                   0,
                   "ChargeListLink",
                   emberExiQnames);
}


void emberExiToXmlStructChargeListLink(EmberExiGeneratedChargeListLink *data) {
  EXI_DEBUG1("Start to XML: ChargeListLink\n");
  emberExiPrintfLine("<ChargeListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ChargeListLink>");
  EXI_DEBUG1("End to XML: ChargeListLink\n");
}




void emberExiPrintStructChargeReservation(EmberExiGeneratedChargeReservation *data)
{
  emExiPrintStruct(emberExiChargeReservationStructData,
                   (int8u *) data,
                   0,
                   "ChargeReservation",
                   emberExiQnames);
}


void emberExiToXmlStructChargeReservation(EmberExiGeneratedChargeReservation *data) {
  EXI_DEBUG1("Start to XML: ChargeReservation\n");
  emberExiPrintfLine("<ChargeReservation");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ChargerLink_option != NULL )
      emberExiToXmlStructChargerLink((data->ChargerLink_option));
    if ( data->scheduledInterval != NULL )
      emberExiToXmlStructDateTimeInterval((data->scheduledInterval));
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("</ChargeReservation>");
  EXI_DEBUG1("End to XML: ChargeReservation\n");
}




void emberExiPrintStructChargeReservationList(EmberExiGeneratedChargeReservationList *data)
{
  emExiPrintStruct(emberExiChargeReservationListStructData,
                   (int8u *) data,
                   0,
                   "ChargeReservationList",
                   emberExiQnames);
}


void emberExiToXmlStructChargeReservationList(EmberExiGeneratedChargeReservationList *data) {
  EXI_DEBUG1("Start to XML: ChargeReservationList\n");
  emberExiPrintfLine("<ChargeReservationList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ChargeReservation_count; i++ )
    if ( data->ChargeReservation_array != NULL )
      emberExiToXmlStructChargeReservation(&(data->ChargeReservation_array[i]));
  }
  emberExiPrintfLine("</ChargeReservationList>");
  EXI_DEBUG1("End to XML: ChargeReservationList\n");
}




void emberExiPrintStructChargeReservationListLink(EmberExiGeneratedChargeReservationListLink *data)
{
  emExiPrintStruct(emberExiChargeReservationListLinkStructData,
                   (int8u *) data,
                   0,
                   "ChargeReservationListLink",
                   emberExiQnames);
}


void emberExiToXmlStructChargeReservationListLink(EmberExiGeneratedChargeReservationListLink *data) {
  EXI_DEBUG1("Start to XML: ChargeReservationListLink\n");
  emberExiPrintfLine("<ChargeReservationListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ChargeReservationListLink>");
  EXI_DEBUG1("End to XML: ChargeReservationListLink\n");
}




void emberExiPrintStructCharger(EmberExiGeneratedCharger *data)
{
  emExiPrintStruct(emberExiChargerStructData,
                   (int8u *) data,
                   0,
                   "Charger",
                   emberExiQnames);
}


void emberExiToXmlStructCharger(EmberExiGeneratedCharger *data) {
  EXI_DEBUG1("Start to XML: Charger\n");
  emberExiPrintfLine("<Charger");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ChargerStatus_option != NULL )
      emberExiToXmlStructChargerStatus((data->ChargerStatus_option));
    if ( data->powerRequired != NULL )
      emberExiToXmlStructActivePower((data->powerRequired));
    if ( data->rate != NULL )
      emberExiToXmlStructActivePowerChargeRate((data->rate));
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("</Charger>");
  EXI_DEBUG1("End to XML: Charger\n");
}




void emberExiPrintStructChargerLink(EmberExiGeneratedChargerLink *data)
{
  emExiPrintStruct(emberExiChargerLinkStructData,
                   (int8u *) data,
                   0,
                   "ChargerLink",
                   emberExiQnames);
}


void emberExiToXmlStructChargerLink(EmberExiGeneratedChargerLink *data) {
  EXI_DEBUG1("Start to XML: ChargerLink\n");
  emberExiPrintfLine("<ChargerLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ChargerLink>");
  EXI_DEBUG1("End to XML: ChargerLink\n");
}




void emberExiPrintStructChargerListLink(EmberExiGeneratedChargerListLink *data)
{
  emExiPrintStruct(emberExiChargerListLinkStructData,
                   (int8u *) data,
                   0,
                   "ChargerListLink",
                   emberExiQnames);
}


void emberExiToXmlStructChargerListLink(EmberExiGeneratedChargerListLink *data) {
  EXI_DEBUG1("Start to XML: ChargerListLink\n");
  emberExiPrintfLine("<ChargerListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ChargerListLink>");
  EXI_DEBUG1("End to XML: ChargerListLink\n");
}




void emberExiPrintStructChargerStatus(EmberExiGeneratedChargerStatus *data)
{
  emExiPrintStruct(emberExiChargerStatusStructData,
                   (int8u *) data,
                   0,
                   "ChargerStatus",
                   emberExiQnames);
}


void emberExiToXmlStructChargerStatus(EmberExiGeneratedChargerStatus *data) {
  EXI_DEBUG1("Start to XML: ChargerStatus\n");
  emberExiPrintfLine("<ChargerStatus");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batChaSt>%d</batChaSt>", data->batChaSt);
  emberExiPrintfLine("  <chaTms>%d</chaTms>", data->chaTms_option);
  emberExiPrintfLine("</ChargerStatus>");
  EXI_DEBUG1("End to XML: ChargerStatus\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <locale>%s</locale>", data->locale);
    if ( data->PowerConfiguration_option != NULL )
      emberExiToXmlStructPowerConfiguration((data->PowerConfiguration_option));
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
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Cost_count; i++ )
    if ( data->Cost_array != NULL )
      emberExiToXmlStructCost(&(data->Cost_array[i]));
  }
  emberExiPrintfLine("  <price>%d</price>", data->price_option);
  emberExiPrintfLine("  <startValue>%d</startValue>", data->startValue);
  emberExiPrintfLine("</ConsumptionTariffInterval>");
  EXI_DEBUG1("End to XML: ConsumptionTariffInterval\n");
}




void emberExiPrintStructCost(EmberExiGeneratedCost *data)
{
  emExiPrintStruct(emberExiCostStructData,
                   (int8u *) data,
                   0,
                   "Cost",
                   emberExiQnames);
}


void emberExiToXmlStructCost(EmberExiGeneratedCost *data) {
  EXI_DEBUG1("Start to XML: Cost\n");
  emberExiPrintfLine("<Cost");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <amount>%d</amount>", data->amount);
  emberExiPrintfLine("  <costKind>%d</costKind>", data->costKind);
  emberExiPrintfLine("</Cost>");
  EXI_DEBUG1("End to XML: Cost\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>%s</category>", data->category_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      emberExiPrintfLine("%2x", data->subject_option.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      emberExiToXmlStructActiveBillingPeriodListLink((data->ActiveBillingPeriodListLink_option));
    if ( data->ActiveProjectionReadingListLink_option != NULL )
      emberExiToXmlStructActiveProjectionReadingListLink((data->ActiveProjectionReadingListLink_option));
    if ( data->ActiveTargetReadingListLink_option != NULL )
      emberExiToXmlStructActiveTargetReadingListLink((data->ActiveTargetReadingListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      emberExiToXmlStructBillingPeriodListLink((data->BillingPeriodListLink_option));
    if ( data->ChargeListLink_option != NULL )
      emberExiToXmlStructChargeListLink((data->ChargeListLink_option));
  emberExiPrintfLine("  <currency>%d</currency>", data->currency_option);
    if ( data->HistoricalReadingListLink_option != NULL )
      emberExiToXmlStructHistoricalReadingListLink((data->HistoricalReadingListLink_option));
    if ( data->ProjectionReadingListLink_option != NULL )
      emberExiToXmlStructProjectionReadingListLink((data->ProjectionReadingListLink_option));
    if ( data->TargetReadingListLink_option != NULL )
      emberExiToXmlStructTargetReadingListLink((data->TargetReadingListLink_option));
  emberExiPrintfLine("</CustomerAccount>");
  EXI_DEBUG1("End to XML: CustomerAccount\n");
}




void emberExiPrintStructCustomerAccountLink(EmberExiGeneratedCustomerAccountLink *data)
{
  emExiPrintStruct(emberExiCustomerAccountLinkStructData,
                   (int8u *) data,
                   0,
                   "CustomerAccountLink",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAccountLink(EmberExiGeneratedCustomerAccountLink *data) {
  EXI_DEBUG1("Start to XML: CustomerAccountLink\n");
  emberExiPrintfLine("<CustomerAccountLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</CustomerAccountLink>");
  EXI_DEBUG1("End to XML: CustomerAccountLink\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ahRating_option != NULL )
      emberExiToXmlStructAmpereHour((data->ahRating_option));
    if ( data->DERStatusLink != NULL )
      emberExiToXmlStructDERStatusLink((data->DERStatusLink));
    if ( data->nominalVoltage != NULL )
      emberExiToXmlStructVoltage((data->nominalVoltage));
    if ( data->powerLimit != NULL )
      emberExiToXmlStructActivePower((data->powerLimit));
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("</DER>");
  EXI_DEBUG1("End to XML: DER\n");
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
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <gnBlk>%d</gnBlk>", data->gnBlk_option);
  emberExiPrintfLine("  <gnCtl>%d</gnCtl>", data->gnCtl_option);
  emberExiPrintfLine("  <gnRL>%d</gnRL>", data->gnRL_option);
    if ( data->maxOperatingPower != NULL )
      emberExiToXmlStructActivePower((data->maxOperatingPower));
    if ( data->scheduledInterval != NULL )
      emberExiToXmlStructRandomizedDateTimeInterval((data->scheduledInterval));
    if ( data->Status_option != NULL )
      emberExiToXmlStructStatus((data->Status_option));
    if ( data->targetPowerFactor != NULL )
      emberExiToXmlStructPowerFactor((data->targetPowerFactor));
  emberExiPrintfLine("  <varSupportMode>%d</varSupportMode>", data->varSupportMode);
  emberExiPrintfLine("</DERControl>");
  EXI_DEBUG1("End to XML: DERControl\n");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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




void emberExiPrintStructDERLink(EmberExiGeneratedDERLink *data)
{
  emExiPrintStruct(emberExiDERLinkStructData,
                   (int8u *) data,
                   0,
                   "DERLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERLink(EmberExiGeneratedDERLink *data) {
  EXI_DEBUG1("Start to XML: DERLink\n");
  emberExiPrintfLine("<DERLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERLink>");
  EXI_DEBUG1("End to XML: DERLink\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ActiveChargeReservationListLink_option != NULL )
      emberExiToXmlStructActiveChargeReservationListLink((data->ActiveChargeReservationListLink_option));
    if ( data->ActiveDERControlListLink_option != NULL )
      emberExiToXmlStructActiveDERControlListLink((data->ActiveDERControlListLink_option));
    if ( data->ChargeReservationListLink_option != NULL )
      emberExiToXmlStructChargeReservationListLink((data->ChargeReservationListLink_option));
    if ( data->DERControlListLink_option != NULL )
      emberExiToXmlStructDERControlListLink((data->DERControlListLink_option));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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




void emberExiPrintStructDERStatus(EmberExiGeneratedDERStatus *data)
{
  emExiPrintStruct(emberExiDERStatusStructData,
                   (int8u *) data,
                   0,
                   "DERStatus",
                   emberExiQnames);
}


void emberExiToXmlStructDERStatus(EmberExiGeneratedDERStatus *data) {
  EXI_DEBUG1("Start to XML: DERStatus\n");
  emberExiPrintfLine("<DERStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <estimatedTimeRemaining>%d</estimatedTimeRemaining>", data->estimatedTimeRemaining);
  emberExiPrintfLine("  <stateOfCharge>%d</stateOfCharge>", data->stateOfCharge);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <statusTime>%d</statusTime>", data->statusTime);
  emberExiPrintfLine("  <testResult>%d</testResult>", data->testResult_option);
  emberExiPrintfLine("  <voltageHigh>%d</voltageHigh>", data->voltageHigh_option);
  emberExiPrintfLine("  <voltageLow>%d</voltageLow>", data->voltageLow_option);
  emberExiPrintfLine("</DERStatus>");
  EXI_DEBUG1("End to XML: DERStatus\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ActiveEndDeviceControlListLink_option != NULL )
      emberExiToXmlStructActiveEndDeviceControlListLink((data->ActiveEndDeviceControlListLink_option));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      emberExiToXmlStructActiveBillingPeriodListLink((data->ActiveBillingPeriodListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      emberExiToXmlStructBillingPeriodListLink((data->BillingPeriodListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      emberExiToXmlStructTariffProfileLink((data->TariffProfileLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->EndDeviceGroupListLink_option != NULL )
      emberExiToXmlStructEndDeviceGroupListLink((data->EndDeviceGroupListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      emberExiToXmlStructEndDeviceListLink((data->EndDeviceListLink_option));
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      emberExiToXmlStructMirrorUsagePointListLink((data->MirrorUsagePointListLink_option));
    if ( data->NetworkStatusLink_option != NULL )
      emberExiToXmlStructNetworkStatusLink((data->NetworkStatusLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      emberExiToXmlStructSubscriptionListLink((data->SubscriptionListLink_option));
  emberExiPrintfLine("</DeviceCapability>");
  EXI_DEBUG1("End to XML: DeviceCapability\n");
}




void emberExiPrintStructDeviceCapabilityLink(EmberExiGeneratedDeviceCapabilityLink *data)
{
  emExiPrintStruct(emberExiDeviceCapabilityLinkStructData,
                   (int8u *) data,
                   0,
                   "DeviceCapabilityLink",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceCapabilityLink(EmberExiGeneratedDeviceCapabilityLink *data) {
  EXI_DEBUG1("Start to XML: DeviceCapabilityLink\n");
  emberExiPrintfLine("<DeviceCapabilityLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DeviceCapabilityLink>");
  EXI_DEBUG1("End to XML: DeviceCapabilityLink\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <gUID>");
  { int16u i;
    for ( i=0; i<data->gUID.length; i++ )
      emberExiPrintfLine("%2x", data->gUID.bytes[i]);
  }
  emberExiPrintfLine("</gUID>");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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




void emberExiPrintStructDocument(EmberExiGeneratedDocument *data)
{
  emExiPrintStruct(emberExiDocumentStructData,
                   (int8u *) data,
                   0,
                   "Document",
                   emberExiQnames);
}


void emberExiToXmlStructDocument(EmberExiGeneratedDocument *data) {
  EXI_DEBUG1("Start to XML: Document\n");
  emberExiPrintfLine("<Document");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>%s</category>", data->category_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      emberExiPrintfLine("%2x", data->subject_option.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
  emberExiPrintfLine("</Document>");
  EXI_DEBUG1("End to XML: Document\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>%s</category>", data->category_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      emberExiPrintfLine("%2x", data->subject_option.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->EndDeviceLink != NULL )
      emberExiToXmlStructEndDeviceLink((data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      emberExiToXmlStructServiceSupplierLink((data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      emberExiToXmlStructSignature((data->Signature_option));
    if ( data->DutyCycle_option != NULL )
      emberExiToXmlStructDutyCycle((data->DutyCycle_option));
  { int16u i;
    for ( i=0; i<data->Offset_count; i++ )
    if ( data->Offset_array != NULL )
      emberExiToXmlStructOffset(&(data->Offset_array[i]));
  }
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>");
  { int16u i;
    for ( i=0; i<data->category_option.length; i++ )
      emberExiPrintfLine("%2x", data->category_option.bytes[i]);
  }
  emberExiPrintfLine("</category>");
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->EndDeviceGroupListLink_option != NULL )
      emberExiToXmlStructEndDeviceGroupListLink((data->EndDeviceGroupListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->LoadShedAvailabilityListLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityListLink((data->LoadShedAvailabilityListLink_option));
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
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
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
  { int16u i;
    for ( i=0; i<data->Offset_count; i++ )
    if ( data->Offset_array != NULL )
      emberExiToXmlStructOffset(&(data->Offset_array[i]));
  }
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration);
    if ( data->scheduledInterval != NULL )
      emberExiToXmlStructRandomizedDateTimeInterval((data->scheduledInterval));
  { int16u i;
    for ( i=0; i<data->SetPoint_count; i++ )
    if ( data->SetPoint_array != NULL )
      emberExiToXmlStructSetPoint(&(data->SetPoint_array[i]));
  }
    if ( data->Status != NULL )
      emberExiToXmlStructStatus((data->Status));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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




void emberExiPrintStructEndDeviceGroup(EmberExiGeneratedEndDeviceGroup *data)
{
  emExiPrintStruct(emberExiEndDeviceGroupStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceGroup",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceGroup(EmberExiGeneratedEndDeviceGroup *data) {
  EXI_DEBUG1("Start to XML: EndDeviceGroup\n");
  emberExiPrintfLine("<EndDeviceGroup");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      emberExiToXmlStructActiveBillingPeriodListLink((data->ActiveBillingPeriodListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      emberExiToXmlStructBillingPeriodListLink((data->BillingPeriodListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      emberExiToXmlStructTariffProfileLink((data->TariffProfileLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
  emberExiPrintfLine("</EndDeviceGroup>");
  EXI_DEBUG1("End to XML: EndDeviceGroup\n");
}




void emberExiPrintStructEndDeviceGroupList(EmberExiGeneratedEndDeviceGroupList *data)
{
  emExiPrintStruct(emberExiEndDeviceGroupListStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceGroupList",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceGroupList(EmberExiGeneratedEndDeviceGroupList *data) {
  EXI_DEBUG1("Start to XML: EndDeviceGroupList\n");
  emberExiPrintfLine("<EndDeviceGroupList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->EndDeviceGroup_count; i++ )
    if ( data->EndDeviceGroup_array != NULL )
      emberExiToXmlStructEndDeviceGroup(&(data->EndDeviceGroup_array[i]));
  }
  emberExiPrintfLine("</EndDeviceGroupList>");
  EXI_DEBUG1("End to XML: EndDeviceGroupList\n");
}




void emberExiPrintStructEndDeviceGroupListLink(EmberExiGeneratedEndDeviceGroupListLink *data)
{
  emExiPrintStruct(emberExiEndDeviceGroupListLinkStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceGroupListLink",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceGroupListLink(EmberExiGeneratedEndDeviceGroupListLink *data) {
  EXI_DEBUG1("Start to XML: EndDeviceGroupListLink\n");
  emberExiPrintfLine("<EndDeviceGroupListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</EndDeviceGroupListLink>");
  EXI_DEBUG1("End to XML: EndDeviceGroupListLink\n");
}




void emberExiPrintStructEndDeviceLink(EmberExiGeneratedEndDeviceLink *data)
{
  emExiPrintStruct(emberExiEndDeviceLinkStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceLink",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceLink(EmberExiGeneratedEndDeviceLink *data) {
  EXI_DEBUG1("Start to XML: EndDeviceLink\n");
  emberExiPrintfLine("<EndDeviceLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</EndDeviceLink>");
  EXI_DEBUG1("End to XML: EndDeviceLink\n");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <fileURI>%s</fileURI>", data->fileURI);
  emberExiPrintfLine("  <Size>%d</Size>", data->Size);
  emberExiPrintfLine("  <Type>");
  { int16u i;
    for ( i=0; i<data->Type.length; i++ )
      emberExiPrintfLine("%2x", data->Type.bytes[i]);
  }
  emberExiPrintfLine("</Type>");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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




void emberExiPrintStructFileStatus(EmberExiGeneratedFileStatus *data)
{
  emExiPrintStruct(emberExiFileStatusStructData,
                   (int8u *) data,
                   0,
                   "FileStatus",
                   emberExiQnames);
}


void emberExiToXmlStructFileStatus(EmberExiGeneratedFileStatus *data) {
  EXI_DEBUG1("Start to XML: FileStatus\n");
  emberExiPrintfLine("<FileStatus");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <deviceID>");
  { int16u i;
    for ( i=0; i<data->deviceID.length; i++ )
      emberExiPrintfLine("%2x", data->deviceID.bytes[i]);
  }
  emberExiPrintfLine("</deviceID>");
  emberExiPrintfLine("  <fileURI>%s</fileURI>", data->fileURI);
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("</FileStatus>");
  EXI_DEBUG1("End to XML: FileStatus\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      emberExiToXmlStructIntervalBlockListLink((data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      emberExiToXmlStructReadingLink((data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("</IdentifiedObject>");
  EXI_DEBUG1("End to XML: IdentifiedObject\n");
}




void emberExiPrintStructIntervalBlock(EmberExiGeneratedIntervalBlock *data)
{
  emExiPrintStruct(emberExiIntervalBlockStructData,
                   (int8u *) data,
                   0,
                   "IntervalBlock",
                   emberExiQnames);
}


void emberExiToXmlStructIntervalBlock(EmberExiGeneratedIntervalBlock *data) {
  EXI_DEBUG1("Start to XML: IntervalBlock\n");
  emberExiPrintfLine("<IntervalBlock");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  { int16u i;
    for ( i=0; i<data->IntervalReading_count; i++ )
    if ( data->IntervalReading_array != NULL )
      emberExiToXmlStructIntervalReading(&(data->IntervalReading_array[i]));
  }
  emberExiPrintfLine("</IntervalBlock>");
  EXI_DEBUG1("End to XML: IntervalBlock\n");
}




void emberExiPrintStructIntervalBlockList(EmberExiGeneratedIntervalBlockList *data)
{
  emExiPrintStruct(emberExiIntervalBlockListStructData,
                   (int8u *) data,
                   0,
                   "IntervalBlockList",
                   emberExiQnames);
}


void emberExiToXmlStructIntervalBlockList(EmberExiGeneratedIntervalBlockList *data) {
  EXI_DEBUG1("Start to XML: IntervalBlockList\n");
  emberExiPrintfLine("<IntervalBlockList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->IntervalBlock_count; i++ )
    if ( data->IntervalBlock_array != NULL )
      emberExiToXmlStructIntervalBlock(&(data->IntervalBlock_array[i]));
  }
  emberExiPrintfLine("</IntervalBlockList>");
  EXI_DEBUG1("End to XML: IntervalBlockList\n");
}




void emberExiPrintStructIntervalBlockListLink(EmberExiGeneratedIntervalBlockListLink *data)
{
  emExiPrintStruct(emberExiIntervalBlockListLinkStructData,
                   (int8u *) data,
                   0,
                   "IntervalBlockListLink",
                   emberExiQnames);
}


void emberExiToXmlStructIntervalBlockListLink(EmberExiGeneratedIntervalBlockListLink *data) {
  EXI_DEBUG1("Start to XML: IntervalBlockListLink\n");
  emberExiPrintfLine("<IntervalBlockListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</IntervalBlockListLink>");
  EXI_DEBUG1("End to XML: IntervalBlockListLink\n");
}




void emberExiPrintStructIntervalReading(EmberExiGeneratedIntervalReading *data)
{
  emExiPrintStruct(emberExiIntervalReadingStructData,
                   (int8u *) data,
                   0,
                   "IntervalReading",
                   emberExiQnames);
}


void emberExiToXmlStructIntervalReading(EmberExiGeneratedIntervalReading *data) {
  EXI_DEBUG1("Start to XML: IntervalReading\n");
  emberExiPrintfLine("<IntervalReading");
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ReadingQuality_count; i++ )
    if ( data->ReadingQuality_array != NULL )
      emberExiToXmlStructReadingQuality(&(data->ReadingQuality_array[i]));
  }
    if ( data->timePeriod_option != NULL )
      emberExiToXmlStructDateTimeInterval((data->timePeriod_option));
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</IntervalReading>");
  EXI_DEBUG1("End to XML: IntervalReading\n");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <availabilityDuration>%d</availabilityDuration>", data->availabilityDuration_option);
  emberExiPrintfLine("  <consuming>%d</consuming>", data->consuming);
    if ( data->DemandResponseProgramLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramLink((data->DemandResponseProgramLink_option));
  emberExiPrintfLine("  <shed>%d</shed>", data->shed);
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</LoadShedAvailability>");
  EXI_DEBUG1("End to XML: LoadShedAvailability\n");
}




void emberExiPrintStructLoadShedAvailabilityList(EmberExiGeneratedLoadShedAvailabilityList *data)
{
  emExiPrintStruct(emberExiLoadShedAvailabilityListStructData,
                   (int8u *) data,
                   0,
                   "LoadShedAvailabilityList",
                   emberExiQnames);
}


void emberExiToXmlStructLoadShedAvailabilityList(EmberExiGeneratedLoadShedAvailabilityList *data) {
  EXI_DEBUG1("Start to XML: LoadShedAvailabilityList\n");
  emberExiPrintfLine("<LoadShedAvailabilityList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->LoadShedAvailability_count; i++ )
    if ( data->LoadShedAvailability_array != NULL )
      emberExiToXmlStructLoadShedAvailability(&(data->LoadShedAvailability_array[i]));
  }
  emberExiPrintfLine("</LoadShedAvailabilityList>");
  EXI_DEBUG1("End to XML: LoadShedAvailabilityList\n");
}




void emberExiPrintStructLoadShedAvailabilityListLink(EmberExiGeneratedLoadShedAvailabilityListLink *data)
{
  emExiPrintStruct(emberExiLoadShedAvailabilityListLinkStructData,
                   (int8u *) data,
                   0,
                   "LoadShedAvailabilityListLink",
                   emberExiQnames);
}


void emberExiToXmlStructLoadShedAvailabilityListLink(EmberExiGeneratedLoadShedAvailabilityListLink *data) {
  EXI_DEBUG1("Start to XML: LoadShedAvailabilityListLink\n");
  emberExiPrintfLine("<LoadShedAvailabilityListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LoadShedAvailabilityListLink>");
  EXI_DEBUG1("End to XML: LoadShedAvailabilityListLink\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  emberExiPrintfLine("  <functionSet>%d</functionSet>", data->functionSet);
  emberExiPrintfLine("  <logEventCode>%d</logEventCode>", data->logEventCode);
  emberExiPrintfLine("  <logEventPEN>%d</logEventPEN>", data->logEventPEN_option);
  emberExiPrintfLine("  <profileID>%d</profileID>", data->profileID);
  emberExiPrintfLine("  <vendorDefined>%d</vendorDefined>", data->vendorDefined_option);
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      emberExiToXmlStructActiveTextMessageListLink((data->ActiveTextMessageListLink_option));
  emberExiPrintfLine("  <locale>%s</locale>", data->locale);
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      emberExiToXmlStructIntervalBlockListLink((data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      emberExiToXmlStructReadingLink((data->ReadingLink_option));
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("</MeterReadingBase>");
  EXI_DEBUG1("End to XML: MeterReadingBase\n");
}




void emberExiPrintStructMeterReadingLink(EmberExiGeneratedMeterReadingLink *data)
{
  emExiPrintStruct(emberExiMeterReadingLinkStructData,
                   (int8u *) data,
                   0,
                   "MeterReadingLink",
                   emberExiQnames);
}


void emberExiToXmlStructMeterReadingLink(EmberExiGeneratedMeterReadingLink *data) {
  EXI_DEBUG1("Start to XML: MeterReadingLink\n");
  emberExiPrintfLine("<MeterReadingLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MeterReadingLink>");
  EXI_DEBUG1("End to XML: MeterReadingLink\n");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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




void emberExiPrintStructMirrorMeterReading(EmberExiGeneratedMirrorMeterReading *data)
{
  emExiPrintStruct(emberExiMirrorMeterReadingStructData,
                   (int8u *) data,
                   0,
                   "MirrorMeterReading",
                   emberExiQnames);
}


void emberExiToXmlStructMirrorMeterReading(EmberExiGeneratedMirrorMeterReading *data) {
  EXI_DEBUG1("Start to XML: MirrorMeterReading\n");
  emberExiPrintfLine("<MirrorMeterReading");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  { int16u i;
    for ( i=0; i<data->IntervalBlock_count; i++ )
    if ( data->IntervalBlock_array != NULL )
      emberExiToXmlStructIntervalBlock(&(data->IntervalBlock_array[i]));
  }
  emberExiPrintfLine("  <lastUpdateTime>%d</lastUpdateTime>", data->lastUpdateTime_option);
  emberExiPrintfLine("  <nextUpdateTime>%d</nextUpdateTime>", data->nextUpdateTime_option);
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      emberExiToXmlStructReading(&(data->Reading_array[i]));
  }
    if ( data->ReadingType != NULL )
      emberExiToXmlStructReadingType((data->ReadingType));
  emberExiPrintfLine("</MirrorMeterReading>");
  EXI_DEBUG1("End to XML: MirrorMeterReading\n");
}




void emberExiPrintStructMirrorUsagePoint(EmberExiGeneratedMirrorUsagePoint *data)
{
  emExiPrintStruct(emberExiMirrorUsagePointStructData,
                   (int8u *) data,
                   0,
                   "MirrorUsagePoint",
                   emberExiQnames);
}


void emberExiToXmlStructMirrorUsagePoint(EmberExiGeneratedMirrorUsagePoint *data) {
  EXI_DEBUG1("Start to XML: MirrorUsagePoint\n");
  emberExiPrintfLine("<MirrorUsagePoint");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
  emberExiPrintfLine("  <manufacturerID>");
  { int16u i;
    for ( i=0; i<data->manufacturerID.length; i++ )
      emberExiPrintfLine("%2x", data->manufacturerID.bytes[i]);
  }
  emberExiPrintfLine("</manufacturerID>");
  { int16u i;
    for ( i=0; i<data->MirrorMeterReading_count; i++ )
    if ( data->MirrorMeterReading_array != NULL )
      emberExiToXmlStructMirrorMeterReading(&(data->MirrorMeterReading_array[i]));
  }
  emberExiPrintfLine("  <serialNumber>%s</serialNumber>", data->serialNumber);
    if ( data->ServiceCategory != NULL )
      emberExiToXmlStructServiceCategory((data->ServiceCategory));
  emberExiPrintfLine("</MirrorUsagePoint>");
  EXI_DEBUG1("End to XML: MirrorUsagePoint\n");
}




void emberExiPrintStructMirrorUsagePointList(EmberExiGeneratedMirrorUsagePointList *data)
{
  emExiPrintStruct(emberExiMirrorUsagePointListStructData,
                   (int8u *) data,
                   0,
                   "MirrorUsagePointList",
                   emberExiQnames);
}


void emberExiToXmlStructMirrorUsagePointList(EmberExiGeneratedMirrorUsagePointList *data) {
  EXI_DEBUG1("Start to XML: MirrorUsagePointList\n");
  emberExiPrintfLine("<MirrorUsagePointList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->MirrorUsagePoint_count; i++ )
    if ( data->MirrorUsagePoint_array != NULL )
      emberExiToXmlStructMirrorUsagePoint(&(data->MirrorUsagePoint_array[i]));
  }
  emberExiPrintfLine("</MirrorUsagePointList>");
  EXI_DEBUG1("End to XML: MirrorUsagePointList\n");
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




void emberExiPrintStructNetworkStatus(EmberExiGeneratedNetworkStatus *data)
{
  emExiPrintStruct(emberExiNetworkStatusStructData,
                   (int8u *) data,
                   0,
                   "NetworkStatus",
                   emberExiQnames);
}


void emberExiToXmlStructNetworkStatus(EmberExiGeneratedNetworkStatus *data) {
  EXI_DEBUG1("Start to XML: NetworkStatus\n");
  emberExiPrintfLine("<NetworkStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("</NetworkStatus>");
  EXI_DEBUG1("End to XML: NetworkStatus\n");
}




void emberExiPrintStructNetworkStatusLink(EmberExiGeneratedNetworkStatusLink *data)
{
  emExiPrintStruct(emberExiNetworkStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "NetworkStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructNetworkStatusLink(EmberExiGeneratedNetworkStatusLink *data) {
  EXI_DEBUG1("Start to XML: NetworkStatusLink\n");
  emberExiPrintfLine("<NetworkStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</NetworkStatusLink>");
  EXI_DEBUG1("End to XML: NetworkStatusLink\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <resource>%s</resource>", data->resource);
    if ( data->Resource_option != NULL )
      emberExiToXmlStructResource((data->Resource_option));
  emberExiPrintfLine("  <subscriptionURI>%s</subscriptionURI>", data->subscriptionURI);
  emberExiPrintfLine("</Notification>");
  EXI_DEBUG1("End to XML: Notification\n");
}




void emberExiPrintStructNotificationList(EmberExiGeneratedNotificationList *data)
{
  emExiPrintStruct(emberExiNotificationListStructData,
                   (int8u *) data,
                   0,
                   "NotificationList",
                   emberExiQnames);
}


void emberExiToXmlStructNotificationList(EmberExiGeneratedNotificationList *data) {
  EXI_DEBUG1("Start to XML: NotificationList\n");
  emberExiPrintfLine("<NotificationList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Notification_count; i++ )
    if ( data->Notification_array != NULL )
      emberExiToXmlStructNotification(&(data->Notification_array[i]));
  }
  emberExiPrintfLine("</NotificationList>");
  EXI_DEBUG1("End to XML: NotificationList\n");
}




void emberExiPrintStructNotificationListLink(EmberExiGeneratedNotificationListLink *data)
{
  emExiPrintStruct(emberExiNotificationListLinkStructData,
                   (int8u *) data,
                   0,
                   "NotificationListLink",
                   emberExiQnames);
}


void emberExiToXmlStructNotificationListLink(EmberExiGeneratedNotificationListLink *data) {
  EXI_DEBUG1("Start to XML: NotificationListLink\n");
  emberExiPrintfLine("<NotificationListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</NotificationListLink>");
  EXI_DEBUG1("End to XML: NotificationListLink\n");
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
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</Offset>");
  EXI_DEBUG1("End to XML: Offset\n");
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
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batteryInstallTime>%d</batteryInstallTime>", data->batteryInstallTime_option);
  emberExiPrintfLine("  <lowChargeThreshold>%d</lowChargeThreshold>", data->lowChargeThreshold_option);
  emberExiPrintfLine("</PowerConfiguration>");
  EXI_DEBUG1("End to XML: PowerConfiguration\n");
}




void emberExiPrintStructPowerFactor(EmberExiGeneratedPowerFactor *data)
{
  emExiPrintStruct(emberExiPowerFactorStructData,
                   (int8u *) data,
                   0,
                   "PowerFactor",
                   emberExiQnames);
}


void emberExiToXmlStructPowerFactor(EmberExiGeneratedPowerFactor *data) {
  EXI_DEBUG1("Start to XML: PowerFactor\n");
  emberExiPrintfLine("<PowerFactor");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier_option);
  emberExiPrintfLine("  <unit>%d</unit>", data->unit_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</PowerFactor>");
  EXI_DEBUG1("End to XML: PowerFactor\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batteryStatus>%d</batteryStatus>", data->batteryStatus);
  emberExiPrintfLine("  <currentPowerSource>%d</currentPowerSource>", data->currentPowerSource);
  emberExiPrintfLine("  <estimatedChargeRemaining>%d</estimatedChargeRemaining>", data->estimatedChargeRemaining_option);
  emberExiPrintfLine("  <estimatedTimeRemaining>%d</estimatedTimeRemaining>", data->estimatedTimeRemaining_option);
  emberExiPrintfLine("  <timeOnBattery>%d</timeOnBattery>", data->timeOnBattery_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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




void emberExiPrintStructPrepayResponse(EmberExiGeneratedPrepayResponse *data)
{
  emExiPrintStruct(emberExiPrepayResponseStructData,
                   (int8u *) data,
                   0,
                   "PrepayResponse",
                   emberExiQnames);
}


void emberExiToXmlStructPrepayResponse(EmberExiGeneratedPrepayResponse *data) {
  EXI_DEBUG1("Start to XML: PrepayResponse\n");
  emberExiPrintfLine("<PrepayResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>%s</category>", data->category_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      emberExiPrintfLine("%2x", data->subject_option.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->EndDeviceLink != NULL )
      emberExiToXmlStructEndDeviceLink((data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      emberExiToXmlStructServiceSupplierLink((data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      emberExiToXmlStructSignature((data->Signature_option));
  emberExiPrintfLine("  <creditTypeApplied>%d</creditTypeApplied>", data->creditTypeApplied);
  emberExiPrintfLine("  <serviceStatusApplied>%d</serviceStatusApplied>", data->serviceStatusApplied);
  emberExiPrintfLine("</PrepayResponse>");
  EXI_DEBUG1("End to XML: PrepayResponse\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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




void emberExiPrintStructPriceResponse(EmberExiGeneratedPriceResponse *data)
{
  emExiPrintStruct(emberExiPriceResponseStructData,
                   (int8u *) data,
                   0,
                   "PriceResponse",
                   emberExiQnames);
}


void emberExiToXmlStructPriceResponse(EmberExiGeneratedPriceResponse *data) {
  EXI_DEBUG1("Start to XML: PriceResponse\n");
  emberExiPrintfLine("<PriceResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>%s</category>", data->category_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      emberExiPrintfLine("%2x", data->subject_option.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->EndDeviceLink != NULL )
      emberExiToXmlStructEndDeviceLink((data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      emberExiToXmlStructServiceSupplierLink((data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      emberExiToXmlStructSignature((data->Signature_option));
  emberExiPrintfLine("</PriceResponse>");
  EXI_DEBUG1("End to XML: PriceResponse\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      emberExiToXmlStructIntervalBlockListLink((data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      emberExiToXmlStructReadingLink((data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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




void emberExiPrintStructRandomizedDateTimeInterval(EmberExiGeneratedRandomizedDateTimeInterval *data)
{
  emExiPrintStruct(emberExiRandomizedDateTimeIntervalStructData,
                   (int8u *) data,
                   0,
                   "RandomizedDateTimeInterval",
                   emberExiQnames);
}


void emberExiToXmlStructRandomizedDateTimeInterval(EmberExiGeneratedRandomizedDateTimeInterval *data) {
  EXI_DEBUG1("Start to XML: RandomizedDateTimeInterval\n");
  emberExiPrintfLine("<RandomizedDateTimeInterval");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <duration>%d</duration>", data->duration);
  emberExiPrintfLine("  <start>%d</start>", data->start);
  emberExiPrintfLine("  <randomizeEnd>%d</randomizeEnd>", data->randomizeEnd_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
  emberExiPrintfLine("</RandomizedDateTimeInterval>");
  EXI_DEBUG1("End to XML: RandomizedDateTimeInterval\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->ActiveTimeTariffIntervalListLink != NULL )
      emberExiToXmlStructActiveTimeTariffIntervalListLink((data->ActiveTimeTariffIntervalListLink));
  emberExiPrintfLine("  <powerLimit>%d</powerLimit>", data->powerLimit_option);
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
    if ( data->TimeTariffIntervalListLink != NULL )
      emberExiToXmlStructTimeTariffIntervalListLink((data->TimeTariffIntervalListLink));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ReadingQuality_count; i++ )
    if ( data->ReadingQuality_array != NULL )
      emberExiToXmlStructReadingQuality(&(data->ReadingQuality_array[i]));
  }
  emberExiPrintfLine("  <timeStamp>%d</timeStamp>", data->timeStamp_option);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</Reading>");
  EXI_DEBUG1("End to XML: Reading\n");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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




void emberExiPrintStructReadingQuality(EmberExiGeneratedReadingQuality *data)
{
  emExiPrintStruct(emberExiReadingQualityStructData,
                   (int8u *) data,
                   0,
                   "ReadingQuality",
                   emberExiQnames);
}


void emberExiToXmlStructReadingQuality(EmberExiGeneratedReadingQuality *data) {
  EXI_DEBUG1("Start to XML: ReadingQuality\n");
  emberExiPrintfLine("<ReadingQuality");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <quality>%d</quality>", data->quality);
  emberExiPrintfLine("</ReadingQuality>");
  EXI_DEBUG1("End to XML: ReadingQuality\n");
}




void emberExiPrintStructReadingType(EmberExiGeneratedReadingType *data)
{
  emExiPrintStruct(emberExiReadingTypeStructData,
                   (int8u *) data,
                   0,
                   "ReadingType",
                   emberExiQnames);
}


void emberExiToXmlStructReadingType(EmberExiGeneratedReadingType *data) {
  EXI_DEBUG1("Start to XML: ReadingType\n");
  emberExiPrintfLine("<ReadingType");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <accumulationBehaviour>%d</accumulationBehaviour>", data->accumulationBehaviour_option);
  emberExiPrintfLine("  <commodity>%d</commodity>", data->commodity_option);
  emberExiPrintfLine("  <consumptionTier>%d</consumptionTier>", data->consumptionTier_option);
  emberExiPrintfLine("  <currency>%d</currency>", data->currency_option);
  emberExiPrintfLine("  <dataQualifier>%d</dataQualifier>", data->dataQualifier_option);
  emberExiPrintfLine("  <flowDirection>%d</flowDirection>", data->flowDirection_option);
  emberExiPrintfLine("  <kind>%d</kind>", data->kind_option);
  emberExiPrintfLine("  <phase>%d</phase>", data->phase_option);
  emberExiPrintfLine("  <powerOfTenMultiplier>%d</powerOfTenMultiplier>", data->powerOfTenMultiplier_option);
  emberExiPrintfLine("  <timeAttribute>%d</timeAttribute>", data->timeAttribute_option);
  emberExiPrintfLine("  <tou>%d</tou>", data->tou_option);
  emberExiPrintfLine("  <uom>%d</uom>", data->uom_option);
  emberExiPrintfLine("</ReadingType>");
  EXI_DEBUG1("End to XML: ReadingType\n");
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




void emberExiPrintStructReadingTypeList(EmberExiGeneratedReadingTypeList *data)
{
  emExiPrintStruct(emberExiReadingTypeListStructData,
                   (int8u *) data,
                   0,
                   "ReadingTypeList",
                   emberExiQnames);
}


void emberExiToXmlStructReadingTypeList(EmberExiGeneratedReadingTypeList *data) {
  EXI_DEBUG1("Start to XML: ReadingTypeList\n");
  emberExiPrintfLine("<ReadingTypeList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ReadingType_count; i++ )
    if ( data->ReadingType_array != NULL )
      emberExiToXmlStructReadingType(&(data->ReadingType_array[i]));
  }
  emberExiPrintfLine("</ReadingTypeList>");
  EXI_DEBUG1("End to XML: ReadingTypeList\n");
}




void emberExiPrintStructReadingTypeListLink(EmberExiGeneratedReadingTypeListLink *data)
{
  emExiPrintStruct(emberExiReadingTypeListLinkStructData,
                   (int8u *) data,
                   0,
                   "ReadingTypeListLink",
                   emberExiQnames);
}


void emberExiToXmlStructReadingTypeListLink(EmberExiGeneratedReadingTypeListLink *data) {
  EXI_DEBUG1("Start to XML: ReadingTypeListLink\n");
  emberExiPrintfLine("<ReadingTypeListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ReadingTypeListLink>");
  EXI_DEBUG1("End to XML: ReadingTypeListLink\n");
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
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier_option);
  emberExiPrintfLine("  <unit>%d</unit>", data->unit_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</RealEnergy>");
  EXI_DEBUG1("End to XML: RealEnergy\n");
}




void emberExiPrintStructRegistration(EmberExiGeneratedRegistration *data)
{
  emExiPrintStruct(emberExiRegistrationStructData,
                   (int8u *) data,
                   0,
                   "Registration",
                   emberExiQnames);
}


void emberExiToXmlStructRegistration(EmberExiGeneratedRegistration *data) {
  EXI_DEBUG1("Start to XML: Registration\n");
  emberExiPrintfLine("<Registration");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <installCode>%d</installCode>", data->installCode);
  emberExiPrintfLine("</Registration>");
  EXI_DEBUG1("End to XML: Registration\n");
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




void emberExiPrintStructRegistrationListLink(EmberExiGeneratedRegistrationListLink *data)
{
  emExiPrintStruct(emberExiRegistrationListLinkStructData,
                   (int8u *) data,
                   0,
                   "RegistrationListLink",
                   emberExiQnames);
}


void emberExiToXmlStructRegistrationListLink(EmberExiGeneratedRegistrationListLink *data) {
  EXI_DEBUG1("Start to XML: RegistrationListLink\n");
  emberExiPrintfLine("<RegistrationListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RegistrationListLink>");
  EXI_DEBUG1("End to XML: RegistrationListLink\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</Resource>");
  EXI_DEBUG1("End to XML: Resource\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>%s</category>", data->category_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      emberExiPrintfLine("%2x", data->subject_option.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->EndDeviceLink != NULL )
      emberExiToXmlStructEndDeviceLink((data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      emberExiToXmlStructServiceSupplierLink((data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      emberExiToXmlStructSignature((data->Signature_option));
  emberExiPrintfLine("</Response>");
  EXI_DEBUG1("End to XML: Response\n");
}




void emberExiPrintStructResponseList(EmberExiGeneratedResponseList *data)
{
  emExiPrintStruct(emberExiResponseListStructData,
                   (int8u *) data,
                   0,
                   "ResponseList",
                   emberExiQnames);
}


void emberExiToXmlStructResponseList(EmberExiGeneratedResponseList *data) {
  EXI_DEBUG1("Start to XML: ResponseList\n");
  emberExiPrintfLine("<ResponseList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Response_count; i++ )
    if ( data->Response_array != NULL )
      emberExiToXmlStructResponse(&(data->Response_array[i]));
  }
  emberExiPrintfLine("</ResponseList>");
  EXI_DEBUG1("End to XML: ResponseList\n");
}




void emberExiPrintStructResponseListLink(EmberExiGeneratedResponseListLink *data)
{
  emExiPrintStruct(emberExiResponseListLinkStructData,
                   (int8u *) data,
                   0,
                   "ResponseListLink",
                   emberExiQnames);
}


void emberExiToXmlStructResponseListLink(EmberExiGeneratedResponseListLink *data) {
  EXI_DEBUG1("Start to XML: ResponseListLink\n");
  emberExiPrintfLine("<ResponseListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ResponseListLink>");
  EXI_DEBUG1("End to XML: ResponseListLink\n");
}




void emberExiPrintStructServiceCategory(EmberExiGeneratedServiceCategory *data)
{
  emExiPrintStruct(emberExiServiceCategoryStructData,
                   (int8u *) data,
                   0,
                   "ServiceCategory",
                   emberExiQnames);
}


void emberExiToXmlStructServiceCategory(EmberExiGeneratedServiceCategory *data) {
  EXI_DEBUG1("Start to XML: ServiceCategory\n");
  emberExiPrintfLine("<ServiceCategory");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <kind>%d</kind>", data->kind);
  emberExiPrintfLine("</ServiceCategory>");
  EXI_DEBUG1("End to XML: ServiceCategory\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
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




void emberExiPrintStructServiceSupplierList(EmberExiGeneratedServiceSupplierList *data)
{
  emExiPrintStruct(emberExiServiceSupplierListStructData,
                   (int8u *) data,
                   0,
                   "ServiceSupplierList",
                   emberExiQnames);
}


void emberExiToXmlStructServiceSupplierList(EmberExiGeneratedServiceSupplierList *data) {
  EXI_DEBUG1("Start to XML: ServiceSupplierList\n");
  emberExiPrintfLine("<ServiceSupplierList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->ServiceSupplier_count; i++ )
    if ( data->ServiceSupplier_array != NULL )
      emberExiToXmlStructServiceSupplier(&(data->ServiceSupplier_array[i]));
  }
  emberExiPrintfLine("</ServiceSupplierList>");
  EXI_DEBUG1("End to XML: ServiceSupplierList\n");
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
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</SetPoint>");
  EXI_DEBUG1("End to XML: SetPoint\n");
}




void emberExiPrintStructSignature(EmberExiGeneratedSignature *data)
{
  emExiPrintStruct(emberExiSignatureStructData,
                   (int8u *) data,
                   0,
                   "Signature",
                   emberExiQnames);
}


void emberExiToXmlStructSignature(EmberExiGeneratedSignature *data) {
  EXI_DEBUG1("Start to XML: Signature\n");
  emberExiPrintfLine("<Signature");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <algorithm>%d</algorithm>", data->algorithm);
  emberExiPrintfLine("  <value>%s</value>", data->value);
  emberExiPrintfLine("</Signature>");
  EXI_DEBUG1("End to XML: Signature\n");
}




void emberExiPrintStructStatus(EmberExiGeneratedStatus *data)
{
  emExiPrintStruct(emberExiStatusStructData,
                   (int8u *) data,
                   0,
                   "Status",
                   emberExiQnames);
}


void emberExiToXmlStructStatus(EmberExiGeneratedStatus *data) {
  EXI_DEBUG1("Start to XML: Status\n");
  emberExiPrintfLine("<Status");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <dateTime>%d</dateTime>", data->dateTime);
  emberExiPrintfLine("  <potentiallySuperseded>%d</potentiallySuperseded>", data->potentiallySuperseded);
  emberExiPrintfLine("  <potentiallySupersededTime>%d</potentiallySupersededTime>", data->potentiallySupersededTime);
  emberExiPrintfLine("  <reason>%s</reason>", data->reason_option);
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("</Status>");
  EXI_DEBUG1("End to XML: Status\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->Condition_option != NULL )
      emberExiToXmlStructCondition((data->Condition_option));
  emberExiPrintfLine("  <limit>%d</limit>", data->limit);
  emberExiPrintfLine("  <newResourceURI>%s</newResourceURI>", data->newResourceURI_option);
  emberExiPrintfLine("  <pushURI>%s</pushURI>", data->pushURI);
  emberExiPrintfLine("  <resource>%s</resource>", data->resource);
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("</Subscription>");
  EXI_DEBUG1("End to XML: Subscription\n");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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




void emberExiPrintStructSupportedLocale(EmberExiGeneratedSupportedLocale *data)
{
  emExiPrintStruct(emberExiSupportedLocaleStructData,
                   (int8u *) data,
                   0,
                   "SupportedLocale",
                   emberExiQnames);
}


void emberExiToXmlStructSupportedLocale(EmberExiGeneratedSupportedLocale *data) {
  EXI_DEBUG1("Start to XML: SupportedLocale\n");
  emberExiPrintfLine("<SupportedLocale");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <locale>%s</locale>", data->locale);
  emberExiPrintfLine("</SupportedLocale>");
  EXI_DEBUG1("End to XML: SupportedLocale\n");
}




void emberExiPrintStructSupportedLocaleList(EmberExiGeneratedSupportedLocaleList *data)
{
  emExiPrintStruct(emberExiSupportedLocaleListStructData,
                   (int8u *) data,
                   0,
                   "SupportedLocaleList",
                   emberExiQnames);
}


void emberExiToXmlStructSupportedLocaleList(EmberExiGeneratedSupportedLocaleList *data) {
  EXI_DEBUG1("Start to XML: SupportedLocaleList\n");
  emberExiPrintfLine("<SupportedLocaleList");
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->SupportedLocale_count; i++ )
    if ( data->SupportedLocale_array != NULL )
      emberExiToXmlStructSupportedLocale(&(data->SupportedLocale_array[i]));
  }
  emberExiPrintfLine("</SupportedLocaleList>");
  EXI_DEBUG1("End to XML: SupportedLocaleList\n");
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      emberExiToXmlStructIntervalBlockListLink((data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      emberExiToXmlStructReadingLink((data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      emberExiToXmlStructReadingTypeLink((data->ReadingTypeLink));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <rateCode>%s</rateCode>", data->rateCode_option);
    if ( data->RateComponentListLink != NULL )
      emberExiToXmlStructRateComponentListLink((data->RateComponentListLink));
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine("  <unit>%d</unit>", data->unit_option);
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
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  emberExiPrintfLine("  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      emberExiPrintfLine("%2x", data->deviceCategory.bytes[i]);
  }
  emberExiPrintfLine("</deviceCategory>");
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <messageLength>%d</messageLength>", data->messageLength);
  emberExiPrintfLine("  <originator>%s</originator>", data->originator);
  emberExiPrintfLine("  <priority>%d</priority>", data->priority);
  emberExiPrintfLine("  <status>%d</status>", data->status);
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <category>%s</category>", data->category_option);
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      emberExiPrintfLine("%2x", data->subject_option.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->EndDeviceLink != NULL )
      emberExiToXmlStructEndDeviceLink((data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      emberExiToXmlStructServiceSupplierLink((data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      emberExiToXmlStructSignature((data->Signature_option));
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <dstEndTime>%d</dstEndTime>", data->dstEndTime);
  emberExiPrintfLine("  <dstOffset>%d</dstOffset>", data->dstOffset);
  emberExiPrintfLine("  <dstStartTime>%d</dstStartTime>", data->dstStartTime);
  emberExiPrintfLine("  <localTime>%d</localTime>", data->localTime_option);
  emberExiPrintfLine("  <quality>%d</quality>", data->quality);
  emberExiPrintfLine("  <tzOffset>%d</tzOffset>", data->tzOffset);
  emberExiPrintfLine("  <UTCTime>%d</UTCTime>", data->UTCTime);
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
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  { int16u i;
    for ( i=0; i<data->ConsumptionTariffInterval_count; i++ )
    if ( data->ConsumptionTariffInterval_array != NULL )
      emberExiToXmlStructConsumptionTariffInterval(&(data->ConsumptionTariffInterval_array[i]));
  }
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->interval != NULL )
      emberExiToXmlStructRandomizedDateTimeInterval((data->interval));
  emberExiPrintfLine("  <isActive>%d</isActive>", data->isActive);
  emberExiPrintfLine("  <numPriceLevels>%d</numPriceLevels>", data->numPriceLevels);
  emberExiPrintfLine("  <priceLevel>%d</priceLevel>", data->priceLevel);
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
  emberExiPrintfLine("  <status>%d</status>", data->status);
    if ( data->CustomerAccountLink_option != NULL )
      emberExiToXmlStructCustomerAccountLink((data->CustomerAccountLink_option));
    if ( data->LoadShedAvailabilityListLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityListLink((data->LoadShedAvailabilityListLink_option));
    if ( data->MeterReadingListLink_option != NULL )
      emberExiToXmlStructMeterReadingListLink((data->MeterReadingListLink_option));
    if ( data->PrepaymentLink_option != NULL )
      emberExiToXmlStructPrepaymentLink((data->PrepaymentLink_option));
    if ( data->ServiceCategory != NULL )
      emberExiToXmlStructServiceCategory((data->ServiceCategory));
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
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      emberExiPrintfLine("%2x", data->mRID_option.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      emberExiPrintfLine("%2x", data->roleFlags.bytes[i]);
  }
  emberExiPrintfLine("</roleFlags>");
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
  emberExiPrintfLine("  all=\"%d\"", data->all_option);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  results=\"%d\"", data->results_option);
  emberExiPrintfLine("  signatureRequired=\"%d\"", data->signatureRequired_option);
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




void emberExiPrintStructVoltage(EmberExiGeneratedVoltage *data)
{
  emExiPrintStruct(emberExiVoltageStructData,
                   (int8u *) data,
                   0,
                   "Voltage",
                   emberExiQnames);
}


void emberExiToXmlStructVoltage(EmberExiGeneratedVoltage *data) {
  EXI_DEBUG1("Start to XML: Voltage\n");
  emberExiPrintfLine("<Voltage");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier_option);
  emberExiPrintfLine("  <unit>%d</unit>", data->unit_option);
  emberExiPrintfLine("  <value>%d</value>", data->value_option);
  emberExiPrintfLine("</Voltage>");
  EXI_DEBUG1("End to XML: Voltage\n");
}



// number -> string map for printing
const char * const emberExiQnames[] = {
  NULL,        // 0 is the null qname
  "AccountBalance",
  "AccountBalanceLink",
  "AccountingUnit",
  "AccumulationBehaviourType",
  "Activation",
  "ActiveBillingPeriodListLink",
  "ActiveChargeReservationListLink",
  "ActiveCreditRegisterListLink",
  "ActiveDERControlListLink",
  "ActiveEndDeviceControlListLink",
  "ActivePower",
  "ActivePowerChargeRate",
  "ActiveProjectionReadingListLink",
  "ActiveSupplyInterruptionOverrideListLink",
  "ActiveTargetReadingListLink",
  "ActiveTextMessageListLink",
  "ActiveTimeTariffIntervalListLink",
  "AmpereHour",
  "BillingPeriod",
  "BillingPeriodList",
  "BillingPeriodListLink",
  "Charge",
  "ChargeKind",
  "ChargeList",
  "ChargeListLink",
  "ChargeReservation",
  "ChargeReservationList",
  "ChargeReservationListLink",
  "Charger",
  "ChargerLink",
  "ChargerListLink",
  "ChargerStatus",
  "CommodityType",
  "Condition",
  "Configuration",
  "ConfigurationLink",
  "ConsumptionTariffInterval",
  "ConsumptionTierType",
  "Cost",
  "CostKindType",
  "CreditRegister",
  "CreditRegisterList",
  "CreditRegisterListLink",
  "CreditStatusType",
  "CreditTypeChange",
  "CreditTypeType",
  "CurrencyCode",
  "CustomerAccount",
  "CustomerAccountLink",
  "DER",
  "DERControl",
  "DERControlList",
  "DERControlListLink",
  "DERLink",
  "DERListLink",
  "DERProgram",
  "DERProgramList",
  "DERProgramListLink",
  "DERStatus",
  "DERStatusLink",
  "DataQualifierType",
  "DateTimeInterval",
  "DemandResponseProgram",
  "DemandResponseProgramLink",
  "DemandResponseProgramList",
  "DemandResponseProgramListLink",
  "DeviceCapability",
  "DeviceCapabilityLink",
  "DeviceInformation",
  "DeviceInformationLink",
  "DeviceStatus",
  "DeviceStatusLink",
  "Document",
  "DrResponse",
  "DstRuleType",
  "DutyCycle",
  "EndDevice",
  "EndDeviceCategoryType",
  "EndDeviceControl",
  "EndDeviceControlList",
  "EndDeviceControlListLink",
  "EndDeviceGroup",
  "EndDeviceGroupList",
  "EndDeviceGroupListLink",
  "EndDeviceLink",
  "EndDeviceList",
  "EndDeviceListLink",
  "File",
  "FileList",
  "FileListLink",
  "FileStatus",
  "FlowDirectionType",
  "HexBinary128",
  "HexBinary16",
  "HexBinary160",
  "HexBinary32",
  "HexBinary64",
  "HexBinary8",
  "HistoricalReading",
  "HistoricalReadingList",
  "HistoricalReadingListLink",
  "IdentifiedObject",
  "Int16",
  "Int32",
  "Int64",
  "Int8",
  "IntervalBlock",
  "IntervalBlockList",
  "IntervalBlockListLink",
  "IntervalReading",
  "KindType",
  "Link",
  "List",
  "ListLink",
  "LoadShedAvailability",
  "LoadShedAvailabilityList",
  "LoadShedAvailabilityListLink",
  "LocaleType",
  "LogEvent",
  "LogEventList",
  "LogEventListLink",
  "MessagingProgram",
  "MessagingProgramList",
  "MessagingProgramListLink",
  "MeterReading",
  "MeterReadingBase",
  "MeterReadingLink",
  "MeterReadingList",
  "MeterReadingListLink",
  "MirrorMeterReading",
  "MirrorUsagePoint",
  "MirrorUsagePointList",
  "MirrorUsagePointListLink",
  "NetworkStatus",
  "NetworkStatusLink",
  "Notification",
  "NotificationList",
  "NotificationListLink",
  "Offset",
  "OffsetType",
  "PENType",
  "PerCent",
  "PhaseCode",
  "PowerConfiguration",
  "PowerFactor",
  "PowerOfTenMultiplierType",
  "PowerSourceType",
  "PowerStatus",
  "PowerStatusLink",
  "PrepayModeType",
  "PrepayOperationStatus",
  "PrepayOperationStatusLink",
  "PrepayResponse",
  "Prepayment",
  "PrepaymentLink",
  "PrepaymentList",
  "PrepaymentListLink",
  "PriceResponse",
  "PrimacyType",
  "PriorityType",
  "ProjectionReading",
  "ProjectionReadingList",
  "ProjectionReadingListLink",
  "QualityOfReading",
  "RandomizedDateTimeInterval",
  "RateComponent",
  "RateComponentList",
  "RateComponentListLink",
  "Reading",
  "ReadingLink",
  "ReadingList",
  "ReadingQuality",
  "ReadingType",
  "ReadingTypeLink",
  "ReadingTypeList",
  "ReadingTypeListLink",
  "RealEnergy",
  "Registration",
  "RegistrationLink",
  "RegistrationListLink",
  "ReservationStatusType",
  "Resource",
  "Response",
  "ResponseList",
  "ResponseListLink",
  "ServiceCategory",
  "ServiceChange",
  "ServiceKind",
  "ServiceStatusType",
  "ServiceSupplier",
  "ServiceSupplierLink",
  "ServiceSupplierList",
  "SetPoint",
  "SetpointType",
  "Signature",
  "SignatureAlgorithmType",
  "Size",
  "Status",
  "StatusType",
  "String192",
  "String20",
  "String32",
  "String42",
  "String6",
  "Subscription",
  "SubscriptionList",
  "SubscriptionListLink",
  "SupplyInterruptionOverride",
  "SupplyInterruptionOverrideList",
  "SupplyInterruptionOverrideListLink",
  "SupportedLocale",
  "SupportedLocaleList",
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
  "TimeAttributeType",
  "TimeConfiguration",
  "TimeLink",
  "TimeOffsetType",
  "TimeTariffInterval",
  "TimeTariffIntervalList",
  "TimeTariffIntervalListLink",
  "TimeType",
  "Type",
  "UInt16",
  "UInt32",
  "UInt40",
  "UInt48",
  "UInt64",
  "UInt8",
  "UTCTime",
  "UnitType",
  "UomType",
  "UsagePoint",
  "UsagePointBase",
  "UsagePointLink",
  "UsagePointList",
  "UsagePointListLink",
  "Voltage",
  "accumulationBehaviour",
  "activateTime",
  "ahRating",
  "algorithm",
  "amount",
  "attributeIdentifier",
  "availabilityDuration",
  "availableCredit",
  "batChaSt",
  "batteryInstallTime",
  "batteryStatus",
  "category",
  "chaTms",
  "changedTime",
  "commodity",
  "consuming",
  "consumptionTier",
  "costKind",
  "createdDateTime",
  "creationTime",
  "creditAmount",
  "creditExpiryLevel",
  "creditStatus",
  "creditType",
  "creditTypeApplied",
  "creditTypeChange",
  "creditTypeInUse",
  "currency",
  "currentPowerSource",
  "currentTime",
  "dataQualifier",
  "dateTime",
  "description",
  "deviceCategory",
  "deviceID",
  "drProgramMandatory",
  "dstEndRule",
  "dstEndTime",
  "dstOffset",
  "dstStartRule",
  "dstStartTime",
  "duration",
  "effectiveTime",
  "email",
  "emergencyCredit",
  "emergencyCreditStatus",
  "energyUnit",
  "estimatedChargeRemaining",
  "estimatedTimeRemaining",
  "fileURI",
  "flowDirection",
  "functionSet",
  "gUID",
  "gnBlk",
  "gnCtl",
  "gnRL",
  "installCode",
  "interval",
  "isActive",
  "kind",
  "lastUpdateTime",
  "limit",
  "loadShiftForward",
  "localTime",
  "locale",
  "logEventCode",
  "logEventPEN",
  "lowChargeThreshold",
  "lowCreditWarningLevel",
  "lowEmergencyCreditWarningLevel",
  "lowerThreshold",
  "mRID",
  "manufacturerID",
  "maxOperatingPower",
  "messageLength",
  "mfDate",
  "mfHwVer",
  "mfID",
  "mfInfo",
  "mfModel",
  "mfSerNum",
  "monetaryUnit",
  "multiplier",
  "newResourceURI",
  "newStatus",
  "newType",
  "nextUpdateTime",
  "nominalVoltage",
  "normalValue",
  "numPriceLevels",
  "onCount",
  "opState",
  "opTime",
  "originator",
  "overrideDuration",
  "phase",
  "phone",
  "potentiallySuperseded",
  "potentiallySupersededTime",
  "powerLimit",
  "powerOfTenMultiplier",
  "powerRequired",
  "prepayMode",
  "price",
  "priceLevel",
  "primacy",
  "primaryPower",
  "priority",
  "profileID",
  "providerID",
  "pushURI",
  "quality",
  "randomizeEnd",
  "randomizeStart",
  "rate",
  "rateCode",
  "reason",
  "resource",
  "roleFlags",
  "scheduledInterval",
  "secondaryPower",
  "serialNumber",
  "serviceChange",
  "serviceStatus",
  "serviceStatusApplied",
  "shed",
  "start",
  "startTime",
  "startValue",
  "stateOfCharge",
  "status",
  "statusTime",
  "subject",
  "subscriptionURI",
  "swActTime",
  "swVer",
  "targetPowerFactor",
  "testResult",
  "textMessage",
  "timeAttribute",
  "timeOnBattery",
  "timePeriod",
  "timeStamp",
  "token",
  "tou",
  "type",
  "tzOffset",
  "unit",
  "uom",
  "upperThreshold",
  "userDeviceName",
  "value",
  "varSupportMode",
  "vendorDefined",
  "voltageHigh",
  "voltageLow",
  "web",
  "all",
  "href",
  "replyTo",
  "responseRequired",
  "results",
  "signatureRequired",
  "subscribable",
  NULL         // helpful terminator
};
