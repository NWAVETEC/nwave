#define RULE(eventType, valueType, qname, nextGrammar)          \
  { EMBER_EXI_EVENT_TYPE_##eventType,                           \
    EMBER_EXI_TYPE_##valueType,                                 \
    EMBER_EXI_QNAME_##qname,                                    \
    (nextGrammar) } 

#define NBIT_RULE(eventType, qname, nextGrammar, bitLength)     \
  { EMBER_EXI_EVENT_TYPE_##eventType,                           \
    EMBER_EXI_TYPE_NBIT_UNSIGNED_INTEGER + (bitLength),         \
    EMBER_EXI_QNAME_##qname,                                    \
    (nextGrammar) } 

#define SE_RULE(qname, nextGrammar, valueGrammar)               \
  { ((valueGrammar) >> 8) | 0x80,                               \
    ((valueGrammar) & 0xFF),                                    \
    EMBER_EXI_QNAME_##qname,                                    \
    (nextGrammar) } 

EmberExiGrammarProduction productions[] = {
  RULE(SD, NONE, NONE, 1),
  SE_RULE(AccountBalance, 2, 3),
  SE_RULE(AccountBalanceLink, 2, 4),
  SE_RULE(AccountingUnit, 2, 5),
  SE_RULE(AccumulationBehaviourType, 2, 6),
  SE_RULE(Activation, 2, 7),
  SE_RULE(ActiveBillingPeriodListLink, 2, 8),
  SE_RULE(ActiveChargeReservationListLink, 2, 9),
  SE_RULE(ActiveCreditRegisterListLink, 2, 10),
  SE_RULE(ActiveDERControlListLink, 2, 11),
  SE_RULE(ActiveEndDeviceControlListLink, 2, 12),
  SE_RULE(ActivePower, 2, 13),
  SE_RULE(ActivePowerChargeRate, 2, 14),
  SE_RULE(ActiveProjectionReadingListLink, 2, 15),
  SE_RULE(ActiveSupplyInterruptionOverrideListLink, 2, 16),
  SE_RULE(ActiveTargetReadingListLink, 2, 17),
  SE_RULE(ActiveTextMessageListLink, 2, 18),
  SE_RULE(ActiveTimeTariffIntervalListLink, 2, 19),
  SE_RULE(AmpereHour, 2, 20),
  SE_RULE(BillingPeriod, 2, 21),
  SE_RULE(BillingPeriodList, 2, 22),
  SE_RULE(BillingPeriodListLink, 2, 23),
  SE_RULE(Charge, 2, 24),
  SE_RULE(ChargeKind, 2, 25),
  SE_RULE(ChargeList, 2, 26),
  SE_RULE(ChargeListLink, 2, 27),
  SE_RULE(ChargeReservation, 2, 28),
  SE_RULE(ChargeReservationListLink, 2, 29),
  SE_RULE(Charger, 2, 30),
  SE_RULE(ChargerLink, 2, 31),
  SE_RULE(ChargerListLink, 2, 32),
  SE_RULE(ChargerStatus, 2, 33),
  SE_RULE(CommodityType, 2, 34),
  SE_RULE(Condition, 2, 35),
  SE_RULE(Configuration, 2, 36),
  SE_RULE(ConfigurationLink, 2, 37),
  SE_RULE(ConsumptionBlockType, 2, 38),
  SE_RULE(ConsumptionTariffInterval, 2, 39),
  SE_RULE(Cost, 2, 40),
  SE_RULE(CostKindType, 2, 41),
  SE_RULE(CreditRegister, 2, 42),
  SE_RULE(CreditRegisterList, 2, 43),
  SE_RULE(CreditRegisterListLink, 2, 44),
  SE_RULE(CreditStatusType, 2, 45),
  SE_RULE(CreditTypeChange, 2, 46),
  SE_RULE(CreditTypeType, 2, 47),
  SE_RULE(CurrencyCode, 2, 48),
  SE_RULE(CustomerAccount, 2, 49),
  SE_RULE(CustomerAccountLink, 2, 50),
  SE_RULE(DER, 2, 51),
  SE_RULE(DERControl, 2, 52),
  SE_RULE(DERControlListLink, 2, 53),
  SE_RULE(DERLink, 2, 54),
  SE_RULE(DERListLink, 2, 55),
  SE_RULE(DERProgram, 2, 56),
  SE_RULE(DERProgramListLink, 2, 57),
  SE_RULE(DERStatus, 2, 58),
  SE_RULE(DERStatusLink, 2, 59),
  SE_RULE(DataQualifierType, 2, 60),
  SE_RULE(DateTimeInterval, 2, 61),
  SE_RULE(DemandResponseProgram, 2, 62),
  SE_RULE(DemandResponseProgramLink, 2, 63),
  SE_RULE(DemandResponseProgramList, 2, 64),
  SE_RULE(DemandResponseProgramListLink, 2, 65),
  SE_RULE(DeviceCapability, 2, 66),
  SE_RULE(DeviceCapabilityLink, 2, 67),
  SE_RULE(DeviceInformation, 2, 68),
  SE_RULE(DeviceInformationLink, 2, 69),
  SE_RULE(DeviceStatus, 2, 70),
  SE_RULE(DeviceStatusLink, 2, 71),
  SE_RULE(Document, 2, 72),
  SE_RULE(DrResponse, 2, 73),
  SE_RULE(DutyCycle, 2, 74),
  SE_RULE(EndDevice, 2, 75),
  SE_RULE(EndDeviceCategoryType, 2, 76),
  SE_RULE(EndDeviceControl, 2, 77),
  SE_RULE(EndDeviceControlList, 2, 78),
  SE_RULE(EndDeviceControlListLink, 2, 79),
  SE_RULE(EndDeviceGroup, 2, 80),
  SE_RULE(EndDeviceGroupList, 2, 81),
  SE_RULE(EndDeviceGroupListLink, 2, 82),
  SE_RULE(EndDeviceLink, 2, 83),
  SE_RULE(EndDeviceList, 2, 84),
  SE_RULE(EndDeviceListLink, 2, 85),
  SE_RULE(Event, 2, 86),
  SE_RULE(File, 2, 87),
  SE_RULE(FileList, 2, 88),
  SE_RULE(FileListLink, 2, 89),
  SE_RULE(FileStatus, 2, 90),
  SE_RULE(FlowDirectionType, 2, 91),
  SE_RULE(HistoricalReading, 2, 92),
  SE_RULE(HistoricalReadingList, 2, 93),
  SE_RULE(HistoricalReadingListLink, 2, 94),
  SE_RULE(IPInterface, 2, 95),
  SE_RULE(IPInterfaceList, 2, 96),
  SE_RULE(IPInterfaceListLink, 2, 97),
  SE_RULE(IdentifiedObject, 2, 98),
  SE_RULE(KindType, 2, 99),
  SE_RULE(Link, 2, 100),
  SE_RULE(List, 2, 101),
  SE_RULE(ListLink, 2, 102),
  SE_RULE(LoadShedAvailability, 2, 103),
  SE_RULE(LoadShedAvailabilityList, 2, 104),
  SE_RULE(LoadShedAvailabilityListLink, 2, 105),
  SE_RULE(LocaleType, 2, 106),
  SE_RULE(LogEvent, 2, 107),
  SE_RULE(LogEventList, 2, 108),
  SE_RULE(LogEventListLink, 2, 109),
  SE_RULE(MessagingProgram, 2, 110),
  SE_RULE(MessagingProgramList, 2, 111),
  SE_RULE(MessagingProgramListLink, 2, 112),
  SE_RULE(MeterReading, 2, 113),
  SE_RULE(MeterReadingBase, 2, 114),
  SE_RULE(MeterReadingLink, 2, 115),
  SE_RULE(MeterReadingList, 2, 116),
  SE_RULE(MeterReadingListLink, 2, 117),
  SE_RULE(MirrorMeterReading, 2, 118),
  SE_RULE(MirrorUsagePoint, 2, 119),
  SE_RULE(MirrorUsagePointList, 2, 120),
  SE_RULE(MirrorUsagePointListLink, 2, 121),
  SE_RULE(Notification, 2, 122),
  SE_RULE(NotificationList, 2, 123),
  SE_RULE(NotificationListLink, 2, 124),
  SE_RULE(Offset, 2, 125),
  SE_RULE(OffsetType, 2, 126),
  SE_RULE(PerCent, 2, 127),
  SE_RULE(PhaseCode, 2, 128),
  SE_RULE(PowerConfiguration, 2, 129),
  SE_RULE(PowerFactor, 2, 130),
  SE_RULE(PowerOfTenMultiplierType, 2, 131),
  SE_RULE(PowerSourceType, 2, 132),
  SE_RULE(PowerStatus, 2, 133),
  SE_RULE(PowerStatusLink, 2, 134),
  SE_RULE(PrepayModeType, 2, 135),
  SE_RULE(PrepayOperationStatus, 2, 136),
  SE_RULE(PrepayOperationStatusLink, 2, 137),
  SE_RULE(PrepayResponse, 2, 138),
  SE_RULE(Prepayment, 2, 139),
  SE_RULE(PrepaymentLink, 2, 140),
  SE_RULE(PrepaymentList, 2, 141),
  SE_RULE(PrepaymentListLink, 2, 142),
  SE_RULE(PriceResponse, 2, 143),
  SE_RULE(PrimacyType, 2, 144),
  SE_RULE(PriorityType, 2, 145),
  SE_RULE(ProjectionReading, 2, 146),
  SE_RULE(ProjectionReadingList, 2, 147),
  SE_RULE(ProjectionReadingListLink, 2, 148),
  SE_RULE(RPLInstance, 2, 149),
  SE_RULE(RPLInstanceList, 2, 150),
  SE_RULE(RPLInstanceListLink, 2, 151),
  SE_RULE(RPLSourceRoutes, 2, 152),
  SE_RULE(RPLSourceRoutesList, 2, 153),
  SE_RULE(RPLSourceRoutesListLink, 2, 154),
  SE_RULE(RandomizableEvent, 2, 155),
  SE_RULE(RateComponent, 2, 156),
  SE_RULE(RateComponentList, 2, 157),
  SE_RULE(RateComponentListLink, 2, 158),
  SE_RULE(Reading, 2, 159),
  SE_RULE(ReadingLink, 2, 160),
  SE_RULE(ReadingList, 2, 161),
  SE_RULE(ReadingListLink, 2, 162),
  SE_RULE(ReadingSet, 2, 163),
  SE_RULE(ReadingSetList, 2, 164),
  SE_RULE(ReadingSetListLink, 2, 165),
  SE_RULE(ReadingType, 2, 166),
  SE_RULE(ReadingTypeLink, 2, 167),
  SE_RULE(ReadingTypeList, 2, 168),
  SE_RULE(ReadingTypeListLink, 2, 169),
  SE_RULE(RealEnergy, 2, 170),
  SE_RULE(Registration, 2, 171),
  SE_RULE(RegistrationLink, 2, 172),
  SE_RULE(RegistrationListLink, 2, 173),
  SE_RULE(ReservationStatusType, 2, 174),
  SE_RULE(Resource, 2, 175),
  SE_RULE(RespondableIdentifiedObject, 2, 176),
  SE_RULE(RespondableResource, 2, 177),
  SE_RULE(Response, 2, 178),
  SE_RULE(ResponseList, 2, 179),
  SE_RULE(ResponseListLink, 2, 180),
  SE_RULE(ServiceCategory, 2, 181),
  SE_RULE(ServiceChange, 2, 182),
  SE_RULE(ServiceKind, 2, 183),
  SE_RULE(ServiceStatusType, 2, 184),
  SE_RULE(ServiceSupplier, 2, 185),
  SE_RULE(ServiceSupplierLink, 2, 186),
  SE_RULE(ServiceSupplierList, 2, 187),
  SE_RULE(SetPoint, 2, 188),
  SE_RULE(SetpointType, 2, 189),
  SE_RULE(Signature, 2, 190),
  SE_RULE(SignatureAlgorithmType, 2, 191),
  SE_RULE(Status, 2, 192),
  SE_RULE(StatusType, 2, 193),
  SE_RULE(SubscribableIdentifiedObject, 2, 194),
  SE_RULE(SubscribableList, 2, 195),
  SE_RULE(SubscribableResource, 2, 196),
  SE_RULE(Subscription, 2, 197),
  SE_RULE(SubscriptionList, 2, 198),
  SE_RULE(SubscriptionListLink, 2, 199),
  SE_RULE(SupplyInterruptionOverride, 2, 200),
  SE_RULE(SupplyInterruptionOverrideList, 2, 201),
  SE_RULE(SupplyInterruptionOverrideListLink, 2, 202),
  SE_RULE(SupportedLocale, 2, 203),
  SE_RULE(SupportedLocaleListLink, 2, 204),
  SE_RULE(TOUType, 2, 205),
  SE_RULE(TargetReading, 2, 206),
  SE_RULE(TargetReadingList, 2, 207),
  SE_RULE(TargetReadingListLink, 2, 208),
  SE_RULE(TargetReduction, 2, 209),
  SE_RULE(TariffProfile, 2, 210),
  SE_RULE(TariffProfileLink, 2, 211),
  SE_RULE(TariffProfileList, 2, 212),
  SE_RULE(TariffProfileListLink, 2, 213),
  SE_RULE(Temperature, 2, 214),
  SE_RULE(TextMessage, 2, 215),
  SE_RULE(TextMessageList, 2, 216),
  SE_RULE(TextMessageListLink, 2, 217),
  SE_RULE(TextResponse, 2, 218),
  SE_RULE(Time, 2, 219),
  SE_RULE(TimeAttributeType, 2, 220),
  SE_RULE(TimeConfiguration, 2, 221),
  SE_RULE(TimeLink, 2, 222),
  SE_RULE(TimeTariffInterval, 2, 223),
  SE_RULE(TimeTariffIntervalList, 2, 224),
  SE_RULE(TimeTariffIntervalListLink, 2, 225),
  SE_RULE(UnitType, 2, 226),
  SE_RULE(UnitValueType, 2, 227),
  SE_RULE(UomType, 2, 228),
  SE_RULE(UsagePoint, 2, 229),
  SE_RULE(UsagePointBase, 2, 230),
  SE_RULE(UsagePointLink, 2, 231),
  SE_RULE(UsagePointList, 2, 232),
  SE_RULE(UsagePointListLink, 2, 233),
  SE_RULE(Voltage, 2, 234),
  SE_RULE(mRIDType, 2, 235),
  RULE(NONE, NONE, NONE, 2),  // Warning: unexpected event type START_ELEMENT_GENERIC
  RULE(ED, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 236),
  SE_RULE(availableCredit, 237, 5),
  RULE(AT, STRING, href, 238),
  SE_RULE(energyUnit, 239, 170),
  SE_RULE(monetaryUnit, 240, 48),
  SE_RULE(multiplier, 241, 131),
  SE_RULE(value, 242, 243),
  RULE(EE, NONE, NONE, 0xFFFF),
  NBIT_RULE(CH, NONE, 244, 8),
  SE_RULE(activateTime, 245, 246),
  RULE(AT, UNSIGNED_INTEGER, all, 247),
  RULE(AT, UNSIGNED_INTEGER, all, 248),
  RULE(AT, UNSIGNED_INTEGER, all, 249),
  RULE(AT, UNSIGNED_INTEGER, all, 250),
  RULE(AT, UNSIGNED_INTEGER, all, 251),
  SE_RULE(multiplier, 252, 131),
  SE_RULE(unit, 253, 228),
  SE_RULE(value, 254, 255),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(multiplier, 256, 131),
  SE_RULE(unit, 257, 228),
  SE_RULE(value, 258, 259),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 260),
  RULE(AT, UNSIGNED_INTEGER, all, 261),
  RULE(AT, UNSIGNED_INTEGER, all, 262),
  RULE(AT, UNSIGNED_INTEGER, all, 263),
  RULE(AT, UNSIGNED_INTEGER, all, 264),
  SE_RULE(multiplier, 265, 131),
  SE_RULE(unit, 266, 228),
  SE_RULE(value, 267, 268),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 269),
  SE_RULE(mRID, 270, 235),
  SE_RULE(description, 271, 272),
  SE_RULE(interval, 273, 61),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 274),
  RULE(AT, STRING, href, 275),
  NBIT_RULE(AT, results, 276, 8),
  SE_RULE(BillingPeriod, 277, 21),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 278),
  RULE(AT, STRING, href, 279),
  SE_RULE(mRID, 280, 235),
  SE_RULE(description, 281, 272),
  SE_RULE(RateComponentListLink, 282, 158),
  SE_RULE(ReadingLink, 283, 160),
  SE_RULE(ReadingSetListLink, 284, 165),
  SE_RULE(ReadingTypeLink, 285, 167),
  RULE(AT, UNSIGNED_INTEGER, all, 286),
  RULE(AT, STRING, href, 287),
  NBIT_RULE(AT, results, 288, 8),
  SE_RULE(Charge, 289, 24),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 290),
  RULE(AT, STRING, href, 291),
  SE_RULE(mRID, 292, 235),
  SE_RULE(description, 293, 272),
  SE_RULE(ChargerLink, 294, 31),
  SE_RULE(scheduledInterval, 295, 61),
  RULE(AT, UNSIGNED_INTEGER, all, 296),
  RULE(AT, STRING, href, 297),
  SE_RULE(mRID, 298, 235),
  SE_RULE(description, 299, 272),
  SE_RULE(ChargerStatus, 300, 33),
  SE_RULE(powerRequired, 301, 13),
  RULE(AT, STRING, href, 302),
  RULE(AT, UNSIGNED_INTEGER, all, 303),
  SE_RULE(batChaSt, 304, 305),
  SE_RULE(attributeIdentifier, 306, 307),
  RULE(AT, STRING, href, 308),
  SE_RULE(mRID, 309, 235),
  SE_RULE(description, 310, 272),
  SE_RULE(locale, 311, 106),
  RULE(AT, STRING, href, 312),
  SE_RULE(Cost, 313, 40),
  SE_RULE(price, 314, 315),
  SE_RULE(pricePowerOfTenMultiplier, 316, 131),
  SE_RULE(startValue, 317, 243),
  SE_RULE(amount, 318, 319),
  RULE(AT, STRING, href, 320),
  SE_RULE(mRID, 321, 235),
  SE_RULE(description, 322, 272),
  SE_RULE(creditAmount, 323, 5),
  RULE(AT, UNSIGNED_INTEGER, all, 324),
  RULE(AT, STRING, href, 325),
  NBIT_RULE(AT, results, 326, 8),
  SE_RULE(CreditRegister, 327, 42),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 328),
  SE_RULE(newType, 329, 47),
  RULE(CH, UNSIGNED_INTEGER, NONE, 244),
  RULE(AT, STRING, href, 330),
  SE_RULE(category, 331, 272),
  SE_RULE(createdDateTime, 332, 246),
  SE_RULE(originatingMRID, 333, 235),
  SE_RULE(status, 334, 193),
  SE_RULE(ActiveBillingPeriodListLink, 335, 8),
  SE_RULE(ActiveProjectionReadingListLink, 336, 15),
  SE_RULE(ActiveTargetReadingListLink, 337, 17),
  SE_RULE(BillingPeriodListLink, 338, 23),
  SE_RULE(ChargeListLink, 339, 27),
  SE_RULE(currency, 340, 341),
  SE_RULE(HistoricalReadingListLink, 342, 94),
  SE_RULE(ProjectionReadingListLink, 343, 148),
  SE_RULE(TargetReadingListLink, 344, 208),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 345),
  RULE(AT, STRING, href, 346),
  SE_RULE(ahRating, 347, 20),
  SE_RULE(DERStatusLink, 348, 59),
  RULE(AT, STRING, href, 349),
  RULE(AT, STRING, replyTo, 350),
  RULE(AT, BINARY, responseRequired, 351),
  RULE(AT, BOOLEAN, signatureRequired, 352),
  SE_RULE(mRID, 353, 235),
  SE_RULE(description, 354, 272),
  SE_RULE(creationTime, 355, 246),
  RULE(AT, UNSIGNED_INTEGER, all, 356),
  RULE(AT, STRING, href, 357),
  RULE(AT, UNSIGNED_INTEGER, all, 358),
  RULE(AT, STRING, href, 359),
  SE_RULE(mRID, 360, 235),
  SE_RULE(description, 361, 272),
  SE_RULE(ActiveChargeReservationListLink, 362, 9),
  SE_RULE(ActiveDERControlListLink, 363, 11),
  SE_RULE(ChargeReservationListLink, 364, 29),
  SE_RULE(DERControlListLink, 365, 53),
  SE_RULE(primacy, 366, 144),
  RULE(AT, UNSIGNED_INTEGER, all, 367),
  RULE(AT, STRING, href, 368),
  SE_RULE(mRID, 369, 235),
  SE_RULE(description, 370, 272),
  SE_RULE(estimatedTimeRemaining, 371, 372),
  RULE(AT, STRING, href, 373),
  SE_RULE(duration, 374, 375),
  RULE(AT, STRING, href, 376),
  SE_RULE(mRID, 377, 235),
  SE_RULE(description, 378, 272),
  SE_RULE(ActiveEndDeviceControlListLink, 379, 12),
  SE_RULE(EndDeviceControlListLink, 380, 79),
  SE_RULE(primacy, 381, 144),
  RULE(AT, STRING, href, 382),
  RULE(AT, UNSIGNED_INTEGER, all, 383),
  RULE(AT, STRING, href, 384),
  NBIT_RULE(AT, results, 385, 8),
  RULE(AT, BOOLEAN, subscribable, 386),
  SE_RULE(DemandResponseProgram, 387, 62),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 388),
  RULE(AT, STRING, href, 389),
  SE_RULE(mRID, 390, 235),
  SE_RULE(description, 391, 272),
  SE_RULE(ActiveBillingPeriodListLink, 392, 8),
  SE_RULE(BillingPeriodListLink, 393, 23),
  SE_RULE(CustomerAccountLink, 394, 50),
  SE_RULE(DemandResponseProgramListLink, 395, 65),
  SE_RULE(DERListLink, 396, 55),
  SE_RULE(DERProgramListLink, 397, 57),
  SE_RULE(MessagingProgramListLink, 398, 112),
  SE_RULE(PrepaymentListLink, 399, 142),
  SE_RULE(TariffProfileLink, 400, 211),
  SE_RULE(TimeLink, 401, 222),
  SE_RULE(UsagePointListLink, 402, 233),
  SE_RULE(ConfigurationLink, 403, 37),
  SE_RULE(DeviceInformationLink, 404, 69),
  SE_RULE(EndDeviceGroupListLink, 405, 82),
  SE_RULE(EndDeviceListLink, 406, 85),
  SE_RULE(IPInterfaceListLink, 407, 97),
  SE_RULE(LogEventListLink, 408, 109),
  SE_RULE(MirrorUsagePointListLink, 409, 121),
  SE_RULE(PowerStatusLink, 410, 134),
  SE_RULE(SubscriptionListLink, 411, 199),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 412),
  RULE(AT, STRING, href, 413),
  SE_RULE(mfDate, 414, 246),
  RULE(AT, STRING, href, 415),
  RULE(AT, STRING, href, 416),
  SE_RULE(changedTime, 417, 246),
  RULE(AT, STRING, href, 418),
  RULE(AT, STRING, href, 419),
  SE_RULE(category, 420, 272),
  SE_RULE(createdDateTime, 421, 246),
  SE_RULE(originatingMRID, 422, 235),
  SE_RULE(status, 423, 193),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 424),
  SE_RULE(category, 425, 272),
  SE_RULE(createdDateTime, 426, 246),
  SE_RULE(originatingMRID, 427, 235),
  SE_RULE(status, 428, 193),
  SE_RULE(EndDeviceLink, 429, 83),
  SE_RULE(normalValue, 430, 431),
  RULE(AT, STRING, href, 432),
  SE_RULE(mRID, 433, 235),
  SE_RULE(description, 434, 272),
  SE_RULE(category, 435, 76),
  SE_RULE(DeviceInformationLink, 436, 69),
  SE_RULE(DeviceStatusLink, 437, 71),
  SE_RULE(EndDeviceGroupListLink, 438, 82),
  SE_RULE(FileListLink, 439, 89),
  SE_RULE(gUID, 440, 441),
  RULE(CH, BINARY, NONE, 244),
  RULE(AT, STRING, href, 442),
  RULE(AT, STRING, replyTo, 443),
  RULE(AT, BINARY, responseRequired, 444),
  RULE(AT, BOOLEAN, signatureRequired, 445),
  SE_RULE(mRID, 446, 235),
  SE_RULE(description, 447, 272),
  SE_RULE(creationTime, 448, 246),
  RULE(AT, UNSIGNED_INTEGER, all, 449),
  RULE(AT, STRING, href, 450),
  NBIT_RULE(AT, results, 451, 8),
  RULE(AT, BOOLEAN, subscribable, 452),
  SE_RULE(EndDeviceControl, 453, 77),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 454),
  RULE(AT, STRING, href, 455),
  SE_RULE(mRID, 456, 235),
  SE_RULE(description, 457, 272),
  SE_RULE(ActiveBillingPeriodListLink, 458, 8),
  SE_RULE(BillingPeriodListLink, 459, 23),
  SE_RULE(CustomerAccountLink, 460, 50),
  SE_RULE(DemandResponseProgramListLink, 461, 65),
  SE_RULE(DERListLink, 462, 55),
  SE_RULE(DERProgramListLink, 463, 57),
  SE_RULE(MessagingProgramListLink, 464, 112),
  SE_RULE(PrepaymentListLink, 465, 142),
  SE_RULE(TariffProfileLink, 466, 211),
  SE_RULE(TimeLink, 467, 222),
  SE_RULE(UsagePointListLink, 468, 233),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 469),
  RULE(AT, STRING, href, 470),
  NBIT_RULE(AT, results, 471, 8),
  RULE(AT, BOOLEAN, subscribable, 472),
  SE_RULE(EndDeviceGroup, 473, 474),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 475),
  RULE(AT, STRING, href, 476),
  RULE(AT, UNSIGNED_INTEGER, all, 477),
  RULE(AT, STRING, href, 478),
  NBIT_RULE(AT, results, 479, 8),
  RULE(AT, BOOLEAN, subscribable, 480),
  SE_RULE(EndDevice, 481, 75),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 482),
  RULE(AT, STRING, href, 483),
  RULE(AT, STRING, replyTo, 484),
  RULE(AT, BINARY, responseRequired, 485),
  RULE(AT, BOOLEAN, signatureRequired, 486),
  SE_RULE(mRID, 487, 235),
  SE_RULE(description, 488, 272),
  SE_RULE(creationTime, 489, 246),
  RULE(AX, NONE, NONE, 0xFFFF),
  SE_RULE(fileURI, 490, 491),
  RULE(AT, UNSIGNED_INTEGER, all, 492),
  RULE(AT, STRING, href, 493),
  NBIT_RULE(AT, results, 494, 8),
  RULE(AT, BOOLEAN, subscribable, 495),
  SE_RULE(File, 496, 87),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 497),
  SE_RULE(deviceID, 498, 441),
  RULE(AT, STRING, href, 499),
  SE_RULE(mRID, 500, 235),
  SE_RULE(description, 501, 272),
  SE_RULE(RateComponentListLink, 502, 158),
  SE_RULE(ReadingLink, 503, 160),
  SE_RULE(ReadingSetListLink, 504, 165),
  SE_RULE(ReadingTypeLink, 505, 167),
  RULE(AT, UNSIGNED_INTEGER, all, 506),
  RULE(AT, STRING, href, 507),
  NBIT_RULE(AT, results, 508, 8),
  SE_RULE(HistoricalReading, 509, 92),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 510),
  RULE(AT, STRING, href, 511),
  SE_RULE(ifDescr, 512, 513),
  SE_RULE(ifHighSpeed, 514, 515),
  SE_RULE(ifInBroadcastPkts, 516, 517),
  RULE(AT, UNSIGNED_INTEGER, all, 518),
  RULE(AT, STRING, href, 519),
  NBIT_RULE(AT, results, 520, 8),
  SE_RULE(IPInterface, 521, 95),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 522),
  RULE(AT, STRING, href, 523),
  SE_RULE(mRID, 524, 235),
  SE_RULE(description, 525, 272),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 526),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 527),
  RULE(AT, STRING, href, 528),
  NBIT_RULE(AT, results, 529, 8),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 530),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 531),
  SE_RULE(mRID, 532, 235),
  SE_RULE(description, 533, 272),
  SE_RULE(availabilityDuration, 534, 535),
  SE_RULE(consuming, 536, 537),
  RULE(AT, UNSIGNED_INTEGER, all, 538),
  RULE(AT, STRING, href, 539),
  NBIT_RULE(AT, results, 540, 8),
  SE_RULE(LoadShedAvailability, 541, 103),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 542),
  RULE(CH, STRING, NONE, 244),
  RULE(AT, STRING, href, 543),
  SE_RULE(createdDateTime, 544, 246),
  RULE(AT, UNSIGNED_INTEGER, all, 545),
  RULE(AT, STRING, href, 546),
  NBIT_RULE(AT, results, 547, 8),
  RULE(AT, BOOLEAN, subscribable, 548),
  SE_RULE(LogEvent, 549, 107),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 550),
  RULE(AT, STRING, href, 551),
  SE_RULE(mRID, 552, 235),
  SE_RULE(description, 553, 272),
  SE_RULE(ActiveTextMessageListLink, 554, 18),
  SE_RULE(locale, 555, 106),
  RULE(AT, UNSIGNED_INTEGER, all, 556),
  RULE(AT, STRING, href, 557),
  NBIT_RULE(AT, results, 558, 8),
  SE_RULE(MessagingProgram, 559, 110),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 560),
  RULE(AT, STRING, href, 561),
  SE_RULE(mRID, 562, 235),
  SE_RULE(description, 563, 272),
  SE_RULE(RateComponentListLink, 564, 158),
  SE_RULE(ReadingLink, 565, 160),
  SE_RULE(ReadingSetListLink, 566, 165),
  SE_RULE(ReadingTypeLink, 567, 167),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 568),
  SE_RULE(mRID, 569, 235),
  SE_RULE(description, 570, 272),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 571),
  RULE(AT, UNSIGNED_INTEGER, all, 572),
  RULE(AT, STRING, href, 573),
  NBIT_RULE(AT, results, 574, 8),
  RULE(AT, BOOLEAN, subscribable, 575),
  SE_RULE(MeterReading, 576, 577),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 578),
  RULE(AT, STRING, href, 579),
  SE_RULE(mRID, 580, 235),
  SE_RULE(description, 581, 272),
  SE_RULE(lastUpdateTime, 582, 246),
  SE_RULE(nextUpdateTime, 583, 246),
  SE_RULE(ReadingSet, 583, 163),
  SE_RULE(ReadingType, 584, 166),
  RULE(AT, STRING, href, 585),
  SE_RULE(mRID, 586, 235),
  SE_RULE(description, 587, 272),
  SE_RULE(roleFlags, 588, 589),
  RULE(AT, UNSIGNED_INTEGER, all, 590),
  RULE(AT, STRING, href, 591),
  NBIT_RULE(AT, results, 592, 8),
  SE_RULE(MirrorUsagePoint, 593, 119),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 594),
  RULE(AT, STRING, href, 595),
  SE_RULE(mRID, 596, 235),
  SE_RULE(description, 597, 272),
  SE_RULE(resource, 598, 491),
  RULE(AT, UNSIGNED_INTEGER, all, 599),
  RULE(AT, STRING, href, 600),
  NBIT_RULE(AT, results, 601, 8),
  SE_RULE(Notification, 602, 122),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 603),
  SE_RULE(type, 604, 126),
  RULE(AT, STRING, href, 605),
  SE_RULE(batteryInstallTime, 606, 246),
  SE_RULE(lowChargeThreshold, 607, 608),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(multiplier, 609, 131),
  SE_RULE(unit, 610, 228),
  SE_RULE(value, 611, 612),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 613),
  SE_RULE(batteryStatus, 614, 615),
  RULE(AT, STRING, href, 616),
  RULE(AT, STRING, href, 617),
  SE_RULE(creditTypeChange, 618, 46),
  SE_RULE(creditTypeInUse, 619, 47),
  SE_RULE(serviceChange, 620, 182),
  SE_RULE(serviceStatus, 621, 184),
  RULE(AT, STRING, href, 622),
  RULE(AT, STRING, href, 623),
  SE_RULE(category, 624, 272),
  SE_RULE(createdDateTime, 625, 246),
  SE_RULE(originatingMRID, 626, 235),
  SE_RULE(status, 627, 193),
  SE_RULE(EndDeviceLink, 628, 83),
  RULE(AT, STRING, href, 629),
  SE_RULE(mRID, 630, 235),
  SE_RULE(description, 631, 272),
  SE_RULE(AccountBalanceLink, 632, 4),
  RULE(AT, STRING, href, 633),
  RULE(AT, UNSIGNED_INTEGER, all, 634),
  RULE(AT, STRING, href, 635),
  NBIT_RULE(AT, results, 636, 8),
  SE_RULE(Prepayment, 637, 139),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 638),
  RULE(AT, STRING, href, 639),
  SE_RULE(category, 640, 272),
  SE_RULE(createdDateTime, 641, 246),
  SE_RULE(originatingMRID, 642, 235),
  SE_RULE(status, 643, 193),
  SE_RULE(EndDeviceLink, 644, 83),
  RULE(AT, STRING, href, 645),
  SE_RULE(mRID, 646, 235),
  SE_RULE(description, 647, 272),
  SE_RULE(RateComponentListLink, 648, 158),
  SE_RULE(ReadingLink, 649, 160),
  SE_RULE(ReadingSetListLink, 650, 165),
  SE_RULE(ReadingTypeLink, 651, 167),
  RULE(AT, UNSIGNED_INTEGER, all, 652),
  RULE(AT, STRING, href, 653),
  NBIT_RULE(AT, results, 654, 8),
  SE_RULE(ProjectionReading, 655, 146),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 656),
  RULE(AT, STRING, href, 657),
  SE_RULE(DODAGid, 658, 659),
  RULE(AT, UNSIGNED_INTEGER, all, 660),
  RULE(AT, STRING, href, 661),
  NBIT_RULE(AT, results, 662, 8),
  SE_RULE(RPLInstance, 663, 149),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 664),
  RULE(AT, STRING, href, 665),
  SE_RULE(DestAddress, 666, 667),
  RULE(AT, UNSIGNED_INTEGER, all, 668),
  RULE(AT, STRING, href, 669),
  NBIT_RULE(AT, results, 670, 8),
  SE_RULE(RPLSourceRoutes, 671, 152),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 672),
  RULE(AT, STRING, href, 673),
  RULE(AT, STRING, replyTo, 674),
  RULE(AT, BINARY, responseRequired, 675),
  RULE(AT, BOOLEAN, signatureRequired, 676),
  SE_RULE(mRID, 677, 235),
  SE_RULE(description, 678, 272),
  SE_RULE(creationTime, 679, 246),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 680),
  SE_RULE(mRID, 681, 235),
  SE_RULE(description, 682, 272),
  SE_RULE(ActiveTimeTariffIntervalListLink, 683, 19),
  SE_RULE(flowRateEndLimit, 684, 227),
  SE_RULE(flowRateStartLimit, 685, 227),
  SE_RULE(ReadingTypeLink, 686, 167),
  SE_RULE(roleFlags, 687, 589),
  RULE(AT, UNSIGNED_INTEGER, all, 688),
  RULE(AT, STRING, href, 689),
  NBIT_RULE(AT, results, 690, 8),
  SE_RULE(RateComponent, 691, 156),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 692),
  RULE(AT, STRING, href, 693),
  SE_RULE(consumptionBlock, 694, 38),
  SE_RULE(localID, 695, 589),
  SE_RULE(qualityFlags, 696, 589),
  SE_RULE(timePeriod, 697, 61),
  SE_RULE(touTier, 698, 205),
  SE_RULE(value, 699, 700),
  RULE(AT, STRING, href, 701),
  RULE(AT, UNSIGNED_INTEGER, all, 702),
  RULE(AT, STRING, href, 703),
  NBIT_RULE(AT, results, 704, 8),
  SE_RULE(Reading, 705, 159),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 706),
  RULE(AT, STRING, href, 707),
  SE_RULE(mRID, 708, 235),
  SE_RULE(description, 709, 272),
  SE_RULE(ReadingListLink, 710, 162),
  SE_RULE(timePeriod, 711, 61),
  RULE(AT, UNSIGNED_INTEGER, all, 712),
  RULE(AT, STRING, href, 713),
  NBIT_RULE(AT, results, 714, 8),
  RULE(AT, BOOLEAN, subscribable, 715),
  SE_RULE(ReadingSet, 716, 163),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 717),
  RULE(AT, STRING, href, 718),
  SE_RULE(accumulationBehaviour, 719, 6),
  SE_RULE(calorificValue, 720, 227),
  SE_RULE(commodity, 721, 34),
  SE_RULE(conversionFactor, 722, 227),
  SE_RULE(currency, 723, 48),
  SE_RULE(dataQualifier, 724, 60),
  SE_RULE(flowDirection, 725, 91),
  SE_RULE(intervalLength, 726, 727),
  SE_RULE(kind, 728, 99),
  SE_RULE(numberOfConsumptionBlocks, 729, 730),
  SE_RULE(numberOfTouTiers, 731, 732),
  SE_RULE(phase, 733, 128),
  SE_RULE(powerOfTenMultiplier, 734, 131),
  SE_RULE(timeAttribute, 735, 220),
  SE_RULE(uom, 736, 228),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 737),
  RULE(AT, UNSIGNED_INTEGER, all, 738),
  RULE(AT, STRING, href, 739),
  NBIT_RULE(AT, results, 740, 8),
  SE_RULE(ReadingType, 741, 166),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 742),
  SE_RULE(multiplier, 743, 131),
  SE_RULE(unit, 744, 228),
  SE_RULE(value, 745, 243),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 746),
  SE_RULE(mRID, 747, 235),
  SE_RULE(description, 748, 272),
  SE_RULE(installCode, 749, 750),
  RULE(AT, STRING, href, 751),
  RULE(AT, UNSIGNED_INTEGER, all, 752),
  RULE(AT, STRING, href, 753),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 754),
  RULE(AT, STRING, replyTo, 755),
  RULE(AT, BINARY, responseRequired, 756),
  RULE(AT, BOOLEAN, signatureRequired, 757),
  SE_RULE(mRID, 758, 235),
  SE_RULE(description, 759, 272),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 760),
  RULE(AT, STRING, replyTo, 761),
  RULE(AT, BINARY, responseRequired, 762),
  RULE(AT, BOOLEAN, signatureRequired, 763),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 764),
  SE_RULE(category, 765, 272),
  SE_RULE(createdDateTime, 766, 246),
  SE_RULE(originatingMRID, 767, 235),
  SE_RULE(status, 768, 193),
  SE_RULE(EndDeviceLink, 769, 83),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 770),
  RULE(AT, STRING, href, 771),
  NBIT_RULE(AT, results, 772, 8),
  SE_RULE(Response, 773, 774),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 775),
  SE_RULE(kind, 776, 183),
  SE_RULE(newStatus, 777, 45),
  RULE(AT, STRING, href, 778),
  SE_RULE(mRID, 779, 235),
  SE_RULE(description, 780, 272),
  SE_RULE(email, 781, 272),
  SE_RULE(phone, 782, 783),
  SE_RULE(providerID, 784, 785),
  SE_RULE(web, 786, 787),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 788),
  RULE(AT, UNSIGNED_INTEGER, all, 789),
  RULE(AT, STRING, href, 790),
  NBIT_RULE(AT, results, 791, 8),
  SE_RULE(ServiceSupplier, 792, 185),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(type, 793, 189),
  SE_RULE(algorithm, 794, 191),
  SE_RULE(dateTime, 795, 246),
  RULE(AT, STRING, href, 796),
  RULE(AT, BOOLEAN, subscribable, 797),
  SE_RULE(mRID, 798, 235),
  SE_RULE(description, 799, 272),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 800),
  RULE(AT, STRING, href, 801),
  NBIT_RULE(AT, results, 802, 8),
  RULE(AT, BOOLEAN, subscribable, 803),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 804),
  RULE(AT, BOOLEAN, subscribable, 805),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 806),
  SE_RULE(mRID, 807, 235),
  SE_RULE(description, 808, 272),
  SE_RULE(Condition, 809, 35),
  SE_RULE(limit, 810, 811),
  RULE(AT, UNSIGNED_INTEGER, all, 812),
  RULE(AT, STRING, href, 813),
  NBIT_RULE(AT, results, 814, 8),
  SE_RULE(Subscription, 815, 197),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 816),
  RULE(AT, STRING, href, 817),
  SE_RULE(interval, 818, 61),
  RULE(AT, UNSIGNED_INTEGER, all, 819),
  RULE(AT, STRING, href, 820),
  NBIT_RULE(AT, results, 821, 8),
  SE_RULE(SupplyInterruptionOverride, 822, 200),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 823),
  RULE(AT, STRING, href, 824),
  SE_RULE(mRID, 825, 235),
  SE_RULE(description, 826, 272),
  SE_RULE(locale, 827, 106),
  RULE(AT, UNSIGNED_INTEGER, all, 828),
  RULE(AT, STRING, href, 829),
  SE_RULE(mRID, 830, 235),
  SE_RULE(description, 831, 272),
  SE_RULE(RateComponentListLink, 832, 158),
  SE_RULE(ReadingLink, 833, 160),
  SE_RULE(ReadingSetListLink, 834, 165),
  SE_RULE(ReadingTypeLink, 835, 167),
  RULE(AT, UNSIGNED_INTEGER, all, 836),
  RULE(AT, STRING, href, 837),
  NBIT_RULE(AT, results, 838, 8),
  SE_RULE(TargetReading, 839, 206),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 840),
  SE_RULE(type, 841, 226),
  RULE(AT, STRING, href, 842),
  SE_RULE(mRID, 843, 235),
  SE_RULE(description, 844, 272),
  SE_RULE(rateCode, 845, 783),
  SE_RULE(RateComponentListLink, 846, 158),
  SE_RULE(scheduleBasedPricing, 847, 537),
  RULE(AT, STRING, href, 848),
  RULE(AT, UNSIGNED_INTEGER, all, 849),
  RULE(AT, STRING, href, 850),
  NBIT_RULE(AT, results, 851, 8),
  RULE(AT, BOOLEAN, subscribable, 852),
  SE_RULE(TariffProfile, 853, 210),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 854),
  SE_RULE(multiplier, 855, 131),
  RULE(AT, STRING, href, 856),
  RULE(AT, STRING, replyTo, 857),
  RULE(AT, BINARY, responseRequired, 858),
  RULE(AT, BOOLEAN, signatureRequired, 859),
  SE_RULE(mRID, 860, 235),
  SE_RULE(description, 861, 272),
  SE_RULE(creationTime, 862, 246),
  RULE(AT, UNSIGNED_INTEGER, all, 863),
  RULE(AT, STRING, href, 864),
  NBIT_RULE(AT, results, 865, 8),
  RULE(AT, BOOLEAN, subscribable, 866),
  SE_RULE(TextMessage, 867, 215),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 868),
  RULE(AT, STRING, href, 869),
  SE_RULE(category, 870, 272),
  SE_RULE(createdDateTime, 871, 246),
  SE_RULE(originatingMRID, 872, 235),
  SE_RULE(status, 873, 193),
  SE_RULE(EndDeviceLink, 874, 83),
  RULE(AT, STRING, href, 875),
  SE_RULE(dstEndTime, 876, 246),
  SE_RULE(dstEndRule, 877, 878),
  RULE(AT, STRING, href, 879),
  RULE(AT, STRING, href, 880),
  RULE(AT, STRING, replyTo, 881),
  RULE(AT, BINARY, responseRequired, 882),
  RULE(AT, BOOLEAN, signatureRequired, 883),
  SE_RULE(mRID, 884, 235),
  SE_RULE(description, 885, 272),
  SE_RULE(creationTime, 886, 246),
  RULE(AT, UNSIGNED_INTEGER, all, 887),
  RULE(AT, STRING, href, 888),
  NBIT_RULE(AT, results, 889, 8),
  RULE(AT, BOOLEAN, subscribable, 890),
  SE_RULE(TimeTariffInterval, 891, 223),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 892),
  SE_RULE(multiplier, 893, 131),
  SE_RULE(unit, 894, 228),
  SE_RULE(value, 895, 896),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 897),
  SE_RULE(mRID, 898, 235),
  SE_RULE(description, 899, 272),
  SE_RULE(roleFlags, 900, 589),
  RULE(AT, STRING, href, 901),
  SE_RULE(mRID, 902, 235),
  SE_RULE(description, 903, 272),
  SE_RULE(roleFlags, 904, 589),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 905),
  RULE(AT, UNSIGNED_INTEGER, all, 906),
  RULE(AT, STRING, href, 907),
  NBIT_RULE(AT, results, 908, 8),
  RULE(AT, BOOLEAN, subscribable, 909),
  SE_RULE(UsagePoint, 910, 229),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, UNSIGNED_INTEGER, all, 911),
  SE_RULE(multiplier, 912, 131),
  SE_RULE(unit, 913, 228),
  SE_RULE(value, 914, 915),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(creditStatus, 916, 45),
  SE_RULE(emergencyCredit, 917, 5),
  SE_RULE(emergencyCreditStatus, 918, 45),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(currentTime, 919, 246),
  RULE(CH, INTEGER, NONE, 244),
  RULE(AT, STRING, href, 920),
  RULE(AT, STRING, href, 921),
  RULE(AT, STRING, href, 922),
  RULE(AT, STRING, href, 923),
  RULE(AT, STRING, href, 924),
  RULE(CH, UNSIGNED_INTEGER, NONE, 244),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 925),
  RULE(AT, STRING, href, 926),
  RULE(AT, STRING, href, 927),
  RULE(AT, STRING, href, 928),
  RULE(AT, STRING, href, 929),
  RULE(AT, STRING, href, 930),
  SE_RULE(kind, 931, 25),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 932),
  SE_RULE(status, 933, 174),
  RULE(AT, STRING, href, 934),
  SE_RULE(rate, 935, 14),
  RULE(AT, STRING, href, 936),
  SE_RULE(chaTms, 937, 938),
  RULE(EE, NONE, NONE, 0xFFFF),
  NBIT_RULE(CH, NONE, 244, 8),
  RULE(AX, NONE, NONE, 0xFFFF),
  SE_RULE(lowerThreshold, 939, 811),
  SE_RULE(PowerConfiguration, 940, 129),
  SE_RULE(TimeConfiguration, 941, 221),
  SE_RULE(userDeviceName, 942, 272),
  RULE(CH, INTEGER, NONE, 244),
  RULE(AX, NONE, NONE, 0xFFFF),
  SE_RULE(costKind, 943, 41),
  SE_RULE(creditType, 944, 47),
  SE_RULE(effectiveTime, 945, 246),
  RULE(AT, STRING, href, 946),
  SE_RULE(startTime, 947, 246),
  SE_RULE(nominalVoltage, 948, 234),
  SE_RULE(interval, 949, 61),
  RULE(AT, STRING, href, 950),
  RULE(AT, STRING, href, 951),
  RULE(AT, STRING, href, 952),
  SE_RULE(stateOfCharge, 953, 127),
  SE_RULE(start, 954, 246),
  RULE(AT, STRING, href, 955),
  SE_RULE(mfHwVer, 956, 272),
  SE_RULE(onCount, 957, 958),
  SE_RULE(opState, 959, 960),
  SE_RULE(opTime, 961, 962),
  SE_RULE(Temperature, 961, 214),
  SE_RULE(TimeLink, 963, 222),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(ServiceSupplierLink, 964, 186),
  SE_RULE(IPInterfaceListLink, 965, 97),
  SE_RULE(LoadShedAvailabilityListLink, 966, 105),
  SE_RULE(RegistrationLink, 967, 172),
  SE_RULE(SubscriptionListLink, 968, 199),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(interval, 969, 61),
  RULE(AT, STRING, href, 970),
  RULE(AT, STRING, href, 971),
  RULE(AT, STRING, href, 972),
  SE_RULE(interval, 973, 61),
  SE_RULE(Size, 974, 975),
  RULE(AT, STRING, href, 976),
  SE_RULE(fileURI, 977, 491),
  RULE(AT, STRING, href, 978),
  SE_RULE(ifIndex, 979, 980),
  RULE(AT, STRING, href, 981),
  RULE(AT, STRING, href, 982),
  SE_RULE(DemandResponseProgramLink, 983, 63),
  SE_RULE(shed, 984, 537),
  RULE(CH, BOOLEAN, NONE, 244),
  RULE(AT, STRING, href, 985),
  SE_RULE(functionSet, 986, 987),
  RULE(AT, STRING, href, 988),
  SE_RULE(TextMessageListLink, 989, 217),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 990),
  RULE(AT, STRING, href, 991),
  SE_RULE(status, 992, 993),
  RULE(AT, STRING, href, 994),
  SE_RULE(Resource, 995, 996),
  SE_RULE(subscriptionURI, 997, 491),
  RULE(AT, STRING, href, 998),
  SE_RULE(value, 999, 1000),
  SE_RULE(currentPowerSource, 1001, 132),
  SE_RULE(ServiceSupplierLink, 1002, 186),
  SE_RULE(ActiveCreditRegisterListLink, 1003, 10),
  SE_RULE(ActiveSupplyInterruptionOverrideListLink, 1004, 16),
  SE_RULE(creditExpiryLevel, 1005, 5),
  SE_RULE(CreditRegisterListLink, 1006, 44),
  RULE(AT, STRING, href, 1007),
  SE_RULE(ServiceSupplierLink, 1008, 186),
  RULE(AT, STRING, href, 1009),
  SE_RULE(DODAGroot, 1010, 537),
  RULE(AT, STRING, href, 1011),
  SE_RULE(SourceRoute, 1012, 1013),
  RULE(CH, BINARY, NONE, 244),
  RULE(AX, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 1014),
  SE_RULE(interval, 1015, 61),
  SE_RULE(TimeTariffIntervalListLink, 1016, 225),
  RULE(EE, NONE, NONE, 0xFFFF),
  RULE(AT, STRING, href, 1017),
  RULE(AT, STRING, href, 1018),
  RULE(AT, STRING, href, 1019),
  RULE(AT, STRING, href, 1020),
  RULE(AT, STRING, href, 1021),
  SE_RULE(ServiceSupplierLink, 1022, 186),
  RULE(AT, STRING, href, 1023),
  SE_RULE(startTime, 1024, 246),
  RULE(CH, STRING, NONE, 244),
  RULE(AX, NONE, NONE, 0xFFFF),
  SE_RULE(value, 1025, 1026),
  SE_RULE(value, 1027, 1028),
  SE_RULE(potentiallySuperseded, 1029, 537),
  SE_RULE(newResourceURI, 1030, 491),
  SE_RULE(pushURI, 1031, 491),
  RULE(AT, STRING, href, 1032),
  RULE(AT, STRING, href, 1033),
  RULE(AT, STRING, href, 1034),
  RULE(AT, STRING, href, 1035),
  SE_RULE(value, 1036, 1037),
  SE_RULE(ServiceCategory, 1038, 181),
  RULE(AT, STRING, href, 1039),
  SE_RULE(subject, 1040, 1041),
  SE_RULE(interval, 1042, 61),
  RULE(AT, STRING, href, 1043),
  SE_RULE(ServiceSupplierLink, 1044, 186),
  SE_RULE(dstOffset, 1045, 1046),
  SE_RULE(dstOffset, 1047, 1046),
  SE_RULE(interval, 1048, 61),
  RULE(AT, STRING, href, 1049),
  SE_RULE(status, 1050, 993),
  SE_RULE(status, 1051, 993),
  RULE(AT, STRING, href, 1052),
  SE_RULE(type, 1053, 1054),
  SE_RULE(upperThreshold, 1055, 811),
  SE_RULE(costLevel, 1056, 1057),
  SE_RULE(token, 1058, 272),
  SE_RULE(powerLimit, 1059, 13),
  SE_RULE(Status, 1060, 192),
  SE_RULE(status, 1061, 1062),
  SE_RULE(statusTime, 1063, 246),
  SE_RULE(mfID, 1064, 1065),
  SE_RULE(Signature, 1066, 190),
  SE_RULE(DutyCycle, 1067, 74),
  SE_RULE(Offset, 1067, 125),
  SE_RULE(overrideDuration, 1068, 1069),
  SE_RULE(Status, 1070, 192),
  SE_RULE(Status, 1071, 192),
  SE_RULE(Type, 1072, 589),
  SE_RULE(status, 1073, 193),
  SE_RULE(ifInDiscards, 1074, 1075),
  SE_RULE(type, 1076, 226),
  SE_RULE(logEventCode, 1077, 1078),
  SE_RULE(creationTime, 1079, 246),
  SE_RULE(estimatedChargeRemaining, 1080, 1081),
  SE_RULE(estimatedTimeRemaining, 1082, 1083),
  SE_RULE(timeOnBattery, 1084, 1085),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(Signature, 1086, 190),
  SE_RULE(creditTypeApplied, 1087, 47),
  SE_RULE(lowCreditWarningLevel, 1088, 5),
  SE_RULE(lowEmergencyCreditWarningLevel, 1089, 5),
  SE_RULE(prepayMode, 1090, 135),
  SE_RULE(Signature, 1091, 190),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(flags, 1092, 1093),
  SE_RULE(Status, 1094, 192),
  SE_RULE(Signature, 1095, 190),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(potentiallySupersededTime, 1096, 246),
  SE_RULE(resource, 1097, 491),
  SE_RULE(unit, 1098, 228),
  SE_RULE(value, 1099, 1100),
  SE_RULE(Status, 1101, 192),
  SE_RULE(Signature, 1102, 190),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(dstStartTime, 1103, 246),
  SE_RULE(dstStartRule, 1104, 878),
  SE_RULE(Status, 1105, 192),
  SE_RULE(CustomerAccountLink, 1106, 50),
  SE_RULE(LoadShedAvailabilityListLink, 1107, 105),
  SE_RULE(MeterReadingListLink, 1108, 117),
  SE_RULE(PrepaymentLink, 1109, 140),
  SE_RULE(ServiceCategory, 1110, 181),
  SE_RULE(numCostLevels, 1111, 1112),
  SE_RULE(type, 1113, 1114),
  SE_RULE(randomizeEnd, 1115, 1046),
  SE_RULE(testResult, 1116, 1117),
  SE_RULE(voltageHigh, 1118, 537),
  SE_RULE(voltageLow, 1119, 537),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(mfInfo, 1120, 272),
  SE_RULE(mfModel, 1121, 272),
  SE_RULE(SetPoint, 1122, 188),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(randomizeEnd, 1123, 1046),
  SE_RULE(ifInErrors, 1124, 1125),
  SE_RULE(value, 1126, 1127),
  SE_RULE(logEventID, 1128, 1129),
  SE_RULE(manufacturerID, 1130, 1131),
  SE_RULE(serviceStatusApplied, 1132, 184),
  SE_RULE(PrepayOperationStatusLink, 1133, 137),
  SE_RULE(groundedFlag, 1134, 537),
  SE_RULE(randomizeEnd, 1135, 1046),
  SE_RULE(reason, 1136, 513),
  SE_RULE(type, 1137, 1138),
  SE_RULE(status, 1139, 1140),
  SE_RULE(deviceCategory, 1141, 76),
  SE_RULE(localTime, 1142, 246),
  SE_RULE(quality, 1143, 1144),
  SE_RULE(tzOffset, 1145, 1046),
  SE_RULE(randomizeEnd, 1146, 1046),
  SE_RULE(randomizeStart, 1147, 1046),
  SE_RULE(mfSerNum, 1148, 272),
  SE_RULE(randomizeStart, 1149, 1046),
  SE_RULE(ifInMulticastPkts, 1150, 1151),
  SE_RULE(logEventPEN, 1152, 1065),
  SE_RULE(profileID, 1153, 1154),
  SE_RULE(MirrorMeterReading, 1130, 118),
  SE_RULE(serialNumber, 1155, 783),
  SE_RULE(SupplyInterruptionOverrideListLink, 1156, 202),
  SE_RULE(MOP, 1157, 1158),
  SE_RULE(randomizeStart, 1159, 1046),
  SE_RULE(messageLength, 1160, 1161),
  SE_RULE(tzOffset, 1162, 1046),
  SE_RULE(randomizeStart, 1163, 1046),
  SE_RULE(gnBlk, 1164, 537),
  SE_RULE(gnCtl, 1165, 537),
  SE_RULE(gnRL, 1166, 537),
  SE_RULE(maxOperatingPower, 1167, 13),
  SE_RULE(primaryPower, 1168, 132),
  SE_RULE(deviceCategory, 1169, 76),
  SE_RULE(ifInOctets, 1170, 1171),
  SE_RULE(ServiceCategory, 1172, 181),
  SE_RULE(PRF, 1173, 1174),
  SE_RULE(originator, 1175, 783),
  SE_RULE(UTCTime, 1176, 246),
  SE_RULE(ConsumptionTariffInterval, 1163, 39),
  SE_RULE(exception, 1177, 537),
  SE_RULE(numPriceLevels, 1178, 1179),
  SE_RULE(targetPowerFactor, 1180, 130),
  SE_RULE(secondaryPower, 1181, 132),
  SE_RULE(drProgramMandatory, 1182, 537),
  SE_RULE(ifInUcastPkts, 1183, 1184),
  SE_RULE(rank, 1185, 1186),
  SE_RULE(priority, 1187, 145),
  SE_RULE(priceLevel, 1188, 1189),
  SE_RULE(varSupportMode, 1190, 537),
  SE_RULE(SupportedLocaleListLink, 1191, 204),
  SE_RULE(swActTime, 1192, 246),
  SE_RULE(DutyCycle, 1193, 74),
  SE_RULE(loadShiftForward, 1194, 537),
  SE_RULE(ifInUnknownProtos, 1195, 1196),
  SE_RULE(RPLInstanceID, 1197, 1198),
  SE_RULE(textMessage, 1199, 1200),
  SE_RULE(swVer, 1201, 272),
  SE_RULE(Offset, 1202, 125),
  SE_RULE(overrideDuration, 1203, 1204),
  SE_RULE(ifMtu, 1205, 1206),
  SE_RULE(RPLSourceRoutesListLink, 1207, 154),
  SE_RULE(versionNumber, 1208, 1209),
  SE_RULE(Offset, 1210, 125),
  SE_RULE(overrideDuration, 1203, 1204),
  SE_RULE(SetPoint, 1211, 188),
  SE_RULE(TargetReduction, 1212, 209),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(ifName, 1213, 1214),
  SE_RULE(ifOperStatus, 1215, 1216),
  SE_RULE(Offset, 1217, 125),
  SE_RULE(overrideDuration, 1203, 1204),
  SE_RULE(SetPoint, 1218, 188),
  SE_RULE(TargetReduction, 1212, 209),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(ifOutBroadcastPkts, 1219, 1220),
  SE_RULE(Offset, 1221, 125),
  SE_RULE(overrideDuration, 1203, 1204),
  SE_RULE(ifOutDiscards, 1222, 1223),
  SE_RULE(ifOutErrors, 1224, 1225),
  SE_RULE(ifOutMulticastPkts, 1226, 1227),
  SE_RULE(ifOutOctets, 1228, 1229),
  SE_RULE(ifOutUcastPkts, 1230, 1231),
  SE_RULE(ifPromiscuousMode, 1232, 537),
  SE_RULE(ifSpeed, 1233, 1234),
  SE_RULE(ifType, 1235, 1236),
  SE_RULE(IPAddr, 1237, 1238),
  SE_RULE(lastResetTime, 1239, 1240),
  SE_RULE(IPAddr, 1241, 1238),
  SE_RULE(lastResetTime, 1242, 1240),
  SE_RULE(lastUpdatedTime, 1243, 1244),
  SE_RULE(RPLInstanceListLink, 1245, 151),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(IPAddr, 1246, 1238),
  SE_RULE(lastResetTime, 1247, 1240),
  SE_RULE(lastUpdatedTime, 1248, 1244),
  SE_RULE(RPLInstanceListLink, 1245, 151),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(IPAddr, 1249, 1238),
  SE_RULE(lastResetTime, 1250, 1240),
  SE_RULE(lastUpdatedTime, 1251, 1244),
  SE_RULE(RPLInstanceListLink, 1245, 151),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(IPAddr, 1252, 1238),
  SE_RULE(lastResetTime, 1253, 1240),
  SE_RULE(lastUpdatedTime, 1254, 1244),
  SE_RULE(RPLInstanceListLink, 1245, 151),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(IPAddr, 1255, 1238),
  SE_RULE(lastResetTime, 1256, 1240),
  SE_RULE(lastUpdatedTime, 1257, 1244),
  SE_RULE(RPLInstanceListLink, 1245, 151),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(lastResetTime, 1258, 1240),
  SE_RULE(lastUpdatedTime, 1259, 1244),
  SE_RULE(RPLInstanceListLink, 1245, 151),
  RULE(EE, NONE, NONE, 0xFFFF),
  SE_RULE(lastUpdatedTime, 1260, 1244),
  SE_RULE(RPLInstanceListLink, 1245, 151),
  RULE(EE, NONE, NONE, 0xFFFF),
};

