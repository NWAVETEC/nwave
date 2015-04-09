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


int emberExiXmlSprintfStructDefaultDERControlLink(int8u *stringBuffer, int offset, EmberExiGeneratedDefaultDERControlLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DefaultDERControlLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DefaultDERControlLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DefaultDERControlLink>");
  EXI_DEBUG("End of sprintXML: DefaultDERControlLink, off=%d\n", off);
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


int emberExiXmlSprintfStructDERCurveListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurveListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERCurveListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERCurveListLink>");
  EXI_DEBUG("End of sprintXML: DERCurveListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructResource(int8u *stringBuffer, int offset, EmberExiGeneratedResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Resource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Resource");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "</IdentifiedObject>");
  EXI_DEBUG("End of sprintXML: IdentifiedObject, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERProgram");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->ActiveDERControlListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveDERControlListLink(stringBuffer, off, (data->ActiveDERControlListLink_option));
    if ( data->DefaultDERControlLink_option != NULL )
      off += emberExiXmlSprintfStructDefaultDERControlLink(stringBuffer, off, (data->DefaultDERControlLink_option));
    if ( data->DERControlListLink_option != NULL )
      off += emberExiXmlSprintfStructDERControlListLink(stringBuffer, off, (data->DERControlListLink_option));
    if ( data->DERCurveListLink_option != NULL )
      off += emberExiXmlSprintfStructDERCurveListLink(stringBuffer, off, (data->DERCurveListLink_option));
  off += sprintf(stringBuffer + off, "  <primacy>%d</primacy>", data->primacy);
  off += sprintf(stringBuffer + off, "</DERProgram>");
  EXI_DEBUG("End of sprintXML: DERProgram, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAssociatedDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedDERProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AssociatedDERProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AssociatedDERProgramListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</AssociatedDERProgramListLink>");
  EXI_DEBUG("End of sprintXML: AssociatedDERProgramListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAssociatedUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedUsagePointLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AssociatedUsagePointLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AssociatedUsagePointLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</AssociatedUsagePointLink>");
  EXI_DEBUG("End of sprintXML: AssociatedUsagePointLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCurrentDERProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedCurrentDERProgramLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurrentDERProgramLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CurrentDERProgramLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CurrentDERProgramLink>");
  EXI_DEBUG("End of sprintXML: CurrentDERProgramLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERAvailabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERAvailabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERAvailabilityLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERAvailabilityLink>");
  EXI_DEBUG("End of sprintXML: DERAvailabilityLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCapabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCapabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERCapabilityLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERCapabilityLink>");
  EXI_DEBUG("End of sprintXML: DERCapabilityLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERSettingsLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERSettingsLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERSettingsLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERSettingsLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERSettingsLink>");
  EXI_DEBUG("End of sprintXML: DERSettingsLink, off=%d\n", off);
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


int emberExiXmlSprintfStructSubscribableResource(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscribableResource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SubscribableResource");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SubscribableResource>");
  EXI_DEBUG("End of sprintXML: SubscribableResource, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDER(int8u *stringBuffer, int offset, EmberExiGeneratedDER *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DER, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DER");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->AssociatedDERProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructAssociatedDERProgramListLink(stringBuffer, off, (data->AssociatedDERProgramListLink_option));
    if ( data->AssociatedUsagePointLink_option != NULL )
      off += emberExiXmlSprintfStructAssociatedUsagePointLink(stringBuffer, off, (data->AssociatedUsagePointLink_option));
    if ( data->CurrentDERProgramLink_option != NULL )
      off += emberExiXmlSprintfStructCurrentDERProgramLink(stringBuffer, off, (data->CurrentDERProgramLink_option));
    if ( data->DERAvailabilityLink_option != NULL )
      off += emberExiXmlSprintfStructDERAvailabilityLink(stringBuffer, off, (data->DERAvailabilityLink_option));
    if ( data->DERCapabilityLink_option != NULL )
      off += emberExiXmlSprintfStructDERCapabilityLink(stringBuffer, off, (data->DERCapabilityLink_option));
    if ( data->DERSettingsLink_option != NULL )
      off += emberExiXmlSprintfStructDERSettingsLink(stringBuffer, off, (data->DERSettingsLink_option));
    if ( data->DERStatusLink_option != NULL )
      off += emberExiXmlSprintfStructDERStatusLink(stringBuffer, off, (data->DERStatusLink_option));
  off += sprintf(stringBuffer + off, "</DER>");
  EXI_DEBUG("End of sprintXML: DER, off=%d\n", off);
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


int emberExiXmlSprintfStructServiceSupplier(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplier *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplier, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ServiceSupplier");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <email>%s</email>", data->email_option);
  off += sprintf(stringBuffer + off, "  <phone>%s</phone>", data->phone_option);
  off += sprintf(stringBuffer + off, "  <providerID>%d</providerID>", data->providerID_option);
  off += sprintf(stringBuffer + off, "  <web>%s</web>", data->web_option);
  off += sprintf(stringBuffer + off, "</ServiceSupplier>");
  EXI_DEBUG("End of sprintXML: ServiceSupplier, off=%d\n", off);
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


int emberExiXmlSprintfStructReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  off += sprintf(stringBuffer + off, "  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->qualityFlags_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <touTier>%d</touTier>", data->touTier_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "</ReadingBase>");
  EXI_DEBUG("End of sprintXML: ReadingBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReading(int8u *stringBuffer, int offset, EmberExiGeneratedReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Reading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Reading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  off += sprintf(stringBuffer + off, "  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->qualityFlags_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <touTier>%d</touTier>", data->touTier_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  off += sprintf(stringBuffer + off, "  <localID>");
  { int16u i;
    for ( i=0; i<data->localID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->localID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</localID>");
  off += sprintf(stringBuffer + off, "</Reading>");
  EXI_DEBUG("End of sprintXML: Reading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCharge(int8u *stringBuffer, int offset, EmberExiGeneratedCharge *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Charge, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Charge");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <kind>%d</kind>", data->kind_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</Charge>");
  EXI_DEBUG("End of sprintXML: Charge, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingReading(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock_option);
  off += sprintf(stringBuffer + off, "  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->qualityFlags_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <touTier>%d</touTier>", data->touTier_option);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value_option);
  { int16u i;
    for ( i=0; i<data->Charge_count; i++ )
    if ( data->Charge_array != NULL )
      off += emberExiXmlSprintfStructCharge(stringBuffer, off, &(data->Charge_array[i]));
  }
  off += sprintf(stringBuffer + off, "</BillingReading>");
  EXI_DEBUG("End of sprintXML: BillingReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructList(int8u *stringBuffer, int offset, EmberExiGeneratedList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: List, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<List");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</List>");
  EXI_DEBUG("End of sprintXML: List, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->BillingReading_count; i++ )
    if ( data->BillingReading_array != NULL )
      off += emberExiXmlSprintfStructBillingReading(stringBuffer, off, &(data->BillingReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</BillingReadingList>");
  EXI_DEBUG("End of sprintXML: BillingReadingList, off=%d\n", off);
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


int emberExiXmlSprintfStructUsagePointBase(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UsagePointBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
    if ( data->MeterReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructMeterReadingListLink(stringBuffer, off, (data->MeterReadingListLink_option));
  off += sprintf(stringBuffer + off, "</UsagePoint>");
  EXI_DEBUG("End of sprintXML: UsagePoint, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRPLSourceRoutes(int8u *stringBuffer, int offset, EmberExiGeneratedRPLSourceRoutes *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLSourceRoutes, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RPLSourceRoutes");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <DestAddress>");
  { int16u i;
    for ( i=0; i<data->DestAddress.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->DestAddress.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</DestAddress>");
  off += sprintf(stringBuffer + off, "  <SourceRoute>");
  { int16u i;
    for ( i=0; i<data->SourceRoute.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->SourceRoute.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</SourceRoute>");
  off += sprintf(stringBuffer + off, "</RPLSourceRoutes>");
  EXI_DEBUG("End of sprintXML: RPLSourceRoutes, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSubscriptionBase(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SubscriptionBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  off += sprintf(stringBuffer + off, "</SubscriptionBase>");
  EXI_DEBUG("End of sprintXML: SubscriptionBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNotification(int8u *stringBuffer, int offset, EmberExiGeneratedNotification *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Notification, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Notification");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  off += sprintf(stringBuffer + off, "  <newResourceURI>%s</newResourceURI>", data->newResourceURI_option);
    if ( data->Resource_option != NULL )
      off += emberExiXmlSprintfStructResource(stringBuffer, off, (data->Resource_option));
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "  <subscriptionURI>%s</subscriptionURI>", data->subscriptionURI);
  off += sprintf(stringBuffer + off, "</Notification>");
  EXI_DEBUG("End of sprintXML: Notification, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNotificationList(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NotificationList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NotificationList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructFileStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FileStatusLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FileStatusLink>");
  EXI_DEBUG("End of sprintXML: FileStatusLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIPInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterfaceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPInterfaceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IPInterfaceListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</IPInterfaceListLink>");
  EXI_DEBUG("End of sprintXML: IPInterfaceListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLoadShedAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LoadShedAvailabilityLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</LoadShedAvailabilityLink>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailabilityLink, off=%d\n", off);
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


int emberExiXmlSprintfStructAbstractDevice(int8u *stringBuffer, int offset, EmberExiGeneratedAbstractDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AbstractDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AbstractDevice");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      off += emberExiXmlSprintfStructFileStatusLink(stringBuffer, off, (data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      off += emberExiXmlSprintfStructIPInterfaceListLink(stringBuffer, off, (data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      off += emberExiXmlSprintfStructLoadShedAvailabilityLink(stringBuffer, off, (data->LoadShedAvailabilityLink_option));
  off += sprintf(stringBuffer + off, "  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
  off += sprintf(stringBuffer + off, "  <sFDI>%d</sFDI>", data->sFDI);
  off += sprintf(stringBuffer + off, "</AbstractDevice>");
  EXI_DEBUG("End of sprintXML: AbstractDevice, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSelfDevice(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SelfDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SelfDevice");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      off += emberExiXmlSprintfStructFileStatusLink(stringBuffer, off, (data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      off += emberExiXmlSprintfStructIPInterfaceListLink(stringBuffer, off, (data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      off += emberExiXmlSprintfStructLoadShedAvailabilityLink(stringBuffer, off, (data->LoadShedAvailabilityLink_option));
  off += sprintf(stringBuffer + off, "  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
  off += sprintf(stringBuffer + off, "  <sFDI>%d</sFDI>", data->sFDI);
  off += sprintf(stringBuffer + off, "</SelfDevice>");
  EXI_DEBUG("End of sprintXML: SelfDevice, off=%d\n", off);
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


int emberExiXmlSprintfStructCustomerAccountListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccountListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAccountListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CustomerAccountListLink>");
  EXI_DEBUG("End of sprintXML: CustomerAccountListLink, off=%d\n", off);
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


int emberExiXmlSprintfStructResponseSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSetListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseSetListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ResponseSetListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ResponseSetListLink>");
  EXI_DEBUG("End of sprintXML: ResponseSetListLink, off=%d\n", off);
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


int emberExiXmlSprintfStructFunctionSetAssignmentsBase(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignmentsBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FunctionSetAssignmentsBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->CustomerAccountListLink_option != NULL )
      off += emberExiXmlSprintfStructCustomerAccountListLink(stringBuffer, off, (data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      off += emberExiXmlSprintfStructResponseSetListLink(stringBuffer, off, (data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      off += emberExiXmlSprintfStructTariffProfileListLink(stringBuffer, off, (data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
  off += sprintf(stringBuffer + off, "</FunctionSetAssignmentsBase>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignmentsBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCurveData(int8u *stringBuffer, int offset, EmberExiGeneratedCurveData *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurveData, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CurveData");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <excitation>%d</excitation>", data->excitation_option);
  off += sprintf(stringBuffer + off, "  <xvalue>%d</xvalue>", data->xvalue);
  off += sprintf(stringBuffer + off, "  <yvalue>%d</yvalue>", data->yvalue);
  off += sprintf(stringBuffer + off, "</CurveData>");
  EXI_DEBUG("End of sprintXML: CurveData, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERCurve(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurve *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurve, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERCurve");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
  { int16u i;
    for ( i=0; i<data->CurveData_count; i++ )
    if ( data->CurveData_array != NULL )
      off += emberExiXmlSprintfStructCurveData(stringBuffer, off, &(data->CurveData_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <curveType>%d</curveType>", data->curveType);
  off += sprintf(stringBuffer + off, "  <rampDecTms>%d</rampDecTms>", data->rampDecTms_option);
  off += sprintf(stringBuffer + off, "  <rampIncTms>%d</rampIncTms>", data->rampIncTms_option);
  off += sprintf(stringBuffer + off, "  <rampPT1Tms>%d</rampPT1Tms>", data->rampPT1Tms_option);
  off += sprintf(stringBuffer + off, "  <xMultiplier>%d</xMultiplier>", data->xMultiplier);
  off += sprintf(stringBuffer + off, "  <yMultiplier>%d</yMultiplier>", data->yMultiplier);
  off += sprintf(stringBuffer + off, "  <yRefType>%d</yRefType>", data->yRefType);
  off += sprintf(stringBuffer + off, "</DERCurve>");
  EXI_DEBUG("End of sprintXML: DERCurve, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEventStatus(int8u *stringBuffer, int offset, EmberExiGeneratedEventStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EventStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EventStatus");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <currentStatus>%d</currentStatus>", data->currentStatus);
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <potentiallySuperseded>%d</potentiallySuperseded>", data->potentiallySuperseded);
  off += sprintf(stringBuffer + off, "  <potentiallySupersededTime>%d</potentiallySupersededTime>", data->potentiallySupersededTime_option);
  off += sprintf(stringBuffer + off, "  <reason>%s</reason>", data->reason_option);
  off += sprintf(stringBuffer + off, "</EventStatus>");
  EXI_DEBUG("End of sprintXML: EventStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructConsumptionTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ConsumptionTariffIntervalListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ConsumptionTariffIntervalListLink>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRespondableResource(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RespondableResource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RespondableResource");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</RespondableResource>");
  EXI_DEBUG("End of sprintXML: RespondableResource, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRespondableSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableSubscribableIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RespondableSubscribableIdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RespondableSubscribableIdentifiedObject");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "</RespondableSubscribableIdentifiedObject>");
  EXI_DEBUG("End of sprintXML: RespondableSubscribableIdentifiedObject, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEvent(int8u *stringBuffer, int offset, EmberExiGeneratedEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Event, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Event");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "</Event>");
  EXI_DEBUG("End of sprintXML: Event, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRandomizableEvent(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizableEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RandomizableEvent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RandomizableEvent");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
  off += sprintf(stringBuffer + off, "</RandomizableEvent>");
  EXI_DEBUG("End of sprintXML: RandomizableEvent, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->ConsumptionTariffIntervalListLink_option != NULL )
      off += emberExiXmlSprintfStructConsumptionTariffIntervalListLink(stringBuffer, off, (data->ConsumptionTariffIntervalListLink_option));
  off += sprintf(stringBuffer + off, "  <touTier>%d</touTier>", data->touTier);
  off += sprintf(stringBuffer + off, "</TimeTariffInterval>");
  EXI_DEBUG("End of sprintXML: TimeTariffInterval, off=%d\n", off);
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


int emberExiXmlSprintfStructResponseSet(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ResponseSet");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->ResponseListLink_option != NULL )
      off += emberExiXmlSprintfStructResponseListLink(stringBuffer, off, (data->ResponseListLink_option));
  off += sprintf(stringBuffer + off, "</ResponseSet>");
  EXI_DEBUG("End of sprintXML: ResponseSet, off=%d\n", off);
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


int emberExiXmlSprintfStructCustomerAgreement(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreement *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAgreement, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAgreement");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->ActiveProjectionReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveProjectionReadingListLink(stringBuffer, off, (data->ActiveProjectionReadingListLink_option));
    if ( data->ActiveTargetReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveTargetReadingListLink(stringBuffer, off, (data->ActiveTargetReadingListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->HistoricalReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructHistoricalReadingListLink(stringBuffer, off, (data->HistoricalReadingListLink_option));
    if ( data->PrepaymentLink_option != NULL )
      off += emberExiXmlSprintfStructPrepaymentLink(stringBuffer, off, (data->PrepaymentLink_option));
    if ( data->ProjectionReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructProjectionReadingListLink(stringBuffer, off, (data->ProjectionReadingListLink_option));
  off += sprintf(stringBuffer + off, "  <serviceAccount>%s</serviceAccount>", data->serviceAccount_option);
  off += sprintf(stringBuffer + off, "  <serviceLocation>%s</serviceLocation>", data->serviceLocation_option);
    if ( data->TargetReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructTargetReadingListLink(stringBuffer, off, (data->TargetReadingListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      off += emberExiXmlSprintfStructTariffProfileLink(stringBuffer, off, (data->TariffProfileLink_option));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "</CustomerAgreement>");
  EXI_DEBUG("End of sprintXML: CustomerAgreement, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructOffset(int8u *stringBuffer, int offset, EmberExiGeneratedOffset *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Offset, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Offset");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <coolingOffset>%d</coolingOffset>", data->coolingOffset_option);
  off += sprintf(stringBuffer + off, "  <heatingOffset>%d</heatingOffset>", data->heatingOffset_option);
  off += sprintf(stringBuffer + off, "  <loadAdjustmentPercentageOffset>%d</loadAdjustmentPercentageOffset>", data->loadAdjustmentPercentageOffset_option);
  off += sprintf(stringBuffer + off, "</Offset>");
  EXI_DEBUG("End of sprintXML: Offset, off=%d\n", off);
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


int emberExiXmlSprintfStructFileLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FileLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FileLink>");
  EXI_DEBUG("End of sprintXML: FileLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFixedPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedFixedPowerFactor *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FixedPowerFactor, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FixedPowerFactor");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <displacement>%d</displacement>", data->displacement);
  off += sprintf(stringBuffer + off, "  <excitation>%d</excitation>", data->excitation);
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "</FixedPowerFactor>");
  EXI_DEBUG("End of sprintXML: FixedPowerFactor, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRPLInstanceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRPLInstanceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLInstanceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RPLInstanceListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</RPLInstanceListLink>");
  EXI_DEBUG("End of sprintXML: RPLInstanceListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIPAddr(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddr *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPAddr, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IPAddr");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <address>");
  { int16u i;
    for ( i=0; i<data->address.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->address.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</address>");
    if ( data->RPLInstanceListLink_option != NULL )
      off += emberExiXmlSprintfStructRPLInstanceListLink(stringBuffer, off, (data->RPLInstanceListLink_option));
  off += sprintf(stringBuffer + off, "</IPAddr>");
  EXI_DEBUG("End of sprintXML: IPAddr, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIPAddrList(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddrList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPAddrList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IPAddrList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->IPAddr_count; i++ )
    if ( data->IPAddr_array != NULL )
      off += emberExiXmlSprintfStructIPAddr(stringBuffer, off, &(data->IPAddr_array[i]));
  }
  off += sprintf(stringBuffer + off, "</IPAddrList>");
  EXI_DEBUG("End of sprintXML: IPAddrList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructConnectStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedConnectStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConnectStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ConnectStatusType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</ConnectStatusType>");
  EXI_DEBUG("End of sprintXML: ConnectStatusType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructInverterStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedInverterStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: InverterStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<InverterStatusType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</InverterStatusType>");
  EXI_DEBUG("End of sprintXML: InverterStatusType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLocalControlModeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedLocalControlModeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LocalControlModeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LocalControlModeStatusType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</LocalControlModeStatusType>");
  EXI_DEBUG("End of sprintXML: LocalControlModeStatusType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructManufacturerStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedManufacturerStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ManufacturerStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ManufacturerStatusType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <value>%s</value>", data->value);
  off += sprintf(stringBuffer + off, "</ManufacturerStatusType>");
  EXI_DEBUG("End of sprintXML: ManufacturerStatusType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructOperationalModeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedOperationalModeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: OperationalModeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OperationalModeStatusType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</OperationalModeStatusType>");
  EXI_DEBUG("End of sprintXML: OperationalModeStatusType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructStateOfChargeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedStateOfChargeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: StateOfChargeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<StateOfChargeStatusType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</StateOfChargeStatusType>");
  EXI_DEBUG("End of sprintXML: StateOfChargeStatusType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructStorageModeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedStorageModeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: StorageModeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<StorageModeStatusType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTime>%d</dateTime>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</StorageModeStatusType>");
  EXI_DEBUG("End of sprintXML: StorageModeStatusType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->genConnectStatus_option != NULL )
      off += emberExiXmlSprintfStructConnectStatusType(stringBuffer, off, (data->genConnectStatus_option));
    if ( data->inverterStatus_option != NULL )
      off += emberExiXmlSprintfStructInverterStatusType(stringBuffer, off, (data->inverterStatus_option));
    if ( data->localControlModeStatus_option != NULL )
      off += emberExiXmlSprintfStructLocalControlModeStatusType(stringBuffer, off, (data->localControlModeStatus_option));
    if ( data->manufacturerStatus_option != NULL )
      off += emberExiXmlSprintfStructManufacturerStatusType(stringBuffer, off, (data->manufacturerStatus_option));
    if ( data->operationalModeStatus_option != NULL )
      off += emberExiXmlSprintfStructOperationalModeStatusType(stringBuffer, off, (data->operationalModeStatus_option));
  off += sprintf(stringBuffer + off, "  <readingTime>%d</readingTime>", data->readingTime);
    if ( data->stateOfChargeStatus_option != NULL )
      off += emberExiXmlSprintfStructStateOfChargeStatusType(stringBuffer, off, (data->stateOfChargeStatus_option));
    if ( data->storageModeStatus_option != NULL )
      off += emberExiXmlSprintfStructStorageModeStatusType(stringBuffer, off, (data->storageModeStatus_option));
    if ( data->storConnectStatus_option != NULL )
      off += emberExiXmlSprintfStructConnectStatusType(stringBuffer, off, (data->storConnectStatus_option));
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


int emberExiXmlSprintfStructActivePower(int8u *stringBuffer, int offset, EmberExiGeneratedActivePower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActivePower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActivePower");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</ActivePower>");
  EXI_DEBUG("End of sprintXML: ActivePower, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->ActiveEndDeviceControlListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveEndDeviceControlListLink(stringBuffer, off, (data->ActiveEndDeviceControlListLink_option));
  off += sprintf(stringBuffer + off, "  <availabilityUpdatePercentChangeThreshold>%d</availabilityUpdatePercentChangeThreshold>", data->availabilityUpdatePercentChangeThreshold_option);
    if ( data->availabilityUpdatePowerChangeThreshold_option != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->availabilityUpdatePowerChangeThreshold_option));
    if ( data->EndDeviceControlListLink_option != NULL )
      off += emberExiXmlSprintfStructEndDeviceControlListLink(stringBuffer, off, (data->EndDeviceControlListLink_option));
  off += sprintf(stringBuffer + off, "  <primacy>%d</primacy>", data->primacy);
  off += sprintf(stringBuffer + off, "</DemandResponseProgram>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgram, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSubscribableList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscribableList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SubscribableList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SubscribableList>");
  EXI_DEBUG("End of sprintXML: SubscribableList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDemandResponseProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DemandResponseProgramList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructLogEvent(int8u *stringBuffer, int offset, EmberExiGeneratedLogEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEvent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LogEvent");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  off += sprintf(stringBuffer + off, "  <extendedData>%d</extendedData>", data->extendedData_option);
  off += sprintf(stringBuffer + off, "  <functionSet>%d</functionSet>", data->functionSet);
  off += sprintf(stringBuffer + off, "  <logEventCode>%d</logEventCode>", data->logEventCode);
  off += sprintf(stringBuffer + off, "  <logEventID>%d</logEventID>", data->logEventID);
  off += sprintf(stringBuffer + off, "  <logEventPEN>%d</logEventPEN>", data->logEventPEN);
  off += sprintf(stringBuffer + off, "  <profileID>%d</profileID>", data->profileID);
  off += sprintf(stringBuffer + off, "</LogEvent>");
  EXI_DEBUG("End of sprintXML: LogEvent, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLogEventList(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEventList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LogEventList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructNeighborListLink(int8u *stringBuffer, int offset, EmberExiGeneratedNeighborListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NeighborListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NeighborListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</NeighborListLink>");
  EXI_DEBUG("End of sprintXML: NeighborListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIEEE_802_15_4(int8u *stringBuffer, int offset, EmberExiGeneratedIEEE_802_15_4 *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IEEE_802_15_4, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IEEE_802_15_4");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <capabilityInfo>");
  { int16u i;
    for ( i=0; i<data->capabilityInfo.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->capabilityInfo.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</capabilityInfo>");
    if ( data->NeighborListLink_option != NULL )
      off += emberExiXmlSprintfStructNeighborListLink(stringBuffer, off, (data->NeighborListLink_option));
  off += sprintf(stringBuffer + off, "  <shortAddress>%d</shortAddress>", data->shortAddress);
  off += sprintf(stringBuffer + off, "</IEEE_802_15_4>");
  EXI_DEBUG("End of sprintXML: IEEE_802_15_4, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructNeighbor(int8u *stringBuffer, int offset, EmberExiGeneratedNeighbor *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Neighbor, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Neighbor");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <isChild>%d</isChild>", data->isChild);
  off += sprintf(stringBuffer + off, "  <linkQuality>%d</linkQuality>", data->linkQuality);
  off += sprintf(stringBuffer + off, "  <shortAddress>%d</shortAddress>", data->shortAddress);
  off += sprintf(stringBuffer + off, "</Neighbor>");
  EXI_DEBUG("End of sprintXML: Neighbor, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRPLSourceRoutesListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRPLSourceRoutesListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLSourceRoutesListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RPLSourceRoutesListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</RPLSourceRoutesListLink>");
  EXI_DEBUG("End of sprintXML: RPLSourceRoutesListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERProgramLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERProgramLink>");
  EXI_DEBUG("End of sprintXML: DERProgramLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLLInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterfaceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LLInterfaceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LLInterfaceListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</LLInterfaceListLink>");
  EXI_DEBUG("End of sprintXML: LLInterfaceListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTime(int8u *stringBuffer, int offset, EmberExiGeneratedTime *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Time, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Time");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <currentTime>%d</currentTime>", data->currentTime);
  off += sprintf(stringBuffer + off, "  <dstEndTime>%d</dstEndTime>", data->dstEndTime);
  off += sprintf(stringBuffer + off, "  <dstOffset>%d</dstOffset>", data->dstOffset);
  off += sprintf(stringBuffer + off, "  <dstStartTime>%d</dstStartTime>", data->dstStartTime);
  off += sprintf(stringBuffer + off, "  <localTime>%d</localTime>", data->localTime_option);
  off += sprintf(stringBuffer + off, "  <quality>%d</quality>", data->quality);
  off += sprintf(stringBuffer + off, "  <tzOffset>%d</tzOffset>", data->tzOffset);
  off += sprintf(stringBuffer + off, "</Time>");
  EXI_DEBUG("End of sprintXML: Time, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UsagePointList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructUnitValueType(int8u *stringBuffer, int offset, EmberExiGeneratedUnitValueType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UnitValueType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UnitValueType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <unit>%d</unit>", data->unit);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</UnitValueType>");
  EXI_DEBUG("End of sprintXML: UnitValueType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingType(int8u *stringBuffer, int offset, EmberExiGeneratedReadingType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingType");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <accumulationBehaviour>%d</accumulationBehaviour>", data->accumulationBehaviour_option);
    if ( data->calorificValue_option != NULL )
      off += emberExiXmlSprintfStructUnitValueType(stringBuffer, off, (data->calorificValue_option));
  off += sprintf(stringBuffer + off, "  <commodity>%d</commodity>", data->commodity_option);
    if ( data->conversionFactor_option != NULL )
      off += emberExiXmlSprintfStructUnitValueType(stringBuffer, off, (data->conversionFactor_option));
  off += sprintf(stringBuffer + off, "  <dataQualifier>%d</dataQualifier>", data->dataQualifier_option);
  off += sprintf(stringBuffer + off, "  <flowDirection>%d</flowDirection>", data->flowDirection_option);
  off += sprintf(stringBuffer + off, "  <intervalLength>%d</intervalLength>", data->intervalLength_option);
  off += sprintf(stringBuffer + off, "  <kind>%d</kind>", data->kind_option);
  off += sprintf(stringBuffer + off, "  <maxNumberOfIntervals>%d</maxNumberOfIntervals>", data->maxNumberOfIntervals_option);
  off += sprintf(stringBuffer + off, "  <numberOfConsumptionBlocks>%d</numberOfConsumptionBlocks>", data->numberOfConsumptionBlocks_option);
  off += sprintf(stringBuffer + off, "  <numberOfTouTiers>%d</numberOfTouTiers>", data->numberOfTouTiers_option);
  off += sprintf(stringBuffer + off, "  <phase>%d</phase>", data->phase_option);
  off += sprintf(stringBuffer + off, "  <powerOfTenMultiplier>%d</powerOfTenMultiplier>", data->powerOfTenMultiplier_option);
  off += sprintf(stringBuffer + off, "  <subIntervalLength>%d</subIntervalLength>", data->subIntervalLength_option);
  off += sprintf(stringBuffer + off, "  <supplyLimit>%d</supplyLimit>", data->supplyLimit_option);
  off += sprintf(stringBuffer + off, "  <tieredConsumptionBlocks>%d</tieredConsumptionBlocks>", data->tieredConsumptionBlocks_option);
  off += sprintf(stringBuffer + off, "  <uom>%d</uom>", data->uom_option);
  off += sprintf(stringBuffer + off, "</ReadingType>");
  EXI_DEBUG("End of sprintXML: ReadingType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructApplianceLoadReduction(int8u *stringBuffer, int offset, EmberExiGeneratedApplianceLoadReduction *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ApplianceLoadReduction, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ApplianceLoadReduction");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "</ApplianceLoadReduction>");
  EXI_DEBUG("End of sprintXML: ApplianceLoadReduction, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, "  <coolingSetpoint>%d</coolingSetpoint>", data->coolingSetpoint_option);
  off += sprintf(stringBuffer + off, "  <heatingSetpoint>%d</heatingSetpoint>", data->heatingSetpoint_option);
  off += sprintf(stringBuffer + off, "</SetPoint>");
  EXI_DEBUG("End of sprintXML: SetPoint, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->ApplianceLoadReduction_option != NULL )
      off += emberExiXmlSprintfStructApplianceLoadReduction(stringBuffer, off, (data->ApplianceLoadReduction_option));
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
    if ( data->Offset_option != NULL )
      off += emberExiXmlSprintfStructOffset(stringBuffer, off, (data->Offset_option));
  off += sprintf(stringBuffer + off, "  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      off += emberExiXmlSprintfStructSetPoint(stringBuffer, off, (data->SetPoint_option));
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "</SupplyInterruptionOverride>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverride, off=%d\n", off);
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


int emberExiXmlSprintfStructSelfDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDeviceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SelfDeviceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SelfDeviceLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SelfDeviceLink>");
  EXI_DEBUG("End of sprintXML: SelfDeviceLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceCapability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceCapability");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->CustomerAccountListLink_option != NULL )
      off += emberExiXmlSprintfStructCustomerAccountListLink(stringBuffer, off, (data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      off += emberExiXmlSprintfStructResponseSetListLink(stringBuffer, off, (data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      off += emberExiXmlSprintfStructTariffProfileListLink(stringBuffer, off, (data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      off += emberExiXmlSprintfStructEndDeviceListLink(stringBuffer, off, (data->EndDeviceListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      off += emberExiXmlSprintfStructMirrorUsagePointListLink(stringBuffer, off, (data->MirrorUsagePointListLink_option));
    if ( data->SelfDeviceLink_option != NULL )
      off += emberExiXmlSprintfStructSelfDeviceLink(stringBuffer, off, (data->SelfDeviceLink_option));
  off += sprintf(stringBuffer + off, "</DeviceCapability>");
  EXI_DEBUG("End of sprintXML: DeviceCapability, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFileStatus(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FileStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <activateTime>%d</activateTime>", data->activateTime_option);
    if ( data->FileLink_option != NULL )
      off += emberExiXmlSprintfStructFileLink(stringBuffer, off, (data->FileLink_option));
  off += sprintf(stringBuffer + off, "  <loadPercent>%d</loadPercent>", data->loadPercent);
  off += sprintf(stringBuffer + off, "  <nextRequestAttempt>%d</nextRequestAttempt>", data->nextRequestAttempt);
  off += sprintf(stringBuffer + off, "  <request503Count>%d</request503Count>", data->request503Count);
  off += sprintf(stringBuffer + off, "  <requestFailCount>%d</requestFailCount>", data->requestFailCount);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "  <statusTime>%d</statusTime>", data->statusTime);
  off += sprintf(stringBuffer + off, "</FileStatus>");
  EXI_DEBUG("End of sprintXML: FileStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERCurveLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurveLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERCurveLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</DERCurveLink>");
  EXI_DEBUG("End of sprintXML: DERCurveLink, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
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
  off += sprintf(stringBuffer + off, "  <monetaryUnit>%d</monetaryUnit>", data->monetaryUnit);
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
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
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      off += emberExiXmlSprintfStructUsagePoint(stringBuffer, off, &(data->UsagePoint_array[i]));
  }
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "</Prepayment>");
  EXI_DEBUG("End of sprintXML: Prepayment, off=%d\n", off);
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


int emberExiXmlSprintfStructReadingSetBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSetBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingSetBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
  off += sprintf(stringBuffer + off, "</ReadingSetBase>");
  EXI_DEBUG("End of sprintXML: ReadingSetBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMirrorReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorReadingSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorReadingSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorReadingSet");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      off += emberExiXmlSprintfStructReading(stringBuffer, off, &(data->Reading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MirrorReadingSet>");
  EXI_DEBUG("End of sprintXML: MirrorReadingSet, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReadingBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "</MeterReadingBase>");
  EXI_DEBUG("End of sprintXML: MeterReadingBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMirrorMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorMeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorMeterReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <lastUpdateTime>%d</lastUpdateTime>", data->lastUpdateTime_option);
  { int16u i;
    for ( i=0; i<data->MirrorReadingSet_count; i++ )
    if ( data->MirrorReadingSet_array != NULL )
      off += emberExiXmlSprintfStructMirrorReadingSet(stringBuffer, off, &(data->MirrorReadingSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <nextUpdateTime>%d</nextUpdateTime>", data->nextUpdateTime_option);
    if ( data->Reading_option != NULL )
      off += emberExiXmlSprintfStructReading(stringBuffer, off, (data->Reading_option));
    if ( data->ReadingType_option != NULL )
      off += emberExiXmlSprintfStructReadingType(stringBuffer, off, (data->ReadingType_option));
  off += sprintf(stringBuffer + off, "</MirrorMeterReading>");
  EXI_DEBUG("End of sprintXML: MirrorMeterReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMirrorUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorUsagePoint");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status);
  off += sprintf(stringBuffer + off, "  <deviceLFDI>");
  { int16u i;
    for ( i=0; i<data->deviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceLFDI>");
  { int16u i;
    for ( i=0; i<data->MirrorMeterReading_count; i++ )
    if ( data->MirrorMeterReading_array != NULL )
      off += emberExiXmlSprintfStructMirrorMeterReading(stringBuffer, off, &(data->MirrorMeterReading_array[i]));
  }
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


int emberExiXmlSprintfStructRPLInstance(int8u *stringBuffer, int offset, EmberExiGeneratedRPLInstance *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLInstance, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RPLInstance");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <DODAGid>%d</DODAGid>", data->DODAGid);
  off += sprintf(stringBuffer + off, "  <DODAGroot>%d</DODAGroot>", data->DODAGroot);
  off += sprintf(stringBuffer + off, "  <flags>%d</flags>", data->flags);
  off += sprintf(stringBuffer + off, "  <groundedFlag>%d</groundedFlag>", data->groundedFlag);
  off += sprintf(stringBuffer + off, "  <MOP>%d</MOP>", data->MOP);
  off += sprintf(stringBuffer + off, "  <PRF>%d</PRF>", data->PRF);
  off += sprintf(stringBuffer + off, "  <rank>%d</rank>", data->rank);
  off += sprintf(stringBuffer + off, "  <RPLInstanceID>%d</RPLInstanceID>", data->RPLInstanceID);
    if ( data->RPLSourceRoutesListLink_option != NULL )
      off += emberExiXmlSprintfStructRPLSourceRoutesListLink(stringBuffer, off, (data->RPLSourceRoutesListLink_option));
  off += sprintf(stringBuffer + off, "  <versionNumber>%d</versionNumber>", data->versionNumber);
  off += sprintf(stringBuffer + off, "</RPLInstance>");
  EXI_DEBUG("End of sprintXML: RPLInstance, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFixedPointType(int8u *stringBuffer, int offset, EmberExiGeneratedFixedPointType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FixedPointType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FixedPointType");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</FixedPointType>");
  EXI_DEBUG("End of sprintXML: FixedPointType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingSetListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingReadingSetListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</BillingReadingSetListLink>");
  EXI_DEBUG("End of sprintXML: BillingReadingSetListLink, off=%d\n", off);
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


int emberExiXmlSprintfStructBillingMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedBillingMeterReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingMeterReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingMeterReadingBase");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
  off += sprintf(stringBuffer + off, "</BillingMeterReadingBase>");
  EXI_DEBUG("End of sprintXML: BillingMeterReadingBase, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructProjectionReading(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ProjectionReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
  off += sprintf(stringBuffer + off, "</ProjectionReading>");
  EXI_DEBUG("End of sprintXML: ProjectionReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructProjectionReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ProjectionReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <availabilityDuration>%d</availabilityDuration>", data->availabilityDuration_option);
    if ( data->DemandResponseProgramLink_option != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgramLink(stringBuffer, off, (data->DemandResponseProgramLink_option));
  off += sprintf(stringBuffer + off, "  <sheddablePercent>%d</sheddablePercent>", data->sheddablePercent_option);
    if ( data->sheddablePower_option != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->sheddablePower_option));
  off += sprintf(stringBuffer + off, "</LoadShedAvailability>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailability, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIPAddrListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddrListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPAddrListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IPAddrListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</IPAddrListLink>");
  EXI_DEBUG("End of sprintXML: IPAddrListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIPInterface(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterface *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPInterface, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IPInterface");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ifDescr>%s</ifDescr>", data->ifDescr_option);
  off += sprintf(stringBuffer + off, "  <ifHighSpeed>%d</ifHighSpeed>", data->ifHighSpeed_option);
  off += sprintf(stringBuffer + off, "  <ifInBroadcastPkts>%d</ifInBroadcastPkts>", data->ifInBroadcastPkts_option);
  off += sprintf(stringBuffer + off, "  <ifIndex>%d</ifIndex>", data->ifIndex_option);
  off += sprintf(stringBuffer + off, "  <ifInDiscards>%d</ifInDiscards>", data->ifInDiscards_option);
  off += sprintf(stringBuffer + off, "  <ifInErrors>%d</ifInErrors>", data->ifInErrors_option);
  off += sprintf(stringBuffer + off, "  <ifInMulticastPkts>%d</ifInMulticastPkts>", data->ifInMulticastPkts_option);
  off += sprintf(stringBuffer + off, "  <ifInOctets>%d</ifInOctets>", data->ifInOctets_option);
  off += sprintf(stringBuffer + off, "  <ifInUcastPkts>%d</ifInUcastPkts>", data->ifInUcastPkts_option);
  off += sprintf(stringBuffer + off, "  <ifInUnknownProtos>%d</ifInUnknownProtos>", data->ifInUnknownProtos_option);
  off += sprintf(stringBuffer + off, "  <ifMtu>%d</ifMtu>", data->ifMtu_option);
  off += sprintf(stringBuffer + off, "  <ifName>%s</ifName>", data->ifName_option);
  off += sprintf(stringBuffer + off, "  <ifOperStatus>%d</ifOperStatus>", data->ifOperStatus_option);
  off += sprintf(stringBuffer + off, "  <ifOutBroadcastPkts>%d</ifOutBroadcastPkts>", data->ifOutBroadcastPkts_option);
  off += sprintf(stringBuffer + off, "  <ifOutDiscards>%d</ifOutDiscards>", data->ifOutDiscards_option);
  off += sprintf(stringBuffer + off, "  <ifOutErrors>%d</ifOutErrors>", data->ifOutErrors_option);
  off += sprintf(stringBuffer + off, "  <ifOutMulticastPkts>%d</ifOutMulticastPkts>", data->ifOutMulticastPkts_option);
  off += sprintf(stringBuffer + off, "  <ifOutOctets>%d</ifOutOctets>", data->ifOutOctets_option);
  off += sprintf(stringBuffer + off, "  <ifOutUcastPkts>%d</ifOutUcastPkts>", data->ifOutUcastPkts_option);
  off += sprintf(stringBuffer + off, "  <ifPromiscuousMode>%d</ifPromiscuousMode>", data->ifPromiscuousMode_option);
  off += sprintf(stringBuffer + off, "  <ifSpeed>%d</ifSpeed>", data->ifSpeed_option);
  off += sprintf(stringBuffer + off, "  <ifType>%d</ifType>", data->ifType_option);
    if ( data->IPAddrListLink_option != NULL )
      off += emberExiXmlSprintfStructIPAddrListLink(stringBuffer, off, (data->IPAddrListLink_option));
  off += sprintf(stringBuffer + off, "  <lastResetTime>%d</lastResetTime>", data->lastResetTime_option);
  off += sprintf(stringBuffer + off, "  <lastUpdatedTime>%d</lastUpdatedTime>", data->lastUpdatedTime_option);
    if ( data->LLInterfaceListLink_option != NULL )
      off += emberExiXmlSprintfStructLLInterfaceListLink(stringBuffer, off, (data->LLInterfaceListLink_option));
  off += sprintf(stringBuffer + off, "</IPInterface>");
  EXI_DEBUG("End of sprintXML: IPInterface, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructIPInterfaceList(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterfaceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPInterfaceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IPInterfaceList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->IPInterface_count; i++ )
    if ( data->IPInterface_array != NULL )
      off += emberExiXmlSprintfStructIPInterface(stringBuffer, off, &(data->IPInterface_array[i]));
  }
  off += sprintf(stringBuffer + off, "</IPInterfaceList>");
  EXI_DEBUG("End of sprintXML: IPInterfaceList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFixedVAr(int8u *stringBuffer, int offset, EmberExiGeneratedFixedVAr *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FixedVAr, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FixedVAr");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <refType>%d</refType>", data->refType);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</FixedVAr>");
  EXI_DEBUG("End of sprintXML: FixedVAr, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCurvePairType(int8u *stringBuffer, int offset, EmberExiGeneratedCurvePairType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurvePairType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CurvePairType");
  off += sprintf(stringBuffer + off, ">");
    if ( data->lowerLimit != NULL )
      off += emberExiXmlSprintfStructDERCurveLink(stringBuffer, off, (data->lowerLimit));
    if ( data->upperLimit != NULL )
      off += emberExiXmlSprintfStructDERCurveLink(stringBuffer, off, (data->upperLimit));
  off += sprintf(stringBuffer + off, "</CurvePairType>");
  EXI_DEBUG("End of sprintXML: CurvePairType, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERControlBase(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERControlBase");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <opModFixedFlow>%d</opModFixedFlow>", data->opModFixedFlow_option);
    if ( data->opModFixedPF_option != NULL )
      off += emberExiXmlSprintfStructFixedPowerFactor(stringBuffer, off, (data->opModFixedPF_option));
    if ( data->opModFixedVAr_option != NULL )
      off += emberExiXmlSprintfStructFixedVAr(stringBuffer, off, (data->opModFixedVAr_option));
  off += sprintf(stringBuffer + off, "  <opModFixedW>%d</opModFixedW>", data->opModFixedW_option);
    if ( data->opModFreqWatt_option != NULL )
      off += emberExiXmlSprintfStructDERCurveLink(stringBuffer, off, (data->opModFreqWatt_option));
    if ( data->opModHVRT_option != NULL )
      off += emberExiXmlSprintfStructCurvePairType(stringBuffer, off, (data->opModHVRT_option));
    if ( data->opModLVRT_option != NULL )
      off += emberExiXmlSprintfStructCurvePairType(stringBuffer, off, (data->opModLVRT_option));
    if ( data->opModVoltVAr_option != NULL )
      off += emberExiXmlSprintfStructDERCurveLink(stringBuffer, off, (data->opModVoltVAr_option));
    if ( data->opModVoltWatt_option != NULL )
      off += emberExiXmlSprintfStructDERCurveLink(stringBuffer, off, (data->opModVoltWatt_option));
    if ( data->opModWattPF_option != NULL )
      off += emberExiXmlSprintfStructDERCurveLink(stringBuffer, off, (data->opModWattPF_option));
  off += sprintf(stringBuffer + off, "  <rampTms>%d</rampTms>", data->rampTms_option);
  off += sprintf(stringBuffer + off, "</DERControlBase>");
  EXI_DEBUG("End of sprintXML: DERControlBase, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->DERControlBase != NULL )
      off += emberExiXmlSprintfStructDERControlBase(stringBuffer, off, (data->DERControlBase));
  off += sprintf(stringBuffer + off, "</DERControl>");
  EXI_DEBUG("End of sprintXML: DERControl, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERControlList(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERControlList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructActiveFlowReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveFlowReservationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveFlowReservationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ActiveFlowReservationListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ActiveFlowReservationListLink>");
  EXI_DEBUG("End of sprintXML: ActiveFlowReservationListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSetListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingSetListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ReadingSetListLink>");
  EXI_DEBUG("End of sprintXML: ReadingSetListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAbstractFlowReservation(int8u *stringBuffer, int offset, EmberExiGeneratedAbstractFlowReservation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AbstractFlowReservation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AbstractFlowReservation");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "</AbstractFlowReservation>");
  EXI_DEBUG("End of sprintXML: AbstractFlowReservation, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFlowReservationResponse(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FlowReservationResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
    if ( data->energyAvailable != NULL )
      off += emberExiXmlSprintfStructRealEnergy(stringBuffer, off, (data->energyAvailable));
    if ( data->powerAvailable != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->powerAvailable));
  off += sprintf(stringBuffer + off, "  <reservationStatus>%d</reservationStatus>", data->reservationStatus);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</FlowReservationResponse>");
  EXI_DEBUG("End of sprintXML: FlowReservationResponse, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFlowReservationResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponseList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationResponseList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FlowReservationResponseList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->FlowReservationResponse_count; i++ )
    if ( data->FlowReservationResponse_array != NULL )
      off += emberExiXmlSprintfStructFlowReservationResponse(stringBuffer, off, &(data->FlowReservationResponse_array[i]));
  }
  off += sprintf(stringBuffer + off, "</FlowReservationResponseList>");
  EXI_DEBUG("End of sprintXML: FlowReservationResponseList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCurrentRMS(int8u *stringBuffer, int offset, EmberExiGeneratedCurrentRMS *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurrentRMS, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CurrentRMS");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</CurrentRMS>");
  EXI_DEBUG("End of sprintXML: CurrentRMS, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAmpereHour(int8u *stringBuffer, int offset, EmberExiGeneratedAmpereHour *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AmpereHour, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AmpereHour");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</AmpereHour>");
  EXI_DEBUG("End of sprintXML: AmpereHour, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructApparentPower(int8u *stringBuffer, int offset, EmberExiGeneratedApparentPower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ApparentPower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ApparentPower");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</ApparentPower>");
  EXI_DEBUG("End of sprintXML: ApparentPower, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReactivePower(int8u *stringBuffer, int offset, EmberExiGeneratedReactivePower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReactivePower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReactivePower");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</ReactivePower>");
  EXI_DEBUG("End of sprintXML: ReactivePower, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructWattHour(int8u *stringBuffer, int offset, EmberExiGeneratedWattHour *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: WattHour, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<WattHour");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</WattHour>");
  EXI_DEBUG("End of sprintXML: WattHour, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDERCapability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCapability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERCapability");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <modesSupported>");
  { int16u i;
    for ( i=0; i<data->modesSupported.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->modesSupported.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</modesSupported>");
    if ( data->rtgA != NULL )
      off += emberExiXmlSprintfStructCurrentRMS(stringBuffer, off, (data->rtgA));
    if ( data->rtgAh_option != NULL )
      off += emberExiXmlSprintfStructAmpereHour(stringBuffer, off, (data->rtgAh_option));
    if ( data->rtgMaxChargeRate_option != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->rtgMaxChargeRate_option));
    if ( data->rtgMaxDischargeRate_option != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->rtgMaxDischargeRate_option));
    if ( data->rtgMinPF_option != NULL )
      off += emberExiXmlSprintfStructFixedPointType(stringBuffer, off, (data->rtgMinPF_option));
    if ( data->rtgMinPFUnder_option != NULL )
      off += emberExiXmlSprintfStructFixedPointType(stringBuffer, off, (data->rtgMinPFUnder_option));
    if ( data->rtgVA_option != NULL )
      off += emberExiXmlSprintfStructApparentPower(stringBuffer, off, (data->rtgVA_option));
    if ( data->rtgVAr_option != NULL )
      off += emberExiXmlSprintfStructReactivePower(stringBuffer, off, (data->rtgVAr_option));
    if ( data->rtgVArNeg_option != NULL )
      off += emberExiXmlSprintfStructReactivePower(stringBuffer, off, (data->rtgVArNeg_option));
    if ( data->rtgW != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->rtgW));
    if ( data->rtgWh_option != NULL )
      off += emberExiXmlSprintfStructWattHour(stringBuffer, off, (data->rtgWh_option));
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "</DERCapability>");
  EXI_DEBUG("End of sprintXML: DERCapability, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <originator>%s</originator>", data->originator_option);
  off += sprintf(stringBuffer + off, "  <priority>%d</priority>", data->priority);
  off += sprintf(stringBuffer + off, "  <textMessage>%s</textMessage>", data->textMessage);
  off += sprintf(stringBuffer + off, "</TextMessage>");
  EXI_DEBUG("End of sprintXML: TextMessage, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTextMessageList(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessageList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TextMessageList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructSupportedLocale(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocale *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocale, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupportedLocale");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <locale>%s</locale>", data->locale);
  off += sprintf(stringBuffer + off, "</SupportedLocale>");
  EXI_DEBUG("End of sprintXML: SupportedLocale, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructResponse(int8u *stringBuffer, int offset, EmberExiGeneratedResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Response, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Response");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</Response>");
  EXI_DEBUG("End of sprintXML: Response, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ResponseList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructRPLInstanceList(int8u *stringBuffer, int offset, EmberExiGeneratedRPLInstanceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLInstanceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RPLInstanceList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->RPLInstance_count; i++ )
    if ( data->RPLInstance_array != NULL )
      off += emberExiXmlSprintfStructRPLInstance(stringBuffer, off, &(data->RPLInstance_array[i]));
  }
  off += sprintf(stringBuffer + off, "</RPLInstanceList>");
  EXI_DEBUG("End of sprintXML: RPLInstanceList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructServiceSupplierList(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplierList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ServiceSupplierList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
    if ( data->Condition_option != NULL )
      off += emberExiXmlSprintfStructCondition(stringBuffer, off, (data->Condition_option));
  off += sprintf(stringBuffer + off, "  <encoding>%d</encoding>", data->encoding);
  off += sprintf(stringBuffer + off, "  <level>%s</level>", data->level);
  off += sprintf(stringBuffer + off, "  <limit>%d</limit>", data->limit);
  off += sprintf(stringBuffer + off, "  <notificationURI>%s</notificationURI>", data->notificationURI);
  off += sprintf(stringBuffer + off, "</Subscription>");
  EXI_DEBUG("End of sprintXML: Subscription, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructloWPAN(int8u *stringBuffer, int offset, EmberExiGeneratedloWPAN *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: loWPAN, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<loWPAN");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <octetsRx>%d</octetsRx>", data->octetsRx_option);
  off += sprintf(stringBuffer + off, "  <octetsTx>%d</octetsTx>", data->octetsTx_option);
  off += sprintf(stringBuffer + off, "  <packetsRx>%d</packetsRx>", data->packetsRx);
  off += sprintf(stringBuffer + off, "  <packetsTx>%d</packetsTx>", data->packetsTx);
  off += sprintf(stringBuffer + off, "  <rxFragError>%d</rxFragError>", data->rxFragError);
  off += sprintf(stringBuffer + off, "</loWPAN>");
  EXI_DEBUG("End of sprintXML: loWPAN, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructLLInterface(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterface *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LLInterface, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LLInterface");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <CRCerrors>%d</CRCerrors>", data->CRCerrors);
  off += sprintf(stringBuffer + off, "  <EUI64>");
  { int16u i;
    for ( i=0; i<data->EUI64.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->EUI64.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</EUI64>");
    if ( data->IEEE_802_15_4_option != NULL )
      off += emberExiXmlSprintfStructIEEE_802_15_4(stringBuffer, off, (data->IEEE_802_15_4_option));
  off += sprintf(stringBuffer + off, "  <linkLayerType>%d</linkLayerType>", data->linkLayerType);
  off += sprintf(stringBuffer + off, "  <LLAckNotRx>%d</LLAckNotRx>", data->LLAckNotRx_option);
  off += sprintf(stringBuffer + off, "  <LLCSMAFail>%d</LLCSMAFail>", data->LLCSMAFail_option);
  off += sprintf(stringBuffer + off, "  <LLFramesDropRx>%d</LLFramesDropRx>", data->LLFramesDropRx_option);
  off += sprintf(stringBuffer + off, "  <LLFramesDropTx>%d</LLFramesDropTx>", data->LLFramesDropTx_option);
  off += sprintf(stringBuffer + off, "  <LLFramesRx>%d</LLFramesRx>", data->LLFramesRx_option);
  off += sprintf(stringBuffer + off, "  <LLFramesTx>%d</LLFramesTx>", data->LLFramesTx_option);
  off += sprintf(stringBuffer + off, "  <LLMediaAccessFail>%d</LLMediaAccessFail>", data->LLMediaAccessFail_option);
  off += sprintf(stringBuffer + off, "  <LLOctetsRx>%d</LLOctetsRx>", data->LLOctetsRx_option);
  off += sprintf(stringBuffer + off, "  <LLOctetsTx>%d</LLOctetsTx>", data->LLOctetsTx_option);
  off += sprintf(stringBuffer + off, "  <LLRetryCount>%d</LLRetryCount>", data->LLRetryCount_option);
  off += sprintf(stringBuffer + off, "  <LLSecurityErrorRx>%d</LLSecurityErrorRx>", data->LLSecurityErrorRx_option);
    if ( data->loWPAN_option != NULL )
      off += emberExiXmlSprintfStructloWPAN(stringBuffer, off, (data->loWPAN_option));
  off += sprintf(stringBuffer + off, "</LLInterface>");
  EXI_DEBUG("End of sprintXML: LLInterface, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFlowReservationRequestListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequestListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationRequestListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FlowReservationRequestListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FlowReservationRequestListLink>");
  EXI_DEBUG("End of sprintXML: FlowReservationRequestListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFlowReservationResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponseListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationResponseListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FlowReservationResponseListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FlowReservationResponseListLink>");
  EXI_DEBUG("End of sprintXML: FlowReservationResponseListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFunctionSetAssignmentsListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignmentsListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FunctionSetAssignmentsListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FunctionSetAssignmentsListLink>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignmentsListLink, off=%d\n", off);
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


int emberExiXmlSprintfStructEndDevice(int8u *stringBuffer, int offset, EmberExiGeneratedEndDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDevice");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      off += emberExiXmlSprintfStructFileStatusLink(stringBuffer, off, (data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      off += emberExiXmlSprintfStructIPInterfaceListLink(stringBuffer, off, (data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      off += emberExiXmlSprintfStructLoadShedAvailabilityLink(stringBuffer, off, (data->LoadShedAvailabilityLink_option));
  off += sprintf(stringBuffer + off, "  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
  off += sprintf(stringBuffer + off, "  <sFDI>%d</sFDI>", data->sFDI);
    if ( data->FlowReservationRequestListLink_option != NULL )
      off += emberExiXmlSprintfStructFlowReservationRequestListLink(stringBuffer, off, (data->FlowReservationRequestListLink_option));
    if ( data->FlowReservationResponseListLink_option != NULL )
      off += emberExiXmlSprintfStructFlowReservationResponseListLink(stringBuffer, off, (data->FlowReservationResponseListLink_option));
    if ( data->FunctionSetAssignmentsListLink_option != NULL )
      off += emberExiXmlSprintfStructFunctionSetAssignmentsListLink(stringBuffer, off, (data->FunctionSetAssignmentsListLink_option));
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
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructCustomerAgreementListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAgreementListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAgreementListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CustomerAgreementListLink>");
  EXI_DEBUG("End of sprintXML: CustomerAgreementListLink, off=%d\n", off);
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


int emberExiXmlSprintfStructCustomerAccount(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccount *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccount, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAccount");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <currency>%d</currency>", data->currency);
  off += sprintf(stringBuffer + off, "  <customerAccount>%s</customerAccount>", data->customerAccount_option);
    if ( data->CustomerAgreementListLink_option != NULL )
      off += emberExiXmlSprintfStructCustomerAgreementListLink(stringBuffer, off, (data->CustomerAgreementListLink_option));
  off += sprintf(stringBuffer + off, "  <customerName>%s</customerName>", data->customerName_option);
  off += sprintf(stringBuffer + off, "  <pricePowerOfTenMultiplier>%d</pricePowerOfTenMultiplier>", data->pricePowerOfTenMultiplier);
    if ( data->ServiceSupplierLink_option != NULL )
      off += emberExiXmlSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink_option));
  off += sprintf(stringBuffer + off, "</CustomerAccount>");
  EXI_DEBUG("End of sprintXML: CustomerAccount, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCustomerAccountList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccountList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAccountList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->CustomerAccount_count; i++ )
    if ( data->CustomerAccount_array != NULL )
      off += emberExiXmlSprintfStructCustomerAccount(stringBuffer, off, &(data->CustomerAccount_array[i]));
  }
  off += sprintf(stringBuffer + off, "</CustomerAccountList>");
  EXI_DEBUG("End of sprintXML: CustomerAccountList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCustomerAgreementList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAgreementList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CustomerAgreementList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->CustomerAgreement_count; i++ )
    if ( data->CustomerAgreement_array != NULL )
      off += emberExiXmlSprintfStructCustomerAgreement(stringBuffer, off, &(data->CustomerAgreement_array[i]));
  }
  off += sprintf(stringBuffer + off, "</CustomerAgreementList>");
  EXI_DEBUG("End of sprintXML: CustomerAgreementList, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->ActiveTimeTariffIntervalListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveTimeTariffIntervalListLink(stringBuffer, off, (data->ActiveTimeTariffIntervalListLink_option));
    if ( data->flowRateEndLimit_option != NULL )
      off += emberExiXmlSprintfStructUnitValueType(stringBuffer, off, (data->flowRateEndLimit_option));
    if ( data->flowRateStartLimit_option != NULL )
      off += emberExiXmlSprintfStructUnitValueType(stringBuffer, off, (data->flowRateStartLimit_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
    if ( data->TimeTariffIntervalListLink_option != NULL )
      off += emberExiXmlSprintfStructTimeTariffIntervalListLink(stringBuffer, off, (data->TimeTariffIntervalListLink_option));
  off += sprintf(stringBuffer + off, "</RateComponent>");
  EXI_DEBUG("End of sprintXML: RateComponent, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRateComponentList(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RateComponentList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructPriceResponseCfgListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfgListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponseCfgListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PriceResponseCfgListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PriceResponseCfgListLink>");
  EXI_DEBUG("End of sprintXML: PriceResponseCfgListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructEnvironmentalCost(int8u *stringBuffer, int offset, EmberExiGeneratedEnvironmentalCost *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EnvironmentalCost, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EnvironmentalCost");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <amount>%d</amount>", data->amount);
  off += sprintf(stringBuffer + off, "  <costKind>%d</costKind>", data->costKind);
  off += sprintf(stringBuffer + off, "  <costLevel>%d</costLevel>", data->costLevel);
  off += sprintf(stringBuffer + off, "  <numCostLevels>%d</numCostLevels>", data->numCostLevels);
  off += sprintf(stringBuffer + off, "</EnvironmentalCost>");
  EXI_DEBUG("End of sprintXML: EnvironmentalCost, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructConsumptionTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ConsumptionTariffInterval");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <consumptionBlock>%d</consumptionBlock>", data->consumptionBlock);
  { int16u i;
    for ( i=0; i<data->EnvironmentalCost_count; i++ )
    if ( data->EnvironmentalCost_array != NULL )
      off += emberExiXmlSprintfStructEnvironmentalCost(stringBuffer, off, &(data->EnvironmentalCost_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <price>%d</price>", data->price_option);
  off += sprintf(stringBuffer + off, "  <startValue>%d</startValue>", data->startValue);
  off += sprintf(stringBuffer + off, "</ConsumptionTariffInterval>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructConsumptionTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffIntervalList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ConsumptionTariffIntervalList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ConsumptionTariffInterval_count; i++ )
    if ( data->ConsumptionTariffInterval_array != NULL )
      off += emberExiXmlSprintfStructConsumptionTariffInterval(stringBuffer, off, &(data->ConsumptionTariffInterval_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ConsumptionTariffIntervalList>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffIntervalList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRateComponentLink(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RateComponentLink");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</RateComponentLink>");
  EXI_DEBUG("End of sprintXML: RateComponentLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPriceResponseCfg(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfg *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponseCfg, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PriceResponseCfg");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <consumeThreshold>%d</consumeThreshold>", data->consumeThreshold);
  off += sprintf(stringBuffer + off, "  <maxReductionThreshold>%d</maxReductionThreshold>", data->maxReductionThreshold);
    if ( data->RateComponentLink != NULL )
      off += emberExiXmlSprintfStructRateComponentLink(stringBuffer, off, (data->RateComponentLink));
  off += sprintf(stringBuffer + off, "</PriceResponseCfg>");
  EXI_DEBUG("End of sprintXML: PriceResponseCfg, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscribableIdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SubscribableIdentifiedObject");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "</SubscribableIdentifiedObject>");
  EXI_DEBUG("End of sprintXML: SubscribableIdentifiedObject, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRPLSourceRoutesList(int8u *stringBuffer, int offset, EmberExiGeneratedRPLSourceRoutesList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLSourceRoutesList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RPLSourceRoutesList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->RPLSourceRoutes_count; i++ )
    if ( data->RPLSourceRoutes_array != NULL )
      off += emberExiXmlSprintfStructRPLSourceRoutes(stringBuffer, off, &(data->RPLSourceRoutes_array[i]));
  }
  off += sprintf(stringBuffer + off, "</RPLSourceRoutesList>");
  EXI_DEBUG("End of sprintXML: RPLSourceRoutesList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</BillingReadingListLink>");
  EXI_DEBUG("End of sprintXML: BillingReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingReadingSet");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
    if ( data->BillingReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingReadingListLink(stringBuffer, off, (data->BillingReadingListLink_option));
  off += sprintf(stringBuffer + off, "</BillingReadingSet>");
  EXI_DEBUG("End of sprintXML: BillingReadingSet, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFile(int8u *stringBuffer, int offset, EmberExiGeneratedFile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: File, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<File");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <activateTime>%d</activateTime>", data->activateTime_option);
  off += sprintf(stringBuffer + off, "  <fileURI>%s</fileURI>", data->fileURI);
  off += sprintf(stringBuffer + off, "  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->lFDI_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</lFDI>");
  off += sprintf(stringBuffer + off, "  <mfHwVer>%s</mfHwVer>", data->mfHwVer_option);
  off += sprintf(stringBuffer + off, "  <mfID>%d</mfID>", data->mfID);
  off += sprintf(stringBuffer + off, "  <mfModel>%s</mfModel>", data->mfModel);
  off += sprintf(stringBuffer + off, "  <mfSerNum>%s</mfSerNum>", data->mfSerNum_option);
  off += sprintf(stringBuffer + off, "  <mfVer>%s</mfVer>", data->mfVer);
  off += sprintf(stringBuffer + off, "  <size>%d</size>", data->size);
  off += sprintf(stringBuffer + off, "  <type>");
  { int16u i;
    for ( i=0; i<data->type.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->type.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</type>");
  off += sprintf(stringBuffer + off, "</File>");
  EXI_DEBUG("End of sprintXML: File, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTariffProfile(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfile, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TariffProfile");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <currency>%d</currency>", data->currency_option);
  off += sprintf(stringBuffer + off, "  <pricePowerOfTenMultiplier>%d</pricePowerOfTenMultiplier>", data->pricePowerOfTenMultiplier_option);
  off += sprintf(stringBuffer + off, "  <primacy>%d</primacy>", data->primacy);
  off += sprintf(stringBuffer + off, "  <rateCode>%s</rateCode>", data->rateCode_option);
    if ( data->RateComponentListLink_option != NULL )
      off += emberExiXmlSprintfStructRateComponentListLink(stringBuffer, off, (data->RateComponentListLink_option));
  off += sprintf(stringBuffer + off, "  <serviceCategoryKind>%d</serviceCategoryKind>", data->serviceCategoryKind);
  off += sprintf(stringBuffer + off, "</TariffProfile>");
  EXI_DEBUG("End of sprintXML: TariffProfile, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingListLink");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ReadingListLink>");
  EXI_DEBUG("End of sprintXML: ReadingListLink, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingSet");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
    if ( data->ReadingListLink_option != NULL )
      off += emberExiXmlSprintfStructReadingListLink(stringBuffer, off, (data->ReadingListLink_option));
  off += sprintf(stringBuffer + off, "</ReadingSet>");
  EXI_DEBUG("End of sprintXML: ReadingSet, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSetList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ReadingSetList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingSet_count; i++ )
    if ( data->ReadingSet_array != NULL )
      off += emberExiXmlSprintfStructReadingSet(stringBuffer, off, &(data->ReadingSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ReadingSetList>");
  EXI_DEBUG("End of sprintXML: ReadingSetList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPowerConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedPowerConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerConfiguration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PowerConfiguration");
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
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <currentLocale>%s</currentLocale>", data->currentLocale);
    if ( data->PowerConfiguration_option != NULL )
      off += emberExiXmlSprintfStructPowerConfiguration(stringBuffer, off, (data->PowerConfiguration_option));
    if ( data->PriceResponseCfgListLink_option != NULL )
      off += emberExiXmlSprintfStructPriceResponseCfgListLink(stringBuffer, off, (data->PriceResponseCfgListLink_option));
    if ( data->TimeConfiguration_option != NULL )
      off += emberExiXmlSprintfStructTimeConfiguration(stringBuffer, off, (data->TimeConfiguration_option));
  off += sprintf(stringBuffer + off, "  <userDeviceName>%s</userDeviceName>", data->userDeviceName);
  off += sprintf(stringBuffer + off, "</Configuration>");
  EXI_DEBUG("End of sprintXML: Configuration, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAppliedTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedAppliedTargetReduction *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AppliedTargetReduction, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AppliedTargetReduction");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <type>%d</type>", data->type);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</AppliedTargetReduction>");
  EXI_DEBUG("End of sprintXML: AppliedTargetReduction, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDrResponse(int8u *stringBuffer, int offset, EmberExiGeneratedDrResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DrResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DrResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->ApplianceLoadReduction_option != NULL )
      off += emberExiXmlSprintfStructApplianceLoadReduction(stringBuffer, off, (data->ApplianceLoadReduction_option));
    if ( data->AppliedTargetReduction_option != NULL )
      off += emberExiXmlSprintfStructAppliedTargetReduction(stringBuffer, off, (data->AppliedTargetReduction_option));
    if ( data->DutyCycle_option != NULL )
      off += emberExiXmlSprintfStructDutyCycle(stringBuffer, off, (data->DutyCycle_option));
    if ( data->Offset_option != NULL )
      off += emberExiXmlSprintfStructOffset(stringBuffer, off, (data->Offset_option));
  off += sprintf(stringBuffer + off, "  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      off += emberExiXmlSprintfStructSetPoint(stringBuffer, off, (data->SetPoint_option));
  off += sprintf(stringBuffer + off, "</DrResponse>");
  EXI_DEBUG("End of sprintXML: DrResponse, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
  off += sprintf(stringBuffer + off, "</TargetReading>");
  EXI_DEBUG("End of sprintXML: TargetReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTargetReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TargetReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructDRLCCapabilities(int8u *stringBuffer, int offset, EmberExiGeneratedDRLCCapabilities *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DRLCCapabilities, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DRLCCapabilities");
  off += sprintf(stringBuffer + off, ">");
    if ( data->averageEnergy != NULL )
      off += emberExiXmlSprintfStructRealEnergy(stringBuffer, off, (data->averageEnergy));
    if ( data->maxDemand != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->maxDemand));
  off += sprintf(stringBuffer + off, "  <optionsImplemented>");
  { int16u i;
    for ( i=0; i<data->optionsImplemented.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->optionsImplemented.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</optionsImplemented>");
  off += sprintf(stringBuffer + off, "</DRLCCapabilities>");
  EXI_DEBUG("End of sprintXML: DRLCCapabilities, off=%d\n", off);
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
  off += sprintf(stringBuffer + off, ">");
    if ( data->DRLCCapabilities_option != NULL )
      off += emberExiXmlSprintfStructDRLCCapabilities(stringBuffer, off, (data->DRLCCapabilities_option));
  off += sprintf(stringBuffer + off, "  <functionsImplemented>");
  { int16u i;
    for ( i=0; i<data->functionsImplemented_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->functionsImplemented_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</functionsImplemented>");
  off += sprintf(stringBuffer + off, "  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->lFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</lFDI>");
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


int emberExiXmlSprintfStructFunctionSetAssignments(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignments *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignments, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FunctionSetAssignments");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->CustomerAccountListLink_option != NULL )
      off += emberExiXmlSprintfStructCustomerAccountListLink(stringBuffer, off, (data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      off += emberExiXmlSprintfStructResponseSetListLink(stringBuffer, off, (data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      off += emberExiXmlSprintfStructTariffProfileListLink(stringBuffer, off, (data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "</FunctionSetAssignments>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignments, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMessagingProgram(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MessagingProgram");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      off += emberExiXmlSprintfStructActiveTextMessageListLink(stringBuffer, off, (data->ActiveTextMessageListLink_option));
  off += sprintf(stringBuffer + off, "  <locale>%s</locale>", data->locale);
  off += sprintf(stringBuffer + off, "  <primacy>%d</primacy>", data->primacy);
    if ( data->TextMessageListLink_option != NULL )
      off += emberExiXmlSprintfStructTextMessageListLink(stringBuffer, off, (data->TextMessageListLink_option));
  off += sprintf(stringBuffer + off, "</MessagingProgram>");
  EXI_DEBUG("End of sprintXML: MessagingProgram, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructCreditRegister(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegister *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegister, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CreditRegister");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
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
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReading");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->RateComponentListLink_option != NULL )
      off += emberExiXmlSprintfStructRateComponentListLink(stringBuffer, off, (data->RateComponentListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingSetListLink_option != NULL )
      off += emberExiXmlSprintfStructReadingSetListLink(stringBuffer, off, (data->ReadingSetListLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</MeterReading>");
  EXI_DEBUG("End of sprintXML: MeterReading, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MeterReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructMirrorMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorMeterReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MirrorMeterReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MirrorMeterReading_count; i++ )
    if ( data->MirrorMeterReading_array != NULL )
      off += emberExiXmlSprintfStructMirrorMeterReading(stringBuffer, off, &(data->MirrorMeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MirrorMeterReadingList>");
  EXI_DEBUG("End of sprintXML: MirrorMeterReadingList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructMessagingProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MessagingProgramList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructVoltageRMS(int8u *stringBuffer, int offset, EmberExiGeneratedVoltageRMS *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: VoltageRMS, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<VoltageRMS");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</VoltageRMS>");
  EXI_DEBUG("End of sprintXML: VoltageRMS, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERSettings(int8u *stringBuffer, int offset, EmberExiGeneratedDERSettings *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERSettings, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERSettings");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <setGenConnect>%d</setGenConnect>", data->setGenConnect_option);
  off += sprintf(stringBuffer + off, "  <setGradW>%d</setGradW>", data->setGradW);
    if ( data->setMaxChargeRate_option != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->setMaxChargeRate_option));
    if ( data->setMaxDischargeRate_option != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->setMaxDischargeRate_option));
    if ( data->setMaxVA_option != NULL )
      off += emberExiXmlSprintfStructApparentPower(stringBuffer, off, (data->setMaxVA_option));
    if ( data->setMaxVAr_option != NULL )
      off += emberExiXmlSprintfStructReactivePower(stringBuffer, off, (data->setMaxVAr_option));
    if ( data->setMaxVArNeg_option != NULL )
      off += emberExiXmlSprintfStructReactivePower(stringBuffer, off, (data->setMaxVArNeg_option));
    if ( data->setMaxW != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->setMaxW));
    if ( data->setMinPF_option != NULL )
      off += emberExiXmlSprintfStructFixedPointType(stringBuffer, off, (data->setMinPF_option));
    if ( data->setMinPFUnder_option != NULL )
      off += emberExiXmlSprintfStructFixedPointType(stringBuffer, off, (data->setMinPFUnder_option));
  off += sprintf(stringBuffer + off, "  <setStorConnect>%d</setStorConnect>", data->setStorConnect_option);
    if ( data->setVRef_option != NULL )
      off += emberExiXmlSprintfStructVoltageRMS(stringBuffer, off, (data->setVRef_option));
    if ( data->setVRefOfs_option != NULL )
      off += emberExiXmlSprintfStructVoltageRMS(stringBuffer, off, (data->setVRefOfs_option));
  off += sprintf(stringBuffer + off, "  <updatedTime>%d</updatedTime>", data->updatedTime);
  off += sprintf(stringBuffer + off, "</DERSettings>");
  EXI_DEBUG("End of sprintXML: DERSettings, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSupportedLocaleList(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocaleList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SupportedLocaleList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructTariffProfileList(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TariffProfileList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructLLInterfaceList(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterfaceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LLInterfaceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LLInterfaceList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->LLInterface_count; i++ )
    if ( data->LLInterface_array != NULL )
      off += emberExiXmlSprintfStructLLInterface(stringBuffer, off, &(data->LLInterface_array[i]));
  }
  off += sprintf(stringBuffer + off, "</LLInterfaceList>");
  EXI_DEBUG("End of sprintXML: LLInterfaceList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTemperature(int8u *stringBuffer, int offset, EmberExiGeneratedTemperature *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Temperature, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Temperature");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <multiplier>%d</multiplier>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <subject>%d</subject>", data->subject);
  off += sprintf(stringBuffer + off, "  <value>%d</value>", data->value);
  off += sprintf(stringBuffer + off, "</Temperature>");
  EXI_DEBUG("End of sprintXML: Temperature, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPrepayOperationStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayOperationStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PrepayOperationStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
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


int emberExiXmlSprintfStructPEVInfo(int8u *stringBuffer, int offset, EmberExiGeneratedPEVInfo *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PEVInfo, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PEVInfo");
  off += sprintf(stringBuffer + off, ">");
    if ( data->chargingPowerNow != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->chargingPowerNow));
    if ( data->energyRequestNow != NULL )
      off += emberExiXmlSprintfStructRealEnergy(stringBuffer, off, (data->energyRequestNow));
    if ( data->maxForwardPower != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->maxForwardPower));
  off += sprintf(stringBuffer + off, "  <minimumChargingDuration>%d</minimumChargingDuration>", data->minimumChargingDuration);
  off += sprintf(stringBuffer + off, "  <targetStateOfCharge>%d</targetStateOfCharge>", data->targetStateOfCharge);
  off += sprintf(stringBuffer + off, "  <timeChargeIsNeeded>%d</timeChargeIsNeeded>", data->timeChargeIsNeeded);
  off += sprintf(stringBuffer + off, "  <timeChargingStatusPEV>%d</timeChargingStatusPEV>", data->timeChargingStatusPEV);
  off += sprintf(stringBuffer + off, "</PEVInfo>");
  EXI_DEBUG("End of sprintXML: PEVInfo, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPowerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PowerStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <batteryStatus>%d</batteryStatus>", data->batteryStatus);
  off += sprintf(stringBuffer + off, "  <changedTime>%d</changedTime>", data->changedTime);
  off += sprintf(stringBuffer + off, "  <currentPowerSource>%d</currentPowerSource>", data->currentPowerSource);
  off += sprintf(stringBuffer + off, "  <estimatedChargeRemaining>%d</estimatedChargeRemaining>", data->estimatedChargeRemaining_option);
  off += sprintf(stringBuffer + off, "  <estimatedTimeRemaining>%d</estimatedTimeRemaining>", data->estimatedTimeRemaining_option);
    if ( data->PEVInfo_option != NULL )
      off += emberExiXmlSprintfStructPEVInfo(stringBuffer, off, (data->PEVInfo_option));
  off += sprintf(stringBuffer + off, "  <sessionTimeOnBattery>%d</sessionTimeOnBattery>", data->sessionTimeOnBattery_option);
  off += sprintf(stringBuffer + off, "  <totalTimeOnBattery>%d</totalTimeOnBattery>", data->totalTimeOnBattery_option);
  off += sprintf(stringBuffer + off, "</PowerStatus>");
  EXI_DEBUG("End of sprintXML: PowerStatus, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructPriceResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PriceResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</PriceResponse>");
  EXI_DEBUG("End of sprintXML: PriceResponse, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructError(int8u *stringBuffer, int offset, EmberExiGeneratedError *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Error, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Error");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <maxRetryDuration>%d</maxRetryDuration>", data->maxRetryDuration_option);
  off += sprintf(stringBuffer + off, "  <reasonCode>%d</reasonCode>", data->reasonCode);
  off += sprintf(stringBuffer + off, "</Error>");
  EXI_DEBUG("End of sprintXML: Error, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDeviceStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DeviceStatus");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
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


int emberExiXmlSprintfStructEndDeviceControlList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EndDeviceControlList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructFileList(int8u *stringBuffer, int offset, EmberExiGeneratedFileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FileList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructFlowReservationRequest(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequest *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationRequest, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FlowReservationRequest");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "  <durationRequested>%d</durationRequested>", data->durationRequested_option);
    if ( data->energyRequested != NULL )
      off += emberExiXmlSprintfStructRealEnergy(stringBuffer, off, (data->energyRequested));
    if ( data->powerRequested != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->powerRequested));
  off += sprintf(stringBuffer + off, "</FlowReservationRequest>");
  EXI_DEBUG("End of sprintXML: FlowReservationRequest, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructFlowReservationRequestList(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequestList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationRequestList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FlowReservationRequestList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->FlowReservationRequest_count; i++ )
    if ( data->FlowReservationRequest_array != NULL )
      off += emberExiXmlSprintfStructFlowReservationRequest(stringBuffer, off, &(data->FlowReservationRequest_array[i]));
  }
  off += sprintf(stringBuffer + off, "</FlowReservationRequestList>");
  EXI_DEBUG("End of sprintXML: FlowReservationRequestList, off=%d\n", off);
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


int emberExiXmlSprintfStructDERList(int8u *stringBuffer, int offset, EmberExiGeneratedDERList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DER_count; i++ )
    if ( data->DER_array != NULL )
      off += emberExiXmlSprintfStructDER(stringBuffer, off, &(data->DER_array[i]));
  }
  off += sprintf(stringBuffer + off, "</DERList>");
  EXI_DEBUG("End of sprintXML: DERList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructNeighborList(int8u *stringBuffer, int offset, EmberExiGeneratedNeighborList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NeighborList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NeighborList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Neighbor_count; i++ )
    if ( data->Neighbor_array != NULL )
      off += emberExiXmlSprintfStructNeighbor(stringBuffer, off, &(data->Neighbor_array[i]));
  }
  off += sprintf(stringBuffer + off, "</NeighborList>");
  EXI_DEBUG("End of sprintXML: NeighborList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructTextResponse(int8u *stringBuffer, int offset, EmberExiGeneratedTextResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TextResponse");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <status>%d</status>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</TextResponse>");
  EXI_DEBUG("End of sprintXML: TextResponse, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDefaultDERControl(int8u *stringBuffer, int offset, EmberExiGeneratedDefaultDERControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DefaultDERControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DefaultDERControl");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
    if ( data->DERControlBase != NULL )
      off += emberExiXmlSprintfStructDERControlBase(stringBuffer, off, (data->DERControlBase));
  off += sprintf(stringBuffer + off, "</DefaultDERControl>");
  EXI_DEBUG("End of sprintXML: DefaultDERControl, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERProgramList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructPriceResponseCfgList(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfgList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponseCfgList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PriceResponseCfgList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->PriceResponseCfg_count; i++ )
    if ( data->PriceResponseCfg_array != NULL )
      off += emberExiXmlSprintfStructPriceResponseCfg(stringBuffer, off, &(data->PriceResponseCfg_array[i]));
  }
  off += sprintf(stringBuffer + off, "</PriceResponseCfgList>");
  EXI_DEBUG("End of sprintXML: PriceResponseCfgList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructRespondableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RespondableIdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RespondableIdentifiedObject");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  replyTo=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <description>%s</description>", data->description_option);
  off += sprintf(stringBuffer + off, "  <version>%d</version>", data->version_option);
  off += sprintf(stringBuffer + off, "</RespondableIdentifiedObject>");
  EXI_DEBUG("End of sprintXML: RespondableIdentifiedObject, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingPeriod(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriod *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriod, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingPeriod");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <billLastPeriod>%d</billLastPeriod>", data->billLastPeriod_option);
  off += sprintf(stringBuffer + off, "  <billToDate>%d</billToDate>", data->billToDate_option);
    if ( data->interval != NULL )
      off += emberExiXmlSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <statusTimeStamp>%d</statusTimeStamp>", data->statusTimeStamp_option);
  off += sprintf(stringBuffer + off, "</BillingPeriod>");
  EXI_DEBUG("End of sprintXML: BillingPeriod, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructBillingPeriodList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriodList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingPeriodList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructDERCurveList(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurveList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERCurveList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERCurve_count; i++ )
    if ( data->DERCurve_array != NULL )
      off += emberExiXmlSprintfStructDERCurve(stringBuffer, off, &(data->DERCurve_array[i]));
  }
  off += sprintf(stringBuffer + off, "</DERCurveList>");
  EXI_DEBUG("End of sprintXML: DERCurveList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructAccountBalance(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalance *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountBalance, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AccountBalance");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
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


int emberExiXmlSprintfStructResponseSetList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSetList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseSetList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ResponseSetList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ResponseSet_count; i++ )
    if ( data->ResponseSet_array != NULL )
      off += emberExiXmlSprintfStructResponseSet(stringBuffer, off, &(data->ResponseSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ResponseSetList>");
  EXI_DEBUG("End of sprintXML: ResponseSetList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructHistoricalReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HistoricalReadingList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dateTimeRegistered>%d</dateTimeRegistered>", data->dateTimeRegistered);
  off += sprintf(stringBuffer + off, "  <pIN>%d</pIN>", data->pIN);
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


int emberExiXmlSprintfStructFunctionSetAssignmentsList(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignmentsList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FunctionSetAssignmentsList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->FunctionSetAssignments_count; i++ )
    if ( data->FunctionSetAssignments_array != NULL )
      off += emberExiXmlSprintfStructFunctionSetAssignments(stringBuffer, off, &(data->FunctionSetAssignments_array[i]));
  }
  off += sprintf(stringBuffer + off, "</FunctionSetAssignmentsList>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignmentsList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructSubscriptionList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SubscriptionList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
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


int emberExiXmlSprintfStructBillingReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingSetList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BillingReadingSetList");
  off += sprintf(stringBuffer + off, "  all=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  results=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->BillingReadingSet_count; i++ )
    if ( data->BillingReadingSet_array != NULL )
      off += emberExiXmlSprintfStructBillingReadingSet(stringBuffer, off, &(data->BillingReadingSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "</BillingReadingSetList>");
  EXI_DEBUG("End of sprintXML: BillingReadingSetList, off=%d\n", off);
  return off - offset;
}


int emberExiXmlSprintfStructDERAvailability(int8u *stringBuffer, int offset, EmberExiGeneratedDERAvailability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERAvailability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DERAvailability");
  off += sprintf(stringBuffer + off, "  href=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  subscribable=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <availabilityDuration>%d</availabilityDuration>", data->availabilityDuration_option);
  off += sprintf(stringBuffer + off, "  <maxChargeDuration>%d</maxChargeDuration>", data->maxChargeDuration_option);
  off += sprintf(stringBuffer + off, "  <readingTime>%d</readingTime>", data->readingTime);
  off += sprintf(stringBuffer + off, "  <reserveChargePercent>%d</reserveChargePercent>", data->reserveChargePercent_option);
  off += sprintf(stringBuffer + off, "  <reservePercent>%d</reservePercent>", data->reservePercent_option);
    if ( data->statVArAvail_option != NULL )
      off += emberExiXmlSprintfStructReactivePower(stringBuffer, off, (data->statVArAvail_option));
    if ( data->statWAvail_option != NULL )
      off += emberExiXmlSprintfStructActivePower(stringBuffer, off, (data->statWAvail_option));
  off += sprintf(stringBuffer + off, "</DERAvailability>");
  EXI_DEBUG("End of sprintXML: DERAvailability, off=%d\n", off);
  return off - offset;
}


