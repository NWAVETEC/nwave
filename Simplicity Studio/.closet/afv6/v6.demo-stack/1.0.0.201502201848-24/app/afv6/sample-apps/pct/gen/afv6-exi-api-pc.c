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