#define GRAMMAR(eventCount, eventBitCount, eventIndex)          \
  {(eventCount), (eventBitCount), (eventIndex)}

EmberExiGrammar grammars[] = {

  GRAMMAR(1, 0, 0),  // 0
  GRAMMAR(234, 8, 1),  // 1
  GRAMMAR(1, 0, 235),  // 2
  GRAMMAR(2, 1, 236),  // 3
  GRAMMAR(1, 0, 238),  // 4
  GRAMMAR(5, 3, 239),  // 5
  GRAMMAR(1, 0, 244),  // 6
  GRAMMAR(1, 0, 245),  // 7
  GRAMMAR(1, 0, 246),  // 8
  GRAMMAR(1, 0, 247),  // 9
  GRAMMAR(1, 0, 248),  // 10
  GRAMMAR(1, 0, 249),  // 11
  GRAMMAR(1, 0, 250),  // 12
  GRAMMAR(4, 2, 251),  // 13
  GRAMMAR(4, 2, 255),  // 14
  GRAMMAR(1, 0, 259),  // 15
  GRAMMAR(1, 0, 260),  // 16
  GRAMMAR(1, 0, 261),  // 17
  GRAMMAR(1, 0, 262),  // 18
  GRAMMAR(1, 0, 263),  // 19
  GRAMMAR(4, 2, 264),  // 20
  GRAMMAR(5, 3, 268),  // 21
  GRAMMAR(5, 3, 273),  // 22
  GRAMMAR(1, 0, 278),  // 23
  GRAMMAR(7, 3, 279),  // 24
  GRAMMAR(1, 0, 244),  // 25
  GRAMMAR(5, 3, 286),  // 26
  GRAMMAR(1, 0, 291),  // 27
  GRAMMAR(5, 3, 292),  // 28
  GRAMMAR(1, 0, 297),  // 29
  GRAMMAR(5, 3, 298),  // 30
  GRAMMAR(1, 0, 303),  // 31
  GRAMMAR(1, 0, 304),  // 32
  GRAMMAR(1, 0, 305),  // 33
  GRAMMAR(1, 0, 244),  // 34
  GRAMMAR(1, 0, 306),  // 35
  GRAMMAR(4, 2, 307),  // 36
  GRAMMAR(1, 0, 311),  // 37
  GRAMMAR(1, 0, 244),  // 38
  GRAMMAR(4, 2, 312),  // 39
  GRAMMAR(1, 0, 316),  // 40
  GRAMMAR(1, 0, 244),  // 41
  GRAMMAR(4, 2, 317),  // 42
  GRAMMAR(5, 3, 321),  // 43
  GRAMMAR(1, 0, 326),  // 44
  GRAMMAR(1, 0, 244),  // 45
  GRAMMAR(1, 0, 327),  // 46
  GRAMMAR(1, 0, 244),  // 47
  GRAMMAR(1, 0, 328),  // 48
  GRAMMAR(15, 4, 329),  // 49
  GRAMMAR(1, 0, 344),  // 50
  GRAMMAR(3, 2, 345),  // 51
  GRAMMAR(7, 3, 348),  // 52
  GRAMMAR(1, 0, 355),  // 53
  GRAMMAR(1, 0, 356),  // 54
  GRAMMAR(1, 0, 357),  // 55
  GRAMMAR(8, 3, 358),  // 56
  GRAMMAR(1, 0, 366),  // 57
  GRAMMAR(4, 2, 367),  // 58
  GRAMMAR(1, 0, 371),  // 59
  GRAMMAR(1, 0, 244),  // 60
  GRAMMAR(1, 0, 372),  // 61
  GRAMMAR(6, 3, 373),  // 62
  GRAMMAR(1, 0, 379),  // 63
  GRAMMAR(6, 3, 380),  // 64
  GRAMMAR(1, 0, 386),  // 65
  GRAMMAR(24, 5, 387),  // 66
  GRAMMAR(1, 0, 411),  // 67
  GRAMMAR(2, 1, 412),  // 68
  GRAMMAR(1, 0, 414),  // 69
  GRAMMAR(2, 1, 415),  // 70
  GRAMMAR(1, 0, 417),  // 71
  GRAMMAR(7, 3, 418),  // 72
  GRAMMAR(6, 3, 425),  // 73
  GRAMMAR(1, 0, 431),  // 74
  GRAMMAR(9, 4, 432),  // 75
  GRAMMAR(1, 0, 441),  // 76
  GRAMMAR(7, 3, 442),  // 77
  GRAMMAR(6, 3, 449),  // 78
  GRAMMAR(1, 0, 455),  // 79
  GRAMMAR(16, 4, 456),  // 80
  GRAMMAR(6, 3, 472),  // 81
  GRAMMAR(1, 0, 478),  // 82
  GRAMMAR(1, 0, 479),  // 83
  GRAMMAR(6, 3, 480),  // 84
  GRAMMAR(1, 0, 486),  // 85
  GRAMMAR(8, 3, 487),  // 86
  GRAMMAR(1, 0, 495),  // 87
  GRAMMAR(6, 3, 496),  // 88
  GRAMMAR(1, 0, 502),  // 89
  GRAMMAR(1, 0, 503),  // 90
  GRAMMAR(1, 0, 244),  // 91
  GRAMMAR(7, 3, 504),  // 92
  GRAMMAR(5, 3, 511),  // 93
  GRAMMAR(1, 0, 516),  // 94
  GRAMMAR(4, 2, 517),  // 95
  GRAMMAR(5, 3, 521),  // 96
  GRAMMAR(1, 0, 526),  // 97
  GRAMMAR(5, 3, 527),  // 98
  GRAMMAR(1, 0, 244),  // 99
  GRAMMAR(2, 1, 532),  // 100
  GRAMMAR(5, 3, 534),  // 101
  GRAMMAR(2, 1, 539),  // 102
  GRAMMAR(5, 3, 541),  // 103
  GRAMMAR(5, 3, 546),  // 104
  GRAMMAR(1, 0, 551),  // 105
  GRAMMAR(1, 0, 552),  // 106
  GRAMMAR(2, 1, 553),  // 107
  GRAMMAR(6, 3, 555),  // 108
  GRAMMAR(1, 0, 561),  // 109
  GRAMMAR(5, 3, 562),  // 110
  GRAMMAR(5, 3, 567),  // 111
  GRAMMAR(1, 0, 572),  // 112
  GRAMMAR(8, 3, 573),  // 113
  GRAMMAR(5, 3, 581),  // 114
  GRAMMAR(1, 0, 586),  // 115
  GRAMMAR(6, 3, 587),  // 116
  GRAMMAR(1, 0, 593),  // 117
  GRAMMAR(7, 3, 594),  // 118
  GRAMMAR(4, 2, 601),  // 119
  GRAMMAR(5, 3, 605),  // 120
  GRAMMAR(1, 0, 610),  // 121
  GRAMMAR(4, 2, 611),  // 122
  GRAMMAR(5, 3, 615),  // 123
  GRAMMAR(1, 0, 620),  // 124
  GRAMMAR(1, 0, 621),  // 125
  GRAMMAR(1, 0, 244),  // 126
  GRAMMAR(1, 0, 244),  // 127
  GRAMMAR(1, 0, 244),  // 128
  GRAMMAR(4, 2, 622),  // 129
  GRAMMAR(4, 2, 626),  // 130
  GRAMMAR(1, 0, 244),  // 131
  GRAMMAR(1, 0, 244),  // 132
  GRAMMAR(2, 1, 630),  // 133
  GRAMMAR(1, 0, 632),  // 134
  GRAMMAR(1, 0, 244),  // 135
  GRAMMAR(5, 3, 633),  // 136
  GRAMMAR(1, 0, 638),  // 137
  GRAMMAR(6, 3, 639),  // 138
  GRAMMAR(4, 2, 645),  // 139
  GRAMMAR(1, 0, 649),  // 140
  GRAMMAR(5, 3, 650),  // 141
  GRAMMAR(1, 0, 655),  // 142
  GRAMMAR(6, 3, 656),  // 143
  GRAMMAR(1, 0, 244),  // 144
  GRAMMAR(1, 0, 244),  // 145
  GRAMMAR(7, 3, 662),  // 146
  GRAMMAR(5, 3, 669),  // 147
  GRAMMAR(1, 0, 674),  // 148
  GRAMMAR(2, 1, 675),  // 149
  GRAMMAR(5, 3, 677),  // 150
  GRAMMAR(1, 0, 682),  // 151
  GRAMMAR(2, 1, 683),  // 152
  GRAMMAR(5, 3, 685),  // 153
  GRAMMAR(1, 0, 690),  // 154
  GRAMMAR(8, 3, 691),  // 155
  GRAMMAR(8, 3, 699),  // 156
  GRAMMAR(5, 3, 707),  // 157
  GRAMMAR(1, 0, 712),  // 158
  GRAMMAR(7, 3, 713),  // 159
  GRAMMAR(1, 0, 720),  // 160
  GRAMMAR(5, 3, 721),  // 161
  GRAMMAR(1, 0, 726),  // 162
  GRAMMAR(5, 3, 727),  // 163
  GRAMMAR(6, 3, 732),  // 164
  GRAMMAR(1, 0, 738),  // 165
  GRAMMAR(17, 5, 739),  // 166
  GRAMMAR(1, 0, 756),  // 167
  GRAMMAR(5, 3, 757),  // 168
  GRAMMAR(1, 0, 762),  // 169
  GRAMMAR(4, 2, 763),  // 170
  GRAMMAR(4, 2, 767),  // 171
  GRAMMAR(1, 0, 771),  // 172
  GRAMMAR(1, 0, 772),  // 173
  GRAMMAR(1, 0, 244),  // 174
  GRAMMAR(3, 2, 773),  // 175
  GRAMMAR(8, 3, 776),  // 176
  GRAMMAR(6, 3, 784),  // 177
  GRAMMAR(7, 3, 790),  // 178
  GRAMMAR(5, 3, 797),  // 179
  GRAMMAR(1, 0, 802),  // 180
  GRAMMAR(1, 0, 803),  // 181
  GRAMMAR(1, 0, 804),  // 182
  GRAMMAR(1, 0, 244),  // 183
  GRAMMAR(1, 0, 244),  // 184
  GRAMMAR(8, 3, 805),  // 185
  GRAMMAR(1, 0, 813),  // 186
  GRAMMAR(5, 3, 814),  // 187
  GRAMMAR(1, 0, 819),  // 188
  GRAMMAR(1, 0, 244),  // 189
  GRAMMAR(1, 0, 820),  // 190
  GRAMMAR(1, 0, 244),  // 191
  GRAMMAR(1, 0, 821),  // 192
  GRAMMAR(1, 0, 244),  // 193
  GRAMMAR(5, 3, 822),  // 194
  GRAMMAR(6, 3, 827),  // 195
  GRAMMAR(4, 2, 833),  // 196
  GRAMMAR(5, 3, 837),  // 197
  GRAMMAR(5, 3, 842),  // 198
  GRAMMAR(1, 0, 847),  // 199
  GRAMMAR(2, 1, 848),  // 200
  GRAMMAR(5, 3, 850),  // 201
  GRAMMAR(1, 0, 855),  // 202
  GRAMMAR(4, 2, 856),  // 203
  GRAMMAR(1, 0, 860),  // 204
  GRAMMAR(1, 0, 244),  // 205
  GRAMMAR(7, 3, 861),  // 206
  GRAMMAR(5, 3, 868),  // 207
  GRAMMAR(1, 0, 873),  // 208
  GRAMMAR(1, 0, 874),  // 209
  GRAMMAR(6, 3, 875),  // 210
  GRAMMAR(1, 0, 881),  // 211
  GRAMMAR(6, 3, 882),  // 212
  GRAMMAR(1, 0, 888),  // 213
  GRAMMAR(1, 0, 889),  // 214
  GRAMMAR(7, 3, 890),  // 215
  GRAMMAR(6, 3, 897),  // 216
  GRAMMAR(1, 0, 903),  // 217
  GRAMMAR(6, 3, 904),  // 218
  GRAMMAR(2, 1, 910),  // 219
  GRAMMAR(1, 0, 244),  // 220
  GRAMMAR(1, 0, 912),  // 221
  GRAMMAR(1, 0, 913),  // 222
  GRAMMAR(7, 3, 914),  // 223
  GRAMMAR(6, 3, 921),  // 224
  GRAMMAR(1, 0, 927),  // 225
  GRAMMAR(1, 0, 244),  // 226
  GRAMMAR(4, 2, 928),  // 227
  GRAMMAR(1, 0, 244),  // 228
  GRAMMAR(4, 2, 932),  // 229
  GRAMMAR(5, 3, 936),  // 230
  GRAMMAR(1, 0, 941),  // 231
  GRAMMAR(6, 3, 942),  // 232
  GRAMMAR(1, 0, 948),  // 233
  GRAMMAR(4, 2, 949),  // 234
  GRAMMAR(1, 0, 441),  // 235
  GRAMMAR(1, 0, 237),  // 236
  GRAMMAR(4, 2, 953),  // 237
  GRAMMAR(1, 0, 956),  // 238
  GRAMMAR(4, 2, 240),  // 239
  GRAMMAR(3, 2, 241),  // 240
  GRAMMAR(2, 1, 242),  // 241
  GRAMMAR(1, 0, 956),  // 242
  GRAMMAR(1, 0, 328),  // 243
  GRAMMAR(1, 0, 956),  // 244
  GRAMMAR(1, 0, 957),  // 245
  GRAMMAR(1, 0, 958),  // 246
  GRAMMAR(1, 0, 959),  // 247
  GRAMMAR(1, 0, 960),  // 248
  GRAMMAR(1, 0, 961),  // 249
  GRAMMAR(1, 0, 962),  // 250
  GRAMMAR(1, 0, 963),  // 251
  GRAMMAR(3, 2, 252),  // 252
  GRAMMAR(2, 1, 253),  // 253
  GRAMMAR(1, 0, 956),  // 254
  GRAMMAR(2, 1, 964),  // 255
  GRAMMAR(3, 2, 256),  // 256
  GRAMMAR(2, 1, 257),  // 257
  GRAMMAR(1, 0, 956),  // 258
  GRAMMAR(2, 1, 964),  // 259
  GRAMMAR(1, 0, 966),  // 260
  GRAMMAR(1, 0, 967),  // 261
  GRAMMAR(1, 0, 968),  // 262
  GRAMMAR(1, 0, 969),  // 263
  GRAMMAR(1, 0, 970),  // 264
  GRAMMAR(3, 2, 265),  // 265
  GRAMMAR(2, 1, 266),  // 266
  GRAMMAR(1, 0, 956),  // 267
  GRAMMAR(2, 1, 964),  // 268
  GRAMMAR(4, 2, 269),  // 269
  GRAMMAR(3, 2, 270),  // 270
  GRAMMAR(2, 1, 271),  // 271
  GRAMMAR(1, 0, 552),  // 272
  GRAMMAR(1, 0, 956),  // 273
  GRAMMAR(4, 2, 274),  // 274
  GRAMMAR(3, 2, 275),  // 275
  GRAMMAR(2, 1, 276),  // 276
  GRAMMAR(2, 1, 276),  // 277
  GRAMMAR(1, 0, 971),  // 278
  GRAMMAR(6, 3, 280),  // 279
  GRAMMAR(5, 3, 281),  // 280
  GRAMMAR(4, 2, 282),  // 281
  GRAMMAR(3, 2, 283),  // 282
  GRAMMAR(2, 1, 284),  // 283
  GRAMMAR(1, 0, 285),  // 284
  GRAMMAR(2, 1, 972),  // 285
  GRAMMAR(4, 2, 287),  // 286
  GRAMMAR(3, 2, 288),  // 287
  GRAMMAR(2, 1, 289),  // 288
  GRAMMAR(2, 1, 289),  // 289
  GRAMMAR(1, 0, 974),  // 290
  GRAMMAR(4, 2, 293),  // 291
  GRAMMAR(3, 2, 294),  // 292
  GRAMMAR(2, 1, 295),  // 293
  GRAMMAR(1, 0, 296),  // 294
  GRAMMAR(1, 0, 975),  // 295
  GRAMMAR(1, 0, 976),  // 296
  GRAMMAR(4, 2, 299),  // 297
  GRAMMAR(3, 2, 300),  // 298
  GRAMMAR(2, 1, 301),  // 299
  GRAMMAR(1, 0, 302),  // 300
  GRAMMAR(1, 0, 977),  // 301
  GRAMMAR(1, 0, 973),  // 302
  GRAMMAR(1, 0, 978),  // 303
  GRAMMAR(2, 1, 979),  // 304
  GRAMMAR(2, 1, 981),  // 305
  GRAMMAR(1, 0, 983),  // 306
  GRAMMAR(2, 1, 981),  // 307
  GRAMMAR(3, 2, 308),  // 308
  GRAMMAR(2, 1, 309),  // 309
  GRAMMAR(1, 0, 310),  // 310
  GRAMMAR(3, 2, 984),  // 311
  GRAMMAR(1, 0, 980),  // 312
  GRAMMAR(4, 2, 312),  // 313
  GRAMMAR(2, 1, 314),  // 314
  GRAMMAR(2, 1, 987),  // 315
  GRAMMAR(1, 0, 315),  // 316
  GRAMMAR(1, 0, 980),  // 317
  GRAMMAR(1, 0, 989),  // 318
  GRAMMAR(2, 1, 964),  // 319
  GRAMMAR(3, 2, 318),  // 320
  GRAMMAR(2, 1, 319),  // 321
  GRAMMAR(1, 0, 320),  // 322
  GRAMMAR(2, 1, 990),  // 323
  GRAMMAR(4, 2, 322),  // 324
  GRAMMAR(3, 2, 323),  // 325
  GRAMMAR(2, 1, 324),  // 326
  GRAMMAR(2, 1, 324),  // 327
  GRAMMAR(1, 0, 992),  // 328
  GRAMMAR(1, 0, 993),  // 329
  GRAMMAR(14, 4, 330),  // 330
  GRAMMAR(13, 4, 331),  // 331
  GRAMMAR(12, 4, 332),  // 332
  GRAMMAR(11, 4, 333),  // 333
  GRAMMAR(10, 4, 334),  // 334
  GRAMMAR(9, 4, 335),  // 335
  GRAMMAR(8, 3, 336),  // 336
  GRAMMAR(7, 3, 337),  // 337
  GRAMMAR(6, 3, 338),  // 338
  GRAMMAR(5, 3, 339),  // 339
  GRAMMAR(4, 2, 340),  // 340
  GRAMMAR(2, 1, 964),  // 341
  GRAMMAR(3, 2, 341),  // 342
  GRAMMAR(2, 1, 342),  // 343
  GRAMMAR(1, 0, 980),  // 344
  GRAMMAR(1, 0, 980),  // 345
  GRAMMAR(2, 1, 346),  // 346
  GRAMMAR(1, 0, 347),  // 347
  GRAMMAR(1, 0, 994),  // 348
  GRAMMAR(6, 3, 349),  // 349
  GRAMMAR(5, 3, 350),  // 350
  GRAMMAR(4, 2, 351),  // 351
  GRAMMAR(3, 2, 352),  // 352
  GRAMMAR(2, 1, 353),  // 353
  GRAMMAR(1, 0, 354),  // 354
  GRAMMAR(1, 0, 995),  // 355
  GRAMMAR(1, 0, 996),  // 356
  GRAMMAR(1, 0, 980),  // 357
  GRAMMAR(1, 0, 997),  // 358
  GRAMMAR(7, 3, 359),  // 359
  GRAMMAR(6, 3, 360),  // 360
  GRAMMAR(5, 3, 361),  // 361
  GRAMMAR(4, 2, 362),  // 362
  GRAMMAR(3, 2, 363),  // 363
  GRAMMAR(2, 1, 364),  // 364
  GRAMMAR(1, 0, 365),  // 365
  GRAMMAR(1, 0, 980),  // 366
  GRAMMAR(1, 0, 998),  // 367
  GRAMMAR(3, 2, 368),  // 368
  GRAMMAR(2, 1, 369),  // 369
  GRAMMAR(1, 0, 370),  // 370
  GRAMMAR(1, 0, 999),  // 371
  GRAMMAR(2, 1, 964),  // 372
  GRAMMAR(1, 0, 980),  // 373
  GRAMMAR(1, 0, 1000),  // 374
  GRAMMAR(2, 1, 964),  // 375
  GRAMMAR(5, 3, 374),  // 376
  GRAMMAR(4, 2, 375),  // 377
  GRAMMAR(3, 2, 376),  // 378
  GRAMMAR(2, 1, 377),  // 379
  GRAMMAR(1, 0, 378),  // 380
  GRAMMAR(1, 0, 980),  // 381
  GRAMMAR(1, 0, 980),  // 382
  GRAMMAR(5, 3, 381),  // 383
  GRAMMAR(4, 2, 382),  // 384
  GRAMMAR(3, 2, 383),  // 385
  GRAMMAR(2, 1, 384),  // 386
  GRAMMAR(2, 1, 384),  // 387
  GRAMMAR(1, 0, 1001),  // 388
  GRAMMAR(23, 5, 388),  // 389
  GRAMMAR(22, 5, 389),  // 390
  GRAMMAR(21, 5, 390),  // 391
  GRAMMAR(20, 5, 391),  // 392
  GRAMMAR(19, 5, 392),  // 393
  GRAMMAR(18, 5, 393),  // 394
  GRAMMAR(17, 5, 394),  // 395
  GRAMMAR(16, 4, 395),  // 396
  GRAMMAR(15, 4, 396),  // 397
  GRAMMAR(14, 4, 397),  // 398
  GRAMMAR(13, 4, 398),  // 399
  GRAMMAR(12, 4, 399),  // 400
  GRAMMAR(11, 4, 400),  // 401
  GRAMMAR(10, 4, 401),  // 402
  GRAMMAR(9, 4, 402),  // 403
  GRAMMAR(8, 3, 403),  // 404
  GRAMMAR(7, 3, 404),  // 405
  GRAMMAR(6, 3, 405),  // 406
  GRAMMAR(5, 3, 406),  // 407
  GRAMMAR(4, 2, 407),  // 408
  GRAMMAR(3, 2, 408),  // 409
  GRAMMAR(2, 1, 409),  // 410
  GRAMMAR(1, 0, 980),  // 411
  GRAMMAR(1, 0, 980),  // 412
  GRAMMAR(1, 0, 413),  // 413
  GRAMMAR(1, 0, 1002),  // 414
  GRAMMAR(1, 0, 980),  // 415
  GRAMMAR(1, 0, 416),  // 416
  GRAMMAR(6, 3, 1003),  // 417
  GRAMMAR(1, 0, 1008),  // 418
  GRAMMAR(5, 3, 419),  // 419
  GRAMMAR(4, 2, 420),  // 420
  GRAMMAR(3, 2, 421),  // 421
  GRAMMAR(2, 1, 422),  // 422
  GRAMMAR(1, 0, 1008),  // 423
  GRAMMAR(5, 3, 426),  // 424
  GRAMMAR(4, 2, 427),  // 425
  GRAMMAR(3, 2, 428),  // 426
  GRAMMAR(2, 1, 429),  // 427
  GRAMMAR(1, 0, 430),  // 428
  GRAMMAR(1, 0, 1009),  // 429
  GRAMMAR(1, 0, 1008),  // 430
  GRAMMAR(2, 1, 981),  // 431
  GRAMMAR(8, 3, 433),  // 432
  GRAMMAR(7, 3, 434),  // 433
  GRAMMAR(6, 3, 435),  // 434
  GRAMMAR(5, 3, 436),  // 435
  GRAMMAR(4, 2, 437),  // 436
  GRAMMAR(3, 2, 438),  // 437
  GRAMMAR(2, 1, 439),  // 438
  GRAMMAR(1, 0, 440),  // 439
  GRAMMAR(5, 3, 1010),  // 440
  GRAMMAR(1, 0, 441),  // 441
  GRAMMAR(6, 3, 443),  // 442
  GRAMMAR(5, 3, 444),  // 443
  GRAMMAR(4, 2, 445),  // 444
  GRAMMAR(3, 2, 446),  // 445
  GRAMMAR(2, 1, 447),  // 446
  GRAMMAR(1, 0, 448),  // 447
  GRAMMAR(1, 0, 1015),  // 448
  GRAMMAR(5, 3, 450),  // 449
  GRAMMAR(4, 2, 451),  // 450
  GRAMMAR(3, 2, 452),  // 451
  GRAMMAR(2, 1, 453),  // 452
  GRAMMAR(2, 1, 453),  // 453
  GRAMMAR(1, 0, 1016),  // 454
  GRAMMAR(14, 4, 457),  // 455
  GRAMMAR(13, 4, 458),  // 456
  GRAMMAR(12, 4, 459),  // 457
  GRAMMAR(11, 4, 460),  // 458
  GRAMMAR(10, 4, 461),  // 459
  GRAMMAR(9, 4, 462),  // 460
  GRAMMAR(8, 3, 463),  // 461
  GRAMMAR(7, 3, 464),  // 462
  GRAMMAR(6, 3, 465),  // 463
  GRAMMAR(5, 3, 466),  // 464
  GRAMMAR(4, 2, 467),  // 465
  GRAMMAR(3, 2, 468),  // 466
  GRAMMAR(2, 1, 469),  // 467
  GRAMMAR(1, 0, 1014),  // 468
  GRAMMAR(5, 3, 473),  // 469
  GRAMMAR(4, 2, 474),  // 470
  GRAMMAR(3, 2, 475),  // 471
  GRAMMAR(2, 1, 476),  // 472
  GRAMMAR(2, 1, 476),  // 473
  GRAMMAR(16, 4, 456),  // 474
  GRAMMAR(1, 0, 1017),  // 475
  GRAMMAR(1, 0, 1014),  // 476
  GRAMMAR(5, 3, 481),  // 477
  GRAMMAR(4, 2, 482),  // 478
  GRAMMAR(3, 2, 483),  // 479
  GRAMMAR(2, 1, 484),  // 480
  GRAMMAR(2, 1, 484),  // 481
  GRAMMAR(1, 0, 1018),  // 482
  GRAMMAR(6, 3, 488),  // 483
  GRAMMAR(5, 3, 489),  // 484
  GRAMMAR(4, 2, 490),  // 485
  GRAMMAR(3, 2, 491),  // 486
  GRAMMAR(2, 1, 492),  // 487
  GRAMMAR(1, 0, 493),  // 488
  GRAMMAR(1, 0, 1019),  // 489
  GRAMMAR(1, 0, 1020),  // 490
  GRAMMAR(1, 0, 552),  // 491
  GRAMMAR(5, 3, 497),  // 492
  GRAMMAR(4, 2, 498),  // 493
  GRAMMAR(3, 2, 499),  // 494
  GRAMMAR(2, 1, 500),  // 495
  GRAMMAR(2, 1, 500),  // 496
  GRAMMAR(1, 0, 1021),  // 497
  GRAMMAR(1, 0, 1022),  // 498
  GRAMMAR(6, 3, 505),  // 499
  GRAMMAR(5, 3, 506),  // 500
  GRAMMAR(4, 2, 507),  // 501
  GRAMMAR(3, 2, 508),  // 502
  GRAMMAR(2, 1, 509),  // 503
  GRAMMAR(1, 0, 510),  // 504
  GRAMMAR(1, 0, 1014),  // 505
  GRAMMAR(4, 2, 512),  // 506
  GRAMMAR(3, 2, 513),  // 507
  GRAMMAR(2, 1, 514),  // 508
  GRAMMAR(2, 1, 514),  // 509
  GRAMMAR(1, 0, 1023),  // 510
  GRAMMAR(3, 2, 518),  // 511
  GRAMMAR(2, 1, 519),  // 512
  GRAMMAR(1, 0, 552),  // 513
  GRAMMAR(1, 0, 520),  // 514
  GRAMMAR(2, 1, 964),  // 515
  GRAMMAR(1, 0, 1024),  // 516
  GRAMMAR(2, 1, 964),  // 517
  GRAMMAR(4, 2, 522),  // 518
  GRAMMAR(3, 2, 523),  // 519
  GRAMMAR(2, 1, 524),  // 520
  GRAMMAR(1, 0, 1014),  // 521
  GRAMMAR(1, 0, 1025),  // 522
  GRAMMAR(3, 2, 528),  // 523
  GRAMMAR(2, 1, 529),  // 524
  GRAMMAR(1, 0, 1014),  // 525
  GRAMMAR(1, 0, 1014),  // 526
  GRAMMAR(3, 2, 535),  // 527
  GRAMMAR(2, 1, 536),  // 528
  GRAMMAR(1, 0, 1014),  // 529
  GRAMMAR(1, 0, 1026),  // 530
  GRAMMAR(4, 2, 542),  // 531
  GRAMMAR(3, 2, 543),  // 532
  GRAMMAR(2, 1, 544),  // 533
  GRAMMAR(1, 0, 545),  // 534
  GRAMMAR(2, 1, 964),  // 535
  GRAMMAR(2, 1, 1027),  // 536
  GRAMMAR(1, 0, 1029),  // 537
  GRAMMAR(4, 2, 547),  // 538
  GRAMMAR(3, 2, 548),  // 539
  GRAMMAR(2, 1, 549),  // 540
  GRAMMAR(2, 1, 549),  // 541
  GRAMMAR(1, 0, 1030),  // 542
  GRAMMAR(1, 0, 554),  // 543
  GRAMMAR(1, 0, 1031),  // 544
  GRAMMAR(5, 3, 556),  // 545
  GRAMMAR(4, 2, 557),  // 546
  GRAMMAR(3, 2, 558),  // 547
  GRAMMAR(2, 1, 559),  // 548
  GRAMMAR(2, 1, 559),  // 549
  GRAMMAR(1, 0, 1032),  // 550
  GRAMMAR(4, 2, 563),  // 551
  GRAMMAR(3, 2, 564),  // 552
  GRAMMAR(2, 1, 565),  // 553
  GRAMMAR(1, 0, 566),  // 554
  GRAMMAR(2, 1, 1033),  // 555
  GRAMMAR(4, 2, 568),  // 556
  GRAMMAR(3, 2, 569),  // 557
  GRAMMAR(2, 1, 570),  // 558
  GRAMMAR(2, 1, 570),  // 559
  GRAMMAR(1, 0, 1035),  // 560
  GRAMMAR(6, 3, 574),  // 561
  GRAMMAR(5, 3, 575),  // 562
  GRAMMAR(4, 2, 576),  // 563
  GRAMMAR(3, 2, 577),  // 564
  GRAMMAR(2, 1, 578),  // 565
  GRAMMAR(1, 0, 579),  // 566
  GRAMMAR(1, 0, 1034),  // 567
  GRAMMAR(3, 2, 582),  // 568
  GRAMMAR(2, 1, 583),  // 569
  GRAMMAR(1, 0, 1034),  // 570
  GRAMMAR(1, 0, 1034),  // 571
  GRAMMAR(5, 3, 588),  // 572
  GRAMMAR(4, 2, 589),  // 573
  GRAMMAR(3, 2, 590),  // 574
  GRAMMAR(2, 1, 591),  // 575
  GRAMMAR(2, 1, 591),  // 576
  GRAMMAR(8, 3, 573),  // 577
  GRAMMAR(1, 0, 1036),  // 578
  GRAMMAR(6, 3, 595),  // 579
  GRAMMAR(5, 3, 596),  // 580
  GRAMMAR(4, 2, 597),  // 581
  GRAMMAR(3, 2, 598),  // 582
  GRAMMAR(2, 1, 599),  // 583
  GRAMMAR(1, 0, 1034),  // 584
  GRAMMAR(3, 2, 602),  // 585
  GRAMMAR(2, 1, 603),  // 586
  GRAMMAR(1, 0, 604),  // 587
  GRAMMAR(1, 0, 1037),  // 588
  GRAMMAR(1, 0, 441),  // 589
  GRAMMAR(4, 2, 606),  // 590
  GRAMMAR(3, 2, 607),  // 591
  GRAMMAR(2, 1, 608),  // 592
  GRAMMAR(2, 1, 608),  // 593
  GRAMMAR(1, 0, 1038),  // 594
  GRAMMAR(3, 2, 612),  // 595
  GRAMMAR(2, 1, 613),  // 596
  GRAMMAR(1, 0, 614),  // 597
  GRAMMAR(2, 1, 1039),  // 598
  GRAMMAR(4, 2, 616),  // 599
  GRAMMAR(3, 2, 617),  // 600
  GRAMMAR(2, 1, 618),  // 601
  GRAMMAR(2, 1, 618),  // 602
  GRAMMAR(1, 0, 1041),  // 603
  GRAMMAR(1, 0, 1042),  // 604
  GRAMMAR(3, 2, 623),  // 605
  GRAMMAR(2, 1, 624),  // 606
  GRAMMAR(1, 0, 1034),  // 607
  GRAMMAR(2, 1, 981),  // 608
  GRAMMAR(3, 2, 627),  // 609
  GRAMMAR(2, 1, 628),  // 610
  GRAMMAR(1, 0, 1034),  // 611
  GRAMMAR(2, 1, 964),  // 612
  GRAMMAR(1, 0, 631),  // 613
  GRAMMAR(1, 0, 1043),  // 614
  GRAMMAR(2, 1, 981),  // 615
  GRAMMAR(1, 0, 1034),  // 616
  GRAMMAR(4, 2, 634),  // 617
  GRAMMAR(3, 2, 635),  // 618
  GRAMMAR(2, 1, 636),  // 619
  GRAMMAR(1, 0, 637),  // 620
  GRAMMAR(1, 0, 1034),  // 621
  GRAMMAR(1, 0, 1034),  // 622
  GRAMMAR(5, 3, 640),  // 623
  GRAMMAR(4, 2, 641),  // 624
  GRAMMAR(3, 2, 642),  // 625
  GRAMMAR(2, 1, 643),  // 626
  GRAMMAR(1, 0, 644),  // 627
  GRAMMAR(1, 0, 1044),  // 628
  GRAMMAR(3, 2, 646),  // 629
  GRAMMAR(2, 1, 647),  // 630
  GRAMMAR(1, 0, 648),  // 631
  GRAMMAR(4, 2, 1045),  // 632
  GRAMMAR(1, 0, 1034),  // 633
  GRAMMAR(4, 2, 651),  // 634
  GRAMMAR(3, 2, 652),  // 635
  GRAMMAR(2, 1, 653),  // 636
  GRAMMAR(2, 1, 653),  // 637
  GRAMMAR(1, 0, 1049),  // 638
  GRAMMAR(5, 3, 657),  // 639
  GRAMMAR(4, 2, 658),  // 640
  GRAMMAR(3, 2, 659),  // 641
  GRAMMAR(2, 1, 660),  // 642
  GRAMMAR(1, 0, 661),  // 643
  GRAMMAR(1, 0, 1050),  // 644
  GRAMMAR(6, 3, 663),  // 645
  GRAMMAR(5, 3, 664),  // 646
  GRAMMAR(4, 2, 665),  // 647
  GRAMMAR(3, 2, 666),  // 648
  GRAMMAR(2, 1, 667),  // 649
  GRAMMAR(1, 0, 668),  // 650
  GRAMMAR(1, 0, 1034),  // 651
  GRAMMAR(4, 2, 670),  // 652
  GRAMMAR(3, 2, 671),  // 653
  GRAMMAR(2, 1, 672),  // 654
  GRAMMAR(2, 1, 672),  // 655
  GRAMMAR(1, 0, 1051),  // 656
  GRAMMAR(1, 0, 676),  // 657
  GRAMMAR(1, 0, 1052),  // 658
  GRAMMAR(2, 1, 981),  // 659
  GRAMMAR(4, 2, 678),  // 660
  GRAMMAR(3, 2, 679),  // 661
  GRAMMAR(2, 1, 680),  // 662
  GRAMMAR(1, 0, 1034),  // 663
  GRAMMAR(1, 0, 1053),  // 664
  GRAMMAR(1, 0, 684),  // 665
  GRAMMAR(1, 0, 1054),  // 666
  GRAMMAR(2, 1, 1055),  // 667
  GRAMMAR(4, 2, 686),  // 668
  GRAMMAR(3, 2, 687),  // 669
  GRAMMAR(2, 1, 688),  // 670
  GRAMMAR(1, 0, 1034),  // 671
  GRAMMAR(1, 0, 1057),  // 672
  GRAMMAR(6, 3, 692),  // 673
  GRAMMAR(5, 3, 693),  // 674
  GRAMMAR(4, 2, 694),  // 675
  GRAMMAR(3, 2, 695),  // 676
  GRAMMAR(2, 1, 696),  // 677
  GRAMMAR(1, 0, 697),  // 678
  GRAMMAR(1, 0, 1058),  // 679
  GRAMMAR(7, 3, 700),  // 680
  GRAMMAR(6, 3, 701),  // 681
  GRAMMAR(5, 3, 702),  // 682
  GRAMMAR(4, 2, 703),  // 683
  GRAMMAR(3, 2, 704),  // 684
  GRAMMAR(2, 1, 705),  // 685
  GRAMMAR(1, 0, 706),  // 686
  GRAMMAR(2, 1, 1059),  // 687
  GRAMMAR(4, 2, 708),  // 688
  GRAMMAR(3, 2, 709),  // 689
  GRAMMAR(2, 1, 710),  // 690
  GRAMMAR(2, 1, 710),  // 691
  GRAMMAR(1, 0, 1061),  // 692
  GRAMMAR(6, 3, 714),  // 693
  GRAMMAR(5, 3, 715),  // 694
  GRAMMAR(4, 2, 716),  // 695
  GRAMMAR(3, 2, 717),  // 696
  GRAMMAR(2, 1, 718),  // 697
  GRAMMAR(1, 0, 719),  // 698
  GRAMMAR(1, 0, 1060),  // 699
  GRAMMAR(1, 0, 987),  // 700
  GRAMMAR(1, 0, 1060),  // 701
  GRAMMAR(4, 2, 722),  // 702
  GRAMMAR(3, 2, 723),  // 703
  GRAMMAR(2, 1, 724),  // 704
  GRAMMAR(2, 1, 724),  // 705
  GRAMMAR(1, 0, 1062),  // 706
  GRAMMAR(4, 2, 728),  // 707
  GRAMMAR(3, 2, 729),  // 708
  GRAMMAR(2, 1, 730),  // 709
  GRAMMAR(1, 0, 731),  // 710
  GRAMMAR(1, 0, 1060),  // 711
  GRAMMAR(5, 3, 733),  // 712
  GRAMMAR(4, 2, 734),  // 713
  GRAMMAR(3, 2, 735),  // 714
  GRAMMAR(2, 1, 736),  // 715
  GRAMMAR(2, 1, 736),  // 716
  GRAMMAR(1, 0, 1063),  // 717
  GRAMMAR(16, 4, 740),  // 718
  GRAMMAR(15, 4, 741),  // 719
  GRAMMAR(14, 4, 742),  // 720
  GRAMMAR(13, 4, 743),  // 721
  GRAMMAR(12, 4, 744),  // 722
  GRAMMAR(11, 4, 745),  // 723
  GRAMMAR(10, 4, 746),  // 724
  GRAMMAR(9, 4, 747),  // 725
  GRAMMAR(8, 3, 748),  // 726
  GRAMMAR(2, 1, 964),  // 727
  GRAMMAR(7, 3, 749),  // 728
  GRAMMAR(6, 3, 750),  // 729
  GRAMMAR(2, 1, 981),  // 730
  GRAMMAR(5, 3, 751),  // 731
  GRAMMAR(2, 1, 981),  // 732
  GRAMMAR(4, 2, 752),  // 733
  GRAMMAR(3, 2, 753),  // 734
  GRAMMAR(2, 1, 754),  // 735
  GRAMMAR(1, 0, 1060),  // 736
  GRAMMAR(1, 0, 1060),  // 737
  GRAMMAR(4, 2, 758),  // 738
  GRAMMAR(3, 2, 759),  // 739
  GRAMMAR(2, 1, 760),  // 740
  GRAMMAR(2, 1, 760),  // 741
  GRAMMAR(1, 0, 1064),  // 742
  GRAMMAR(3, 2, 764),  // 743
  GRAMMAR(2, 1, 765),  // 744
  GRAMMAR(1, 0, 1060),  // 745
  GRAMMAR(3, 2, 768),  // 746
  GRAMMAR(2, 1, 769),  // 747
  GRAMMAR(1, 0, 770),  // 748
  GRAMMAR(1, 0, 1060),  // 749
  GRAMMAR(2, 1, 964),  // 750
  GRAMMAR(1, 0, 1060),  // 751
  GRAMMAR(1, 0, 1065),  // 752
  GRAMMAR(1, 0, 1060),  // 753
  GRAMMAR(6, 3, 777),  // 754
  GRAMMAR(5, 3, 778),  // 755
  GRAMMAR(4, 2, 779),  // 756
  GRAMMAR(3, 2, 780),  // 757
  GRAMMAR(2, 1, 781),  // 758
  GRAMMAR(1, 0, 1060),  // 759
  GRAMMAR(4, 2, 785),  // 760
  GRAMMAR(3, 2, 786),  // 761
  GRAMMAR(2, 1, 787),  // 762
  GRAMMAR(1, 0, 1060),  // 763
  GRAMMAR(5, 3, 791),  // 764
  GRAMMAR(4, 2, 792),  // 765
  GRAMMAR(3, 2, 793),  // 766
  GRAMMAR(2, 1, 794),  // 767
  GRAMMAR(1, 0, 795),  // 768
  GRAMMAR(1, 0, 1066),  // 769
  GRAMMAR(4, 2, 798),  // 770
  GRAMMAR(3, 2, 799),  // 771
  GRAMMAR(2, 1, 800),  // 772
  GRAMMAR(2, 1, 800),  // 773
  GRAMMAR(7, 3, 790),  // 774
  GRAMMAR(1, 0, 1067),  // 775
  GRAMMAR(1, 0, 1060),  // 776
  GRAMMAR(1, 0, 1068),  // 777
  GRAMMAR(7, 3, 806),  // 778
  GRAMMAR(6, 3, 807),  // 779
  GRAMMAR(5, 3, 808),  // 780
  GRAMMAR(4, 2, 809),  // 781
  GRAMMAR(3, 2, 810),  // 782
  GRAMMAR(1, 0, 552),  // 783
  GRAMMAR(2, 1, 811),  // 784
  GRAMMAR(2, 1, 964),  // 785
  GRAMMAR(1, 0, 1060),  // 786
  GRAMMAR(2, 1, 1069),  // 787
  GRAMMAR(1, 0, 1060),  // 788
  GRAMMAR(4, 2, 815),  // 789
  GRAMMAR(3, 2, 816),  // 790
  GRAMMAR(2, 1, 817),  // 791
  GRAMMAR(2, 1, 817),  // 792
  GRAMMAR(1, 0, 1071),  // 793
  GRAMMAR(1, 0, 1072),  // 794
  GRAMMAR(1, 0, 1073),  // 795
  GRAMMAR(4, 2, 823),  // 796
  GRAMMAR(3, 2, 824),  // 797
  GRAMMAR(2, 1, 825),  // 798
  GRAMMAR(1, 0, 1060),  // 799
  GRAMMAR(4, 2, 828),  // 800
  GRAMMAR(3, 2, 829),  // 801
  GRAMMAR(2, 1, 830),  // 802
  GRAMMAR(1, 0, 1060),  // 803
  GRAMMAR(2, 1, 834),  // 804
  GRAMMAR(1, 0, 1060),  // 805
  GRAMMAR(4, 2, 838),  // 806
  GRAMMAR(3, 2, 839),  // 807
  GRAMMAR(2, 1, 840),  // 808
  GRAMMAR(1, 0, 841),  // 809
  GRAMMAR(2, 1, 1074),  // 810
  GRAMMAR(1, 0, 987),  // 811
  GRAMMAR(4, 2, 843),  // 812
  GRAMMAR(3, 2, 844),  // 813
  GRAMMAR(2, 1, 845),  // 814
  GRAMMAR(2, 1, 845),  // 815
  GRAMMAR(1, 0, 1076),  // 816
  GRAMMAR(1, 0, 849),  // 817
  GRAMMAR(1, 0, 1060),  // 818
  GRAMMAR(4, 2, 851),  // 819
  GRAMMAR(3, 2, 852),  // 820
  GRAMMAR(2, 1, 853),  // 821
  GRAMMAR(2, 1, 853),  // 822
  GRAMMAR(1, 0, 1077),  // 823
  GRAMMAR(3, 2, 857),  // 824
  GRAMMAR(2, 1, 858),  // 825
  GRAMMAR(1, 0, 859),  // 826
  GRAMMAR(1, 0, 1060),  // 827
  GRAMMAR(1, 0, 1078),  // 828
  GRAMMAR(6, 3, 862),  // 829
  GRAMMAR(5, 3, 863),  // 830
  GRAMMAR(4, 2, 864),  // 831
  GRAMMAR(3, 2, 865),  // 832
  GRAMMAR(2, 1, 866),  // 833
  GRAMMAR(1, 0, 867),  // 834
  GRAMMAR(1, 0, 1060),  // 835
  GRAMMAR(4, 2, 869),  // 836
  GRAMMAR(3, 2, 870),  // 837
  GRAMMAR(2, 1, 871),  // 838
  GRAMMAR(2, 1, 871),  // 839
  GRAMMAR(1, 0, 1079),  // 840
  GRAMMAR(1, 0, 1080),  // 841
  GRAMMAR(5, 3, 876),  // 842
  GRAMMAR(4, 2, 877),  // 843
  GRAMMAR(3, 2, 878),  // 844
  GRAMMAR(2, 1, 879),  // 845
  GRAMMAR(1, 0, 880),  // 846
  GRAMMAR(1, 0, 1081),  // 847
  GRAMMAR(1, 0, 1060),  // 848
  GRAMMAR(5, 3, 883),  // 849
  GRAMMAR(4, 2, 884),  // 850
  GRAMMAR(3, 2, 885),  // 851
  GRAMMAR(2, 1, 886),  // 852
  GRAMMAR(2, 1, 886),  // 853
  GRAMMAR(1, 0, 1082),  // 854
  GRAMMAR(1, 0, 1083),  // 855
  GRAMMAR(6, 3, 891),  // 856
  GRAMMAR(5, 3, 892),  // 857
  GRAMMAR(4, 2, 893),  // 858
  GRAMMAR(3, 2, 894),  // 859
  GRAMMAR(2, 1, 895),  // 860
  GRAMMAR(1, 0, 896),  // 861
  GRAMMAR(1, 0, 1084),  // 862
  GRAMMAR(5, 3, 898),  // 863
  GRAMMAR(4, 2, 899),  // 864
  GRAMMAR(3, 2, 900),  // 865
  GRAMMAR(2, 1, 901),  // 866
  GRAMMAR(2, 1, 901),  // 867
  GRAMMAR(1, 0, 1085),  // 868
  GRAMMAR(5, 3, 905),  // 869
  GRAMMAR(4, 2, 906),  // 870
  GRAMMAR(3, 2, 907),  // 871
  GRAMMAR(2, 1, 908),  // 872
  GRAMMAR(1, 0, 909),  // 873
  GRAMMAR(1, 0, 1086),  // 874
  GRAMMAR(1, 0, 911),  // 875
  GRAMMAR(1, 0, 1087),  // 876
  GRAMMAR(1, 0, 1088),  // 877
  GRAMMAR(1, 0, 1055),  // 878
  GRAMMAR(1, 0, 1060),  // 879
  GRAMMAR(6, 3, 915),  // 880
  GRAMMAR(5, 3, 916),  // 881
  GRAMMAR(4, 2, 917),  // 882
  GRAMMAR(3, 2, 918),  // 883
  GRAMMAR(2, 1, 919),  // 884
  GRAMMAR(1, 0, 920),  // 885
  GRAMMAR(1, 0, 1089),  // 886
  GRAMMAR(5, 3, 922),  // 887
  GRAMMAR(4, 2, 923),  // 888
  GRAMMAR(3, 2, 924),  // 889
  GRAMMAR(2, 1, 925),  // 890
  GRAMMAR(2, 1, 925),  // 891
  GRAMMAR(1, 0, 1090),  // 892
  GRAMMAR(3, 2, 929),  // 893
  GRAMMAR(2, 1, 930),  // 894
  GRAMMAR(1, 0, 1060),  // 895
  GRAMMAR(2, 1, 964),  // 896
  GRAMMAR(3, 2, 933),  // 897
  GRAMMAR(2, 1, 934),  // 898
  GRAMMAR(1, 0, 935),  // 899
  GRAMMAR(1, 0, 1091),  // 900
  GRAMMAR(3, 2, 937),  // 901
  GRAMMAR(2, 1, 938),  // 902
  GRAMMAR(1, 0, 939),  // 903
  GRAMMAR(1, 0, 1092),  // 904
  GRAMMAR(1, 0, 1060),  // 905
  GRAMMAR(5, 3, 943),  // 906
  GRAMMAR(4, 2, 944),  // 907
  GRAMMAR(3, 2, 945),  // 908
  GRAMMAR(2, 1, 946),  // 909
  GRAMMAR(2, 1, 946),  // 910
  GRAMMAR(1, 0, 1093),  // 911
  GRAMMAR(3, 2, 950),  // 912
  GRAMMAR(2, 1, 951),  // 913
  GRAMMAR(1, 0, 1060),  // 914
  GRAMMAR(2, 1, 964),  // 915
  GRAMMAR(3, 2, 954),  // 916
  GRAMMAR(2, 1, 955),  // 917
  GRAMMAR(1, 0, 1060),  // 918
  GRAMMAR(1, 0, 1060),  // 919
  GRAMMAR(1, 0, 1060),  // 920
  GRAMMAR(1, 0, 1060),  // 921
  GRAMMAR(1, 0, 1060),  // 922
  GRAMMAR(1, 0, 1060),  // 923
  GRAMMAR(1, 0, 1060),  // 924
  GRAMMAR(1, 0, 1060),  // 925
  GRAMMAR(1, 0, 1060),  // 926
  GRAMMAR(1, 0, 1060),  // 927
  GRAMMAR(1, 0, 1060),  // 928
  GRAMMAR(1, 0, 1060),  // 929
  GRAMMAR(1, 0, 1060),  // 930
  GRAMMAR(1, 0, 1060),  // 931
  GRAMMAR(1, 0, 1060),  // 932
  GRAMMAR(1, 0, 1060),  // 933
  GRAMMAR(1, 0, 1060),  // 934
  GRAMMAR(1, 0, 1094),  // 935
  GRAMMAR(1, 0, 1060),  // 936
  GRAMMAR(1, 0, 1060),  // 937
  GRAMMAR(2, 1, 964),  // 938
  GRAMMAR(1, 0, 1095),  // 939
  GRAMMAR(2, 1, 985),  // 940
  GRAMMAR(1, 0, 986),  // 941
  GRAMMAR(1, 0, 1060),  // 942
  GRAMMAR(1, 0, 1096),  // 943
  GRAMMAR(1, 0, 991),  // 944
  GRAMMAR(1, 0, 1097),  // 945
  GRAMMAR(1, 0, 1060),  // 946
  GRAMMAR(1, 0, 1060),  // 947
  GRAMMAR(1, 0, 1098),  // 948
  GRAMMAR(1, 0, 1099),  // 949
  GRAMMAR(1, 0, 1060),  // 950
  GRAMMAR(1, 0, 1060),  // 951
  GRAMMAR(1, 0, 1060),  // 952
  GRAMMAR(2, 1, 1100),  // 953
  GRAMMAR(1, 0, 1060),  // 954
  GRAMMAR(1, 0, 1060),  // 955
  GRAMMAR(1, 0, 1102),  // 956
  GRAMMAR(5, 3, 1004),  // 957
  GRAMMAR(2, 1, 964),  // 958
  GRAMMAR(4, 2, 1005),  // 959
  GRAMMAR(2, 1, 981),  // 960
  GRAMMAR(3, 2, 1006),  // 961
  GRAMMAR(2, 1, 964),  // 962
  GRAMMAR(1, 0, 1060),  // 963
  GRAMMAR(4, 2, 1103),  // 964
  GRAMMAR(4, 2, 1011),  // 965
  GRAMMAR(3, 2, 1012),  // 966
  GRAMMAR(2, 1, 1013),  // 967
  GRAMMAR(1, 0, 1060),  // 968
  GRAMMAR(1, 0, 1107),  // 969
  GRAMMAR(1, 0, 1060),  // 970
  GRAMMAR(1, 0, 1060),  // 971
  GRAMMAR(1, 0, 1060),  // 972
  GRAMMAR(1, 0, 1108),  // 973
  GRAMMAR(1, 0, 1109),  // 974
  GRAMMAR(2, 1, 964),  // 975
  GRAMMAR(1, 0, 1060),  // 976
  GRAMMAR(1, 0, 1110),  // 977
  GRAMMAR(1, 0, 1060),  // 978
  GRAMMAR(1, 0, 1111),  // 979
  GRAMMAR(2, 1, 964),  // 980
  GRAMMAR(1, 0, 1060),  // 981
  GRAMMAR(1, 0, 1060),  // 982
  GRAMMAR(1, 0, 1028),  // 983
  GRAMMAR(1, 0, 1112),  // 984
  GRAMMAR(1, 0, 1060),  // 985
  GRAMMAR(1, 0, 1113),  // 986
  GRAMMAR(2, 1, 981),  // 987
  GRAMMAR(1, 0, 1060),  // 988
  GRAMMAR(1, 0, 1060),  // 989
  GRAMMAR(1, 0, 1060),  // 990
  GRAMMAR(1, 0, 1060),  // 991
  GRAMMAR(1, 0, 1114),  // 992
  GRAMMAR(2, 1, 981),  // 993
  GRAMMAR(1, 0, 1060),  // 994
  GRAMMAR(1, 0, 1040),  // 995
  GRAMMAR(3, 2, 773),  // 996
  GRAMMAR(1, 0, 1060),  // 997
  GRAMMAR(1, 0, 1060),  // 998
  GRAMMAR(1, 0, 1060),  // 999
  GRAMMAR(2, 1, 981),  // 1000
  GRAMMAR(4, 2, 1115),  // 1001
  GRAMMAR(2, 1, 1119),  // 1002
  GRAMMAR(3, 2, 1046),  // 1003
  GRAMMAR(2, 1, 1047),  // 1004
  GRAMMAR(1, 0, 1048),  // 1005
  GRAMMAR(3, 2, 1121),  // 1006
  GRAMMAR(1, 0, 1118),  // 1007
  GRAMMAR(2, 1, 1124),  // 1008
  GRAMMAR(1, 0, 1125),  // 1009
  GRAMMAR(1, 0, 1126),  // 1010
  GRAMMAR(1, 0, 1125),  // 1011
  GRAMMAR(1, 0, 1125),  // 1012
  GRAMMAR(2, 1, 1055),  // 1013
  GRAMMAR(1, 0, 1125),  // 1014
  GRAMMAR(1, 0, 1127),  // 1015
  GRAMMAR(1, 0, 1125),  // 1016
  GRAMMAR(1, 0, 1125),  // 1017
  GRAMMAR(1, 0, 1125),  // 1018
  GRAMMAR(1, 0, 1125),  // 1019
  GRAMMAR(1, 0, 1125),  // 1020
  GRAMMAR(1, 0, 1125),  // 1021
  GRAMMAR(2, 1, 1128),  // 1022
  GRAMMAR(1, 0, 1129),  // 1023
  GRAMMAR(1, 0, 1129),  // 1024
  GRAMMAR(1, 0, 1129),  // 1025
  GRAMMAR(2, 1, 964),  // 1026
  GRAMMAR(1, 0, 1129),  // 1027
  GRAMMAR(2, 1, 1069),  // 1028
  GRAMMAR(1, 0, 1130),  // 1029
  GRAMMAR(1, 0, 1075),  // 1030
  GRAMMAR(1, 0, 1131),  // 1031
  GRAMMAR(1, 0, 1129),  // 1032
  GRAMMAR(1, 0, 1129),  // 1033
  GRAMMAR(1, 0, 1129),  // 1034
  GRAMMAR(1, 0, 1129),  // 1035
  GRAMMAR(1, 0, 1129),  // 1036
  GRAMMAR(2, 1, 964),  // 1037
  GRAMMAR(1, 0, 1129),  // 1038
  GRAMMAR(1, 0, 1129),  // 1039
  GRAMMAR(2, 1, 1132),  // 1040
  GRAMMAR(2, 1, 981),  // 1041
  GRAMMAR(1, 0, 1134),  // 1042
  GRAMMAR(1, 0, 1129),  // 1043
  GRAMMAR(2, 1, 1135),  // 1044
  GRAMMAR(1, 0, 1137),  // 1045
  GRAMMAR(1, 0, 987),  // 1046
  GRAMMAR(1, 0, 1138),  // 1047
  GRAMMAR(1, 0, 1139),  // 1048
  GRAMMAR(1, 0, 1136),  // 1049
  GRAMMAR(5, 3, 1140),  // 1050
  GRAMMAR(1, 0, 1136),  // 1051
  GRAMMAR(1, 0, 1136),  // 1052
  GRAMMAR(1, 0, 1136),  // 1053
  GRAMMAR(2, 1, 981),  // 1054
  GRAMMAR(1, 0, 1136),  // 1055
  GRAMMAR(1, 0, 1145),  // 1056
  GRAMMAR(2, 1, 981),  // 1057
  GRAMMAR(1, 0, 1136),  // 1058
  GRAMMAR(1, 0, 1146),  // 1059
  GRAMMAR(1, 0, 1147),  // 1060
  GRAMMAR(1, 0, 1101),  // 1061
  GRAMMAR(2, 1, 981),  // 1062
  GRAMMAR(4, 2, 1148),  // 1063
  GRAMMAR(2, 1, 1152),  // 1064
  GRAMMAR(1, 0, 964),  // 1065
  GRAMMAR(3, 2, 1104),  // 1066
  GRAMMAR(2, 1, 1105),  // 1067
  GRAMMAR(2, 1, 1154),  // 1068
  GRAMMAR(2, 1, 964),  // 1069
  GRAMMAR(1, 0, 1156),  // 1070
  GRAMMAR(1, 0, 1155),  // 1071
  GRAMMAR(1, 0, 1155),  // 1072
  GRAMMAR(1, 0, 1155),  // 1073
  GRAMMAR(1, 0, 1157),  // 1074
  GRAMMAR(2, 1, 964),  // 1075
  GRAMMAR(1, 0, 1158),  // 1076
  GRAMMAR(1, 0, 1159),  // 1077
  GRAMMAR(2, 1, 981),  // 1078
  GRAMMAR(1, 0, 1160),  // 1079
  GRAMMAR(3, 2, 1116),  // 1080
  GRAMMAR(2, 1, 964),  // 1081
  GRAMMAR(2, 1, 1117),  // 1082
  GRAMMAR(2, 1, 964),  // 1083
  GRAMMAR(1, 0, 1155),  // 1084
  GRAMMAR(2, 1, 964),  // 1085
  GRAMMAR(1, 0, 1120),  // 1086
  GRAMMAR(1, 0, 1161),  // 1087
  GRAMMAR(2, 1, 1122),  // 1088
  GRAMMAR(1, 0, 1123),  // 1089
  GRAMMAR(1, 0, 1162),  // 1090
  GRAMMAR(1, 0, 1155),  // 1091
  GRAMMAR(1, 0, 1163),  // 1092
  GRAMMAR(2, 1, 981),  // 1093
  GRAMMAR(1, 0, 1164),  // 1094
  GRAMMAR(1, 0, 1155),  // 1095
  GRAMMAR(2, 1, 1165),  // 1096
  GRAMMAR(1, 0, 1167),  // 1097
  GRAMMAR(1, 0, 1133),  // 1098
  GRAMMAR(1, 0, 1155),  // 1099
  GRAMMAR(2, 1, 964),  // 1100
  GRAMMAR(1, 0, 1168),  // 1101
  GRAMMAR(1, 0, 1155),  // 1102
  GRAMMAR(2, 1, 1169),  // 1103
  GRAMMAR(1, 0, 1171),  // 1104
  GRAMMAR(1, 0, 1172),  // 1105
  GRAMMAR(4, 2, 1141),  // 1106
  GRAMMAR(3, 2, 1142),  // 1107
  GRAMMAR(2, 1, 1143),  // 1108
  GRAMMAR(1, 0, 1144),  // 1109
  GRAMMAR(1, 0, 1155),  // 1110
  GRAMMAR(1, 0, 1155),  // 1111
  GRAMMAR(2, 1, 981),  // 1112
  GRAMMAR(1, 0, 1155),  // 1113
  GRAMMAR(2, 1, 981),  // 1114
  GRAMMAR(1, 0, 1173),  // 1115
  GRAMMAR(3, 2, 1149),  // 1116
  GRAMMAR(2, 1, 981),  // 1117
  GRAMMAR(2, 1, 1150),  // 1118
  GRAMMAR(1, 0, 1155),  // 1119
  GRAMMAR(1, 0, 1153),  // 1120
  GRAMMAR(1, 0, 1174),  // 1121
  GRAMMAR(1, 0, 1155),  // 1122
  GRAMMAR(1, 0, 1175),  // 1123
  GRAMMAR(1, 0, 1176),  // 1124
  GRAMMAR(2, 1, 964),  // 1125
  GRAMMAR(1, 0, 1155),  // 1126
  GRAMMAR(2, 1, 964),  // 1127
  GRAMMAR(2, 1, 1177),  // 1128
  GRAMMAR(2, 1, 981),  // 1129
  GRAMMAR(2, 1, 1179),  // 1130
  GRAMMAR(2, 1, 1055),  // 1131
  GRAMMAR(1, 0, 1155),  // 1132
  GRAMMAR(1, 0, 1181),  // 1133
  GRAMMAR(1, 0, 1182),  // 1134
  GRAMMAR(1, 0, 1183),  // 1135
  GRAMMAR(1, 0, 1166),  // 1136
  GRAMMAR(1, 0, 1155),  // 1137
  GRAMMAR(2, 1, 981),  // 1138
  GRAMMAR(1, 0, 1155),  // 1139
  GRAMMAR(2, 1, 981),  // 1140
  GRAMMAR(1, 0, 1184),  // 1141
  GRAMMAR(1, 0, 1170),  // 1142
  GRAMMAR(1, 0, 1185),  // 1143
  GRAMMAR(2, 1, 981),  // 1144
  GRAMMAR(1, 0, 1155),  // 1145
  GRAMMAR(1, 0, 1186),  // 1146
  GRAMMAR(4, 2, 1187),  // 1147
  GRAMMAR(1, 0, 1191),  // 1148
  GRAMMAR(1, 0, 1192),  // 1149
  GRAMMAR(1, 0, 1193),  // 1150
  GRAMMAR(2, 1, 964),  // 1151
  GRAMMAR(1, 0, 1178),  // 1152
  GRAMMAR(1, 0, 1155),  // 1153
  GRAMMAR(2, 1, 981),  // 1154
  GRAMMAR(1, 0, 1194),  // 1155
  GRAMMAR(1, 0, 1155),  // 1156
  GRAMMAR(1, 0, 1195),  // 1157
  GRAMMAR(2, 1, 981),  // 1158
  GRAMMAR(1, 0, 1155),  // 1159
  GRAMMAR(1, 0, 1196),  // 1160
  GRAMMAR(2, 1, 964),  // 1161
  GRAMMAR(1, 0, 1197),  // 1162
  GRAMMAR(3, 2, 1198),  // 1163
  GRAMMAR(3, 2, 1188),  // 1164
  GRAMMAR(2, 1, 1189),  // 1165
  GRAMMAR(1, 0, 1190),  // 1166
  GRAMMAR(1, 0, 1201),  // 1167
  GRAMMAR(1, 0, 1202),  // 1168
  GRAMMAR(1, 0, 1203),  // 1169
  GRAMMAR(1, 0, 1204),  // 1170
  GRAMMAR(2, 1, 964),  // 1171
  GRAMMAR(1, 0, 1155),  // 1172
  GRAMMAR(1, 0, 1205),  // 1173
  GRAMMAR(2, 1, 981),  // 1174
  GRAMMAR(1, 0, 1206),  // 1175
  GRAMMAR(1, 0, 1155),  // 1176
  GRAMMAR(1, 0, 1200),  // 1177
  GRAMMAR(1, 0, 1207),  // 1178
  GRAMMAR(2, 1, 981),  // 1179
  GRAMMAR(1, 0, 1208),  // 1180
  GRAMMAR(2, 1, 1209),  // 1181
  GRAMMAR(2, 1, 1211),  // 1182
  GRAMMAR(1, 0, 1213),  // 1183
  GRAMMAR(2, 1, 964),  // 1184
  GRAMMAR(1, 0, 1214),  // 1185
  GRAMMAR(2, 1, 964),  // 1186
  GRAMMAR(1, 0, 1215),  // 1187
  GRAMMAR(1, 0, 1155),  // 1188
  GRAMMAR(2, 1, 981),  // 1189
  GRAMMAR(1, 0, 1155),  // 1190
  GRAMMAR(1, 0, 1210),  // 1191
  GRAMMAR(1, 0, 1216),  // 1192
  GRAMMAR(1, 0, 1212),  // 1193
  GRAMMAR(2, 1, 1217),  // 1194
  GRAMMAR(1, 0, 1219),  // 1195
  GRAMMAR(2, 1, 964),  // 1196
  GRAMMAR(2, 1, 1220),  // 1197
  GRAMMAR(2, 1, 981),  // 1198
  GRAMMAR(1, 0, 1155),  // 1199
  GRAMMAR(2, 1, 1069),  // 1200
  GRAMMAR(1, 0, 1155),  // 1201
  GRAMMAR(2, 1, 1222),  // 1202
  GRAMMAR(3, 2, 1224),  // 1203
  GRAMMAR(2, 1, 964),  // 1204
  GRAMMAR(2, 1, 1227),  // 1205
  GRAMMAR(2, 1, 964),  // 1206
  GRAMMAR(1, 0, 1221),  // 1207
  GRAMMAR(1, 0, 1226),  // 1208
  GRAMMAR(2, 1, 981),  // 1209
  GRAMMAR(2, 1, 1229),  // 1210
  GRAMMAR(3, 2, 1231),  // 1211
  GRAMMAR(1, 0, 1233),  // 1212
  GRAMMAR(1, 0, 1228),  // 1213
  GRAMMAR(1, 0, 1069),  // 1214
  GRAMMAR(1, 0, 1234),  // 1215
  GRAMMAR(2, 1, 981),  // 1216
  GRAMMAR(2, 1, 1235),  // 1217
  GRAMMAR(2, 1, 1232),  // 1218
  GRAMMAR(1, 0, 1237),  // 1219
  GRAMMAR(2, 1, 964),  // 1220
  GRAMMAR(1, 0, 1236),  // 1221
  GRAMMAR(1, 0, 1238),  // 1222
  GRAMMAR(2, 1, 964),  // 1223
  GRAMMAR(1, 0, 1239),  // 1224
  GRAMMAR(2, 1, 964),  // 1225
  GRAMMAR(1, 0, 1240),  // 1226
  GRAMMAR(2, 1, 964),  // 1227
  GRAMMAR(1, 0, 1241),  // 1228
  GRAMMAR(2, 1, 964),  // 1229
  GRAMMAR(1, 0, 1242),  // 1230
  GRAMMAR(2, 1, 964),  // 1231
  GRAMMAR(2, 1, 1243),  // 1232
  GRAMMAR(1, 0, 1244),  // 1233
  GRAMMAR(2, 1, 964),  // 1234
  GRAMMAR(2, 1, 1245),  // 1235
  GRAMMAR(2, 1, 964),  // 1236
  GRAMMAR(2, 1, 1247),  // 1237
  GRAMMAR(2, 1, 1055),  // 1238
  GRAMMAR(3, 2, 1249),  // 1239
  GRAMMAR(2, 1, 987),  // 1240
  GRAMMAR(2, 1, 1252),  // 1241
  GRAMMAR(3, 2, 1254),  // 1242
  GRAMMAR(2, 1, 1255),  // 1243
  GRAMMAR(2, 1, 987),  // 1244
  GRAMMAR(1, 0, 1256),  // 1245
  GRAMMAR(2, 1, 1257),  // 1246
  GRAMMAR(3, 2, 1259),  // 1247
  GRAMMAR(2, 1, 1260),  // 1248
  GRAMMAR(2, 1, 1262),  // 1249
  GRAMMAR(3, 2, 1264),  // 1250
  GRAMMAR(2, 1, 1265),  // 1251
  GRAMMAR(2, 1, 1267),  // 1252
  GRAMMAR(3, 2, 1269),  // 1253
  GRAMMAR(2, 1, 1270),  // 1254
  GRAMMAR(1, 0, 1272),  // 1255
  GRAMMAR(3, 2, 1273),  // 1256
  GRAMMAR(2, 1, 1274),  // 1257
  GRAMMAR(3, 2, 1276),  // 1258
  GRAMMAR(2, 1, 1277),  // 1259
  GRAMMAR(2, 1, 1277),  // 1260
};
#define DEFINE_EXI_GRAMMAR(prefix, grammarSetName) \
EmberExiGrammarSet grammarSetName = { 1, grammars, productions};


