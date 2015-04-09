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
int emberExiXmlShortTagsSprintfStructLink(int8u *stringBuffer, int offset, EmberExiGeneratedLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Link, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<uXK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</uXK>");
  EXI_DEBUG("End of sprintXML: Link, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructListLink(int8u *stringBuffer, int offset, EmberExiGeneratedListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PNg");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PNg>");
  EXI_DEBUG("End of sprintXML: ListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveDERControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveDERControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CUm");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CUm>");
  EXI_DEBUG("End of sprintXML: ActiveDERControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDefaultDERControlLink(int8u *stringBuffer, int offset, EmberExiGeneratedDefaultDERControlLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DefaultDERControlLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CHI");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</CHI>");
  EXI_DEBUG("End of sprintXML: DefaultDERControlLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vrS");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</vrS>");
  EXI_DEBUG("End of sprintXML: DERControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERCurveListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurveListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ldY");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ldY>");
  EXI_DEBUG("End of sprintXML: DERCurveListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResource(int8u *stringBuffer, int offset, EmberExiGeneratedResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Resource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ofw");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ofw>");
  EXI_DEBUG("End of sprintXML: Resource, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wGt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "</wGt>");
  EXI_DEBUG("End of sprintXML: IdentifiedObject, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AaW");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->ActiveDERControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveDERControlListLink(stringBuffer, off, (data->ActiveDERControlListLink_option));
    if ( data->DefaultDERControlLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDefaultDERControlLink(stringBuffer, off, (data->DefaultDERControlLink_option));
    if ( data->DERControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERControlListLink(stringBuffer, off, (data->DERControlListLink_option));
    if ( data->DERCurveListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurveListLink(stringBuffer, off, (data->DERCurveListLink_option));
  off += sprintf(stringBuffer + off, "  <PdK>%d</PdK>", data->primacy);
  off += sprintf(stringBuffer + off, "</AaW>");
  EXI_DEBUG("End of sprintXML: DERProgram, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAssociatedDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedDERProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AssociatedDERProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iIQ");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</iIQ>");
  EXI_DEBUG("End of sprintXML: AssociatedDERProgramListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAssociatedUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedUsagePointLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AssociatedUsagePointLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ssw");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Ssw>");
  EXI_DEBUG("End of sprintXML: AssociatedUsagePointLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCurrentDERProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedCurrentDERProgramLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurrentDERProgramLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NYN");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</NYN>");
  EXI_DEBUG("End of sprintXML: CurrentDERProgramLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERAvailabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERAvailabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<dnV");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</dnV>");
  EXI_DEBUG("End of sprintXML: DERAvailabilityLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCapabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCapabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Dfw");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Dfw>");
  EXI_DEBUG("End of sprintXML: DERCapabilityLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERSettingsLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERSettingsLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERSettingsLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wCb");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</wCb>");
  EXI_DEBUG("End of sprintXML: DERSettingsLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QvG");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</QvG>");
  EXI_DEBUG("End of sprintXML: DERStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscribableResource(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscribableResource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pWO");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</pWO>");
  EXI_DEBUG("End of sprintXML: SubscribableResource, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDER(int8u *stringBuffer, int offset, EmberExiGeneratedDER *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DER, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vdn");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->AssociatedDERProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAssociatedDERProgramListLink(stringBuffer, off, (data->AssociatedDERProgramListLink_option));
    if ( data->AssociatedUsagePointLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAssociatedUsagePointLink(stringBuffer, off, (data->AssociatedUsagePointLink_option));
    if ( data->CurrentDERProgramLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCurrentDERProgramLink(stringBuffer, off, (data->CurrentDERProgramLink_option));
    if ( data->DERAvailabilityLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERAvailabilityLink(stringBuffer, off, (data->DERAvailabilityLink_option));
    if ( data->DERCapabilityLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCapabilityLink(stringBuffer, off, (data->DERCapabilityLink_option));
    if ( data->DERSettingsLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERSettingsLink(stringBuffer, off, (data->DERSettingsLink_option));
    if ( data->DERStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERStatusLink(stringBuffer, off, (data->DERStatusLink_option));
  off += sprintf(stringBuffer + off, "</vdn>");
  EXI_DEBUG("End of sprintXML: DER, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditTypeChange(int8u *stringBuffer, int offset, EmberExiGeneratedCreditTypeChange *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditTypeChange, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vVJ");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <lTi>%d</lTi>", data->newType);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->startTime);
  off += sprintf(stringBuffer + off, "</vVJ>");
  EXI_DEBUG("End of sprintXML: CreditTypeChange, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceSupplier(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplier *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplier, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<tBq");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <oAR>%s</oAR>", data->email_option);
  off += sprintf(stringBuffer + off, "  <TLu>%s</TLu>", data->phone_option);
  off += sprintf(stringBuffer + off, "  <KaF>%d</KaF>", data->providerID_option);
  off += sprintf(stringBuffer + off, "  <Kls>%s</Kls>", data->web_option);
  off += sprintf(stringBuffer + off, "</tBq>");
  EXI_DEBUG("End of sprintXML: ServiceSupplier, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedDateTimeInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DateTimeInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bBj");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <DWo>%d</DWo>", data->duration);
  off += sprintf(stringBuffer + off, "  <hpu>%d</hpu>", data->start);
  off += sprintf(stringBuffer + off, "</bBj>");
  EXI_DEBUG("End of sprintXML: DateTimeInterval, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YKP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->consumptionBlock_option);
  off += sprintf(stringBuffer + off, "  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->qualityFlags_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <PPa>%d</PPa>", data->touTier_option);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value_option);
  off += sprintf(stringBuffer + off, "</YKP>");
  EXI_DEBUG("End of sprintXML: ReadingBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReading(int8u *stringBuffer, int offset, EmberExiGeneratedReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Reading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eMM");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->consumptionBlock_option);
  off += sprintf(stringBuffer + off, "  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->qualityFlags_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <PPa>%d</PPa>", data->touTier_option);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value_option);
  off += sprintf(stringBuffer + off, "  <localID>");
  { int16u i;
    for ( i=0; i<data->localID_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->localID_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</localID>");
  off += sprintf(stringBuffer + off, "</eMM>");
  EXI_DEBUG("End of sprintXML: Reading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCharge(int8u *stringBuffer, int offset, EmberExiGeneratedCharge *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Charge, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<jcG");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <SaF>%d</SaF>", data->kind_option);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</jcG>");
  EXI_DEBUG("End of sprintXML: Charge, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingReading(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BCu");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->consumptionBlock_option);
  off += sprintf(stringBuffer + off, "  <qualityFlags>");
  { int16u i;
    for ( i=0; i<data->qualityFlags_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->qualityFlags_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</qualityFlags>");
    if ( data->timePeriod_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod_option));
  off += sprintf(stringBuffer + off, "  <PPa>%d</PPa>", data->touTier_option);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value_option);
  { int16u i;
    for ( i=0; i<data->Charge_count; i++ )
    if ( data->Charge_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCharge(stringBuffer, off, &(data->Charge_array[i]));
  }
  off += sprintf(stringBuffer + off, "</BCu>");
  EXI_DEBUG("End of sprintXML: BillingReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructList(int8u *stringBuffer, int offset, EmberExiGeneratedList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: List, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KXB");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</KXB>");
  EXI_DEBUG("End of sprintXML: List, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<emc");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->BillingReading_count; i++ )
    if ( data->BillingReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingReading(stringBuffer, off, &(data->BillingReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</emc>");
  EXI_DEBUG("End of sprintXML: BillingReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<yLn");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</yLn>");
  EXI_DEBUG("End of sprintXML: MeterReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointBase(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IuP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <Gvc>%d</Gvc>", data->serviceCategoryKind);
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status);
  off += sprintf(stringBuffer + off, "</IuP>");
  EXI_DEBUG("End of sprintXML: UsagePointBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pRh");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <Gvc>%d</Gvc>", data->serviceCategoryKind);
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status);
    if ( data->MeterReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMeterReadingListLink(stringBuffer, off, (data->MeterReadingListLink_option));
  off += sprintf(stringBuffer + off, "</pRh>");
  EXI_DEBUG("End of sprintXML: UsagePoint, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRPLSourceRoutes(int8u *stringBuffer, int offset, EmberExiGeneratedRPLSourceRoutes *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLSourceRoutes, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QQY");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
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
  off += sprintf(stringBuffer + off, "</QQY>");
  EXI_DEBUG("End of sprintXML: RPLSourceRoutes, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscriptionBase(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HqX");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Oye>%s</Oye>", data->subscribedResource);
  off += sprintf(stringBuffer + off, "</HqX>");
  EXI_DEBUG("End of sprintXML: SubscriptionBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNotification(int8u *stringBuffer, int offset, EmberExiGeneratedNotification *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Notification, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<nIQ");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Oye>%s</Oye>", data->subscribedResource);
  off += sprintf(stringBuffer + off, "  <GfU>%s</GfU>", data->newResourceURI_option);
    if ( data->Resource_option != NULL )
      off += emberExiXmlShortTagsSprintfStructResource(stringBuffer, off, (data->Resource_option));
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status);
  off += sprintf(stringBuffer + off, "  <VvA>%s</VvA>", data->subscriptionURI);
  off += sprintf(stringBuffer + off, "</nIQ>");
  EXI_DEBUG("End of sprintXML: Notification, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNotificationList(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NotificationList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<fTX");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Notification_count; i++ )
    if ( data->Notification_array != NULL )
      off += emberExiXmlShortTagsSprintfStructNotification(stringBuffer, off, &(data->Notification_array[i]));
  }
  off += sprintf(stringBuffer + off, "</fTX>");
  EXI_DEBUG("End of sprintXML: NotificationList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConfigurationLink(int8u *stringBuffer, int offset, EmberExiGeneratedConfigurationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConfigurationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YMy");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</YMy>");
  EXI_DEBUG("End of sprintXML: ConfigurationLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kEg");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</kEg>");
  EXI_DEBUG("End of sprintXML: DERListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceInformationLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceInformationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<GXD");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</GXD>");
  EXI_DEBUG("End of sprintXML: DeviceInformationLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YEw");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</YEw>");
  EXI_DEBUG("End of sprintXML: DeviceStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KtY");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</KtY>");
  EXI_DEBUG("End of sprintXML: FileStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIPInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterfaceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPInterfaceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wIX");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</wIX>");
  EXI_DEBUG("End of sprintXML: IPInterfaceListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLoadShedAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<hYd");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</hYd>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailabilityLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLogEventListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEventListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FGM");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FGM>");
  EXI_DEBUG("End of sprintXML: LogEventListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPowerStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FfK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FfK>");
  EXI_DEBUG("End of sprintXML: PowerStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAbstractDevice(int8u *stringBuffer, int offset, EmberExiGeneratedAbstractDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AbstractDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ovP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileStatusLink(stringBuffer, off, (data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIPInterfaceListLink(stringBuffer, off, (data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLoadShedAvailabilityLink(stringBuffer, off, (data->LoadShedAvailabilityLink_option));
  off += sprintf(stringBuffer + off, "  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
  off += sprintf(stringBuffer + off, "  <Jma>%d</Jma>", data->sFDI);
  off += sprintf(stringBuffer + off, "</ovP>");
  EXI_DEBUG("End of sprintXML: AbstractDevice, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSelfDevice(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SelfDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gTM");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileStatusLink(stringBuffer, off, (data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIPInterfaceListLink(stringBuffer, off, (data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLoadShedAvailabilityLink(stringBuffer, off, (data->LoadShedAvailabilityLink_option));
  off += sprintf(stringBuffer + off, "  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
  off += sprintf(stringBuffer + off, "  <Jma>%d</Jma>", data->sFDI);
  off += sprintf(stringBuffer + off, "</gTM>");
  EXI_DEBUG("End of sprintXML: SelfDevice, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<JJr");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</JJr>");
  EXI_DEBUG("End of sprintXML: TargetReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAccountListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccountListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FJi");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FJi>");
  EXI_DEBUG("End of sprintXML: CustomerAccountListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<BNt");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</BNt>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iYl");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</iYl>");
  EXI_DEBUG("End of sprintXML: DERProgramListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TJN");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TJN>");
  EXI_DEBUG("End of sprintXML: FileListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMessagingProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgramListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ilK");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ilK>");
  EXI_DEBUG("End of sprintXML: MessagingProgramListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepaymentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PVC");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PVC>");
  EXI_DEBUG("End of sprintXML: PrepaymentListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponseSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSetListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseSetListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YQD");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</YQD>");
  EXI_DEBUG("End of sprintXML: ResponseSetListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pfY");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</pfY>");
  EXI_DEBUG("End of sprintXML: TariffProfileListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<mkt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</mkt>");
  EXI_DEBUG("End of sprintXML: TimeLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cse");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</cse>");
  EXI_DEBUG("End of sprintXML: UsagePointListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsBase(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignmentsBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SBm");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->CustomerAccountListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCustomerAccountListLink(stringBuffer, off, (data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructResponseSetListLink(stringBuffer, off, (data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfileListLink(stringBuffer, off, (data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
  off += sprintf(stringBuffer + off, "</SBm>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignmentsBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCurveData(int8u *stringBuffer, int offset, EmberExiGeneratedCurveData *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurveData, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<tGB");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ieo>%d</ieo>", data->excitation_option);
  off += sprintf(stringBuffer + off, "  <juE>%d</juE>", data->xvalue);
  off += sprintf(stringBuffer + off, "  <rrE>%d</rrE>", data->yvalue);
  off += sprintf(stringBuffer + off, "</tGB>");
  EXI_DEBUG("End of sprintXML: CurveData, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERCurve(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurve *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurve, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gtf");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
  { int16u i;
    for ( i=0; i<data->CurveData_count; i++ )
    if ( data->CurveData_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCurveData(stringBuffer, off, &(data->CurveData_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <oem>%d</oem>", data->curveType);
  off += sprintf(stringBuffer + off, "  <oFk>%d</oFk>", data->rampDecTms_option);
  off += sprintf(stringBuffer + off, "  <xEG>%d</xEG>", data->rampIncTms_option);
  off += sprintf(stringBuffer + off, "  <hSO>%d</hSO>", data->rampPT1Tms_option);
  off += sprintf(stringBuffer + off, "  <hxW>%d</hxW>", data->xMultiplier);
  off += sprintf(stringBuffer + off, "  <uwP>%d</uwP>", data->yMultiplier);
  off += sprintf(stringBuffer + off, "  <fQL>%d</fQL>", data->yRefType);
  off += sprintf(stringBuffer + off, "</gtf>");
  EXI_DEBUG("End of sprintXML: DERCurve, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEventStatus(int8u *stringBuffer, int offset, EmberExiGeneratedEventStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EventStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oWy");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <iCc>%d</iCc>", data->currentStatus);
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <Fbu>%d</Fbu>", data->potentiallySuperseded);
  off += sprintf(stringBuffer + off, "  <bLT>%d</bLT>", data->potentiallySupersededTime_option);
  off += sprintf(stringBuffer + off, "  <gfr>%s</gfr>", data->reason_option);
  off += sprintf(stringBuffer + off, "</oWy>");
  EXI_DEBUG("End of sprintXML: EventStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConsumptionTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Tij");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Tij>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRespondableResource(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableResource *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RespondableResource, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ajy");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ajy>");
  EXI_DEBUG("End of sprintXML: RespondableResource, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRespondableSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableSubscribableIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RespondableSubscribableIdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kXX");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "</kXX>");
  EXI_DEBUG("End of sprintXML: RespondableSubscribableIdentifiedObject, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEvent(int8u *stringBuffer, int offset, EmberExiGeneratedEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Event, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DaP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "</DaP>");
  EXI_DEBUG("End of sprintXML: Event, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRandomizableEvent(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizableEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RandomizableEvent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<hrH");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <GCO>%d</GCO>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <ipl>%d</ipl>", data->randomizeStart_option);
  off += sprintf(stringBuffer + off, "</hrH>");
  EXI_DEBUG("End of sprintXML: RandomizableEvent, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kHj");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <GCO>%d</GCO>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <ipl>%d</ipl>", data->randomizeStart_option);
    if ( data->ConsumptionTariffIntervalListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructConsumptionTariffIntervalListLink(stringBuffer, off, (data->ConsumptionTariffIntervalListLink_option));
  off += sprintf(stringBuffer + off, "  <PPa>%d</PPa>", data->touTier);
  off += sprintf(stringBuffer + off, "</kHj>");
  EXI_DEBUG("End of sprintXML: TimeTariffInterval, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YFF");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</YFF>");
  EXI_DEBUG("End of sprintXML: ResponseListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponseSet(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<aeC");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->ResponseListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructResponseListLink(stringBuffer, off, (data->ResponseListLink_option));
  off += sprintf(stringBuffer + off, "</aeC>");
  EXI_DEBUG("End of sprintXML: ResponseSet, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveBillingPeriodListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveBillingPeriodListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<icd");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</icd>");
  EXI_DEBUG("End of sprintXML: ActiveBillingPeriodListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveProjectionReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveProjectionReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<AEd");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</AEd>");
  EXI_DEBUG("End of sprintXML: ActiveProjectionReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTargetReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTargetReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cvj");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</cvj>");
  EXI_DEBUG("End of sprintXML: ActiveTargetReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriodListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PfI");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PfI>");
  EXI_DEBUG("End of sprintXML: BillingPeriodListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructHistoricalReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ebg");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Ebg>");
  EXI_DEBUG("End of sprintXML: HistoricalReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepaymentLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PNc");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PNc>");
  EXI_DEBUG("End of sprintXML: PrepaymentLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<VSG");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</VSG>");
  EXI_DEBUG("End of sprintXML: ProjectionReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfileLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<lEV");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</lEV>");
  EXI_DEBUG("End of sprintXML: TariffProfileLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qhp");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</qhp>");
  EXI_DEBUG("End of sprintXML: UsagePointLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAgreement(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreement *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAgreement, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eVB");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->ActiveBillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(stringBuffer, off, (data->ActiveBillingPeriodListLink_option));
    if ( data->ActiveProjectionReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveProjectionReadingListLink(stringBuffer, off, (data->ActiveProjectionReadingListLink_option));
    if ( data->ActiveTargetReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveTargetReadingListLink(stringBuffer, off, (data->ActiveTargetReadingListLink_option));
    if ( data->BillingPeriodListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingPeriodListLink(stringBuffer, off, (data->BillingPeriodListLink_option));
    if ( data->HistoricalReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructHistoricalReadingListLink(stringBuffer, off, (data->HistoricalReadingListLink_option));
    if ( data->PrepaymentLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepaymentLink(stringBuffer, off, (data->PrepaymentLink_option));
    if ( data->ProjectionReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructProjectionReadingListLink(stringBuffer, off, (data->ProjectionReadingListLink_option));
  off += sprintf(stringBuffer + off, "  <MHd>%s</MHd>", data->serviceAccount_option);
  off += sprintf(stringBuffer + off, "  <VXX>%s</VXX>", data->serviceLocation_option);
    if ( data->TargetReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTargetReadingListLink(stringBuffer, off, (data->TargetReadingListLink_option));
    if ( data->TariffProfileLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfileLink(stringBuffer, off, (data->TariffProfileLink_option));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "</eVB>");
  EXI_DEBUG("End of sprintXML: CustomerAgreement, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructOffset(int8u *stringBuffer, int offset, EmberExiGeneratedOffset *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Offset, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<rRA");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <KdJ>%d</KdJ>", data->coolingOffset_option);
  off += sprintf(stringBuffer + off, "  <ofG>%d</ofG>", data->heatingOffset_option);
  off += sprintf(stringBuffer + off, "  <jNk>%d</jNk>", data->loadAdjustmentPercentageOffset_option);
  off += sprintf(stringBuffer + off, "</rRA>");
  EXI_DEBUG("End of sprintXML: Offset, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTextMessageListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTextMessageListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FjL");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</FjL>");
  EXI_DEBUG("End of sprintXML: ActiveTextMessageListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ikD");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ikD>");
  EXI_DEBUG("End of sprintXML: FileLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFixedPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedFixedPowerFactor *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FixedPowerFactor, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iLV");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <soK>%d</soK>", data->displacement);
  off += sprintf(stringBuffer + off, "  <ieo>%d</ieo>", data->excitation);
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "</iLV>");
  EXI_DEBUG("End of sprintXML: FixedPowerFactor, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRPLInstanceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRPLInstanceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLInstanceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ojn");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</ojn>");
  EXI_DEBUG("End of sprintXML: RPLInstanceListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIPAddr(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddr *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPAddr, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oRG");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <address>");
  { int16u i;
    for ( i=0; i<data->address.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->address.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</address>");
    if ( data->RPLInstanceListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRPLInstanceListLink(stringBuffer, off, (data->RPLInstanceListLink_option));
  off += sprintf(stringBuffer + off, "</oRG>");
  EXI_DEBUG("End of sprintXML: IPAddr, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIPAddrList(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddrList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPAddrList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<fRd");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->IPAddr_count; i++ )
    if ( data->IPAddr_array != NULL )
      off += emberExiXmlShortTagsSprintfStructIPAddr(stringBuffer, off, &(data->IPAddr_array[i]));
  }
  off += sprintf(stringBuffer + off, "</fRd>");
  EXI_DEBUG("End of sprintXML: IPAddrList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConnectStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedConnectStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConnectStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cMy");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</cMy>");
  EXI_DEBUG("End of sprintXML: ConnectStatusType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructInverterStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedInverterStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: InverterStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<uvw");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</uvw>");
  EXI_DEBUG("End of sprintXML: InverterStatusType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLocalControlModeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedLocalControlModeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LocalControlModeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Plq");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</Plq>");
  EXI_DEBUG("End of sprintXML: LocalControlModeStatusType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructManufacturerStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedManufacturerStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ManufacturerStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Syy");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <rYj>%s</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</Syy>");
  EXI_DEBUG("End of sprintXML: ManufacturerStatusType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructOperationalModeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedOperationalModeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: OperationalModeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EKt");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</EKt>");
  EXI_DEBUG("End of sprintXML: OperationalModeStatusType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructStateOfChargeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedStateOfChargeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: StateOfChargeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<JDK");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</JDK>");
  EXI_DEBUG("End of sprintXML: StateOfChargeStatusType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructStorageModeStatusType(int8u *stringBuffer, int offset, EmberExiGeneratedStorageModeStatusType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: StorageModeStatusType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ctf");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hxq>%d</hxq>", data->dateTime);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</ctf>");
  EXI_DEBUG("End of sprintXML: StorageModeStatusType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Xwp");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->genConnectStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructConnectStatusType(stringBuffer, off, (data->genConnectStatus_option));
    if ( data->inverterStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructInverterStatusType(stringBuffer, off, (data->inverterStatus_option));
    if ( data->localControlModeStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLocalControlModeStatusType(stringBuffer, off, (data->localControlModeStatus_option));
    if ( data->manufacturerStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructManufacturerStatusType(stringBuffer, off, (data->manufacturerStatus_option));
    if ( data->operationalModeStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructOperationalModeStatusType(stringBuffer, off, (data->operationalModeStatus_option));
  off += sprintf(stringBuffer + off, "  <uXc>%d</uXc>", data->readingTime);
    if ( data->stateOfChargeStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructStateOfChargeStatusType(stringBuffer, off, (data->stateOfChargeStatus_option));
    if ( data->storageModeStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructStorageModeStatusType(stringBuffer, off, (data->storageModeStatus_option));
    if ( data->storConnectStatus_option != NULL )
      off += emberExiXmlShortTagsSprintfStructConnectStatusType(stringBuffer, off, (data->storConnectStatus_option));
  off += sprintf(stringBuffer + off, "</Xwp>");
  EXI_DEBUG("End of sprintXML: DERStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReduction *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReduction, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QmL");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Cii>%d</Cii>", data->type);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</QmL>");
  EXI_DEBUG("End of sprintXML: TargetReduction, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveEndDeviceControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveEndDeviceControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IDE");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</IDE>");
  EXI_DEBUG("End of sprintXML: ActiveEndDeviceControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActivePower(int8u *stringBuffer, int offset, EmberExiGeneratedActivePower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActivePower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<lem");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</lem>");
  EXI_DEBUG("End of sprintXML: ActivePower, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControlListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KMu");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</KMu>");
  EXI_DEBUG("End of sprintXML: EndDeviceControlListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RXE");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->ActiveEndDeviceControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveEndDeviceControlListLink(stringBuffer, off, (data->ActiveEndDeviceControlListLink_option));
  off += sprintf(stringBuffer + off, "  <VQN>%d</VQN>", data->availabilityUpdatePercentChangeThreshold_option);
    if ( data->availabilityUpdatePowerChangeThreshold_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->availabilityUpdatePowerChangeThreshold_option));
    if ( data->EndDeviceControlListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceControlListLink(stringBuffer, off, (data->EndDeviceControlListLink_option));
  off += sprintf(stringBuffer + off, "  <PdK>%d</PdK>", data->primacy);
  off += sprintf(stringBuffer + off, "</RXE>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgram, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscribableList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscribableList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OXH");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</OXH>");
  EXI_DEBUG("End of sprintXML: SubscribableList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OqK");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DemandResponseProgram_count; i++ )
    if ( data->DemandResponseProgram_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgram(stringBuffer, off, &(data->DemandResponseProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</OqK>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLogEvent(int8u *stringBuffer, int offset, EmberExiGeneratedLogEvent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEvent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<WfW");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <pPv>%d</pPv>", data->createdDateTime);
  off += sprintf(stringBuffer + off, "  <fib>%d</fib>", data->extendedData_option);
  off += sprintf(stringBuffer + off, "  <Uup>%d</Uup>", data->functionSet);
  off += sprintf(stringBuffer + off, "  <bCY>%d</bCY>", data->logEventCode);
  off += sprintf(stringBuffer + off, "  <Usv>%d</Usv>", data->logEventID);
  off += sprintf(stringBuffer + off, "  <aWT>%d</aWT>", data->logEventPEN);
  off += sprintf(stringBuffer + off, "  <eIj>%d</eIj>", data->profileID);
  off += sprintf(stringBuffer + off, "</WfW>");
  EXI_DEBUG("End of sprintXML: LogEvent, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLogEventList(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LogEventList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PWb");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->LogEvent_count; i++ )
    if ( data->LogEvent_array != NULL )
      off += emberExiXmlShortTagsSprintfStructLogEvent(stringBuffer, off, &(data->LogEvent_array[i]));
  }
  off += sprintf(stringBuffer + off, "</PWb>");
  EXI_DEBUG("End of sprintXML: LogEventList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNeighborListLink(int8u *stringBuffer, int offset, EmberExiGeneratedNeighborListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NeighborListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<JTE");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</JTE>");
  EXI_DEBUG("End of sprintXML: NeighborListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIEEE_802_15_4(int8u *stringBuffer, int offset, EmberExiGeneratedIEEE_802_15_4 *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IEEE_802_15_4, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NcL");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <capabilityInfo>");
  { int16u i;
    for ( i=0; i<data->capabilityInfo.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->capabilityInfo.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</capabilityInfo>");
    if ( data->NeighborListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructNeighborListLink(stringBuffer, off, (data->NeighborListLink_option));
  off += sprintf(stringBuffer + off, "  <xbp>%d</xbp>", data->shortAddress);
  off += sprintf(stringBuffer + off, "</NcL>");
  EXI_DEBUG("End of sprintXML: IEEE_802_15_4, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRateComponentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KPE");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</KPE>");
  EXI_DEBUG("End of sprintXML: RateComponentListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HSK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</HSK>");
  EXI_DEBUG("End of sprintXML: DERLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTimeTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveTimeTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SIF");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</SIF>");
  EXI_DEBUG("End of sprintXML: ActiveTimeTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffIntervalList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pat");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TimeTariffInterval_count; i++ )
    if ( data->TimeTariffInterval_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeTariffInterval(stringBuffer, off, &(data->TimeTariffInterval_array[i]));
  }
  off += sprintf(stringBuffer + off, "</pat>");
  EXI_DEBUG("End of sprintXML: TimeTariffIntervalList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNeighbor(int8u *stringBuffer, int offset, EmberExiGeneratedNeighbor *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Neighbor, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DBY");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Nex>%d</Nex>", data->isChild);
  off += sprintf(stringBuffer + off, "  <LMC>%d</LMC>", data->linkQuality);
  off += sprintf(stringBuffer + off, "  <xbp>%d</xbp>", data->shortAddress);
  off += sprintf(stringBuffer + off, "</DBY>");
  EXI_DEBUG("End of sprintXML: Neighbor, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRPLSourceRoutesListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRPLSourceRoutesListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLSourceRoutesListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QOP");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</QOP>");
  EXI_DEBUG("End of sprintXML: RPLSourceRoutesListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<XqK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</XqK>");
  EXI_DEBUG("End of sprintXML: DERProgramLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLLInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterfaceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LLInterfaceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<GNN");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</GNN>");
  EXI_DEBUG("End of sprintXML: LLInterfaceListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTime(int8u *stringBuffer, int offset, EmberExiGeneratedTime *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Time, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eCH");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <pYU>%d</pYU>", data->currentTime);
  off += sprintf(stringBuffer + off, "  <DwD>%d</DwD>", data->dstEndTime);
  off += sprintf(stringBuffer + off, "  <vbl>%d</vbl>", data->dstOffset);
  off += sprintf(stringBuffer + off, "  <jXh>%d</jXh>", data->dstStartTime);
  off += sprintf(stringBuffer + off, "  <IFB>%d</IFB>", data->localTime_option);
  off += sprintf(stringBuffer + off, "  <seY>%d</seY>", data->quality);
  off += sprintf(stringBuffer + off, "  <nFv>%d</nFv>", data->tzOffset);
  off += sprintf(stringBuffer + off, "</eCH>");
  EXI_DEBUG("End of sprintXML: Time, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UsagePointList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cDB");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePoint(stringBuffer, off, &(data->UsagePoint_array[i]));
  }
  off += sprintf(stringBuffer + off, "</cDB>");
  EXI_DEBUG("End of sprintXML: UsagePointList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructUnitValueType(int8u *stringBuffer, int offset, EmberExiGeneratedUnitValueType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: UnitValueType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<sWw");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <FTm>%d</FTm>", data->unit);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</sWw>");
  EXI_DEBUG("End of sprintXML: UnitValueType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingType(int8u *stringBuffer, int offset, EmberExiGeneratedReadingType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<yCy");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Hcd>%d</Hcd>", data->accumulationBehaviour_option);
    if ( data->calorificValue_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUnitValueType(stringBuffer, off, (data->calorificValue_option));
  off += sprintf(stringBuffer + off, "  <mOH>%d</mOH>", data->commodity_option);
    if ( data->conversionFactor_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUnitValueType(stringBuffer, off, (data->conversionFactor_option));
  off += sprintf(stringBuffer + off, "  <Any>%d</Any>", data->dataQualifier_option);
  off += sprintf(stringBuffer + off, "  <oQt>%d</oQt>", data->flowDirection_option);
  off += sprintf(stringBuffer + off, "  <Wdn>%d</Wdn>", data->intervalLength_option);
  off += sprintf(stringBuffer + off, "  <SaF>%d</SaF>", data->kind_option);
  off += sprintf(stringBuffer + off, "  <Cmr>%d</Cmr>", data->maxNumberOfIntervals_option);
  off += sprintf(stringBuffer + off, "  <HPY>%d</HPY>", data->numberOfConsumptionBlocks_option);
  off += sprintf(stringBuffer + off, "  <qgE>%d</qgE>", data->numberOfTouTiers_option);
  off += sprintf(stringBuffer + off, "  <uuK>%d</uuK>", data->phase_option);
  off += sprintf(stringBuffer + off, "  <euY>%d</euY>", data->powerOfTenMultiplier_option);
  off += sprintf(stringBuffer + off, "  <hQe>%d</hQe>", data->subIntervalLength_option);
  off += sprintf(stringBuffer + off, "  <hXK>%d</hXK>", data->supplyLimit_option);
  off += sprintf(stringBuffer + off, "  <YFV>%d</YFV>", data->tieredConsumptionBlocks_option);
  off += sprintf(stringBuffer + off, "  <EUx>%d</EUx>", data->uom_option);
  off += sprintf(stringBuffer + off, "</yCy>");
  EXI_DEBUG("End of sprintXML: ReadingType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructApplianceLoadReduction(int8u *stringBuffer, int offset, EmberExiGeneratedApplianceLoadReduction *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ApplianceLoadReduction, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MEn");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Cii>%d</Cii>", data->type);
  off += sprintf(stringBuffer + off, "</MEn>");
  EXI_DEBUG("End of sprintXML: ApplianceLoadReduction, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDutyCycle(int8u *stringBuffer, int offset, EmberExiGeneratedDutyCycle *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DutyCycle, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Wxl");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hkt>%d</hkt>", data->normalValue);
  off += sprintf(stringBuffer + off, "</Wxl>");
  EXI_DEBUG("End of sprintXML: DutyCycle, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSetPoint(int8u *stringBuffer, int offset, EmberExiGeneratedSetPoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SetPoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<nei");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <vhL>%d</vhL>", data->coolingSetpoint_option);
  off += sprintf(stringBuffer + off, "  <PIT>%d</PIT>", data->heatingSetpoint_option);
  off += sprintf(stringBuffer + off, "</nei>");
  EXI_DEBUG("End of sprintXML: SetPoint, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceControl(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OwR");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <GCO>%d</GCO>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <ipl>%d</ipl>", data->randomizeStart_option);
    if ( data->ApplianceLoadReduction_option != NULL )
      off += emberExiXmlShortTagsSprintfStructApplianceLoadReduction(stringBuffer, off, (data->ApplianceLoadReduction_option));
  off += sprintf(stringBuffer + off, "  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceCategory.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceCategory>");
  off += sprintf(stringBuffer + off, "  <EQU>%d</EQU>", data->drProgramMandatory);
    if ( data->DutyCycle_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDutyCycle(stringBuffer, off, (data->DutyCycle_option));
  off += sprintf(stringBuffer + off, "  <MCF>%d</MCF>", data->loadShiftForward);
    if ( data->Offset_option != NULL )
      off += emberExiXmlShortTagsSprintfStructOffset(stringBuffer, off, (data->Offset_option));
  off += sprintf(stringBuffer + off, "  <GQe>%d</GQe>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSetPoint(stringBuffer, off, (data->SetPoint_option));
    if ( data->TargetReduction_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTargetReduction(stringBuffer, off, (data->TargetReduction_option));
  off += sprintf(stringBuffer + off, "</OwR>");
  EXI_DEBUG("End of sprintXML: EndDeviceControl, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverride(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverride *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverride, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iUh");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "</iUh>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverride, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cAV");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</cAV>");
  EXI_DEBUG("End of sprintXML: EndDeviceListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePointListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KEc");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</KEc>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePointListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSelfDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDeviceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SelfDeviceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<egE");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</egE>");
  EXI_DEBUG("End of sprintXML: SelfDeviceLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceCapability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MIa");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->CustomerAccountListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCustomerAccountListLink(stringBuffer, off, (data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructResponseSetListLink(stringBuffer, off, (data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfileListLink(stringBuffer, off, (data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceListLink(stringBuffer, off, (data->EndDeviceListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorUsagePointListLink(stringBuffer, off, (data->MirrorUsagePointListLink_option));
    if ( data->SelfDeviceLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSelfDeviceLink(stringBuffer, off, (data->SelfDeviceLink_option));
  off += sprintf(stringBuffer + off, "</MIa>");
  EXI_DEBUG("End of sprintXML: DeviceCapability, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileStatus(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YFg");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <eYS>%d</eYS>", data->activateTime_option);
    if ( data->FileLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileLink(stringBuffer, off, (data->FileLink_option));
  off += sprintf(stringBuffer + off, "  <HML>%d</HML>", data->loadPercent);
  off += sprintf(stringBuffer + off, "  <oik>%d</oik>", data->nextRequestAttempt);
  off += sprintf(stringBuffer + off, "  <jaU>%d</jaU>", data->request503Count);
  off += sprintf(stringBuffer + off, "  <DRy>%d</DRy>", data->requestFailCount);
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status);
  off += sprintf(stringBuffer + off, "  <RfB>%d</RfB>", data->statusTime);
  off += sprintf(stringBuffer + off, "</YFg>");
  EXI_DEBUG("End of sprintXML: FileStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERCurveLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurveLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gkd");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</gkd>");
  EXI_DEBUG("End of sprintXML: DERCurveLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAccountBalanceLink(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalanceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountBalanceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<utb");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</utb>");
  EXI_DEBUG("End of sprintXML: AccountBalanceLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveCreditRegisterListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveCreditRegisterListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MoW");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</MoW>");
  EXI_DEBUG("End of sprintXML: ActiveCreditRegisterListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveSupplyInterruptionOverrideListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PHl");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</PHl>");
  EXI_DEBUG("End of sprintXML: ActiveSupplyInterruptionOverrideListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRealEnergy(int8u *stringBuffer, int offset, EmberExiGeneratedRealEnergy *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RealEnergy, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oDe");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</oDe>");
  EXI_DEBUG("End of sprintXML: RealEnergy, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAccountingUnit(int8u *stringBuffer, int offset, EmberExiGeneratedAccountingUnit *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountingUnit, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<imY");
  off += sprintf(stringBuffer + off, ">");
    if ( data->energyUnit_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRealEnergy(stringBuffer, off, (data->energyUnit_option));
  off += sprintf(stringBuffer + off, "  <olC>%d</olC>", data->monetaryUnit);
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</imY>");
  EXI_DEBUG("End of sprintXML: AccountingUnit, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegisterListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UgW");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</UgW>");
  EXI_DEBUG("End of sprintXML: CreditRegisterListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepayOperationStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatusLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayOperationStatusLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xxs");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</xxs>");
  EXI_DEBUG("End of sprintXML: PrepayOperationStatusLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverrideListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<lSK");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</lSK>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverrideListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepayment(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayment *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Prepayment, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<PEa");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
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
  off += sprintf(stringBuffer + off, "  <MSI>%d</MSI>", data->prepayMode);
    if ( data->PrepayOperationStatusLink != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepayOperationStatusLink(stringBuffer, off, (data->PrepayOperationStatusLink));
    if ( data->SupplyInterruptionOverrideListLink != NULL )
      off += emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideListLink(stringBuffer, off, (data->SupplyInterruptionOverrideListLink));
  { int16u i;
    for ( i=0; i<data->UsagePoint_count; i++ )
    if ( data->UsagePoint_array != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePoint(stringBuffer, off, &(data->UsagePoint_array[i]));
  }
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "</PEa>");
  EXI_DEBUG("End of sprintXML: Prepayment, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCondition(int8u *stringBuffer, int offset, EmberExiGeneratedCondition *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Condition, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<opq");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <voF>%d</voF>", data->attributeIdentifier);
  off += sprintf(stringBuffer + off, "  <rWD>%d</rWD>", data->lowerThreshold);
  off += sprintf(stringBuffer + off, "  <RfI>%d</RfI>", data->upperThreshold);
  off += sprintf(stringBuffer + off, "</opq>");
  EXI_DEBUG("End of sprintXML: Condition, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingSetBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSetBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CnP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
  off += sprintf(stringBuffer + off, "</CnP>");
  EXI_DEBUG("End of sprintXML: ReadingSetBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorReadingSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorReadingSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<mbJ");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReading(stringBuffer, off, &(data->Reading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</mbJ>");
  EXI_DEBUG("End of sprintXML: MirrorReadingSet, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<amA");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "</amA>");
  EXI_DEBUG("End of sprintXML: MeterReadingBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorMeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<mRq");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <JIo>%d</JIo>", data->lastUpdateTime_option);
  { int16u i;
    for ( i=0; i<data->MirrorReadingSet_count; i++ )
    if ( data->MirrorReadingSet_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorReadingSet(stringBuffer, off, &(data->MirrorReadingSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <VRx>%d</VRx>", data->nextUpdateTime_option);
    if ( data->Reading_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReading(stringBuffer, off, (data->Reading_option));
    if ( data->ReadingType_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingType(stringBuffer, off, (data->ReadingType_option));
  off += sprintf(stringBuffer + off, "</mRq>");
  EXI_DEBUG("End of sprintXML: MirrorMeterReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePoint *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePoint, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OKp");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
  off += sprintf(stringBuffer + off, "  <Gvc>%d</Gvc>", data->serviceCategoryKind);
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status);
  off += sprintf(stringBuffer + off, "  <deviceLFDI>");
  { int16u i;
    for ( i=0; i<data->deviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->deviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</deviceLFDI>");
  { int16u i;
    for ( i=0; i<data->MirrorMeterReading_count; i++ )
    if ( data->MirrorMeterReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorMeterReading(stringBuffer, off, &(data->MirrorMeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</OKp>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePoint, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceChange(int8u *stringBuffer, int offset, EmberExiGeneratedServiceChange *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceChange, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ylg");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <FGr>%d</FGr>", data->newStatus);
  off += sprintf(stringBuffer + off, "  <VJm>%d</VJm>", data->startTime);
  off += sprintf(stringBuffer + off, "</Ylg>");
  EXI_DEBUG("End of sprintXML: ServiceChange, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRPLInstance(int8u *stringBuffer, int offset, EmberExiGeneratedRPLInstance *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLInstance, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Xyb");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <vwx>%d</vwx>", data->DODAGid);
  off += sprintf(stringBuffer + off, "  <Hpm>%d</Hpm>", data->DODAGroot);
  off += sprintf(stringBuffer + off, "  <yAl>%d</yAl>", data->flags);
  off += sprintf(stringBuffer + off, "  <kAI>%d</kAI>", data->groundedFlag);
  off += sprintf(stringBuffer + off, "  <KMh>%d</KMh>", data->MOP);
  off += sprintf(stringBuffer + off, "  <hRg>%d</hRg>", data->PRF);
  off += sprintf(stringBuffer + off, "  <eAd>%d</eAd>", data->rank);
  off += sprintf(stringBuffer + off, "  <epb>%d</epb>", data->RPLInstanceID);
    if ( data->RPLSourceRoutesListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRPLSourceRoutesListLink(stringBuffer, off, (data->RPLSourceRoutesListLink_option));
  off += sprintf(stringBuffer + off, "  <Kee>%d</Kee>", data->versionNumber);
  off += sprintf(stringBuffer + off, "</Xyb>");
  EXI_DEBUG("End of sprintXML: RPLInstance, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFixedPointType(int8u *stringBuffer, int offset, EmberExiGeneratedFixedPointType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FixedPointType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<HtP");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</HtP>");
  EXI_DEBUG("End of sprintXML: FixedPointType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingSetListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QdW");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</QdW>");
  EXI_DEBUG("End of sprintXML: BillingReadingSetListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingTypeLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingTypeLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bbT");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</bbT>");
  EXI_DEBUG("End of sprintXML: ReadingTypeLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedBillingMeterReadingBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingMeterReadingBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<nXk");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
  off += sprintf(stringBuffer + off, "</nXk>");
  EXI_DEBUG("End of sprintXML: BillingMeterReadingBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructProjectionReading(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TGb");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
  off += sprintf(stringBuffer + off, "</TGb>");
  EXI_DEBUG("End of sprintXML: ProjectionReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructProjectionReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ProjectionReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ddx");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ProjectionReading_count; i++ )
    if ( data->ProjectionReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructProjectionReading(stringBuffer, off, &(data->ProjectionReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Ddx>");
  EXI_DEBUG("End of sprintXML: ProjectionReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructHistoricalReading(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MfO");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
  off += sprintf(stringBuffer + off, "</MfO>");
  EXI_DEBUG("End of sprintXML: HistoricalReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDemandResponseProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DemandResponseProgramLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<yMN");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</yMN>");
  EXI_DEBUG("End of sprintXML: DemandResponseProgramLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLoadShedAvailability(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LoadShedAvailability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TmI");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ibf>%d</ibf>", data->availabilityDuration_option);
    if ( data->DemandResponseProgramLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgramLink(stringBuffer, off, (data->DemandResponseProgramLink_option));
  off += sprintf(stringBuffer + off, "  <KDM>%d</KDM>", data->sheddablePercent_option);
    if ( data->sheddablePower_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->sheddablePower_option));
  off += sprintf(stringBuffer + off, "</TmI>");
  EXI_DEBUG("End of sprintXML: LoadShedAvailability, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIPAddrListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddrListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPAddrListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EYh");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</EYh>");
  EXI_DEBUG("End of sprintXML: IPAddrListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIPInterface(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterface *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPInterface, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<FBY");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Yra>%s</Yra>", data->ifDescr_option);
  off += sprintf(stringBuffer + off, "  <Sop>%d</Sop>", data->ifHighSpeed_option);
  off += sprintf(stringBuffer + off, "  <rer>%d</rer>", data->ifInBroadcastPkts_option);
  off += sprintf(stringBuffer + off, "  <QXt>%d</QXt>", data->ifIndex_option);
  off += sprintf(stringBuffer + off, "  <XNq>%d</XNq>", data->ifInDiscards_option);
  off += sprintf(stringBuffer + off, "  <Beh>%d</Beh>", data->ifInErrors_option);
  off += sprintf(stringBuffer + off, "  <rGd>%d</rGd>", data->ifInMulticastPkts_option);
  off += sprintf(stringBuffer + off, "  <Wqk>%d</Wqk>", data->ifInOctets_option);
  off += sprintf(stringBuffer + off, "  <cAg>%d</cAg>", data->ifInUcastPkts_option);
  off += sprintf(stringBuffer + off, "  <BdM>%d</BdM>", data->ifInUnknownProtos_option);
  off += sprintf(stringBuffer + off, "  <gNQ>%d</gNQ>", data->ifMtu_option);
  off += sprintf(stringBuffer + off, "  <wKh>%s</wKh>", data->ifName_option);
  off += sprintf(stringBuffer + off, "  <gqB>%d</gqB>", data->ifOperStatus_option);
  off += sprintf(stringBuffer + off, "  <gdl>%d</gdl>", data->ifOutBroadcastPkts_option);
  off += sprintf(stringBuffer + off, "  <Xrq>%d</Xrq>", data->ifOutDiscards_option);
  off += sprintf(stringBuffer + off, "  <FaJ>%d</FaJ>", data->ifOutErrors_option);
  off += sprintf(stringBuffer + off, "  <lMx>%d</lMx>", data->ifOutMulticastPkts_option);
  off += sprintf(stringBuffer + off, "  <Gvd>%d</Gvd>", data->ifOutOctets_option);
  off += sprintf(stringBuffer + off, "  <eCL>%d</eCL>", data->ifOutUcastPkts_option);
  off += sprintf(stringBuffer + off, "  <uSE>%d</uSE>", data->ifPromiscuousMode_option);
  off += sprintf(stringBuffer + off, "  <chF>%d</chF>", data->ifSpeed_option);
  off += sprintf(stringBuffer + off, "  <pxd>%d</pxd>", data->ifType_option);
    if ( data->IPAddrListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIPAddrListLink(stringBuffer, off, (data->IPAddrListLink_option));
  off += sprintf(stringBuffer + off, "  <LLQ>%d</LLQ>", data->lastResetTime_option);
  off += sprintf(stringBuffer + off, "  <rAO>%d</rAO>", data->lastUpdatedTime_option);
    if ( data->LLInterfaceListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLLInterfaceListLink(stringBuffer, off, (data->LLInterfaceListLink_option));
  off += sprintf(stringBuffer + off, "</FBY>");
  EXI_DEBUG("End of sprintXML: IPInterface, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructIPInterfaceList(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterfaceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: IPInterfaceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qMq");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->IPInterface_count; i++ )
    if ( data->IPInterface_array != NULL )
      off += emberExiXmlShortTagsSprintfStructIPInterface(stringBuffer, off, &(data->IPInterface_array[i]));
  }
  off += sprintf(stringBuffer + off, "</qMq>");
  EXI_DEBUG("End of sprintXML: IPInterfaceList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFixedVAr(int8u *stringBuffer, int offset, EmberExiGeneratedFixedVAr *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FixedVAr, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Lcx");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Cmq>%d</Cmq>", data->refType);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</Lcx>");
  EXI_DEBUG("End of sprintXML: FixedVAr, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCurvePairType(int8u *stringBuffer, int offset, EmberExiGeneratedCurvePairType *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurvePairType, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<isI");
  off += sprintf(stringBuffer + off, ">");
    if ( data->lowerLimit != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurveLink(stringBuffer, off, (data->lowerLimit));
    if ( data->upperLimit != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurveLink(stringBuffer, off, (data->upperLimit));
  off += sprintf(stringBuffer + off, "</isI>");
  EXI_DEBUG("End of sprintXML: CurvePairType, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERControlBase(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlBase *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlBase, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ylV");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <CbT>%d</CbT>", data->opModFixedFlow_option);
    if ( data->opModFixedPF_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFixedPowerFactor(stringBuffer, off, (data->opModFixedPF_option));
    if ( data->opModFixedVAr_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFixedVAr(stringBuffer, off, (data->opModFixedVAr_option));
  off += sprintf(stringBuffer + off, "  <oWd>%d</oWd>", data->opModFixedW_option);
    if ( data->opModFreqWatt_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurveLink(stringBuffer, off, (data->opModFreqWatt_option));
    if ( data->opModHVRT_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCurvePairType(stringBuffer, off, (data->opModHVRT_option));
    if ( data->opModLVRT_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCurvePairType(stringBuffer, off, (data->opModLVRT_option));
    if ( data->opModVoltVAr_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurveLink(stringBuffer, off, (data->opModVoltVAr_option));
    if ( data->opModVoltWatt_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurveLink(stringBuffer, off, (data->opModVoltWatt_option));
    if ( data->opModWattPF_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurveLink(stringBuffer, off, (data->opModWattPF_option));
  off += sprintf(stringBuffer + off, "  <Ocw>%d</Ocw>", data->rampTms_option);
  off += sprintf(stringBuffer + off, "</ylV>");
  EXI_DEBUG("End of sprintXML: DERControlBase, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERControl(int8u *stringBuffer, int offset, EmberExiGeneratedDERControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NcK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <GCO>%d</GCO>", data->randomizeDuration_option);
  off += sprintf(stringBuffer + off, "  <ipl>%d</ipl>", data->randomizeStart_option);
    if ( data->DERControlBase != NULL )
      off += emberExiXmlShortTagsSprintfStructDERControlBase(stringBuffer, off, (data->DERControlBase));
  off += sprintf(stringBuffer + off, "</NcK>");
  EXI_DEBUG("End of sprintXML: DERControl, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERControlList(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<lfT");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERControl_count; i++ )
    if ( data->DERControl_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDERControl(stringBuffer, off, &(data->DERControl_array[i]));
  }
  off += sprintf(stringBuffer + off, "</lfT>");
  EXI_DEBUG("End of sprintXML: DERControlList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructActiveFlowReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveFlowReservationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ActiveFlowReservationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pbo");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</pbo>");
  EXI_DEBUG("End of sprintXML: ActiveFlowReservationListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSetListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<oiw");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</oiw>");
  EXI_DEBUG("End of sprintXML: ReadingSetListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAbstractFlowReservation(int8u *stringBuffer, int offset, EmberExiGeneratedAbstractFlowReservation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AbstractFlowReservation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iSx");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "</iSx>");
  EXI_DEBUG("End of sprintXML: AbstractFlowReservation, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFlowReservationResponse(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bWt");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
    if ( data->energyAvailable != NULL )
      off += emberExiXmlShortTagsSprintfStructRealEnergy(stringBuffer, off, (data->energyAvailable));
    if ( data->powerAvailable != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->powerAvailable));
  off += sprintf(stringBuffer + off, "  <JdM>%d</JdM>", data->reservationStatus);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</bWt>");
  EXI_DEBUG("End of sprintXML: FlowReservationResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFlowReservationResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponseList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationResponseList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xpm");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->FlowReservationResponse_count; i++ )
    if ( data->FlowReservationResponse_array != NULL )
      off += emberExiXmlShortTagsSprintfStructFlowReservationResponse(stringBuffer, off, &(data->FlowReservationResponse_array[i]));
  }
  off += sprintf(stringBuffer + off, "</xpm>");
  EXI_DEBUG("End of sprintXML: FlowReservationResponseList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCurrentRMS(int8u *stringBuffer, int offset, EmberExiGeneratedCurrentRMS *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CurrentRMS, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SQq");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</SQq>");
  EXI_DEBUG("End of sprintXML: CurrentRMS, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAmpereHour(int8u *stringBuffer, int offset, EmberExiGeneratedAmpereHour *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AmpereHour, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iUl");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</iUl>");
  EXI_DEBUG("End of sprintXML: AmpereHour, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructApparentPower(int8u *stringBuffer, int offset, EmberExiGeneratedApparentPower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ApparentPower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bAG");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</bAG>");
  EXI_DEBUG("End of sprintXML: ApparentPower, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReactivePower(int8u *stringBuffer, int offset, EmberExiGeneratedReactivePower *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReactivePower, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ErE");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</ErE>");
  EXI_DEBUG("End of sprintXML: ReactivePower, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructWattHour(int8u *stringBuffer, int offset, EmberExiGeneratedWattHour *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: WattHour, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kks");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</kks>");
  EXI_DEBUG("End of sprintXML: WattHour, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDERCapability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCapability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cME");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <modesSupported>");
  { int16u i;
    for ( i=0; i<data->modesSupported.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->modesSupported.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</modesSupported>");
    if ( data->rtgA != NULL )
      off += emberExiXmlShortTagsSprintfStructCurrentRMS(stringBuffer, off, (data->rtgA));
    if ( data->rtgAh_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAmpereHour(stringBuffer, off, (data->rtgAh_option));
    if ( data->rtgMaxChargeRate_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->rtgMaxChargeRate_option));
    if ( data->rtgMaxDischargeRate_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->rtgMaxDischargeRate_option));
    if ( data->rtgMinPF_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFixedPointType(stringBuffer, off, (data->rtgMinPF_option));
    if ( data->rtgMinPFUnder_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFixedPointType(stringBuffer, off, (data->rtgMinPFUnder_option));
    if ( data->rtgVA_option != NULL )
      off += emberExiXmlShortTagsSprintfStructApparentPower(stringBuffer, off, (data->rtgVA_option));
    if ( data->rtgVAr_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReactivePower(stringBuffer, off, (data->rtgVAr_option));
    if ( data->rtgVArNeg_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReactivePower(stringBuffer, off, (data->rtgVArNeg_option));
    if ( data->rtgW != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->rtgW));
    if ( data->rtgWh_option != NULL )
      off += emberExiXmlShortTagsSprintfStructWattHour(stringBuffer, off, (data->rtgWh_option));
  off += sprintf(stringBuffer + off, "  <Cii>%d</Cii>", data->type);
  off += sprintf(stringBuffer + off, "</cME>");
  EXI_DEBUG("End of sprintXML: DERCapability, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextMessage(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessage *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessage, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<keu");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <sEr>%s</sEr>", data->originator_option);
  off += sprintf(stringBuffer + off, "  <YmF>%d</YmF>", data->priority);
  off += sprintf(stringBuffer + off, "  <tXp>%s</tXp>", data->textMessage);
  off += sprintf(stringBuffer + off, "</keu>");
  EXI_DEBUG("End of sprintXML: TextMessage, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextMessageList(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessageList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qrX");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TextMessage_count; i++ )
    if ( data->TextMessage_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTextMessage(stringBuffer, off, &(data->TextMessage_array[i]));
  }
  off += sprintf(stringBuffer + off, "</qrX>");
  EXI_DEBUG("End of sprintXML: TextMessageList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupportedLocale(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocale *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocale, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<CnH");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <hWd>%s</hWd>", data->locale);
  off += sprintf(stringBuffer + off, "</CnH>");
  EXI_DEBUG("End of sprintXML: SupportedLocale, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponse(int8u *stringBuffer, int offset, EmberExiGeneratedResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Response, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<dfM");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <pPv>%d</pPv>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</dfM>");
  EXI_DEBUG("End of sprintXML: Response, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kYD");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Response_count; i++ )
    if ( data->Response_array != NULL )
      off += emberExiXmlShortTagsSprintfStructResponse(stringBuffer, off, &(data->Response_array[i]));
  }
  off += sprintf(stringBuffer + off, "</kYD>");
  EXI_DEBUG("End of sprintXML: ResponseList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRPLInstanceList(int8u *stringBuffer, int offset, EmberExiGeneratedRPLInstanceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLInstanceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qNb");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->RPLInstance_count; i++ )
    if ( data->RPLInstance_array != NULL )
      off += emberExiXmlShortTagsSprintfStructRPLInstance(stringBuffer, off, &(data->RPLInstance_array[i]));
  }
  off += sprintf(stringBuffer + off, "</qNb>");
  EXI_DEBUG("End of sprintXML: RPLInstanceList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceSupplierList(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplierList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wyJ");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ServiceSupplier_count; i++ )
    if ( data->ServiceSupplier_array != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplier(stringBuffer, off, &(data->ServiceSupplier_array[i]));
  }
  off += sprintf(stringBuffer + off, "</wyJ>");
  EXI_DEBUG("End of sprintXML: ServiceSupplierList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscription(int8u *stringBuffer, int offset, EmberExiGeneratedSubscription *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Subscription, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MSg");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Oye>%s</Oye>", data->subscribedResource);
    if ( data->Condition_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCondition(stringBuffer, off, (data->Condition_option));
  off += sprintf(stringBuffer + off, "  <SAu>%d</SAu>", data->encoding);
  off += sprintf(stringBuffer + off, "  <Ofe>%s</Ofe>", data->level);
  off += sprintf(stringBuffer + off, "  <XJO>%d</XJO>", data->limit);
  off += sprintf(stringBuffer + off, "  <hpX>%s</hpX>", data->notificationURI);
  off += sprintf(stringBuffer + off, "</MSg>");
  EXI_DEBUG("End of sprintXML: Subscription, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KSi");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Reading_count; i++ )
    if ( data->Reading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReading(stringBuffer, off, &(data->Reading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</KSi>");
  EXI_DEBUG("End of sprintXML: ReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructloWPAN(int8u *stringBuffer, int offset, EmberExiGeneratedloWPAN *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: loWPAN, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gyU");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <LHx>%d</LHx>", data->octetsRx_option);
  off += sprintf(stringBuffer + off, "  <uqD>%d</uqD>", data->octetsTx_option);
  off += sprintf(stringBuffer + off, "  <msd>%d</msd>", data->packetsRx);
  off += sprintf(stringBuffer + off, "  <kyj>%d</kyj>", data->packetsTx);
  off += sprintf(stringBuffer + off, "  <xEk>%d</xEk>", data->rxFragError);
  off += sprintf(stringBuffer + off, "</gyU>");
  EXI_DEBUG("End of sprintXML: loWPAN, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLLInterface(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterface *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LLInterface, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<SGH");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Pca>%d</Pca>", data->CRCerrors);
  off += sprintf(stringBuffer + off, "  <EUI64>");
  { int16u i;
    for ( i=0; i<data->EUI64.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->EUI64.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</EUI64>");
    if ( data->IEEE_802_15_4_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIEEE_802_15_4(stringBuffer, off, (data->IEEE_802_15_4_option));
  off += sprintf(stringBuffer + off, "  <idW>%d</idW>", data->linkLayerType);
  off += sprintf(stringBuffer + off, "  <BPn>%d</BPn>", data->LLAckNotRx_option);
  off += sprintf(stringBuffer + off, "  <ral>%d</ral>", data->LLCSMAFail_option);
  off += sprintf(stringBuffer + off, "  <cVM>%d</cVM>", data->LLFramesDropRx_option);
  off += sprintf(stringBuffer + off, "  <wFU>%d</wFU>", data->LLFramesDropTx_option);
  off += sprintf(stringBuffer + off, "  <iLB>%d</iLB>", data->LLFramesRx_option);
  off += sprintf(stringBuffer + off, "  <MLN>%d</MLN>", data->LLFramesTx_option);
  off += sprintf(stringBuffer + off, "  <vHp>%d</vHp>", data->LLMediaAccessFail_option);
  off += sprintf(stringBuffer + off, "  <mgQ>%d</mgQ>", data->LLOctetsRx_option);
  off += sprintf(stringBuffer + off, "  <rRO>%d</rRO>", data->LLOctetsTx_option);
  off += sprintf(stringBuffer + off, "  <PpB>%d</PpB>", data->LLRetryCount_option);
  off += sprintf(stringBuffer + off, "  <inG>%d</inG>", data->LLSecurityErrorRx_option);
    if ( data->loWPAN_option != NULL )
      off += emberExiXmlShortTagsSprintfStructloWPAN(stringBuffer, off, (data->loWPAN_option));
  off += sprintf(stringBuffer + off, "</SGH>");
  EXI_DEBUG("End of sprintXML: LLInterface, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFlowReservationRequestListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequestListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationRequestListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xPq");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</xPq>");
  EXI_DEBUG("End of sprintXML: FlowReservationRequestListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFlowReservationResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponseListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationResponseListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<vNO");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</vNO>");
  EXI_DEBUG("End of sprintXML: FlowReservationResponseListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignmentsListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OwI");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</OwI>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignmentsListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRegistrationLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RegistrationLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xQG");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</xQG>");
  EXI_DEBUG("End of sprintXML: RegistrationLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscriptionListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Voj");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Voj>");
  EXI_DEBUG("End of sprintXML: SubscriptionListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDevice(int8u *stringBuffer, int offset, EmberExiGeneratedEndDevice *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDevice, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<EOy");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->ConfigurationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructConfigurationLink(stringBuffer, off, (data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERListLink(stringBuffer, off, (data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceInformationLink(stringBuffer, off, (data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDeviceStatusLink(stringBuffer, off, (data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileStatusLink(stringBuffer, off, (data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructIPInterfaceListLink(stringBuffer, off, (data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLoadShedAvailabilityLink(stringBuffer, off, (data->LoadShedAvailabilityLink_option));
  off += sprintf(stringBuffer + off, "  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructLogEventListLink(stringBuffer, off, (data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPowerStatusLink(stringBuffer, off, (data->PowerStatusLink_option));
  off += sprintf(stringBuffer + off, "  <Jma>%d</Jma>", data->sFDI);
    if ( data->FlowReservationRequestListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFlowReservationRequestListLink(stringBuffer, off, (data->FlowReservationRequestListLink_option));
    if ( data->FlowReservationResponseListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFlowReservationResponseListLink(stringBuffer, off, (data->FlowReservationResponseListLink_option));
    if ( data->FunctionSetAssignmentsListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsListLink(stringBuffer, off, (data->FunctionSetAssignmentsListLink_option));
    if ( data->RegistrationLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRegistrationLink(stringBuffer, off, (data->RegistrationLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSubscriptionListLink(stringBuffer, off, (data->SubscriptionListLink_option));
  off += sprintf(stringBuffer + off, "</EOy>");
  EXI_DEBUG("End of sprintXML: EndDevice, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pPE");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDevice_count; i++ )
    if ( data->EndDevice_array != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDevice(stringBuffer, off, &(data->EndDevice_array[i]));
  }
  off += sprintf(stringBuffer + off, "</pPE>");
  EXI_DEBUG("End of sprintXML: EndDeviceList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideList(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupplyInterruptionOverrideList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<qbO");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->SupplyInterruptionOverride_count; i++ )
    if ( data->SupplyInterruptionOverride_array != NULL )
      off += emberExiXmlShortTagsSprintfStructSupplyInterruptionOverride(stringBuffer, off, &(data->SupplyInterruptionOverride_array[i]));
  }
  off += sprintf(stringBuffer + off, "</qbO>");
  EXI_DEBUG("End of sprintXML: SupplyInterruptionOverrideList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAgreementListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAgreementListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Jve");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</Jve>");
  EXI_DEBUG("End of sprintXML: CustomerAgreementListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructServiceSupplierLink(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ServiceSupplierLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wWn");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</wWn>");
  EXI_DEBUG("End of sprintXML: ServiceSupplierLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAccount(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccount *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccount, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<WNK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <Kby>%d</Kby>", data->currency);
  off += sprintf(stringBuffer + off, "  <jQF>%s</jQF>", data->customerAccount_option);
    if ( data->CustomerAgreementListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCustomerAgreementListLink(stringBuffer, off, (data->CustomerAgreementListLink_option));
  off += sprintf(stringBuffer + off, "  <TCB>%s</TCB>", data->customerName_option);
  off += sprintf(stringBuffer + off, "  <xcx>%d</xcx>", data->pricePowerOfTenMultiplier);
    if ( data->ServiceSupplierLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceSupplierLink(stringBuffer, off, (data->ServiceSupplierLink_option));
  off += sprintf(stringBuffer + off, "</WNK>");
  EXI_DEBUG("End of sprintXML: CustomerAccount, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAccountList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccountList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<mUS");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->CustomerAccount_count; i++ )
    if ( data->CustomerAccount_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCustomerAccount(stringBuffer, off, &(data->CustomerAccount_array[i]));
  }
  off += sprintf(stringBuffer + off, "</mUS>");
  EXI_DEBUG("End of sprintXML: CustomerAccountList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAgreementList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAgreementList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<aGt");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->CustomerAgreement_count; i++ )
    if ( data->CustomerAgreement_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCustomerAgreement(stringBuffer, off, &(data->CustomerAgreement_array[i]));
  }
  off += sprintf(stringBuffer + off, "</aGt>");
  EXI_DEBUG("End of sprintXML: CustomerAgreementList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeTariffIntervalListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<twE");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</twE>");
  EXI_DEBUG("End of sprintXML: TimeTariffIntervalListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRateComponent(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponent *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponent, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<xDG");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->ActiveTimeTariffIntervalListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveTimeTariffIntervalListLink(stringBuffer, off, (data->ActiveTimeTariffIntervalListLink_option));
    if ( data->flowRateEndLimit_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUnitValueType(stringBuffer, off, (data->flowRateEndLimit_option));
    if ( data->flowRateStartLimit_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUnitValueType(stringBuffer, off, (data->flowRateStartLimit_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "  <roleFlags>");
  { int16u i;
    for ( i=0; i<data->roleFlags.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->roleFlags.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</roleFlags>");
    if ( data->TimeTariffIntervalListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeTariffIntervalListLink(stringBuffer, off, (data->TimeTariffIntervalListLink_option));
  off += sprintf(stringBuffer + off, "</xDG>");
  EXI_DEBUG("End of sprintXML: RateComponent, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRateComponentList(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iQa");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->RateComponent_count; i++ )
    if ( data->RateComponent_array != NULL )
      off += emberExiXmlShortTagsSprintfStructRateComponent(stringBuffer, off, &(data->RateComponent_array[i]));
  }
  off += sprintf(stringBuffer + off, "</iQa>");
  EXI_DEBUG("End of sprintXML: RateComponentList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPriceResponseCfgListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfgListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponseCfgListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<dso");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</dso>");
  EXI_DEBUG("End of sprintXML: PriceResponseCfgListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEnvironmentalCost(int8u *stringBuffer, int offset, EmberExiGeneratedEnvironmentalCost *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EnvironmentalCost, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<UlN");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ixX>%d</ixX>", data->amount);
  off += sprintf(stringBuffer + off, "  <OwJ>%d</OwJ>", data->costKind);
  off += sprintf(stringBuffer + off, "  <Jlu>%d</Jlu>", data->costLevel);
  off += sprintf(stringBuffer + off, "  <ofx>%d</ofx>", data->numCostLevels);
  off += sprintf(stringBuffer + off, "</UlN>");
  EXI_DEBUG("End of sprintXML: EnvironmentalCost, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConsumptionTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffInterval *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<sJg");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <VFg>%d</VFg>", data->consumptionBlock);
  { int16u i;
    for ( i=0; i<data->EnvironmentalCost_count; i++ )
    if ( data->EnvironmentalCost_array != NULL )
      off += emberExiXmlShortTagsSprintfStructEnvironmentalCost(stringBuffer, off, &(data->EnvironmentalCost_array[i]));
  }
  off += sprintf(stringBuffer + off, "  <iXf>%d</iXf>", data->price_option);
  off += sprintf(stringBuffer + off, "  <Dmo>%d</Dmo>", data->startValue);
  off += sprintf(stringBuffer + off, "</sJg>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffInterval, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConsumptionTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ConsumptionTariffIntervalList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LQT");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ConsumptionTariffInterval_count; i++ )
    if ( data->ConsumptionTariffInterval_array != NULL )
      off += emberExiXmlShortTagsSprintfStructConsumptionTariffInterval(stringBuffer, off, &(data->ConsumptionTariffInterval_array[i]));
  }
  off += sprintf(stringBuffer + off, "</LQT>");
  EXI_DEBUG("End of sprintXML: ConsumptionTariffIntervalList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRateComponentLink(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RateComponentLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<tdk");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</tdk>");
  EXI_DEBUG("End of sprintXML: RateComponentLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPriceResponseCfg(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfg *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponseCfg, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Mgy");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <seG>%d</seG>", data->consumeThreshold);
  off += sprintf(stringBuffer + off, "  <eJW>%d</eJW>", data->maxReductionThreshold);
    if ( data->RateComponentLink != NULL )
      off += emberExiXmlShortTagsSprintfStructRateComponentLink(stringBuffer, off, (data->RateComponentLink));
  off += sprintf(stringBuffer + off, "</Mgy>");
  EXI_DEBUG("End of sprintXML: PriceResponseCfg, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscribableIdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<jeR");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "</jeR>");
  EXI_DEBUG("End of sprintXML: SubscribableIdentifiedObject, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRPLSourceRoutesList(int8u *stringBuffer, int offset, EmberExiGeneratedRPLSourceRoutesList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RPLSourceRoutesList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ote");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->RPLSourceRoutes_count; i++ )
    if ( data->RPLSourceRoutes_array != NULL )
      off += emberExiXmlShortTagsSprintfStructRPLSourceRoutes(stringBuffer, off, &(data->RPLSourceRoutes_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Ote>");
  EXI_DEBUG("End of sprintXML: RPLSourceRoutesList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<TDH");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</TDH>");
  EXI_DEBUG("End of sprintXML: BillingReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YiY");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
    if ( data->BillingReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingReadingListLink(stringBuffer, off, (data->BillingReadingListLink_option));
  off += sprintf(stringBuffer + off, "</YiY>");
  EXI_DEBUG("End of sprintXML: BillingReadingSet, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFile(int8u *stringBuffer, int offset, EmberExiGeneratedFile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: File, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wog");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <eYS>%d</eYS>", data->activateTime_option);
  off += sprintf(stringBuffer + off, "  <PAl>%s</PAl>", data->fileURI);
  off += sprintf(stringBuffer + off, "  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI_option.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->lFDI_option.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</lFDI>");
  off += sprintf(stringBuffer + off, "  <xyG>%s</xyG>", data->mfHwVer_option);
  off += sprintf(stringBuffer + off, "  <xYr>%d</xYr>", data->mfID);
  off += sprintf(stringBuffer + off, "  <CPE>%s</CPE>", data->mfModel);
  off += sprintf(stringBuffer + off, "  <pbE>%s</pbE>", data->mfSerNum_option);
  off += sprintf(stringBuffer + off, "  <PHd>%s</PHd>", data->mfVer);
  off += sprintf(stringBuffer + off, "  <nkw>%d</nkw>", data->size);
  off += sprintf(stringBuffer + off, "  <type>");
  { int16u i;
    for ( i=0; i<data->type.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->type.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</type>");
  off += sprintf(stringBuffer + off, "</wog>");
  EXI_DEBUG("End of sprintXML: File, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfile(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfile *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfile, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<okc");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <Kby>%d</Kby>", data->currency_option);
  off += sprintf(stringBuffer + off, "  <xcx>%d</xcx>", data->pricePowerOfTenMultiplier_option);
  off += sprintf(stringBuffer + off, "  <PdK>%d</PdK>", data->primacy);
  off += sprintf(stringBuffer + off, "  <bst>%s</bst>", data->rateCode_option);
    if ( data->RateComponentListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRateComponentListLink(stringBuffer, off, (data->RateComponentListLink_option));
  off += sprintf(stringBuffer + off, "  <Gvc>%d</Gvc>", data->serviceCategoryKind);
  off += sprintf(stringBuffer + off, "</okc>");
  EXI_DEBUG("End of sprintXML: TariffProfile, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<VlX");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</VlX>");
  EXI_DEBUG("End of sprintXML: ReadingListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSet *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSet, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<iTf");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->timePeriod != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->timePeriod));
    if ( data->ReadingListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingListLink(stringBuffer, off, (data->ReadingListLink_option));
  off += sprintf(stringBuffer + off, "</iTf>");
  EXI_DEBUG("End of sprintXML: ReadingSet, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingSetList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<dSc");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ReadingSet_count; i++ )
    if ( data->ReadingSet_array != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingSet(stringBuffer, off, &(data->ReadingSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "</dSc>");
  EXI_DEBUG("End of sprintXML: ReadingSetList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPowerConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedPowerConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerConfiguration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KpR");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <cgh>%d</cgh>", data->batteryInstallTime_option);
  off += sprintf(stringBuffer + off, "  <JwE>%d</JwE>", data->lowChargeThreshold_option);
  off += sprintf(stringBuffer + off, "</KpR>");
  EXI_DEBUG("End of sprintXML: PowerConfiguration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTimeConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedTimeConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TimeConfiguration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LfX");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <dstEndRule>");
  { int16u i;
    for ( i=0; i<data->dstEndRule.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->dstEndRule.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</dstEndRule>");
  off += sprintf(stringBuffer + off, "  <vbl>%d</vbl>", data->dstOffset);
  off += sprintf(stringBuffer + off, "  <dstStartRule>");
  { int16u i;
    for ( i=0; i<data->dstStartRule.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->dstStartRule.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</dstStartRule>");
  off += sprintf(stringBuffer + off, "  <nFv>%d</nFv>", data->tzOffset);
  off += sprintf(stringBuffer + off, "</LfX>");
  EXI_DEBUG("End of sprintXML: TimeConfiguration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedConfiguration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Configuration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pwm");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <txj>%s</txj>", data->currentLocale);
    if ( data->PowerConfiguration_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPowerConfiguration(stringBuffer, off, (data->PowerConfiguration_option));
    if ( data->PriceResponseCfgListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPriceResponseCfgListLink(stringBuffer, off, (data->PriceResponseCfgListLink_option));
    if ( data->TimeConfiguration_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeConfiguration(stringBuffer, off, (data->TimeConfiguration_option));
  off += sprintf(stringBuffer + off, "  <gQe>%s</gQe>", data->userDeviceName);
  off += sprintf(stringBuffer + off, "</pwm>");
  EXI_DEBUG("End of sprintXML: Configuration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAppliedTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedAppliedTargetReduction *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AppliedTargetReduction, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Oyy");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Cii>%d</Cii>", data->type);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</Oyy>");
  EXI_DEBUG("End of sprintXML: AppliedTargetReduction, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDrResponse(int8u *stringBuffer, int offset, EmberExiGeneratedDrResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DrResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<XrB");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <pPv>%d</pPv>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
    if ( data->ApplianceLoadReduction_option != NULL )
      off += emberExiXmlShortTagsSprintfStructApplianceLoadReduction(stringBuffer, off, (data->ApplianceLoadReduction_option));
    if ( data->AppliedTargetReduction_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAppliedTargetReduction(stringBuffer, off, (data->AppliedTargetReduction_option));
    if ( data->DutyCycle_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDutyCycle(stringBuffer, off, (data->DutyCycle_option));
    if ( data->Offset_option != NULL )
      off += emberExiXmlShortTagsSprintfStructOffset(stringBuffer, off, (data->Offset_option));
  off += sprintf(stringBuffer + off, "  <GQe>%d</GQe>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSetPoint(stringBuffer, off, (data->SetPoint_option));
  off += sprintf(stringBuffer + off, "</XrB>");
  EXI_DEBUG("End of sprintXML: DrResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextMessageListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<moS");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</moS>");
  EXI_DEBUG("End of sprintXML: TextMessageListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapabilityLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceCapabilityLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MuS");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</MuS>");
  EXI_DEBUG("End of sprintXML: DeviceCapabilityLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReading(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ppO");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->BillingReadingSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingReadingSetListLink(stringBuffer, off, (data->BillingReadingSetListLink_option));
    if ( data->ReadingTypeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink_option));
  off += sprintf(stringBuffer + off, "</ppO>");
  EXI_DEBUG("End of sprintXML: TargetReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTargetReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TargetReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wrh");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TargetReading_count; i++ )
    if ( data->TargetReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTargetReading(stringBuffer, off, &(data->TargetReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</wrh>");
  EXI_DEBUG("End of sprintXML: TargetReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDRLCCapabilities(int8u *stringBuffer, int offset, EmberExiGeneratedDRLCCapabilities *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DRLCCapabilities, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KSg");
  off += sprintf(stringBuffer + off, ">");
    if ( data->averageEnergy != NULL )
      off += emberExiXmlShortTagsSprintfStructRealEnergy(stringBuffer, off, (data->averageEnergy));
    if ( data->maxDemand != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->maxDemand));
  off += sprintf(stringBuffer + off, "  <optionsImplemented>");
  { int16u i;
    for ( i=0; i<data->optionsImplemented.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->optionsImplemented.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</optionsImplemented>");
  off += sprintf(stringBuffer + off, "</KSg>");
  EXI_DEBUG("End of sprintXML: DRLCCapabilities, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupportedLocaleListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocaleListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<hvp");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</hvp>");
  EXI_DEBUG("End of sprintXML: SupportedLocaleListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceInformation(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformation *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceInformation, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<wru");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->DRLCCapabilities_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDRLCCapabilities(stringBuffer, off, (data->DRLCCapabilities_option));
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
  off += sprintf(stringBuffer + off, "  <qGl>%d</qGl>", data->mfDate);
  off += sprintf(stringBuffer + off, "  <xyG>%s</xyG>", data->mfHwVer);
  off += sprintf(stringBuffer + off, "  <xYr>%d</xYr>", data->mfID);
  off += sprintf(stringBuffer + off, "  <AnO>%s</AnO>", data->mfInfo_option);
  off += sprintf(stringBuffer + off, "  <CPE>%s</CPE>", data->mfModel);
  off += sprintf(stringBuffer + off, "  <pbE>%s</pbE>", data->mfSerNum);
  off += sprintf(stringBuffer + off, "  <Coh>%d</Coh>", data->primaryPower);
  off += sprintf(stringBuffer + off, "  <pem>%d</pem>", data->secondaryPower);
    if ( data->SupportedLocaleListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructSupportedLocaleListLink(stringBuffer, off, (data->SupportedLocaleListLink_option));
  off += sprintf(stringBuffer + off, "  <hxH>%d</hxH>", data->swActTime);
  off += sprintf(stringBuffer + off, "  <joX>%s</joX>", data->swVer);
  off += sprintf(stringBuffer + off, "</wru>");
  EXI_DEBUG("End of sprintXML: DeviceInformation, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFunctionSetAssignments(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignments *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignments, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<glQ");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->CustomerAccountListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCustomerAccountListLink(stringBuffer, off, (data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(stringBuffer, off, (data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructDERProgramListLink(stringBuffer, off, (data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFileListLink(stringBuffer, off, (data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructMessagingProgramListLink(stringBuffer, off, (data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepaymentListLink(stringBuffer, off, (data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructResponseSetListLink(stringBuffer, off, (data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfileListLink(stringBuffer, off, (data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointListLink(stringBuffer, off, (data->UsagePointListLink_option));
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "</glQ>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignments, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMessagingProgram(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgram *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgram, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ydm");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActiveTextMessageListLink(stringBuffer, off, (data->ActiveTextMessageListLink_option));
  off += sprintf(stringBuffer + off, "  <hWd>%s</hWd>", data->locale);
  off += sprintf(stringBuffer + off, "  <PdK>%d</PdK>", data->primacy);
    if ( data->TextMessageListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTextMessageListLink(stringBuffer, off, (data->TextMessageListLink_option));
  off += sprintf(stringBuffer + off, "</Ydm>");
  EXI_DEBUG("End of sprintXML: MessagingProgram, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditRegister(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegister *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegister, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<tJN");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->creditAmount != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->creditAmount));
  off += sprintf(stringBuffer + off, "  <avU>%d</avU>", data->creditType_option);
  off += sprintf(stringBuffer + off, "  <Ery>%d</Ery>", data->effectiveTime);
  off += sprintf(stringBuffer + off, "  <FFo>%s</FFo>", data->token);
  off += sprintf(stringBuffer + off, "</tJN>");
  EXI_DEBUG("End of sprintXML: CreditRegister, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCreditRegisterList(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CreditRegisterList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<aTa");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->CreditRegister_count; i++ )
    if ( data->CreditRegister_array != NULL )
      off += emberExiXmlShortTagsSprintfStructCreditRegister(stringBuffer, off, &(data->CreditRegister_array[i]));
  }
  off += sprintf(stringBuffer + off, "</aTa>");
  EXI_DEBUG("End of sprintXML: CreditRegisterList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ReadingLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<csK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</csK>");
  EXI_DEBUG("End of sprintXML: ReadingLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReading *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReading, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DhP");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->RateComponentListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructRateComponentListLink(stringBuffer, off, (data->RateComponentListLink_option));
    if ( data->ReadingLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingLink(stringBuffer, off, (data->ReadingLink_option));
    if ( data->ReadingSetListLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingSetListLink(stringBuffer, off, (data->ReadingSetListLink_option));
    if ( data->ReadingTypeLink != NULL )
      off += emberExiXmlShortTagsSprintfStructReadingTypeLink(stringBuffer, off, (data->ReadingTypeLink));
  off += sprintf(stringBuffer + off, "</DhP>");
  EXI_DEBUG("End of sprintXML: MeterReading, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<MEI");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MeterReading_count; i++ )
    if ( data->MeterReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMeterReading(stringBuffer, off, &(data->MeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</MEI>");
  EXI_DEBUG("End of sprintXML: MeterReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorMeterReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<YEY");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MirrorMeterReading_count; i++ )
    if ( data->MirrorMeterReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorMeterReading(stringBuffer, off, &(data->MirrorMeterReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</YEY>");
  EXI_DEBUG("End of sprintXML: MirrorMeterReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMessagingProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MessagingProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eJE");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MessagingProgram_count; i++ )
    if ( data->MessagingProgram_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMessagingProgram(stringBuffer, off, &(data->MessagingProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</eJE>");
  EXI_DEBUG("End of sprintXML: MessagingProgramList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructVoltageRMS(int8u *stringBuffer, int offset, EmberExiGeneratedVoltageRMS *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: VoltageRMS, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cjs");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</cjs>");
  EXI_DEBUG("End of sprintXML: VoltageRMS, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERSettings(int8u *stringBuffer, int offset, EmberExiGeneratedDERSettings *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERSettings, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pnm");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <Gob>%d</Gob>", data->setGenConnect_option);
  off += sprintf(stringBuffer + off, "  <XHk>%d</XHk>", data->setGradW);
    if ( data->setMaxChargeRate_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->setMaxChargeRate_option));
    if ( data->setMaxDischargeRate_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->setMaxDischargeRate_option));
    if ( data->setMaxVA_option != NULL )
      off += emberExiXmlShortTagsSprintfStructApparentPower(stringBuffer, off, (data->setMaxVA_option));
    if ( data->setMaxVAr_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReactivePower(stringBuffer, off, (data->setMaxVAr_option));
    if ( data->setMaxVArNeg_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReactivePower(stringBuffer, off, (data->setMaxVArNeg_option));
    if ( data->setMaxW != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->setMaxW));
    if ( data->setMinPF_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFixedPointType(stringBuffer, off, (data->setMinPF_option));
    if ( data->setMinPFUnder_option != NULL )
      off += emberExiXmlShortTagsSprintfStructFixedPointType(stringBuffer, off, (data->setMinPFUnder_option));
  off += sprintf(stringBuffer + off, "  <QOs>%d</QOs>", data->setStorConnect_option);
    if ( data->setVRef_option != NULL )
      off += emberExiXmlShortTagsSprintfStructVoltageRMS(stringBuffer, off, (data->setVRef_option));
    if ( data->setVRefOfs_option != NULL )
      off += emberExiXmlShortTagsSprintfStructVoltageRMS(stringBuffer, off, (data->setVRefOfs_option));
  off += sprintf(stringBuffer + off, "  <YyQ>%d</YyQ>", data->updatedTime);
  off += sprintf(stringBuffer + off, "</pnm>");
  EXI_DEBUG("End of sprintXML: DERSettings, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSupportedLocaleList(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SupportedLocaleList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Plv");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->SupportedLocale_count; i++ )
    if ( data->SupportedLocale_array != NULL )
      off += emberExiXmlShortTagsSprintfStructSupportedLocale(stringBuffer, off, &(data->SupportedLocale_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Plv>");
  EXI_DEBUG("End of sprintXML: SupportedLocaleList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepaymentList(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepaymentList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pjt");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Prepayment_count; i++ )
    if ( data->Prepayment_array != NULL )
      off += emberExiXmlShortTagsSprintfStructPrepayment(stringBuffer, off, &(data->Prepayment_array[i]));
  }
  off += sprintf(stringBuffer + off, "</pjt>");
  EXI_DEBUG("End of sprintXML: PrepaymentList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTariffProfileList(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TariffProfileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ayc");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->TariffProfile_count; i++ )
    if ( data->TariffProfile_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTariffProfile(stringBuffer, off, &(data->TariffProfile_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Ayc>");
  EXI_DEBUG("End of sprintXML: TariffProfileList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructLLInterfaceList(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterfaceList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: LLInterfaceList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<QWT");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->LLInterface_count; i++ )
    if ( data->LLInterface_array != NULL )
      off += emberExiXmlShortTagsSprintfStructLLInterface(stringBuffer, off, &(data->LLInterface_array[i]));
  }
  off += sprintf(stringBuffer + off, "</QWT>");
  EXI_DEBUG("End of sprintXML: LLInterfaceList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTemperature(int8u *stringBuffer, int offset, EmberExiGeneratedTemperature *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Temperature, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RpG");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ytX>%d</ytX>", data->multiplier);
  off += sprintf(stringBuffer + off, "  <bny>%d</bny>", data->subject);
  off += sprintf(stringBuffer + off, "  <rYj>%d</rYj>", data->value);
  off += sprintf(stringBuffer + off, "</RpG>");
  EXI_DEBUG("End of sprintXML: Temperature, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPrepayOperationStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PrepayOperationStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<nsp");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->creditTypeChange_option != NULL )
      off += emberExiXmlShortTagsSprintfStructCreditTypeChange(stringBuffer, off, (data->creditTypeChange_option));
  off += sprintf(stringBuffer + off, "  <Wku>%d</Wku>", data->creditTypeInUse_option);
    if ( data->serviceChange_option != NULL )
      off += emberExiXmlShortTagsSprintfStructServiceChange(stringBuffer, off, (data->serviceChange_option));
  off += sprintf(stringBuffer + off, "  <xYQ>%d</xYQ>", data->serviceStatus);
  off += sprintf(stringBuffer + off, "</nsp>");
  EXI_DEBUG("End of sprintXML: PrepayOperationStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPEVInfo(int8u *stringBuffer, int offset, EmberExiGeneratedPEVInfo *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PEVInfo, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<WjD");
  off += sprintf(stringBuffer + off, ">");
    if ( data->chargingPowerNow != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->chargingPowerNow));
    if ( data->energyRequestNow != NULL )
      off += emberExiXmlShortTagsSprintfStructRealEnergy(stringBuffer, off, (data->energyRequestNow));
    if ( data->maxForwardPower != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->maxForwardPower));
  off += sprintf(stringBuffer + off, "  <TCI>%d</TCI>", data->minimumChargingDuration);
  off += sprintf(stringBuffer + off, "  <PAp>%d</PAp>", data->targetStateOfCharge);
  off += sprintf(stringBuffer + off, "  <pkJ>%d</pkJ>", data->timeChargeIsNeeded);
  off += sprintf(stringBuffer + off, "  <DlN>%d</DlN>", data->timeChargingStatusPEV);
  off += sprintf(stringBuffer + off, "</WjD>");
  EXI_DEBUG("End of sprintXML: PEVInfo, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPowerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PowerStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Lvv");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <BmF>%d</BmF>", data->batteryStatus);
  off += sprintf(stringBuffer + off, "  <xFk>%d</xFk>", data->changedTime);
  off += sprintf(stringBuffer + off, "  <jnd>%d</jnd>", data->currentPowerSource);
  off += sprintf(stringBuffer + off, "  <bPc>%d</bPc>", data->estimatedChargeRemaining_option);
  off += sprintf(stringBuffer + off, "  <QEf>%d</QEf>", data->estimatedTimeRemaining_option);
    if ( data->PEVInfo_option != NULL )
      off += emberExiXmlShortTagsSprintfStructPEVInfo(stringBuffer, off, (data->PEVInfo_option));
  off += sprintf(stringBuffer + off, "  <Ikw>%d</Ikw>", data->sessionTimeOnBattery_option);
  off += sprintf(stringBuffer + off, "  <mWQ>%d</mWQ>", data->totalTimeOnBattery_option);
  off += sprintf(stringBuffer + off, "</Lvv>");
  EXI_DEBUG("End of sprintXML: PowerStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPriceResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pKG");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <pPv>%d</pPv>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</pKG>");
  EXI_DEBUG("End of sprintXML: PriceResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructError(int8u *stringBuffer, int offset, EmberExiGeneratedError *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Error, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cPL");
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <kbn>%d</kbn>", data->maxRetryDuration_option);
  off += sprintf(stringBuffer + off, "  <bli>%d</bli>", data->reasonCode);
  off += sprintf(stringBuffer + off, "</cPL>");
  EXI_DEBUG("End of sprintXML: Error, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDeviceStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatus *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DeviceStatus, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<cXK");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <xFk>%d</xFk>", data->changedTime);
  off += sprintf(stringBuffer + off, "  <afi>%d</afi>", data->onCount_option);
  off += sprintf(stringBuffer + off, "  <fhX>%d</fhX>", data->opState_option);
  off += sprintf(stringBuffer + off, "  <seS>%d</seS>", data->opTime_option);
  { int16u i;
    for ( i=0; i<data->Temperature_count; i++ )
    if ( data->Temperature_array != NULL )
      off += emberExiXmlShortTagsSprintfStructTemperature(stringBuffer, off, &(data->Temperature_array[i]));
  }
    if ( data->TimeLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructTimeLink(stringBuffer, off, (data->TimeLink_option));
  off += sprintf(stringBuffer + off, "</cXK>");
  EXI_DEBUG("End of sprintXML: DeviceStatus, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceControlList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceControlList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<DEg");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->EndDeviceControl_count; i++ )
    if ( data->EndDeviceControl_array != NULL )
      off += emberExiXmlShortTagsSprintfStructEndDeviceControl(stringBuffer, off, &(data->EndDeviceControl_array[i]));
  }
  off += sprintf(stringBuffer + off, "</DEg>");
  EXI_DEBUG("End of sprintXML: EndDeviceControlList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFileList(int8u *stringBuffer, int offset, EmberExiGeneratedFileList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FileList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<rKO");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->File_count; i++ )
    if ( data->File_array != NULL )
      off += emberExiXmlShortTagsSprintfStructFile(stringBuffer, off, &(data->File_array[i]));
  }
  off += sprintf(stringBuffer + off, "</rKO>");
  EXI_DEBUG("End of sprintXML: FileList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructEndDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: EndDeviceLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NTB");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</NTB>");
  EXI_DEBUG("End of sprintXML: EndDeviceLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFlowReservationRequest(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequest *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationRequest, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Dgb");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    off += sprintf(stringBuffer + off, "%2x", data->responseRequired_option.bytes[i]); }
  off += sprintf(stringBuffer + off, "\"");
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "  <WnX>%d</WnX>", data->creationTime);
    if ( data->EventStatus != NULL )
      off += emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, off, (data->EventStatus));
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
    if ( data->UsagePointLink_option != NULL )
      off += emberExiXmlShortTagsSprintfStructUsagePointLink(stringBuffer, off, (data->UsagePointLink_option));
  off += sprintf(stringBuffer + off, "  <vIf>%d</vIf>", data->durationRequested_option);
    if ( data->energyRequested != NULL )
      off += emberExiXmlShortTagsSprintfStructRealEnergy(stringBuffer, off, (data->energyRequested));
    if ( data->powerRequested != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->powerRequested));
  off += sprintf(stringBuffer + off, "</Dgb>");
  EXI_DEBUG("End of sprintXML: FlowReservationRequest, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFlowReservationRequestList(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequestList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FlowReservationRequestList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<RrP");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->FlowReservationRequest_count; i++ )
    if ( data->FlowReservationRequest_array != NULL )
      off += emberExiXmlShortTagsSprintfStructFlowReservationRequest(stringBuffer, off, &(data->FlowReservationRequest_array[i]));
  }
  off += sprintf(stringBuffer + off, "</RrP>");
  EXI_DEBUG("End of sprintXML: FlowReservationRequestList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructCustomerAccountLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: CustomerAccountLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pUu");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</pUu>");
  EXI_DEBUG("End of sprintXML: CustomerAccountLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERList(int8u *stringBuffer, int offset, EmberExiGeneratedDERList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<pyR");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DER_count; i++ )
    if ( data->DER_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDER(stringBuffer, off, &(data->DER_array[i]));
  }
  off += sprintf(stringBuffer + off, "</pyR>");
  EXI_DEBUG("End of sprintXML: DERList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNeighborList(int8u *stringBuffer, int offset, EmberExiGeneratedNeighborList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NeighborList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Hto");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Neighbor_count; i++ )
    if ( data->Neighbor_array != NULL )
      off += emberExiXmlShortTagsSprintfStructNeighbor(stringBuffer, off, &(data->Neighbor_array[i]));
  }
  off += sprintf(stringBuffer + off, "</Hto>");
  EXI_DEBUG("End of sprintXML: NeighborList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructTextResponse(int8u *stringBuffer, int offset, EmberExiGeneratedTextResponse *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: TextResponse, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<kgG");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <pPv>%d</pPv>", data->createdDateTime_option);
  off += sprintf(stringBuffer + off, "  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->endDeviceLFDI.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</endDeviceLFDI>");
  off += sprintf(stringBuffer + off, "  <FEt>%d</FEt>", data->status_option);
  off += sprintf(stringBuffer + off, "  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->subject.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</subject>");
  off += sprintf(stringBuffer + off, "</kgG>");
  EXI_DEBUG("End of sprintXML: TextResponse, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDefaultDERControl(int8u *stringBuffer, int offset, EmberExiGeneratedDefaultDERControl *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DefaultDERControl, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<uSw");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      off += sprintf(stringBuffer + off, "%2x", data->mRID.bytes[i]);
  }
  off += sprintf(stringBuffer + off, "</mRID>");
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
    if ( data->DERControlBase != NULL )
      off += emberExiXmlShortTagsSprintfStructDERControlBase(stringBuffer, off, (data->DERControlBase));
  off += sprintf(stringBuffer + off, "</uSw>");
  EXI_DEBUG("End of sprintXML: DefaultDERControl, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERProgramList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<eVP");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERProgram_count; i++ )
    if ( data->DERProgram_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDERProgram(stringBuffer, off, &(data->DERProgram_array[i]));
  }
  off += sprintf(stringBuffer + off, "</eVP>");
  EXI_DEBUG("End of sprintXML: DERProgramList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructPriceResponseCfgList(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfgList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: PriceResponseCfgList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<uuA");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->PriceResponseCfg_count; i++ )
    if ( data->PriceResponseCfg_array != NULL )
      off += emberExiXmlShortTagsSprintfStructPriceResponseCfg(stringBuffer, off, &(data->PriceResponseCfg_array[i]));
  }
  off += sprintf(stringBuffer + off, "</uuA>");
  EXI_DEBUG("End of sprintXML: PriceResponseCfgList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRespondableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableIdentifiedObject *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: RespondableIdentifiedObject, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<uKF");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  IYV=\"%s\"", data->replyTo_option);
  off += sprintf(stringBuffer + off, "swS=\"");
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
  off += sprintf(stringBuffer + off, "  <NoH>%s</NoH>", data->description_option);
  off += sprintf(stringBuffer + off, "  <QwD>%d</QwD>", data->version_option);
  off += sprintf(stringBuffer + off, "</uKF>");
  EXI_DEBUG("End of sprintXML: RespondableIdentifiedObject, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingPeriod(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriod *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriod, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Ows");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <cNO>%d</cNO>", data->billLastPeriod_option);
  off += sprintf(stringBuffer + off, "  <IDn>%d</IDn>", data->billToDate_option);
    if ( data->interval != NULL )
      off += emberExiXmlShortTagsSprintfStructDateTimeInterval(stringBuffer, off, (data->interval));
  off += sprintf(stringBuffer + off, "  <htM>%d</htM>", data->statusTimeStamp_option);
  off += sprintf(stringBuffer + off, "</Ows>");
  EXI_DEBUG("End of sprintXML: BillingPeriod, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingPeriodList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingPeriodList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ixg");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->BillingPeriod_count; i++ )
    if ( data->BillingPeriod_array != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingPeriod(stringBuffer, off, &(data->BillingPeriod_array[i]));
  }
  off += sprintf(stringBuffer + off, "</ixg>");
  EXI_DEBUG("End of sprintXML: BillingPeriodList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMirrorUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MirrorUsagePointList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<IuI");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->MirrorUsagePoint_count; i++ )
    if ( data->MirrorUsagePoint_array != NULL )
      off += emberExiXmlShortTagsSprintfStructMirrorUsagePoint(stringBuffer, off, &(data->MirrorUsagePoint_array[i]));
  }
  off += sprintf(stringBuffer + off, "</IuI>");
  EXI_DEBUG("End of sprintXML: MirrorUsagePointList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERCurveList(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERCurveList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<NWH");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->DERCurve_count; i++ )
    if ( data->DERCurve_array != NULL )
      off += emberExiXmlShortTagsSprintfStructDERCurve(stringBuffer, off, &(data->DERCurve_array[i]));
  }
  off += sprintf(stringBuffer + off, "</NWH>");
  EXI_DEBUG("End of sprintXML: DERCurveList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructAccountBalance(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalance *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: AccountBalance, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<Wfk");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
    if ( data->availableCredit != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->availableCredit));
  off += sprintf(stringBuffer + off, "  <Ksc>%d</Ksc>", data->creditStatus_option);
    if ( data->emergencyCredit_option != NULL )
      off += emberExiXmlShortTagsSprintfStructAccountingUnit(stringBuffer, off, (data->emergencyCredit_option));
  off += sprintf(stringBuffer + off, "  <UIA>%d</UIA>", data->emergencyCreditStatus_option);
  off += sprintf(stringBuffer + off, "</Wfk>");
  EXI_DEBUG("End of sprintXML: AccountBalance, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructResponseSetList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSetList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: ResponseSetList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<VVv");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->ResponseSet_count; i++ )
    if ( data->ResponseSet_array != NULL )
      off += emberExiXmlShortTagsSprintfStructResponseSet(stringBuffer, off, &(data->ResponseSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "</VVv>");
  EXI_DEBUG("End of sprintXML: ResponseSetList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructHistoricalReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: HistoricalReadingList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<knx");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->HistoricalReading_count; i++ )
    if ( data->HistoricalReading_array != NULL )
      off += emberExiXmlShortTagsSprintfStructHistoricalReading(stringBuffer, off, &(data->HistoricalReading_array[i]));
  }
  off += sprintf(stringBuffer + off, "</knx>");
  EXI_DEBUG("End of sprintXML: HistoricalReadingList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructRegistration(int8u *stringBuffer, int offset, EmberExiGeneratedRegistration *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: Registration, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<LTW");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <LHX>%d</LHX>", data->dateTimeRegistered);
  off += sprintf(stringBuffer + off, "  <BdX>%d</BdX>", data->pIN);
  off += sprintf(stringBuffer + off, "</LTW>");
  EXI_DEBUG("End of sprintXML: Registration, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructNotificationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationListLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: NotificationListLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<gPV");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</gPV>");
  EXI_DEBUG("End of sprintXML: NotificationListLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructMeterReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingLink *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: MeterReadingLink, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<bRA");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "</bRA>");
  EXI_DEBUG("End of sprintXML: MeterReadingLink, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsList(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: FunctionSetAssignmentsList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<KUJ");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->FunctionSetAssignments_count; i++ )
    if ( data->FunctionSetAssignments_array != NULL )
      off += emberExiXmlShortTagsSprintfStructFunctionSetAssignments(stringBuffer, off, &(data->FunctionSetAssignments_array[i]));
  }
  off += sprintf(stringBuffer + off, "</KUJ>");
  EXI_DEBUG("End of sprintXML: FunctionSetAssignmentsList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructSubscriptionList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: SubscriptionList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<jvq");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->Subscription_count; i++ )
    if ( data->Subscription_array != NULL )
      off += emberExiXmlShortTagsSprintfStructSubscription(stringBuffer, off, &(data->Subscription_array[i]));
  }
  off += sprintf(stringBuffer + off, "</jvq>");
  EXI_DEBUG("End of sprintXML: SubscriptionList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructBillingReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetList *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: BillingReadingSetList, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<OiQ");
  off += sprintf(stringBuffer + off, "  bkF=\"%d\"", data->all);
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  HYu=\"%d\"", data->results);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  { int16u i;
    for ( i=0; i<data->BillingReadingSet_count; i++ )
    if ( data->BillingReadingSet_array != NULL )
      off += emberExiXmlShortTagsSprintfStructBillingReadingSet(stringBuffer, off, &(data->BillingReadingSet_array[i]));
  }
  off += sprintf(stringBuffer + off, "</OiQ>");
  EXI_DEBUG("End of sprintXML: BillingReadingSetList, off=%d\n", off);
  return off - offset;
}
int emberExiXmlShortTagsSprintfStructDERAvailability(int8u *stringBuffer, int offset, EmberExiGeneratedDERAvailability *data) {
  int off = offset;
  EXI_DEBUG("Start of sprintXML: DERAvailability, off=%d\n", off);
  off += sprintf(stringBuffer + off, "<ETL");
  off += sprintf(stringBuffer + off, "  YIp=\"%s\"", data->href_option);
  off += sprintf(stringBuffer + off, "  WQi=\"%d\"", data->subscribable_option);
  off += sprintf(stringBuffer + off, ">");
  off += sprintf(stringBuffer + off, "  <ibf>%d</ibf>", data->availabilityDuration_option);
  off += sprintf(stringBuffer + off, "  <tOi>%d</tOi>", data->maxChargeDuration_option);
  off += sprintf(stringBuffer + off, "  <uXc>%d</uXc>", data->readingTime);
  off += sprintf(stringBuffer + off, "  <SAL>%d</SAL>", data->reserveChargePercent_option);
  off += sprintf(stringBuffer + off, "  <CDn>%d</CDn>", data->reservePercent_option);
    if ( data->statVArAvail_option != NULL )
      off += emberExiXmlShortTagsSprintfStructReactivePower(stringBuffer, off, (data->statVArAvail_option));
    if ( data->statWAvail_option != NULL )
      off += emberExiXmlShortTagsSprintfStructActivePower(stringBuffer, off, (data->statWAvail_option));
  off += sprintf(stringBuffer + off, "</ETL>");
  EXI_DEBUG("End of sprintXML: DERAvailability, off=%d\n", off);
  return off - offset;
}
// Compression test functions
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


void emberExiCompressionTestStructDefaultDERControlLink(int8u useShortTags) {
  EmberExiGeneratedDefaultDERControlLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDefaultDERControlLink));
  emExiPopulateStruct(emberExiDefaultDERControlLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDefaultDERControlLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDefaultDERControlLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDefaultDERControlLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DefaultDERControlLink, emberExiDefaultDERControlLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DefaultDERControlLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructDERCurveListLink(int8u useShortTags) {
  EmberExiGeneratedDERCurveListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERCurveListLink));
  emExiPopulateStruct(emberExiDERCurveListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERCurveListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERCurveListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERCurveListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERCurveListLink, emberExiDERCurveListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERCurveListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


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


void emberExiCompressionTestStructAssociatedDERProgramListLink(int8u useShortTags) {
  EmberExiGeneratedAssociatedDERProgramListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAssociatedDERProgramListLink));
  emExiPopulateStruct(emberExiAssociatedDERProgramListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAssociatedDERProgramListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAssociatedDERProgramListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAssociatedDERProgramListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AssociatedDERProgramListLink, emberExiAssociatedDERProgramListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AssociatedDERProgramListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructAssociatedUsagePointLink(int8u useShortTags) {
  EmberExiGeneratedAssociatedUsagePointLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAssociatedUsagePointLink));
  emExiPopulateStruct(emberExiAssociatedUsagePointLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAssociatedUsagePointLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAssociatedUsagePointLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAssociatedUsagePointLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AssociatedUsagePointLink, emberExiAssociatedUsagePointLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AssociatedUsagePointLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCurrentDERProgramLink(int8u useShortTags) {
  EmberExiGeneratedCurrentDERProgramLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCurrentDERProgramLink));
  emExiPopulateStruct(emberExiCurrentDERProgramLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCurrentDERProgramLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCurrentDERProgramLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCurrentDERProgramLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CurrentDERProgramLink, emberExiCurrentDERProgramLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CurrentDERProgramLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERAvailabilityLink(int8u useShortTags) {
  EmberExiGeneratedDERAvailabilityLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERAvailabilityLink));
  emExiPopulateStruct(emberExiDERAvailabilityLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERAvailabilityLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERAvailabilityLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERAvailabilityLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERAvailabilityLink, emberExiDERAvailabilityLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERAvailabilityLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERCapabilityLink(int8u useShortTags) {
  EmberExiGeneratedDERCapabilityLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERCapabilityLink));
  emExiPopulateStruct(emberExiDERCapabilityLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERCapabilityLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERCapabilityLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERCapabilityLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERCapabilityLink, emberExiDERCapabilityLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERCapabilityLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERSettingsLink(int8u useShortTags) {
  EmberExiGeneratedDERSettingsLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERSettingsLink));
  emExiPopulateStruct(emberExiDERSettingsLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERSettingsLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERSettingsLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERSettingsLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERSettingsLink, emberExiDERSettingsLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERSettingsLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructSubscribableResource(int8u useShortTags) {
  EmberExiGeneratedSubscribableResource data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSubscribableResource));
  emExiPopulateStruct(emberExiSubscribableResourceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSubscribableResource(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSubscribableResource(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSubscribableResource(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SubscribableResource, emberExiSubscribableResourceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SubscribableResource, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructReadingBase(int8u useShortTags) {
  EmberExiGeneratedReadingBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingBase));
  emExiPopulateStruct(emberExiReadingBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingBase, emberExiReadingBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructBillingReading(int8u useShortTags) {
  EmberExiGeneratedBillingReading data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingReading));
  emExiPopulateStruct(emberExiBillingReadingStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingReading(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingReading(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingReading(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingReading, emberExiBillingReadingStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingReading, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructBillingReadingList(int8u useShortTags) {
  EmberExiGeneratedBillingReadingList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingReadingList));
  emExiPopulateStruct(emberExiBillingReadingListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingReadingList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingReadingList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingReadingList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingReadingList, emberExiBillingReadingListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingReadingList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructRPLSourceRoutes(int8u useShortTags) {
  EmberExiGeneratedRPLSourceRoutes data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRPLSourceRoutes));
  emExiPopulateStruct(emberExiRPLSourceRoutesStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRPLSourceRoutes(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRPLSourceRoutes(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRPLSourceRoutes(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RPLSourceRoutes, emberExiRPLSourceRoutesStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RPLSourceRoutes, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSubscriptionBase(int8u useShortTags) {
  EmberExiGeneratedSubscriptionBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSubscriptionBase));
  emExiPopulateStruct(emberExiSubscriptionBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSubscriptionBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSubscriptionBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSubscriptionBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SubscriptionBase, emberExiSubscriptionBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SubscriptionBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructFileStatusLink(int8u useShortTags) {
  EmberExiGeneratedFileStatusLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFileStatusLink));
  emExiPopulateStruct(emberExiFileStatusLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFileStatusLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFileStatusLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFileStatusLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FileStatusLink, emberExiFileStatusLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FileStatusLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIPInterfaceListLink(int8u useShortTags) {
  EmberExiGeneratedIPInterfaceListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIPInterfaceListLink));
  emExiPopulateStruct(emberExiIPInterfaceListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIPInterfaceListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIPInterfaceListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIPInterfaceListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IPInterfaceListLink, emberExiIPInterfaceListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IPInterfaceListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLoadShedAvailabilityLink(int8u useShortTags) {
  EmberExiGeneratedLoadShedAvailabilityLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLoadShedAvailabilityLink));
  emExiPopulateStruct(emberExiLoadShedAvailabilityLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLoadShedAvailabilityLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLoadShedAvailabilityLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLoadShedAvailabilityLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LoadShedAvailabilityLink, emberExiLoadShedAvailabilityLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LoadShedAvailabilityLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructAbstractDevice(int8u useShortTags) {
  EmberExiGeneratedAbstractDevice data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAbstractDevice));
  emExiPopulateStruct(emberExiAbstractDeviceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAbstractDevice(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAbstractDevice(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAbstractDevice(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AbstractDevice, emberExiAbstractDeviceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AbstractDevice, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSelfDevice(int8u useShortTags) {
  EmberExiGeneratedSelfDevice data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSelfDevice));
  emExiPopulateStruct(emberExiSelfDeviceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSelfDevice(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSelfDevice(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSelfDevice(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SelfDevice, emberExiSelfDeviceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SelfDevice, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructCustomerAccountListLink(int8u useShortTags) {
  EmberExiGeneratedCustomerAccountListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCustomerAccountListLink));
  emExiPopulateStruct(emberExiCustomerAccountListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCustomerAccountListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCustomerAccountListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCustomerAccountListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CustomerAccountListLink, emberExiCustomerAccountListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CustomerAccountListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructResponseSetListLink(int8u useShortTags) {
  EmberExiGeneratedResponseSetListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedResponseSetListLink));
  emExiPopulateStruct(emberExiResponseSetListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructResponseSetListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructResponseSetListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructResponseSetListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ResponseSetListLink, emberExiResponseSetListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ResponseSetListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructFunctionSetAssignmentsBase(int8u useShortTags) {
  EmberExiGeneratedFunctionSetAssignmentsBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFunctionSetAssignmentsBase));
  emExiPopulateStruct(emberExiFunctionSetAssignmentsBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFunctionSetAssignmentsBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFunctionSetAssignmentsBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FunctionSetAssignmentsBase, emberExiFunctionSetAssignmentsBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FunctionSetAssignmentsBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCurveData(int8u useShortTags) {
  EmberExiGeneratedCurveData data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCurveData));
  emExiPopulateStruct(emberExiCurveDataStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCurveData(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCurveData(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCurveData(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CurveData, emberExiCurveDataStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CurveData, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERCurve(int8u useShortTags) {
  EmberExiGeneratedDERCurve data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERCurve));
  emExiPopulateStruct(emberExiDERCurveStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERCurve(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERCurve(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERCurve(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERCurve, emberExiDERCurveStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERCurve, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEventStatus(int8u useShortTags) {
  EmberExiGeneratedEventStatus data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEventStatus));
  emExiPopulateStruct(emberExiEventStatusStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEventStatus(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEventStatus(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEventStatus(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EventStatus, emberExiEventStatusStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EventStatus, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructConsumptionTariffIntervalListLink(int8u useShortTags) {
  EmberExiGeneratedConsumptionTariffIntervalListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedConsumptionTariffIntervalListLink));
  emExiPopulateStruct(emberExiConsumptionTariffIntervalListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructConsumptionTariffIntervalListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructConsumptionTariffIntervalListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructConsumptionTariffIntervalListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ConsumptionTariffIntervalListLink, emberExiConsumptionTariffIntervalListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ConsumptionTariffIntervalListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRespondableResource(int8u useShortTags) {
  EmberExiGeneratedRespondableResource data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRespondableResource));
  emExiPopulateStruct(emberExiRespondableResourceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRespondableResource(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRespondableResource(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRespondableResource(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RespondableResource, emberExiRespondableResourceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RespondableResource, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRespondableSubscribableIdentifiedObject(int8u useShortTags) {
  EmberExiGeneratedRespondableSubscribableIdentifiedObject data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRespondableSubscribableIdentifiedObject));
  emExiPopulateStruct(emberExiRespondableSubscribableIdentifiedObjectStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRespondableSubscribableIdentifiedObject(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRespondableSubscribableIdentifiedObject(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRespondableSubscribableIdentifiedObject(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RespondableSubscribableIdentifiedObject, emberExiRespondableSubscribableIdentifiedObjectStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RespondableSubscribableIdentifiedObject, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEvent(int8u useShortTags) {
  EmberExiGeneratedEvent data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEvent));
  emExiPopulateStruct(emberExiEventStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEvent(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEvent(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEvent(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Event, emberExiEventStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Event, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRandomizableEvent(int8u useShortTags) {
  EmberExiGeneratedRandomizableEvent data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRandomizableEvent));
  emExiPopulateStruct(emberExiRandomizableEventStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRandomizableEvent(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRandomizableEvent(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRandomizableEvent(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RandomizableEvent, emberExiRandomizableEventStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RandomizableEvent, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructResponseSet(int8u useShortTags) {
  EmberExiGeneratedResponseSet data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedResponseSet));
  emExiPopulateStruct(emberExiResponseSetStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructResponseSet(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructResponseSet(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructResponseSet(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ResponseSet, emberExiResponseSetStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ResponseSet, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructCustomerAgreement(int8u useShortTags) {
  EmberExiGeneratedCustomerAgreement data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCustomerAgreement));
  emExiPopulateStruct(emberExiCustomerAgreementStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCustomerAgreement(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCustomerAgreement(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCustomerAgreement(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CustomerAgreement, emberExiCustomerAgreementStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CustomerAgreement, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructFileLink(int8u useShortTags) {
  EmberExiGeneratedFileLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFileLink));
  emExiPopulateStruct(emberExiFileLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFileLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFileLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFileLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FileLink, emberExiFileLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FileLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFixedPowerFactor(int8u useShortTags) {
  EmberExiGeneratedFixedPowerFactor data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFixedPowerFactor));
  emExiPopulateStruct(emberExiFixedPowerFactorStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFixedPowerFactor(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFixedPowerFactor(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFixedPowerFactor(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FixedPowerFactor, emberExiFixedPowerFactorStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FixedPowerFactor, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRPLInstanceListLink(int8u useShortTags) {
  EmberExiGeneratedRPLInstanceListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRPLInstanceListLink));
  emExiPopulateStruct(emberExiRPLInstanceListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRPLInstanceListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRPLInstanceListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRPLInstanceListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RPLInstanceListLink, emberExiRPLInstanceListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RPLInstanceListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIPAddr(int8u useShortTags) {
  EmberExiGeneratedIPAddr data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIPAddr));
  emExiPopulateStruct(emberExiIPAddrStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIPAddr(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIPAddr(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIPAddr(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IPAddr, emberExiIPAddrStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IPAddr, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIPAddrList(int8u useShortTags) {
  EmberExiGeneratedIPAddrList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIPAddrList));
  emExiPopulateStruct(emberExiIPAddrListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIPAddrList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIPAddrList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIPAddrList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IPAddrList, emberExiIPAddrListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IPAddrList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructConnectStatusType(int8u useShortTags) {
  EmberExiGeneratedConnectStatusType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedConnectStatusType));
  emExiPopulateStruct(emberExiConnectStatusTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructConnectStatusType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructConnectStatusType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructConnectStatusType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ConnectStatusType, emberExiConnectStatusTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ConnectStatusType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructInverterStatusType(int8u useShortTags) {
  EmberExiGeneratedInverterStatusType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedInverterStatusType));
  emExiPopulateStruct(emberExiInverterStatusTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructInverterStatusType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructInverterStatusType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructInverterStatusType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_InverterStatusType, emberExiInverterStatusTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("InverterStatusType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLocalControlModeStatusType(int8u useShortTags) {
  EmberExiGeneratedLocalControlModeStatusType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLocalControlModeStatusType));
  emExiPopulateStruct(emberExiLocalControlModeStatusTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLocalControlModeStatusType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLocalControlModeStatusType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLocalControlModeStatusType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LocalControlModeStatusType, emberExiLocalControlModeStatusTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LocalControlModeStatusType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructManufacturerStatusType(int8u useShortTags) {
  EmberExiGeneratedManufacturerStatusType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedManufacturerStatusType));
  emExiPopulateStruct(emberExiManufacturerStatusTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructManufacturerStatusType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructManufacturerStatusType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructManufacturerStatusType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ManufacturerStatusType, emberExiManufacturerStatusTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ManufacturerStatusType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructOperationalModeStatusType(int8u useShortTags) {
  EmberExiGeneratedOperationalModeStatusType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedOperationalModeStatusType));
  emExiPopulateStruct(emberExiOperationalModeStatusTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructOperationalModeStatusType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructOperationalModeStatusType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructOperationalModeStatusType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_OperationalModeStatusType, emberExiOperationalModeStatusTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("OperationalModeStatusType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructStateOfChargeStatusType(int8u useShortTags) {
  EmberExiGeneratedStateOfChargeStatusType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedStateOfChargeStatusType));
  emExiPopulateStruct(emberExiStateOfChargeStatusTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructStateOfChargeStatusType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructStateOfChargeStatusType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructStateOfChargeStatusType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_StateOfChargeStatusType, emberExiStateOfChargeStatusTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("StateOfChargeStatusType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructStorageModeStatusType(int8u useShortTags) {
  EmberExiGeneratedStorageModeStatusType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedStorageModeStatusType));
  emExiPopulateStruct(emberExiStorageModeStatusTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructStorageModeStatusType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructStorageModeStatusType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructStorageModeStatusType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_StorageModeStatusType, emberExiStorageModeStatusTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("StorageModeStatusType, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructSubscribableList(int8u useShortTags) {
  EmberExiGeneratedSubscribableList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSubscribableList));
  emExiPopulateStruct(emberExiSubscribableListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSubscribableList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSubscribableList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSubscribableList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SubscribableList, emberExiSubscribableListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SubscribableList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructNeighborListLink(int8u useShortTags) {
  EmberExiGeneratedNeighborListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNeighborListLink));
  emExiPopulateStruct(emberExiNeighborListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNeighborListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNeighborListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNeighborListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_NeighborListLink, emberExiNeighborListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("NeighborListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIEEE_802_15_4(int8u useShortTags) {
  EmberExiGeneratedIEEE_802_15_4 data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIEEE_802_15_4));
  emExiPopulateStruct(emberExiIEEE_802_15_4StructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIEEE_802_15_4(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIEEE_802_15_4(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIEEE_802_15_4(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IEEE_802_15_4, emberExiIEEE_802_15_4StructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IEEE_802_15_4, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructNeighbor(int8u useShortTags) {
  EmberExiGeneratedNeighbor data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNeighbor));
  emExiPopulateStruct(emberExiNeighborStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNeighbor(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNeighbor(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNeighbor(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Neighbor, emberExiNeighborStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Neighbor, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRPLSourceRoutesListLink(int8u useShortTags) {
  EmberExiGeneratedRPLSourceRoutesListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRPLSourceRoutesListLink));
  emExiPopulateStruct(emberExiRPLSourceRoutesListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRPLSourceRoutesListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRPLSourceRoutesListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRPLSourceRoutesListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RPLSourceRoutesListLink, emberExiRPLSourceRoutesListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RPLSourceRoutesListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERProgramLink(int8u useShortTags) {
  EmberExiGeneratedDERProgramLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERProgramLink));
  emExiPopulateStruct(emberExiDERProgramLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERProgramLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERProgramLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERProgramLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERProgramLink, emberExiDERProgramLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERProgramLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLLInterfaceListLink(int8u useShortTags) {
  EmberExiGeneratedLLInterfaceListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLLInterfaceListLink));
  emExiPopulateStruct(emberExiLLInterfaceListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLLInterfaceListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLLInterfaceListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLLInterfaceListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LLInterfaceListLink, emberExiLLInterfaceListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LLInterfaceListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructUnitValueType(int8u useShortTags) {
  EmberExiGeneratedUnitValueType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedUnitValueType));
  emExiPopulateStruct(emberExiUnitValueTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructUnitValueType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructUnitValueType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructUnitValueType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_UnitValueType, emberExiUnitValueTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("UnitValueType, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructApplianceLoadReduction(int8u useShortTags) {
  EmberExiGeneratedApplianceLoadReduction data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedApplianceLoadReduction));
  emExiPopulateStruct(emberExiApplianceLoadReductionStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructApplianceLoadReduction(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructApplianceLoadReduction(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructApplianceLoadReduction(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ApplianceLoadReduction, emberExiApplianceLoadReductionStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ApplianceLoadReduction, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructSelfDeviceLink(int8u useShortTags) {
  EmberExiGeneratedSelfDeviceLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSelfDeviceLink));
  emExiPopulateStruct(emberExiSelfDeviceLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSelfDeviceLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSelfDeviceLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSelfDeviceLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SelfDeviceLink, emberExiSelfDeviceLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SelfDeviceLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructDERCurveLink(int8u useShortTags) {
  EmberExiGeneratedDERCurveLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERCurveLink));
  emExiPopulateStruct(emberExiDERCurveLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERCurveLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERCurveLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERCurveLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERCurveLink, emberExiDERCurveLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERCurveLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructReadingSetBase(int8u useShortTags) {
  EmberExiGeneratedReadingSetBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingSetBase));
  emExiPopulateStruct(emberExiReadingSetBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingSetBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingSetBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingSetBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingSetBase, emberExiReadingSetBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingSetBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructMirrorReadingSet(int8u useShortTags) {
  EmberExiGeneratedMirrorReadingSet data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMirrorReadingSet));
  emExiPopulateStruct(emberExiMirrorReadingSetStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMirrorReadingSet(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMirrorReadingSet(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMirrorReadingSet(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MirrorReadingSet, emberExiMirrorReadingSetStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MirrorReadingSet, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructRPLInstance(int8u useShortTags) {
  EmberExiGeneratedRPLInstance data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRPLInstance));
  emExiPopulateStruct(emberExiRPLInstanceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRPLInstance(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRPLInstance(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRPLInstance(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RPLInstance, emberExiRPLInstanceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RPLInstance, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFixedPointType(int8u useShortTags) {
  EmberExiGeneratedFixedPointType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFixedPointType));
  emExiPopulateStruct(emberExiFixedPointTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFixedPointType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFixedPointType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFixedPointType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FixedPointType, emberExiFixedPointTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FixedPointType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructBillingReadingSetListLink(int8u useShortTags) {
  EmberExiGeneratedBillingReadingSetListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingReadingSetListLink));
  emExiPopulateStruct(emberExiBillingReadingSetListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingReadingSetListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingReadingSetListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingReadingSetListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingReadingSetListLink, emberExiBillingReadingSetListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingReadingSetListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructBillingMeterReadingBase(int8u useShortTags) {
  EmberExiGeneratedBillingMeterReadingBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingMeterReadingBase));
  emExiPopulateStruct(emberExiBillingMeterReadingBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingMeterReadingBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingMeterReadingBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingMeterReadingBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingMeterReadingBase, emberExiBillingMeterReadingBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingMeterReadingBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructIPAddrListLink(int8u useShortTags) {
  EmberExiGeneratedIPAddrListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIPAddrListLink));
  emExiPopulateStruct(emberExiIPAddrListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIPAddrListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIPAddrListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIPAddrListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IPAddrListLink, emberExiIPAddrListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IPAddrListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIPInterface(int8u useShortTags) {
  EmberExiGeneratedIPInterface data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIPInterface));
  emExiPopulateStruct(emberExiIPInterfaceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIPInterface(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIPInterface(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIPInterface(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IPInterface, emberExiIPInterfaceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IPInterface, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructIPInterfaceList(int8u useShortTags) {
  EmberExiGeneratedIPInterfaceList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedIPInterfaceList));
  emExiPopulateStruct(emberExiIPInterfaceListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructIPInterfaceList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructIPInterfaceList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructIPInterfaceList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_IPInterfaceList, emberExiIPInterfaceListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("IPInterfaceList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFixedVAr(int8u useShortTags) {
  EmberExiGeneratedFixedVAr data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFixedVAr));
  emExiPopulateStruct(emberExiFixedVArStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFixedVAr(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFixedVAr(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFixedVAr(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FixedVAr, emberExiFixedVArStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FixedVAr, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCurvePairType(int8u useShortTags) {
  EmberExiGeneratedCurvePairType data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCurvePairType));
  emExiPopulateStruct(emberExiCurvePairTypeStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCurvePairType(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCurvePairType(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCurvePairType(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CurvePairType, emberExiCurvePairTypeStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CurvePairType, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERControlBase(int8u useShortTags) {
  EmberExiGeneratedDERControlBase data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERControlBase));
  emExiPopulateStruct(emberExiDERControlBaseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERControlBase(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERControlBase(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERControlBase(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERControlBase, emberExiDERControlBaseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERControlBase, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructActiveFlowReservationListLink(int8u useShortTags) {
  EmberExiGeneratedActiveFlowReservationListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedActiveFlowReservationListLink));
  emExiPopulateStruct(emberExiActiveFlowReservationListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructActiveFlowReservationListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructActiveFlowReservationListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructActiveFlowReservationListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ActiveFlowReservationListLink, emberExiActiveFlowReservationListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ActiveFlowReservationListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingSetListLink(int8u useShortTags) {
  EmberExiGeneratedReadingSetListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingSetListLink));
  emExiPopulateStruct(emberExiReadingSetListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingSetListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingSetListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingSetListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingSetListLink, emberExiReadingSetListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingSetListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructAbstractFlowReservation(int8u useShortTags) {
  EmberExiGeneratedAbstractFlowReservation data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAbstractFlowReservation));
  emExiPopulateStruct(emberExiAbstractFlowReservationStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAbstractFlowReservation(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAbstractFlowReservation(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAbstractFlowReservation(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AbstractFlowReservation, emberExiAbstractFlowReservationStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AbstractFlowReservation, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFlowReservationResponse(int8u useShortTags) {
  EmberExiGeneratedFlowReservationResponse data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFlowReservationResponse));
  emExiPopulateStruct(emberExiFlowReservationResponseStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFlowReservationResponse(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFlowReservationResponse(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFlowReservationResponse(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FlowReservationResponse, emberExiFlowReservationResponseStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FlowReservationResponse, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFlowReservationResponseList(int8u useShortTags) {
  EmberExiGeneratedFlowReservationResponseList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFlowReservationResponseList));
  emExiPopulateStruct(emberExiFlowReservationResponseListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFlowReservationResponseList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFlowReservationResponseList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFlowReservationResponseList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FlowReservationResponseList, emberExiFlowReservationResponseListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FlowReservationResponseList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCurrentRMS(int8u useShortTags) {
  EmberExiGeneratedCurrentRMS data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCurrentRMS));
  emExiPopulateStruct(emberExiCurrentRMSStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCurrentRMS(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCurrentRMS(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCurrentRMS(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CurrentRMS, emberExiCurrentRMSStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CurrentRMS, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructApparentPower(int8u useShortTags) {
  EmberExiGeneratedApparentPower data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedApparentPower));
  emExiPopulateStruct(emberExiApparentPowerStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructApparentPower(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructApparentPower(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructApparentPower(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ApparentPower, emberExiApparentPowerStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ApparentPower, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReactivePower(int8u useShortTags) {
  EmberExiGeneratedReactivePower data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReactivePower));
  emExiPopulateStruct(emberExiReactivePowerStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReactivePower(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReactivePower(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReactivePower(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReactivePower, emberExiReactivePowerStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReactivePower, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructWattHour(int8u useShortTags) {
  EmberExiGeneratedWattHour data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedWattHour));
  emExiPopulateStruct(emberExiWattHourStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructWattHour(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructWattHour(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructWattHour(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_WattHour, emberExiWattHourStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("WattHour, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERCapability(int8u useShortTags) {
  EmberExiGeneratedDERCapability data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERCapability));
  emExiPopulateStruct(emberExiDERCapabilityStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERCapability(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERCapability(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERCapability(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERCapability, emberExiDERCapabilityStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERCapability, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructRPLInstanceList(int8u useShortTags) {
  EmberExiGeneratedRPLInstanceList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRPLInstanceList));
  emExiPopulateStruct(emberExiRPLInstanceListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRPLInstanceList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRPLInstanceList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRPLInstanceList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RPLInstanceList, emberExiRPLInstanceListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RPLInstanceList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructloWPAN(int8u useShortTags) {
  EmberExiGeneratedloWPAN data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedloWPAN));
  emExiPopulateStruct(emberExiloWPANStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructloWPAN(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructloWPAN(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructloWPAN(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_loWPAN, emberExiloWPANStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("loWPAN, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructLLInterface(int8u useShortTags) {
  EmberExiGeneratedLLInterface data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLLInterface));
  emExiPopulateStruct(emberExiLLInterfaceStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLLInterface(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLLInterface(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLLInterface(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LLInterface, emberExiLLInterfaceStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LLInterface, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFlowReservationRequestListLink(int8u useShortTags) {
  EmberExiGeneratedFlowReservationRequestListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFlowReservationRequestListLink));
  emExiPopulateStruct(emberExiFlowReservationRequestListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFlowReservationRequestListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFlowReservationRequestListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFlowReservationRequestListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FlowReservationRequestListLink, emberExiFlowReservationRequestListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FlowReservationRequestListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFlowReservationResponseListLink(int8u useShortTags) {
  EmberExiGeneratedFlowReservationResponseListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFlowReservationResponseListLink));
  emExiPopulateStruct(emberExiFlowReservationResponseListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFlowReservationResponseListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFlowReservationResponseListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFlowReservationResponseListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FlowReservationResponseListLink, emberExiFlowReservationResponseListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FlowReservationResponseListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFunctionSetAssignmentsListLink(int8u useShortTags) {
  EmberExiGeneratedFunctionSetAssignmentsListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFunctionSetAssignmentsListLink));
  emExiPopulateStruct(emberExiFunctionSetAssignmentsListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFunctionSetAssignmentsListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFunctionSetAssignmentsListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FunctionSetAssignmentsListLink, emberExiFunctionSetAssignmentsListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FunctionSetAssignmentsListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructCustomerAgreementListLink(int8u useShortTags) {
  EmberExiGeneratedCustomerAgreementListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCustomerAgreementListLink));
  emExiPopulateStruct(emberExiCustomerAgreementListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCustomerAgreementListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCustomerAgreementListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCustomerAgreementListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CustomerAgreementListLink, emberExiCustomerAgreementListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CustomerAgreementListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructCustomerAccountList(int8u useShortTags) {
  EmberExiGeneratedCustomerAccountList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCustomerAccountList));
  emExiPopulateStruct(emberExiCustomerAccountListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCustomerAccountList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCustomerAccountList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCustomerAccountList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CustomerAccountList, emberExiCustomerAccountListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CustomerAccountList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructCustomerAgreementList(int8u useShortTags) {
  EmberExiGeneratedCustomerAgreementList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedCustomerAgreementList));
  emExiPopulateStruct(emberExiCustomerAgreementListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructCustomerAgreementList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructCustomerAgreementList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructCustomerAgreementList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_CustomerAgreementList, emberExiCustomerAgreementListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("CustomerAgreementList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructPriceResponseCfgListLink(int8u useShortTags) {
  EmberExiGeneratedPriceResponseCfgListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPriceResponseCfgListLink));
  emExiPopulateStruct(emberExiPriceResponseCfgListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPriceResponseCfgListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPriceResponseCfgListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPriceResponseCfgListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PriceResponseCfgListLink, emberExiPriceResponseCfgListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PriceResponseCfgListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructEnvironmentalCost(int8u useShortTags) {
  EmberExiGeneratedEnvironmentalCost data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedEnvironmentalCost));
  emExiPopulateStruct(emberExiEnvironmentalCostStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructEnvironmentalCost(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructEnvironmentalCost(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructEnvironmentalCost(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_EnvironmentalCost, emberExiEnvironmentalCostStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("EnvironmentalCost, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructConsumptionTariffIntervalList(int8u useShortTags) {
  EmberExiGeneratedConsumptionTariffIntervalList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedConsumptionTariffIntervalList));
  emExiPopulateStruct(emberExiConsumptionTariffIntervalListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructConsumptionTariffIntervalList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructConsumptionTariffIntervalList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructConsumptionTariffIntervalList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ConsumptionTariffIntervalList, emberExiConsumptionTariffIntervalListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ConsumptionTariffIntervalList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRateComponentLink(int8u useShortTags) {
  EmberExiGeneratedRateComponentLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRateComponentLink));
  emExiPopulateStruct(emberExiRateComponentLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRateComponentLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRateComponentLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRateComponentLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RateComponentLink, emberExiRateComponentLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RateComponentLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructPriceResponseCfg(int8u useShortTags) {
  EmberExiGeneratedPriceResponseCfg data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPriceResponseCfg));
  emExiPopulateStruct(emberExiPriceResponseCfgStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPriceResponseCfg(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPriceResponseCfg(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPriceResponseCfg(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PriceResponseCfg, emberExiPriceResponseCfgStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PriceResponseCfg, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructSubscribableIdentifiedObject(int8u useShortTags) {
  EmberExiGeneratedSubscribableIdentifiedObject data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedSubscribableIdentifiedObject));
  emExiPopulateStruct(emberExiSubscribableIdentifiedObjectStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructSubscribableIdentifiedObject(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructSubscribableIdentifiedObject(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructSubscribableIdentifiedObject(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_SubscribableIdentifiedObject, emberExiSubscribableIdentifiedObjectStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("SubscribableIdentifiedObject, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRPLSourceRoutesList(int8u useShortTags) {
  EmberExiGeneratedRPLSourceRoutesList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRPLSourceRoutesList));
  emExiPopulateStruct(emberExiRPLSourceRoutesListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRPLSourceRoutesList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRPLSourceRoutesList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRPLSourceRoutesList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RPLSourceRoutesList, emberExiRPLSourceRoutesListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RPLSourceRoutesList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructBillingReadingListLink(int8u useShortTags) {
  EmberExiGeneratedBillingReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingReadingListLink));
  emExiPopulateStruct(emberExiBillingReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingReadingListLink, emberExiBillingReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructBillingReadingSet(int8u useShortTags) {
  EmberExiGeneratedBillingReadingSet data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingReadingSet));
  emExiPopulateStruct(emberExiBillingReadingSetStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingReadingSet(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingReadingSet(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingReadingSet(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingReadingSet, emberExiBillingReadingSetStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingReadingSet, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructReadingListLink(int8u useShortTags) {
  EmberExiGeneratedReadingListLink data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingListLink));
  emExiPopulateStruct(emberExiReadingListLinkStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingListLink(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingListLink(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingListLink(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingListLink, emberExiReadingListLinkStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingListLink, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingSet(int8u useShortTags) {
  EmberExiGeneratedReadingSet data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingSet));
  emExiPopulateStruct(emberExiReadingSetStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingSet(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingSet(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingSet(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingSet, emberExiReadingSetStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingSet, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructReadingSetList(int8u useShortTags) {
  EmberExiGeneratedReadingSetList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedReadingSetList));
  emExiPopulateStruct(emberExiReadingSetListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructReadingSetList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructReadingSetList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructReadingSetList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ReadingSetList, emberExiReadingSetListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ReadingSetList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructAppliedTargetReduction(int8u useShortTags) {
  EmberExiGeneratedAppliedTargetReduction data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedAppliedTargetReduction));
  emExiPopulateStruct(emberExiAppliedTargetReductionStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructAppliedTargetReduction(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructAppliedTargetReduction(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructAppliedTargetReduction(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_AppliedTargetReduction, emberExiAppliedTargetReductionStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("AppliedTargetReduction, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructDRLCCapabilities(int8u useShortTags) {
  EmberExiGeneratedDRLCCapabilities data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDRLCCapabilities));
  emExiPopulateStruct(emberExiDRLCCapabilitiesStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDRLCCapabilities(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDRLCCapabilities(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDRLCCapabilities(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DRLCCapabilities, emberExiDRLCCapabilitiesStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DRLCCapabilities, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructFunctionSetAssignments(int8u useShortTags) {
  EmberExiGeneratedFunctionSetAssignments data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFunctionSetAssignments));
  emExiPopulateStruct(emberExiFunctionSetAssignmentsStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFunctionSetAssignments(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFunctionSetAssignments(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFunctionSetAssignments(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FunctionSetAssignments, emberExiFunctionSetAssignmentsStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FunctionSetAssignments, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructMirrorMeterReadingList(int8u useShortTags) {
  EmberExiGeneratedMirrorMeterReadingList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedMirrorMeterReadingList));
  emExiPopulateStruct(emberExiMirrorMeterReadingListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructMirrorMeterReadingList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructMirrorMeterReadingList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructMirrorMeterReadingList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_MirrorMeterReadingList, emberExiMirrorMeterReadingListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("MirrorMeterReadingList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructVoltageRMS(int8u useShortTags) {
  EmberExiGeneratedVoltageRMS data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedVoltageRMS));
  emExiPopulateStruct(emberExiVoltageRMSStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructVoltageRMS(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructVoltageRMS(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructVoltageRMS(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_VoltageRMS, emberExiVoltageRMSStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("VoltageRMS, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERSettings(int8u useShortTags) {
  EmberExiGeneratedDERSettings data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERSettings));
  emExiPopulateStruct(emberExiDERSettingsStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERSettings(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERSettings(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERSettings(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERSettings, emberExiDERSettingsStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERSettings, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructLLInterfaceList(int8u useShortTags) {
  EmberExiGeneratedLLInterfaceList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedLLInterfaceList));
  emExiPopulateStruct(emberExiLLInterfaceListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructLLInterfaceList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructLLInterfaceList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructLLInterfaceList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_LLInterfaceList, emberExiLLInterfaceListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("LLInterfaceList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructPEVInfo(int8u useShortTags) {
  EmberExiGeneratedPEVInfo data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPEVInfo));
  emExiPopulateStruct(emberExiPEVInfoStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPEVInfo(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPEVInfo(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPEVInfo(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PEVInfo, emberExiPEVInfoStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PEVInfo, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructError(int8u useShortTags) {
  EmberExiGeneratedError data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedError));
  emExiPopulateStruct(emberExiErrorStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructError(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructError(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructError(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_Error, emberExiErrorStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("Error, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructFlowReservationRequest(int8u useShortTags) {
  EmberExiGeneratedFlowReservationRequest data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFlowReservationRequest));
  emExiPopulateStruct(emberExiFlowReservationRequestStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFlowReservationRequest(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFlowReservationRequest(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFlowReservationRequest(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FlowReservationRequest, emberExiFlowReservationRequestStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FlowReservationRequest, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructFlowReservationRequestList(int8u useShortTags) {
  EmberExiGeneratedFlowReservationRequestList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFlowReservationRequestList));
  emExiPopulateStruct(emberExiFlowReservationRequestListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFlowReservationRequestList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFlowReservationRequestList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFlowReservationRequestList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FlowReservationRequestList, emberExiFlowReservationRequestListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FlowReservationRequestList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructDERList(int8u useShortTags) {
  EmberExiGeneratedDERList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERList));
  emExiPopulateStruct(emberExiDERListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERList, emberExiDERListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructNeighborList(int8u useShortTags) {
  EmberExiGeneratedNeighborList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedNeighborList));
  emExiPopulateStruct(emberExiNeighborListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructNeighborList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructNeighborList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructNeighborList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_NeighborList, emberExiNeighborListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("NeighborList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructDefaultDERControl(int8u useShortTags) {
  EmberExiGeneratedDefaultDERControl data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDefaultDERControl));
  emExiPopulateStruct(emberExiDefaultDERControlStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDefaultDERControl(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDefaultDERControl(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDefaultDERControl(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DefaultDERControl, emberExiDefaultDERControlStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DefaultDERControl, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructPriceResponseCfgList(int8u useShortTags) {
  EmberExiGeneratedPriceResponseCfgList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedPriceResponseCfgList));
  emExiPopulateStruct(emberExiPriceResponseCfgListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructPriceResponseCfgList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructPriceResponseCfgList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructPriceResponseCfgList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_PriceResponseCfgList, emberExiPriceResponseCfgListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("PriceResponseCfgList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructRespondableIdentifiedObject(int8u useShortTags) {
  EmberExiGeneratedRespondableIdentifiedObject data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedRespondableIdentifiedObject));
  emExiPopulateStruct(emberExiRespondableIdentifiedObjectStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructRespondableIdentifiedObject(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructRespondableIdentifiedObject(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructRespondableIdentifiedObject(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_RespondableIdentifiedObject, emberExiRespondableIdentifiedObjectStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("RespondableIdentifiedObject, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructDERCurveList(int8u useShortTags) {
  EmberExiGeneratedDERCurveList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERCurveList));
  emExiPopulateStruct(emberExiDERCurveListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERCurveList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERCurveList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERCurveList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERCurveList, emberExiDERCurveListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERCurveList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructResponseSetList(int8u useShortTags) {
  EmberExiGeneratedResponseSetList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedResponseSetList));
  emExiPopulateStruct(emberExiResponseSetListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructResponseSetList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructResponseSetList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructResponseSetList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_ResponseSetList, emberExiResponseSetListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("ResponseSetList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructFunctionSetAssignmentsList(int8u useShortTags) {
  EmberExiGeneratedFunctionSetAssignmentsList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedFunctionSetAssignmentsList));
  emExiPopulateStruct(emberExiFunctionSetAssignmentsListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructFunctionSetAssignmentsList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructFunctionSetAssignmentsList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_FunctionSetAssignmentsList, emberExiFunctionSetAssignmentsListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("FunctionSetAssignmentsList, %d, %d, %d\n", structLen, stringLen, compressedLen);
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


void emberExiCompressionTestStructBillingReadingSetList(int8u useShortTags) {
  EmberExiGeneratedBillingReadingSetList data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedBillingReadingSetList));
  emExiPopulateStruct(emberExiBillingReadingSetListStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructBillingReadingSetList(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructBillingReadingSetList(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructBillingReadingSetList(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_BillingReadingSetList, emberExiBillingReadingSetListStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("BillingReadingSetList, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


void emberExiCompressionTestStructDERAvailability(int8u useShortTags) {
  EmberExiGeneratedDERAvailability data;
  ExiState state;
  int8u *stringBuffer;
  int stringLen, structLen, compressedLen = 0;

  stringBuffer = compressionTestStringBuffer;
  MEMSET(&data, 0, sizeof(EmberExiGeneratedDERAvailability));
  emExiPopulateStruct(emberExiDERAvailabilityStructData, (int8u *) &data, exiUnitTestChildCount, TRUE);
  if ( useShortTags ) {
    stringLen = emberExiXmlShortTagsSprintfStructDERAvailability(stringBuffer, 0, &data);
  } else {
    stringLen = emberExiXmlSprintfStructDERAvailability(stringBuffer, 0, &data);
  }
  structLen = emberExiSizeofStructDERAvailability(&data);
  emberExiResetRWPointer(compressionTestBits);
  emberExiStartEncoder(&state, compressionTestGrammar, compressionTestBits);
  emberExiEncodeStartDocument(&state);
  emberExiEncoderAddEvents(&state, EMBER_EXI_QNAME_DERAvailability, emberExiDERAvailabilityStructData, (int8u *) &data);
  emberExiEncodeEndDocument(&state);
  compressedLen = (compressionTestBits->pointer + 7)/8;
  printf("DERAvailability, %d, %d, %d\n", structLen, stringLen, compressedLen);
}


// Master compression unit test function
void emberCompressionReport(void) {
emberExiCompressionTestStructLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveDERControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDefaultDERControlLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERCurveListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructResource(exiUnitTestUseShortTags);
emberExiCompressionTestStructIdentifiedObject(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERProgram(exiUnitTestUseShortTags);
emberExiCompressionTestStructAssociatedDERProgramListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructAssociatedUsagePointLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructCurrentDERProgramLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERAvailabilityLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERCapabilityLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERSettingsLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscribableResource(exiUnitTestUseShortTags);
emberExiCompressionTestStructDER(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditTypeChange(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceSupplier(exiUnitTestUseShortTags);
emberExiCompressionTestStructDateTimeInterval(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructCharge(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructList(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePoint(exiUnitTestUseShortTags);
emberExiCompressionTestStructRPLSourceRoutes(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscriptionBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructNotification(exiUnitTestUseShortTags);
emberExiCompressionTestStructNotificationList(exiUnitTestUseShortTags);
emberExiCompressionTestStructConfigurationLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceInformationLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructIPInterfaceListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructLoadShedAvailabilityLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructLogEventListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPowerStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructAbstractDevice(exiUnitTestUseShortTags);
emberExiCompressionTestStructSelfDevice(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAccountListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgramListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERProgramListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMessagingProgramListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepaymentListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponseSetListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfileListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFunctionSetAssignmentsBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructCurveData(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERCurve(exiUnitTestUseShortTags);
emberExiCompressionTestStructEventStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructConsumptionTariffIntervalListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructRespondableResource(exiUnitTestUseShortTags);
emberExiCompressionTestStructRespondableSubscribableIdentifiedObject(exiUnitTestUseShortTags);
emberExiCompressionTestStructEvent(exiUnitTestUseShortTags);
emberExiCompressionTestStructRandomizableEvent(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeTariffInterval(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponseListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponseSet(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveBillingPeriodListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveProjectionReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveTargetReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingPeriodListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructHistoricalReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepaymentLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructProjectionReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfileLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAgreement(exiUnitTestUseShortTags);
emberExiCompressionTestStructOffset(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveTextMessageListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFixedPowerFactor(exiUnitTestUseShortTags);
emberExiCompressionTestStructRPLInstanceListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructIPAddr(exiUnitTestUseShortTags);
emberExiCompressionTestStructIPAddrList(exiUnitTestUseShortTags);
emberExiCompressionTestStructConnectStatusType(exiUnitTestUseShortTags);
emberExiCompressionTestStructInverterStatusType(exiUnitTestUseShortTags);
emberExiCompressionTestStructLocalControlModeStatusType(exiUnitTestUseShortTags);
emberExiCompressionTestStructManufacturerStatusType(exiUnitTestUseShortTags);
emberExiCompressionTestStructOperationalModeStatusType(exiUnitTestUseShortTags);
emberExiCompressionTestStructStateOfChargeStatusType(exiUnitTestUseShortTags);
emberExiCompressionTestStructStorageModeStatusType(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReduction(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveEndDeviceControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActivePower(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceControlListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgram(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscribableList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgramList(exiUnitTestUseShortTags);
emberExiCompressionTestStructLogEvent(exiUnitTestUseShortTags);
emberExiCompressionTestStructLogEventList(exiUnitTestUseShortTags);
emberExiCompressionTestStructNeighborListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructIEEE_802_15_4(exiUnitTestUseShortTags);
emberExiCompressionTestStructRateComponentListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveTimeTariffIntervalListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeTariffIntervalList(exiUnitTestUseShortTags);
emberExiCompressionTestStructNeighbor(exiUnitTestUseShortTags);
emberExiCompressionTestStructRPLSourceRoutesListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERProgramLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructLLInterfaceListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTime(exiUnitTestUseShortTags);
emberExiCompressionTestStructUsagePointList(exiUnitTestUseShortTags);
emberExiCompressionTestStructUnitValueType(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingType(exiUnitTestUseShortTags);
emberExiCompressionTestStructApplianceLoadReduction(exiUnitTestUseShortTags);
emberExiCompressionTestStructDutyCycle(exiUnitTestUseShortTags);
emberExiCompressionTestStructSetPoint(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceControl(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupplyInterruptionOverride(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorUsagePointListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSelfDeviceLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceCapability(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERCurveLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructAccountBalanceLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveCreditRegisterListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveSupplyInterruptionOverrideListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructRealEnergy(exiUnitTestUseShortTags);
emberExiCompressionTestStructAccountingUnit(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditRegisterListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepayOperationStatusLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupplyInterruptionOverrideListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepayment(exiUnitTestUseShortTags);
emberExiCompressionTestStructCondition(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingSetBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorReadingSet(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorMeterReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorUsagePoint(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceChange(exiUnitTestUseShortTags);
emberExiCompressionTestStructRPLInstance(exiUnitTestUseShortTags);
emberExiCompressionTestStructFixedPointType(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingReadingSetListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingTypeLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingMeterReadingBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructProjectionReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructProjectionReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructHistoricalReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructDemandResponseProgramLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructLoadShedAvailability(exiUnitTestUseShortTags);
emberExiCompressionTestStructIPAddrListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructIPInterface(exiUnitTestUseShortTags);
emberExiCompressionTestStructIPInterfaceList(exiUnitTestUseShortTags);
emberExiCompressionTestStructFixedVAr(exiUnitTestUseShortTags);
emberExiCompressionTestStructCurvePairType(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERControlBase(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERControl(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERControlList(exiUnitTestUseShortTags);
emberExiCompressionTestStructActiveFlowReservationListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingSetListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructAbstractFlowReservation(exiUnitTestUseShortTags);
emberExiCompressionTestStructFlowReservationResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructFlowReservationResponseList(exiUnitTestUseShortTags);
emberExiCompressionTestStructCurrentRMS(exiUnitTestUseShortTags);
emberExiCompressionTestStructAmpereHour(exiUnitTestUseShortTags);
emberExiCompressionTestStructApparentPower(exiUnitTestUseShortTags);
emberExiCompressionTestStructReactivePower(exiUnitTestUseShortTags);
emberExiCompressionTestStructWattHour(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERCapability(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextMessage(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextMessageList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupportedLocale(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponseList(exiUnitTestUseShortTags);
emberExiCompressionTestStructRPLInstanceList(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceSupplierList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscription(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructloWPAN(exiUnitTestUseShortTags);
emberExiCompressionTestStructLLInterface(exiUnitTestUseShortTags);
emberExiCompressionTestStructFlowReservationRequestListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFlowReservationResponseListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFunctionSetAssignmentsListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructRegistrationLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscriptionListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDevice(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupplyInterruptionOverrideList(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAgreementListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructServiceSupplierLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAccount(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAccountList(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAgreementList(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeTariffIntervalListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructRateComponent(exiUnitTestUseShortTags);
emberExiCompressionTestStructRateComponentList(exiUnitTestUseShortTags);
emberExiCompressionTestStructPriceResponseCfgListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructEnvironmentalCost(exiUnitTestUseShortTags);
emberExiCompressionTestStructConsumptionTariffInterval(exiUnitTestUseShortTags);
emberExiCompressionTestStructConsumptionTariffIntervalList(exiUnitTestUseShortTags);
emberExiCompressionTestStructRateComponentLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructPriceResponseCfg(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscribableIdentifiedObject(exiUnitTestUseShortTags);
emberExiCompressionTestStructRPLSourceRoutesList(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingReadingSet(exiUnitTestUseShortTags);
emberExiCompressionTestStructFile(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfile(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingSet(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingSetList(exiUnitTestUseShortTags);
emberExiCompressionTestStructPowerConfiguration(exiUnitTestUseShortTags);
emberExiCompressionTestStructTimeConfiguration(exiUnitTestUseShortTags);
emberExiCompressionTestStructConfiguration(exiUnitTestUseShortTags);
emberExiCompressionTestStructAppliedTargetReduction(exiUnitTestUseShortTags);
emberExiCompressionTestStructDrResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextMessageListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceCapabilityLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructTargetReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDRLCCapabilities(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupportedLocaleListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceInformation(exiUnitTestUseShortTags);
emberExiCompressionTestStructFunctionSetAssignments(exiUnitTestUseShortTags);
emberExiCompressionTestStructMessagingProgram(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditRegister(exiUnitTestUseShortTags);
emberExiCompressionTestStructCreditRegisterList(exiUnitTestUseShortTags);
emberExiCompressionTestStructReadingLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReading(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorMeterReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructMessagingProgramList(exiUnitTestUseShortTags);
emberExiCompressionTestStructVoltageRMS(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERSettings(exiUnitTestUseShortTags);
emberExiCompressionTestStructSupportedLocaleList(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepaymentList(exiUnitTestUseShortTags);
emberExiCompressionTestStructTariffProfileList(exiUnitTestUseShortTags);
emberExiCompressionTestStructLLInterfaceList(exiUnitTestUseShortTags);
emberExiCompressionTestStructTemperature(exiUnitTestUseShortTags);
emberExiCompressionTestStructPrepayOperationStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructPEVInfo(exiUnitTestUseShortTags);
emberExiCompressionTestStructPowerStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructPriceResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructError(exiUnitTestUseShortTags);
emberExiCompressionTestStructDeviceStatus(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceControlList(exiUnitTestUseShortTags);
emberExiCompressionTestStructFileList(exiUnitTestUseShortTags);
emberExiCompressionTestStructEndDeviceLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFlowReservationRequest(exiUnitTestUseShortTags);
emberExiCompressionTestStructFlowReservationRequestList(exiUnitTestUseShortTags);
emberExiCompressionTestStructCustomerAccountLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERList(exiUnitTestUseShortTags);
emberExiCompressionTestStructNeighborList(exiUnitTestUseShortTags);
emberExiCompressionTestStructTextResponse(exiUnitTestUseShortTags);
emberExiCompressionTestStructDefaultDERControl(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERProgramList(exiUnitTestUseShortTags);
emberExiCompressionTestStructPriceResponseCfgList(exiUnitTestUseShortTags);
emberExiCompressionTestStructRespondableIdentifiedObject(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingPeriod(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingPeriodList(exiUnitTestUseShortTags);
emberExiCompressionTestStructMirrorUsagePointList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERCurveList(exiUnitTestUseShortTags);
emberExiCompressionTestStructAccountBalance(exiUnitTestUseShortTags);
emberExiCompressionTestStructResponseSetList(exiUnitTestUseShortTags);
emberExiCompressionTestStructHistoricalReadingList(exiUnitTestUseShortTags);
emberExiCompressionTestStructRegistration(exiUnitTestUseShortTags);
emberExiCompressionTestStructNotificationListLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructMeterReadingLink(exiUnitTestUseShortTags);
emberExiCompressionTestStructFunctionSetAssignmentsList(exiUnitTestUseShortTags);
emberExiCompressionTestStructSubscriptionList(exiUnitTestUseShortTags);
emberExiCompressionTestStructBillingReadingSetList(exiUnitTestUseShortTags);
emberExiCompressionTestStructDERAvailability(exiUnitTestUseShortTags);
}


