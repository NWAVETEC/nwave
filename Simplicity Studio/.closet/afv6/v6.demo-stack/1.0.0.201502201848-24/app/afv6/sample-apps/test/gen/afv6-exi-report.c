// This file is generated. Please do not edit manually.
// 
//

// Report logic, intended to run on PC only.

#include PLATFORM_HEADER
#include "app/util/exi/exi.h"
#include "app/util/exi/exi-internal.h"
#include "stack/core/log.h"
#include "afv6-exi-types.h"
#include "afv6-exi-qname.h"
#include "stdlib.h"


// Sprintf functions
int emberExiXmlShortTagsSprintfStructResource(int8u *stringBuffer, int offset, EmberExiGeneratedResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Resource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<uXK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</uXK>");
  EXI_DEBUG("End of sprintXML: Resource, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vrS");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "</vrS>");
  EXI_DEBUG("End of sprintXML: IdentifiedObject, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceSupplier(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplier *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplier, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wGt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <pao>%s</pao>", data->email_option);
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->phone_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->providerID_option);
  off += sprintf(stringBuffer + off, "  <AaW>%s</AaW>", data->web_option);
  off += sprintf(stringBuffer + off, "</wGt>");
  EXI_DEBUG("End of sprintXML: ServiceSupplier, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditTypeChange(int8u *stringBuffer, int offset, EmberExiGeneratedCreditTypeChange *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditTypeChange, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PdK");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <iIQ>%d</iIQ>", data->newType);
  off += sprintf(stringBuffer + off, "  <Ssw>%d</Ssw>", data->startTime);
  off += sprintf(stringBuffer + off, "</PdK>");
  EXI_DEBUG("End of sprintXML: CreditTypeChange, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructListLink(int8u *stringBuffer, int offset, EmberExiGeneratedListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NYN");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</NYN>");
  EXI_DEBUG("End of sprintXML: ListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveChargeReservationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveChargeReservationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Dfw");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Dfw>");
  EXI_DEBUG("End of sprintXML: ActiveChargeReservationListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveDERControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveDERControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wCb");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</wCb>");
  EXI_DEBUG("End of sprintXML: ActiveDERControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeReservationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QvG");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</QvG>");
  EXI_DEBUG("End of sprintXML: ChargeReservationListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pWO");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</pWO>");
  EXI_DEBUG("End of sprintXML: DERControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<WQi");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ActiveChargeReservationListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveChargeReservationListLink(stringBuffer, off, (data->ActiveChargeReservationListLink_option));
    if ( data->ActiveDERControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveDERControlListLink(stringBuffer, off, (data->ActiveDERControlListLink_option));
    if ( data->ChargeReservationListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructChargeReservationListLink(stringBuffer, off, (data->ChargeReservationListLink_option));
    if ( data->DERControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERControlListLink(stringBuffer, off, (data->DERControlListLink_option));
  off += sprintf(stringBuffer + off, "  <vdn>%d</vdn>", data->primacy);
  off += sprintf(stringBuffer + off, "</WQi>");
  EXI_DEBUG("End of sprintXML: DERProgram, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAmpereHour(int8u *stringBuffer, int offset, EmberExiGeneratedAmpereHour *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AmpereHour, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vVJ");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value_option);
  off += sprintf(stringBuffer + off, "</vVJ>");
  EXI_DEBUG("End of sprintXML: AmpereHour, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLink(int8u *stringBuffer, int offset, EmberExiGeneratedLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Link, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oAR");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</oAR>");
  EXI_DEBUG("End of sprintXML: Link, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TLu");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TLu>");
  EXI_DEBUG("End of sprintXML: DERStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructVoltage(int8u *stringBuffer, int offset, EmberExiGeneratedVoltage *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Voltage, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KaF");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value_option);
  off += sprintf(stringBuffer + off, "</KaF>");
  EXI_DEBUG("End of sprintXML: Voltage, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActivePower(int8u *stringBuffer, int offset, EmberExiGeneratedActivePower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActivePower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Kls");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value_option);
  off += sprintf(stringBuffer + off, "</Kls>");
  EXI_DEBUG("End of sprintXML: ActivePower, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDER(int8u *stringBuffer, int offset, EmberExiGeneratedDER *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DER, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bBj");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ahRating_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAmpereHour(stringBuffer, off, (data->ahRating_option));
    if ( data->DERStatusLink != NULL )
      off += emberExiXmlShortTagsSprintfStructDERStatusLink(stringBuffer, off, (data->DERStatusLink));
    if ( data->nominalVoltage != NULL )
      off += emberExiXmlShortTagsSprintfStructVoltage(stringBuffer, off, (data->nominalVoltage));
    if ( data->powerLimit != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->powerLimit));
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->type);
  off += sprintf(stringBuffer + off, "</bBj>");
  EXI_DEBUG("End of sprintXML: DER, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingQuality(int8u *stringBuffer, int offset, EmberExiGeneratedReadingQuality *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingQuality, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QOF");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Tas>%d</Tas>", data->quality);
  off += sprintf(stringBuffer + off, "</QOF>");
  EXI_DEBUG("End of sprintXML: ReadingQuality, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReading(int8u *stringBuffer, int offset, EmberExiGeneratedReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Reading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PPa");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingQuality_count; i++ )
    if ( data->ReadingQuality_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingQuality(stringBuffer, off, &(data->ReadingQuality_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->timeStamp_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</PPa>");
  EXI_DEBUG("End of sprintXML: Reading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNotification(int8u *stringBuffer, int offset, EmberExiGeneratedNotification *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Notification, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eMM");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <pCh>%s</pCh>", data->resource);
    if ( data->Resource_option != NULL )
      off += emberExiXmlShortTagsSprintfStructResource(stringBuffer, off, (data->Resource_option));
  off += sprintf(stringBuffer + off, "  <jcG>%s</jcG>", data->subscriptionURI);
  off += sprintf(stringBuffer + off, "</eMM>");
  EXI_DEBUG("End of sprintXML: Notification, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructList(int8u *stringBuffer, int offset, EmberExiGeneratedList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: List, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SaF");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SaF>");
  EXI_DEBUG("End of sprintXML: List, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNotificationList(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NotificationList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KXB");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Notification_count; i++ )
    if ( data->Notification_array != NULL )
      off += emberExiXmlShortTagsSprintfStructNotification(stringBuffer, off, &(data->Notification_array[i]));
  }
  off += sprintf(stringBuffer + off, "</KXB>");
  EXI_DEBUG("End of sprintXML: NotificationList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAccountLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccountLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HYu");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</HYu>");
  EXI_DEBUG("End of sprintXML: CustomerAccountLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLoadShedAvailabilityListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailabilityListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<emc");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</emc>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailabilityListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<yLn");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</yLn>");
  EXI_DEBUG("End of sprintXML: MeterReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepaymentLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IuP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</IuP>");
  EXI_DEBUG("End of sprintXML: PrepaymentLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceCategory(int8u *stringBuffer, int offset, EmberExiGeneratedServiceCategory *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceCategory, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<hPK");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Gvc>%d</Gvc>", data->kind);
  off += sprintf(stringBuffer + off, "</hPK>");
  EXI_DEBUG("End of sprintXML: ServiceCategory, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointBase(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FEt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status);
  off += sprintf(stringBuffer + off, "</FEt>");
  EXI_DEBUG("End of sprintXML: UsagePointBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<dIF");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status);
    if ( data->CustomerAccountLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCustomerAccountLink(stringBuffer, off, (data->CustomerAccountLink_option));
    if ( data->LoadShedAvailabilityListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLoadShedAvailabilityListLink(stringBuffer, off, (data->LoadShedAvailabilityListLink_option));
    if ( data->MeterReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMeterReadingListLink(stringBuffer, off, (data->MeterReadingListLink_option));
    if ( data->PrepaymentLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepaymentLink(stringBuffer, off, (data->PrepaymentLink_option));
    if ( data->ServiceCategory != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceCategory(stringBuffer, off, (data->ServiceCategory));
  off += sprintf(stringBuffer + off, "</dIF>");
  EXI_DEBUG("End of sprintXML: UsagePoint, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActivePowerChargeRate(int8u *stringBuffer, int offset, EmberExiGeneratedActivePowerChargeRate *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActivePowerChargeRate, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<toR");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value_option);
  off += sprintf(stringBuffer + off, "</toR>");
  EXI_DEBUG("End of sprintXML: ActivePowerChargeRate, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HqX");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</HqX>");
  EXI_DEBUG("End of sprintXML: TargetReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCost(int8u *stringBuffer, int offset, EmberExiGeneratedCost *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Cost, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Oye");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <nIQ>%d</nIQ>", data->amount);
  off += sprintf(stringBuffer + off, "  <GfU>%d</GfU>", data->costKind);
  off += sprintf(stringBuffer + off, "</Oye>");
  EXI_DEBUG("End of sprintXML: Cost, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConsumptionTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<VvA");
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Cost_count; i++ )
    if ( data->Cost_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCost(stringBuffer, off, &(data->Cost_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <fTX>%d</fTX>", data->price_option);
  off += sprintf(stringBuffer + off, "  <YMy>%d</YMy>", data->startValue);
  off += sprintf(stringBuffer + off, "</VvA>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedDateTimeInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DateTimeInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kEg");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <GXD>%d</GXD>", data->duration);
  off += sprintf(stringBuffer + off, "  <YEw>%d</YEw>", data->start);
  off += sprintf(stringBuffer + off, "</kEg>");
  EXI_DEBUG("End of sprintXML: DateTimeInterval, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRandomizedDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizedDateTimeInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RandomizedDateTimeInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KtY");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <GXD>%d</GXD>", data->duration);
  off += sprintf(stringBuffer + off, "  <YEw>%d</YEw>", data->start);
  off += sprintf(stringBuffer + off, "  <wIX>%d</wIX>", data->randomizeEnd_option);
  off += sprintf(stringBuffer + off, "  <hYd>%d</hYd>", data->randomizeStart_option);
  off += sprintf(stringBuffer + off, "</KtY>");
  EXI_DEBUG("End of sprintXML: RandomizedDateTimeInterval, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FGM");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  { int16u i;
    for ( i=0; i<data->ConsumptionTariffInterval_count; i++ )
    if ( data->ConsumptionTariffInterval_array != NULL )
      off += emberExiXmlShortTagsSprintfStructConsumptionTariffInterval(stringBuffer, off, &(data->ConsumptionTariffInterval_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <FfK>%d</FfK>", data->creationTime);
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructRandomizedDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <akB>%d</akB>", data->isActive);
  off += sprintf(stringBuffer + off, "  <Jma>%d</Jma>", data->numPriceLevels);
  off += sprintf(stringBuffer + off, "  <gTM>%d</gTM>", data->priceLevel);
  off += sprintf(stringBuffer + off, "</FGM>");
  EXI_DEBUG("End of sprintXML: TimeTariffInterval, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructOffset(int8u *stringBuffer, int offset, EmberExiGeneratedOffset *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Offset, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<JJr");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->type);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</JJr>");
  EXI_DEBUG("End of sprintXML: Offset, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriodListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FJi");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FJi>");
  EXI_DEBUG("End of sprintXML: BillingPeriodListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTextMessageListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTextMessageListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BNt");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</BNt>");
  EXI_DEBUG("End of sprintXML: ActiveTextMessageListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargerLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargerLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iYl");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</iYl>");
  EXI_DEBUG("End of sprintXML: ChargerLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargeReservation(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeReservation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TJN");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ChargerLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructChargerLink(stringBuffer, off, (data->ChargerLink_option));
    if ( data->scheduledInterval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->scheduledInterval));
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status);
  off += sprintf(stringBuffer + off, "</TJN>");
  EXI_DEBUG("End of sprintXML: ChargeReservation, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargeReservationList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeReservationList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PVC");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ChargeReservation_count; i++ )
    if ( data->ChargeReservation_array != NULL )
      off += emberExiXmlShortTagsSprintfStructChargeReservation(stringBuffer, off, &(data->ChargeReservation_array[i]));
  }
  off += sprintf(stringBuffer + off, "</PVC>");
  EXI_DEBUG("End of sprintXML: ChargeReservationList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveEndDeviceControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveEndDeviceControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YQD");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</YQD>");
  EXI_DEBUG("End of sprintXML: ActiveEndDeviceControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pfY");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</pfY>");
  EXI_DEBUG("End of sprintXML: EndDeviceControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<mkt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ActiveEndDeviceControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveEndDeviceControlListLink(stringBuffer, off, (data->ActiveEndDeviceControlListLink_option));
    if ( data->EndDeviceControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceControlListLink(stringBuffer, off, (data->EndDeviceControlListLink_option));
  off += sprintf(stringBuffer + off, "  <vdn>%d</vdn>", data->primacy);
  off += sprintf(stringBuffer + off, "</mkt>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgram, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cse");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DemandResponseProgram_count; i++ )
    if ( data->DemandResponseProgram_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgram(stringBuffer, off, &(data->DemandResponseProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</cse>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SBm");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <tGB>%d</tGB>", data->estimatedTimeRemaining);
  off += sprintf(stringBuffer + off, "  <ieo>%d</ieo>", data->stateOfCharge);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <juE>%d</juE>", data->statusTime);
  off += sprintf(stringBuffer + off, "  <rrE>%d</rrE>", data->testResult_option);
  off += sprintf(stringBuffer + off, "  <gtf>%d</gtf>", data->voltageHigh_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->voltageLow_option);
  off += sprintf(stringBuffer + off, "</SBm>");
  EXI_DEBUG("End of sprintXML: DERStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReduction *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReduction, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oem");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->type);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</oem>");
  EXI_DEBUG("End of sprintXML: TargetReduction, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLogEvent(int8u *stringBuffer, int offset, EmberExiGeneratedLogEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEvent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oFk");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime);
  off += sprintf(stringBuffer + off, "  <hSO>%d</hSO>", data->functionSet);
  off += sprintf(stringBuffer + off, "  <hxW>%d</hxW>", data->logEventCode);
  off += sprintf(stringBuffer + off, "  <uwP>%d</uwP>", data->logEventPEN_option);
  off += sprintf(stringBuffer + off, "  <fQL>%d</fQL>", data->profileID);
  off += sprintf(stringBuffer + off, "  <oWy>%d</oWy>", data->vendorDefined_option);
  off += sprintf(stringBuffer + off, "</oFk>");
  EXI_DEBUG("End of sprintXML: LogEvent, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLogEventList(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEventList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iCc");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->LogEvent_count; i++ )
    if ( data->LogEvent_array != NULL )
      off += emberExiXmlShortTagsSprintfStructLogEvent(stringBuffer, off, &(data->LogEvent_array[i]));
  }
  off += sprintf(stringBuffer + off, "</iCc>");
  EXI_DEBUG("End of sprintXML: LogEventList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRateComponentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<hxq");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</hxq>");
  EXI_DEBUG("End of sprintXML: RateComponentListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Fbu");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Fbu>");
  EXI_DEBUG("End of sprintXML: DERLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTimeTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTimeTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bLT");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</bLT>");
  EXI_DEBUG("End of sprintXML: ActiveTimeTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffIntervalList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gfr");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TimeTariffInterval_count; i++ )
    if ( data->TimeTariffInterval_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeTariffInterval(stringBuffer, off, &(data->TimeTariffInterval_array[i]));
  }
  off += sprintf(stringBuffer + off, "</gfr>");
  EXI_DEBUG("End of sprintXML: TimeTariffIntervalList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Tij");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Tij>");
  EXI_DEBUG("End of sprintXML: DERListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIntervalReading(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ajy");
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingQuality_count; i++ )
    if ( data->ReadingQuality_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingQuality(stringBuffer, off, &(data->ReadingQuality_array[i]));
  }
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</ajy>");
  EXI_DEBUG("End of sprintXML: IntervalReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIntervalBlock(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlock *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalBlock, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<swS");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  { int16u i;
    for ( i=0; i<data->IntervalReading_count; i++ )
    if ( data->IntervalReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalReading(stringBuffer, off, &(data->IntervalReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</swS>");
  EXI_DEBUG("End of sprintXML: IntervalBlock, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIntervalBlockList(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalBlockList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kXX");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->IntervalBlock_count; i++ )
    if ( data->IntervalBlock_array != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalBlock(stringBuffer, off, &(data->IntervalBlock_array[i]));
  }
  off += sprintf(stringBuffer + off, "</kXX>");
  EXI_DEBUG("End of sprintXML: IntervalBlockList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DaP");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DaP>");
  EXI_DEBUG("End of sprintXML: UsagePointListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingType(int8u *stringBuffer, int offset, EmberExiGeneratedReadingType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gyu");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <hrH>%d</hrH>", data->accumulationBehaviour_option);
  off += sprintf(stringBuffer + off, "  <GCO>%d</GCO>", data->commodity_option);
  off += sprintf(stringBuffer + off, "  <ipl>%d</ipl>", data->consumptionTier_option);
  off += sprintf(stringBuffer + off, "  <kHj>%d</kHj>", data->currency_option);
  off += sprintf(stringBuffer + off, "  <YFF>%d</YFF>", data->dataQualifier_option);
  off += sprintf(stringBuffer + off, "  <aeC>%d</aeC>", data->flowDirection_option);
  off += sprintf(stringBuffer + off, "  <Gvc>%d</Gvc>", data->kind_option);
  off += sprintf(stringBuffer + off, "  <icd>%d</icd>", data->phase_option);
  off += sprintf(stringBuffer + off, "  <AEd>%d</AEd>", data->powerOfTenMultiplier_option);
  off += sprintf(stringBuffer + off, "  <cvj>%d</cvj>", data->timeAttribute_option);
  off += sprintf(stringBuffer + off, "  <PfI>%d</PfI>", data->tou_option);
  off += sprintf(stringBuffer + off, "  <Ebg>%d</Ebg>", data->uom_option);
  off += sprintf(stringBuffer + off, "</gyu>");
  EXI_DEBUG("End of sprintXML: ReadingType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingTypeList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingTypeList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PNc");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingType_count; i++ )
    if ( data->ReadingType_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingType(stringBuffer, off, &(data->ReadingType_array[i]));
  }
  off += sprintf(stringBuffer + off, "</PNc>");
  EXI_DEBUG("End of sprintXML: ReadingTypeList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<VSG");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</VSG>");
  EXI_DEBUG("End of sprintXML: TimeLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMessagingProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<lEV");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</lEV>");
  EXI_DEBUG("End of sprintXML: MessagingProgramListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTime(int8u *stringBuffer, int offset, EmberExiGeneratedTime *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Time, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qhp");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <eVB>%d</eVB>", data->dstEndTime);
  off += sprintf(stringBuffer + off, "  <MHd>%d</MHd>", data->dstOffset);
  off += sprintf(stringBuffer + off, "  <VXX>%d</VXX>", data->dstStartTime);
  off += sprintf(stringBuffer + off, "  <rRA>%d</rRA>", data->localTime_option);
  off += sprintf(stringBuffer + off, "  <Tas>%d</Tas>", data->quality);
  off += sprintf(stringBuffer + off, "  <KdJ>%d</KdJ>", data->tzOffset);
  off += sprintf(stringBuffer + off, "  <ofG>%d</ofG>", data->UTCTime);
  off += sprintf(stringBuffer + off, "</qhp>");
  EXI_DEBUG("End of sprintXML: Time, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<jNk");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePoint(stringBuffer, off, &(data->UsagePoint_array[i]));
  }
  off += sprintf(stringBuffer + off, "</jNk>");
  EXI_DEBUG("End of sprintXML: UsagePointList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDutyCycle(int8u *stringBuffer, int offset, EmberExiGeneratedDutyCycle *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DutyCycle, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FjL");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ikD>%d</ikD>", data->normalValue);
  off += sprintf(stringBuffer + off, "</FjL>");
  EXI_DEBUG("End of sprintXML: DutyCycle, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSetPoint(int8u *stringBuffer, int offset, EmberExiGeneratedSetPoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SetPoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iLV");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->type);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</iLV>");
  EXI_DEBUG("End of sprintXML: SetPoint, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructStatus(int8u *stringBuffer, int offset, EmberExiGeneratedStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Status, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<soK");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <ojn>%d</ojn>", data->potentiallySuperseded);
  off += sprintf(stringBuffer + off, "  <oRG>%d</oRG>", data->potentiallySupersededTime);
  off += sprintf(stringBuffer + off, "  <Hnv>%s</Hnv>", data->reason_option);
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->type);
  off += sprintf(stringBuffer + off, "</soK>");
  EXI_DEBUG("End of sprintXML: Status, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceControl(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<fRd");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <FfK>%d</FfK>", data->creationTime);
  off += sprintf(stringBuffer + off, "  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceCategory.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceCategory>");
  off += sprintf(stringBuffer + off, "  <uvw>%d</uvw>", data->drProgramMandatory);
    if ( data->DutyCycle_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDutyCycle(stringBuffer, off, (data->DutyCycle_option));
  off += sprintf(stringBuffer + off, "  <Plq>%d</Plq>", data->loadShiftForward);
  { int16u i;
    for ( i=0; i<data->Offset_count; i++ )
    if ( data->Offset_array != NULL )
      off += emberExiXmlShortTagsSprintfStructOffset(stringBuffer, off, &(data->Offset_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <Syy>%d</Syy>", data->overrideDuration);
    if ( data->scheduledInterval != NULL )
      off += emberExiXmlShortTagsSprintfStructRandomizedDateTimeInterval(stringBuffer, off, (data->scheduledInterval));
  { int16u i;
    for ( i=0; i<data->SetPoint_count; i++ )
    if ( data->SetPoint_array != NULL )
      off += emberExiXmlShortTagsSprintfStructSetPoint(stringBuffer, off, &(data->SetPoint_array[i]));
  }
    if ( data->Status != NULL )
      off += emberExiXmlShortTagsSprintfStructStatus(stringBuffer, off, (data->Status));
    if ( data->TargetReduction_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTargetReduction(stringBuffer, off, (data->TargetReduction_option));
  off += sprintf(stringBuffer + off, "</fRd>");
  EXI_DEBUG("End of sprintXML: EndDeviceControl, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverride(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverride *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverride, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EKt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "</EKt>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverride, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveBillingPeriodListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveBillingPeriodListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<JDK");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</JDK>");
  EXI_DEBUG("End of sprintXML: ActiveBillingPeriodListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ctf");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ctf>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Xwp");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Xwp>");
  EXI_DEBUG("End of sprintXML: DERProgramListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepaymentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qmD");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</qmD>");
  EXI_DEBUG("End of sprintXML: PrepaymentListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfileLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<hKP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</hKP>");
  EXI_DEBUG("End of sprintXML: TariffProfileLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConfigurationLink(int8u *stringBuffer, int offset, EmberExiGeneratedConfigurationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConfigurationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Aeb");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Aeb>");
  EXI_DEBUG("End of sprintXML: ConfigurationLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceInformationLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceInformationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<sbV");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</sbV>");
  EXI_DEBUG("End of sprintXML: DeviceInformationLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceGroupListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceGroupListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<JsQ");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</JsQ>");
  EXI_DEBUG("End of sprintXML: EndDeviceGroupListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<uXc");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</uXc>");
  EXI_DEBUG("End of sprintXML: EndDeviceListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLogEventListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEventListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<peh");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</peh>");
  EXI_DEBUG("End of sprintXML: LogEventListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePointListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kkg");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</kkg>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePointListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNetworkStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NetworkStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<aSF");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</aSF>");
  EXI_DEBUG("End of sprintXML: NetworkStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPowerStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QmL");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</QmL>");
  EXI_DEBUG("End of sprintXML: PowerStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscriptionListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Cii");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Cii>");
  EXI_DEBUG("End of sprintXML: SubscriptionListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceGroup(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroup *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceGroup, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IDE");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfileLink(stringBuffer, off, (data->TariffProfileLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
  off += sprintf(stringBuffer + off, "</IDE>");
  EXI_DEBUG("End of sprintXML: EndDeviceGroup, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceCapability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<lem");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfileLink(stringBuffer, off, (data->TariffProfileLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->EndDeviceGroupListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceGroupListLink(stringBuffer, off, (data->EndDeviceGroupListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceListLink(stringBuffer, off, (data->EndDeviceListLink_option));
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorUsagePointListLink(stringBuffer, off, (data->MirrorUsagePointListLink_option));
    if ( data->NetworkStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructNetworkStatusLink(stringBuffer, off, (data->NetworkStatusLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSubscriptionListLink(stringBuffer, off, (data->SubscriptionListLink_option));
  off += sprintf(stringBuffer + off, "</lem>");
  EXI_DEBUG("End of sprintXML: DeviceCapability, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileStatus(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KMu");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <deviceID>");
  { int16u i;
    for ( i=0; i<data->deviceID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceID>");
  off += sprintf(stringBuffer + off, "  <VQN>%s</VQN>", data->fileURI);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status);
  off += sprintf(stringBuffer + off, "</KMu>");
  EXI_DEBUG("End of sprintXML: FileStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAccountBalanceLink(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalanceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountBalanceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wLJ");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</wLJ>");
  EXI_DEBUG("End of sprintXML: AccountBalanceLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveCreditRegisterListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveCreditRegisterListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OXH");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</OXH>");
  EXI_DEBUG("End of sprintXML: ActiveCreditRegisterListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveSupplyInterruptionOverrideListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OqK");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</OqK>");
  EXI_DEBUG("End of sprintXML: ActiveSupplyInterruptionOverrideListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRealEnergy(int8u *stringBuffer, int offset, EmberExiGeneratedRealEnergy *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RealEnergy, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<WfW");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value_option);
  off += sprintf(stringBuffer + off, "</WfW>");
  EXI_DEBUG("End of sprintXML: RealEnergy, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAccountingUnit(int8u *stringBuffer, int offset, EmberExiGeneratedAccountingUnit *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountingUnit, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pPv");
  off += sprintf(stringBuffer + off, ">");
    if ( data->energyUnit_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRealEnergy(stringBuffer, off, (data->energyUnit_option));
  off += sprintf(stringBuffer + off, "  <Uup>%d</Uup>", data->monetaryUnit_option);
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value_option);
  off += sprintf(stringBuffer + off, "</pPv>");
  EXI_DEBUG("End of sprintXML: AccountingUnit, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegisterListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bCY");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</bCY>");
  EXI_DEBUG("End of sprintXML: CreditRegisterListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepayOperationStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayOperationStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Usv");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Usv>");
  EXI_DEBUG("End of sprintXML: PrepayOperationStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverrideListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<aWT");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</aWT>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverrideListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepayment(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayment *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Prepayment, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eIj");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->AccountBalanceLink != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountBalanceLink(stringBuffer, off, (data->AccountBalanceLink));
    if ( data->ActiveCreditRegisterListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveCreditRegisterListLink(stringBuffer, off, (data->ActiveCreditRegisterListLink_option));
    if ( data->ActiveSupplyInterruptionOverrideListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveSupplyInterruptionOverrideListLink(stringBuffer, off, (data->ActiveSupplyInterruptionOverrideListLink_option));
    if ( data->creditExpiryLevel_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->creditExpiryLevel_option));
    if ( data->CreditRegisterListLink != NULL )
      off += emberExiXmlShortTagsSprintfStructCreditRegisterListLink(stringBuffer, off, (data->CreditRegisterListLink));
    if ( data->lowCreditWarningLevel_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->lowCreditWarningLevel_option));
    if ( data->lowEmergencyCreditWarningLevel_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->lowEmergencyCreditWarningLevel_option));
  off += sprintf(stringBuffer + off, "  <pLN>%d</pLN>", data->prepayMode);
    if ( data->PrepayOperationStatusLink != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepayOperationStatusLink(stringBuffer, off, (data->PrepayOperationStatusLink));
    if ( data->SupplyInterruptionOverrideListLink != NULL )
      off += emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideListLink(stringBuffer, off, (data->SupplyInterruptionOverrideListLink));
  off += sprintf(stringBuffer + off, "</eIj>");
  EXI_DEBUG("End of sprintXML: Prepayment, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedChargerStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargerStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xbp");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <KPE>%d</KPE>", data->batChaSt);
  off += sprintf(stringBuffer + off, "  <HSK>%d</HSK>", data->chaTms_option);
  off += sprintf(stringBuffer + off, "</xbp>");
  EXI_DEBUG("End of sprintXML: ChargerStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCharger(int8u *stringBuffer, int offset, EmberExiGeneratedCharger *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Charger, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SIF");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ChargerStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructChargerStatus(stringBuffer, off, (data->ChargerStatus_option));
    if ( data->powerRequired != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->powerRequired));
    if ( data->rate != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePowerChargeRate(stringBuffer, off, (data->rate));
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->type);
  off += sprintf(stringBuffer + off, "</SIF>");
  EXI_DEBUG("End of sprintXML: Charger, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCondition(int8u *stringBuffer, int offset, EmberExiGeneratedCondition *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Condition, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Nex");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <LMC>%d</LMC>", data->attributeIdentifier);
  off += sprintf(stringBuffer + off, "  <QOP>%d</QOP>", data->lowerThreshold);
  off += sprintf(stringBuffer + off, "  <XqK>%d</XqK>", data->upperThreshold);
  off += sprintf(stringBuffer + off, "</Nex>");
  EXI_DEBUG("End of sprintXML: Condition, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<GNN");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "</GNN>");
  EXI_DEBUG("End of sprintXML: MeterReadingBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorMeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eCH");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  { int16u i;
    for ( i=0; i<data->IntervalBlock_count; i++ )
    if ( data->IntervalBlock_array != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalBlock(stringBuffer, off, &(data->IntervalBlock_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <pYU>%d</pYU>", data->lastUpdateTime_option);
  off += sprintf(stringBuffer + off, "  <DwD>%d</DwD>", data->nextUpdateTime_option);
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReading(stringBuffer, off, &(data->Reading_array[i]));
  }
    if ( data->ReadingType != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingType(stringBuffer, off, (data->ReadingType));
  off += sprintf(stringBuffer + off, "</eCH>");
  EXI_DEBUG("End of sprintXML: MirrorMeterReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vbl");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status);
  off += sprintf(stringBuffer + off, "  <FfK>%d</FfK>", data->creationTime);
  off += sprintf(stringBuffer + off, "  <manufacturerID>");
  { int16u i;
    for ( i=0; i<data->manufacturerID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->manufacturerID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</manufacturerID>");
  { int16u i;
    for ( i=0; i<data->MirrorMeterReading_count; i++ )
    if ( data->MirrorMeterReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorMeterReading(stringBuffer, off, &(data->MirrorMeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <IFB>%s</IFB>", data->serialNumber);
    if ( data->ServiceCategory != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceCategory(stringBuffer, off, (data->ServiceCategory));
  off += sprintf(stringBuffer + off, "</vbl>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePoint, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceChange(int8u *stringBuffer, int offset, EmberExiGeneratedServiceChange *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceChange, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<seY");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <nFv>%d</nFv>", data->newStatus);
  off += sprintf(stringBuffer + off, "  <Ssw>%d</Ssw>", data->startTime);
  off += sprintf(stringBuffer + off, "</seY>");
  EXI_DEBUG("End of sprintXML: ServiceChange, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIntervalBlockListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalBlockListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cDB");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</cDB>");
  EXI_DEBUG("End of sprintXML: IntervalBlockListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<sWw");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</sWw>");
  EXI_DEBUG("End of sprintXML: ReadingLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingTypeLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingTypeLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FTm");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FTm>");
  EXI_DEBUG("End of sprintXML: ReadingTypeLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<yCy");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</yCy>");
  EXI_DEBUG("End of sprintXML: MeterReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructProjectionReading(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Hcd");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</Hcd>");
  EXI_DEBUG("End of sprintXML: ProjectionReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructProjectionReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Vun");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ProjectionReading_count; i++ )
    if ( data->ProjectionReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructProjectionReading(stringBuffer, off, &(data->ProjectionReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Vun>");
  EXI_DEBUG("End of sprintXML: ProjectionReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructHistoricalReading(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<mOH");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</mOH>");
  EXI_DEBUG("End of sprintXML: HistoricalReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Oat");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Oat>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLoadShedAvailability(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Any");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <oQt>%d</oQt>", data->availabilityDuration_option);
  off += sprintf(stringBuffer + off, "  <Wdn>%d</Wdn>", data->consuming);
    if ( data->DemandResponseProgramLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgramLink(stringBuffer, off, (data->DemandResponseProgramLink_option));
  off += sprintf(stringBuffer + off, "  <Cmr>%d</Cmr>", data->shed);
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->type);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</Any>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailability, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedPowerFactor *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerFactor, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HPY");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value_option);
  off += sprintf(stringBuffer + off, "</HPY>");
  EXI_DEBUG("End of sprintXML: PowerFactor, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERControl(int8u *stringBuffer, int offset, EmberExiGeneratedDERControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qgE");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <uuK>%d</uuK>", data->gnBlk_option);
  off += sprintf(stringBuffer + off, "  <euY>%d</euY>", data->gnCtl_option);
  off += sprintf(stringBuffer + off, "  <hQe>%d</hQe>", data->gnRL_option);
    if ( data->maxOperatingPower != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->maxOperatingPower));
    if ( data->scheduledInterval != NULL )
      off += emberExiXmlShortTagsSprintfStructRandomizedDateTimeInterval(stringBuffer, off, (data->scheduledInterval));
    if ( data->Status_option != NULL )
      off += emberExiXmlShortTagsSprintfStructStatus(stringBuffer, off, (data->Status_option));
    if ( data->targetPowerFactor != NULL )
      off += emberExiXmlShortTagsSprintfStructPowerFactor(stringBuffer, off, (data->targetPowerFactor));
  off += sprintf(stringBuffer + off, "  <EUx>%d</EUx>", data->varSupportMode);
  off += sprintf(stringBuffer + off, "</qgE>");
  EXI_DEBUG("End of sprintXML: DERControl, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERControlList(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MEn");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERControl_count; i++ )
    if ( data->DERControl_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDERControl(stringBuffer, off, &(data->DERControl_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MEn>");
  EXI_DEBUG("End of sprintXML: DERControlList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargerListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargerListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Wxl");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Wxl>");
  EXI_DEBUG("End of sprintXML: ChargerListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextMessage(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessage *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessage, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<hkt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime);
  off += sprintf(stringBuffer + off, "  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceCategory.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceCategory>");
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <nei>%d</nei>", data->messageLength);
  off += sprintf(stringBuffer + off, "  <vhL>%s</vhL>", data->originator);
  off += sprintf(stringBuffer + off, "  <PIT>%d</PIT>", data->priority);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status);
  off += sprintf(stringBuffer + off, "  <OwR>%s</OwR>", data->textMessage);
  off += sprintf(stringBuffer + off, "</hkt>");
  EXI_DEBUG("End of sprintXML: TextMessage, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextMessageList(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessageList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<nxA");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TextMessage_count; i++ )
    if ( data->TextMessage_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTextMessage(stringBuffer, off, &(data->TextMessage_array[i]));
  }
  off += sprintf(stringBuffer + off, "</nxA>");
  EXI_DEBUG("End of sprintXML: TextMessageList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EQU");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</EQU>");
  EXI_DEBUG("End of sprintXML: EndDeviceLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceSupplierLink(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplierLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MCF");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</MCF>");
  EXI_DEBUG("End of sprintXML: ServiceSupplierLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSignature(int8u *stringBuffer, int offset, EmberExiGeneratedSignature *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Signature, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<GQe");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <iUh>%d</iUh>", data->algorithm);
  off += sprintf(stringBuffer + off, "  <tBq>%s</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</GQe>");
  EXI_DEBUG("End of sprintXML: Signature, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDocument(int8u *stringBuffer, int offset, EmberExiGeneratedDocument *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Document, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cAV");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <KEc>%s</KEc>", data->category_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</cAV>");
  EXI_DEBUG("End of sprintXML: Document, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponse(int8u *stringBuffer, int offset, EmberExiGeneratedResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Response, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MIa");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <KEc>%s</KEc>", data->category_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "</MIa>");
  EXI_DEBUG("End of sprintXML: Response, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YFg");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Response_count; i++ )
    if ( data->Response_array != NULL )
      off += emberExiXmlShortTagsSprintfStructResponse(stringBuffer, off, &(data->Response_array[i]));
  }
  off += sprintf(stringBuffer + off, "</YFg>");
  EXI_DEBUG("End of sprintXML: ResponseList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupportedLocale(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocale *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocale, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eYS");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <HML>%s</HML>", data->locale);
  off += sprintf(stringBuffer + off, "</eYS>");
  EXI_DEBUG("End of sprintXML: SupportedLocale, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceSupplierList(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplierList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oik");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ServiceSupplier_count; i++ )
    if ( data->ServiceSupplier_array != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplier(stringBuffer, off, &(data->ServiceSupplier_array[i]));
  }
  off += sprintf(stringBuffer + off, "</oik>");
  EXI_DEBUG("End of sprintXML: ServiceSupplierList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscription(int8u *stringBuffer, int offset, EmberExiGeneratedSubscription *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Subscription, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<jaU");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->Condition_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCondition(stringBuffer, off, (data->Condition_option));
  off += sprintf(stringBuffer + off, "  <DRy>%d</DRy>", data->limit);
  off += sprintf(stringBuffer + off, "  <RfB>%s</RfB>", data->newResourceURI_option);
  off += sprintf(stringBuffer + off, "  <gkd>%s</gkd>", data->pushURI);
  off += sprintf(stringBuffer + off, "  <pCh>%s</pCh>", data->resource);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status);
  off += sprintf(stringBuffer + off, "</jaU>");
  EXI_DEBUG("End of sprintXML: Subscription, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<utb");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</utb>");
  EXI_DEBUG("End of sprintXML: ResponseListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MoW");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReading(stringBuffer, off, &(data->Reading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MoW>");
  EXI_DEBUG("End of sprintXML: ReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PHl");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PHl>");
  EXI_DEBUG("End of sprintXML: DeviceStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oDe");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</oDe>");
  EXI_DEBUG("End of sprintXML: FileListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRegistrationLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RegistrationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<imY");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</imY>");
  EXI_DEBUG("End of sprintXML: RegistrationLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDevice(int8u *stringBuffer, int offset, EmberExiGeneratedEndDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<txO");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>");
  { int16u i;
    for ( i=0; i<data->category_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->category_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</category>");
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->EndDeviceGroupListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceGroupListLink(stringBuffer, off, (data->EndDeviceGroupListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->LoadShedAvailabilityListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLoadShedAvailabilityListLink(stringBuffer, off, (data->LoadShedAvailabilityListLink_option));
    if ( data->RegistrationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRegistrationLink(stringBuffer, off, (data->RegistrationLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSubscriptionListLink(stringBuffer, off, (data->SubscriptionListLink_option));
  off += sprintf(stringBuffer + off, "</txO>");
  EXI_DEBUG("End of sprintXML: EndDevice, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<olC");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDevice_count; i++ )
    if ( data->EndDevice_array != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDevice(stringBuffer, off, &(data->EndDevice_array[i]));
  }
  off += sprintf(stringBuffer + off, "</olC>");
  EXI_DEBUG("End of sprintXML: EndDeviceList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideList(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverrideList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UgW");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->SupplyInterruptionOverride_count; i++ )
    if ( data->SupplyInterruptionOverride_array != NULL )
      off += emberExiXmlShortTagsSprintfStructSupplyInterruptionOverride(stringBuffer, off, &(data->SupplyInterruptionOverride_array[i]));
  }
  off += sprintf(stringBuffer + off, "</UgW>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverrideList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xxs");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</xxs>");
  EXI_DEBUG("End of sprintXML: TariffProfileListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<lSK");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</lSK>");
  EXI_DEBUG("End of sprintXML: TimeTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRateComponent(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PEa");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ActiveTimeTariffIntervalListLink != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveTimeTariffIntervalListLink(stringBuffer, off, (data->ActiveTimeTariffIntervalListLink));
  off += sprintf(stringBuffer + off, "  <YKP>%d</YKP>", data->powerLimit_option);
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
    if ( data->TimeTariffIntervalListLink != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeTariffIntervalListLink(stringBuffer, off, (data->TimeTariffIntervalListLink));
  off += sprintf(stringBuffer + off, "</PEa>");
  EXI_DEBUG("End of sprintXML: RateComponent, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRateComponentList(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<GrK");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->RateComponent_count; i++ )
    if ( data->RateComponent_array != NULL )
      off += emberExiXmlShortTagsSprintfStructRateComponent(stringBuffer, off, &(data->RateComponent_array[i]));
  }
  off += sprintf(stringBuffer + off, "</GrK>");
  EXI_DEBUG("End of sprintXML: RateComponentList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kYn");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</kYn>");
  EXI_DEBUG("End of sprintXML: ProjectionReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFile(int8u *stringBuffer, int offset, EmberExiGeneratedFile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: File, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bIS");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VQN>%s</VQN>", data->fileURI);
  off += sprintf(stringBuffer + off, "  <MSI>%d</MSI>", data->Size);
  off += sprintf(stringBuffer + off, "  <Type>");
  { int16u i;
    for ( i=0; i<data->Type.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->Type.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</Type>");
  off += sprintf(stringBuffer + off, "</bIS>");
  EXI_DEBUG("End of sprintXML: File, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDrResponse(int8u *stringBuffer, int offset, EmberExiGeneratedDrResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DrResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<voF");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <KEc>%s</KEc>", data->category_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSignature(stringBuffer, off, (data->Signature_option));
    if ( data->DutyCycle_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDutyCycle(stringBuffer, off, (data->DutyCycle_option));
  { int16u i;
    for ( i=0; i<data->Offset_count; i++ )
    if ( data->Offset_array != NULL )
      off += emberExiXmlShortTagsSprintfStructOffset(stringBuffer, off, &(data->Offset_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <Syy>%d</Syy>", data->overrideDuration);
    if ( data->SetPoint_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSetPoint(stringBuffer, off, (data->SetPoint_option));
  off += sprintf(stringBuffer + off, "</voF>");
  EXI_DEBUG("End of sprintXML: DrResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfile(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfile, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<rWD");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <RfI>%s</RfI>", data->rateCode_option);
    if ( data->RateComponentListLink != NULL )
      off += emberExiXmlShortTagsSprintfStructRateComponentListLink(stringBuffer, off, (data->RateComponentListLink));
  off += sprintf(stringBuffer + off, "</rWD>");
  EXI_DEBUG("End of sprintXML: TariffProfile, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPowerConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedPowerConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerConfiguration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CnP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mbJ>%d</mbJ>", data->batteryInstallTime_option);
  off += sprintf(stringBuffer + off, "  <amA>%d</amA>", data->lowChargeThreshold_option);
  off += sprintf(stringBuffer + off, "</CnP>");
  EXI_DEBUG("End of sprintXML: PowerConfiguration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedTimeConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeConfiguration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<mRq");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dstEndRule>");
  { int16u i;
    for ( i=0; i<data->dstEndRule.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->dstEndRule.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</dstEndRule>");
  off += sprintf(stringBuffer + off, "  <MHd>%d</MHd>", data->dstOffset);
  off += sprintf(stringBuffer + off, "  <dstStartRule>");
  { int16u i;
    for ( i=0; i<data->dstStartRule.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->dstStartRule.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</dstStartRule>");
  off += sprintf(stringBuffer + off, "  <KdJ>%d</KdJ>", data->tzOffset);
  off += sprintf(stringBuffer + off, "</mRq>");
  EXI_DEBUG("End of sprintXML: TimeConfiguration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Configuration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OKp");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <HML>%s</HML>", data->locale);
    if ( data->PowerConfiguration_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPowerConfiguration(stringBuffer, off, (data->PowerConfiguration_option));
    if ( data->TimeConfiguration_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeConfiguration(stringBuffer, off, (data->TimeConfiguration_option));
  off += sprintf(stringBuffer + off, "  <OPD>%s</OPD>", data->userDeviceName);
  off += sprintf(stringBuffer + off, "</OKp>");
  EXI_DEBUG("End of sprintXML: Configuration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessageListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ylg");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Ylg>");
  EXI_DEBUG("End of sprintXML: TextMessageListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceCapabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FGr");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FGr>");
  EXI_DEBUG("End of sprintXML: DeviceCapabilityLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReading(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Xyb");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</Xyb>");
  EXI_DEBUG("End of sprintXML: TargetReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vwx");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TargetReading_count; i++ )
    if ( data->TargetReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTargetReading(stringBuffer, off, &(data->TargetReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</vwx>");
  EXI_DEBUG("End of sprintXML: TargetReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupportedLocaleListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocaleListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Hpm");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Hpm>");
  EXI_DEBUG("End of sprintXML: SupportedLocaleListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceInformation(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceInformation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<yAl");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <gUID>");
  { int16u i;
    for ( i=0; i<data->gUID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->gUID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</gUID>");
  off += sprintf(stringBuffer + off, "  <KMh>%d</KMh>", data->mfDate);
  off += sprintf(stringBuffer + off, "  <hRg>%s</hRg>", data->mfHwVer);
  off += sprintf(stringBuffer + off, "  <eAd>%d</eAd>", data->mfID);
  off += sprintf(stringBuffer + off, "  <epb>%s</epb>", data->mfInfo_option);
  off += sprintf(stringBuffer + off, "  <Kee>%s</Kee>", data->mfModel);
  off += sprintf(stringBuffer + off, "  <HtP>%s</HtP>", data->mfSerNum);
  off += sprintf(stringBuffer + off, "  <QdW>%d</QdW>", data->primaryPower);
  off += sprintf(stringBuffer + off, "  <bbT>%d</bbT>", data->secondaryPower);
    if ( data->SupportedLocaleListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSupportedLocaleListLink(stringBuffer, off, (data->SupportedLocaleListLink_option));
  off += sprintf(stringBuffer + off, "  <nXk>%d</nXk>", data->swActTime);
  off += sprintf(stringBuffer + off, "  <TGb>%s</TGb>", data->swVer);
  off += sprintf(stringBuffer + off, "</yAl>");
  EXI_DEBUG("End of sprintXML: DeviceInformation, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRegistrationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RegistrationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ddx");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Ddx>");
  EXI_DEBUG("End of sprintXML: RegistrationListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMessagingProgram(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MfO");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveTextMessageListLink(stringBuffer, off, (data->ActiveTextMessageListLink_option));
  off += sprintf(stringBuffer + off, "  <HML>%s</HML>", data->locale);
    if ( data->TextMessageListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTextMessageListLink(stringBuffer, off, (data->TextMessageListLink_option));
  off += sprintf(stringBuffer + off, "</MfO>");
  EXI_DEBUG("End of sprintXML: MessagingProgram, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<yMN");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MeterReading_count; i++ )
    if ( data->MeterReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMeterReading(stringBuffer, off, &(data->MeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</yMN>");
  EXI_DEBUG("End of sprintXML: MeterReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditRegister(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegister *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegister, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TmI");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->creditAmount != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->creditAmount));
  off += sprintf(stringBuffer + off, "  <KDM>%d</KDM>", data->creditType_option);
  off += sprintf(stringBuffer + off, "  <ISX>%d</ISX>", data->effectiveTime);
  off += sprintf(stringBuffer + off, "  <EYh>%s</EYh>", data->token);
  off += sprintf(stringBuffer + off, "</TmI>");
  EXI_DEBUG("End of sprintXML: CreditRegister, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditRegisterList(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegisterList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FBY");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->CreditRegister_count; i++ )
    if ( data->CreditRegister_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCreditRegister(stringBuffer, off, &(data->CreditRegister_array[i]));
  }
  off += sprintf(stringBuffer + off, "</FBY>");
  EXI_DEBUG("End of sprintXML: CreditRegisterList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMessagingProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Yra");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MessagingProgram_count; i++ )
    if ( data->MessagingProgram_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMessagingProgram(stringBuffer, off, &(data->MessagingProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Yra>");
  EXI_DEBUG("End of sprintXML: MessagingProgramList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructHistoricalReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Sop");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Sop>");
  EXI_DEBUG("End of sprintXML: HistoricalReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<rer");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</rer>");
  EXI_DEBUG("End of sprintXML: UsagePointLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupportedLocaleList(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocaleList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QXt");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->SupportedLocale_count; i++ )
    if ( data->SupportedLocale_array != NULL )
      off += emberExiXmlShortTagsSprintfStructSupportedLocale(stringBuffer, off, &(data->SupportedLocale_array[i]));
  }
  off += sprintf(stringBuffer + off, "</QXt>");
  EXI_DEBUG("End of sprintXML: SupportedLocaleList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepaymentList(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<XNq");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Prepayment_count; i++ )
    if ( data->Prepayment_array != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepayment(stringBuffer, off, &(data->Prepayment_array[i]));
  }
  off += sprintf(stringBuffer + off, "</XNq>");
  EXI_DEBUG("End of sprintXML: PrepaymentList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Beh");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Beh>");
  EXI_DEBUG("End of sprintXML: ChargeListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfileList(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<rGd");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TariffProfile_count; i++ )
    if ( data->TariffProfile_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfile(stringBuffer, off, &(data->TariffProfile_array[i]));
  }
  off += sprintf(stringBuffer + off, "</rGd>");
  EXI_DEBUG("End of sprintXML: TariffProfileList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingTypeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingTypeListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Wqk");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Wqk>");
  EXI_DEBUG("End of sprintXML: ReadingTypeListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTemperature(int8u *stringBuffer, int offset, EmberExiGeneratedTemperature *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Temperature, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cAg");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <egE>%d</egE>", data->subject);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <tBq>%d</tBq>", data->value);
  off += sprintf(stringBuffer + off, "</cAg>");
  EXI_DEBUG("End of sprintXML: Temperature, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPriceResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BdM");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <KEc>%s</KEc>", data->category_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "</BdM>");
  EXI_DEBUG("End of sprintXML: PriceResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepayOperationStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayOperationStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gNQ");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->creditTypeChange_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCreditTypeChange(stringBuffer, off, (data->creditTypeChange_option));
  off += sprintf(stringBuffer + off, "  <gqB>%d</gqB>", data->creditTypeInUse_option);
    if ( data->serviceChange_option != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceChange(stringBuffer, off, (data->serviceChange_option));
  off += sprintf(stringBuffer + off, "  <Xrq>%d</Xrq>", data->serviceStatus);
  off += sprintf(stringBuffer + off, "</gNQ>");
  EXI_DEBUG("End of sprintXML: PrepayOperationStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPowerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FaJ");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lMx>%d</lMx>", data->batteryStatus);
  off += sprintf(stringBuffer + off, "  <Gvd>%d</Gvd>", data->currentPowerSource);
  off += sprintf(stringBuffer + off, "  <eCL>%d</eCL>", data->estimatedChargeRemaining_option);
  off += sprintf(stringBuffer + off, "  <tGB>%d</tGB>", data->estimatedTimeRemaining_option);
  off += sprintf(stringBuffer + off, "  <uSE>%d</uSE>", data->timeOnBattery_option);
  off += sprintf(stringBuffer + off, "</FaJ>");
  EXI_DEBUG("End of sprintXML: PowerStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<chF");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <pxd>%d</pxd>", data->changedTime);
  off += sprintf(stringBuffer + off, "  <LLQ>%d</LLQ>", data->onCount_option);
  off += sprintf(stringBuffer + off, "  <rAO>%d</rAO>", data->opState_option);
  off += sprintf(stringBuffer + off, "  <qMq>%d</qMq>", data->opTime_option);
  { int16u i;
    for ( i=0; i<data->Temperature_count; i++ )
    if ( data->Temperature_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTemperature(stringBuffer, off, &(data->Temperature_array[i]));
  }
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
  off += sprintf(stringBuffer + off, "</chF>");
  EXI_DEBUG("End of sprintXML: DeviceStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCharge(int8u *stringBuffer, int offset, EmberExiGeneratedCharge *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Charge, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Lcx");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "  <Gvc>%d</Gvc>", data->kind_option);
  off += sprintf(stringBuffer + off, "</Lcx>");
  EXI_DEBUG("End of sprintXML: Charge, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructChargeList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Cmq");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Charge_count; i++ )
    if ( data->Charge_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCharge(stringBuffer, off, &(data->Charge_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Cmq>");
  EXI_DEBUG("End of sprintXML: ChargeList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLoadShedAvailabilityList(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailabilityList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<isI");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->LoadShedAvailability_count; i++ )
    if ( data->LoadShedAvailability_array != NULL )
      off += emberExiXmlShortTagsSprintfStructLoadShedAvailability(stringBuffer, off, &(data->LoadShedAvailability_array[i]));
  }
  off += sprintf(stringBuffer + off, "</isI>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailabilityList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileList(int8u *stringBuffer, int offset, EmberExiGeneratedFileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xdQ");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->File_count; i++ )
    if ( data->File_array != NULL )
      off += emberExiXmlShortTagsSprintfStructFile(stringBuffer, off, &(data->File_array[i]));
  }
  off += sprintf(stringBuffer + off, "</xdQ>");
  EXI_DEBUG("End of sprintXML: FileList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceControlList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<nxe");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDeviceControl_count; i++ )
    if ( data->EndDeviceControl_array != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceControl(stringBuffer, off, &(data->EndDeviceControl_array[i]));
  }
  off += sprintf(stringBuffer + off, "</nxe>");
  EXI_DEBUG("End of sprintXML: EndDeviceControlList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextResponse(int8u *stringBuffer, int offset, EmberExiGeneratedTextResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ylV");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <KEc>%s</KEc>", data->category_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "</ylV>");
  EXI_DEBUG("End of sprintXML: TextResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveProjectionReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveProjectionReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CbT");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CbT>");
  EXI_DEBUG("End of sprintXML: ActiveProjectionReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTargetReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTargetReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<jsq");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</jsq>");
  EXI_DEBUG("End of sprintXML: ActiveTargetReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAccount(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccount *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccount, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Yyc");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <KEc>%s</KEc>", data->category_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->ActiveProjectionReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveProjectionReadingListLink(stringBuffer, off, (data->ActiveProjectionReadingListLink_option));
    if ( data->ActiveTargetReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveTargetReadingListLink(stringBuffer, off, (data->ActiveTargetReadingListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->ChargeListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructChargeListLink(stringBuffer, off, (data->ChargeListLink_option));
  off += sprintf(stringBuffer + off, "  <kHj>%d</kHj>", data->currency_option);
    if ( data->HistoricalReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructHistoricalReadingListLink(stringBuffer, off, (data->HistoricalReadingListLink_option));
    if ( data->ProjectionReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructProjectionReadingListLink(stringBuffer, off, (data->ProjectionReadingListLink_option));
    if ( data->TargetReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTargetReadingListLink(stringBuffer, off, (data->TargetReadingListLink_option));
  off += sprintf(stringBuffer + off, "</Yyc>");
  EXI_DEBUG("End of sprintXML: CustomerAccount, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oWd");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERProgram_count; i++ )
    if ( data->DERProgram_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDERProgram(stringBuffer, off, &(data->DERProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</oWd>");
  EXI_DEBUG("End of sprintXML: DERProgramList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepayResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<aSq");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <KEc>%s</KEc>", data->category_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <QQY>%d</QQY>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "  <jcL>%d</jcL>", data->creditTypeApplied);
  off += sprintf(stringBuffer + off, "  <oKk>%d</oKk>", data->serviceStatusApplied);
  off += sprintf(stringBuffer + off, "</aSq>");
  EXI_DEBUG("End of sprintXML: PrepayResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNetworkStatus(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NetworkStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<toP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "</toP>");
  EXI_DEBUG("End of sprintXML: NetworkStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingPeriod(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriod *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriod, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AyT");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
    if ( data->interval_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval_option));
  off += sprintf(stringBuffer + off, "</AyT>");
  EXI_DEBUG("End of sprintXML: BillingPeriod, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingPeriodList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriodList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NlG");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->BillingPeriod_count; i++ )
    if ( data->BillingPeriod_array != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingPeriod(stringBuffer, off, &(data->BillingPeriod_array[i]));
  }
  off += sprintf(stringBuffer + off, "</NlG>");
  EXI_DEBUG("End of sprintXML: BillingPeriodList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePointList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ocw");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MirrorUsagePoint_count; i++ )
    if ( data->MirrorUsagePoint_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorUsagePoint(stringBuffer, off, &(data->MirrorUsagePoint_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Ocw>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePointList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActivation(int8u *stringBuffer, int offset, EmberExiGeneratedActivation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Activation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NcK");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lfT>%d</lfT>", data->activateTime);
  off += sprintf(stringBuffer + off, "  <pbo>%d</pbo>", data->currentTime);
  off += sprintf(stringBuffer + off, "</NcK>");
  EXI_DEBUG("End of sprintXML: Activation, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAccountBalance(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalance *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountBalance, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oiw");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->availableCredit != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->availableCredit));
  off += sprintf(stringBuffer + off, "  <bWt>%d</bWt>", data->creditStatus_option);
    if ( data->emergencyCredit_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->emergencyCredit_option));
  off += sprintf(stringBuffer + off, "  <tlh>%d</tlh>", data->emergencyCreditStatus_option);
  off += sprintf(stringBuffer + off, "</oiw>");
  EXI_DEBUG("End of sprintXML: AccountBalance, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructHistoricalReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<JdM");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->HistoricalReading_count; i++ )
    if ( data->HistoricalReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructHistoricalReading(stringBuffer, off, &(data->HistoricalReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</JdM>");
  EXI_DEBUG("End of sprintXML: HistoricalReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRegistration(int8u *stringBuffer, int offset, EmberExiGeneratedRegistration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Registration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bny");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <ofw>%s</ofw>", data->description_option);
  off += sprintf(stringBuffer + off, "  <xpm>%d</xpm>", data->installCode);
  off += sprintf(stringBuffer + off, "</bny>");
  EXI_DEBUG("End of sprintXML: Registration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNotificationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NotificationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SQq");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SQq>");
  EXI_DEBUG("End of sprintXML: NotificationListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iUl");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</iUl>");
  EXI_DEBUG("End of sprintXML: MeterReadingLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscriptionList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bAG");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Subscription_count; i++ )
    if ( data->Subscription_array != NULL )
      off += emberExiXmlShortTagsSprintfStructSubscription(stringBuffer, off, &(data->Subscription_array[i]));
  }
  off += sprintf(stringBuffer + off, "</bAG>");
  EXI_DEBUG("End of sprintXML: SubscriptionList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceGroupList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceGroupList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ErE");
  off += sprintf(stringBuffer + off, "  dnV=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  PNg=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "bkF=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  BCu=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  CUm=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  CHI=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDeviceGroup_count; i++ )
    if ( data->EndDeviceGroup_array != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceGroup(stringBuffer, off, &(data->EndDeviceGroup_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ErE>");
  EXI_DEBUG("End of sprintXML: EndDeviceGroupList, off=%d\n", off);
  return off - offset;
}
// Compression test functions
void emberExiCompressionTestStructResource(int8u useShortTags) {
  EmberExiGeneratedResource data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedResource));
  emExiPopulateStruct(emberExiResourceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructResource(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructResource(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructResource(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Resource, emberExiResourceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Resource, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIdentifiedObject(int8u useShortTags) {
  EmberExiGeneratedIdentifiedObject data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIdentifiedObject));
  emExiPopulateStruct(emberExiIdentifiedObjectStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIdentifiedObject(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIdentifiedObject(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIdentifiedObject(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IdentifiedObject, emberExiIdentifiedObjectStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IdentifiedObject, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructServiceSupplier(int8u useShortTags) {
  EmberExiGeneratedServiceSupplier data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedServiceSupplier));
  emExiPopulateStruct(emberExiServiceSupplierStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructServiceSupplier(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructServiceSupplier(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructServiceSupplier(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ServiceSupplier, emberExiServiceSupplierStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ServiceSupplier, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCreditTypeChange(int8u useShortTags) {
  EmberExiGeneratedCreditTypeChange data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCreditTypeChange));
  emExiPopulateStruct(emberExiCreditTypeChangeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCreditTypeChange(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCreditTypeChange(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCreditTypeChange(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CreditTypeChange, emberExiCreditTypeChangeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CreditTypeChange, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructListLink(int8u useShortTags) {
  EmberExiGeneratedListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedListLink));
  emExiPopulateStruct(emberExiListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ListLink, emberExiListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveChargeReservationListLink(int8u useShortTags) {
  EmberExiGeneratedActiveChargeReservationListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveChargeReservationListLink));
  emExiPopulateStruct(emberExiActiveChargeReservationListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveChargeReservationListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveChargeReservationListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveChargeReservationListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveChargeReservationListLink, emberExiActiveChargeReservationListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveChargeReservationListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveDERControlListLink(int8u useShortTags) {
  EmberExiGeneratedActiveDERControlListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveDERControlListLink));
  emExiPopulateStruct(emberExiActiveDERControlListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveDERControlListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveDERControlListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveDERControlListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveDERControlListLink, emberExiActiveDERControlListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveDERControlListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargeReservationListLink(int8u useShortTags) {
  EmberExiGeneratedChargeReservationListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargeReservationListLink));
  emExiPopulateStruct(emberExiChargeReservationListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargeReservationListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargeReservationListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargeReservationListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargeReservationListLink, emberExiChargeReservationListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargeReservationListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERControlListLink(int8u useShortTags) {
  EmberExiGeneratedDERControlListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERControlListLink));
  emExiPopulateStruct(emberExiDERControlListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERControlListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERControlListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERControlListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERControlListLink, emberExiDERControlListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERControlListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERProgram(int8u useShortTags) {
  EmberExiGeneratedDERProgram data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERProgram));
  emExiPopulateStruct(emberExiDERProgramStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERProgram(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERProgram(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERProgram(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERProgram, emberExiDERProgramStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERProgram, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructAmpereHour(int8u useShortTags) {
  EmberExiGeneratedAmpereHour data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAmpereHour));
  emExiPopulateStruct(emberExiAmpereHourStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAmpereHour(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAmpereHour(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAmpereHour(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AmpereHour, emberExiAmpereHourStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AmpereHour, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLink(int8u useShortTags) {
  EmberExiGeneratedLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLink));
  emExiPopulateStruct(emberExiLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Link, emberExiLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Link, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERStatusLink(int8u useShortTags) {
  EmberExiGeneratedDERStatusLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERStatusLink));
  emExiPopulateStruct(emberExiDERStatusLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERStatusLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERStatusLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERStatusLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERStatusLink, emberExiDERStatusLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERStatusLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructVoltage(int8u useShortTags) {
  EmberExiGeneratedVoltage data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedVoltage));
  emExiPopulateStruct(emberExiVoltageStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructVoltage(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructVoltage(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructVoltage(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Voltage, emberExiVoltageStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Voltage, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActivePower(int8u useShortTags) {
  EmberExiGeneratedActivePower data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActivePower));
  emExiPopulateStruct(emberExiActivePowerStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActivePower(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActivePower(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActivePower, emberExiActivePowerStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActivePower, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDER(int8u useShortTags) {
  EmberExiGeneratedDER data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDER));
  emExiPopulateStruct(emberExiDERStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDER(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDER(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDER(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DER, emberExiDERStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DER, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingQuality(int8u useShortTags) {
  EmberExiGeneratedReadingQuality data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingQuality));
  emExiPopulateStruct(emberExiReadingQualityStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingQuality(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingQuality(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingQuality(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingQuality, emberExiReadingQualityStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingQuality, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReading(int8u useShortTags) {
  EmberExiGeneratedReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReading));
  emExiPopulateStruct(emberExiReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Reading, emberExiReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Reading, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructNotification(int8u useShortTags) {
  EmberExiGeneratedNotification data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNotification));
  emExiPopulateStruct(emberExiNotificationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNotification(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNotification(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNotification(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Notification, emberExiNotificationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Notification, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructList(int8u useShortTags) {
  EmberExiGeneratedList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedList));
  emExiPopulateStruct(emberExiListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_List, emberExiListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("List, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructNotificationList(int8u useShortTags) {
  EmberExiGeneratedNotificationList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNotificationList));
  emExiPopulateStruct(emberExiNotificationListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNotificationList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNotificationList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNotificationList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_NotificationList, emberExiNotificationListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("NotificationList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCustomerAccountLink(int8u useShortTags) {
  EmberExiGeneratedCustomerAccountLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCustomerAccountLink));
  emExiPopulateStruct(emberExiCustomerAccountLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCustomerAccountLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCustomerAccountLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCustomerAccountLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CustomerAccountLink, emberExiCustomerAccountLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CustomerAccountLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLoadShedAvailabilityListLink(int8u useShortTags) {
  EmberExiGeneratedLoadShedAvailabilityListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLoadShedAvailabilityListLink));
  emExiPopulateStruct(emberExiLoadShedAvailabilityListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLoadShedAvailabilityListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLoadShedAvailabilityListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLoadShedAvailabilityListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LoadShedAvailabilityListLink, emberExiLoadShedAvailabilityListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LoadShedAvailabilityListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMeterReadingListLink(int8u useShortTags) {
  EmberExiGeneratedMeterReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMeterReadingListLink));
  emExiPopulateStruct(emberExiMeterReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMeterReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMeterReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMeterReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MeterReadingListLink, emberExiMeterReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MeterReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPrepaymentLink(int8u useShortTags) {
  EmberExiGeneratedPrepaymentLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPrepaymentLink));
  emExiPopulateStruct(emberExiPrepaymentLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPrepaymentLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPrepaymentLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPrepaymentLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PrepaymentLink, emberExiPrepaymentLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PrepaymentLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructServiceCategory(int8u useShortTags) {
  EmberExiGeneratedServiceCategory data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedServiceCategory));
  emExiPopulateStruct(emberExiServiceCategoryStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructServiceCategory(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructServiceCategory(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructServiceCategory(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ServiceCategory, emberExiServiceCategoryStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ServiceCategory, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructUsagePointBase(int8u useShortTags) {
  EmberExiGeneratedUsagePointBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedUsagePointBase));
  emExiPopulateStruct(emberExiUsagePointBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructUsagePointBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructUsagePointBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructUsagePointBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_UsagePointBase, emberExiUsagePointBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("UsagePointBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructUsagePoint(int8u useShortTags) {
  EmberExiGeneratedUsagePoint data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedUsagePoint));
  emExiPopulateStruct(emberExiUsagePointStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructUsagePoint(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructUsagePoint(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructUsagePoint(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_UsagePoint, emberExiUsagePointStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("UsagePoint, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActivePowerChargeRate(int8u useShortTags) {
  EmberExiGeneratedActivePowerChargeRate data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActivePowerChargeRate));
  emExiPopulateStruct(emberExiActivePowerChargeRateStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActivePowerChargeRate(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActivePowerChargeRate(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActivePowerChargeRate(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActivePowerChargeRate, emberExiActivePowerChargeRateStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActivePowerChargeRate, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTargetReadingListLink(int8u useShortTags) {
  EmberExiGeneratedTargetReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTargetReadingListLink));
  emExiPopulateStruct(emberExiTargetReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTargetReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTargetReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTargetReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TargetReadingListLink, emberExiTargetReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TargetReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCost(int8u useShortTags) {
  EmberExiGeneratedCost data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCost));
  emExiPopulateStruct(emberExiCostStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCost(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCost(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCost(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Cost, emberExiCostStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Cost, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructConsumptionTariffInterval(int8u useShortTags) {
  EmberExiGeneratedConsumptionTariffInterval data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedConsumptionTariffInterval));
  emExiPopulateStruct(emberExiConsumptionTariffIntervalStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructConsumptionTariffInterval(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructConsumptionTariffInterval(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructConsumptionTariffInterval(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ConsumptionTariffInterval, emberExiConsumptionTariffIntervalStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ConsumptionTariffInterval, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDateTimeInterval(int8u useShortTags) {
  EmberExiGeneratedDateTimeInterval data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDateTimeInterval));
  emExiPopulateStruct(emberExiDateTimeIntervalStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDateTimeInterval(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDateTimeInterval(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DateTimeInterval, emberExiDateTimeIntervalStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DateTimeInterval, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRandomizedDateTimeInterval(int8u useShortTags) {
  EmberExiGeneratedRandomizedDateTimeInterval data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRandomizedDateTimeInterval));
  emExiPopulateStruct(emberExiRandomizedDateTimeIntervalStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRandomizedDateTimeInterval(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRandomizedDateTimeInterval(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRandomizedDateTimeInterval(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RandomizedDateTimeInterval, emberExiRandomizedDateTimeIntervalStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RandomizedDateTimeInterval, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTimeTariffInterval(int8u useShortTags) {
  EmberExiGeneratedTimeTariffInterval data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTimeTariffInterval));
  emExiPopulateStruct(emberExiTimeTariffIntervalStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTimeTariffInterval(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTimeTariffInterval(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTimeTariffInterval(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TimeTariffInterval, emberExiTimeTariffIntervalStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TimeTariffInterval, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructOffset(int8u useShortTags) {
  EmberExiGeneratedOffset data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedOffset));
  emExiPopulateStruct(emberExiOffsetStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructOffset(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructOffset(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructOffset(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Offset, emberExiOffsetStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Offset, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructBillingPeriodListLink(int8u useShortTags) {
  EmberExiGeneratedBillingPeriodListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingPeriodListLink));
  emExiPopulateStruct(emberExiBillingPeriodListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingPeriodListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingPeriodListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingPeriodListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingPeriodListLink, emberExiBillingPeriodListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingPeriodListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveTextMessageListLink(int8u useShortTags) {
  EmberExiGeneratedActiveTextMessageListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveTextMessageListLink));
  emExiPopulateStruct(emberExiActiveTextMessageListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveTextMessageListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveTextMessageListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveTextMessageListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveTextMessageListLink, emberExiActiveTextMessageListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveTextMessageListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargerLink(int8u useShortTags) {
  EmberExiGeneratedChargerLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargerLink));
  emExiPopulateStruct(emberExiChargerLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargerLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargerLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargerLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargerLink, emberExiChargerLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargerLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargeReservation(int8u useShortTags) {
  EmberExiGeneratedChargeReservation data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargeReservation));
  emExiPopulateStruct(emberExiChargeReservationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargeReservation(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargeReservation(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargeReservation(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargeReservation, emberExiChargeReservationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargeReservation, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargeReservationList(int8u useShortTags) {
  EmberExiGeneratedChargeReservationList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargeReservationList));
  emExiPopulateStruct(emberExiChargeReservationListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargeReservationList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargeReservationList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargeReservationList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargeReservationList, emberExiChargeReservationListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargeReservationList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveEndDeviceControlListLink(int8u useShortTags) {
  EmberExiGeneratedActiveEndDeviceControlListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveEndDeviceControlListLink));
  emExiPopulateStruct(emberExiActiveEndDeviceControlListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveEndDeviceControlListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveEndDeviceControlListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveEndDeviceControlListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveEndDeviceControlListLink, emberExiActiveEndDeviceControlListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveEndDeviceControlListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceControlListLink(int8u useShortTags) {
  EmberExiGeneratedEndDeviceControlListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceControlListLink));
  emExiPopulateStruct(emberExiEndDeviceControlListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceControlListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceControlListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceControlListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceControlListLink, emberExiEndDeviceControlListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceControlListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDemandResponseProgram(int8u useShortTags) {
  EmberExiGeneratedDemandResponseProgram data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDemandResponseProgram));
  emExiPopulateStruct(emberExiDemandResponseProgramStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDemandResponseProgram(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDemandResponseProgram(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDemandResponseProgram(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DemandResponseProgram, emberExiDemandResponseProgramStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DemandResponseProgram, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDemandResponseProgramList(int8u useShortTags) {
  EmberExiGeneratedDemandResponseProgramList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDemandResponseProgramList));
  emExiPopulateStruct(emberExiDemandResponseProgramListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDemandResponseProgramList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDemandResponseProgramList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDemandResponseProgramList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DemandResponseProgramList, emberExiDemandResponseProgramListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DemandResponseProgramList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERStatus(int8u useShortTags) {
  EmberExiGeneratedDERStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERStatus));
  emExiPopulateStruct(emberExiDERStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERStatus, emberExiDERStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTargetReduction(int8u useShortTags) {
  EmberExiGeneratedTargetReduction data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTargetReduction));
  emExiPopulateStruct(emberExiTargetReductionStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTargetReduction(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTargetReduction(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTargetReduction(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TargetReduction, emberExiTargetReductionStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TargetReduction, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLogEvent(int8u useShortTags) {
  EmberExiGeneratedLogEvent data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLogEvent));
  emExiPopulateStruct(emberExiLogEventStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLogEvent(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLogEvent(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLogEvent(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LogEvent, emberExiLogEventStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LogEvent, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLogEventList(int8u useShortTags) {
  EmberExiGeneratedLogEventList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLogEventList));
  emExiPopulateStruct(emberExiLogEventListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLogEventList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLogEventList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLogEventList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LogEventList, emberExiLogEventListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LogEventList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRateComponentListLink(int8u useShortTags) {
  EmberExiGeneratedRateComponentListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRateComponentListLink));
  emExiPopulateStruct(emberExiRateComponentListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRateComponentListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRateComponentListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRateComponentListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RateComponentListLink, emberExiRateComponentListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RateComponentListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERLink(int8u useShortTags) {
  EmberExiGeneratedDERLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERLink));
  emExiPopulateStruct(emberExiDERLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERLink, emberExiDERLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveTimeTariffIntervalListLink(int8u useShortTags) {
  EmberExiGeneratedActiveTimeTariffIntervalListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveTimeTariffIntervalListLink));
  emExiPopulateStruct(emberExiActiveTimeTariffIntervalListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveTimeTariffIntervalListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveTimeTariffIntervalListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveTimeTariffIntervalListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveTimeTariffIntervalListLink, emberExiActiveTimeTariffIntervalListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveTimeTariffIntervalListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTimeTariffIntervalList(int8u useShortTags) {
  EmberExiGeneratedTimeTariffIntervalList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTimeTariffIntervalList));
  emExiPopulateStruct(emberExiTimeTariffIntervalListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTimeTariffIntervalList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTimeTariffIntervalList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTimeTariffIntervalList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TimeTariffIntervalList, emberExiTimeTariffIntervalListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TimeTariffIntervalList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERListLink(int8u useShortTags) {
  EmberExiGeneratedDERListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERListLink));
  emExiPopulateStruct(emberExiDERListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERListLink, emberExiDERListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIntervalReading(int8u useShortTags) {
  EmberExiGeneratedIntervalReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIntervalReading));
  emExiPopulateStruct(emberExiIntervalReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIntervalReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIntervalReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIntervalReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IntervalReading, emberExiIntervalReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IntervalReading, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIntervalBlock(int8u useShortTags) {
  EmberExiGeneratedIntervalBlock data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIntervalBlock));
  emExiPopulateStruct(emberExiIntervalBlockStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIntervalBlock(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIntervalBlock(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIntervalBlock(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IntervalBlock, emberExiIntervalBlockStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IntervalBlock, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIntervalBlockList(int8u useShortTags) {
  EmberExiGeneratedIntervalBlockList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIntervalBlockList));
  emExiPopulateStruct(emberExiIntervalBlockListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIntervalBlockList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIntervalBlockList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIntervalBlockList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IntervalBlockList, emberExiIntervalBlockListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IntervalBlockList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructUsagePointListLink(int8u useShortTags) {
  EmberExiGeneratedUsagePointListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedUsagePointListLink));
  emExiPopulateStruct(emberExiUsagePointListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructUsagePointListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructUsagePointListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructUsagePointListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_UsagePointListLink, emberExiUsagePointListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("UsagePointListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingType(int8u useShortTags) {
  EmberExiGeneratedReadingType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingType));
  emExiPopulateStruct(emberExiReadingTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingType, emberExiReadingTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingTypeList(int8u useShortTags) {
  EmberExiGeneratedReadingTypeList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingTypeList));
  emExiPopulateStruct(emberExiReadingTypeListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingTypeList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingTypeList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingTypeList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingTypeList, emberExiReadingTypeListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingTypeList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTimeLink(int8u useShortTags) {
  EmberExiGeneratedTimeLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTimeLink));
  emExiPopulateStruct(emberExiTimeLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTimeLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTimeLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTimeLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TimeLink, emberExiTimeLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TimeLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMessagingProgramListLink(int8u useShortTags) {
  EmberExiGeneratedMessagingProgramListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMessagingProgramListLink));
  emExiPopulateStruct(emberExiMessagingProgramListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMessagingProgramListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMessagingProgramListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMessagingProgramListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MessagingProgramListLink, emberExiMessagingProgramListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MessagingProgramListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTime(int8u useShortTags) {
  EmberExiGeneratedTime data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTime));
  emExiPopulateStruct(emberExiTimeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTime(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTime(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTime(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Time, emberExiTimeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Time, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructUsagePointList(int8u useShortTags) {
  EmberExiGeneratedUsagePointList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedUsagePointList));
  emExiPopulateStruct(emberExiUsagePointListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructUsagePointList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructUsagePointList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructUsagePointList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_UsagePointList, emberExiUsagePointListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("UsagePointList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDutyCycle(int8u useShortTags) {
  EmberExiGeneratedDutyCycle data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDutyCycle));
  emExiPopulateStruct(emberExiDutyCycleStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDutyCycle(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDutyCycle(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDutyCycle(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DutyCycle, emberExiDutyCycleStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DutyCycle, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSetPoint(int8u useShortTags) {
  EmberExiGeneratedSetPoint data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSetPoint));
  emExiPopulateStruct(emberExiSetPointStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSetPoint(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSetPoint(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSetPoint(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SetPoint, emberExiSetPointStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SetPoint, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructStatus(int8u useShortTags) {
  EmberExiGeneratedStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedStatus));
  emExiPopulateStruct(emberExiStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Status, emberExiStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Status, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceControl(int8u useShortTags) {
  EmberExiGeneratedEndDeviceControl data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceControl));
  emExiPopulateStruct(emberExiEndDeviceControlStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceControl(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceControl(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceControl(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceControl, emberExiEndDeviceControlStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceControl, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSupplyInterruptionOverride(int8u useShortTags) {
  EmberExiGeneratedSupplyInterruptionOverride data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSupplyInterruptionOverride));
  emExiPopulateStruct(emberExiSupplyInterruptionOverrideStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSupplyInterruptionOverride(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSupplyInterruptionOverride(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSupplyInterruptionOverride(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SupplyInterruptionOverride, emberExiSupplyInterruptionOverrideStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SupplyInterruptionOverride, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveBillingPeriodListLink(int8u useShortTags) {
  EmberExiGeneratedActiveBillingPeriodListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveBillingPeriodListLink));
  emExiPopulateStruct(emberExiActiveBillingPeriodListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveBillingPeriodListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveBillingPeriodListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveBillingPeriodListLink, emberExiActiveBillingPeriodListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveBillingPeriodListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDemandResponseProgramListLink(int8u useShortTags) {
  EmberExiGeneratedDemandResponseProgramListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDemandResponseProgramListLink));
  emExiPopulateStruct(emberExiDemandResponseProgramListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDemandResponseProgramListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDemandResponseProgramListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DemandResponseProgramListLink, emberExiDemandResponseProgramListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DemandResponseProgramListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERProgramListLink(int8u useShortTags) {
  EmberExiGeneratedDERProgramListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERProgramListLink));
  emExiPopulateStruct(emberExiDERProgramListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERProgramListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERProgramListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERProgramListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERProgramListLink, emberExiDERProgramListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERProgramListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPrepaymentListLink(int8u useShortTags) {
  EmberExiGeneratedPrepaymentListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPrepaymentListLink));
  emExiPopulateStruct(emberExiPrepaymentListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPrepaymentListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPrepaymentListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPrepaymentListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PrepaymentListLink, emberExiPrepaymentListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PrepaymentListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTariffProfileLink(int8u useShortTags) {
  EmberExiGeneratedTariffProfileLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTariffProfileLink));
  emExiPopulateStruct(emberExiTariffProfileLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTariffProfileLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTariffProfileLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTariffProfileLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TariffProfileLink, emberExiTariffProfileLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TariffProfileLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructConfigurationLink(int8u useShortTags) {
  EmberExiGeneratedConfigurationLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedConfigurationLink));
  emExiPopulateStruct(emberExiConfigurationLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructConfigurationLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructConfigurationLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructConfigurationLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ConfigurationLink, emberExiConfigurationLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ConfigurationLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDeviceInformationLink(int8u useShortTags) {
  EmberExiGeneratedDeviceInformationLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDeviceInformationLink));
  emExiPopulateStruct(emberExiDeviceInformationLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDeviceInformationLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDeviceInformationLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDeviceInformationLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DeviceInformationLink, emberExiDeviceInformationLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DeviceInformationLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceGroupListLink(int8u useShortTags) {
  EmberExiGeneratedEndDeviceGroupListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceGroupListLink));
  emExiPopulateStruct(emberExiEndDeviceGroupListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceGroupListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceGroupListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceGroupListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceGroupListLink, emberExiEndDeviceGroupListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceGroupListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceListLink(int8u useShortTags) {
  EmberExiGeneratedEndDeviceListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceListLink));
  emExiPopulateStruct(emberExiEndDeviceListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceListLink, emberExiEndDeviceListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLogEventListLink(int8u useShortTags) {
  EmberExiGeneratedLogEventListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLogEventListLink));
  emExiPopulateStruct(emberExiLogEventListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLogEventListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLogEventListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLogEventListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LogEventListLink, emberExiLogEventListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LogEventListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMirrorUsagePointListLink(int8u useShortTags) {
  EmberExiGeneratedMirrorUsagePointListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMirrorUsagePointListLink));
  emExiPopulateStruct(emberExiMirrorUsagePointListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMirrorUsagePointListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMirrorUsagePointListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMirrorUsagePointListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MirrorUsagePointListLink, emberExiMirrorUsagePointListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MirrorUsagePointListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructNetworkStatusLink(int8u useShortTags) {
  EmberExiGeneratedNetworkStatusLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNetworkStatusLink));
  emExiPopulateStruct(emberExiNetworkStatusLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNetworkStatusLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNetworkStatusLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNetworkStatusLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_NetworkStatusLink, emberExiNetworkStatusLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("NetworkStatusLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPowerStatusLink(int8u useShortTags) {
  EmberExiGeneratedPowerStatusLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPowerStatusLink));
  emExiPopulateStruct(emberExiPowerStatusLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPowerStatusLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPowerStatusLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPowerStatusLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PowerStatusLink, emberExiPowerStatusLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PowerStatusLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSubscriptionListLink(int8u useShortTags) {
  EmberExiGeneratedSubscriptionListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSubscriptionListLink));
  emExiPopulateStruct(emberExiSubscriptionListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSubscriptionListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSubscriptionListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSubscriptionListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SubscriptionListLink, emberExiSubscriptionListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SubscriptionListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceGroup(int8u useShortTags) {
  EmberExiGeneratedEndDeviceGroup data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceGroup));
  emExiPopulateStruct(emberExiEndDeviceGroupStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceGroup(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceGroup(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceGroup(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceGroup, emberExiEndDeviceGroupStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceGroup, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDeviceCapability(int8u useShortTags) {
  EmberExiGeneratedDeviceCapability data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDeviceCapability));
  emExiPopulateStruct(emberExiDeviceCapabilityStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDeviceCapability(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDeviceCapability(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDeviceCapability(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DeviceCapability, emberExiDeviceCapabilityStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DeviceCapability, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFileStatus(int8u useShortTags) {
  EmberExiGeneratedFileStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFileStatus));
  emExiPopulateStruct(emberExiFileStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFileStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFileStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFileStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FileStatus, emberExiFileStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FileStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructAccountBalanceLink(int8u useShortTags) {
  EmberExiGeneratedAccountBalanceLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAccountBalanceLink));
  emExiPopulateStruct(emberExiAccountBalanceLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAccountBalanceLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAccountBalanceLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAccountBalanceLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AccountBalanceLink, emberExiAccountBalanceLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AccountBalanceLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveCreditRegisterListLink(int8u useShortTags) {
  EmberExiGeneratedActiveCreditRegisterListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveCreditRegisterListLink));
  emExiPopulateStruct(emberExiActiveCreditRegisterListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveCreditRegisterListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveCreditRegisterListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveCreditRegisterListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveCreditRegisterListLink, emberExiActiveCreditRegisterListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveCreditRegisterListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveSupplyInterruptionOverrideListLink(int8u useShortTags) {
  EmberExiGeneratedActiveSupplyInterruptionOverrideListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveSupplyInterruptionOverrideListLink));
  emExiPopulateStruct(emberExiActiveSupplyInterruptionOverrideListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveSupplyInterruptionOverrideListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveSupplyInterruptionOverrideListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveSupplyInterruptionOverrideListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveSupplyInterruptionOverrideListLink, emberExiActiveSupplyInterruptionOverrideListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveSupplyInterruptionOverrideListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRealEnergy(int8u useShortTags) {
  EmberExiGeneratedRealEnergy data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRealEnergy));
  emExiPopulateStruct(emberExiRealEnergyStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRealEnergy(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRealEnergy(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRealEnergy(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RealEnergy, emberExiRealEnergyStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RealEnergy, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructAccountingUnit(int8u useShortTags) {
  EmberExiGeneratedAccountingUnit data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAccountingUnit));
  emExiPopulateStruct(emberExiAccountingUnitStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAccountingUnit(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAccountingUnit(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AccountingUnit, emberExiAccountingUnitStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AccountingUnit, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCreditRegisterListLink(int8u useShortTags) {
  EmberExiGeneratedCreditRegisterListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCreditRegisterListLink));
  emExiPopulateStruct(emberExiCreditRegisterListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCreditRegisterListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCreditRegisterListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCreditRegisterListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CreditRegisterListLink, emberExiCreditRegisterListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CreditRegisterListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPrepayOperationStatusLink(int8u useShortTags) {
  EmberExiGeneratedPrepayOperationStatusLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPrepayOperationStatusLink));
  emExiPopulateStruct(emberExiPrepayOperationStatusLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPrepayOperationStatusLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPrepayOperationStatusLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPrepayOperationStatusLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PrepayOperationStatusLink, emberExiPrepayOperationStatusLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PrepayOperationStatusLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSupplyInterruptionOverrideListLink(int8u useShortTags) {
  EmberExiGeneratedSupplyInterruptionOverrideListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSupplyInterruptionOverrideListLink));
  emExiPopulateStruct(emberExiSupplyInterruptionOverrideListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSupplyInterruptionOverrideListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSupplyInterruptionOverrideListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SupplyInterruptionOverrideListLink, emberExiSupplyInterruptionOverrideListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SupplyInterruptionOverrideListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPrepayment(int8u useShortTags) {
  EmberExiGeneratedPrepayment data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPrepayment));
  emExiPopulateStruct(emberExiPrepaymentStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPrepayment(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPrepayment(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPrepayment(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Prepayment, emberExiPrepaymentStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Prepayment, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargerStatus(int8u useShortTags) {
  EmberExiGeneratedChargerStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargerStatus));
  emExiPopulateStruct(emberExiChargerStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargerStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargerStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargerStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargerStatus, emberExiChargerStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargerStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCharger(int8u useShortTags) {
  EmberExiGeneratedCharger data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCharger));
  emExiPopulateStruct(emberExiChargerStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCharger(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCharger(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCharger(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Charger, emberExiChargerStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Charger, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCondition(int8u useShortTags) {
  EmberExiGeneratedCondition data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCondition));
  emExiPopulateStruct(emberExiConditionStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCondition(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCondition(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCondition(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Condition, emberExiConditionStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Condition, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMeterReadingBase(int8u useShortTags) {
  EmberExiGeneratedMeterReadingBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMeterReadingBase));
  emExiPopulateStruct(emberExiMeterReadingBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMeterReadingBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMeterReadingBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMeterReadingBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MeterReadingBase, emberExiMeterReadingBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MeterReadingBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMirrorMeterReading(int8u useShortTags) {
  EmberExiGeneratedMirrorMeterReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMirrorMeterReading));
  emExiPopulateStruct(emberExiMirrorMeterReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMirrorMeterReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMirrorMeterReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMirrorMeterReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MirrorMeterReading, emberExiMirrorMeterReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MirrorMeterReading, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMirrorUsagePoint(int8u useShortTags) {
  EmberExiGeneratedMirrorUsagePoint data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMirrorUsagePoint));
  emExiPopulateStruct(emberExiMirrorUsagePointStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMirrorUsagePoint(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMirrorUsagePoint(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMirrorUsagePoint(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MirrorUsagePoint, emberExiMirrorUsagePointStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MirrorUsagePoint, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructServiceChange(int8u useShortTags) {
  EmberExiGeneratedServiceChange data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedServiceChange));
  emExiPopulateStruct(emberExiServiceChangeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructServiceChange(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructServiceChange(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructServiceChange(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ServiceChange, emberExiServiceChangeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ServiceChange, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIntervalBlockListLink(int8u useShortTags) {
  EmberExiGeneratedIntervalBlockListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIntervalBlockListLink));
  emExiPopulateStruct(emberExiIntervalBlockListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIntervalBlockListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIntervalBlockListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIntervalBlockListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IntervalBlockListLink, emberExiIntervalBlockListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IntervalBlockListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingLink(int8u useShortTags) {
  EmberExiGeneratedReadingLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingLink));
  emExiPopulateStruct(emberExiReadingLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingLink, emberExiReadingLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingTypeLink(int8u useShortTags) {
  EmberExiGeneratedReadingTypeLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingTypeLink));
  emExiPopulateStruct(emberExiReadingTypeLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingTypeLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingTypeLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingTypeLink, emberExiReadingTypeLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingTypeLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMeterReading(int8u useShortTags) {
  EmberExiGeneratedMeterReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMeterReading));
  emExiPopulateStruct(emberExiMeterReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMeterReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMeterReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMeterReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MeterReading, emberExiMeterReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MeterReading, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructProjectionReading(int8u useShortTags) {
  EmberExiGeneratedProjectionReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedProjectionReading));
  emExiPopulateStruct(emberExiProjectionReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructProjectionReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructProjectionReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructProjectionReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ProjectionReading, emberExiProjectionReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ProjectionReading, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructProjectionReadingList(int8u useShortTags) {
  EmberExiGeneratedProjectionReadingList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedProjectionReadingList));
  emExiPopulateStruct(emberExiProjectionReadingListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructProjectionReadingList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructProjectionReadingList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructProjectionReadingList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ProjectionReadingList, emberExiProjectionReadingListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ProjectionReadingList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructHistoricalReading(int8u useShortTags) {
  EmberExiGeneratedHistoricalReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedHistoricalReading));
  emExiPopulateStruct(emberExiHistoricalReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructHistoricalReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructHistoricalReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructHistoricalReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_HistoricalReading, emberExiHistoricalReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("HistoricalReading, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDemandResponseProgramLink(int8u useShortTags) {
  EmberExiGeneratedDemandResponseProgramLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDemandResponseProgramLink));
  emExiPopulateStruct(emberExiDemandResponseProgramLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDemandResponseProgramLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDemandResponseProgramLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDemandResponseProgramLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DemandResponseProgramLink, emberExiDemandResponseProgramLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DemandResponseProgramLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLoadShedAvailability(int8u useShortTags) {
  EmberExiGeneratedLoadShedAvailability data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLoadShedAvailability));
  emExiPopulateStruct(emberExiLoadShedAvailabilityStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLoadShedAvailability(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLoadShedAvailability(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLoadShedAvailability(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LoadShedAvailability, emberExiLoadShedAvailabilityStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LoadShedAvailability, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPowerFactor(int8u useShortTags) {
  EmberExiGeneratedPowerFactor data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPowerFactor));
  emExiPopulateStruct(emberExiPowerFactorStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPowerFactor(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPowerFactor(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPowerFactor(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PowerFactor, emberExiPowerFactorStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PowerFactor, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERControl(int8u useShortTags) {
  EmberExiGeneratedDERControl data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERControl));
  emExiPopulateStruct(emberExiDERControlStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERControl(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERControl(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERControl(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERControl, emberExiDERControlStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERControl, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERControlList(int8u useShortTags) {
  EmberExiGeneratedDERControlList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERControlList));
  emExiPopulateStruct(emberExiDERControlListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERControlList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERControlList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERControlList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERControlList, emberExiDERControlListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERControlList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargerListLink(int8u useShortTags) {
  EmberExiGeneratedChargerListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargerListLink));
  emExiPopulateStruct(emberExiChargerListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargerListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargerListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargerListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargerListLink, emberExiChargerListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargerListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTextMessage(int8u useShortTags) {
  EmberExiGeneratedTextMessage data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTextMessage));
  emExiPopulateStruct(emberExiTextMessageStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTextMessage(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTextMessage(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTextMessage(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TextMessage, emberExiTextMessageStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TextMessage, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTextMessageList(int8u useShortTags) {
  EmberExiGeneratedTextMessageList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTextMessageList));
  emExiPopulateStruct(emberExiTextMessageListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTextMessageList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTextMessageList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTextMessageList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TextMessageList, emberExiTextMessageListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TextMessageList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceLink(int8u useShortTags) {
  EmberExiGeneratedEndDeviceLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceLink));
  emExiPopulateStruct(emberExiEndDeviceLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceLink, emberExiEndDeviceLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructServiceSupplierLink(int8u useShortTags) {
  EmberExiGeneratedServiceSupplierLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedServiceSupplierLink));
  emExiPopulateStruct(emberExiServiceSupplierLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructServiceSupplierLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructServiceSupplierLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructServiceSupplierLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ServiceSupplierLink, emberExiServiceSupplierLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ServiceSupplierLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSignature(int8u useShortTags) {
  EmberExiGeneratedSignature data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSignature));
  emExiPopulateStruct(emberExiSignatureStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSignature(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSignature(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSignature(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Signature, emberExiSignatureStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Signature, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDocument(int8u useShortTags) {
  EmberExiGeneratedDocument data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDocument));
  emExiPopulateStruct(emberExiDocumentStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDocument(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDocument(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDocument(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Document, emberExiDocumentStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Document, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructResponse(int8u useShortTags) {
  EmberExiGeneratedResponse data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedResponse));
  emExiPopulateStruct(emberExiResponseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructResponse(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructResponse(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructResponse(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Response, emberExiResponseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Response, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructResponseList(int8u useShortTags) {
  EmberExiGeneratedResponseList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedResponseList));
  emExiPopulateStruct(emberExiResponseListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructResponseList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructResponseList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructResponseList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ResponseList, emberExiResponseListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ResponseList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSupportedLocale(int8u useShortTags) {
  EmberExiGeneratedSupportedLocale data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSupportedLocale));
  emExiPopulateStruct(emberExiSupportedLocaleStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSupportedLocale(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSupportedLocale(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSupportedLocale(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SupportedLocale, emberExiSupportedLocaleStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SupportedLocale, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructServiceSupplierList(int8u useShortTags) {
  EmberExiGeneratedServiceSupplierList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedServiceSupplierList));
  emExiPopulateStruct(emberExiServiceSupplierListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructServiceSupplierList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructServiceSupplierList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructServiceSupplierList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ServiceSupplierList, emberExiServiceSupplierListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ServiceSupplierList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSubscription(int8u useShortTags) {
  EmberExiGeneratedSubscription data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSubscription));
  emExiPopulateStruct(emberExiSubscriptionStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSubscription(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSubscription(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSubscription(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Subscription, emberExiSubscriptionStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Subscription, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructResponseListLink(int8u useShortTags) {
  EmberExiGeneratedResponseListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedResponseListLink));
  emExiPopulateStruct(emberExiResponseListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructResponseListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructResponseListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructResponseListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ResponseListLink, emberExiResponseListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ResponseListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingList(int8u useShortTags) {
  EmberExiGeneratedReadingList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingList));
  emExiPopulateStruct(emberExiReadingListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingList, emberExiReadingListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDeviceStatusLink(int8u useShortTags) {
  EmberExiGeneratedDeviceStatusLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDeviceStatusLink));
  emExiPopulateStruct(emberExiDeviceStatusLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDeviceStatusLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDeviceStatusLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDeviceStatusLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DeviceStatusLink, emberExiDeviceStatusLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DeviceStatusLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFileListLink(int8u useShortTags) {
  EmberExiGeneratedFileListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFileListLink));
  emExiPopulateStruct(emberExiFileListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFileListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFileListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFileListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FileListLink, emberExiFileListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FileListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRegistrationLink(int8u useShortTags) {
  EmberExiGeneratedRegistrationLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRegistrationLink));
  emExiPopulateStruct(emberExiRegistrationLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRegistrationLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRegistrationLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRegistrationLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RegistrationLink, emberExiRegistrationLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RegistrationLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDevice(int8u useShortTags) {
  EmberExiGeneratedEndDevice data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDevice));
  emExiPopulateStruct(emberExiEndDeviceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDevice(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDevice(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDevice(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDevice, emberExiEndDeviceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDevice, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceList(int8u useShortTags) {
  EmberExiGeneratedEndDeviceList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceList));
  emExiPopulateStruct(emberExiEndDeviceListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceList, emberExiEndDeviceListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSupplyInterruptionOverrideList(int8u useShortTags) {
  EmberExiGeneratedSupplyInterruptionOverrideList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSupplyInterruptionOverrideList));
  emExiPopulateStruct(emberExiSupplyInterruptionOverrideListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSupplyInterruptionOverrideList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSupplyInterruptionOverrideList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SupplyInterruptionOverrideList, emberExiSupplyInterruptionOverrideListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SupplyInterruptionOverrideList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTariffProfileListLink(int8u useShortTags) {
  EmberExiGeneratedTariffProfileListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTariffProfileListLink));
  emExiPopulateStruct(emberExiTariffProfileListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTariffProfileListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTariffProfileListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTariffProfileListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TariffProfileListLink, emberExiTariffProfileListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TariffProfileListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTimeTariffIntervalListLink(int8u useShortTags) {
  EmberExiGeneratedTimeTariffIntervalListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTimeTariffIntervalListLink));
  emExiPopulateStruct(emberExiTimeTariffIntervalListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTimeTariffIntervalListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTimeTariffIntervalListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTimeTariffIntervalListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TimeTariffIntervalListLink, emberExiTimeTariffIntervalListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TimeTariffIntervalListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRateComponent(int8u useShortTags) {
  EmberExiGeneratedRateComponent data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRateComponent));
  emExiPopulateStruct(emberExiRateComponentStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRateComponent(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRateComponent(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRateComponent(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RateComponent, emberExiRateComponentStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RateComponent, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRateComponentList(int8u useShortTags) {
  EmberExiGeneratedRateComponentList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRateComponentList));
  emExiPopulateStruct(emberExiRateComponentListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRateComponentList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRateComponentList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRateComponentList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RateComponentList, emberExiRateComponentListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RateComponentList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructProjectionReadingListLink(int8u useShortTags) {
  EmberExiGeneratedProjectionReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedProjectionReadingListLink));
  emExiPopulateStruct(emberExiProjectionReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructProjectionReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructProjectionReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructProjectionReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ProjectionReadingListLink, emberExiProjectionReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ProjectionReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFile(int8u useShortTags) {
  EmberExiGeneratedFile data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFile));
  emExiPopulateStruct(emberExiFileStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFile(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFile(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFile(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_File, emberExiFileStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("File, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDrResponse(int8u useShortTags) {
  EmberExiGeneratedDrResponse data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDrResponse));
  emExiPopulateStruct(emberExiDrResponseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDrResponse(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDrResponse(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDrResponse(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DrResponse, emberExiDrResponseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DrResponse, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTariffProfile(int8u useShortTags) {
  EmberExiGeneratedTariffProfile data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTariffProfile));
  emExiPopulateStruct(emberExiTariffProfileStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTariffProfile(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTariffProfile(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTariffProfile(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TariffProfile, emberExiTariffProfileStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TariffProfile, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPowerConfiguration(int8u useShortTags) {
  EmberExiGeneratedPowerConfiguration data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPowerConfiguration));
  emExiPopulateStruct(emberExiPowerConfigurationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPowerConfiguration(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPowerConfiguration(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPowerConfiguration(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PowerConfiguration, emberExiPowerConfigurationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PowerConfiguration, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTimeConfiguration(int8u useShortTags) {
  EmberExiGeneratedTimeConfiguration data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTimeConfiguration));
  emExiPopulateStruct(emberExiTimeConfigurationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTimeConfiguration(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTimeConfiguration(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTimeConfiguration(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TimeConfiguration, emberExiTimeConfigurationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TimeConfiguration, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructConfiguration(int8u useShortTags) {
  EmberExiGeneratedConfiguration data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedConfiguration));
  emExiPopulateStruct(emberExiConfigurationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructConfiguration(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructConfiguration(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructConfiguration(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Configuration, emberExiConfigurationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Configuration, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTextMessageListLink(int8u useShortTags) {
  EmberExiGeneratedTextMessageListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTextMessageListLink));
  emExiPopulateStruct(emberExiTextMessageListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTextMessageListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTextMessageListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTextMessageListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TextMessageListLink, emberExiTextMessageListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TextMessageListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDeviceCapabilityLink(int8u useShortTags) {
  EmberExiGeneratedDeviceCapabilityLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDeviceCapabilityLink));
  emExiPopulateStruct(emberExiDeviceCapabilityLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDeviceCapabilityLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDeviceCapabilityLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDeviceCapabilityLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DeviceCapabilityLink, emberExiDeviceCapabilityLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DeviceCapabilityLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTargetReading(int8u useShortTags) {
  EmberExiGeneratedTargetReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTargetReading));
  emExiPopulateStruct(emberExiTargetReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTargetReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTargetReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTargetReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TargetReading, emberExiTargetReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TargetReading, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTargetReadingList(int8u useShortTags) {
  EmberExiGeneratedTargetReadingList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTargetReadingList));
  emExiPopulateStruct(emberExiTargetReadingListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTargetReadingList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTargetReadingList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTargetReadingList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TargetReadingList, emberExiTargetReadingListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TargetReadingList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSupportedLocaleListLink(int8u useShortTags) {
  EmberExiGeneratedSupportedLocaleListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSupportedLocaleListLink));
  emExiPopulateStruct(emberExiSupportedLocaleListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSupportedLocaleListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSupportedLocaleListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSupportedLocaleListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SupportedLocaleListLink, emberExiSupportedLocaleListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SupportedLocaleListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDeviceInformation(int8u useShortTags) {
  EmberExiGeneratedDeviceInformation data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDeviceInformation));
  emExiPopulateStruct(emberExiDeviceInformationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDeviceInformation(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDeviceInformation(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDeviceInformation(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DeviceInformation, emberExiDeviceInformationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DeviceInformation, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRegistrationListLink(int8u useShortTags) {
  EmberExiGeneratedRegistrationListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRegistrationListLink));
  emExiPopulateStruct(emberExiRegistrationListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRegistrationListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRegistrationListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRegistrationListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RegistrationListLink, emberExiRegistrationListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RegistrationListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMessagingProgram(int8u useShortTags) {
  EmberExiGeneratedMessagingProgram data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMessagingProgram));
  emExiPopulateStruct(emberExiMessagingProgramStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMessagingProgram(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMessagingProgram(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMessagingProgram(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MessagingProgram, emberExiMessagingProgramStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MessagingProgram, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMeterReadingList(int8u useShortTags) {
  EmberExiGeneratedMeterReadingList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMeterReadingList));
  emExiPopulateStruct(emberExiMeterReadingListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMeterReadingList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMeterReadingList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMeterReadingList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MeterReadingList, emberExiMeterReadingListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MeterReadingList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCreditRegister(int8u useShortTags) {
  EmberExiGeneratedCreditRegister data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCreditRegister));
  emExiPopulateStruct(emberExiCreditRegisterStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCreditRegister(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCreditRegister(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCreditRegister(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CreditRegister, emberExiCreditRegisterStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CreditRegister, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCreditRegisterList(int8u useShortTags) {
  EmberExiGeneratedCreditRegisterList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCreditRegisterList));
  emExiPopulateStruct(emberExiCreditRegisterListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCreditRegisterList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCreditRegisterList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCreditRegisterList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CreditRegisterList, emberExiCreditRegisterListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CreditRegisterList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMessagingProgramList(int8u useShortTags) {
  EmberExiGeneratedMessagingProgramList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMessagingProgramList));
  emExiPopulateStruct(emberExiMessagingProgramListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMessagingProgramList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMessagingProgramList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMessagingProgramList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MessagingProgramList, emberExiMessagingProgramListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MessagingProgramList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructHistoricalReadingListLink(int8u useShortTags) {
  EmberExiGeneratedHistoricalReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedHistoricalReadingListLink));
  emExiPopulateStruct(emberExiHistoricalReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructHistoricalReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructHistoricalReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructHistoricalReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_HistoricalReadingListLink, emberExiHistoricalReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("HistoricalReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructUsagePointLink(int8u useShortTags) {
  EmberExiGeneratedUsagePointLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedUsagePointLink));
  emExiPopulateStruct(emberExiUsagePointLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructUsagePointLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructUsagePointLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructUsagePointLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_UsagePointLink, emberExiUsagePointLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("UsagePointLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSupportedLocaleList(int8u useShortTags) {
  EmberExiGeneratedSupportedLocaleList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSupportedLocaleList));
  emExiPopulateStruct(emberExiSupportedLocaleListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSupportedLocaleList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSupportedLocaleList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSupportedLocaleList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SupportedLocaleList, emberExiSupportedLocaleListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SupportedLocaleList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPrepaymentList(int8u useShortTags) {
  EmberExiGeneratedPrepaymentList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPrepaymentList));
  emExiPopulateStruct(emberExiPrepaymentListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPrepaymentList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPrepaymentList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPrepaymentList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PrepaymentList, emberExiPrepaymentListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PrepaymentList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargeListLink(int8u useShortTags) {
  EmberExiGeneratedChargeListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargeListLink));
  emExiPopulateStruct(emberExiChargeListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargeListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargeListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargeListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargeListLink, emberExiChargeListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargeListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTariffProfileList(int8u useShortTags) {
  EmberExiGeneratedTariffProfileList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTariffProfileList));
  emExiPopulateStruct(emberExiTariffProfileListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTariffProfileList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTariffProfileList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTariffProfileList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TariffProfileList, emberExiTariffProfileListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TariffProfileList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingTypeListLink(int8u useShortTags) {
  EmberExiGeneratedReadingTypeListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingTypeListLink));
  emExiPopulateStruct(emberExiReadingTypeListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingTypeListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingTypeListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingTypeListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingTypeListLink, emberExiReadingTypeListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingTypeListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTemperature(int8u useShortTags) {
  EmberExiGeneratedTemperature data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTemperature));
  emExiPopulateStruct(emberExiTemperatureStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTemperature(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTemperature(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTemperature(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Temperature, emberExiTemperatureStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Temperature, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPriceResponse(int8u useShortTags) {
  EmberExiGeneratedPriceResponse data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPriceResponse));
  emExiPopulateStruct(emberExiPriceResponseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPriceResponse(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPriceResponse(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPriceResponse(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PriceResponse, emberExiPriceResponseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PriceResponse, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPrepayOperationStatus(int8u useShortTags) {
  EmberExiGeneratedPrepayOperationStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPrepayOperationStatus));
  emExiPopulateStruct(emberExiPrepayOperationStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPrepayOperationStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPrepayOperationStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPrepayOperationStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PrepayOperationStatus, emberExiPrepayOperationStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PrepayOperationStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPowerStatus(int8u useShortTags) {
  EmberExiGeneratedPowerStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPowerStatus));
  emExiPopulateStruct(emberExiPowerStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPowerStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPowerStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPowerStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PowerStatus, emberExiPowerStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PowerStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDeviceStatus(int8u useShortTags) {
  EmberExiGeneratedDeviceStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDeviceStatus));
  emExiPopulateStruct(emberExiDeviceStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDeviceStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDeviceStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDeviceStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DeviceStatus, emberExiDeviceStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DeviceStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCharge(int8u useShortTags) {
  EmberExiGeneratedCharge data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCharge));
  emExiPopulateStruct(emberExiChargeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCharge(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCharge(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCharge(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Charge, emberExiChargeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Charge, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructChargeList(int8u useShortTags) {
  EmberExiGeneratedChargeList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedChargeList));
  emExiPopulateStruct(emberExiChargeListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructChargeList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructChargeList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructChargeList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ChargeList, emberExiChargeListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ChargeList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLoadShedAvailabilityList(int8u useShortTags) {
  EmberExiGeneratedLoadShedAvailabilityList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLoadShedAvailabilityList));
  emExiPopulateStruct(emberExiLoadShedAvailabilityListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLoadShedAvailabilityList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLoadShedAvailabilityList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLoadShedAvailabilityList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LoadShedAvailabilityList, emberExiLoadShedAvailabilityListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LoadShedAvailabilityList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFileList(int8u useShortTags) {
  EmberExiGeneratedFileList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFileList));
  emExiPopulateStruct(emberExiFileListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFileList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFileList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFileList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FileList, emberExiFileListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FileList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceControlList(int8u useShortTags) {
  EmberExiGeneratedEndDeviceControlList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceControlList));
  emExiPopulateStruct(emberExiEndDeviceControlListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceControlList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceControlList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceControlList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceControlList, emberExiEndDeviceControlListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceControlList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructTextResponse(int8u useShortTags) {
  EmberExiGeneratedTextResponse data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedTextResponse));
  emExiPopulateStruct(emberExiTextResponseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructTextResponse(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructTextResponse(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructTextResponse(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_TextResponse, emberExiTextResponseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("TextResponse, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveProjectionReadingListLink(int8u useShortTags) {
  EmberExiGeneratedActiveProjectionReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveProjectionReadingListLink));
  emExiPopulateStruct(emberExiActiveProjectionReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveProjectionReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveProjectionReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveProjectionReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveProjectionReadingListLink, emberExiActiveProjectionReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveProjectionReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActiveTargetReadingListLink(int8u useShortTags) {
  EmberExiGeneratedActiveTargetReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveTargetReadingListLink));
  emExiPopulateStruct(emberExiActiveTargetReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveTargetReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveTargetReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveTargetReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveTargetReadingListLink, emberExiActiveTargetReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveTargetReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCustomerAccount(int8u useShortTags) {
  EmberExiGeneratedCustomerAccount data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCustomerAccount));
  emExiPopulateStruct(emberExiCustomerAccountStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCustomerAccount(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCustomerAccount(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCustomerAccount(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CustomerAccount, emberExiCustomerAccountStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CustomerAccount, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERProgramList(int8u useShortTags) {
  EmberExiGeneratedDERProgramList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERProgramList));
  emExiPopulateStruct(emberExiDERProgramListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERProgramList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERProgramList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERProgramList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERProgramList, emberExiDERProgramListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERProgramList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPrepayResponse(int8u useShortTags) {
  EmberExiGeneratedPrepayResponse data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPrepayResponse));
  emExiPopulateStruct(emberExiPrepayResponseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPrepayResponse(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPrepayResponse(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPrepayResponse(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PrepayResponse, emberExiPrepayResponseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PrepayResponse, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructNetworkStatus(int8u useShortTags) {
  EmberExiGeneratedNetworkStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNetworkStatus));
  emExiPopulateStruct(emberExiNetworkStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNetworkStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNetworkStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNetworkStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_NetworkStatus, emberExiNetworkStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("NetworkStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructBillingPeriod(int8u useShortTags) {
  EmberExiGeneratedBillingPeriod data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingPeriod));
  emExiPopulateStruct(emberExiBillingPeriodStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingPeriod(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingPeriod(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingPeriod(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingPeriod, emberExiBillingPeriodStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingPeriod, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructBillingPeriodList(int8u useShortTags) {
  EmberExiGeneratedBillingPeriodList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingPeriodList));
  emExiPopulateStruct(emberExiBillingPeriodListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingPeriodList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingPeriodList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingPeriodList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingPeriodList, emberExiBillingPeriodListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingPeriodList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMirrorUsagePointList(int8u useShortTags) {
  EmberExiGeneratedMirrorUsagePointList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMirrorUsagePointList));
  emExiPopulateStruct(emberExiMirrorUsagePointListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMirrorUsagePointList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMirrorUsagePointList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMirrorUsagePointList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MirrorUsagePointList, emberExiMirrorUsagePointListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MirrorUsagePointList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructActivation(int8u useShortTags) {
  EmberExiGeneratedActivation data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActivation));
  emExiPopulateStruct(emberExiActivationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActivation(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActivation(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActivation(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Activation, emberExiActivationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Activation, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructAccountBalance(int8u useShortTags) {
  EmberExiGeneratedAccountBalance data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAccountBalance));
  emExiPopulateStruct(emberExiAccountBalanceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAccountBalance(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAccountBalance(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAccountBalance(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AccountBalance, emberExiAccountBalanceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AccountBalance, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructHistoricalReadingList(int8u useShortTags) {
  EmberExiGeneratedHistoricalReadingList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedHistoricalReadingList));
  emExiPopulateStruct(emberExiHistoricalReadingListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructHistoricalReadingList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructHistoricalReadingList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructHistoricalReadingList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_HistoricalReadingList, emberExiHistoricalReadingListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("HistoricalReadingList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRegistration(int8u useShortTags) {
  EmberExiGeneratedRegistration data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRegistration));
  emExiPopulateStruct(emberExiRegistrationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRegistration(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRegistration(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRegistration(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Registration, emberExiRegistrationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Registration, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructNotificationListLink(int8u useShortTags) {
  EmberExiGeneratedNotificationListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNotificationListLink));
  emExiPopulateStruct(emberExiNotificationListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNotificationListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNotificationListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNotificationListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_NotificationListLink, emberExiNotificationListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("NotificationListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMeterReadingLink(int8u useShortTags) {
  EmberExiGeneratedMeterReadingLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMeterReadingLink));
  emExiPopulateStruct(emberExiMeterReadingLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMeterReadingLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMeterReadingLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMeterReadingLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MeterReadingLink, emberExiMeterReadingLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MeterReadingLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSubscriptionList(int8u useShortTags) {
  EmberExiGeneratedSubscriptionList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSubscriptionList));
  emExiPopulateStruct(emberExiSubscriptionListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSubscriptionList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSubscriptionList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSubscriptionList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SubscriptionList, emberExiSubscriptionListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SubscriptionList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEndDeviceGroupList(int8u useShortTags) {
  EmberExiGeneratedEndDeviceGroupList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEndDeviceGroupList));
  emExiPopulateStruct(emberExiEndDeviceGroupListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEndDeviceGroupList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEndDeviceGroupList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEndDeviceGroupList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EndDeviceGroupList, emberExiEndDeviceGroupListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EndDeviceGroupList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


// Master compression unit test function
void emberCompressionReport(void) {
emberExiCompressionTestStructResource(exiUnitTestUseShortTags);
emberExiCompressionTestStructIdentifiedObject(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceSupplier(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditTypeChange(exiUnitTestUseShortTags);
emberExiCompressionTestStructListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveChargeReservationListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveDERControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargeReservationListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERProgram(exiUnitTestUseShortTags);
emberExiCompressionTestStructAmpereHour(exiUnitTestUseShortTags);
emberExiCompressionTestStructLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructVoltage(exiUnitTestUseShortTags);
emberExiCompressionTestStructActivePower(exiUnitTestUseShortTags);
emberExiCompressionTestStructDER(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingQuality(exiUnitTestUseShortTags);
emberExiCompressionTestStructReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructNotification(exiUnitTestUseShortTags);
emberExiCompressionTestStructList(exiUnitTestUseShortTags);
emberExiCompressionTestStructNotificationList(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAccountLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructLoadShedAvailabilityListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepaymentLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceCategory(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePoint(exiUnitTestUseShortTags);
emberExiCompressionTestStructActivePowerChargeRate(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructCost(exiUnitTestUseShortTags);
emberExiCompressionTestStructConsumptionTariffInterval(exiUnitTestUseShortTags);
emberExiCompressionTestStructDateTimeInterval(exiUnitTestUseShortTags);
emberExiCompressionTestStructRandomizedDateTimeInterval(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeTariffInterval(exiUnitTestUseShortTags);
emberExiCompressionTestStructOffset(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingPeriodListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveTextMessageListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargerLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargeReservation(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargeReservationList(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveEndDeviceControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgram(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgramList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReduction(exiUnitTestUseShortTags);
emberExiCompressionTestStructLogEvent(exiUnitTestUseShortTags);
emberExiCompressionTestStructLogEventList(exiUnitTestUseShortTags);
emberExiCompressionTestStructRateComponentListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveTimeTariffIntervalListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeTariffIntervalList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructIntervalReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructIntervalBlock(exiUnitTestUseShortTags);
emberExiCompressionTestStructIntervalBlockList(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingType(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingTypeList(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMessagingProgramListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTime(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDutyCycle(exiUnitTestUseShortTags);
emberExiCompressionTestStructSetPoint(exiUnitTestUseShortTags);
emberExiCompressionTestStructStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceControl(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupplyInterruptionOverride(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveBillingPeriodListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgramListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERProgramListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepaymentListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfileLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructConfigurationLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceInformationLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceGroupListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructLogEventListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorUsagePointListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructNetworkStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPowerStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscriptionListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceGroup(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceCapability(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructAccountBalanceLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveCreditRegisterListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveSupplyInterruptionOverrideListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructRealEnergy(exiUnitTestUseShortTags);
emberExiCompressionTestStructAccountingUnit(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditRegisterListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepayOperationStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupplyInterruptionOverrideListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepayment(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargerStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructCharger(exiUnitTestUseShortTags);
emberExiCompressionTestStructCondition(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorMeterReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorUsagePoint(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceChange(exiUnitTestUseShortTags);
emberExiCompressionTestStructIntervalBlockListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingTypeLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructProjectionReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructProjectionReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructHistoricalReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgramLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructLoadShedAvailability(exiUnitTestUseShortTags);
emberExiCompressionTestStructPowerFactor(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERControl(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERControlList(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargerListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextMessage(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextMessageList(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceSupplierLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSignature(exiUnitTestUseShortTags);
emberExiCompressionTestStructDocument(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponseList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupportedLocale(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceSupplierList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscription(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponseListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructRegistrationLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDevice(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupplyInterruptionOverrideList(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfileListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeTariffIntervalListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructRateComponent(exiUnitTestUseShortTags);
emberExiCompressionTestStructRateComponentList(exiUnitTestUseShortTags);
emberExiCompressionTestStructProjectionReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFile(exiUnitTestUseShortTags);
emberExiCompressionTestStructDrResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfile(exiUnitTestUseShortTags);
emberExiCompressionTestStructPowerConfiguration(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeConfiguration(exiUnitTestUseShortTags);
emberExiCompressionTestStructConfiguration(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextMessageListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceCapabilityLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupportedLocaleListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceInformation(exiUnitTestUseShortTags);
emberExiCompressionTestStructRegistrationListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMessagingProgram(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditRegister(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditRegisterList(exiUnitTestUseShortTags);
emberExiCompressionTestStructMessagingProgramList(exiUnitTestUseShortTags);
emberExiCompressionTestStructHistoricalReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupportedLocaleList(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepaymentList(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargeListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfileList(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingTypeListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTemperature(exiUnitTestUseShortTags);
emberExiCompressionTestStructPriceResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepayOperationStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructPowerStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructCharge(exiUnitTestUseShortTags);
emberExiCompressionTestStructChargeList(exiUnitTestUseShortTags);
emberExiCompressionTestStructLoadShedAvailabilityList(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileList(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceControlList(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveProjectionReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveTargetReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAccount(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERProgramList(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepayResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructNetworkStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingPeriod(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingPeriodList(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorUsagePointList(exiUnitTestUseShortTags);
emberExiCompressionTestStructActivation(exiUnitTestUseShortTags);
emberExiCompressionTestStructAccountBalance(exiUnitTestUseShortTags);
emberExiCompressionTestStructHistoricalReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructRegistration(exiUnitTestUseShortTags);
emberExiCompressionTestStructNotificationListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscriptionList(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceGroupList(exiUnitTestUseShortTags);
}


