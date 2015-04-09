// This file is generated. Please do not edit manually.
// 
//

// This file contains the generated API that is NOT intended to run on the node, but PC only.

#include PLATFORM_HEADER
#include "app/util/exi/exi.h"
#include "app/util/exi/exi-internal.h"
#include "stack/core/log.h"
#include "afv6-exi-types.h"
#include "afv6-exi-qname.h"
#include "stdlib.h"


// Sprintf functions
int emberExiXmlSprintfStructResource(int8u *stringBuffer, int offset, EmberExiGeneratedResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Resource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Resource");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Resource>");
  EXI_DEBUG("End of sprintXML: Resource, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IdentifiedObject");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "</IdentifiedObject>");
  EXI_DEBUG("End of sprintXML: IdentifiedObject, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructServiceSupplier(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplier *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplier, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ServiceSupplier");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <email>%s</email>", data->email_option);
  off += sprintf(stringBuffer + off, "  <phone>%s</phone>", data->phone_option);
  off += sprintf(stringBuffer + off, "  <providerID>%d</providerID>", data->providerID_option);
  off += sprintf(stringBuffer + off, "  <web>%s</web>", data->web_option);
  off += sprintf(stringBuffer + off, "</ServiceSupplier>");
  EXI_DEBUG("End of sprintXML: ServiceSupplier, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCreditTypeChange(int8u *stringBuffer, int offset, EmberExiGeneratedCreditTypeChange *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditTypeChange, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CreditTypeChange");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <newType>%d</newType>", data->newType);
  off += sprintf(stringBuffer + off, "  <startTime>%d</startTime>", data->startTime);
  off += sprintf(stringBuffer + off, "</CreditTypeChange>");
  EXI_DEBUG("End of sprintXML: CreditTypeChange, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructListLink(int8u *stringBuffer, int offset, EmberExiGeneratedListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ListLink>");
  EXI_DEBUG("End of sprintXML: ListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveChargeReservationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveChargeReservationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveChargeReservationListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveChargeReservationListLink>");
  EXI_DEBUG("End of sprintXML: ActiveChargeReservationListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveDERControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveDERControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveDERControlListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveDERControlListLink>");
  EXI_DEBUG("End of sprintXML: ActiveDERControlListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeReservationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargeReservationListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ChargeReservationListLink>");
  EXI_DEBUG("End of sprintXML: ChargeReservationListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERControlListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERControlListLink>");
  EXI_DEBUG("End of sprintXML: DERControlListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERProgram");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ActiveChargeReservationListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveChargeReservationListLink(stringBuffer, off, (data->ActiveChargeReservationListLink_option));
    if ( data->ActiveDERControlListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveDERControlListLink(stringBuffer, off, (data->ActiveDERControlListLink_option));
    if ( data->ChargeReservationListLink_option != NULL )
      off += emberExiXmlSprintfStructChargeReservationListLink(stringBuffer, off, (data->ChargeReservationListLink_option));
    if ( data->DERControlListLink_option != NULL )
      off += emberExiXmlSprintfStructDERControlListLink(stringBuffer, off, (data->DERControlListLink_option));
  off += sprintf(stringBuffer + off, "  <primacy>%d</primacy>", data->primacy);
  off += sprintf(stringBuffer + off, "</DERProgram>");
  EXI_DEBUG("End of sprintXML: DERProgram, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAmpereHour(int8u *stringBuffer, int offset, EmberExiGeneratedAmpereHour *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AmpereHour, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AmpereHour");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</AmpereHour>");
  EXI_DEBUG("End of sprintXML: AmpereHour, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLink(int8u *stringBuffer, int offset, EmberExiGeneratedLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Link, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Link");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Link>");
  EXI_DEBUG("End of sprintXML: Link, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERStatusLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERStatusLink>");
  EXI_DEBUG("End of sprintXML: DERStatusLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructVoltage(int8u *stringBuffer, int offset, EmberExiGeneratedVoltage *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Voltage, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Voltage");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</Voltage>");
  EXI_DEBUG("End of sprintXML: Voltage, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActivePower(int8u *stringBuffer, int offset, EmberExiGeneratedActivePower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActivePower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActivePower");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</ActivePower>");
  EXI_DEBUG("End of sprintXML: ActivePower, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDER(int8u *stringBuffer, int offset, EmberExiGeneratedDER *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DER, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DER");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ahRating_option != NULL )
      off += emberExiXmlSprintfStructAmpereHour(stringBuffer, off, (data->ahRating_option));
    if ( data->DERStatusLink != NULL )
      off += emberExiXmlSprintfStructDERStatusLink(stringBuffer, off, (data->DERStatusLink));
    if ( data->nominalVoltage != NULL )
      off += emberExiXmlSprintfStructVoltage(stringBuffer, off, (data->nominalVoltage));
    if ( data->powerLimit != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->powerLimit));
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "</DER>");
  EXI_DEBUG("End of sprintXML: DER, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingQuality(int8u *stringBuffer, int offset, EmberExiGeneratedReadingQuality *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingQuality, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingQuality");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <quality>%d</quality>", data->quality);
  off += sprintf(stringBuffer + off, "</ReadingQuality>");
  EXI_DEBUG("End of sprintXML: ReadingQuality, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReading(int8u *stringBuffer, int offset, EmberExiGeneratedReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Reading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Reading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingQuality_count; i++ )
    if ( data->ReadingQuality_array != NULL )
      off += emberExiXmlSprintfStructReadingQuality(stringBuffer, off, &(data->ReadingQuality_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <timeStamp>%d</timeStamp>", data->timeStamp_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</Reading>");
  EXI_DEBUG("End of sprintXML: Reading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNotification(int8u *stringBuffer, int offset, EmberExiGeneratedNotification *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Notification, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Notification");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <resource>%s</resource>", data->resource);
    if ( data->Resource_option != NULL )
      off += emberExiXmlSprintfStructResource(stringBuffer, off, (data->Resource_option));
  off += sprintf(stringBuffer + off, "  <subscriptionURI>%s</subscriptionURI>", data->subscriptionURI);
  off += sprintf(stringBuffer + off, "</Notification>");
  EXI_DEBUG("End of sprintXML: Notification, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructList(int8u *stringBuffer, int offset, EmberExiGeneratedList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: List, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<List");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</List>");
  EXI_DEBUG("End of sprintXML: List, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNotificationList(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NotificationList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NotificationList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Notification_count; i++ )
    if ( data->Notification_array != NULL )
      off += emberExiXmlSprintfStructNotification(stringBuffer, off, &(data->Notification_array[i]));
  }
  off += sprintf(stringBuffer + off, "</NotificationList>");
  EXI_DEBUG("End of sprintXML: NotificationList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCustomerAccountLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccountLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAccountLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CustomerAccountLink>");
  EXI_DEBUG("End of sprintXML: CustomerAccountLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLoadShedAvailabilityListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailabilityListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LoadShedAvailabilityListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</LoadShedAvailabilityListLink>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailabilityListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMeterReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</MeterReadingListLink>");
  EXI_DEBUG("End of sprintXML: MeterReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepaymentLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PrepaymentLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PrepaymentLink>");
  EXI_DEBUG("End of sprintXML: PrepaymentLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructServiceCategory(int8u *stringBuffer, int offset, EmberExiGeneratedServiceCategory *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceCategory, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ServiceCategory");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <kind>%d</kind>", data->kind);
  off += sprintf(stringBuffer + off, "</ServiceCategory>");
  EXI_DEBUG("End of sprintXML: ServiceCategory, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructUsagePointBase(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UsagePointBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "</UsagePointBase>");
  EXI_DEBUG("End of sprintXML: UsagePointBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UsagePoint");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
    if ( data->CustomerAccountLink_option != NULL )
      off += emberExiXmlSprintfStructCustomerAccountLink(stringBuffer, off, (data->CustomerAccountLink_option));
    if ( data->LoadShedAvailabilityListLink_option != NULL )
      off += emberExiXmlSprintfStructLoadShedAvailabilityListLink(stringBuffer, off, (data->LoadShedAvailabilityListLink_option));
    if ( data->MeterReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructMeterReadingListLink(stringBuffer, off, (data->MeterReadingListLink_option));
    if ( data->PrepaymentLink_option != NULL )
      off += emberExiXmlSprintfStructPrepaymentLink(stringBuffer, off, (data->PrepaymentLink_option));
    if ( data->ServiceCategory != NULL )
      off += emberExiXmlSprintfStructServiceCategory(stringBuffer, off, (data->ServiceCategory));
  off += sprintf(stringBuffer + off, "</UsagePoint>");
  EXI_DEBUG("End of sprintXML: UsagePoint, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActivePowerChargeRate(int8u *stringBuffer, int offset, EmberExiGeneratedActivePowerChargeRate *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActivePowerChargeRate, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActivePowerChargeRate");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</ActivePowerChargeRate>");
  EXI_DEBUG("End of sprintXML: ActivePowerChargeRate, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TargetReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TargetReadingListLink>");
  EXI_DEBUG("End of sprintXML: TargetReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCost(int8u *stringBuffer, int offset, EmberExiGeneratedCost *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Cost, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Cost");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <amount>%d</amount>", data->amount);
  off += sprintf(stringBuffer + off, "  <costKind>%d</costKind>", data->costKind);
  off += sprintf(stringBuffer + off, "</Cost>");
  EXI_DEBUG("End of sprintXML: Cost, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructConsumptionTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ConsumptionTariffInterval");
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Cost_count; i++ )
    if ( data->Cost_array != NULL )
      off += emberExiXmlSprintfStructCost(stringBuffer, off, &(data->Cost_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <price>%d</price>", data->price_option);
  off += sprintf(stringBuffer + off, "  <startValue>%d</startValue>", data->startValue);
  off += sprintf(stringBuffer + off, "</ConsumptionTariffInterval>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedDateTimeInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DateTimeInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DateTimeInterval");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <duration>%d</duration>", data->duration);
  off += sprintf(stringBuffer + off, "  <start>%d</start>", data->start);
  off += sprintf(stringBuffer + off, "</DateTimeInterval>");
  EXI_DEBUG("End of sprintXML: DateTimeInterval, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRandomizedDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizedDateTimeInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RandomizedDateTimeInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RandomizedDateTimeInterval");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <duration>%d</duration>", data->duration);
  off += sprintf(stringBuffer + off, "  <start>%d</start>", data->start);
  off += sprintf(stringBuffer + off, "  <randomizeEnd>%d</randomizeEnd>", data->randomizeEnd_option);
  off += sprintf(stringBuffer + off, "  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
  off += sprintf(stringBuffer + off, "</RandomizedDateTimeInterval>");
  EXI_DEBUG("End of sprintXML: RandomizedDateTimeInterval, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTimeTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TimeTariffInterval");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  { int16u i;
    for ( i=0; i<data->ConsumptionTariffInterval_count; i++ )
    if ( data->ConsumptionTariffInterval_array != NULL )
      off += emberExiXmlSprintfStructConsumptionTariffInterval(stringBuffer, off, &(data->ConsumptionTariffInterval_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructRandomizedDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <isActive>%d</isActive>", data->isActive);
  off += sprintf(stringBuffer + off, "  <numPriceLevels>%d</numPriceLevels>", data->numPriceLevels);
  off += sprintf(stringBuffer + off, "  <priceLevel>%d</priceLevel>", data->priceLevel);
  off += sprintf(stringBuffer + off, "</TimeTariffInterval>");
  EXI_DEBUG("End of sprintXML: TimeTariffInterval, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructOffset(int8u *stringBuffer, int offset, EmberExiGeneratedOffset *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Offset, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Offset");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</Offset>");
  EXI_DEBUG("End of sprintXML: Offset, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriodListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingPeriodListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</BillingPeriodListLink>");
  EXI_DEBUG("End of sprintXML: BillingPeriodListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTextMessageListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTextMessageListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveTextMessageListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveTextMessageListLink>");
  EXI_DEBUG("End of sprintXML: ActiveTextMessageListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargerLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargerLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargerLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ChargerLink>");
  EXI_DEBUG("End of sprintXML: ChargerLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargeReservation(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeReservation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargeReservation");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ChargerLink_option != NULL )
      off += emberExiXmlSprintfStructChargerLink(stringBuffer, off, (data->ChargerLink_option));
    if ( data->scheduledInterval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->scheduledInterval));
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "</ChargeReservation>");
  EXI_DEBUG("End of sprintXML: ChargeReservation, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargeReservationList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeReservationList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargeReservationList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ChargeReservation_count; i++ )
    if ( data->ChargeReservation_array != NULL )
      off += emberExiXmlSprintfStructChargeReservation(stringBuffer, off, &(data->ChargeReservation_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ChargeReservationList>");
  EXI_DEBUG("End of sprintXML: ChargeReservationList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveEndDeviceControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveEndDeviceControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveEndDeviceControlListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveEndDeviceControlListLink>");
  EXI_DEBUG("End of sprintXML: ActiveEndDeviceControlListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceControlListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</EndDeviceControlListLink>");
  EXI_DEBUG("End of sprintXML: EndDeviceControlListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDemandResponseProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DemandResponseProgram");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ActiveEndDeviceControlListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveEndDeviceControlListLink(stringBuffer, off, (data->ActiveEndDeviceControlListLink_option));
    if ( data->EndDeviceControlListLink_option != NULL )
      off += emberExiXmlSprintfStructEndDeviceControlListLink(stringBuffer, off, (data->EndDeviceControlListLink_option));
  off += sprintf(stringBuffer + off, "  <primacy>%d</primacy>", data->primacy);
  off += sprintf(stringBuffer + off, "</DemandResponseProgram>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgram, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDemandResponseProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DemandResponseProgramList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DemandResponseProgram_count; i++ )
    if ( data->DemandResponseProgram_array != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgram(stringBuffer, off, &(data->DemandResponseProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</DemandResponseProgramList>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <estimatedTimeRemaining>%d</estimatedTimeRemaining>", data->estimatedTimeRemaining);
  off += sprintf(stringBuffer + off, "  <stateOfCharge>%d</stateOfCharge>", data->stateOfCharge);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <statusTime>%d</statusTime>", data->statusTime);
  off += sprintf(stringBuffer + off, "  <testResult>%d</testResult>", data->testResult_option);
  off += sprintf(stringBuffer + off, "  <voltageHigh>%d</voltageHigh>", data->voltageHigh_option);
  off += sprintf(stringBuffer + off, "  <voltageLow>%d</voltageLow>", data->voltageLow_option);
  off += sprintf(stringBuffer + off, "</DERStatus>");
  EXI_DEBUG("End of sprintXML: DERStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReduction *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReduction, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TargetReduction");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</TargetReduction>");
  EXI_DEBUG("End of sprintXML: TargetReduction, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLogEvent(int8u *stringBuffer, int offset, EmberExiGeneratedLogEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEvent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LogEvent");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  off += sprintf(stringBuffer + off, "  <functionSet>%d</functionSet>", data->functionSet);
  off += sprintf(stringBuffer + off, "  <logEventCode>%d</logEventCode>", data->logEventCode);
  off += sprintf(stringBuffer + off, "  <logEventPEN>%d</logEventPEN>", data->logEventPEN_option);
  off += sprintf(stringBuffer + off, "  <profileID>%d</profileID>", data->profileID);
  off += sprintf(stringBuffer + off, "  <vendorDefined>%d</vendorDefined>", data->vendorDefined_option);
  off += sprintf(stringBuffer + off, "</LogEvent>");
  EXI_DEBUG("End of sprintXML: LogEvent, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLogEventList(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEventList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LogEventList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->LogEvent_count; i++ )
    if ( data->LogEvent_array != NULL )
      off += emberExiXmlSprintfStructLogEvent(stringBuffer, off, &(data->LogEvent_array[i]));
  }
  off += sprintf(stringBuffer + off, "</LogEventList>");
  EXI_DEBUG("End of sprintXML: LogEventList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRateComponentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RateComponentListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</RateComponentListLink>");
  EXI_DEBUG("End of sprintXML: RateComponentListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERLink>");
  EXI_DEBUG("End of sprintXML: DERLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTimeTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTimeTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveTimeTariffIntervalListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveTimeTariffIntervalListLink>");
  EXI_DEBUG("End of sprintXML: ActiveTimeTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTimeTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffIntervalList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TimeTariffIntervalList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TimeTariffInterval_count; i++ )
    if ( data->TimeTariffInterval_array != NULL )
      off += emberExiXmlSprintfStructTimeTariffInterval(stringBuffer, off, &(data->TimeTariffInterval_array[i]));
  }
  off += sprintf(stringBuffer + off, "</TimeTariffIntervalList>");
  EXI_DEBUG("End of sprintXML: TimeTariffIntervalList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERListLink>");
  EXI_DEBUG("End of sprintXML: DERListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIntervalReading(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IntervalReading");
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingQuality_count; i++ )
    if ( data->ReadingQuality_array != NULL )
      off += emberExiXmlSprintfStructReadingQuality(stringBuffer, off, &(data->ReadingQuality_array[i]));
  }
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</IntervalReading>");
  EXI_DEBUG("End of sprintXML: IntervalReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIntervalBlock(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlock *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalBlock, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IntervalBlock");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  { int16u i;
    for ( i=0; i<data->IntervalReading_count; i++ )
    if ( data->IntervalReading_array != NULL )
      off += emberExiXmlSprintfStructIntervalReading(stringBuffer, off, &(data->IntervalReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</IntervalBlock>");
  EXI_DEBUG("End of sprintXML: IntervalBlock, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIntervalBlockList(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalBlockList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IntervalBlockList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->IntervalBlock_count; i++ )
    if ( data->IntervalBlock_array != NULL )
      off += emberExiXmlSprintfStructIntervalBlock(stringBuffer, off, &(data->IntervalBlock_array[i]));
  }
  off += sprintf(stringBuffer + off, "</IntervalBlockList>");
  EXI_DEBUG("End of sprintXML: IntervalBlockList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UsagePointListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</UsagePointListLink>");
  EXI_DEBUG("End of sprintXML: UsagePointListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingType(int8u *stringBuffer, int offset, EmberExiGeneratedReadingType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingType");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <accumulationBehaviour>%d</accumulationBehaviour>", data->accumulationBehaviour_option);
  off += sprintf(stringBuffer + off, "  <commodity>%d</commodity>", data->commodity_option);
  off += sprintf(stringBuffer + off, "  <consumptionTier>%d</consumptionTier>", data->consumptionTier_option);
  off += sprintf(stringBuffer + off, "  <currency>%d</currency>", data->currency_option);
  off += sprintf(stringBuffer + off, "  <dataQualifier>%d</dataQualifier>", data->dataQualifier_option);
  off += sprintf(stringBuffer + off, "  <flowDirection>%d</flowDirection>", data->flowDirection_option);
  off += sprintf(stringBuffer + off, "  <kind>%d</kind>", data->kind_option);
  off += sprintf(stringBuffer + off, "  <phase>%d</phase>", data->phase_option);
  off += sprintf(stringBuffer + off, "  <powerOfTenMultiplier>%d</powerOfTenMultiplier>", data->powerOfTenMultiplier_option);
  off += sprintf(stringBuffer + off, "  <timeAttribute>%d</timeAttribute>", data->timeAttribute_option);
  off += sprintf(stringBuffer + off, "  <tou>%d</tou>", data->tou_option);
  off += sprintf(stringBuffer + off, "  <uom>%d</uom>", data->uom_option);
  off += sprintf(stringBuffer + off, "</ReadingType>");
  EXI_DEBUG("End of sprintXML: ReadingType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingTypeList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingTypeList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingTypeList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingType_count; i++ )
    if ( data->ReadingType_array != NULL )
      off += emberExiXmlSprintfStructReadingType(stringBuffer, off, &(data->ReadingType_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ReadingTypeList>");
  EXI_DEBUG("End of sprintXML: ReadingTypeList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTimeLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TimeLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TimeLink>");
  EXI_DEBUG("End of sprintXML: TimeLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMessagingProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MessagingProgramListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</MessagingProgramListLink>");
  EXI_DEBUG("End of sprintXML: MessagingProgramListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTime(int8u *stringBuffer, int offset, EmberExiGeneratedTime *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Time, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Time");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dstEndTime>%d</dstEndTime>", data->dstEndTime);
  off += sprintf(stringBuffer + off, "  <dstOffset>%d</dstOffset>", data->dstOffset);
  off += sprintf(stringBuffer + off, "  <dstStartTime>%d</dstStartTime>", data->dstStartTime);
  off += sprintf(stringBuffer + off, "  <localTime>%d</localTime>", data->localTime_option);
  off += sprintf(stringBuffer + off, "  <quality>%d</quality>", data->quality);
  off += sprintf(stringBuffer + off, "  <tzOffset>%d</tzOffset>", data->tzOffset);
  off += sprintf(stringBuffer + off, "  <UTCTime>%d</UTCTime>", data->UTCTime);
  off += sprintf(stringBuffer + off, "</Time>");
  EXI_DEBUG("End of sprintXML: Time, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UsagePointList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      off += emberExiXmlSprintfStructUsagePoint(stringBuffer, off, &(data->UsagePoint_array[i]));
  }
  off += sprintf(stringBuffer + off, "</UsagePointList>");
  EXI_DEBUG("End of sprintXML: UsagePointList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDutyCycle(int8u *stringBuffer, int offset, EmberExiGeneratedDutyCycle *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DutyCycle, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DutyCycle");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <normalValue>%d</normalValue>", data->normalValue);
  off += sprintf(stringBuffer + off, "</DutyCycle>");
  EXI_DEBUG("End of sprintXML: DutyCycle, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSetPoint(int8u *stringBuffer, int offset, EmberExiGeneratedSetPoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SetPoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SetPoint");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</SetPoint>");
  EXI_DEBUG("End of sprintXML: SetPoint, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructStatus(int8u *stringBuffer, int offset, EmberExiGeneratedStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Status, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Status");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <potentiallySuperseded>%d</potentiallySuperseded>", data->potentiallySuperseded);
  off += sprintf(stringBuffer + off, "  <potentiallySupersededTime>%d</potentiallySupersededTime>", data->potentiallySupersededTime);
  off += sprintf(stringBuffer + off, "  <reason>%s</reason>", data->reason_option);
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "</Status>");
  EXI_DEBUG("End of sprintXML: Status, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceControl(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceControl");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
  off += sprintf(stringBuffer + off, "  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceCategory.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceCategory>");
  off += sprintf(stringBuffer + off, "  <drProgramMandatory>%d</drProgramMandatory>", data->drProgramMandatory);
    if ( data->DutyCycle_option != NULL )
      off += emberExiXmlSprintfStructDutyCycle(stringBuffer, off, (data->DutyCycle_option));
  off += sprintf(stringBuffer + off, "  <loadShiftForward>%d</loadShiftForward>", data->loadShiftForward);
  { int16u i;
    for ( i=0; i<data->Offset_count; i++ )
    if ( data->Offset_array != NULL )
      off += emberExiXmlSprintfStructOffset(stringBuffer, off, &(data->Offset_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <overrideDuration>%d</overrideDuration>", data->overrideDuration);
    if ( data->scheduledInterval != NULL )
      off += emberExiXmlSprintfStructRandomizedDateTimeInterval(stringBuffer, off, (data->scheduledInterval));
  { int16u i;
    for ( i=0; i<data->SetPoint_count; i++ )
    if ( data->SetPoint_array != NULL )
      off += emberExiXmlSprintfStructSetPoint(stringBuffer, off, &(data->SetPoint_array[i]));
  }
    if ( data->Status != NULL )
      off += emberExiXmlSprintfStructStatus(stringBuffer, off, (data->Status));
    if ( data->TargetReduction_option != NULL )
      off += emberExiXmlSprintfStructTargetReduction(stringBuffer, off, (data->TargetReduction_option));
  off += sprintf(stringBuffer + off, "</EndDeviceControl>");
  EXI_DEBUG("End of sprintXML: EndDeviceControl, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSupplyInterruptionOverride(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverride *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverride, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupplyInterruptionOverride");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "</SupplyInterruptionOverride>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverride, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveBillingPeriodListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveBillingPeriodListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveBillingPeriodListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveBillingPeriodListLink>");
  EXI_DEBUG("End of sprintXML: ActiveBillingPeriodListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDemandResponseProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DemandResponseProgramListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DemandResponseProgramListLink>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERProgramListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERProgramListLink>");
  EXI_DEBUG("End of sprintXML: DERProgramListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepaymentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PrepaymentListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PrepaymentListLink>");
  EXI_DEBUG("End of sprintXML: PrepaymentListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTariffProfileLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TariffProfileLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TariffProfileLink>");
  EXI_DEBUG("End of sprintXML: TariffProfileLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructConfigurationLink(int8u *stringBuffer, int offset, EmberExiGeneratedConfigurationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConfigurationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ConfigurationLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ConfigurationLink>");
  EXI_DEBUG("End of sprintXML: ConfigurationLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceInformationLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceInformationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceInformationLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DeviceInformationLink>");
  EXI_DEBUG("End of sprintXML: DeviceInformationLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceGroupListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceGroupListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceGroupListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</EndDeviceGroupListLink>");
  EXI_DEBUG("End of sprintXML: EndDeviceGroupListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</EndDeviceListLink>");
  EXI_DEBUG("End of sprintXML: EndDeviceListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLogEventListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEventListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LogEventListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</LogEventListLink>");
  EXI_DEBUG("End of sprintXML: LogEventListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMirrorUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePointListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorUsagePointListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</MirrorUsagePointListLink>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePointListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNetworkStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NetworkStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NetworkStatusLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</NetworkStatusLink>");
  EXI_DEBUG("End of sprintXML: NetworkStatusLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPowerStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PowerStatusLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PowerStatusLink>");
  EXI_DEBUG("End of sprintXML: PowerStatusLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSubscriptionListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SubscriptionListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SubscriptionListLink>");
  EXI_DEBUG("End of sprintXML: SubscriptionListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceGroup(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroup *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceGroup, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceGroup");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      off += emberExiXmlSprintfStructTariffProfileLink(stringBuffer, off, (data->TariffProfileLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
  off += sprintf(stringBuffer + off, "</EndDeviceGroup>");
  EXI_DEBUG("End of sprintXML: EndDeviceGroup, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceCapability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceCapability");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      off += emberExiXmlSprintfStructTariffProfileLink(stringBuffer, off, (data->TariffProfileLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->EndDeviceGroupListLink_option != NULL )
      off += emberExiXmlSprintfStructEndDeviceGroupListLink(stringBuffer, off, (data->EndDeviceGroupListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      off += emberExiXmlSprintfStructEndDeviceListLink(stringBuffer, off, (data->EndDeviceListLink_option));
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      off += emberExiXmlSprintfStructMirrorUsagePointListLink(stringBuffer, off, (data->MirrorUsagePointListLink_option));
    if ( data->NetworkStatusLink_option != NULL )
      off += emberExiXmlSprintfStructNetworkStatusLink(stringBuffer, off, (data->NetworkStatusLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      off += emberExiXmlSprintfStructSubscriptionListLink(stringBuffer, off, (data->SubscriptionListLink_option));
  off += sprintf(stringBuffer + off, "</DeviceCapability>");
  EXI_DEBUG("End of sprintXML: DeviceCapability, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFileStatus(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FileStatus");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <deviceID>");
  { int16u i;
    for ( i=0; i<data->deviceID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceID>");
  off += sprintf(stringBuffer + off, "  <fileURI>%s</fileURI>", data->fileURI);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "</FileStatus>");
  EXI_DEBUG("End of sprintXML: FileStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAccountBalanceLink(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalanceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountBalanceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AccountBalanceLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</AccountBalanceLink>");
  EXI_DEBUG("End of sprintXML: AccountBalanceLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveCreditRegisterListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveCreditRegisterListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveCreditRegisterListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveCreditRegisterListLink>");
  EXI_DEBUG("End of sprintXML: ActiveCreditRegisterListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveSupplyInterruptionOverrideListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveSupplyInterruptionOverrideListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveSupplyInterruptionOverrideListLink>");
  EXI_DEBUG("End of sprintXML: ActiveSupplyInterruptionOverrideListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRealEnergy(int8u *stringBuffer, int offset, EmberExiGeneratedRealEnergy *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RealEnergy, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RealEnergy");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</RealEnergy>");
  EXI_DEBUG("End of sprintXML: RealEnergy, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAccountingUnit(int8u *stringBuffer, int offset, EmberExiGeneratedAccountingUnit *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountingUnit, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AccountingUnit");
  off += sprintf(stringBuffer + off, ">");
    if ( data->energyUnit_option != NULL )
      off += emberExiXmlSprintfStructRealEnergy(stringBuffer, off, (data->energyUnit_option));
  off += sprintf(stringBuffer + off, "  <monetaryUnit>%d</monetaryUnit>", data->monetaryUnit_option);
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</AccountingUnit>");
  EXI_DEBUG("End of sprintXML: AccountingUnit, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegisterListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CreditRegisterListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CreditRegisterListLink>");
  EXI_DEBUG("End of sprintXML: CreditRegisterListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepayOperationStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayOperationStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PrepayOperationStatusLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PrepayOperationStatusLink>");
  EXI_DEBUG("End of sprintXML: PrepayOperationStatusLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverrideListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupplyInterruptionOverrideListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SupplyInterruptionOverrideListLink>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverrideListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepayment(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayment *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Prepayment, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Prepayment");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->AccountBalanceLink != NULL )
      off += emberExiXmlSprintfStructAccountBalanceLink(stringBuffer, off, (data->AccountBalanceLink));
    if ( data->ActiveCreditRegisterListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveCreditRegisterListLink(stringBuffer, off, (data->ActiveCreditRegisterListLink_option));
    if ( data->ActiveSupplyInterruptionOverrideListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveSupplyInterruptionOverrideListLink(stringBuffer, off, (data->ActiveSupplyInterruptionOverrideListLink_option));
    if ( data->creditExpiryLevel_option != NULL )
      off += emberExiXmlSprintfStructAccountingUnit(stringBuffer, off, (data->creditExpiryLevel_option));
    if ( data->CreditRegisterListLink != NULL )
      off += emberExiXmlSprintfStructCreditRegisterListLink(stringBuffer, off, (data->CreditRegisterListLink));
    if ( data->lowCreditWarningLevel_option != NULL )
      off += emberExiXmlSprintfStructAccountingUnit(stringBuffer, off, (data->lowCreditWarningLevel_option));
    if ( data->lowEmergencyCreditWarningLevel_option != NULL )
      off += emberExiXmlSprintfStructAccountingUnit(stringBuffer, off, (data->lowEmergencyCreditWarningLevel_option));
  off += sprintf(stringBuffer + off, "  <prepayMode>%d</prepayMode>", data->prepayMode);
    if ( data->PrepayOperationStatusLink != NULL )
      off += emberExiXmlSprintfStructPrepayOperationStatusLink(stringBuffer, off, (data->PrepayOperationStatusLink));
    if ( data->SupplyInterruptionOverrideListLink != NULL )
      off += emberExiXmlSprintfStructSupplyInterruptionOverrideListLink(stringBuffer, off, (data->SupplyInterruptionOverrideListLink));
  off += sprintf(stringBuffer + off, "</Prepayment>");
  EXI_DEBUG("End of sprintXML: Prepayment, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedChargerStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargerStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargerStatus");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <batChaSt>%d</batChaSt>", data->batChaSt);
  off += sprintf(stringBuffer + off, "  <chaTms>%d</chaTms>", data->chaTms_option);
  off += sprintf(stringBuffer + off, "</ChargerStatus>");
  EXI_DEBUG("End of sprintXML: ChargerStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCharger(int8u *stringBuffer, int offset, EmberExiGeneratedCharger *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Charger, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Charger");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ChargerStatus_option != NULL )
      off += emberExiXmlSprintfStructChargerStatus(stringBuffer, off, (data->ChargerStatus_option));
    if ( data->powerRequired != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->powerRequired));
    if ( data->rate != NULL )
      off += emberExiXmlSprintfStructActivePowerChargeRate(stringBuffer, off, (data->rate));
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "</Charger>");
  EXI_DEBUG("End of sprintXML: Charger, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCondition(int8u *stringBuffer, int offset, EmberExiGeneratedCondition *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Condition, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Condition");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <attributeIdentifier>%d</attributeIdentifier>", data->attributeIdentifier);
  off += sprintf(stringBuffer + off, "  <lowerThreshold>%d</lowerThreshold>", data->lowerThreshold);
  off += sprintf(stringBuffer + off, "  <upperThreshold>%d</upperThreshold>", data->upperThreshold);
  off += sprintf(stringBuffer + off, "</Condition>");
  EXI_DEBUG("End of sprintXML: Condition, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReadingBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "</MeterReadingBase>");
  EXI_DEBUG("End of sprintXML: MeterReadingBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMirrorMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorMeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorMeterReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  { int16u i;
    for ( i=0; i<data->IntervalBlock_count; i++ )
    if ( data->IntervalBlock_array != NULL )
      off += emberExiXmlSprintfStructIntervalBlock(stringBuffer, off, &(data->IntervalBlock_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <lastUpdateTime>%d</lastUpdateTime>", data->lastUpdateTime_option);
  off += sprintf(stringBuffer + off, "  <nextUpdateTime>%d</nextUpdateTime>", data->nextUpdateTime_option);
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      off += emberExiXmlSprintfStructReading(stringBuffer, off, &(data->Reading_array[i]));
  }
    if ( data->ReadingType != NULL )
      off += emberExiXmlSprintfStructReadingType(stringBuffer, off, (data->ReadingType));
  off += sprintf(stringBuffer + off, "</MirrorMeterReading>");
  EXI_DEBUG("End of sprintXML: MirrorMeterReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMirrorUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorUsagePoint");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
  off += sprintf(stringBuffer + off, "  <manufacturerID>");
  { int16u i;
    for ( i=0; i<data->manufacturerID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->manufacturerID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</manufacturerID>");
  { int16u i;
    for ( i=0; i<data->MirrorMeterReading_count; i++ )
    if ( data->MirrorMeterReading_array != NULL )
      off += emberExiXmlSprintfStructMirrorMeterReading(stringBuffer, off, &(data->MirrorMeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <serialNumber>%s</serialNumber>", data->serialNumber);
    if ( data->ServiceCategory != NULL )
      off += emberExiXmlSprintfStructServiceCategory(stringBuffer, off, (data->ServiceCategory));
  off += sprintf(stringBuffer + off, "</MirrorUsagePoint>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePoint, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructServiceChange(int8u *stringBuffer, int offset, EmberExiGeneratedServiceChange *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceChange, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ServiceChange");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <newStatus>%d</newStatus>", data->newStatus);
  off += sprintf(stringBuffer + off, "  <startTime>%d</startTime>", data->startTime);
  off += sprintf(stringBuffer + off, "</ServiceChange>");
  EXI_DEBUG("End of sprintXML: ServiceChange, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIntervalBlockListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IntervalBlockListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IntervalBlockListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</IntervalBlockListLink>");
  EXI_DEBUG("End of sprintXML: IntervalBlockListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ReadingLink>");
  EXI_DEBUG("End of sprintXML: ReadingLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingTypeLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingTypeLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingTypeLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ReadingTypeLink>");
  EXI_DEBUG("End of sprintXML: ReadingTypeLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</MeterReading>");
  EXI_DEBUG("End of sprintXML: MeterReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructProjectionReading(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ProjectionReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</ProjectionReading>");
  EXI_DEBUG("End of sprintXML: ProjectionReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructProjectionReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ProjectionReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ProjectionReading_count; i++ )
    if ( data->ProjectionReading_array != NULL )
      off += emberExiXmlSprintfStructProjectionReading(stringBuffer, off, &(data->ProjectionReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ProjectionReadingList>");
  EXI_DEBUG("End of sprintXML: ProjectionReadingList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructHistoricalReading(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HistoricalReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</HistoricalReading>");
  EXI_DEBUG("End of sprintXML: HistoricalReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDemandResponseProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DemandResponseProgramLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DemandResponseProgramLink>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLoadShedAvailability(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LoadShedAvailability");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <availabilityDuration>%d</availabilityDuration>", data->availabilityDuration_option);
  off += sprintf(stringBuffer + off, "  <consuming>%d</consuming>", data->consuming);
    if ( data->DemandResponseProgramLink_option != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgramLink(stringBuffer, off, (data->DemandResponseProgramLink_option));
  off += sprintf(stringBuffer + off, "  <shed>%d</shed>", data->shed);
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</LoadShedAvailability>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailability, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedPowerFactor *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerFactor, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PowerFactor");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier_option);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</PowerFactor>");
  EXI_DEBUG("End of sprintXML: PowerFactor, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERControl(int8u *stringBuffer, int offset, EmberExiGeneratedDERControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERControl");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <gnBlk>%d</gnBlk>", data->gnBlk_option);
  off += sprintf(stringBuffer + off, "  <gnCtl>%d</gnCtl>", data->gnCtl_option);
  off += sprintf(stringBuffer + off, "  <gnRL>%d</gnRL>", data->gnRL_option);
    if ( data->maxOperatingPower != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->maxOperatingPower));
    if ( data->scheduledInterval != NULL )
      off += emberExiXmlSprintfStructRandomizedDateTimeInterval(stringBuffer, off, (data->scheduledInterval));
    if ( data->Status_option != NULL )
      off += emberExiXmlSprintfStructStatus(stringBuffer, off, (data->Status_option));
    if ( data->targetPowerFactor != NULL )
      off += emberExiXmlSprintfStructPowerFactor(stringBuffer, off, (data->targetPowerFactor));
  off += sprintf(stringBuffer + off, "  <varSupportMode>%d</varSupportMode>", data->varSupportMode);
  off += sprintf(stringBuffer + off, "</DERControl>");
  EXI_DEBUG("End of sprintXML: DERControl, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERControlList(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERControlList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERControl_count; i++ )
    if ( data->DERControl_array != NULL )
      off += emberExiXmlSprintfStructDERControl(stringBuffer, off, &(data->DERControl_array[i]));
  }
  off += sprintf(stringBuffer + off, "</DERControlList>");
  EXI_DEBUG("End of sprintXML: DERControlList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargerListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargerListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargerListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ChargerListLink>");
  EXI_DEBUG("End of sprintXML: ChargerListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTextMessage(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessage *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessage, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TextMessage");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  off += sprintf(stringBuffer + off, "  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceCategory.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceCategory>");
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <messageLength>%d</messageLength>", data->messageLength);
  off += sprintf(stringBuffer + off, "  <originator>%s</originator>", data->originator);
  off += sprintf(stringBuffer + off, "  <priority>%d</priority>", data->priority);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "  <textMessage>%s</textMessage>", data->textMessage);
  off += sprintf(stringBuffer + off, "</TextMessage>");
  EXI_DEBUG("End of sprintXML: TextMessage, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTextMessageList(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessageList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TextMessageList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TextMessage_count; i++ )
    if ( data->TextMessage_array != NULL )
      off += emberExiXmlSprintfStructTextMessage(stringBuffer, off, &(data->TextMessage_array[i]));
  }
  off += sprintf(stringBuffer + off, "</TextMessageList>");
  EXI_DEBUG("End of sprintXML: TextMessageList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</EndDeviceLink>");
  EXI_DEBUG("End of sprintXML: EndDeviceLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructServiceSupplierLink(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplierLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ServiceSupplierLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ServiceSupplierLink>");
  EXI_DEBUG("End of sprintXML: ServiceSupplierLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSignature(int8u *stringBuffer, int offset, EmberExiGeneratedSignature *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Signature, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Signature");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <algorithm>%d</algorithm>", data->algorithm);
  off += sprintf(stringBuffer + off, "  <value>%s</value>", data->value);
  off += sprintf(stringBuffer + off, "</Signature>");
  EXI_DEBUG("End of sprintXML: Signature, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDocument(int8u *stringBuffer, int offset, EmberExiGeneratedDocument *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Document, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Document");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>%s</category>", data->category_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</Document>");
  EXI_DEBUG("End of sprintXML: Document, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructResponse(int8u *stringBuffer, int offset, EmberExiGeneratedResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Response, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Response");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>%s</category>", data->category_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "</Response>");
  EXI_DEBUG("End of sprintXML: Response, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ResponseList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Response_count; i++ )
    if ( data->Response_array != NULL )
      off += emberExiXmlSprintfStructResponse(stringBuffer, off, &(data->Response_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ResponseList>");
  EXI_DEBUG("End of sprintXML: ResponseList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSupportedLocale(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocale *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocale, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupportedLocale");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <locale>%s</locale>", data->locale);
  off += sprintf(stringBuffer + off, "</SupportedLocale>");
  EXI_DEBUG("End of sprintXML: SupportedLocale, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructServiceSupplierList(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplierList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ServiceSupplierList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ServiceSupplier_count; i++ )
    if ( data->ServiceSupplier_array != NULL )
      off += emberExiXmlSprintfStructServiceSupplier(stringBuffer, off, &(data->ServiceSupplier_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ServiceSupplierList>");
  EXI_DEBUG("End of sprintXML: ServiceSupplierList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSubscription(int8u *stringBuffer, int offset, EmberExiGeneratedSubscription *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Subscription, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Subscription");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->Condition_option != NULL )
      off += emberExiXmlSprintfStructCondition(stringBuffer, off, (data->Condition_option));
  off += sprintf(stringBuffer + off, "  <limit>%d</limit>", data->limit);
  off += sprintf(stringBuffer + off, "  <newResourceURI>%s</newResourceURI>", data->newResourceURI_option);
  off += sprintf(stringBuffer + off, "  <pushURI>%s</pushURI>", data->pushURI);
  off += sprintf(stringBuffer + off, "  <resource>%s</resource>", data->resource);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "</Subscription>");
  EXI_DEBUG("End of sprintXML: Subscription, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ResponseListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ResponseListLink>");
  EXI_DEBUG("End of sprintXML: ResponseListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      off += emberExiXmlSprintfStructReading(stringBuffer, off, &(data->Reading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ReadingList>");
  EXI_DEBUG("End of sprintXML: ReadingList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceStatusLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DeviceStatusLink>");
  EXI_DEBUG("End of sprintXML: DeviceStatusLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FileListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FileListLink>");
  EXI_DEBUG("End of sprintXML: FileListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRegistrationLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RegistrationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RegistrationLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</RegistrationLink>");
  EXI_DEBUG("End of sprintXML: RegistrationLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDevice(int8u *stringBuffer, int offset, EmberExiGeneratedEndDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDevice");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>");
  { int16u i;
    for ( i=0; i<data->category_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->category_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</category>");
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->EndDeviceGroupListLink_option != NULL )
      off += emberExiXmlSprintfStructEndDeviceGroupListLink(stringBuffer, off, (data->EndDeviceGroupListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->LoadShedAvailabilityListLink_option != NULL )
      off += emberExiXmlSprintfStructLoadShedAvailabilityListLink(stringBuffer, off, (data->LoadShedAvailabilityListLink_option));
    if ( data->RegistrationLink_option != NULL )
      off += emberExiXmlSprintfStructRegistrationLink(stringBuffer, off, (data->RegistrationLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      off += emberExiXmlSprintfStructSubscriptionListLink(stringBuffer, off, (data->SubscriptionListLink_option));
  off += sprintf(stringBuffer + off, "</EndDevice>");
  EXI_DEBUG("End of sprintXML: EndDevice, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDevice_count; i++ )
    if ( data->EndDevice_array != NULL )
      off += emberExiXmlSprintfStructEndDevice(stringBuffer, off, &(data->EndDevice_array[i]));
  }
  off += sprintf(stringBuffer + off, "</EndDeviceList>");
  EXI_DEBUG("End of sprintXML: EndDeviceList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSupplyInterruptionOverrideList(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverrideList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupplyInterruptionOverrideList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->SupplyInterruptionOverride_count; i++ )
    if ( data->SupplyInterruptionOverride_array != NULL )
      off += emberExiXmlSprintfStructSupplyInterruptionOverride(stringBuffer, off, &(data->SupplyInterruptionOverride_array[i]));
  }
  off += sprintf(stringBuffer + off, "</SupplyInterruptionOverrideList>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverrideList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTariffProfileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TariffProfileListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TariffProfileListLink>");
  EXI_DEBUG("End of sprintXML: TariffProfileListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TimeTariffIntervalListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TimeTariffIntervalListLink>");
  EXI_DEBUG("End of sprintXML: TimeTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRateComponent(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RateComponent");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ActiveTimeTariffIntervalListLink != NULL )
      off += emberExiXmlSprintfStructActiveTimeTariffIntervalListLink(stringBuffer, off, (data->ActiveTimeTariffIntervalListLink));
  off += sprintf(stringBuffer + off, "  <powerLimit>%d</powerLimit>", data->powerLimit_option);
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
    if ( data->TimeTariffIntervalListLink != NULL )
      off += emberExiXmlSprintfStructTimeTariffIntervalListLink(stringBuffer, off, (data->TimeTariffIntervalListLink));
  off += sprintf(stringBuffer + off, "</RateComponent>");
  EXI_DEBUG("End of sprintXML: RateComponent, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRateComponentList(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RateComponentList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->RateComponent_count; i++ )
    if ( data->RateComponent_array != NULL )
      off += emberExiXmlSprintfStructRateComponent(stringBuffer, off, &(data->RateComponent_array[i]));
  }
  off += sprintf(stringBuffer + off, "</RateComponentList>");
  EXI_DEBUG("End of sprintXML: RateComponentList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ProjectionReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ProjectionReadingListLink>");
  EXI_DEBUG("End of sprintXML: ProjectionReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFile(int8u *stringBuffer, int offset, EmberExiGeneratedFile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: File, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<File");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <fileURI>%s</fileURI>", data->fileURI);
  off += sprintf(stringBuffer + off, "  <Size>%d</Size>", data->Size);
  off += sprintf(stringBuffer + off, "  <Type>");
  { int16u i;
    for ( i=0; i<data->Type.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->Type.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</Type>");
  off += sprintf(stringBuffer + off, "</File>");
  EXI_DEBUG("End of sprintXML: File, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDrResponse(int8u *stringBuffer, int offset, EmberExiGeneratedDrResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DrResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DrResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>%s</category>", data->category_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlSprintfStructSignature(stringBuffer, off, (data->Signature_option));
    if ( data->DutyCycle_option != NULL )
      off += emberExiXmlSprintfStructDutyCycle(stringBuffer, off, (data->DutyCycle_option));
  { int16u i;
    for ( i=0; i<data->Offset_count; i++ )
    if ( data->Offset_array != NULL )
      off += emberExiXmlSprintfStructOffset(stringBuffer, off, &(data->Offset_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <overrideDuration>%d</overrideDuration>", data->overrideDuration);
    if ( data->SetPoint_option != NULL )
      off += emberExiXmlSprintfStructSetPoint(stringBuffer, off, (data->SetPoint_option));
  off += sprintf(stringBuffer + off, "</DrResponse>");
  EXI_DEBUG("End of sprintXML: DrResponse, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTariffProfile(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfile, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TariffProfile");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <rateCode>%s</rateCode>", data->rateCode_option);
    if ( data->RateComponentListLink != NULL )
      off += emberExiXmlSprintfStructRateComponentListLink(stringBuffer, off, (data->RateComponentListLink));
  off += sprintf(stringBuffer + off, "</TariffProfile>");
  EXI_DEBUG("End of sprintXML: TariffProfile, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPowerConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedPowerConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerConfiguration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PowerConfiguration");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <batteryInstallTime>%d</batteryInstallTime>", data->batteryInstallTime_option);
  off += sprintf(stringBuffer + off, "  <lowChargeThreshold>%d</lowChargeThreshold>", data->lowChargeThreshold_option);
  off += sprintf(stringBuffer + off, "</PowerConfiguration>");
  EXI_DEBUG("End of sprintXML: PowerConfiguration, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTimeConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedTimeConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeConfiguration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TimeConfiguration");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dstEndRule>");
  { int16u i;
    for ( i=0; i<data->dstEndRule.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->dstEndRule.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</dstEndRule>");
  off += sprintf(stringBuffer + off, "  <dstOffset>%d</dstOffset>", data->dstOffset);
  off += sprintf(stringBuffer + off, "  <dstStartRule>");
  { int16u i;
    for ( i=0; i<data->dstStartRule.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->dstStartRule.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</dstStartRule>");
  off += sprintf(stringBuffer + off, "  <tzOffset>%d</tzOffset>", data->tzOffset);
  off += sprintf(stringBuffer + off, "</TimeConfiguration>");
  EXI_DEBUG("End of sprintXML: TimeConfiguration, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Configuration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Configuration");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <locale>%s</locale>", data->locale);
    if ( data->PowerConfiguration_option != NULL )
      off += emberExiXmlSprintfStructPowerConfiguration(stringBuffer, off, (data->PowerConfiguration_option));
    if ( data->TimeConfiguration_option != NULL )
      off += emberExiXmlSprintfStructTimeConfiguration(stringBuffer, off, (data->TimeConfiguration_option));
  off += sprintf(stringBuffer + off, "  <userDeviceName>%s</userDeviceName>", data->userDeviceName);
  off += sprintf(stringBuffer + off, "</Configuration>");
  EXI_DEBUG("End of sprintXML: Configuration, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessageListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TextMessageListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TextMessageListLink>");
  EXI_DEBUG("End of sprintXML: TextMessageListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceCapabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceCapabilityLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DeviceCapabilityLink>");
  EXI_DEBUG("End of sprintXML: DeviceCapabilityLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTargetReading(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TargetReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</TargetReading>");
  EXI_DEBUG("End of sprintXML: TargetReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTargetReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TargetReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TargetReading_count; i++ )
    if ( data->TargetReading_array != NULL )
      off += emberExiXmlSprintfStructTargetReading(stringBuffer, off, &(data->TargetReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</TargetReadingList>");
  EXI_DEBUG("End of sprintXML: TargetReadingList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSupportedLocaleListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocaleListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupportedLocaleListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SupportedLocaleListLink>");
  EXI_DEBUG("End of sprintXML: SupportedLocaleListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceInformation(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceInformation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceInformation");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <gUID>");
  { int16u i;
    for ( i=0; i<data->gUID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->gUID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</gUID>");
  off += sprintf(stringBuffer + off, "  <mfDate>%d</mfDate>", data->mfDate);
  off += sprintf(stringBuffer + off, "  <mfHwVer>%s</mfHwVer>", data->mfHwVer);
  off += sprintf(stringBuffer + off, "  <mfID>%d</mfID>", data->mfID);
  off += sprintf(stringBuffer + off, "  <mfInfo>%s</mfInfo>", data->mfInfo_option);
  off += sprintf(stringBuffer + off, "  <mfModel>%s</mfModel>", data->mfModel);
  off += sprintf(stringBuffer + off, "  <mfSerNum>%s</mfSerNum>", data->mfSerNum);
  off += sprintf(stringBuffer + off, "  <primaryPower>%d</primaryPower>", data->primaryPower);
  off += sprintf(stringBuffer + off, "  <secondaryPower>%d</secondaryPower>", data->secondaryPower);
    if ( data->SupportedLocaleListLink_option != NULL )
      off += emberExiXmlSprintfStructSupportedLocaleListLink(stringBuffer, off, (data->SupportedLocaleListLink_option));
  off += sprintf(stringBuffer + off, "  <swActTime>%d</swActTime>", data->swActTime);
  off += sprintf(stringBuffer + off, "  <swVer>%s</swVer>", data->swVer);
  off += sprintf(stringBuffer + off, "</DeviceInformation>");
  EXI_DEBUG("End of sprintXML: DeviceInformation, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRegistrationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RegistrationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RegistrationListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</RegistrationListLink>");
  EXI_DEBUG("End of sprintXML: RegistrationListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMessagingProgram(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MessagingProgram");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveTextMessageListLink(stringBuffer, off, (data->ActiveTextMessageListLink_option));
  off += sprintf(stringBuffer + off, "  <locale>%s</locale>", data->locale);
    if ( data->TextMessageListLink_option != NULL )
      off += emberExiXmlSprintfStructTextMessageListLink(stringBuffer, off, (data->TextMessageListLink_option));
  off += sprintf(stringBuffer + off, "</MessagingProgram>");
  EXI_DEBUG("End of sprintXML: MessagingProgram, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MeterReading_count; i++ )
    if ( data->MeterReading_array != NULL )
      off += emberExiXmlSprintfStructMeterReading(stringBuffer, off, &(data->MeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MeterReadingList>");
  EXI_DEBUG("End of sprintXML: MeterReadingList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCreditRegister(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegister *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegister, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CreditRegister");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->creditAmount != NULL )
      off += emberExiXmlSprintfStructAccountingUnit(stringBuffer, off, (data->creditAmount));
  off += sprintf(stringBuffer + off, "  <creditType>%d</creditType>", data->creditType_option);
  off += sprintf(stringBuffer + off, "  <effectiveTime>%d</effectiveTime>", data->effectiveTime);
  off += sprintf(stringBuffer + off, "  <token>%s</token>", data->token);
  off += sprintf(stringBuffer + off, "</CreditRegister>");
  EXI_DEBUG("End of sprintXML: CreditRegister, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCreditRegisterList(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegisterList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CreditRegisterList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->CreditRegister_count; i++ )
    if ( data->CreditRegister_array != NULL )
      off += emberExiXmlSprintfStructCreditRegister(stringBuffer, off, &(data->CreditRegister_array[i]));
  }
  off += sprintf(stringBuffer + off, "</CreditRegisterList>");
  EXI_DEBUG("End of sprintXML: CreditRegisterList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMessagingProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MessagingProgramList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MessagingProgram_count; i++ )
    if ( data->MessagingProgram_array != NULL )
      off += emberExiXmlSprintfStructMessagingProgram(stringBuffer, off, &(data->MessagingProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MessagingProgramList>");
  EXI_DEBUG("End of sprintXML: MessagingProgramList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructHistoricalReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HistoricalReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</HistoricalReadingListLink>");
  EXI_DEBUG("End of sprintXML: HistoricalReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UsagePointLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</UsagePointLink>");
  EXI_DEBUG("End of sprintXML: UsagePointLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSupportedLocaleList(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocaleList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupportedLocaleList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->SupportedLocale_count; i++ )
    if ( data->SupportedLocale_array != NULL )
      off += emberExiXmlSprintfStructSupportedLocale(stringBuffer, off, &(data->SupportedLocale_array[i]));
  }
  off += sprintf(stringBuffer + off, "</SupportedLocaleList>");
  EXI_DEBUG("End of sprintXML: SupportedLocaleList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepaymentList(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PrepaymentList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Prepayment_count; i++ )
    if ( data->Prepayment_array != NULL )
      off += emberExiXmlSprintfStructPrepayment(stringBuffer, off, &(data->Prepayment_array[i]));
  }
  off += sprintf(stringBuffer + off, "</PrepaymentList>");
  EXI_DEBUG("End of sprintXML: PrepaymentList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargeListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ChargeListLink>");
  EXI_DEBUG("End of sprintXML: ChargeListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTariffProfileList(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TariffProfileList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TariffProfile_count; i++ )
    if ( data->TariffProfile_array != NULL )
      off += emberExiXmlSprintfStructTariffProfile(stringBuffer, off, &(data->TariffProfile_array[i]));
  }
  off += sprintf(stringBuffer + off, "</TariffProfileList>");
  EXI_DEBUG("End of sprintXML: TariffProfileList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingTypeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingTypeListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingTypeListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ReadingTypeListLink>");
  EXI_DEBUG("End of sprintXML: ReadingTypeListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTemperature(int8u *stringBuffer, int offset, EmberExiGeneratedTemperature *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Temperature, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Temperature");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <subject>%d</subject>", data->subject);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</Temperature>");
  EXI_DEBUG("End of sprintXML: Temperature, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPriceResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PriceResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>%s</category>", data->category_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "</PriceResponse>");
  EXI_DEBUG("End of sprintXML: PriceResponse, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepayOperationStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayOperationStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PrepayOperationStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->creditTypeChange_option != NULL )
      off += emberExiXmlSprintfStructCreditTypeChange(stringBuffer, off, (data->creditTypeChange_option));
  off += sprintf(stringBuffer + off, "  <creditTypeInUse>%d</creditTypeInUse>", data->creditTypeInUse_option);
    if ( data->serviceChange_option != NULL )
      off += emberExiXmlSprintfStructServiceChange(stringBuffer, off, (data->serviceChange_option));
  off += sprintf(stringBuffer + off, "  <serviceStatus>%d</serviceStatus>", data->serviceStatus);
  off += sprintf(stringBuffer + off, "</PrepayOperationStatus>");
  EXI_DEBUG("End of sprintXML: PrepayOperationStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPowerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PowerStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <batteryStatus>%d</batteryStatus>", data->batteryStatus);
  off += sprintf(stringBuffer + off, "  <currentPowerSource>%d</currentPowerSource>", data->currentPowerSource);
  off += sprintf(stringBuffer + off, "  <estimatedChargeRemaining>%d</estimatedChargeRemaining>", data->estimatedChargeRemaining_option);
  off += sprintf(stringBuffer + off, "  <estimatedTimeRemaining>%d</estimatedTimeRemaining>", data->estimatedTimeRemaining_option);
  off += sprintf(stringBuffer + off, "  <timeOnBattery>%d</timeOnBattery>", data->timeOnBattery_option);
  off += sprintf(stringBuffer + off, "</PowerStatus>");
  EXI_DEBUG("End of sprintXML: PowerStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <changedTime>%d</changedTime>", data->changedTime);
  off += sprintf(stringBuffer + off, "  <onCount>%d</onCount>", data->onCount_option);
  off += sprintf(stringBuffer + off, "  <opState>%d</opState>", data->opState_option);
  off += sprintf(stringBuffer + off, "  <opTime>%d</opTime>", data->opTime_option);
  { int16u i;
    for ( i=0; i<data->Temperature_count; i++ )
    if ( data->Temperature_array != NULL )
      off += emberExiXmlSprintfStructTemperature(stringBuffer, off, &(data->Temperature_array[i]));
  }
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
  off += sprintf(stringBuffer + off, "</DeviceStatus>");
  EXI_DEBUG("End of sprintXML: DeviceStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCharge(int8u *stringBuffer, int offset, EmberExiGeneratedCharge *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Charge, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Charge");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->IntervalBlockListLink_option != NULL )
      off += emberExiXmlSprintfStructIntervalBlockListLink(stringBuffer, off, (data->IntervalBlockListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "  <kind>%d</kind>", data->kind_option);
  off += sprintf(stringBuffer + off, "</Charge>");
  EXI_DEBUG("End of sprintXML: Charge, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructChargeList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ChargeList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ChargeList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Charge_count; i++ )
    if ( data->Charge_array != NULL )
      off += emberExiXmlSprintfStructCharge(stringBuffer, off, &(data->Charge_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ChargeList>");
  EXI_DEBUG("End of sprintXML: ChargeList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLoadShedAvailabilityList(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailabilityList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LoadShedAvailabilityList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->LoadShedAvailability_count; i++ )
    if ( data->LoadShedAvailability_array != NULL )
      off += emberExiXmlSprintfStructLoadShedAvailability(stringBuffer, off, &(data->LoadShedAvailability_array[i]));
  }
  off += sprintf(stringBuffer + off, "</LoadShedAvailabilityList>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailabilityList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFileList(int8u *stringBuffer, int offset, EmberExiGeneratedFileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FileList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->File_count; i++ )
    if ( data->File_array != NULL )
      off += emberExiXmlSprintfStructFile(stringBuffer, off, &(data->File_array[i]));
  }
  off += sprintf(stringBuffer + off, "</FileList>");
  EXI_DEBUG("End of sprintXML: FileList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceControlList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceControlList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDeviceControl_count; i++ )
    if ( data->EndDeviceControl_array != NULL )
      off += emberExiXmlSprintfStructEndDeviceControl(stringBuffer, off, &(data->EndDeviceControl_array[i]));
  }
  off += sprintf(stringBuffer + off, "</EndDeviceControlList>");
  EXI_DEBUG("End of sprintXML: EndDeviceControlList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTextResponse(int8u *stringBuffer, int offset, EmberExiGeneratedTextResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TextResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>%s</category>", data->category_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "</TextResponse>");
  EXI_DEBUG("End of sprintXML: TextResponse, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveProjectionReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveProjectionReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveProjectionReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveProjectionReadingListLink>");
  EXI_DEBUG("End of sprintXML: ActiveProjectionReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActiveTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTargetReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTargetReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveTargetReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveTargetReadingListLink>");
  EXI_DEBUG("End of sprintXML: ActiveTargetReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCustomerAccount(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccount *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccount, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAccount");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>%s</category>", data->category_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->ActiveProjectionReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveProjectionReadingListLink(stringBuffer, off, (data->ActiveProjectionReadingListLink_option));
    if ( data->ActiveTargetReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveTargetReadingListLink(stringBuffer, off, (data->ActiveTargetReadingListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->ChargeListLink_option != NULL )
      off += emberExiXmlSprintfStructChargeListLink(stringBuffer, off, (data->ChargeListLink_option));
  off += sprintf(stringBuffer + off, "  <currency>%d</currency>", data->currency_option);
    if ( data->HistoricalReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructHistoricalReadingListLink(stringBuffer, off, (data->HistoricalReadingListLink_option));
    if ( data->ProjectionReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructProjectionReadingListLink(stringBuffer, off, (data->ProjectionReadingListLink_option));
    if ( data->TargetReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructTargetReadingListLink(stringBuffer, off, (data->TargetReadingListLink_option));
  off += sprintf(stringBuffer + off, "</CustomerAccount>");
  EXI_DEBUG("End of sprintXML: CustomerAccount, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERProgramList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERProgram_count; i++ )
    if ( data->DERProgram_array != NULL )
      off += emberExiXmlSprintfStructDERProgram(stringBuffer, off, &(data->DERProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</DERProgramList>");
  EXI_DEBUG("End of sprintXML: DERProgramList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepayResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PrepayResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <category>%s</category>", data->category_option);
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->EndDeviceLink != NULL )
      off += emberExiXmlSprintfStructEndDeviceLink(stringBuffer, off, (data->EndDeviceLink));
    if ( data->ServiceSupplierLink != NULL )
      off += emberExiXmlSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink));
    if ( data->Signature_option != NULL )
      off += emberExiXmlSprintfStructSignature(stringBuffer, off, (data->Signature_option));
  off += sprintf(stringBuffer + off, "  <creditTypeApplied>%d</creditTypeApplied>", data->creditTypeApplied);
  off += sprintf(stringBuffer + off, "  <serviceStatusApplied>%d</serviceStatusApplied>", data->serviceStatusApplied);
  off += sprintf(stringBuffer + off, "</PrepayResponse>");
  EXI_DEBUG("End of sprintXML: PrepayResponse, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNetworkStatus(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NetworkStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NetworkStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "</NetworkStatus>");
  EXI_DEBUG("End of sprintXML: NetworkStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingPeriod(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriod *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriod, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingPeriod");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->interval_option != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval_option));
  off += sprintf(stringBuffer + off, "</BillingPeriod>");
  EXI_DEBUG("End of sprintXML: BillingPeriod, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingPeriodList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriodList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingPeriodList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->BillingPeriod_count; i++ )
    if ( data->BillingPeriod_array != NULL )
      off += emberExiXmlSprintfStructBillingPeriod(stringBuffer, off, &(data->BillingPeriod_array[i]));
  }
  off += sprintf(stringBuffer + off, "</BillingPeriodList>");
  EXI_DEBUG("End of sprintXML: BillingPeriodList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMirrorUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePointList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorUsagePointList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MirrorUsagePoint_count; i++ )
    if ( data->MirrorUsagePoint_array != NULL )
      off += emberExiXmlSprintfStructMirrorUsagePoint(stringBuffer, off, &(data->MirrorUsagePoint_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MirrorUsagePointList>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePointList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructActivation(int8u *stringBuffer, int offset, EmberExiGeneratedActivation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Activation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Activation");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <activateTime>%d</activateTime>", data->activateTime);
  off += sprintf(stringBuffer + off, "  <currentTime>%d</currentTime>", data->currentTime);
  off += sprintf(stringBuffer + off, "</Activation>");
  EXI_DEBUG("End of sprintXML: Activation, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAccountBalance(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalance *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountBalance, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AccountBalance");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->availableCredit != NULL )
      off += emberExiXmlSprintfStructAccountingUnit(stringBuffer, off, (data->availableCredit));
  off += sprintf(stringBuffer + off, "  <creditStatus>%d</creditStatus>", data->creditStatus_option);
    if ( data->emergencyCredit_option != NULL )
      off += emberExiXmlSprintfStructAccountingUnit(stringBuffer, off, (data->emergencyCredit_option));
  off += sprintf(stringBuffer + off, "  <emergencyCreditStatus>%d</emergencyCreditStatus>", data->emergencyCreditStatus_option);
  off += sprintf(stringBuffer + off, "</AccountBalance>");
  EXI_DEBUG("End of sprintXML: AccountBalance, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructHistoricalReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HistoricalReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->HistoricalReading_count; i++ )
    if ( data->HistoricalReading_array != NULL )
      off += emberExiXmlSprintfStructHistoricalReading(stringBuffer, off, &(data->HistoricalReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</HistoricalReadingList>");
  EXI_DEBUG("End of sprintXML: HistoricalReadingList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRegistration(int8u *stringBuffer, int offset, EmberExiGeneratedRegistration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Registration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Registration");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <installCode>%d</installCode>", data->installCode);
  off += sprintf(stringBuffer + off, "</Registration>");
  EXI_DEBUG("End of sprintXML: Registration, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNotificationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NotificationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NotificationListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</NotificationListLink>");
  EXI_DEBUG("End of sprintXML: NotificationListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMeterReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReadingLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</MeterReadingLink>");
  EXI_DEBUG("End of sprintXML: MeterReadingLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSubscriptionList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SubscriptionList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Subscription_count; i++ )
    if ( data->Subscription_array != NULL )
      off += emberExiXmlSprintfStructSubscription(stringBuffer, off, &(data->Subscription_array[i]));
  }
  off += sprintf(stringBuffer + off, "</SubscriptionList>");
  EXI_DEBUG("End of sprintXML: SubscriptionList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEndDeviceGroupList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceGroupList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceGroupList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all_option);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results_option);
  off += sprintf(stringBuffer + off, "  signatureRequired=\"%d\"", data->signatureRequired_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDeviceGroup_count; i++ )
    if ( data->EndDeviceGroup_array != NULL )
      off += emberExiXmlSprintfStructEndDeviceGroup(stringBuffer, off, &(data->EndDeviceGroup_array[i]));
  }
  off += sprintf(stringBuffer + off, "</EndDeviceGroupList>");
  EXI_DEBUG("End of sprintXML: EndDeviceGroupList, off=%d\n", off);
  return off - offset;
}


