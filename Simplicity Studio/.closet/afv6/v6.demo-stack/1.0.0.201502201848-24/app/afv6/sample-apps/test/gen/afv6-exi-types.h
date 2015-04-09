// This file is generated. Please do not edit manually.
// 
//

// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_EXI_GENERATED_FILE_TYPES__
#define __EMBER_EXI_GENERATED_FILE_TYPES__


// This file contains C structs generated out of the XSD schema and API prototypes.

// Built-in type: Binary
typedef int8u* EmberExiGeneratedBinary;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A 128-bit field encoded as a
// hex string (32 characters / 16 octets)</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary128
typedef struct {
  int8u length;
  int8u bytes[16];
} EmberExiGeneratedHexBinary128;



// Built-in type: String
typedef int8u* EmberExiGeneratedString;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max length
// 32</xs:documentation>
// </xs:annotation>
// Simple type: String32
typedef EmberExiGeneratedString EmberExiGeneratedString32;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max length
// 20</xs:documentation>
// </xs:annotation>
// Simple type: String20
typedef EmberExiGeneratedString EmberExiGeneratedString20;



// Built-in type: Integer
typedef int32s EmberExiGeneratedInteger;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unsigned integer, max
// inclusive 4294967295 (2^32-1)</xs:documentation>
// </xs:annotation>
// Simple type: UInt32
typedef EmberExiGeneratedInteger EmberExiGeneratedUInt32;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max
// length42</xs:documentation>
// </xs:annotation>
// Simple type: String42
typedef EmberExiGeneratedString EmberExiGeneratedString42;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An 8-bit field encoded as a
// hex string (2 characters / 1 octet)</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary8
typedef struct {
  int8u length;
  int8u bytes[1];
} EmberExiGeneratedHexBinary8;



// Built-in type: Boolean
typedef boolean EmberExiGeneratedBoolean;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A resource is an addressable
// unit of information, either a collection (List) or instance of an object
// (identifiedObject, or simply, Resource)</xs:documentation>
// </xs:annotation>
// Complex type: Resource
#define emberExiStructResourceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResource)))

typedef struct _EmberExiGeneratedResource {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:13;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
} EmberExiGeneratedResource;


#define emberExiResourceStructDataIndex 2101
#define emberExiResourceStructData (emEncoderEvents + emberExiResourceStructDataIndex)
#define emberExiCompareStructResource(x, y) (emExiCompareStructs(emberExiResourceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructResource(theStruct) (emExiStructMemoryFootprint(emberExiResourceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructResource(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructResource(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructResource(EmberExiGeneratedResource *data);

// Converts struct to XML
void emberExiToXmlStructResource(EmberExiGeneratedResource *data);

// Writes XML to a string
int emberExiXmlSprintfStructResource(int8u *stringBuffer, int offset, EmberExiGeneratedResource *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructResource(int8u *stringBuffer, int offset, EmberExiGeneratedResource *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>This is a root class to
// provide common naming attributes for all classes needing naming
// attributes</xs:documentation>
// </xs:annotation>
// Complex type: IdentifiedObject
#define emberExiStructIdentifiedObjectInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIdentifiedObject)))

typedef struct _EmberExiGeneratedIdentifiedObject {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
} EmberExiGeneratedIdentifiedObject;


#define emberExiIdentifiedObjectStructDataIndex 1252
#define emberExiIdentifiedObjectStructData (emEncoderEvents + emberExiIdentifiedObjectStructDataIndex)
#define emberExiCompareStructIdentifiedObject(x, y) (emExiCompareStructs(emberExiIdentifiedObjectStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIdentifiedObject(theStruct) (emExiStructMemoryFootprint(emberExiIdentifiedObjectStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIdentifiedObject(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIdentifiedObject(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data);

// Converts struct to XML
void emberExiToXmlStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data);

// Writes XML to a string
int emberExiXmlSprintfStructIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedIdentifiedObject *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedIdentifiedObject *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Organisation that provides
// services to Customers.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceSupplier
#define emberExiStructServiceSupplierInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceSupplier)))

typedef struct _EmberExiGeneratedServiceSupplier {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_providerID_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 email_option; // element
  EmberExiGeneratedString20 phone_option; // element
  EmberExiGeneratedUInt32 providerID_option; // element
  EmberExiGeneratedString42 web_option; // element
} EmberExiGeneratedServiceSupplier;


#define emberExiServiceSupplierStructDataIndex 2185
#define emberExiServiceSupplierStructData (emEncoderEvents + emberExiServiceSupplierStructDataIndex)
#define emberExiCompareStructServiceSupplier(x, y) (emExiCompareStructs(emberExiServiceSupplierStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructServiceSupplier(theStruct) (emExiStructMemoryFootprint(emberExiServiceSupplierStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructServiceSupplier(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructServiceSupplier(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructServiceSupplier(EmberExiGeneratedServiceSupplier *data);

// Converts struct to XML
void emberExiToXmlStructServiceSupplier(EmberExiGeneratedServiceSupplier *data);

// Writes XML to a string
int emberExiXmlSprintfStructServiceSupplier(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplier *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructServiceSupplier(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplier *data);

// Struct comparison function
;


// Built-in type: Int8u
typedef int8u EmberExiGeneratedInt8u;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unsigned integer, max
// inclusive 255 (2^8-1)</xs:documentation>
// </xs:annotation>
// Simple type: UInt8
typedef EmberExiGeneratedInt8u EmberExiGeneratedUInt8;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Regular
// 1 - Emergency
// 2 -
// Regular, then Emergency
// 3 - Emergency, then
// Regular</xs:documentation>
// </xs:annotation>
// Complex type: CreditTypeType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCreditTypeType; // based-on UInt8



// Built-in type: Int32s
typedef int32s EmberExiGeneratedInt32s;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Time is a signed 64 bit value
// representing the number of seconds since 0 hours, 0 minutes, 0 seconds, on the
// 1st of January, 1970, in UTC, not counting leap
// seconds.</xs:documentation>
// </xs:annotation>
// Simple type: TimeType
typedef EmberExiGeneratedInt32s EmberExiGeneratedTimeType;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a change to the
// credit type.</xs:documentation>
// </xs:annotation>
// Complex type: CreditTypeChange
#define emberExiStructCreditTypeChangeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCreditTypeChange)))

typedef struct _EmberExiGeneratedCreditTypeChange {
  int16u structType;
  EmberExiGeneratedCreditTypeType newType; // element
  EmberExiGeneratedTimeType startTime; // element
} EmberExiGeneratedCreditTypeChange;


#define emberExiCreditTypeChangeStructDataIndex 430
#define emberExiCreditTypeChangeStructData (emEncoderEvents + emberExiCreditTypeChangeStructDataIndex)
#define emberExiCompareStructCreditTypeChange(x, y) (emExiCompareStructs(emberExiCreditTypeChangeStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCreditTypeChange(theStruct) (emExiStructMemoryFootprint(emberExiCreditTypeChangeStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCreditTypeChange(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCreditTypeChange(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCreditTypeChange(EmberExiGeneratedCreditTypeChange *data);

// Converts struct to XML
void emberExiToXmlStructCreditTypeChange(EmberExiGeneratedCreditTypeChange *data);

// Writes XML to a string
int emberExiXmlSprintfStructCreditTypeChange(int8u *stringBuffer, int offset, EmberExiGeneratedCreditTypeChange *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCreditTypeChange(int8u *stringBuffer, int offset, EmberExiGeneratedCreditTypeChange *data);

// Struct comparison function
;


// Built-in type: Int16u
typedef int16u EmberExiGeneratedInt16u;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unsigned integer, max
// inclusive 65535 (2^16-1)</xs:documentation>
// </xs:annotation>
// Simple type: UInt16
typedef EmberExiGeneratedInt16u EmberExiGeneratedUInt16;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Links provide a reference, via
// URI, to another resource.</xs:documentation>
// </xs:annotation>
// Complex type: ListLink
#define emberExiStructListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedListLink)))

typedef struct _EmberExiGeneratedListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedListLink;


#define emberExiListLinkStructDataIndex 1357
#define emberExiListLinkStructData (emEncoderEvents + emberExiListLinkStructDataIndex)
#define emberExiCompareStructListLink(x, y) (emExiCompareStructs(emberExiListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructListLink(theStruct) (emExiStructMemoryFootprint(emberExiListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructListLink(EmberExiGeneratedListLink *data);

// Converts struct to XML
void emberExiToXmlStructListLink(EmberExiGeneratedListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructListLink(int8u *stringBuffer, int offset, EmberExiGeneratedListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructListLink(int8u *stringBuffer, int offset, EmberExiGeneratedListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of active
// ChargeReservation instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveChargeReservationListLink
#define emberExiStructActiveChargeReservationListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveChargeReservationListLink)))

typedef struct _EmberExiGeneratedActiveChargeReservationListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveChargeReservationListLink;


#define emberExiActiveChargeReservationListLinkStructDataIndex 70
#define emberExiActiveChargeReservationListLinkStructData (emEncoderEvents + emberExiActiveChargeReservationListLinkStructDataIndex)
#define emberExiCompareStructActiveChargeReservationListLink(x, y) (emExiCompareStructs(emberExiActiveChargeReservationListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveChargeReservationListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveChargeReservationListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveChargeReservationListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveChargeReservationListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveChargeReservationListLink(EmberExiGeneratedActiveChargeReservationListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveChargeReservationListLink(EmberExiGeneratedActiveChargeReservationListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveChargeReservationListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveChargeReservationListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of active
// DERControl instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveDERControlListLink
#define emberExiStructActiveDERControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveDERControlListLink)))

typedef struct _EmberExiGeneratedActiveDERControlListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveDERControlListLink;


#define emberExiActiveDERControlListLinkStructDataIndex 82
#define emberExiActiveDERControlListLinkStructData (emEncoderEvents + emberExiActiveDERControlListLinkStructDataIndex)
#define emberExiCompareStructActiveDERControlListLink(x, y) (emExiCompareStructs(emberExiActiveDERControlListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveDERControlListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveDERControlListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveDERControlListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveDERControlListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveDERControlListLink(EmberExiGeneratedActiveDERControlListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveDERControlListLink(EmberExiGeneratedActiveDERControlListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveDERControlListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveDERControlListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// ChargeReservation instances.</xs:documentation>
// </xs:annotation>
// Complex type: ChargeReservationListLink
#define emberExiStructChargeReservationListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargeReservationListLink)))

typedef struct _EmberExiGeneratedChargeReservationListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedChargeReservationListLink;


#define emberExiChargeReservationListLinkStructDataIndex 259
#define emberExiChargeReservationListLinkStructData (emEncoderEvents + emberExiChargeReservationListLinkStructDataIndex)
#define emberExiCompareStructChargeReservationListLink(x, y) (emExiCompareStructs(emberExiChargeReservationListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargeReservationListLink(theStruct) (emExiStructMemoryFootprint(emberExiChargeReservationListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargeReservationListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargeReservationListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargeReservationListLink(EmberExiGeneratedChargeReservationListLink *data);

// Converts struct to XML
void emberExiToXmlStructChargeReservationListLink(EmberExiGeneratedChargeReservationListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargeReservationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of DERControl
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: DERControlListLink
#define emberExiStructDERControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERControlListLink)))

typedef struct _EmberExiGeneratedDERControlListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERControlListLink;


#define emberExiDERControlListLinkStructDataIndex 592
#define emberExiDERControlListLinkStructData (emEncoderEvents + emberExiDERControlListLinkStructDataIndex)
#define emberExiCompareStructDERControlListLink(x, y) (emExiCompareStructs(emberExiDERControlListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERControlListLink(theStruct) (emExiStructMemoryFootprint(emberExiDERControlListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERControlListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERControlListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERControlListLink(EmberExiGeneratedDERControlListLink *data);

// Converts struct to XML
void emberExiToXmlStructDERControlListLink(EmberExiGeneratedDERControlListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Values possible for indication
// of "Primary" provider: 
// 0 - Contracted premise service provider
// 1 - Convenience
// functionality service provider
// 2 - Other convenience functionality service
// provider
// 3 - Other</xs:documentation>
// </xs:annotation>
// Complex type: PrimacyType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPrimacyType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Distributed Energy Resource
// program.</xs:documentation>
// </xs:annotation>
// Complex type: DERProgram
#define emberExiStructDERProgramInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERProgram)))

typedef struct _EmberExiGeneratedDERProgram {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedActiveChargeReservationListLink *ActiveChargeReservationListLink_option; // pointer to ActiveChargeReservationListLink structs
  EmberExiGeneratedActiveDERControlListLink *ActiveDERControlListLink_option; // pointer to ActiveDERControlListLink structs
  EmberExiGeneratedChargeReservationListLink *ChargeReservationListLink_option; // pointer to ChargeReservationListLink structs
  EmberExiGeneratedDERControlListLink *DERControlListLink_option; // pointer to DERControlListLink structs
  EmberExiGeneratedPrimacyType primacy; // element
} EmberExiGeneratedDERProgram;


#define emberExiDERProgramStructDataIndex 610
#define emberExiDERProgramStructData (emEncoderEvents + emberExiDERProgramStructDataIndex)
#define emberExiCompareStructDERProgram(x, y) (emExiCompareStructs(emberExiDERProgramStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERProgram(theStruct) (emExiStructMemoryFootprint(emberExiDERProgramStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERProgram(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERProgram(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERProgram(EmberExiGeneratedDERProgram *data);

// Converts struct to XML
void emberExiToXmlStructDERProgram(EmberExiGeneratedDERProgram *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgram *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgram *data);

// Struct comparison function
;


// Built-in type: Int8s
typedef int8s EmberExiGeneratedInt8s;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Signed integer, min -128 max
// +127</xs:documentation>
// </xs:annotation>
// Simple type: Int8
typedef EmberExiGeneratedInt8s EmberExiGeneratedInt8;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = None
// 1 = deca=x10
// 2 =
// hecto=x100
// -3 = mili=x10-3
// 3 = kilo=x1000
// 6 = Mega=x106
// -6 = micro=x10-3
// 9 =
// Giga=x109</xs:documentation>
// </xs:annotation>
// Complex type: PowerOfTenMultiplierType
typedef EmberExiGeneratedInt8 EmberExiGeneratedPowerOfTenMultiplierType; // based-on Int8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 5 = A
// (Current)
// 29 = Voltage
// 31 = J (Energy joule)
// 33 = Hz (Frequency)
// 38 = Real power
// (Watts)
// 42 = m3 (Cubic Meter)
// 61 = VA (Apparent power)
// 63 = VAr (Reactive
// power)
// 65 = Cos? (Power factor)
// 67 = V² (Volts squared)
// 69 = A² (Amp squared)
// 71
// = VAh (Apparent energy)
// 72 = Real energy (Watt-hours)
// 73 = VArh (Reactive
// energy)
// 106 = Ah (Ampere-hours / Available Charge)
// 119 = ft3 (Cubic Feet)
// 122 =
// ft3/h (Cubic Feet per Hour)
// 125 = m3/h (Cubic Meter per Hour)
// 128 = US gl (US
// Gallons)
// 129 = US gl/h (US Gallons per Hour)
// 130 = IMP gl (Imperial Gallons)
// 131
// = IMP gl/h (Imperial Gallons per Hour)
// 132 = BTU
// 133 = BTU/h
// 134 = Liter
// 137 =
// L/h (Liters per Hour)
// 140 = PA(gauge)
// 155 = PA(absolute)
// 169 =
// Therm</xs:documentation>
// </xs:annotation>
// Complex type: UomType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedUomType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A unit of electric
// charge</xs:documentation>
// </xs:annotation>
// Complex type: AmpereHour
#define emberExiStructAmpereHourInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAmpereHour)))

typedef struct _EmberExiGeneratedAmpereHour {
  int16u structType;
  unsigned int has_multiplier_option:1;
  unsigned int has_unit_option:1;
  unsigned int has_value_option:1;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier_option; // element
  EmberExiGeneratedUomType unit_option; // element
  EmberExiGeneratedUInt16 value_option; // element
} EmberExiGeneratedAmpereHour;


#define emberExiAmpereHourStructDataIndex 154
#define emberExiAmpereHourStructData (emEncoderEvents + emberExiAmpereHourStructDataIndex)
#define emberExiCompareStructAmpereHour(x, y) (emExiCompareStructs(emberExiAmpereHourStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAmpereHour(theStruct) (emExiStructMemoryFootprint(emberExiAmpereHourStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAmpereHour(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAmpereHour(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAmpereHour(EmberExiGeneratedAmpereHour *data);

// Converts struct to XML
void emberExiToXmlStructAmpereHour(EmberExiGeneratedAmpereHour *data);

// Writes XML to a string
int emberExiXmlSprintfStructAmpereHour(int8u *stringBuffer, int offset, EmberExiGeneratedAmpereHour *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAmpereHour(int8u *stringBuffer, int offset, EmberExiGeneratedAmpereHour *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Links provide a reference, via
// URI, to another resource.</xs:documentation>
// </xs:annotation>
// Complex type: Link
#define emberExiStructLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLink)))

typedef struct _EmberExiGeneratedLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedLink;


#define emberExiLinkStructDataIndex 1321
#define emberExiLinkStructData (emEncoderEvents + emberExiLinkStructDataIndex)
#define emberExiCompareStructLink(x, y) (emExiCompareStructs(emberExiLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLink(theStruct) (emExiStructMemoryFootprint(emberExiLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLink(EmberExiGeneratedLink *data);

// Converts struct to XML
void emberExiToXmlStructLink(EmberExiGeneratedLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructLink(int8u *stringBuffer, int offset, EmberExiGeneratedLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLink(int8u *stringBuffer, int offset, EmberExiGeneratedLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// DERStatus.</xs:documentation>
// </xs:annotation>
// Complex type: DERStatusLink
#define emberExiStructDERStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERStatusLink)))

typedef struct _EmberExiGeneratedDERStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERStatusLink;


#define emberExiDERStatusLinkStructDataIndex 688
#define emberExiDERStatusLinkStructData (emEncoderEvents + emberExiDERStatusLinkStructDataIndex)
#define emberExiCompareStructDERStatusLink(x, y) (emExiCompareStructs(emberExiDERStatusLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERStatusLink(theStruct) (emExiStructMemoryFootprint(emberExiDERStatusLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERStatusLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERStatusLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERStatusLink(EmberExiGeneratedDERStatusLink *data);

// Converts struct to XML
void emberExiToXmlStructDERStatusLink(EmberExiGeneratedDERStatusLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatusLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatusLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The electric potential
// difference between two points.</xs:documentation>
// </xs:annotation>
// Complex type: Voltage
#define emberExiStructVoltageInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedVoltage)))

typedef struct _EmberExiGeneratedVoltage {
  int16u structType;
  unsigned int has_multiplier_option:1;
  unsigned int has_unit_option:1;
  unsigned int has_value_option:1;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier_option; // element
  EmberExiGeneratedUomType unit_option; // element
  EmberExiGeneratedUInt16 value_option; // element
} EmberExiGeneratedVoltage;


#define emberExiVoltageStructDataIndex 2689
#define emberExiVoltageStructData (emEncoderEvents + emberExiVoltageStructDataIndex)
#define emberExiCompareStructVoltage(x, y) (emExiCompareStructs(emberExiVoltageStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructVoltage(theStruct) (emExiStructMemoryFootprint(emberExiVoltageStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructVoltage(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructVoltage(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructVoltage(EmberExiGeneratedVoltage *data);

// Converts struct to XML
void emberExiToXmlStructVoltage(EmberExiGeneratedVoltage *data);

// Writes XML to a string
int emberExiXmlSprintfStructVoltage(int8u *stringBuffer, int offset, EmberExiGeneratedVoltage *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructVoltage(int8u *stringBuffer, int offset, EmberExiGeneratedVoltage *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Real Power, in
// Watts</xs:documentation>
// </xs:annotation>
// Complex type: ActivePower
#define emberExiStructActivePowerInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActivePower)))

typedef struct _EmberExiGeneratedActivePower {
  int16u structType;
  unsigned int has_multiplier_option:1;
  unsigned int has_unit_option:1;
  unsigned int has_value_option:1;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier_option; // element
  EmberExiGeneratedUomType unit_option; // element
  EmberExiGeneratedUInt16 value_option; // element
} EmberExiGeneratedActivePower;


#define emberExiActivePowerStructDataIndex 94
#define emberExiActivePowerStructData (emEncoderEvents + emberExiActivePowerStructDataIndex)
#define emberExiCompareStructActivePower(x, y) (emExiCompareStructs(emberExiActivePowerStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActivePower(theStruct) (emExiStructMemoryFootprint(emberExiActivePowerStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActivePower(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActivePower(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActivePower(EmberExiGeneratedActivePower *data);

// Converts struct to XML
void emberExiToXmlStructActivePower(EmberExiGeneratedActivePower *data);

// Writes XML to a string
int emberExiXmlSprintfStructActivePower(int8u *stringBuffer, int offset, EmberExiGeneratedActivePower *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActivePower(int8u *stringBuffer, int offset, EmberExiGeneratedActivePower *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Distributed energy resource
// information</xs:documentation>
// </xs:annotation>
// Complex type: DER
#define emberExiStructDERInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDER)))

typedef struct _EmberExiGeneratedDER {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:13;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedAmpereHour *ahRating_option; // pointer to ahRating structs
  EmberExiGeneratedDERStatusLink *DERStatusLink; // pointer to DERStatusLink structs
  EmberExiGeneratedVoltage *nominalVoltage; // pointer to nominalVoltage structs
  EmberExiGeneratedActivePower *powerLimit; // pointer to powerLimit structs
  EmberExiGeneratedUInt8 type; // element
} EmberExiGeneratedDER;


#define emberExiDERStructDataIndex 505
#define emberExiDERStructData (emEncoderEvents + emberExiDERStructDataIndex)
#define emberExiCompareStructDER(x, y) (emExiCompareStructs(emberExiDERStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDER(theStruct) (emExiStructMemoryFootprint(emberExiDERStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDER(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDER(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDER(EmberExiGeneratedDER *data);

// Converts struct to XML
void emberExiToXmlStructDER(EmberExiGeneratedDER *data);

// Writes XML to a string
int emberExiXmlSprintfStructDER(int8u *stringBuffer, int offset, EmberExiGeneratedDER *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDER(int8u *stringBuffer, int offset, EmberExiGeneratedDER *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>List of codes indicating the
// quality of the reading, using specification:
// 
// 0 - valid: data that has gone
// through all required validation checks and either passed them all or has been
// verified 
// 7 - manually edited: Replaced or approved by a human
// 8 - estimated
// using reference day: data value was replaced by a machine computed value based
// on analysis of historical data using the same type of measurement.
// 9 - estimated
// using linear interpolation: data value was computed using linear interpolation
// based on the readings before and after it
// 10 - questionable: data that has
// failed one or more checks
// 11 - derived: data that has been calculated (using
// logic or mathematical operations), not necessarily measured directly 
// 12 -
// projected (forecast): data that has been calculated as a projection or forecast
// of future readings</xs:documentation>
// </xs:annotation>
// Complex type: QualityOfReading
typedef EmberExiGeneratedUInt8 EmberExiGeneratedQualityOfReading; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Quality of a specific reading
// value or interval reading value. Note that more than one Quality may be
// applicable to a given Reading. Typically not used unless problems or unusual
// conditions occur (i.e., quality for each Reading is assumed to be 'Good' (valid)
// unless stated otherwise in associated
// ReadingQuality).</xs:documentation>
// </xs:annotation>
// Complex type: ReadingQuality
#define emberExiStructReadingQualityInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingQuality)))

typedef struct _EmberExiGeneratedReadingQuality {
  int16u structType;
  EmberExiGeneratedQualityOfReading quality; // element
} EmberExiGeneratedReadingQuality;


#define emberExiReadingQualityStructDataIndex 1990
#define emberExiReadingQualityStructData (emEncoderEvents + emberExiReadingQualityStructDataIndex)
#define emberExiCompareStructReadingQuality(x, y) (emExiCompareStructs(emberExiReadingQualityStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingQuality(theStruct) (emExiStructMemoryFootprint(emberExiReadingQualityStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingQuality(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingQuality(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingQuality(EmberExiGeneratedReadingQuality *data);

// Converts struct to XML
void emberExiToXmlStructReadingQuality(EmberExiGeneratedReadingQuality *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingQuality(int8u *stringBuffer, int offset, EmberExiGeneratedReadingQuality *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingQuality(int8u *stringBuffer, int offset, EmberExiGeneratedReadingQuality *data);

// Struct comparison function
;


// Built-in type: Int32u
typedef int32u EmberExiGeneratedInt32u;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unsigned integer, max
// inclusive 281474976710655 (2^48-1)</xs:documentation>
// </xs:annotation>
// Simple type: UInt48
typedef EmberExiGeneratedInt32u EmberExiGeneratedUInt48;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specific value measured by a
// meter or other asset. Each Reading is of the type indicated by the ReadingType
// associated with the containing MeterReading.</xs:documentation>
// </xs:annotation>
// Complex type: Reading
#define emberExiStructReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReading)))

typedef struct _EmberExiGeneratedReading {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_timeStamp_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  int8u ReadingQuality_count; // number of ReadingQuality structs
  EmberExiGeneratedReadingQuality *ReadingQuality_array; // pointer to ReadingQuality structs
  EmberExiGeneratedTimeType timeStamp_option; // element
  EmberExiGeneratedUInt48 value; // element
} EmberExiGeneratedReading;


#define emberExiReadingStructDataIndex 1954
#define emberExiReadingStructData (emEncoderEvents + emberExiReadingStructDataIndex)
#define emberExiCompareStructReading(x, y) (emExiCompareStructs(emberExiReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReading(theStruct) (emExiStructMemoryFootprint(emberExiReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReading(EmberExiGeneratedReading *data);

// Converts struct to XML
void emberExiToXmlStructReading(EmberExiGeneratedReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructReading(int8u *stringBuffer, int offset, EmberExiGeneratedReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReading(int8u *stringBuffer, int offset, EmberExiGeneratedReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Holds the information related
// to a client subscription to receive updates to a resource
// automatically.</xs:documentation>
// </xs:annotation>
// Complex type: Notification
#define emberExiStructNotificationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNotification)))

typedef struct _EmberExiGeneratedNotification {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString resource; // element
  EmberExiGeneratedResource *Resource_option; // pointer to Resource structs
  EmberExiGeneratedString subscriptionURI; // element
} EmberExiGeneratedNotification;


#define emberExiNotificationStructDataIndex 1636
#define emberExiNotificationStructData (emEncoderEvents + emberExiNotificationStructDataIndex)
#define emberExiCompareStructNotification(x, y) (emExiCompareStructs(emberExiNotificationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructNotification(theStruct) (emExiStructMemoryFootprint(emberExiNotificationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructNotification(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructNotification(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructNotification(EmberExiGeneratedNotification *data);

// Converts struct to XML
void emberExiToXmlStructNotification(EmberExiGeneratedNotification *data);

// Writes XML to a string
int emberExiXmlSprintfStructNotification(int8u *stringBuffer, int offset, EmberExiGeneratedNotification *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructNotification(int8u *stringBuffer, int offset, EmberExiGeneratedNotification *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Container to hold a collection
// of object instances or references.</xs:documentation>
// </xs:annotation>
// Complex type: List
#define emberExiStructListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedList)))

typedef struct _EmberExiGeneratedList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
} EmberExiGeneratedList;


#define emberExiListStructDataIndex 1330
#define emberExiListStructData (emEncoderEvents + emberExiListStructDataIndex)
#define emberExiCompareStructList(x, y) (emExiCompareStructs(emberExiListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructList(theStruct) (emExiStructMemoryFootprint(emberExiListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructList(EmberExiGeneratedList *data);

// Converts struct to XML
void emberExiToXmlStructList(EmberExiGeneratedList *data);

// Writes XML to a string
int emberExiXmlSprintfStructList(int8u *stringBuffer, int offset, EmberExiGeneratedList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructList(int8u *stringBuffer, int offset, EmberExiGeneratedList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// Notification objects.</xs:documentation>
// </xs:annotation>
// Complex type: NotificationList
#define emberExiStructNotificationListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNotificationList)))

typedef struct _EmberExiGeneratedNotificationList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u Notification_count; // number of Notification structs
  EmberExiGeneratedNotification *Notification_array; // pointer to Notification structs
} EmberExiGeneratedNotificationList;


#define emberExiNotificationListStructDataIndex 1654
#define emberExiNotificationListStructData (emEncoderEvents + emberExiNotificationListStructDataIndex)
#define emberExiCompareStructNotificationList(x, y) (emExiCompareStructs(emberExiNotificationListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructNotificationList(theStruct) (emExiStructMemoryFootprint(emberExiNotificationListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructNotificationList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructNotificationList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructNotificationList(EmberExiGeneratedNotificationList *data);

// Converts struct to XML
void emberExiToXmlStructNotificationList(EmberExiGeneratedNotificationList *data);

// Writes XML to a string
int emberExiXmlSprintfStructNotificationList(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructNotificationList(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A 16-bit field encoded as a
// hex string (4 characters / 2 octets)</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary16
typedef struct {
  int8u length;
  int8u bytes[2];
} EmberExiGeneratedHexBinary16;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// CustomerAccount.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAccountLink
#define emberExiStructCustomerAccountLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAccountLink)))

typedef struct _EmberExiGeneratedCustomerAccountLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedCustomerAccountLink;


#define emberExiCustomerAccountLinkStructDataIndex 499
#define emberExiCustomerAccountLinkStructData (emEncoderEvents + emberExiCustomerAccountLinkStructDataIndex)
#define emberExiCompareStructCustomerAccountLink(x, y) (emExiCompareStructs(emberExiCustomerAccountLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCustomerAccountLink(theStruct) (emExiStructMemoryFootprint(emberExiCustomerAccountLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCustomerAccountLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCustomerAccountLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCustomerAccountLink(EmberExiGeneratedCustomerAccountLink *data);

// Converts struct to XML
void emberExiToXmlStructCustomerAccountLink(EmberExiGeneratedCustomerAccountLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructCustomerAccountLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCustomerAccountLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// LoadShedAvailability instances.</xs:documentation>
// </xs:annotation>
// Complex type: LoadShedAvailabilityListLink
#define emberExiStructLoadShedAvailabilityListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLoadShedAvailabilityListLink)))

typedef struct _EmberExiGeneratedLoadShedAvailabilityListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedLoadShedAvailabilityListLink;


#define emberExiLoadShedAvailabilityListLinkStructDataIndex 1408
#define emberExiLoadShedAvailabilityListLinkStructData (emEncoderEvents + emberExiLoadShedAvailabilityListLinkStructDataIndex)
#define emberExiCompareStructLoadShedAvailabilityListLink(x, y) (emExiCompareStructs(emberExiLoadShedAvailabilityListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLoadShedAvailabilityListLink(theStruct) (emExiStructMemoryFootprint(emberExiLoadShedAvailabilityListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLoadShedAvailabilityListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLoadShedAvailabilityListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLoadShedAvailabilityListLink(EmberExiGeneratedLoadShedAvailabilityListLink *data);

// Converts struct to XML
void emberExiToXmlStructLoadShedAvailabilityListLink(EmberExiGeneratedLoadShedAvailabilityListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructLoadShedAvailabilityListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLoadShedAvailabilityListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// MeterReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingListLink
#define emberExiStructMeterReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingListLink)))

typedef struct _EmberExiGeneratedMeterReadingListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedMeterReadingListLink;


#define emberExiMeterReadingListLinkStructDataIndex 1543
#define emberExiMeterReadingListLinkStructData (emEncoderEvents + emberExiMeterReadingListLinkStructDataIndex)
#define emberExiCompareStructMeterReadingListLink(x, y) (emExiCompareStructs(emberExiMeterReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMeterReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiMeterReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMeterReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMeterReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMeterReadingListLink(EmberExiGeneratedMeterReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructMeterReadingListLink(EmberExiGeneratedMeterReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructMeterReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMeterReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// Prepayment.</xs:documentation>
// </xs:annotation>
// Complex type: PrepaymentLink
#define emberExiStructPrepaymentLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepaymentLink)))

typedef struct _EmberExiGeneratedPrepaymentLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedPrepaymentLink;


#define emberExiPrepaymentLinkStructDataIndex 1843
#define emberExiPrepaymentLinkStructData (emEncoderEvents + emberExiPrepaymentLinkStructDataIndex)
#define emberExiCompareStructPrepaymentLink(x, y) (emExiCompareStructs(emberExiPrepaymentLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPrepaymentLink(theStruct) (emExiStructMemoryFootprint(emberExiPrepaymentLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPrepaymentLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPrepaymentLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPrepaymentLink(EmberExiGeneratedPrepaymentLink *data);

// Converts struct to XML
void emberExiToXmlStructPrepaymentLink(EmberExiGeneratedPrepaymentLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructPrepaymentLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPrepaymentLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Service kind
// 0 - electricity
// 1
// - gas
// 2 - water
// 4 - pressure
// 5 - heat
// 6 - cold
// 7 - communication
// 8 -
// time</xs:documentation>
// </xs:annotation>
// Complex type: ServiceKind
typedef EmberExiGeneratedUInt8 EmberExiGeneratedServiceKind; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Category of service provided
// to the customer.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceCategory
#define emberExiStructServiceCategoryInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceCategory)))

typedef struct _EmberExiGeneratedServiceCategory {
  int16u structType;
  EmberExiGeneratedServiceKind kind; // element
} EmberExiGeneratedServiceCategory;


#define emberExiServiceCategoryStructDataIndex 2164
#define emberExiServiceCategoryStructData (emEncoderEvents + emberExiServiceCategoryStructDataIndex)
#define emberExiCompareStructServiceCategory(x, y) (emExiCompareStructs(emberExiServiceCategoryStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructServiceCategory(theStruct) (emExiStructMemoryFootprint(emberExiServiceCategoryStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructServiceCategory(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructServiceCategory(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructServiceCategory(EmberExiGeneratedServiceCategory *data);

// Converts struct to XML
void emberExiToXmlStructServiceCategory(EmberExiGeneratedServiceCategory *data);

// Writes XML to a string
int emberExiXmlSprintfStructServiceCategory(int8u *stringBuffer, int offset, EmberExiGeneratedServiceCategory *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructServiceCategory(int8u *stringBuffer, int offset, EmberExiGeneratedServiceCategory *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Logical point on a network at
// which consumption or production is either physically measured (e.g. metered) or
// estimated (e.g. unmetered street lights).</xs:documentation>
// </xs:annotation>
// Complex type: UsagePointBase
#define emberExiStructUsagePointBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePointBase)))

typedef struct _EmberExiGeneratedUsagePointBase {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedHexBinary16 roleFlags; // element
  EmberExiGeneratedUInt8 status; // element
} EmberExiGeneratedUsagePointBase;


#define emberExiUsagePointBaseStructDataIndex 2653
#define emberExiUsagePointBaseStructData (emEncoderEvents + emberExiUsagePointBaseStructDataIndex)
#define emberExiCompareStructUsagePointBase(x, y) (emExiCompareStructs(emberExiUsagePointBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructUsagePointBase(theStruct) (emExiStructMemoryFootprint(emberExiUsagePointBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructUsagePointBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructUsagePointBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructUsagePointBase(EmberExiGeneratedUsagePointBase *data);

// Converts struct to XML
void emberExiToXmlStructUsagePointBase(EmberExiGeneratedUsagePointBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructUsagePointBase(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructUsagePointBase(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointBase *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Logical point on a network at
// which consumption or production is either physically measured (e.g. metered) or
// estimated (e.g. unmetered street lights).</xs:documentation>
// </xs:annotation>
// Complex type: UsagePoint
#define emberExiStructUsagePointInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePoint)))

typedef struct _EmberExiGeneratedUsagePoint {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedHexBinary16 roleFlags; // element
  EmberExiGeneratedUInt8 status; // element
  EmberExiGeneratedCustomerAccountLink *CustomerAccountLink_option; // pointer to CustomerAccountLink structs
  EmberExiGeneratedLoadShedAvailabilityListLink *LoadShedAvailabilityListLink_option; // pointer to LoadShedAvailabilityListLink structs
  EmberExiGeneratedMeterReadingListLink *MeterReadingListLink_option; // pointer to MeterReadingListLink structs
  EmberExiGeneratedPrepaymentLink *PrepaymentLink_option; // pointer to PrepaymentLink structs
  EmberExiGeneratedServiceCategory *ServiceCategory; // pointer to ServiceCategory structs
} EmberExiGeneratedUsagePoint;


#define emberExiUsagePointStructDataIndex 2617
#define emberExiUsagePointStructData (emEncoderEvents + emberExiUsagePointStructDataIndex)
#define emberExiCompareStructUsagePoint(x, y) (emExiCompareStructs(emberExiUsagePointStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructUsagePoint(theStruct) (emExiStructMemoryFootprint(emberExiUsagePointStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructUsagePoint(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructUsagePoint(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructUsagePoint(EmberExiGeneratedUsagePoint *data);

// Converts struct to XML
void emberExiToXmlStructUsagePoint(EmberExiGeneratedUsagePoint *data);

// Writes XML to a string
int emberExiXmlSprintfStructUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePoint *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePoint *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The status type values 
// 
// 0 -
// Reserved 
// 1 - Message Received 
// 2 - Event Started 
// 3 - Event Completed 
// 4 - User
// has chosen to “Opt-Out”, user will not participate in this event
// 5 - User has
// chosen to “Opt-In”, user will participate in this event
// 6 - The event has been
// cancelled
// 7 - The event has been superseded
// 8 - Event partially completed with
// User “Opt-Out”.
// 9 - Event partially completed due to User “Opt-In”
// 10 - Event
// completed, no User participation (Previous “Opt-Out”)
// 11 - User has acknowledged
// the message.
// 12-247 - Reserved
// 
// 248 - Rejected - Invalid Cancel Command
// (Default)
// 249 - Rejected - Invalid Cancel Command (Invalid Effective Time)
// 250 -
// Reserved
// 251 - Rejected - Event was received after it had expired (Current Time
// &amp;gt; Start Time 0 - +Duration)
// 252 - Reserved
// 253 - Rejected - Invalid
// Cancel Command (Undefined Event)
// 254 - Load Control Event command Rejected
// 255 -
// Reserved</xs:documentation>
// </xs:annotation>
// Complex type: StatusType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedStatusType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Product of RMS value of the
// voltage and the RMS value of the in-phase component of the
// current</xs:documentation>
// </xs:annotation>
// Complex type: ActivePowerChargeRate
#define emberExiStructActivePowerChargeRateInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActivePowerChargeRate)))

typedef struct _EmberExiGeneratedActivePowerChargeRate {
  int16u structType;
  unsigned int has_multiplier_option:1;
  unsigned int has_unit_option:1;
  unsigned int has_value_option:1;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier_option; // element
  EmberExiGeneratedUomType unit_option; // element
  EmberExiGeneratedUInt16 value_option; // element
} EmberExiGeneratedActivePowerChargeRate;


#define emberExiActivePowerChargeRateStructDataIndex 109
#define emberExiActivePowerChargeRateStructData (emEncoderEvents + emberExiActivePowerChargeRateStructDataIndex)
#define emberExiCompareStructActivePowerChargeRate(x, y) (emExiCompareStructs(emberExiActivePowerChargeRateStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActivePowerChargeRate(theStruct) (emExiStructMemoryFootprint(emberExiActivePowerChargeRateStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActivePowerChargeRate(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActivePowerChargeRate(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActivePowerChargeRate(EmberExiGeneratedActivePowerChargeRate *data);

// Converts struct to XML
void emberExiToXmlStructActivePowerChargeRate(EmberExiGeneratedActivePowerChargeRate *data);

// Writes XML to a string
int emberExiXmlSprintfStructActivePowerChargeRate(int8u *stringBuffer, int offset, EmberExiGeneratedActivePowerChargeRate *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActivePowerChargeRate(int8u *stringBuffer, int offset, EmberExiGeneratedActivePowerChargeRate *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// TargetReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: TargetReadingListLink
#define emberExiStructTargetReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTargetReadingListLink)))

typedef struct _EmberExiGeneratedTargetReadingListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTargetReadingListLink;


#define emberExiTargetReadingListLinkStructDataIndex 2386
#define emberExiTargetReadingListLinkStructData (emEncoderEvents + emberExiTargetReadingListLinkStructDataIndex)
#define emberExiCompareStructTargetReadingListLink(x, y) (emExiCompareStructs(emberExiTargetReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTargetReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiTargetReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTargetReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTargetReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTargetReadingListLink(EmberExiGeneratedTargetReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructTargetReadingListLink(EmberExiGeneratedTargetReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Kind of charge.
// 0 -
// Consumption Charge
// 1 - Rebate 
// 2 - Auxiliary Charge
// 3 - Demand Charge
// 4 - Tax
// Charge</xs:documentation>
// </xs:annotation>
// Complex type: ChargeKind
typedef EmberExiGeneratedUInt8 EmberExiGeneratedChargeKind; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Carbon Dioxide emissions,
// in grams per unit
// 1 - Sulfur Dioxide emissions, in grams per unit
// 2 - Nitrogen
// Oxides emissions, in grams per unit
// 3 - Renewable generation, as a percentage of
// overall generation</xs:documentation>
// </xs:annotation>
// Complex type: CostKindType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCostKindType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A cost element, typically used
// for environmental costs.</xs:documentation>
// </xs:annotation>
// Complex type: Cost
#define emberExiStructCostInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCost)))

typedef struct _EmberExiGeneratedCost {
  int16u structType;
  EmberExiGeneratedUInt32 amount; // element
  EmberExiGeneratedCostKindType costKind; // element
} EmberExiGeneratedCost;


#define emberExiCostStructDataIndex 379
#define emberExiCostStructData (emEncoderEvents + emberExiCostStructDataIndex)
#define emberExiCompareStructCost(x, y) (emExiCompareStructs(emberExiCostStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCost(theStruct) (emExiStructMemoryFootprint(emberExiCostStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCost(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCost(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCost(EmberExiGeneratedCost *data);

// Converts struct to XML
void emberExiToXmlStructCost(EmberExiGeneratedCost *data);

// Writes XML to a string
int emberExiXmlSprintfStructCost(int8u *stringBuffer, int offset, EmberExiGeneratedCost *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCost(int8u *stringBuffer, int offset, EmberExiGeneratedCost *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>One of a sequence of
// thresholds defined in terms of consumption quantity of a service such as
// electricity, water, gas, etc. It defines the steps or blocks in a step tariff
// structure, where startValue simultaneously defines the entry value of this step
// and the closing value of the previous step. Where consumption is &amp;gt;=
// startValue it falls within this block and where consumption is &amp;lt;
// startValue it falls within the previous
// block.</xs:documentation>
// </xs:annotation>
// Complex type: ConsumptionTariffInterval
#define emberExiStructConsumptionTariffIntervalInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConsumptionTariffInterval)))

typedef struct _EmberExiGeneratedConsumptionTariffInterval {
  int16u structType;
  unsigned int has_price_option:1;
  int8u Cost_count; // number of Cost structs
  EmberExiGeneratedCost *Cost_array; // pointer to Cost structs
  EmberExiGeneratedUInt32 price_option; // element
  EmberExiGeneratedUInt48 startValue; // element
} EmberExiGeneratedConsumptionTariffInterval;


#define emberExiConsumptionTariffIntervalStructDataIndex 361
#define emberExiConsumptionTariffIntervalStructData (emEncoderEvents + emberExiConsumptionTariffIntervalStructDataIndex)
#define emberExiCompareStructConsumptionTariffInterval(x, y) (emExiCompareStructs(emberExiConsumptionTariffIntervalStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructConsumptionTariffInterval(theStruct) (emExiStructMemoryFootprint(emberExiConsumptionTariffIntervalStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructConsumptionTariffInterval(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructConsumptionTariffInterval(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructConsumptionTariffInterval(EmberExiGeneratedConsumptionTariffInterval *data);

// Converts struct to XML
void emberExiToXmlStructConsumptionTariffInterval(EmberExiGeneratedConsumptionTariffInterval *data);

// Writes XML to a string
int emberExiXmlSprintfStructConsumptionTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffInterval *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructConsumptionTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffInterval *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A signed time offset,
// typically applied to a Time value, expressed in
// seconds.</xs:documentation>
// </xs:annotation>
// Simple type: TimeOffsetType
typedef EmberExiGeneratedInteger EmberExiGeneratedTimeOffsetType;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Interval of date and
// time.</xs:documentation>
// </xs:annotation>
// Complex type: DateTimeInterval
#define emberExiStructDateTimeIntervalInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDateTimeInterval)))

typedef struct _EmberExiGeneratedDateTimeInterval {
  int16u structType;
  unsigned int flagPadding:2;
  EmberExiGeneratedUInt32 duration; // element
  EmberExiGeneratedTimeType start; // element
} EmberExiGeneratedDateTimeInterval;


#define emberExiDateTimeIntervalStructDataIndex 694
#define emberExiDateTimeIntervalStructData (emEncoderEvents + emberExiDateTimeIntervalStructDataIndex)
#define emberExiCompareStructDateTimeInterval(x, y) (emExiCompareStructs(emberExiDateTimeIntervalStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDateTimeInterval(theStruct) (emExiStructMemoryFootprint(emberExiDateTimeIntervalStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDateTimeInterval(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDateTimeInterval(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data);

// Converts struct to XML
void emberExiToXmlStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data);

// Writes XML to a string
int emberExiXmlSprintfStructDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedDateTimeInterval *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedDateTimeInterval *data);

// Struct comparison function
;


// Complex type: RandomizedDateTimeInterval
#define emberExiStructRandomizedDateTimeIntervalInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRandomizedDateTimeInterval)))

typedef struct _EmberExiGeneratedRandomizedDateTimeInterval {
  int16u structType;
  unsigned int has_randomizeEnd_option:1;
  unsigned int has_randomizeStart_option:1;
  EmberExiGeneratedUInt32 duration; // element
  EmberExiGeneratedTimeType start; // element
  EmberExiGeneratedTimeOffsetType randomizeEnd_option; // element
  EmberExiGeneratedTimeOffsetType randomizeStart_option; // element
} EmberExiGeneratedRandomizedDateTimeInterval;


#define emberExiRandomizedDateTimeIntervalStructDataIndex 1897
#define emberExiRandomizedDateTimeIntervalStructData (emEncoderEvents + emberExiRandomizedDateTimeIntervalStructDataIndex)
#define emberExiCompareStructRandomizedDateTimeInterval(x, y) (emExiCompareStructs(emberExiRandomizedDateTimeIntervalStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRandomizedDateTimeInterval(theStruct) (emExiStructMemoryFootprint(emberExiRandomizedDateTimeIntervalStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRandomizedDateTimeInterval(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRandomizedDateTimeInterval(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRandomizedDateTimeInterval(EmberExiGeneratedRandomizedDateTimeInterval *data);

// Converts struct to XML
void emberExiToXmlStructRandomizedDateTimeInterval(EmberExiGeneratedRandomizedDateTimeInterval *data);

// Writes XML to a string
int emberExiXmlSprintfStructRandomizedDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizedDateTimeInterval *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRandomizedDateTimeInterval(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizedDateTimeInterval *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>One of a sequence of time
// intervals defined in terms of real time. It is typically used in association
// with TariffProfile to define the intervals in a time of use tariff structure,
// where startDateTime simultaneously determines the starting point of this
// interval and the ending point of the previous
// interval.</xs:documentation>
// </xs:annotation>
// Complex type: TimeTariffInterval
#define emberExiStructTimeTariffIntervalInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeTariffInterval)))

typedef struct _EmberExiGeneratedTimeTariffInterval {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  int8u ConsumptionTariffInterval_count; // number of ConsumptionTariffInterval structs
  EmberExiGeneratedConsumptionTariffInterval *ConsumptionTariffInterval_array; // pointer to ConsumptionTariffInterval structs
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedRandomizedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedBoolean isActive; // element
  EmberExiGeneratedUInt8 numPriceLevels; // element
  EmberExiGeneratedUInt8 priceLevel; // element
} EmberExiGeneratedTimeTariffInterval;


#define emberExiTimeTariffIntervalStructDataIndex 2569
#define emberExiTimeTariffIntervalStructData (emEncoderEvents + emberExiTimeTariffIntervalStructDataIndex)
#define emberExiCompareStructTimeTariffInterval(x, y) (emExiCompareStructs(emberExiTimeTariffIntervalStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTimeTariffInterval(theStruct) (emExiStructMemoryFootprint(emberExiTimeTariffIntervalStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTimeTariffInterval(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTimeTariffInterval(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTimeTariffInterval(EmberExiGeneratedTimeTariffInterval *data);

// Converts struct to XML
void emberExiToXmlStructTimeTariffInterval(EmberExiGeneratedTimeTariffInterval *data);

// Writes XML to a string
int emberExiXmlSprintfStructTimeTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffInterval *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTimeTariffInterval(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffInterval *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 2 =
// Average
// 8 = Maximum
// 9 = Minimum
// 12 = Normal</xs:documentation>
// </xs:annotation>
// Complex type: DataQualifierType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedDataQualifierType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The offset types defined for
// offset targets.
// 0 - Cooling Offset 
// 1 - Heating Offset 
// 2 - Load Adjustment
// Percentage</xs:documentation>
// </xs:annotation>
// Complex type: OffsetType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedOffsetType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>If a temperature offset is
// applied, the value attribute will be calculated as follows: 
// Temperature offset
// (Delta Temperature) in degrees Celsius, as follows: Delta Temperature Offset /
// 10 = delta temperature in degrees Celsius where 0.0°C &amp;lt;= temperature
// &amp;lt;= 25.4 ºC, corresponding to a Temperature in the range 0x00 to 0xFE. 
// The maximum resolution this format allows is 0.1 ºC
// If a Load Adjustment
// Percentage is applied, the value attribute will be calculated as follows: 
// A 10%
// load adjustment percentage will establish an energy usage limit equal to 90% of
// the client implementation’s specific average energy usage.  Each load adjustment
// percentage is referenced to the client implementation’s specific average energy
// usage.  There are no cumulative effects.  Range of the value is 0 to
// 100.</xs:documentation>
// </xs:annotation>
// Complex type: Offset
#define emberExiStructOffsetInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedOffset)))

typedef struct _EmberExiGeneratedOffset {
  int16u structType;
  EmberExiGeneratedOffsetType type; // element
  EmberExiGeneratedUInt8 value; // element
} EmberExiGeneratedOffset;


#define emberExiOffsetStructDataIndex 1672
#define emberExiOffsetStructData (emEncoderEvents + emberExiOffsetStructDataIndex)
#define emberExiCompareStructOffset(x, y) (emExiCompareStructs(emberExiOffsetStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructOffset(theStruct) (emExiStructMemoryFootprint(emberExiOffsetStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructOffset(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructOffset(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructOffset(EmberExiGeneratedOffset *data);

// Converts struct to XML
void emberExiToXmlStructOffset(EmberExiGeneratedOffset *data);

// Writes XML to a string
int emberExiXmlSprintfStructOffset(int8u *stringBuffer, int offset, EmberExiGeneratedOffset *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructOffset(int8u *stringBuffer, int offset, EmberExiGeneratedOffset *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// BillingPeriod instances.</xs:documentation>
// </xs:annotation>
// Complex type: BillingPeriodListLink
#define emberExiStructBillingPeriodListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingPeriodListLink)))

typedef struct _EmberExiGeneratedBillingPeriodListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedBillingPeriodListLink;


#define emberExiBillingPeriodListLinkStructDataIndex 193
#define emberExiBillingPeriodListLinkStructData (emEncoderEvents + emberExiBillingPeriodListLinkStructDataIndex)
#define emberExiCompareStructBillingPeriodListLink(x, y) (emExiCompareStructs(emberExiBillingPeriodListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingPeriodListLink(theStruct) (emExiStructMemoryFootprint(emberExiBillingPeriodListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingPeriodListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingPeriodListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingPeriodListLink(EmberExiGeneratedBillingPeriodListLink *data);

// Converts struct to XML
void emberExiToXmlStructBillingPeriodListLink(EmberExiGeneratedBillingPeriodListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains the object instances
// from the list where the current time is within the interval of the
// object.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveTextMessageListLink
#define emberExiStructActiveTextMessageListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveTextMessageListLink)))

typedef struct _EmberExiGeneratedActiveTextMessageListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveTextMessageListLink;


#define emberExiActiveTextMessageListLinkStructDataIndex 142
#define emberExiActiveTextMessageListLinkStructData (emEncoderEvents + emberExiActiveTextMessageListLinkStructDataIndex)
#define emberExiCompareStructActiveTextMessageListLink(x, y) (emExiCompareStructs(emberExiActiveTextMessageListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveTextMessageListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveTextMessageListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveTextMessageListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveTextMessageListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTextMessageListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTextMessageListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// Charger.</xs:documentation>
// </xs:annotation>
// Complex type: ChargerLink
#define emberExiStructChargerLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargerLink)))

typedef struct _EmberExiGeneratedChargerLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedChargerLink;


#define emberExiChargerLinkStructDataIndex 292
#define emberExiChargerLinkStructData (emEncoderEvents + emberExiChargerLinkStructDataIndex)
#define emberExiCompareStructChargerLink(x, y) (emExiCompareStructs(emberExiChargerLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargerLink(theStruct) (emExiStructMemoryFootprint(emberExiChargerLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargerLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargerLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargerLink(EmberExiGeneratedChargerLink *data);

// Converts struct to XML
void emberExiToXmlStructChargerLink(EmberExiGeneratedChargerLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargerLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargerLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Requested
// 1 - Pending
// 2 -
// Approved
// 3 - Revoked</xs:documentation>
// </xs:annotation>
// Complex type: ReservationStatusType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedReservationStatusType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Description of anything that
// changes through time. Time schedule is used to perform a single-valued function
// of time. Use inherited 'category' attribute to give additional information on
// this schedule, such as: periodic (hourly, daily, weekly, monthly, etc.), day of
// the month, by date, calendar (specific times and
// dates).</xs:documentation>
// </xs:annotation>
// Complex type: ChargeReservation
#define emberExiStructChargeReservationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargeReservation)))

typedef struct _EmberExiGeneratedChargeReservation {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedChargerLink *ChargerLink_option; // pointer to ChargerLink structs
  EmberExiGeneratedDateTimeInterval *scheduledInterval; // pointer to scheduledInterval structs
  EmberExiGeneratedReservationStatusType status; // element
} EmberExiGeneratedChargeReservation;


#define emberExiChargeReservationStructDataIndex 226
#define emberExiChargeReservationStructData (emEncoderEvents + emberExiChargeReservationStructDataIndex)
#define emberExiCompareStructChargeReservation(x, y) (emExiCompareStructs(emberExiChargeReservationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargeReservation(theStruct) (emExiStructMemoryFootprint(emberExiChargeReservationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargeReservation(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargeReservation(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargeReservation(EmberExiGeneratedChargeReservation *data);

// Converts struct to XML
void emberExiToXmlStructChargeReservation(EmberExiGeneratedChargeReservation *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargeReservation(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservation *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargeReservation(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservation *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// ChargeReservation objects.</xs:documentation>
// </xs:annotation>
// Complex type: ChargeReservationList
#define emberExiStructChargeReservationListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargeReservationList)))

typedef struct _EmberExiGeneratedChargeReservationList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u ChargeReservation_count; // number of ChargeReservation structs
  EmberExiGeneratedChargeReservation *ChargeReservation_array; // pointer to ChargeReservation structs
} EmberExiGeneratedChargeReservationList;


#define emberExiChargeReservationListStructDataIndex 247
#define emberExiChargeReservationListStructData (emEncoderEvents + emberExiChargeReservationListStructDataIndex)
#define emberExiCompareStructChargeReservationList(x, y) (emExiCompareStructs(emberExiChargeReservationListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargeReservationList(theStruct) (emExiStructMemoryFootprint(emberExiChargeReservationListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargeReservationList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargeReservationList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargeReservationList(EmberExiGeneratedChargeReservationList *data);

// Converts struct to XML
void emberExiToXmlStructChargeReservationList(EmberExiGeneratedChargeReservationList *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargeReservationList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargeReservationList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeReservationList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains the object instances
// from the list where the current time is within the interval of the
// object.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveEndDeviceControlListLink
#define emberExiStructActiveEndDeviceControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveEndDeviceControlListLink)))

typedef struct _EmberExiGeneratedActiveEndDeviceControlListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveEndDeviceControlListLink;


#define emberExiActiveEndDeviceControlListLinkStructDataIndex 88
#define emberExiActiveEndDeviceControlListLinkStructData (emEncoderEvents + emberExiActiveEndDeviceControlListLinkStructDataIndex)
#define emberExiCompareStructActiveEndDeviceControlListLink(x, y) (emExiCompareStructs(emberExiActiveEndDeviceControlListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveEndDeviceControlListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveEndDeviceControlListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveEndDeviceControlListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveEndDeviceControlListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveEndDeviceControlListLink(EmberExiGeneratedActiveEndDeviceControlListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveEndDeviceControlListLink(EmberExiGeneratedActiveEndDeviceControlListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveEndDeviceControlListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveEndDeviceControlListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// EndDeviceControl instances.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceControlListLink
#define emberExiStructEndDeviceControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceControlListLink)))

typedef struct _EmberExiGeneratedEndDeviceControlListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedEndDeviceControlListLink;


#define emberExiEndDeviceControlListLinkStructDataIndex 1072
#define emberExiEndDeviceControlListLinkStructData (emEncoderEvents + emberExiEndDeviceControlListLinkStructDataIndex)
#define emberExiCompareStructEndDeviceControlListLink(x, y) (emExiCompareStructs(emberExiEndDeviceControlListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceControlListLink(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceControlListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceControlListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceControlListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceControlListLink(EmberExiGeneratedEndDeviceControlListLink *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceControlListLink(EmberExiGeneratedEndDeviceControlListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceControlListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Demand response
// program.</xs:documentation>
// </xs:annotation>
// Complex type: DemandResponseProgram
#define emberExiStructDemandResponseProgramInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDemandResponseProgram)))

typedef struct _EmberExiGeneratedDemandResponseProgram {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedActiveEndDeviceControlListLink *ActiveEndDeviceControlListLink_option; // pointer to ActiveEndDeviceControlListLink structs
  EmberExiGeneratedEndDeviceControlListLink *EndDeviceControlListLink_option; // pointer to EndDeviceControlListLink structs
  EmberExiGeneratedPrimacyType primacy; // element
} EmberExiGeneratedDemandResponseProgram;


#define emberExiDemandResponseProgramStructDataIndex 706
#define emberExiDemandResponseProgramStructData (emEncoderEvents + emberExiDemandResponseProgramStructDataIndex)
#define emberExiCompareStructDemandResponseProgram(x, y) (emExiCompareStructs(emberExiDemandResponseProgramStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDemandResponseProgram(theStruct) (emExiStructMemoryFootprint(emberExiDemandResponseProgramStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDemandResponseProgram(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDemandResponseProgram(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDemandResponseProgram(EmberExiGeneratedDemandResponseProgram *data);

// Converts struct to XML
void emberExiToXmlStructDemandResponseProgram(EmberExiGeneratedDemandResponseProgram *data);

// Writes XML to a string
int emberExiXmlSprintfStructDemandResponseProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgram *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDemandResponseProgram(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgram *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// DemandResponseProgram objects.</xs:documentation>
// </xs:annotation>
// Complex type: DemandResponseProgramList
#define emberExiStructDemandResponseProgramListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDemandResponseProgramList)))

typedef struct _EmberExiGeneratedDemandResponseProgramList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u DemandResponseProgram_count; // number of DemandResponseProgram structs
  EmberExiGeneratedDemandResponseProgram *DemandResponseProgram_array; // pointer to DemandResponseProgram structs
} EmberExiGeneratedDemandResponseProgramList;


#define emberExiDemandResponseProgramListStructDataIndex 733
#define emberExiDemandResponseProgramListStructData (emEncoderEvents + emberExiDemandResponseProgramListStructDataIndex)
#define emberExiCompareStructDemandResponseProgramList(x, y) (emExiCompareStructs(emberExiDemandResponseProgramListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDemandResponseProgramList(theStruct) (emExiStructMemoryFootprint(emberExiDemandResponseProgramListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDemandResponseProgramList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDemandResponseProgramList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDemandResponseProgramList(EmberExiGeneratedDemandResponseProgramList *data);

// Converts struct to XML
void emberExiToXmlStructDemandResponseProgramList(EmberExiGeneratedDemandResponseProgramList *data);

// Writes XML to a string
int emberExiXmlSprintfStructDemandResponseProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDemandResponseProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Credit Ok
// 1 - Credit Low
// 2
// - Credit Exhausted
// 3 - Credit Negative</xs:documentation>
// </xs:annotation>
// Complex type: CreditStatusType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCreditStatusType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Normally 0 - 100 on a defined
// base</xs:documentation>
// </xs:annotation>
// Complex type: PerCent
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPerCent; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Current distributed energy
// resource status</xs:documentation>
// </xs:annotation>
// Complex type: DERStatus
#define emberExiStructDERStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERStatus)))

typedef struct _EmberExiGeneratedDERStatus {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_status_option:1;
  unsigned int has_testResult_option:1;
  unsigned int has_voltageHigh_option:1;
  unsigned int has_voltageLow_option:1;
  unsigned int flagPadding:8;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedUInt32 estimatedTimeRemaining; // element
  EmberExiGeneratedPerCent stateOfCharge; // element
  EmberExiGeneratedUInt8 status_option; // element
  EmberExiGeneratedTimeType statusTime; // element
  EmberExiGeneratedUInt8 testResult_option; // element
  EmberExiGeneratedBoolean voltageHigh_option; // element
  EmberExiGeneratedBoolean voltageLow_option; // element
} EmberExiGeneratedDERStatus;


#define emberExiDERStatusStructDataIndex 661
#define emberExiDERStatusStructData (emEncoderEvents + emberExiDERStatusStructDataIndex)
#define emberExiCompareStructDERStatus(x, y) (emExiCompareStructs(emberExiDERStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERStatus(theStruct) (emExiStructMemoryFootprint(emberExiDERStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERStatus(EmberExiGeneratedDERStatus *data);

// Converts struct to XML
void emberExiToXmlStructDERStatus(EmberExiGeneratedDERStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDERStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The unit types defined for end
// device control target reductions.
// 0 - kWh 
// 1 - kW  
// 2 - Watts 
// 3 - Cubic Meters
// 
// 4 - Cubic Feet 
// 5 - US Gallons 
// 6 - Imperial Gallons 
// 7 - BTUs 
// 8 - Liters 
// 9 -
// kPA (gauge) 
// 10 - kPA (absolute)  
// 11 - Mega Joule 
// 12 -
// Unitless</xs:documentation>
// </xs:annotation>
// Complex type: UnitType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedUnitType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Threshold to which a device
// should reduce its load.</xs:documentation>
// </xs:annotation>
// Complex type: TargetReduction
#define emberExiStructTargetReductionInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTargetReduction)))

typedef struct _EmberExiGeneratedTargetReduction {
  int16u structType;
  EmberExiGeneratedUnitType type; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedTargetReduction;


#define emberExiTargetReductionStructDataIndex 2392
#define emberExiTargetReductionStructData (emEncoderEvents + emberExiTargetReductionStructDataIndex)
#define emberExiCompareStructTargetReduction(x, y) (emExiCompareStructs(emberExiTargetReductionStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTargetReduction(theStruct) (emExiStructMemoryFootprint(emberExiTargetReductionStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTargetReduction(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTargetReduction(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTargetReduction(EmberExiGeneratedTargetReduction *data);

// Converts struct to XML
void emberExiToXmlStructTargetReduction(EmberExiGeneratedTargetReduction *data);

// Writes XML to a string
int emberExiXmlSprintfStructTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReduction *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReduction *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>IANA Private Enterprise
// Number</xs:documentation>
// </xs:annotation>
// Simple type: PENType
typedef EmberExiGeneratedInteger EmberExiGeneratedPENType;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A time stamped instance of a
// significant event detected by the device.</xs:documentation>
// </xs:annotation>
// Complex type: LogEvent
#define emberExiStructLogEventInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLogEvent)))

typedef struct _EmberExiGeneratedLogEvent {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_logEventPEN_option:1;
  unsigned int has_vendorDefined_option:1;
  unsigned int flagPadding:10;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedTimeType createdDateTime; // element
  EmberExiGeneratedUInt8 functionSet; // element
  EmberExiGeneratedUInt8 logEventCode; // element
  EmberExiGeneratedPENType logEventPEN_option; // element
  EmberExiGeneratedUInt8 profileID; // element
  EmberExiGeneratedBoolean vendorDefined_option; // element
} EmberExiGeneratedLogEvent;


#define emberExiLogEventStructDataIndex 1414
#define emberExiLogEventStructData (emEncoderEvents + emberExiLogEventStructDataIndex)
#define emberExiCompareStructLogEvent(x, y) (emExiCompareStructs(emberExiLogEventStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLogEvent(theStruct) (emExiStructMemoryFootprint(emberExiLogEventStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLogEvent(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLogEvent(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLogEvent(EmberExiGeneratedLogEvent *data);

// Converts struct to XML
void emberExiToXmlStructLogEvent(EmberExiGeneratedLogEvent *data);

// Writes XML to a string
int emberExiXmlSprintfStructLogEvent(int8u *stringBuffer, int offset, EmberExiGeneratedLogEvent *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLogEvent(int8u *stringBuffer, int offset, EmberExiGeneratedLogEvent *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// LogEvent objects.</xs:documentation>
// </xs:annotation>
// Complex type: LogEventList
#define emberExiStructLogEventListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLogEventList)))

typedef struct _EmberExiGeneratedLogEventList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u LogEvent_count; // number of LogEvent structs
  EmberExiGeneratedLogEvent *LogEvent_array; // pointer to LogEvent structs
} EmberExiGeneratedLogEventList;


#define emberExiLogEventListStructDataIndex 1438
#define emberExiLogEventListStructData (emEncoderEvents + emberExiLogEventListStructDataIndex)
#define emberExiCompareStructLogEventList(x, y) (emExiCompareStructs(emberExiLogEventListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLogEventList(theStruct) (emExiStructMemoryFootprint(emberExiLogEventListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLogEventList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLogEventList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLogEventList(EmberExiGeneratedLogEventList *data);

// Converts struct to XML
void emberExiToXmlStructLogEventList(EmberExiGeneratedLogEventList *data);

// Writes XML to a string
int emberExiXmlSprintfStructLogEventList(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLogEventList(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// RateComponent instances.</xs:documentation>
// </xs:annotation>
// Complex type: RateComponentListLink
#define emberExiStructRateComponentListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRateComponentListLink)))

typedef struct _EmberExiGeneratedRateComponentListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedRateComponentListLink;


#define emberExiRateComponentListLinkStructDataIndex 1948
#define emberExiRateComponentListLinkStructData (emEncoderEvents + emberExiRateComponentListLinkStructDataIndex)
#define emberExiCompareStructRateComponentListLink(x, y) (emExiCompareStructs(emberExiRateComponentListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRateComponentListLink(theStruct) (emExiStructMemoryFootprint(emberExiRateComponentListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRateComponentListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRateComponentListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRateComponentListLink(EmberExiGeneratedRateComponentListLink *data);

// Converts struct to XML
void emberExiToXmlStructRateComponentListLink(EmberExiGeneratedRateComponentListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructRateComponentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRateComponentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// DER.</xs:documentation>
// </xs:annotation>
// Complex type: DERLink
#define emberExiStructDERLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERLink)))

typedef struct _EmberExiGeneratedDERLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERLink;


#define emberExiDERLinkStructDataIndex 598
#define emberExiDERLinkStructData (emEncoderEvents + emberExiDERLinkStructDataIndex)
#define emberExiCompareStructDERLink(x, y) (emExiCompareStructs(emberExiDERLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERLink(theStruct) (emExiStructMemoryFootprint(emberExiDERLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERLink(EmberExiGeneratedDERLink *data);

// Converts struct to XML
void emberExiToXmlStructDERLink(EmberExiGeneratedDERLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains the object instances
// from the list where the current time is within the interval of the
// object.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveTimeTariffIntervalListLink
#define emberExiStructActiveTimeTariffIntervalListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveTimeTariffIntervalListLink)))

typedef struct _EmberExiGeneratedActiveTimeTariffIntervalListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveTimeTariffIntervalListLink;


#define emberExiActiveTimeTariffIntervalListLinkStructDataIndex 148
#define emberExiActiveTimeTariffIntervalListLinkStructData (emEncoderEvents + emberExiActiveTimeTariffIntervalListLinkStructDataIndex)
#define emberExiCompareStructActiveTimeTariffIntervalListLink(x, y) (emExiCompareStructs(emberExiActiveTimeTariffIntervalListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveTimeTariffIntervalListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveTimeTariffIntervalListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveTimeTariffIntervalListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveTimeTariffIntervalListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveTimeTariffIntervalListLink(EmberExiGeneratedActiveTimeTariffIntervalListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveTimeTariffIntervalListLink(EmberExiGeneratedActiveTimeTariffIntervalListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTimeTariffIntervalListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTimeTariffIntervalListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// TimeTariffInterval objects.</xs:documentation>
// </xs:annotation>
// Complex type: TimeTariffIntervalList
#define emberExiStructTimeTariffIntervalListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeTariffIntervalList)))

typedef struct _EmberExiGeneratedTimeTariffIntervalList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u TimeTariffInterval_count; // number of TimeTariffInterval structs
  EmberExiGeneratedTimeTariffInterval *TimeTariffInterval_array; // pointer to TimeTariffInterval structs
} EmberExiGeneratedTimeTariffIntervalList;


#define emberExiTimeTariffIntervalListStructDataIndex 2599
#define emberExiTimeTariffIntervalListStructData (emEncoderEvents + emberExiTimeTariffIntervalListStructDataIndex)
#define emberExiCompareStructTimeTariffIntervalList(x, y) (emExiCompareStructs(emberExiTimeTariffIntervalListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTimeTariffIntervalList(theStruct) (emExiStructMemoryFootprint(emberExiTimeTariffIntervalListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTimeTariffIntervalList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTimeTariffIntervalList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTimeTariffIntervalList(EmberExiGeneratedTimeTariffIntervalList *data);

// Converts struct to XML
void emberExiToXmlStructTimeTariffIntervalList(EmberExiGeneratedTimeTariffIntervalList *data);

// Writes XML to a string
int emberExiXmlSprintfStructTimeTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTimeTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of DER
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: DERListLink
#define emberExiStructDERListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERListLink)))

typedef struct _EmberExiGeneratedDERListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERListLink;


#define emberExiDERListLinkStructDataIndex 604
#define emberExiDERListLinkStructData (emEncoderEvents + emberExiDERListLinkStructDataIndex)
#define emberExiCompareStructDERListLink(x, y) (emExiCompareStructs(emberExiDERListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERListLink(theStruct) (emExiStructMemoryFootprint(emberExiDERListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERListLink(EmberExiGeneratedDERListLink *data);

// Converts struct to XML
void emberExiToXmlStructDERListLink(EmberExiGeneratedDERListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specific value measured by a
// meter or other asset.</xs:documentation>
// </xs:annotation>
// Complex type: IntervalReading
#define emberExiStructIntervalReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIntervalReading)))

typedef struct _EmberExiGeneratedIntervalReading {
  int16u structType;
  int8u ReadingQuality_count; // number of ReadingQuality structs
  EmberExiGeneratedReadingQuality *ReadingQuality_array; // pointer to ReadingQuality structs
  EmberExiGeneratedDateTimeInterval *timePeriod_option; // pointer to timePeriod structs
  EmberExiGeneratedUInt48 value; // element
} EmberExiGeneratedIntervalReading;


#define emberExiIntervalReadingStructDataIndex 1300
#define emberExiIntervalReadingStructData (emEncoderEvents + emberExiIntervalReadingStructDataIndex)
#define emberExiCompareStructIntervalReading(x, y) (emExiCompareStructs(emberExiIntervalReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIntervalReading(theStruct) (emExiStructMemoryFootprint(emberExiIntervalReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIntervalReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIntervalReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIntervalReading(EmberExiGeneratedIntervalReading *data);

// Converts struct to XML
void emberExiToXmlStructIntervalReading(EmberExiGeneratedIntervalReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructIntervalReading(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIntervalReading(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A block of IntervalReadings of
// the ReadingType indicated by the parent
// MeterReading.</xs:documentation>
// </xs:annotation>
// Complex type: IntervalBlock
#define emberExiStructIntervalBlockInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIntervalBlock)))

typedef struct _EmberExiGeneratedIntervalBlock {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  int8u IntervalReading_count; // number of IntervalReading structs
  EmberExiGeneratedIntervalReading *IntervalReading_array; // pointer to IntervalReading structs
} EmberExiGeneratedIntervalBlock;


#define emberExiIntervalBlockStructDataIndex 1264
#define emberExiIntervalBlockStructData (emEncoderEvents + emberExiIntervalBlockStructDataIndex)
#define emberExiCompareStructIntervalBlock(x, y) (emExiCompareStructs(emberExiIntervalBlockStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIntervalBlock(theStruct) (emExiStructMemoryFootprint(emberExiIntervalBlockStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIntervalBlock(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIntervalBlock(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIntervalBlock(EmberExiGeneratedIntervalBlock *data);

// Converts struct to XML
void emberExiToXmlStructIntervalBlock(EmberExiGeneratedIntervalBlock *data);

// Writes XML to a string
int emberExiXmlSprintfStructIntervalBlock(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlock *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIntervalBlock(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlock *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// IntervalBlockList objects.</xs:documentation>
// </xs:annotation>
// Complex type: IntervalBlockList
#define emberExiStructIntervalBlockListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIntervalBlockList)))

typedef struct _EmberExiGeneratedIntervalBlockList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u IntervalBlock_count; // number of IntervalBlock structs
  EmberExiGeneratedIntervalBlock *IntervalBlock_array; // pointer to IntervalBlock structs
} EmberExiGeneratedIntervalBlockList;


#define emberExiIntervalBlockListStructDataIndex 1282
#define emberExiIntervalBlockListStructData (emEncoderEvents + emberExiIntervalBlockListStructDataIndex)
#define emberExiCompareStructIntervalBlockList(x, y) (emExiCompareStructs(emberExiIntervalBlockListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIntervalBlockList(theStruct) (emExiStructMemoryFootprint(emberExiIntervalBlockListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIntervalBlockList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIntervalBlockList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIntervalBlockList(EmberExiGeneratedIntervalBlockList *data);

// Converts struct to XML
void emberExiToXmlStructIntervalBlockList(EmberExiGeneratedIntervalBlockList *data);

// Writes XML to a string
int emberExiXmlSprintfStructIntervalBlockList(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIntervalBlockList(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of UsagePoint
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: UsagePointListLink
#define emberExiStructUsagePointListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePointListLink)))

typedef struct _EmberExiGeneratedUsagePointListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedUsagePointListLink;


#define emberExiUsagePointListLinkStructDataIndex 2683
#define emberExiUsagePointListLinkStructData (emEncoderEvents + emberExiUsagePointListLinkStructDataIndex)
#define emberExiCompareStructUsagePointListLink(x, y) (emExiCompareStructs(emberExiUsagePointListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructUsagePointListLink(theStruct) (emExiStructMemoryFootprint(emberExiUsagePointListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructUsagePointListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructUsagePointListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data);

// Converts struct to XML
void emberExiToXmlStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 1 =
// BulkQuantity
// 3 = Cumulative
// 4 = DeltaData
// 6 = Indicating
// 9 = Summation
// 12 =
// Instantaneous</xs:documentation>
// </xs:annotation>
// Complex type: AccumulationBehaviourType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedAccumulationBehaviourType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 1 =
// Electricity secondary metered value (a premise meter is typically a secondary
// meter)
// 2 = Electricity primary metered value
// 4 = Air
// 7 = NaturalGas
// 8 =
// Propane
// 9 = PotableWater
// 10 = Steam
// 11 = WasteWater
// 12 = HeatingFluid
// 13 =
// CoolingFluid</xs:documentation>
// </xs:annotation>
// Complex type: CommodityType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCommodityType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 1 = Block
// Tier 1
// 2 = Block Tier 2
// 3 = Block Tier 3
// 4 = Block Tier 4
// 5 = Block Tier 5
// 6 =
// Block Tier 6
// 7 = Block Tier 7
// 8 = Block Tier 8
// 9 = Block Tier 9
// 10 = Block Tier
// 10
// 11 = Block Tier 11
// 12 = Block Tier 12
// 13 = Block Tier 13
// 14 = Block Tier
// 14
// 15 = Block Tier 15
// 16 = Block Tier 16</xs:documentation>
// </xs:annotation>
// Complex type: ConsumptionTierType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedConsumptionTierType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Follows codes defined in ISO
// 4217. Full list at
// http://www.currency-iso.org/
// iso_index/iso_tables/iso_tables_a1.htm.
// 
// 0 - Not
// Applicable
// 36 - Australian Dollar
// 124 - Canadian Dollar
// 840 - US Dollar
// 978 -
// Euro</xs:documentation>
// </xs:annotation>
// Complex type: CurrencyCode
typedef EmberExiGeneratedUInt16 EmberExiGeneratedCurrencyCode; // based-on UInt16



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 1 =
// Forward
// 19 = Reverse</xs:documentation>
// </xs:annotation>
// Complex type: FlowDirectionType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedFlowDirectionType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 3 =
// Currency
// 8 = Demand
// 12 = Energy
// 37 = Power</xs:documentation>
// </xs:annotation>
// Complex type: KindType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedKindType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 129 = Phase
// AN
// 128 = Phase A
// 132 = Phase AB
// 64 = Phase BN
// 64 = Phase B
// 32 = Phase CN
// 32 =
// Phase C
// 224 = Phase ABC
// 66 = Phase BC
// 40 = Phase
// CA</xs:documentation>
// </xs:annotation>
// Complex type: PhaseCode
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPhaseCode; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable
// 1 =
// 10-minute
// 2 = 15-minute
// 4 = 24-hour
// 5 = 30-minute
// 7 = 60-minute
// 11 = Daily
// 13 =
// Monthly
// 15 = Present
// 16 = Previous
// 24 = Weekly
// 32 = ForTheSpecifiedPeriod
// 79 =
// Daily30minuteFixedBlock</xs:documentation>
// </xs:annotation>
// Complex type: TimeAttributeType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedTimeAttributeType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = NotApplicable
// 1 = TOU A
// 2
// = TOU B
// 3 = TOU C
// 4 = TOU D
// 5 = TOU E
// 6 = TOU F
// 7 = TOU G
// 8 = TOU H
// 9 = TOU I
// 10
// = TOU J
// 11 = TOU K
// 12 = TOU L
// 13 = TOU M
// 14 = TOU N
// 15 = TOU
// O</xs:documentation>
// </xs:annotation>
// Complex type: TOUType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedTOUType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Type of data conveyed by a
// specific Reading.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingType
#define emberExiStructReadingTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingType)))

typedef struct _EmberExiGeneratedReadingType {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_accumulationBehaviour_option:1;
  unsigned int has_commodity_option:1;
  unsigned int has_consumptionTier_option:1;
  unsigned int has_currency_option:1;
  unsigned int has_dataQualifier_option:1;
  unsigned int has_flowDirection_option:1;
  unsigned int has_kind_option:1;
  unsigned int has_phase_option:1;
  unsigned int has_powerOfTenMultiplier_option:1;
  unsigned int has_timeAttribute_option:1;
  unsigned int has_tou_option:1;
  unsigned int has_uom_option:1;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedAccumulationBehaviourType accumulationBehaviour_option; // element
  EmberExiGeneratedCommodityType commodity_option; // element
  EmberExiGeneratedConsumptionTierType consumptionTier_option; // element
  EmberExiGeneratedCurrencyCode currency_option; // element
  EmberExiGeneratedDataQualifierType dataQualifier_option; // element
  EmberExiGeneratedFlowDirectionType flowDirection_option; // element
  EmberExiGeneratedKindType kind_option; // element
  EmberExiGeneratedPhaseCode phase_option; // element
  EmberExiGeneratedPowerOfTenMultiplierType powerOfTenMultiplier_option; // element
  EmberExiGeneratedTimeAttributeType timeAttribute_option; // element
  EmberExiGeneratedTOUType tou_option; // element
  EmberExiGeneratedUomType uom_option; // element
} EmberExiGeneratedReadingType;


#define emberExiReadingTypeStructDataIndex 1999
#define emberExiReadingTypeStructData (emEncoderEvents + emberExiReadingTypeStructDataIndex)
#define emberExiCompareStructReadingType(x, y) (emExiCompareStructs(emberExiReadingTypeStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingType(theStruct) (emExiStructMemoryFootprint(emberExiReadingTypeStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingType(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingType(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingType(EmberExiGeneratedReadingType *data);

// Converts struct to XML
void emberExiToXmlStructReadingType(EmberExiGeneratedReadingType *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingType(int8u *stringBuffer, int offset, EmberExiGeneratedReadingType *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingType(int8u *stringBuffer, int offset, EmberExiGeneratedReadingType *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// ReadingType objects.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingTypeList
#define emberExiStructReadingTypeListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingTypeList)))

typedef struct _EmberExiGeneratedReadingTypeList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u ReadingType_count; // number of ReadingType structs
  EmberExiGeneratedReadingType *ReadingType_array; // pointer to ReadingType structs
} EmberExiGeneratedReadingTypeList;


#define emberExiReadingTypeListStructDataIndex 2047
#define emberExiReadingTypeListStructData (emEncoderEvents + emberExiReadingTypeListStructDataIndex)
#define emberExiCompareStructReadingTypeList(x, y) (emExiCompareStructs(emberExiReadingTypeListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingTypeList(theStruct) (emExiStructMemoryFootprint(emberExiReadingTypeListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingTypeList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingTypeList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingTypeList(EmberExiGeneratedReadingTypeList *data);

// Converts struct to XML
void emberExiToXmlStructReadingTypeList(EmberExiGeneratedReadingTypeList *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingTypeList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingTypeList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// Time.</xs:documentation>
// </xs:annotation>
// Complex type: TimeLink
#define emberExiStructTimeLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeLink)))

typedef struct _EmberExiGeneratedTimeLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTimeLink;


#define emberExiTimeLinkStructDataIndex 2563
#define emberExiTimeLinkStructData (emEncoderEvents + emberExiTimeLinkStructDataIndex)
#define emberExiCompareStructTimeLink(x, y) (emExiCompareStructs(emberExiTimeLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTimeLink(theStruct) (emExiStructMemoryFootprint(emberExiTimeLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTimeLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTimeLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTimeLink(EmberExiGeneratedTimeLink *data);

// Converts struct to XML
void emberExiToXmlStructTimeLink(EmberExiGeneratedTimeLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructTimeLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTimeLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// MessagingProgram instances.</xs:documentation>
// </xs:annotation>
// Complex type: MessagingProgramListLink
#define emberExiStructMessagingProgramListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMessagingProgramListLink)))

typedef struct _EmberExiGeneratedMessagingProgramListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedMessagingProgramListLink;


#define emberExiMessagingProgramListLinkStructDataIndex 1489
#define emberExiMessagingProgramListLinkStructData (emEncoderEvents + emberExiMessagingProgramListLinkStructDataIndex)
#define emberExiCompareStructMessagingProgramListLink(x, y) (emExiCompareStructs(emberExiMessagingProgramListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMessagingProgramListLink(theStruct) (emExiStructMemoryFootprint(emberExiMessagingProgramListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMessagingProgramListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMessagingProgramListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data);

// Converts struct to XML
void emberExiToXmlStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructMessagingProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMessagingProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains the representation of
// time, constantly updated.</xs:documentation>
// </xs:annotation>
// Complex type: Time
#define emberExiStructTimeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTime)))

typedef struct _EmberExiGeneratedTime {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_localTime_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedTimeType dstEndTime; // element
  EmberExiGeneratedTimeOffsetType dstOffset; // element
  EmberExiGeneratedTimeType dstStartTime; // element
  EmberExiGeneratedTimeType localTime_option; // element
  EmberExiGeneratedUInt8 quality; // element
  EmberExiGeneratedTimeOffsetType tzOffset; // element
  EmberExiGeneratedTimeType UTCTime; // element
} EmberExiGeneratedTime;


#define emberExiTimeStructDataIndex 2518
#define emberExiTimeStructData (emEncoderEvents + emberExiTimeStructDataIndex)
#define emberExiCompareStructTime(x, y) (emExiCompareStructs(emberExiTimeStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTime(theStruct) (emExiStructMemoryFootprint(emberExiTimeStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTime(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTime(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTime(EmberExiGeneratedTime *data);

// Converts struct to XML
void emberExiToXmlStructTime(EmberExiGeneratedTime *data);

// Writes XML to a string
int emberExiXmlSprintfStructTime(int8u *stringBuffer, int offset, EmberExiGeneratedTime *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTime(int8u *stringBuffer, int offset, EmberExiGeneratedTime *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// UsagePoint objects.</xs:documentation>
// </xs:annotation>
// Complex type: UsagePointList
#define emberExiStructUsagePointListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePointList)))

typedef struct _EmberExiGeneratedUsagePointList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u UsagePoint_count; // number of UsagePoint structs
  EmberExiGeneratedUsagePoint *UsagePoint_array; // pointer to UsagePoint structs
} EmberExiGeneratedUsagePointList;


#define emberExiUsagePointListStructDataIndex 2671
#define emberExiUsagePointListStructData (emEncoderEvents + emberExiUsagePointListStructDataIndex)
#define emberExiCompareStructUsagePointList(x, y) (emExiCompareStructs(emberExiUsagePointListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructUsagePointList(theStruct) (emExiStructMemoryFootprint(emberExiUsagePointListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructUsagePointList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructUsagePointList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructUsagePointList(EmberExiGeneratedUsagePointList *data);

// Converts struct to XML
void emberExiToXmlStructUsagePointList(EmberExiGeneratedUsagePointList *data);

// Writes XML to a string
int emberExiXmlSprintfStructUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A 32-bit field encoded as a
// hex string (8 characters / 4 octets)</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary32
typedef struct {
  int8u length;
  int8u bytes[4];
} EmberExiGeneratedHexBinary32;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The EndDevice category types
// defined.
// Bit positions SHALL be defined as follows:
// 0 - Programmable
// Communicating Thermostat 
// 1 - Strip Heaters 
// 2 - Baseboard Heaters 
// 3 - Water
// Heater 
// 4 - Pool Pump 
// 5 - Spa 
// 6 - Jacuzzi 
// 7 - Smart Appliance 
// 8 - Irrigation
// Pump 
// 9 - Managed Commercial and Industrial (C&amp;amp;I) Loads 
// 10 - Simple
// misc. (Residential On/Off) loads 
// 11 - Exterior Lighting 
// 12 - Interior Lighting
// 
// 13 - Electric Vehicle 
// 14 - Generation Systems 
// 15 - Load Control Switch 
// 16 -
// Smart Inverter 
// 17 - EVSE 
// 18 - RESU 
// 19 - Energy Management System 
// 20 - Smart
// Energy Module
// 21-30 - Reserved
// 31 - Other</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceCategoryType
typedef EmberExiGeneratedHexBinary32 EmberExiGeneratedEndDeviceCategoryType; // based-on HexBinary32



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Duty cycle is a method of
// control and defines the maximum ON state of the device as a percentage of a
// defined time period; this value is provided through the normalValue attribute. 
// For example, if the normalValue is 80, the device would be in an “on state” for
// 80% of the time for the duration of the event.  Range of the value is 0 to 100. 
// All other values are reserved for future
// use.</xs:documentation>
// </xs:annotation>
// Complex type: DutyCycle
#define emberExiStructDutyCycleInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDutyCycle)))

typedef struct _EmberExiGeneratedDutyCycle {
  int16u structType;
  EmberExiGeneratedUInt8 normalValue; // element
} EmberExiGeneratedDutyCycle;


#define emberExiDutyCycleStructDataIndex 949
#define emberExiDutyCycleStructData (emEncoderEvents + emberExiDutyCycleStructDataIndex)
#define emberExiCompareStructDutyCycle(x, y) (emExiCompareStructs(emberExiDutyCycleStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDutyCycle(theStruct) (emExiStructMemoryFootprint(emberExiDutyCycleStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDutyCycle(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDutyCycle(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDutyCycle(EmberExiGeneratedDutyCycle *data);

// Converts struct to XML
void emberExiToXmlStructDutyCycle(EmberExiGeneratedDutyCycle *data);

// Writes XML to a string
int emberExiXmlSprintfStructDutyCycle(int8u *stringBuffer, int offset, EmberExiGeneratedDutyCycle *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDutyCycle(int8u *stringBuffer, int offset, EmberExiGeneratedDutyCycle *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The set point types defined
// for end device control set point targets.
// 0 - Cooling Setpoint 
// 1 - Heating
// Setpoint</xs:documentation>
// </xs:annotation>
// Complex type: SetpointType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedSetpointType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The SetPoint object is used to
// apply a specific temperature value to a temperature control device.  The Type
// attribute will indicate what type of set point SHALL be applied.  The Value
// attribute SHALL be calculated as follows:
// Cooling/Heating Temperature Set Point
// / 100 = temperature in degrees Celsius where -273.15°C &amp;lt;= temperature
// &amp;lt;= 327.67°C, corresponding to a Cooling and/or Heating Temperature Set
// Point in the range 0x954d to 0x7fff. (Note that "0x" is not used in actual
// representations.) The maximum resolution this format allows is
// 0.01°C.</xs:documentation>
// </xs:annotation>
// Complex type: SetPoint
#define emberExiStructSetPointInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSetPoint)))

typedef struct _EmberExiGeneratedSetPoint {
  int16u structType;
  EmberExiGeneratedSetpointType type; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedSetPoint;


#define emberExiSetPointStructDataIndex 2221
#define emberExiSetPointStructData (emEncoderEvents + emberExiSetPointStructDataIndex)
#define emberExiCompareStructSetPoint(x, y) (emExiCompareStructs(emberExiSetPointStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSetPoint(theStruct) (emExiStructMemoryFootprint(emberExiSetPointStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSetPoint(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSetPoint(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSetPoint(EmberExiGeneratedSetPoint *data);

// Converts struct to XML
void emberExiToXmlStructSetPoint(EmberExiGeneratedSetPoint *data);

// Writes XML to a string
int emberExiXmlSprintfStructSetPoint(int8u *stringBuffer, int offset, EmberExiGeneratedSetPoint *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSetPoint(int8u *stringBuffer, int offset, EmberExiGeneratedSetPoint *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max length
// 192</xs:documentation>
// </xs:annotation>
// Simple type: String192
typedef EmberExiGeneratedString EmberExiGeneratedString192;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Current status information
// relevant to a specific object.</xs:documentation>
// </xs:annotation>
// Complex type: Status
#define emberExiStructStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedStatus)))

typedef struct _EmberExiGeneratedStatus {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedBoolean potentiallySuperseded; // element
  EmberExiGeneratedTimeType potentiallySupersededTime; // element
  EmberExiGeneratedString192 reason_option; // element
  EmberExiGeneratedUInt8 type; // element
} EmberExiGeneratedStatus;


#define emberExiStatusStructDataIndex 2245
#define emberExiStatusStructData (emEncoderEvents + emberExiStatusStructDataIndex)
#define emberExiCompareStructStatus(x, y) (emExiCompareStructs(emberExiStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructStatus(theStruct) (emExiStructMemoryFootprint(emberExiStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructStatus(EmberExiGeneratedStatus *data);

// Converts struct to XML
void emberExiToXmlStructStatus(EmberExiGeneratedStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructStatus(int8u *stringBuffer, int offset, EmberExiGeneratedStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructStatus(int8u *stringBuffer, int offset, EmberExiGeneratedStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Instructs an PANDeviceAsset
// (or EndDeviceGroup) to perform a specified
// action.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceControl
#define emberExiStructEndDeviceControlInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceControl)))

typedef struct _EmberExiGeneratedEndDeviceControl {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEndDeviceCategoryType deviceCategory; // element
  EmberExiGeneratedBoolean drProgramMandatory; // element
  EmberExiGeneratedDutyCycle *DutyCycle_option; // pointer to DutyCycle structs
  EmberExiGeneratedBoolean loadShiftForward; // element
  int8u Offset_count; // number of Offset structs
  EmberExiGeneratedOffset *Offset_array; // pointer to Offset structs
  EmberExiGeneratedUInt16 overrideDuration; // element
  EmberExiGeneratedRandomizedDateTimeInterval *scheduledInterval; // pointer to scheduledInterval structs
  int8u SetPoint_count; // number of SetPoint structs
  EmberExiGeneratedSetPoint *SetPoint_array; // pointer to SetPoint structs
  EmberExiGeneratedStatus *Status; // pointer to Status structs
  EmberExiGeneratedTargetReduction *TargetReduction_option; // pointer to TargetReduction structs
} EmberExiGeneratedEndDeviceControl;


#define emberExiEndDeviceControlStructDataIndex 1003
#define emberExiEndDeviceControlStructData (emEncoderEvents + emberExiEndDeviceControlStructDataIndex)
#define emberExiCompareStructEndDeviceControl(x, y) (emExiCompareStructs(emberExiEndDeviceControlStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceControl(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceControlStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceControl(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceControl(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceControl(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControl *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceControl(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControl *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a time interval
// during which supply will not be interrupted.</xs:documentation>
// </xs:annotation>
// Complex type: SupplyInterruptionOverride
#define emberExiStructSupplyInterruptionOverrideInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupplyInterruptionOverride)))

typedef struct _EmberExiGeneratedSupplyInterruptionOverride {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
} EmberExiGeneratedSupplyInterruptionOverride;


#define emberExiSupplyInterruptionOverrideStructDataIndex 2311
#define emberExiSupplyInterruptionOverrideStructData (emEncoderEvents + emberExiSupplyInterruptionOverrideStructDataIndex)
#define emberExiCompareStructSupplyInterruptionOverride(x, y) (emExiCompareStructs(emberExiSupplyInterruptionOverrideStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSupplyInterruptionOverride(theStruct) (emExiStructMemoryFootprint(emberExiSupplyInterruptionOverrideStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSupplyInterruptionOverride(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSupplyInterruptionOverride(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSupplyInterruptionOverride(EmberExiGeneratedSupplyInterruptionOverride *data);

// Converts struct to XML
void emberExiToXmlStructSupplyInterruptionOverride(EmberExiGeneratedSupplyInterruptionOverride *data);

// Writes XML to a string
int emberExiXmlSprintfStructSupplyInterruptionOverride(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverride *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverride(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverride *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains the object instances
// from the list where the current time is within the interval of the
// object.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveBillingPeriodListLink
#define emberExiStructActiveBillingPeriodListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveBillingPeriodListLink)))

typedef struct _EmberExiGeneratedActiveBillingPeriodListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveBillingPeriodListLink;


#define emberExiActiveBillingPeriodListLinkStructDataIndex 64
#define emberExiActiveBillingPeriodListLinkStructData (emEncoderEvents + emberExiActiveBillingPeriodListLinkStructDataIndex)
#define emberExiCompareStructActiveBillingPeriodListLink(x, y) (emExiCompareStructs(emberExiActiveBillingPeriodListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveBillingPeriodListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveBillingPeriodListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveBillingPeriodListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveBillingPeriodListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveBillingPeriodListLink(EmberExiGeneratedActiveBillingPeriodListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveBillingPeriodListLink(EmberExiGeneratedActiveBillingPeriodListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveBillingPeriodListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveBillingPeriodListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveBillingPeriodListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// DemandResponseProgram instances.</xs:documentation>
// </xs:annotation>
// Complex type: DemandResponseProgramListLink
#define emberExiStructDemandResponseProgramListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDemandResponseProgramListLink)))

typedef struct _EmberExiGeneratedDemandResponseProgramListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDemandResponseProgramListLink;


#define emberExiDemandResponseProgramListLinkStructDataIndex 745
#define emberExiDemandResponseProgramListLinkStructData (emEncoderEvents + emberExiDemandResponseProgramListLinkStructDataIndex)
#define emberExiCompareStructDemandResponseProgramListLink(x, y) (emExiCompareStructs(emberExiDemandResponseProgramListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDemandResponseProgramListLink(theStruct) (emExiStructMemoryFootprint(emberExiDemandResponseProgramListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDemandResponseProgramListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDemandResponseProgramListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data);

// Converts struct to XML
void emberExiToXmlStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDemandResponseProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDemandResponseProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of DERProgram
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: DERProgramListLink
#define emberExiStructDERProgramListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERProgramListLink)))

typedef struct _EmberExiGeneratedDERProgramListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERProgramListLink;


#define emberExiDERProgramListLinkStructDataIndex 655
#define emberExiDERProgramListLinkStructData (emEncoderEvents + emberExiDERProgramListLinkStructDataIndex)
#define emberExiCompareStructDERProgramListLink(x, y) (emExiCompareStructs(emberExiDERProgramListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERProgramListLink(theStruct) (emExiStructMemoryFootprint(emberExiDERProgramListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERProgramListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERProgramListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data);

// Converts struct to XML
void emberExiToXmlStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of Prepayment
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: PrepaymentListLink
#define emberExiStructPrepaymentListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepaymentListLink)))

typedef struct _EmberExiGeneratedPrepaymentListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedPrepaymentListLink;


#define emberExiPrepaymentListLinkStructDataIndex 1861
#define emberExiPrepaymentListLinkStructData (emEncoderEvents + emberExiPrepaymentListLinkStructDataIndex)
#define emberExiCompareStructPrepaymentListLink(x, y) (emExiCompareStructs(emberExiPrepaymentListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPrepaymentListLink(theStruct) (emExiStructMemoryFootprint(emberExiPrepaymentListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPrepaymentListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPrepaymentListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data);

// Converts struct to XML
void emberExiToXmlStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructPrepaymentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPrepaymentListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// TariffProfile.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfileLink
#define emberExiStructTariffProfileLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfileLink)))

typedef struct _EmberExiGeneratedTariffProfileLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTariffProfileLink;


#define emberExiTariffProfileLinkStructDataIndex 2419
#define emberExiTariffProfileLinkStructData (emEncoderEvents + emberExiTariffProfileLinkStructDataIndex)
#define emberExiCompareStructTariffProfileLink(x, y) (emExiCompareStructs(emberExiTariffProfileLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTariffProfileLink(theStruct) (emExiStructMemoryFootprint(emberExiTariffProfileLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTariffProfileLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTariffProfileLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTariffProfileLink(EmberExiGeneratedTariffProfileLink *data);

// Converts struct to XML
void emberExiToXmlStructTariffProfileLink(EmberExiGeneratedTariffProfileLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructTariffProfileLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTariffProfileLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// Configuration.</xs:documentation>
// </xs:annotation>
// Complex type: ConfigurationLink
#define emberExiStructConfigurationLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConfigurationLink)))

typedef struct _EmberExiGeneratedConfigurationLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedConfigurationLink;


#define emberExiConfigurationLinkStructDataIndex 355
#define emberExiConfigurationLinkStructData (emEncoderEvents + emberExiConfigurationLinkStructDataIndex)
#define emberExiCompareStructConfigurationLink(x, y) (emExiCompareStructs(emberExiConfigurationLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructConfigurationLink(theStruct) (emExiStructMemoryFootprint(emberExiConfigurationLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructConfigurationLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructConfigurationLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructConfigurationLink(EmberExiGeneratedConfigurationLink *data);

// Converts struct to XML
void emberExiToXmlStructConfigurationLink(EmberExiGeneratedConfigurationLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructConfigurationLink(int8u *stringBuffer, int offset, EmberExiGeneratedConfigurationLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructConfigurationLink(int8u *stringBuffer, int offset, EmberExiGeneratedConfigurationLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// DeviceInformation.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceInformationLink
#define emberExiStructDeviceInformationLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceInformationLink)))

typedef struct _EmberExiGeneratedDeviceInformationLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDeviceInformationLink;


#define emberExiDeviceInformationLinkStructDataIndex 862
#define emberExiDeviceInformationLinkStructData (emEncoderEvents + emberExiDeviceInformationLinkStructDataIndex)
#define emberExiCompareStructDeviceInformationLink(x, y) (emExiCompareStructs(emberExiDeviceInformationLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDeviceInformationLink(theStruct) (emExiStructMemoryFootprint(emberExiDeviceInformationLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDeviceInformationLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDeviceInformationLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data);

// Converts struct to XML
void emberExiToXmlStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDeviceInformationLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformationLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDeviceInformationLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformationLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// EndDeviceGroup instances.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceGroupListLink
#define emberExiStructEndDeviceGroupListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceGroupListLink)))

typedef struct _EmberExiGeneratedEndDeviceGroupListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedEndDeviceGroupListLink;


#define emberExiEndDeviceGroupListLinkStructDataIndex 1150
#define emberExiEndDeviceGroupListLinkStructData (emEncoderEvents + emberExiEndDeviceGroupListLinkStructDataIndex)
#define emberExiCompareStructEndDeviceGroupListLink(x, y) (emExiCompareStructs(emberExiEndDeviceGroupListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceGroupListLink(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceGroupListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceGroupListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceGroupListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceGroupListLink(EmberExiGeneratedEndDeviceGroupListLink *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceGroupListLink(EmberExiGeneratedEndDeviceGroupListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceGroupListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceGroupListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of EndDevice
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceListLink
#define emberExiStructEndDeviceListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceListLink)))

typedef struct _EmberExiGeneratedEndDeviceListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedEndDeviceListLink;


#define emberExiEndDeviceListLinkStructDataIndex 1174
#define emberExiEndDeviceListLinkStructData (emEncoderEvents + emberExiEndDeviceListLinkStructDataIndex)
#define emberExiCompareStructEndDeviceListLink(x, y) (emExiCompareStructs(emberExiEndDeviceListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceListLink(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of LogEvent
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: LogEventListLink
#define emberExiStructLogEventListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLogEventListLink)))

typedef struct _EmberExiGeneratedLogEventListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedLogEventListLink;


#define emberExiLogEventListLinkStructDataIndex 1450
#define emberExiLogEventListLinkStructData (emEncoderEvents + emberExiLogEventListLinkStructDataIndex)
#define emberExiCompareStructLogEventListLink(x, y) (emExiCompareStructs(emberExiLogEventListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLogEventListLink(theStruct) (emExiStructMemoryFootprint(emberExiLogEventListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLogEventListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLogEventListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLogEventListLink(EmberExiGeneratedLogEventListLink *data);

// Converts struct to XML
void emberExiToXmlStructLogEventListLink(EmberExiGeneratedLogEventListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructLogEventListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLogEventListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLogEventListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of UsagePoint
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: MirrorUsagePointListLink
#define emberExiStructMirrorUsagePointListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorUsagePointListLink)))

typedef struct _EmberExiGeneratedMirrorUsagePointListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedMirrorUsagePointListLink;


#define emberExiMirrorUsagePointListLinkStructDataIndex 1618
#define emberExiMirrorUsagePointListLinkStructData (emEncoderEvents + emberExiMirrorUsagePointListLinkStructDataIndex)
#define emberExiCompareStructMirrorUsagePointListLink(x, y) (emExiCompareStructs(emberExiMirrorUsagePointListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMirrorUsagePointListLink(theStruct) (emExiStructMemoryFootprint(emberExiMirrorUsagePointListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMirrorUsagePointListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMirrorUsagePointListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data);

// Converts struct to XML
void emberExiToXmlStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructMirrorUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMirrorUsagePointListLink(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// Configuration.</xs:documentation>
// </xs:annotation>
// Complex type: NetworkStatusLink
#define emberExiStructNetworkStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNetworkStatusLink)))

typedef struct _EmberExiGeneratedNetworkStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedNetworkStatusLink;


#define emberExiNetworkStatusLinkStructDataIndex 1630
#define emberExiNetworkStatusLinkStructData (emEncoderEvents + emberExiNetworkStatusLinkStructDataIndex)
#define emberExiCompareStructNetworkStatusLink(x, y) (emExiCompareStructs(emberExiNetworkStatusLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructNetworkStatusLink(theStruct) (emExiStructMemoryFootprint(emberExiNetworkStatusLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructNetworkStatusLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructNetworkStatusLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructNetworkStatusLink(EmberExiGeneratedNetworkStatusLink *data);

// Converts struct to XML
void emberExiToXmlStructNetworkStatusLink(EmberExiGeneratedNetworkStatusLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructNetworkStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatusLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructNetworkStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatusLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// PowerStatus.</xs:documentation>
// </xs:annotation>
// Complex type: PowerStatusLink
#define emberExiStructPowerStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPowerStatusLink)))

typedef struct _EmberExiGeneratedPowerStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedPowerStatusLink;


#define emberExiPowerStatusLinkStructDataIndex 1732
#define emberExiPowerStatusLinkStructData (emEncoderEvents + emberExiPowerStatusLinkStructDataIndex)
#define emberExiCompareStructPowerStatusLink(x, y) (emExiCompareStructs(emberExiPowerStatusLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPowerStatusLink(theStruct) (emExiStructMemoryFootprint(emberExiPowerStatusLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPowerStatusLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPowerStatusLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data);

// Converts struct to XML
void emberExiToXmlStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructPowerStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatusLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPowerStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatusLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// Subscription instances.</xs:documentation>
// </xs:annotation>
// Complex type: SubscriptionListLink
#define emberExiStructSubscriptionListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscriptionListLink)))

typedef struct _EmberExiGeneratedSubscriptionListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedSubscriptionListLink;


#define emberExiSubscriptionListLinkStructDataIndex 2305
#define emberExiSubscriptionListLinkStructData (emEncoderEvents + emberExiSubscriptionListLinkStructDataIndex)
#define emberExiCompareStructSubscriptionListLink(x, y) (emExiCompareStructs(emberExiSubscriptionListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSubscriptionListLink(theStruct) (emExiStructMemoryFootprint(emberExiSubscriptionListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSubscriptionListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSubscriptionListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data);

// Converts struct to XML
void emberExiToXmlStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructSubscriptionListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSubscriptionListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Groups multiple EndDevices
// into one addressable collection.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceGroup
#define emberExiStructEndDeviceGroupInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceGroup)))

typedef struct _EmberExiGeneratedEndDeviceGroup {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedActiveBillingPeriodListLink *ActiveBillingPeriodListLink_option; // pointer to ActiveBillingPeriodListLink structs
  EmberExiGeneratedBillingPeriodListLink *BillingPeriodListLink_option; // pointer to BillingPeriodListLink structs
  EmberExiGeneratedDemandResponseProgramListLink *DemandResponseProgramListLink_option; // pointer to DemandResponseProgramListLink structs
  EmberExiGeneratedDERListLink *DERListLink_option; // pointer to DERListLink structs
  EmberExiGeneratedDERProgramListLink *DERProgramListLink_option; // pointer to DERProgramListLink structs
  EmberExiGeneratedMessagingProgramListLink *MessagingProgramListLink_option; // pointer to MessagingProgramListLink structs
  EmberExiGeneratedPrepaymentListLink *PrepaymentListLink_option; // pointer to PrepaymentListLink structs
  EmberExiGeneratedTariffProfileLink *TariffProfileLink_option; // pointer to TariffProfileLink structs
  EmberExiGeneratedUsagePointListLink *UsagePointListLink_option; // pointer to UsagePointListLink structs
} EmberExiGeneratedEndDeviceGroup;


#define emberExiEndDeviceGroupStructDataIndex 1078
#define emberExiEndDeviceGroupStructData (emEncoderEvents + emberExiEndDeviceGroupStructDataIndex)
#define emberExiCompareStructEndDeviceGroup(x, y) (emExiCompareStructs(emberExiEndDeviceGroupStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceGroup(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceGroupStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceGroup(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceGroup(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceGroup(EmberExiGeneratedEndDeviceGroup *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceGroup(EmberExiGeneratedEndDeviceGroup *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceGroup(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroup *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceGroup(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroup *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Returned by the URI provided
// by DNS-SD, to allow clients to find the URIs to the resources in which they are
// interested.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceCapability
#define emberExiStructDeviceCapabilityInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceCapability)))

typedef struct _EmberExiGeneratedDeviceCapability {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedActiveBillingPeriodListLink *ActiveBillingPeriodListLink_option; // pointer to ActiveBillingPeriodListLink structs
  EmberExiGeneratedBillingPeriodListLink *BillingPeriodListLink_option; // pointer to BillingPeriodListLink structs
  EmberExiGeneratedDemandResponseProgramListLink *DemandResponseProgramListLink_option; // pointer to DemandResponseProgramListLink structs
  EmberExiGeneratedDERListLink *DERListLink_option; // pointer to DERListLink structs
  EmberExiGeneratedDERProgramListLink *DERProgramListLink_option; // pointer to DERProgramListLink structs
  EmberExiGeneratedMessagingProgramListLink *MessagingProgramListLink_option; // pointer to MessagingProgramListLink structs
  EmberExiGeneratedPrepaymentListLink *PrepaymentListLink_option; // pointer to PrepaymentListLink structs
  EmberExiGeneratedTariffProfileLink *TariffProfileLink_option; // pointer to TariffProfileLink structs
  EmberExiGeneratedUsagePointListLink *UsagePointListLink_option; // pointer to UsagePointListLink structs
  EmberExiGeneratedConfigurationLink *ConfigurationLink_option; // pointer to ConfigurationLink structs
  EmberExiGeneratedDeviceInformationLink *DeviceInformationLink_option; // pointer to DeviceInformationLink structs
  EmberExiGeneratedEndDeviceGroupListLink *EndDeviceGroupListLink_option; // pointer to EndDeviceGroupListLink structs
  EmberExiGeneratedEndDeviceListLink *EndDeviceListLink_option; // pointer to EndDeviceListLink structs
  EmberExiGeneratedLogEventListLink *LogEventListLink_option; // pointer to LogEventListLink structs
  EmberExiGeneratedMirrorUsagePointListLink *MirrorUsagePointListLink_option; // pointer to MirrorUsagePointListLink structs
  EmberExiGeneratedNetworkStatusLink *NetworkStatusLink_option; // pointer to NetworkStatusLink structs
  EmberExiGeneratedPowerStatusLink *PowerStatusLink_option; // pointer to PowerStatusLink structs
  EmberExiGeneratedSubscriptionListLink *SubscriptionListLink_option; // pointer to SubscriptionListLink structs
} EmberExiGeneratedDeviceCapability;


#define emberExiDeviceCapabilityStructDataIndex 751
#define emberExiDeviceCapabilityStructData (emEncoderEvents + emberExiDeviceCapabilityStructDataIndex)
#define emberExiCompareStructDeviceCapability(x, y) (emExiCompareStructs(emberExiDeviceCapabilityStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDeviceCapability(theStruct) (emExiStructMemoryFootprint(emberExiDeviceCapabilityStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDeviceCapability(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDeviceCapability(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDeviceCapability(EmberExiGeneratedDeviceCapability *data);

// Converts struct to XML
void emberExiToXmlStructDeviceCapability(EmberExiGeneratedDeviceCapability *data);

// Writes XML to a string
int emberExiXmlSprintfStructDeviceCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapability *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDeviceCapability(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapability *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains identification and
// other information about the device.</xs:documentation>
// </xs:annotation>
// Complex type: FileStatus
#define emberExiStructFileStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileStatus)))

typedef struct _EmberExiGeneratedFileStatus {
  int16u structType;
  EmberExiGeneratedHexBinary128 deviceID; // element
  EmberExiGeneratedString fileURI; // element
  EmberExiGeneratedStatusType status; // element
} EmberExiGeneratedFileStatus;


#define emberExiFileStatusStructDataIndex 1213
#define emberExiFileStatusStructData (emEncoderEvents + emberExiFileStatusStructDataIndex)
#define emberExiCompareStructFileStatus(x, y) (emExiCompareStructs(emberExiFileStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFileStatus(theStruct) (emExiStructMemoryFootprint(emberExiFileStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFileStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFileStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFileStatus(EmberExiGeneratedFileStatus *data);

// Converts struct to XML
void emberExiToXmlStructFileStatus(EmberExiGeneratedFileStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructFileStatus(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFileStatus(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// AccountBalance.</xs:documentation>
// </xs:annotation>
// Complex type: AccountBalanceLink
#define emberExiStructAccountBalanceLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAccountBalanceLink)))

typedef struct _EmberExiGeneratedAccountBalanceLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedAccountBalanceLink;


#define emberExiAccountBalanceLinkStructDataIndex 25
#define emberExiAccountBalanceLinkStructData (emEncoderEvents + emberExiAccountBalanceLinkStructDataIndex)
#define emberExiCompareStructAccountBalanceLink(x, y) (emExiCompareStructs(emberExiAccountBalanceLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAccountBalanceLink(theStruct) (emExiStructMemoryFootprint(emberExiAccountBalanceLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAccountBalanceLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAccountBalanceLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAccountBalanceLink(EmberExiGeneratedAccountBalanceLink *data);

// Converts struct to XML
void emberExiToXmlStructAccountBalanceLink(EmberExiGeneratedAccountBalanceLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructAccountBalanceLink(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalanceLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAccountBalanceLink(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalanceLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of active
// CreditRegister instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveCreditRegisterListLink
#define emberExiStructActiveCreditRegisterListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveCreditRegisterListLink)))

typedef struct _EmberExiGeneratedActiveCreditRegisterListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveCreditRegisterListLink;


#define emberExiActiveCreditRegisterListLinkStructDataIndex 76
#define emberExiActiveCreditRegisterListLinkStructData (emEncoderEvents + emberExiActiveCreditRegisterListLinkStructDataIndex)
#define emberExiCompareStructActiveCreditRegisterListLink(x, y) (emExiCompareStructs(emberExiActiveCreditRegisterListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveCreditRegisterListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveCreditRegisterListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveCreditRegisterListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveCreditRegisterListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveCreditRegisterListLink(EmberExiGeneratedActiveCreditRegisterListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveCreditRegisterListLink(EmberExiGeneratedActiveCreditRegisterListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveCreditRegisterListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveCreditRegisterListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of active
// SupplyInterruptionOverride instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveSupplyInterruptionOverrideListLink
#define emberExiStructActiveSupplyInterruptionOverrideListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveSupplyInterruptionOverrideListLink)))

typedef struct _EmberExiGeneratedActiveSupplyInterruptionOverrideListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveSupplyInterruptionOverrideListLink;


#define emberExiActiveSupplyInterruptionOverrideListLinkStructDataIndex 130
#define emberExiActiveSupplyInterruptionOverrideListLinkStructData (emEncoderEvents + emberExiActiveSupplyInterruptionOverrideListLinkStructDataIndex)
#define emberExiCompareStructActiveSupplyInterruptionOverrideListLink(x, y) (emExiCompareStructs(emberExiActiveSupplyInterruptionOverrideListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveSupplyInterruptionOverrideListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveSupplyInterruptionOverrideListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveSupplyInterruptionOverrideListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveSupplyInterruptionOverrideListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveSupplyInterruptionOverrideListLink(EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveSupplyInterruptionOverrideListLink(EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Real electrical
// energy</xs:documentation>
// </xs:annotation>
// Complex type: RealEnergy
#define emberExiStructRealEnergyInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRealEnergy)))

typedef struct _EmberExiGeneratedRealEnergy {
  int16u structType;
  unsigned int has_multiplier_option:1;
  unsigned int has_unit_option:1;
  unsigned int has_value_option:1;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier_option; // element
  EmberExiGeneratedUomType unit_option; // element
  EmberExiGeneratedUInt48 value_option; // element
} EmberExiGeneratedRealEnergy;


#define emberExiRealEnergyStructDataIndex 2065
#define emberExiRealEnergyStructData (emEncoderEvents + emberExiRealEnergyStructDataIndex)
#define emberExiCompareStructRealEnergy(x, y) (emExiCompareStructs(emberExiRealEnergyStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRealEnergy(theStruct) (emExiStructMemoryFootprint(emberExiRealEnergyStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRealEnergy(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRealEnergy(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRealEnergy(EmberExiGeneratedRealEnergy *data);

// Converts struct to XML
void emberExiToXmlStructRealEnergy(EmberExiGeneratedRealEnergy *data);

// Writes XML to a string
int emberExiXmlSprintfStructRealEnergy(int8u *stringBuffer, int offset, EmberExiGeneratedRealEnergy *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRealEnergy(int8u *stringBuffer, int offset, EmberExiGeneratedRealEnergy *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unit for accounting; use
// either 'energyUnit' or 'currencyUnit' to specify the unit for
// 'value'.</xs:documentation>
// </xs:annotation>
// Complex type: AccountingUnit
#define emberExiStructAccountingUnitInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAccountingUnit)))

typedef struct _EmberExiGeneratedAccountingUnit {
  int16u structType;
  unsigned int has_monetaryUnit_option:1;
  unsigned int has_multiplier_option:1;
  unsigned int has_value_option:1;
  EmberExiGeneratedRealEnergy *energyUnit_option; // pointer to energyUnit structs
  EmberExiGeneratedCurrencyCode monetaryUnit_option; // element
  EmberExiGeneratedPowerOfTenMultiplierType multiplier_option; // element
  EmberExiGeneratedUInt48 value_option; // element
} EmberExiGeneratedAccountingUnit;


#define emberExiAccountingUnitStructDataIndex 31
#define emberExiAccountingUnitStructData (emEncoderEvents + emberExiAccountingUnitStructDataIndex)
#define emberExiCompareStructAccountingUnit(x, y) (emExiCompareStructs(emberExiAccountingUnitStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAccountingUnit(theStruct) (emExiStructMemoryFootprint(emberExiAccountingUnitStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAccountingUnit(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAccountingUnit(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAccountingUnit(EmberExiGeneratedAccountingUnit *data);

// Converts struct to XML
void emberExiToXmlStructAccountingUnit(EmberExiGeneratedAccountingUnit *data);

// Writes XML to a string
int emberExiXmlSprintfStructAccountingUnit(int8u *stringBuffer, int offset, EmberExiGeneratedAccountingUnit *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAccountingUnit(int8u *stringBuffer, int offset, EmberExiGeneratedAccountingUnit *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// CreditRegister instances.</xs:documentation>
// </xs:annotation>
// Complex type: CreditRegisterListLink
#define emberExiStructCreditRegisterListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCreditRegisterListLink)))

typedef struct _EmberExiGeneratedCreditRegisterListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedCreditRegisterListLink;


#define emberExiCreditRegisterListLinkStructDataIndex 424
#define emberExiCreditRegisterListLinkStructData (emEncoderEvents + emberExiCreditRegisterListLinkStructDataIndex)
#define emberExiCompareStructCreditRegisterListLink(x, y) (emExiCompareStructs(emberExiCreditRegisterListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCreditRegisterListLink(theStruct) (emExiStructMemoryFootprint(emberExiCreditRegisterListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCreditRegisterListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCreditRegisterListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCreditRegisterListLink(EmberExiGeneratedCreditRegisterListLink *data);

// Converts struct to XML
void emberExiToXmlStructCreditRegisterListLink(EmberExiGeneratedCreditRegisterListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCreditRegisterListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Central Wallet
// 1 - ESI
// 2 -
// Local
// 3 - Credit</xs:documentation>
// </xs:annotation>
// Complex type: PrepayModeType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPrepayModeType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// PrepayOperationStatus.</xs:documentation>
// </xs:annotation>
// Complex type: PrepayOperationStatusLink
#define emberExiStructPrepayOperationStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepayOperationStatusLink)))

typedef struct _EmberExiGeneratedPrepayOperationStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedPrepayOperationStatusLink;


#define emberExiPrepayOperationStatusLinkStructDataIndex 1762
#define emberExiPrepayOperationStatusLinkStructData (emEncoderEvents + emberExiPrepayOperationStatusLinkStructDataIndex)
#define emberExiCompareStructPrepayOperationStatusLink(x, y) (emExiCompareStructs(emberExiPrepayOperationStatusLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPrepayOperationStatusLink(theStruct) (emExiStructMemoryFootprint(emberExiPrepayOperationStatusLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPrepayOperationStatusLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPrepayOperationStatusLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPrepayOperationStatusLink(EmberExiGeneratedPrepayOperationStatusLink *data);

// Converts struct to XML
void emberExiToXmlStructPrepayOperationStatusLink(EmberExiGeneratedPrepayOperationStatusLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructPrepayOperationStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatusLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPrepayOperationStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatusLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// SupplyInterruptionOverride instances.</xs:documentation>
// </xs:annotation>
// Complex type: SupplyInterruptionOverrideListLink
#define emberExiStructSupplyInterruptionOverrideListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupplyInterruptionOverrideListLink)))

typedef struct _EmberExiGeneratedSupplyInterruptionOverrideListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedSupplyInterruptionOverrideListLink;


#define emberExiSupplyInterruptionOverrideListLinkStructDataIndex 2335
#define emberExiSupplyInterruptionOverrideListLinkStructData (emEncoderEvents + emberExiSupplyInterruptionOverrideListLinkStructDataIndex)
#define emberExiCompareStructSupplyInterruptionOverrideListLink(x, y) (emExiCompareStructs(emberExiSupplyInterruptionOverrideListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSupplyInterruptionOverrideListLink(theStruct) (emExiStructMemoryFootprint(emberExiSupplyInterruptionOverrideListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSupplyInterruptionOverrideListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSupplyInterruptionOverrideListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSupplyInterruptionOverrideListLink(EmberExiGeneratedSupplyInterruptionOverrideListLink *data);

// Converts struct to XML
void emberExiToXmlStructSupplyInterruptionOverrideListLink(EmberExiGeneratedSupplyInterruptionOverrideListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Prepayment (inherited from CIM
// SDPAccountingFunction)</xs:documentation>
// </xs:annotation>
// Complex type: Prepayment
#define emberExiStructPrepaymentInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepayment)))

typedef struct _EmberExiGeneratedPrepayment {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedAccountBalanceLink *AccountBalanceLink; // pointer to AccountBalanceLink structs
  EmberExiGeneratedActiveCreditRegisterListLink *ActiveCreditRegisterListLink_option; // pointer to ActiveCreditRegisterListLink structs
  EmberExiGeneratedActiveSupplyInterruptionOverrideListLink *ActiveSupplyInterruptionOverrideListLink_option; // pointer to ActiveSupplyInterruptionOverrideListLink structs
  EmberExiGeneratedAccountingUnit *creditExpiryLevel_option; // pointer to creditExpiryLevel structs
  EmberExiGeneratedCreditRegisterListLink *CreditRegisterListLink; // pointer to CreditRegisterListLink structs
  EmberExiGeneratedAccountingUnit *lowCreditWarningLevel_option; // pointer to lowCreditWarningLevel structs
  EmberExiGeneratedAccountingUnit *lowEmergencyCreditWarningLevel_option; // pointer to lowEmergencyCreditWarningLevel structs
  EmberExiGeneratedPrepayModeType prepayMode; // element
  EmberExiGeneratedPrepayOperationStatusLink *PrepayOperationStatusLink; // pointer to PrepayOperationStatusLink structs
  EmberExiGeneratedSupplyInterruptionOverrideListLink *SupplyInterruptionOverrideListLink; // pointer to SupplyInterruptionOverrideListLink structs
} EmberExiGeneratedPrepayment;


#define emberExiPrepaymentStructDataIndex 1780
#define emberExiPrepaymentStructData (emEncoderEvents + emberExiPrepaymentStructDataIndex)
#define emberExiCompareStructPrepayment(x, y) (emExiCompareStructs(emberExiPrepaymentStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPrepayment(theStruct) (emExiStructMemoryFootprint(emberExiPrepaymentStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPrepayment(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPrepayment(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPrepayment(EmberExiGeneratedPrepayment *data);

// Converts struct to XML
void emberExiToXmlStructPrepayment(EmberExiGeneratedPrepayment *data);

// Writes XML to a string
int emberExiXmlSprintfStructPrepayment(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayment *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPrepayment(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayment *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Current charger
// status</xs:documentation>
// </xs:annotation>
// Complex type: ChargerStatus
#define emberExiStructChargerStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargerStatus)))

typedef struct _EmberExiGeneratedChargerStatus {
  int16u structType;
  unsigned int has_chaTms_option:1;
  EmberExiGeneratedUInt8 batChaSt; // element
  EmberExiGeneratedUInt32 chaTms_option; // element
} EmberExiGeneratedChargerStatus;


#define emberExiChargerStatusStructDataIndex 304
#define emberExiChargerStatusStructData (emEncoderEvents + emberExiChargerStatusStructDataIndex)
#define emberExiCompareStructChargerStatus(x, y) (emExiCompareStructs(emberExiChargerStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargerStatus(theStruct) (emExiStructMemoryFootprint(emberExiChargerStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargerStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargerStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargerStatus(EmberExiGeneratedChargerStatus *data);

// Converts struct to XML
void emberExiToXmlStructChargerStatus(EmberExiGeneratedChargerStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedChargerStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedChargerStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Charge function is for battery
// charging control and actual measurements are through metering, as is the case of
// any type of energy source.</xs:documentation>
// </xs:annotation>
// Complex type: Charger
#define emberExiStructChargerInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCharger)))

typedef struct _EmberExiGeneratedCharger {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedChargerStatus *ChargerStatus_option; // pointer to ChargerStatus structs
  EmberExiGeneratedActivePower *powerRequired; // pointer to powerRequired structs
  EmberExiGeneratedActivePowerChargeRate *rate; // pointer to rate structs
  EmberExiGeneratedUInt8 type; // element
} EmberExiGeneratedCharger;


#define emberExiChargerStructDataIndex 265
#define emberExiChargerStructData (emEncoderEvents + emberExiChargerStructDataIndex)
#define emberExiCompareStructCharger(x, y) (emExiCompareStructs(emberExiChargerStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCharger(theStruct) (emExiStructMemoryFootprint(emberExiChargerStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCharger(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCharger(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCharger(EmberExiGeneratedCharger *data);

// Converts struct to XML
void emberExiToXmlStructCharger(EmberExiGeneratedCharger *data);

// Writes XML to a string
int emberExiXmlSprintfStructCharger(int8u *stringBuffer, int offset, EmberExiGeneratedCharger *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCharger(int8u *stringBuffer, int offset, EmberExiGeneratedCharger *data);

// Struct comparison function
;


// Built-in type: Int16s
typedef int16s EmberExiGeneratedInt16s;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Signed integer, min -32768 max
// +32767</xs:documentation>
// </xs:annotation>
// Simple type: Int16
typedef EmberExiGeneratedInt16s EmberExiGeneratedInt16;



// Complex type: Condition
#define emberExiStructConditionInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCondition)))

typedef struct _EmberExiGeneratedCondition {
  int16u structType;
  EmberExiGeneratedUInt8 attributeIdentifier; // element
  EmberExiGeneratedInt16 lowerThreshold; // element
  EmberExiGeneratedInt16 upperThreshold; // element
} EmberExiGeneratedCondition;


#define emberExiConditionStructDataIndex 316
#define emberExiConditionStructData (emEncoderEvents + emberExiConditionStructDataIndex)
#define emberExiCompareStructCondition(x, y) (emExiCompareStructs(emberExiConditionStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCondition(theStruct) (emExiStructMemoryFootprint(emberExiConditionStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCondition(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCondition(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCondition(EmberExiGeneratedCondition *data);

// Converts struct to XML
void emberExiToXmlStructCondition(EmberExiGeneratedCondition *data);

// Writes XML to a string
int emberExiXmlSprintfStructCondition(int8u *stringBuffer, int offset, EmberExiGeneratedCondition *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCondition(int8u *stringBuffer, int offset, EmberExiGeneratedCondition *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Set of values obtained from
// the meter.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingBase
#define emberExiStructMeterReadingBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingBase)))

typedef struct _EmberExiGeneratedMeterReadingBase {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
} EmberExiGeneratedMeterReadingBase;


#define emberExiMeterReadingBaseStructDataIndex 1519
#define emberExiMeterReadingBaseStructData (emEncoderEvents + emberExiMeterReadingBaseStructDataIndex)
#define emberExiCompareStructMeterReadingBase(x, y) (emExiCompareStructs(emberExiMeterReadingBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMeterReadingBase(theStruct) (emExiStructMemoryFootprint(emberExiMeterReadingBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMeterReadingBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMeterReadingBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMeterReadingBase(EmberExiGeneratedMeterReadingBase *data);

// Converts struct to XML
void emberExiToXmlStructMeterReadingBase(EmberExiGeneratedMeterReadingBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingBase *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Mimic of MeterReading used for
// managing mirrors.</xs:documentation>
// </xs:annotation>
// Complex type: MirrorMeterReading
#define emberExiStructMirrorMeterReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorMeterReading)))

typedef struct _EmberExiGeneratedMirrorMeterReading {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_lastUpdateTime_option:1;
  unsigned int has_nextUpdateTime_option:1;
  unsigned int flagPadding:10;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  int8u IntervalBlock_count; // number of IntervalBlock structs
  EmberExiGeneratedIntervalBlock *IntervalBlock_array; // pointer to IntervalBlock structs
  EmberExiGeneratedTimeType lastUpdateTime_option; // element
  EmberExiGeneratedTimeType nextUpdateTime_option; // element
  int8u Reading_count; // number of Reading structs
  EmberExiGeneratedReading *Reading_array; // pointer to Reading structs
  EmberExiGeneratedReadingType *ReadingType; // pointer to ReadingType structs
} EmberExiGeneratedMirrorMeterReading;


#define emberExiMirrorMeterReadingStructDataIndex 1549
#define emberExiMirrorMeterReadingStructData (emEncoderEvents + emberExiMirrorMeterReadingStructDataIndex)
#define emberExiCompareStructMirrorMeterReading(x, y) (emExiCompareStructs(emberExiMirrorMeterReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMirrorMeterReading(theStruct) (emExiStructMemoryFootprint(emberExiMirrorMeterReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMirrorMeterReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMirrorMeterReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMirrorMeterReading(EmberExiGeneratedMirrorMeterReading *data);

// Converts struct to XML
void emberExiToXmlStructMirrorMeterReading(EmberExiGeneratedMirrorMeterReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructMirrorMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMirrorMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorMeterReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A parallel to UsagePoint to
// support mirroring</xs:documentation>
// </xs:annotation>
// Complex type: MirrorUsagePoint
#define emberExiStructMirrorUsagePointInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorUsagePoint)))

typedef struct _EmberExiGeneratedMirrorUsagePoint {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedHexBinary16 roleFlags; // element
  EmberExiGeneratedUInt8 status; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedHexBinary32 manufacturerID; // element
  int8u MirrorMeterReading_count; // number of MirrorMeterReading structs
  EmberExiGeneratedMirrorMeterReading *MirrorMeterReading_array; // pointer to MirrorMeterReading structs
  EmberExiGeneratedString20 serialNumber; // element
  EmberExiGeneratedServiceCategory *ServiceCategory; // pointer to ServiceCategory structs
} EmberExiGeneratedMirrorUsagePoint;


#define emberExiMirrorUsagePointStructDataIndex 1579
#define emberExiMirrorUsagePointStructData (emEncoderEvents + emberExiMirrorUsagePointStructDataIndex)
#define emberExiCompareStructMirrorUsagePoint(x, y) (emExiCompareStructs(emberExiMirrorUsagePointStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMirrorUsagePoint(theStruct) (emExiStructMemoryFootprint(emberExiMirrorUsagePointStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMirrorUsagePoint(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMirrorUsagePoint(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMirrorUsagePoint(EmberExiGeneratedMirrorUsagePoint *data);

// Converts struct to XML
void emberExiToXmlStructMirrorUsagePoint(EmberExiGeneratedMirrorUsagePoint *data);

// Writes XML to a string
int emberExiXmlSprintfStructMirrorUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePoint *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMirrorUsagePoint(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePoint *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a change to the
// service status.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceChange
#define emberExiStructServiceChangeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceChange)))

typedef struct _EmberExiGeneratedServiceChange {
  int16u structType;
  EmberExiGeneratedCreditStatusType newStatus; // element
  EmberExiGeneratedTimeType startTime; // element
} EmberExiGeneratedServiceChange;


#define emberExiServiceChangeStructDataIndex 2173
#define emberExiServiceChangeStructData (emEncoderEvents + emberExiServiceChangeStructDataIndex)
#define emberExiCompareStructServiceChange(x, y) (emExiCompareStructs(emberExiServiceChangeStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructServiceChange(theStruct) (emExiStructMemoryFootprint(emberExiServiceChangeStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructServiceChange(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructServiceChange(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructServiceChange(EmberExiGeneratedServiceChange *data);

// Converts struct to XML
void emberExiToXmlStructServiceChange(EmberExiGeneratedServiceChange *data);

// Writes XML to a string
int emberExiXmlSprintfStructServiceChange(int8u *stringBuffer, int offset, EmberExiGeneratedServiceChange *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructServiceChange(int8u *stringBuffer, int offset, EmberExiGeneratedServiceChange *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// IntervalBlock instances.</xs:documentation>
// </xs:annotation>
// Complex type: IntervalBlockListLink
#define emberExiStructIntervalBlockListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIntervalBlockListLink)))

typedef struct _EmberExiGeneratedIntervalBlockListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedIntervalBlockListLink;


#define emberExiIntervalBlockListLinkStructDataIndex 1294
#define emberExiIntervalBlockListLinkStructData (emEncoderEvents + emberExiIntervalBlockListLinkStructDataIndex)
#define emberExiCompareStructIntervalBlockListLink(x, y) (emExiCompareStructs(emberExiIntervalBlockListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIntervalBlockListLink(theStruct) (emExiStructMemoryFootprint(emberExiIntervalBlockListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIntervalBlockListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIntervalBlockListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIntervalBlockListLink(EmberExiGeneratedIntervalBlockListLink *data);

// Converts struct to XML
void emberExiToXmlStructIntervalBlockListLink(EmberExiGeneratedIntervalBlockListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructIntervalBlockListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIntervalBlockListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIntervalBlockListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a
// Reading.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingLink
#define emberExiStructReadingLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingLink)))

typedef struct _EmberExiGeneratedReadingLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedReadingLink;


#define emberExiReadingLinkStructDataIndex 1972
#define emberExiReadingLinkStructData (emEncoderEvents + emberExiReadingLinkStructDataIndex)
#define emberExiCompareStructReadingLink(x, y) (emExiCompareStructs(emberExiReadingLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingLink(theStruct) (emExiStructMemoryFootprint(emberExiReadingLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingLink(EmberExiGeneratedReadingLink *data);

// Converts struct to XML
void emberExiToXmlStructReadingLink(EmberExiGeneratedReadingLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// ReadingType.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingTypeLink
#define emberExiStructReadingTypeLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingTypeLink)))

typedef struct _EmberExiGeneratedReadingTypeLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedReadingTypeLink;


#define emberExiReadingTypeLinkStructDataIndex 2041
#define emberExiReadingTypeLinkStructData (emEncoderEvents + emberExiReadingTypeLinkStructDataIndex)
#define emberExiCompareStructReadingTypeLink(x, y) (emExiCompareStructs(emberExiReadingTypeLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingTypeLink(theStruct) (emExiStructMemoryFootprint(emberExiReadingTypeLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingTypeLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingTypeLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingTypeLink(EmberExiGeneratedReadingTypeLink *data);

// Converts struct to XML
void emberExiToXmlStructReadingTypeLink(EmberExiGeneratedReadingTypeLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingTypeLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingTypeLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Set of values obtained from
// the meter.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReading
#define emberExiStructMeterReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReading)))

typedef struct _EmberExiGeneratedMeterReading {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedIntervalBlockListLink *IntervalBlockListLink_option; // pointer to IntervalBlockListLink structs
  EmberExiGeneratedReadingLink *ReadingLink_option; // pointer to ReadingLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
} EmberExiGeneratedMeterReading;


#define emberExiMeterReadingStructDataIndex 1495
#define emberExiMeterReadingStructData (emEncoderEvents + emberExiMeterReadingStructDataIndex)
#define emberExiCompareStructMeterReading(x, y) (emExiCompareStructs(emberExiMeterReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMeterReading(theStruct) (emExiStructMemoryFootprint(emberExiMeterReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMeterReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMeterReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMeterReading(EmberExiGeneratedMeterReading *data);

// Converts struct to XML
void emberExiToXmlStructMeterReading(EmberExiGeneratedMeterReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMeterReading(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains values that forecast
// a future reading for the time or interval
// specified.</xs:documentation>
// </xs:annotation>
// Complex type: ProjectionReading
#define emberExiStructProjectionReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedProjectionReading)))

typedef struct _EmberExiGeneratedProjectionReading {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedIntervalBlockListLink *IntervalBlockListLink_option; // pointer to IntervalBlockListLink structs
  EmberExiGeneratedReadingLink *ReadingLink_option; // pointer to ReadingLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
} EmberExiGeneratedProjectionReading;


#define emberExiProjectionReadingStructDataIndex 1873
#define emberExiProjectionReadingStructData (emEncoderEvents + emberExiProjectionReadingStructDataIndex)
#define emberExiCompareStructProjectionReading(x, y) (emExiCompareStructs(emberExiProjectionReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructProjectionReading(theStruct) (emExiStructMemoryFootprint(emberExiProjectionReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructProjectionReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructProjectionReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructProjectionReading(EmberExiGeneratedProjectionReading *data);

// Converts struct to XML
void emberExiToXmlStructProjectionReading(EmberExiGeneratedProjectionReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructProjectionReading(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructProjectionReading(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// ProjectionReading objects.</xs:documentation>
// </xs:annotation>
// Complex type: ProjectionReadingList
#define emberExiStructProjectionReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedProjectionReadingList)))

typedef struct _EmberExiGeneratedProjectionReadingList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u ProjectionReading_count; // number of ProjectionReading structs
  EmberExiGeneratedProjectionReading *ProjectionReading_array; // pointer to ProjectionReading structs
} EmberExiGeneratedProjectionReadingList;


#define emberExiProjectionReadingListStructDataIndex 1879
#define emberExiProjectionReadingListStructData (emEncoderEvents + emberExiProjectionReadingListStructDataIndex)
#define emberExiCompareStructProjectionReadingList(x, y) (emExiCompareStructs(emberExiProjectionReadingListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructProjectionReadingList(theStruct) (emExiStructMemoryFootprint(emberExiProjectionReadingListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructProjectionReadingList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructProjectionReadingList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructProjectionReadingList(EmberExiGeneratedProjectionReadingList *data);

// Converts struct to XML
void emberExiToXmlStructProjectionReadingList(EmberExiGeneratedProjectionReadingList *data);

// Writes XML to a string
int emberExiXmlSprintfStructProjectionReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructProjectionReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>To be used to present readings
// that have been processed and possibly corrected (as allowed, due to missing or
// incorrect data) by backend systems. This includes quality codes X.0.1 (valid,
// verified at backend), X.8.0 (estimated) and X.11.0 / X.11.1 (derived /
// corrected).</xs:documentation>
// </xs:annotation>
// Complex type: HistoricalReading
#define emberExiStructHistoricalReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedHistoricalReading)))

typedef struct _EmberExiGeneratedHistoricalReading {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedIntervalBlockListLink *IntervalBlockListLink_option; // pointer to IntervalBlockListLink structs
  EmberExiGeneratedReadingLink *ReadingLink_option; // pointer to ReadingLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
} EmberExiGeneratedHistoricalReading;


#define emberExiHistoricalReadingStructDataIndex 1228
#define emberExiHistoricalReadingStructData (emEncoderEvents + emberExiHistoricalReadingStructDataIndex)
#define emberExiCompareStructHistoricalReading(x, y) (emExiCompareStructs(emberExiHistoricalReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructHistoricalReading(theStruct) (emExiStructMemoryFootprint(emberExiHistoricalReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructHistoricalReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructHistoricalReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructHistoricalReading(EmberExiGeneratedHistoricalReading *data);

// Converts struct to XML
void emberExiToXmlStructHistoricalReading(EmberExiGeneratedHistoricalReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructHistoricalReading(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructHistoricalReading(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// DemandResponseProgram.</xs:documentation>
// </xs:annotation>
// Complex type: DemandResponseProgramLink
#define emberExiStructDemandResponseProgramLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDemandResponseProgramLink)))

typedef struct _EmberExiGeneratedDemandResponseProgramLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDemandResponseProgramLink;


#define emberExiDemandResponseProgramLinkStructDataIndex 727
#define emberExiDemandResponseProgramLinkStructData (emEncoderEvents + emberExiDemandResponseProgramLinkStructDataIndex)
#define emberExiCompareStructDemandResponseProgramLink(x, y) (emExiCompareStructs(emberExiDemandResponseProgramLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDemandResponseProgramLink(theStruct) (emExiStructMemoryFootprint(emberExiDemandResponseProgramLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDemandResponseProgramLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDemandResponseProgramLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDemandResponseProgramLink(EmberExiGeneratedDemandResponseProgramLink *data);

// Converts struct to XML
void emberExiToXmlStructDemandResponseProgramLink(EmberExiGeneratedDemandResponseProgramLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDemandResponseProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDemandResponseProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedDemandResponseProgramLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Indicates current consumption
// status and ability to shed load.</xs:documentation>
// </xs:annotation>
// Complex type: LoadShedAvailability
#define emberExiStructLoadShedAvailabilityInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLoadShedAvailability)))

typedef struct _EmberExiGeneratedLoadShedAvailability {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_availabilityDuration_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedUInt32 availabilityDuration_option; // element
  EmberExiGeneratedBoolean consuming; // element
  EmberExiGeneratedDemandResponseProgramLink *DemandResponseProgramLink_option; // pointer to DemandResponseProgramLink structs
  EmberExiGeneratedBoolean shed; // element
  EmberExiGeneratedUnitType type; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedLoadShedAvailability;


#define emberExiLoadShedAvailabilityStructDataIndex 1369
#define emberExiLoadShedAvailabilityStructData (emEncoderEvents + emberExiLoadShedAvailabilityStructDataIndex)
#define emberExiCompareStructLoadShedAvailability(x, y) (emExiCompareStructs(emberExiLoadShedAvailabilityStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLoadShedAvailability(theStruct) (emExiStructMemoryFootprint(emberExiLoadShedAvailabilityStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLoadShedAvailability(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLoadShedAvailability(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLoadShedAvailability(EmberExiGeneratedLoadShedAvailability *data);

// Converts struct to XML
void emberExiToXmlStructLoadShedAvailability(EmberExiGeneratedLoadShedAvailability *data);

// Writes XML to a string
int emberExiXmlSprintfStructLoadShedAvailability(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailability *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLoadShedAvailability(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailability *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Ratio of real to apparent
// power</xs:documentation>
// </xs:annotation>
// Complex type: PowerFactor
#define emberExiStructPowerFactorInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPowerFactor)))

typedef struct _EmberExiGeneratedPowerFactor {
  int16u structType;
  unsigned int has_multiplier_option:1;
  unsigned int has_unit_option:1;
  unsigned int has_value_option:1;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier_option; // element
  EmberExiGeneratedUomType unit_option; // element
  EmberExiGeneratedUInt16 value_option; // element
} EmberExiGeneratedPowerFactor;


#define emberExiPowerFactorStructDataIndex 1696
#define emberExiPowerFactorStructData (emEncoderEvents + emberExiPowerFactorStructDataIndex)
#define emberExiCompareStructPowerFactor(x, y) (emExiCompareStructs(emberExiPowerFactorStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPowerFactor(theStruct) (emExiStructMemoryFootprint(emberExiPowerFactorStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPowerFactor(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPowerFactor(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPowerFactor(EmberExiGeneratedPowerFactor *data);

// Converts struct to XML
void emberExiToXmlStructPowerFactor(EmberExiGeneratedPowerFactor *data);

// Writes XML to a string
int emberExiXmlSprintfStructPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedPowerFactor *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedPowerFactor *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Distributed Energy Resource
// (DER) control information</xs:documentation>
// </xs:annotation>
// Complex type: DERControl
#define emberExiStructDERControlInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERControl)))

typedef struct _EmberExiGeneratedDERControl {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_gnBlk_option:1;
  unsigned int has_gnCtl_option:1;
  unsigned int has_gnRL_option:1;
  unsigned int flagPadding:9;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedBoolean gnBlk_option; // element
  EmberExiGeneratedBoolean gnCtl_option; // element
  EmberExiGeneratedBoolean gnRL_option; // element
  EmberExiGeneratedActivePower *maxOperatingPower; // pointer to maxOperatingPower structs
  EmberExiGeneratedRandomizedDateTimeInterval *scheduledInterval; // pointer to scheduledInterval structs
  EmberExiGeneratedStatus *Status_option; // pointer to Status structs
  EmberExiGeneratedPowerFactor *targetPowerFactor; // pointer to targetPowerFactor structs
  EmberExiGeneratedBoolean varSupportMode; // element
} EmberExiGeneratedDERControl;


#define emberExiDERControlStructDataIndex 538
#define emberExiDERControlStructData (emEncoderEvents + emberExiDERControlStructDataIndex)
#define emberExiCompareStructDERControl(x, y) (emExiCompareStructs(emberExiDERControlStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERControl(theStruct) (emExiStructMemoryFootprint(emberExiDERControlStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERControl(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERControl(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERControl(EmberExiGeneratedDERControl *data);

// Converts struct to XML
void emberExiToXmlStructDERControl(EmberExiGeneratedDERControl *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERControl(int8u *stringBuffer, int offset, EmberExiGeneratedDERControl *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERControl(int8u *stringBuffer, int offset, EmberExiGeneratedDERControl *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// DERControl objects.</xs:documentation>
// </xs:annotation>
// Complex type: DERControlList
#define emberExiStructDERControlListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERControlList)))

typedef struct _EmberExiGeneratedDERControlList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u DERControl_count; // number of DERControl structs
  EmberExiGeneratedDERControl *DERControl_array; // pointer to DERControl structs
} EmberExiGeneratedDERControlList;


#define emberExiDERControlListStructDataIndex 580
#define emberExiDERControlListStructData (emEncoderEvents + emberExiDERControlListStructDataIndex)
#define emberExiCompareStructDERControlList(x, y) (emExiCompareStructs(emberExiDERControlListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERControlList(theStruct) (emExiStructMemoryFootprint(emberExiDERControlListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERControlList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERControlList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERControlList(EmberExiGeneratedDERControlList *data);

// Converts struct to XML
void emberExiToXmlStructDERControlList(EmberExiGeneratedDERControlList *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERControlList(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERControlList(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of Charger
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: ChargerListLink
#define emberExiStructChargerListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargerListLink)))

typedef struct _EmberExiGeneratedChargerListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedChargerListLink;


#define emberExiChargerListLinkStructDataIndex 298
#define emberExiChargerListLinkStructData (emEncoderEvents + emberExiChargerListLinkStructDataIndex)
#define emberExiCompareStructChargerListLink(x, y) (emExiCompareStructs(emberExiChargerListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargerListLink(theStruct) (emExiStructMemoryFootprint(emberExiChargerListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargerListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargerListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargerListLink(EmberExiGeneratedChargerListLink *data);

// Converts struct to XML
void emberExiToXmlStructChargerListLink(EmberExiGeneratedChargerListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargerListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargerListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargerListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Indicates the priority of a
// message:
// 0 - Low
// 1 - Normal
// 2 - High
// 3 -
// Critical</xs:documentation>
// </xs:annotation>
// Complex type: PriorityType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPriorityType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Text message such as a
// notification</xs:documentation>
// </xs:annotation>
// Complex type: TextMessage
#define emberExiStructTextMessageInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTextMessage)))

typedef struct _EmberExiGeneratedTextMessage {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedTimeType createdDateTime; // element
  EmberExiGeneratedEndDeviceCategoryType deviceCategory; // element
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedUInt16 messageLength; // element
  EmberExiGeneratedString20 originator; // element
  EmberExiGeneratedPriorityType priority; // element
  EmberExiGeneratedUInt8 status; // element
  EmberExiGeneratedString textMessage; // element
} EmberExiGeneratedTextMessage;


#define emberExiTextMessageStructDataIndex 2461
#define emberExiTextMessageStructData (emEncoderEvents + emberExiTextMessageStructDataIndex)
#define emberExiCompareStructTextMessage(x, y) (emExiCompareStructs(emberExiTextMessageStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTextMessage(theStruct) (emExiStructMemoryFootprint(emberExiTextMessageStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTextMessage(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTextMessage(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTextMessage(EmberExiGeneratedTextMessage *data);

// Converts struct to XML
void emberExiToXmlStructTextMessage(EmberExiGeneratedTextMessage *data);

// Writes XML to a string
int emberExiXmlSprintfStructTextMessage(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessage *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTextMessage(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessage *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// TextMessage objects.</xs:documentation>
// </xs:annotation>
// Complex type: TextMessageList
#define emberExiStructTextMessageListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTextMessageList)))

typedef struct _EmberExiGeneratedTextMessageList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u TextMessage_count; // number of TextMessage structs
  EmberExiGeneratedTextMessage *TextMessage_array; // pointer to TextMessage structs
} EmberExiGeneratedTextMessageList;


#define emberExiTextMessageListStructDataIndex 2494
#define emberExiTextMessageListStructData (emEncoderEvents + emberExiTextMessageListStructDataIndex)
#define emberExiCompareStructTextMessageList(x, y) (emExiCompareStructs(emberExiTextMessageListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTextMessageList(theStruct) (emExiStructMemoryFootprint(emberExiTextMessageListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTextMessageList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTextMessageList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTextMessageList(EmberExiGeneratedTextMessageList *data);

// Converts struct to XML
void emberExiToXmlStructTextMessageList(EmberExiGeneratedTextMessageList *data);

// Writes XML to a string
int emberExiXmlSprintfStructTextMessageList(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTextMessageList(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A 64-bit field encoded as a
// hex string (16 characters / 8 octets)</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary64
typedef struct {
  int8u length;
  int8u bytes[8];
} EmberExiGeneratedHexBinary64;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// EndDevice.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceLink
#define emberExiStructEndDeviceLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceLink)))

typedef struct _EmberExiGeneratedEndDeviceLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedEndDeviceLink;


#define emberExiEndDeviceLinkStructDataIndex 1156
#define emberExiEndDeviceLinkStructData (emEncoderEvents + emberExiEndDeviceLinkStructDataIndex)
#define emberExiCompareStructEndDeviceLink(x, y) (emExiCompareStructs(emberExiEndDeviceLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceLink(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceLink(EmberExiGeneratedEndDeviceLink *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceLink(EmberExiGeneratedEndDeviceLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// ServiceSupplier.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceSupplierLink
#define emberExiStructServiceSupplierLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceSupplierLink)))

typedef struct _EmberExiGeneratedServiceSupplierLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedServiceSupplierLink;


#define emberExiServiceSupplierLinkStructDataIndex 2203
#define emberExiServiceSupplierLinkStructData (emEncoderEvents + emberExiServiceSupplierLinkStructDataIndex)
#define emberExiCompareStructServiceSupplierLink(x, y) (emExiCompareStructs(emberExiServiceSupplierLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructServiceSupplierLink(theStruct) (emExiStructMemoryFootprint(emberExiServiceSupplierLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructServiceSupplierLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructServiceSupplierLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructServiceSupplierLink(EmberExiGeneratedServiceSupplierLink *data);

// Converts struct to XML
void emberExiToXmlStructServiceSupplierLink(EmberExiGeneratedServiceSupplierLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructServiceSupplierLink(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructServiceSupplierLink(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The algorithm used to produce
// the signature.
// 0 - Reserved
// 1 - ECDSA</xs:documentation>
// </xs:annotation>
// Complex type: SignatureAlgorithmType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedSignatureAlgorithmType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A digital signature, produced
// by encrypting the Response message using a private
// key.</xs:documentation>
// </xs:annotation>
// Complex type: Signature
#define emberExiStructSignatureInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSignature)))

typedef struct _EmberExiGeneratedSignature {
  int16u structType;
  EmberExiGeneratedSignatureAlgorithmType algorithm; // element
  EmberExiGeneratedString42 value; // element
} EmberExiGeneratedSignature;


#define emberExiSignatureStructDataIndex 2233
#define emberExiSignatureStructData (emEncoderEvents + emberExiSignatureStructDataIndex)
#define emberExiCompareStructSignature(x, y) (emExiCompareStructs(emberExiSignatureStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSignature(theStruct) (emExiStructMemoryFootprint(emberExiSignatureStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSignature(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSignature(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSignature(EmberExiGeneratedSignature *data);

// Converts struct to XML
void emberExiToXmlStructSignature(EmberExiGeneratedSignature *data);

// Writes XML to a string
int emberExiXmlSprintfStructSignature(int8u *stringBuffer, int offset, EmberExiGeneratedSignature *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSignature(int8u *stringBuffer, int offset, EmberExiGeneratedSignature *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Parent class for different
// groupings of information collected and managed as a part of a business process.
// It will frequently contain references to other objects, such as assets, people
// and power system resources.</xs:documentation>
// </xs:annotation>
// Complex type: Document
#define emberExiStructDocumentInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDocument)))

typedef struct _EmberExiGeneratedDocument {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_subject_option:1;
  unsigned int flagPadding:9;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 category_option; // element
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedStatusType status_option; // element
  EmberExiGeneratedHexBinary64 subject_option; // element
} EmberExiGeneratedDocument;


#define emberExiDocumentStructDataIndex 904
#define emberExiDocumentStructData (emEncoderEvents + emberExiDocumentStructDataIndex)
#define emberExiCompareStructDocument(x, y) (emExiCompareStructs(emberExiDocumentStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDocument(theStruct) (emExiStructMemoryFootprint(emberExiDocumentStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDocument(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDocument(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDocument(EmberExiGeneratedDocument *data);

// Converts struct to XML
void emberExiToXmlStructDocument(EmberExiGeneratedDocument *data);

// Writes XML to a string
int emberExiXmlSprintfStructDocument(int8u *stringBuffer, int offset, EmberExiGeneratedDocument *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDocument(int8u *stringBuffer, int offset, EmberExiGeneratedDocument *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Confirmation such as a
// confirmation of a notification message. For this type of Document, the class
// (tag) name of the original resource publication being responded to should be
// specified as the category.</xs:documentation>
// </xs:annotation>
// Complex type: Response
#define emberExiStructResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponse)))

typedef struct _EmberExiGeneratedResponse {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_subject_option:1;
  unsigned int flagPadding:9;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 category_option; // element
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedStatusType status_option; // element
  EmberExiGeneratedHexBinary64 subject_option; // element
  EmberExiGeneratedEndDeviceLink *EndDeviceLink; // pointer to EndDeviceLink structs
  EmberExiGeneratedServiceSupplierLink *ServiceSupplierLink; // pointer to ServiceSupplierLink structs
  EmberExiGeneratedSignature *Signature_option; // pointer to Signature structs
} EmberExiGeneratedResponse;


#define emberExiResponseStructDataIndex 2122
#define emberExiResponseStructData (emEncoderEvents + emberExiResponseStructDataIndex)
#define emberExiCompareStructResponse(x, y) (emExiCompareStructs(emberExiResponseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructResponse(theStruct) (emExiStructMemoryFootprint(emberExiResponseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructResponse(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructResponse(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructResponse(EmberExiGeneratedResponse *data);

// Converts struct to XML
void emberExiToXmlStructResponse(EmberExiGeneratedResponse *data);

// Writes XML to a string
int emberExiXmlSprintfStructResponse(int8u *stringBuffer, int offset, EmberExiGeneratedResponse *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructResponse(int8u *stringBuffer, int offset, EmberExiGeneratedResponse *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// Response objects.</xs:documentation>
// </xs:annotation>
// Complex type: ResponseList
#define emberExiStructResponseListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponseList)))

typedef struct _EmberExiGeneratedResponseList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u Response_count; // number of Response structs
  EmberExiGeneratedResponse *Response_array; // pointer to Response structs
} EmberExiGeneratedResponseList;


#define emberExiResponseListStructDataIndex 2146
#define emberExiResponseListStructData (emEncoderEvents + emberExiResponseListStructDataIndex)
#define emberExiCompareStructResponseList(x, y) (emExiCompareStructs(emberExiResponseListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructResponseList(theStruct) (emExiStructMemoryFootprint(emberExiResponseListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructResponseList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructResponseList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructResponseList(EmberExiGeneratedResponseList *data);

// Converts struct to XML
void emberExiToXmlStructResponseList(EmberExiGeneratedResponseList *data);

// Writes XML to a string
int emberExiXmlSprintfStructResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructResponseList(int8u *stringBuffer, int offset, EmberExiGeneratedResponseList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>RFC 4646 identifier of a
// language-region</xs:documentation>
// </xs:annotation>
// Complex type: LocaleType
typedef EmberExiGeneratedString42 EmberExiGeneratedLocaleType; // based-on String42



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a locale that is
// supported</xs:documentation>
// </xs:annotation>
// Complex type: SupportedLocale
#define emberExiStructSupportedLocaleInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupportedLocale)))

typedef struct _EmberExiGeneratedSupportedLocale {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedLocaleType locale; // element
} EmberExiGeneratedSupportedLocale;


#define emberExiSupportedLocaleStructDataIndex 2341
#define emberExiSupportedLocaleStructData (emEncoderEvents + emberExiSupportedLocaleStructDataIndex)
#define emberExiCompareStructSupportedLocale(x, y) (emExiCompareStructs(emberExiSupportedLocaleStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSupportedLocale(theStruct) (emExiStructMemoryFootprint(emberExiSupportedLocaleStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSupportedLocale(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSupportedLocale(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSupportedLocale(EmberExiGeneratedSupportedLocale *data);

// Converts struct to XML
void emberExiToXmlStructSupportedLocale(EmberExiGeneratedSupportedLocale *data);

// Writes XML to a string
int emberExiXmlSprintfStructSupportedLocale(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocale *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSupportedLocale(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocale *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// ServiceSupplier objects.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceSupplierList
#define emberExiStructServiceSupplierListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceSupplierList)))

typedef struct _EmberExiGeneratedServiceSupplierList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u ServiceSupplier_count; // number of ServiceSupplier structs
  EmberExiGeneratedServiceSupplier *ServiceSupplier_array; // pointer to ServiceSupplier structs
} EmberExiGeneratedServiceSupplierList;


#define emberExiServiceSupplierListStructDataIndex 2209
#define emberExiServiceSupplierListStructData (emEncoderEvents + emberExiServiceSupplierListStructDataIndex)
#define emberExiCompareStructServiceSupplierList(x, y) (emExiCompareStructs(emberExiServiceSupplierListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructServiceSupplierList(theStruct) (emExiStructMemoryFootprint(emberExiServiceSupplierListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructServiceSupplierList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructServiceSupplierList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructServiceSupplierList(EmberExiGeneratedServiceSupplierList *data);

// Converts struct to XML
void emberExiToXmlStructServiceSupplierList(EmberExiGeneratedServiceSupplierList *data);

// Writes XML to a string
int emberExiXmlSprintfStructServiceSupplierList(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructServiceSupplierList(int8u *stringBuffer, int offset, EmberExiGeneratedServiceSupplierList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Holds the information related
// to a client subscription to receive updates to a resource
// automatically.</xs:documentation>
// </xs:annotation>
// Complex type: Subscription
#define emberExiStructSubscriptionInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscription)))

typedef struct _EmberExiGeneratedSubscription {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedCondition *Condition_option; // pointer to Condition structs
  EmberExiGeneratedInt16 limit; // element
  EmberExiGeneratedString newResourceURI_option; // element
  EmberExiGeneratedString pushURI; // element
  EmberExiGeneratedString resource; // element
  EmberExiGeneratedUInt8 status; // element
} EmberExiGeneratedSubscription;


#define emberExiSubscriptionStructDataIndex 2266
#define emberExiSubscriptionStructData (emEncoderEvents + emberExiSubscriptionStructDataIndex)
#define emberExiCompareStructSubscription(x, y) (emExiCompareStructs(emberExiSubscriptionStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSubscription(theStruct) (emExiStructMemoryFootprint(emberExiSubscriptionStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSubscription(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSubscription(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSubscription(EmberExiGeneratedSubscription *data);

// Converts struct to XML
void emberExiToXmlStructSubscription(EmberExiGeneratedSubscription *data);

// Writes XML to a string
int emberExiXmlSprintfStructSubscription(int8u *stringBuffer, int offset, EmberExiGeneratedSubscription *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSubscription(int8u *stringBuffer, int offset, EmberExiGeneratedSubscription *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of Response
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: ResponseListLink
#define emberExiStructResponseListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponseListLink)))

typedef struct _EmberExiGeneratedResponseListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedResponseListLink;


#define emberExiResponseListLinkStructDataIndex 2158
#define emberExiResponseListLinkStructData (emEncoderEvents + emberExiResponseListLinkStructDataIndex)
#define emberExiCompareStructResponseListLink(x, y) (emExiCompareStructs(emberExiResponseListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructResponseListLink(theStruct) (emExiStructMemoryFootprint(emberExiResponseListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructResponseListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructResponseListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructResponseListLink(EmberExiGeneratedResponseListLink *data);

// Converts struct to XML
void emberExiToXmlStructResponseListLink(EmberExiGeneratedResponseListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold Reading
// objects.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingList
#define emberExiStructReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingList)))

typedef struct _EmberExiGeneratedReadingList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u Reading_count; // number of Reading structs
  EmberExiGeneratedReading *Reading_array; // pointer to Reading structs
} EmberExiGeneratedReadingList;


#define emberExiReadingListStructDataIndex 1978
#define emberExiReadingListStructData (emEncoderEvents + emberExiReadingListStructDataIndex)
#define emberExiCompareStructReadingList(x, y) (emExiCompareStructs(emberExiReadingListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingList(theStruct) (emExiStructMemoryFootprint(emberExiReadingListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingList(EmberExiGeneratedReadingList *data);

// Converts struct to XML
void emberExiToXmlStructReadingList(EmberExiGeneratedReadingList *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// DeviceStatus.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceStatusLink
#define emberExiStructDeviceStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceStatusLink)))

typedef struct _EmberExiGeneratedDeviceStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDeviceStatusLink;


#define emberExiDeviceStatusLinkStructDataIndex 898
#define emberExiDeviceStatusLinkStructData (emEncoderEvents + emberExiDeviceStatusLinkStructDataIndex)
#define emberExiCompareStructDeviceStatusLink(x, y) (emExiCompareStructs(emberExiDeviceStatusLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDeviceStatusLink(theStruct) (emExiStructMemoryFootprint(emberExiDeviceStatusLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDeviceStatusLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDeviceStatusLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data);

// Converts struct to XML
void emberExiToXmlStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDeviceStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatusLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDeviceStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatusLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of File
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: FileListLink
#define emberExiStructFileListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileListLink)))

typedef struct _EmberExiGeneratedFileListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedFileListLink;


#define emberExiFileListLinkStructDataIndex 1207
#define emberExiFileListLinkStructData (emEncoderEvents + emberExiFileListLinkStructDataIndex)
#define emberExiCompareStructFileListLink(x, y) (emExiCompareStructs(emberExiFileListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFileListLink(theStruct) (emExiStructMemoryFootprint(emberExiFileListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFileListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFileListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFileListLink(EmberExiGeneratedFileListLink *data);

// Converts struct to XML
void emberExiToXmlStructFileListLink(EmberExiGeneratedFileListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructFileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// Registration.</xs:documentation>
// </xs:annotation>
// Complex type: RegistrationLink
#define emberExiStructRegistrationLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRegistrationLink)))

typedef struct _EmberExiGeneratedRegistrationLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedRegistrationLink;


#define emberExiRegistrationLinkStructDataIndex 2089
#define emberExiRegistrationLinkStructData (emEncoderEvents + emberExiRegistrationLinkStructDataIndex)
#define emberExiCompareStructRegistrationLink(x, y) (emExiCompareStructs(emberExiRegistrationLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRegistrationLink(theStruct) (emExiStructMemoryFootprint(emberExiRegistrationLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRegistrationLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRegistrationLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRegistrationLink(EmberExiGeneratedRegistrationLink *data);

// Converts struct to XML
void emberExiToXmlStructRegistrationLink(EmberExiGeneratedRegistrationLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructRegistrationLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRegistrationLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Asset container that performs
// one or more end device functions. Contains information about individual devices
// in the network. One type of end device is a meter which can perform metering,
// load management, connect/disconnect, accounting functions, etc. Some end
// devices, such as ones monitoring and controlling air conditioner, refrigerator,
// pool pumps may be connected to a meter. All end devices may have communication
// capability defined by the associated communication function(s). An end device
// may be owned by a consumer, a service provider, utility or otherwise.
// There may
// be a related end device function that identifies a sensor or control point
// within a metering application or communications systems (e.g., water, gas,
// electricity).
// Some devices may use an optical port that conforms to the ANSI
// C12.18 standard for communications.”</xs:documentation>
// </xs:annotation>
// Complex type: EndDevice
#define emberExiStructEndDeviceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDevice)))

typedef struct _EmberExiGeneratedEndDevice {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_category_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedEndDeviceCategoryType category_option; // element
  EmberExiGeneratedDeviceStatusLink *DeviceStatusLink_option; // pointer to DeviceStatusLink structs
  EmberExiGeneratedEndDeviceGroupListLink *EndDeviceGroupListLink_option; // pointer to EndDeviceGroupListLink structs
  EmberExiGeneratedFileListLink *FileListLink_option; // pointer to FileListLink structs
  EmberExiGeneratedLoadShedAvailabilityListLink *LoadShedAvailabilityListLink_option; // pointer to LoadShedAvailabilityListLink structs
  EmberExiGeneratedRegistrationLink *RegistrationLink_option; // pointer to RegistrationLink structs
  EmberExiGeneratedSubscriptionListLink *SubscriptionListLink_option; // pointer to SubscriptionListLink structs
} EmberExiGeneratedEndDevice;


#define emberExiEndDeviceStructDataIndex 958
#define emberExiEndDeviceStructData (emEncoderEvents + emberExiEndDeviceStructDataIndex)
#define emberExiCompareStructEndDevice(x, y) (emExiCompareStructs(emberExiEndDeviceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDevice(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDevice(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDevice(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDevice(EmberExiGeneratedEndDevice *data);

// Converts struct to XML
void emberExiToXmlStructEndDevice(EmberExiGeneratedEndDevice *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDevice(int8u *stringBuffer, int offset, EmberExiGeneratedEndDevice *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDevice(int8u *stringBuffer, int offset, EmberExiGeneratedEndDevice *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// EndDevice objects.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceList
#define emberExiStructEndDeviceListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceList)))

typedef struct _EmberExiGeneratedEndDeviceList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u EndDevice_count; // number of EndDevice structs
  EmberExiGeneratedEndDevice *EndDevice_array; // pointer to EndDevice structs
} EmberExiGeneratedEndDeviceList;


#define emberExiEndDeviceListStructDataIndex 1162
#define emberExiEndDeviceListStructData (emEncoderEvents + emberExiEndDeviceListStructDataIndex)
#define emberExiCompareStructEndDeviceList(x, y) (emExiCompareStructs(emberExiEndDeviceListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceList(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceList(EmberExiGeneratedEndDeviceList *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceList(EmberExiGeneratedEndDeviceList *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// SupplyInterruptionOverride objects.</xs:documentation>
// </xs:annotation>
// Complex type: SupplyInterruptionOverrideList
#define emberExiStructSupplyInterruptionOverrideListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupplyInterruptionOverrideList)))

typedef struct _EmberExiGeneratedSupplyInterruptionOverrideList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u SupplyInterruptionOverride_count; // number of SupplyInterruptionOverride structs
  EmberExiGeneratedSupplyInterruptionOverride *SupplyInterruptionOverride_array; // pointer to SupplyInterruptionOverride structs
} EmberExiGeneratedSupplyInterruptionOverrideList;


#define emberExiSupplyInterruptionOverrideListStructDataIndex 2323
#define emberExiSupplyInterruptionOverrideListStructData (emEncoderEvents + emberExiSupplyInterruptionOverrideListStructDataIndex)
#define emberExiCompareStructSupplyInterruptionOverrideList(x, y) (emExiCompareStructs(emberExiSupplyInterruptionOverrideListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSupplyInterruptionOverrideList(theStruct) (emExiStructMemoryFootprint(emberExiSupplyInterruptionOverrideListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSupplyInterruptionOverrideList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSupplyInterruptionOverrideList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSupplyInterruptionOverrideList(EmberExiGeneratedSupplyInterruptionOverrideList *data);

// Converts struct to XML
void emberExiToXmlStructSupplyInterruptionOverrideList(EmberExiGeneratedSupplyInterruptionOverrideList *data);

// Writes XML to a string
int emberExiXmlSprintfStructSupplyInterruptionOverrideList(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSupplyInterruptionOverrideList(int8u *stringBuffer, int offset, EmberExiGeneratedSupplyInterruptionOverrideList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// TariffProfile instances.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfileListLink
#define emberExiStructTariffProfileListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfileListLink)))

typedef struct _EmberExiGeneratedTariffProfileListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTariffProfileListLink;


#define emberExiTariffProfileListLinkStructDataIndex 2437
#define emberExiTariffProfileListLinkStructData (emEncoderEvents + emberExiTariffProfileListLinkStructDataIndex)
#define emberExiCompareStructTariffProfileListLink(x, y) (emExiCompareStructs(emberExiTariffProfileListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTariffProfileListLink(theStruct) (emExiStructMemoryFootprint(emberExiTariffProfileListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTariffProfileListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTariffProfileListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data);

// Converts struct to XML
void emberExiToXmlStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructTariffProfileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTariffProfileListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// TimeTariffInterval instances.</xs:documentation>
// </xs:annotation>
// Complex type: TimeTariffIntervalListLink
#define emberExiStructTimeTariffIntervalListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeTariffIntervalListLink)))

typedef struct _EmberExiGeneratedTimeTariffIntervalListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTimeTariffIntervalListLink;


#define emberExiTimeTariffIntervalListLinkStructDataIndex 2611
#define emberExiTimeTariffIntervalListLinkStructData (emEncoderEvents + emberExiTimeTariffIntervalListLinkStructDataIndex)
#define emberExiCompareStructTimeTariffIntervalListLink(x, y) (emExiCompareStructs(emberExiTimeTariffIntervalListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTimeTariffIntervalListLink(theStruct) (emExiStructMemoryFootprint(emberExiTimeTariffIntervalListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTimeTariffIntervalListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTimeTariffIntervalListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTimeTariffIntervalListLink(EmberExiGeneratedTimeTariffIntervalListLink *data);

// Converts struct to XML
void emberExiToXmlStructTimeTariffIntervalListLink(EmberExiGeneratedTimeTariffIntervalListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTimeTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTimeTariffIntervalListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies the applicable
// charges for a single component of the rate, which could be generation price or
// consumption price, for example.</xs:documentation>
// </xs:annotation>
// Complex type: RateComponent
#define emberExiStructRateComponentInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRateComponent)))

typedef struct _EmberExiGeneratedRateComponent {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_powerLimit_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedActiveTimeTariffIntervalListLink *ActiveTimeTariffIntervalListLink; // pointer to ActiveTimeTariffIntervalListLink structs
  EmberExiGeneratedUInt16 powerLimit_option; // element
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
  EmberExiGeneratedTimeTariffIntervalListLink *TimeTariffIntervalListLink; // pointer to TimeTariffIntervalListLink structs
} EmberExiGeneratedRateComponent;


#define emberExiRateComponentStructDataIndex 1909
#define emberExiRateComponentStructData (emEncoderEvents + emberExiRateComponentStructDataIndex)
#define emberExiCompareStructRateComponent(x, y) (emExiCompareStructs(emberExiRateComponentStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRateComponent(theStruct) (emExiStructMemoryFootprint(emberExiRateComponentStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRateComponent(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRateComponent(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRateComponent(EmberExiGeneratedRateComponent *data);

// Converts struct to XML
void emberExiToXmlStructRateComponent(EmberExiGeneratedRateComponent *data);

// Writes XML to a string
int emberExiXmlSprintfStructRateComponent(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponent *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRateComponent(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponent *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// RateComponent objects.</xs:documentation>
// </xs:annotation>
// Complex type: RateComponentList
#define emberExiStructRateComponentListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRateComponentList)))

typedef struct _EmberExiGeneratedRateComponentList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u RateComponent_count; // number of RateComponent structs
  EmberExiGeneratedRateComponent *RateComponent_array; // pointer to RateComponent structs
} EmberExiGeneratedRateComponentList;


#define emberExiRateComponentListStructDataIndex 1936
#define emberExiRateComponentListStructData (emEncoderEvents + emberExiRateComponentListStructDataIndex)
#define emberExiCompareStructRateComponentList(x, y) (emExiCompareStructs(emberExiRateComponentListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRateComponentList(theStruct) (emExiStructMemoryFootprint(emberExiRateComponentListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRateComponentList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRateComponentList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRateComponentList(EmberExiGeneratedRateComponentList *data);

// Converts struct to XML
void emberExiToXmlStructRateComponentList(EmberExiGeneratedRateComponentList *data);

// Writes XML to a string
int emberExiXmlSprintfStructRateComponentList(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRateComponentList(int8u *stringBuffer, int offset, EmberExiGeneratedRateComponentList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// ProjectionReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: ProjectionReadingListLink
#define emberExiStructProjectionReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedProjectionReadingListLink)))

typedef struct _EmberExiGeneratedProjectionReadingListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedProjectionReadingListLink;


#define emberExiProjectionReadingListLinkStructDataIndex 1891
#define emberExiProjectionReadingListLinkStructData (emEncoderEvents + emberExiProjectionReadingListLinkStructDataIndex)
#define emberExiCompareStructProjectionReadingListLink(x, y) (emExiCompareStructs(emberExiProjectionReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructProjectionReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiProjectionReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructProjectionReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructProjectionReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructProjectionReadingListLink(EmberExiGeneratedProjectionReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructProjectionReadingListLink(EmberExiGeneratedProjectionReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedProjectionReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains identification and
// other information about the device.</xs:documentation>
// </xs:annotation>
// Complex type: File
#define emberExiStructFileInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFile)))

typedef struct _EmberExiGeneratedFile {
  int16u structType;
  EmberExiGeneratedString fileURI; // element
  EmberExiGeneratedUInt32 Size; // element
  EmberExiGeneratedHexBinary16 Type; // element
} EmberExiGeneratedFile;


#define emberExiFileStructDataIndex 1180
#define emberExiFileStructData (emEncoderEvents + emberExiFileStructDataIndex)
#define emberExiCompareStructFile(x, y) (emExiCompareStructs(emberExiFileStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFile(theStruct) (emExiStructMemoryFootprint(emberExiFileStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFile(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFile(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFile(EmberExiGeneratedFile *data);

// Converts struct to XML
void emberExiToXmlStructFile(EmberExiGeneratedFile *data);

// Writes XML to a string
int emberExiXmlSprintfStructFile(int8u *stringBuffer, int offset, EmberExiGeneratedFile *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFile(int8u *stringBuffer, int offset, EmberExiGeneratedFile *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A response to a Demand
// Response Load Control (EndDeviceControl)
// message.</xs:documentation>
// </xs:annotation>
// Complex type: DrResponse
#define emberExiStructDrResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDrResponse)))

typedef struct _EmberExiGeneratedDrResponse {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_subject_option:1;
  unsigned int flagPadding:9;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 category_option; // element
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedStatusType status_option; // element
  EmberExiGeneratedHexBinary64 subject_option; // element
  EmberExiGeneratedEndDeviceLink *EndDeviceLink; // pointer to EndDeviceLink structs
  EmberExiGeneratedServiceSupplierLink *ServiceSupplierLink; // pointer to ServiceSupplierLink structs
  EmberExiGeneratedSignature *Signature_option; // pointer to Signature structs
  EmberExiGeneratedDutyCycle *DutyCycle_option; // pointer to DutyCycle structs
  int8u Offset_count; // number of Offset structs
  EmberExiGeneratedOffset *Offset_array; // pointer to Offset structs
  EmberExiGeneratedUInt16 overrideDuration; // element
  EmberExiGeneratedSetPoint *SetPoint_option; // pointer to SetPoint structs
} EmberExiGeneratedDrResponse;


#define emberExiDrResponseStructDataIndex 922
#define emberExiDrResponseStructData (emEncoderEvents + emberExiDrResponseStructDataIndex)
#define emberExiCompareStructDrResponse(x, y) (emExiCompareStructs(emberExiDrResponseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDrResponse(theStruct) (emExiStructMemoryFootprint(emberExiDrResponseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDrResponse(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDrResponse(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDrResponse(EmberExiGeneratedDrResponse *data);

// Converts struct to XML
void emberExiToXmlStructDrResponse(EmberExiGeneratedDrResponse *data);

// Writes XML to a string
int emberExiXmlSprintfStructDrResponse(int8u *stringBuffer, int offset, EmberExiGeneratedDrResponse *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDrResponse(int8u *stringBuffer, int offset, EmberExiGeneratedDrResponse *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Connected
// 1 -
// Disconnected
// 2 - Armed for Connect
// 3 - Armed for Disconnect
// 4 - No Contactor
// 5 -
// Other</xs:documentation>
// </xs:annotation>
// Complex type: ServiceStatusType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedServiceStatusType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A schedule of charges;
// structure that allows the definition of tariff structures such as step (block)
// and time of use (tier) when used in conjunction with TimeTariffInterval,
// ConsumptionTariffInterval, and Charge.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfile
#define emberExiStructTariffProfileInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfile)))

typedef struct _EmberExiGeneratedTariffProfile {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString20 rateCode_option; // element
  EmberExiGeneratedRateComponentListLink *RateComponentListLink; // pointer to RateComponentListLink structs
} EmberExiGeneratedTariffProfile;


#define emberExiTariffProfileStructDataIndex 2404
#define emberExiTariffProfileStructData (emEncoderEvents + emberExiTariffProfileStructDataIndex)
#define emberExiCompareStructTariffProfile(x, y) (emExiCompareStructs(emberExiTariffProfileStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTariffProfile(theStruct) (emExiStructMemoryFootprint(emberExiTariffProfileStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTariffProfile(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTariffProfile(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTariffProfile(EmberExiGeneratedTariffProfile *data);

// Converts struct to XML
void emberExiToXmlStructTariffProfile(EmberExiGeneratedTariffProfile *data);

// Writes XML to a string
int emberExiXmlSprintfStructTariffProfile(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfile *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTariffProfile(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfile *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains configuration related
// to the device's power sources</xs:documentation>
// </xs:annotation>
// Complex type: PowerConfiguration
#define emberExiStructPowerConfigurationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPowerConfiguration)))

typedef struct _EmberExiGeneratedPowerConfiguration {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_batteryInstallTime_option:1;
  unsigned int has_lowChargeThreshold_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedTimeType batteryInstallTime_option; // element
  EmberExiGeneratedUInt8 lowChargeThreshold_option; // element
} EmberExiGeneratedPowerConfiguration;


#define emberExiPowerConfigurationStructDataIndex 1684
#define emberExiPowerConfigurationStructData (emEncoderEvents + emberExiPowerConfigurationStructDataIndex)
#define emberExiCompareStructPowerConfiguration(x, y) (emExiCompareStructs(emberExiPowerConfigurationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPowerConfiguration(theStruct) (emExiStructMemoryFootprint(emberExiPowerConfigurationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPowerConfiguration(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPowerConfiguration(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data);

// Converts struct to XML
void emberExiToXmlStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data);

// Writes XML to a string
int emberExiXmlSprintfStructPowerConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedPowerConfiguration *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPowerConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedPowerConfiguration *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Bit map encoded rule from
// which is calculated the start or end time, within the current year, to which
// daylight savings time offset must be applied. 
// 
// The rule encoding:
// Bits  0 - 11:
// seconds 0 - 3599
// Bits 12 - 16: hours 0 - 23
// Bits 17 - 19: day of the week 0 =
// not applicable, 1 - 7 (Monday = 1)
// Bits:20 - 24: day of the month 0 = not
// applicable, 1 - 31
// Bits: 25 - 27: operator  (detailed below)
// Bits: 28 - 31:
// month 1 - 12
// 
// Rule value of 0xFFFFFFFF means rule processing/DST correction is
// disabled.
// 
// The operators:
// 
// 0: DST starts/ends on the Day of the Month
// 1: DST
// starts/ends on the Day of the Week that is on or after the Day of the Month
// 2:
// DST starts/ends on the first occurrence of the Day of the Week in a month
// 3: DST
// starts/ends on the second occurrence of the Day of the Week in a month
// 4: DST
// starts/ends on the third occurrence of the Day of the Week in a month
// 5: DST
// starts/ends on the forth occurrence of the Day of the Week in a month
// 6: DST
// starts/ends on the fifth occurrence of the Day of the Week in a month
// 7: DST
// starts/ends on the last occurrence of the Day of the Week in a month
// 
// An
// example: DST starts on third Friday in March at 1:45 AM.  The rule...
// Seconds:
// 2700
// Hours: 1
// Day of Week: 5
// Day of Month: 0
// Operator: 4
// Month:
// 3</xs:documentation>
// </xs:annotation>
// Simple type: DstRuleType
typedef struct {
  int8u length;
  int8u bytes[4];
} EmberExiGeneratedDstRuleType;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains attributes related to
// the configuration of the time service.</xs:documentation>
// </xs:annotation>
// Complex type: TimeConfiguration
#define emberExiStructTimeConfigurationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeConfiguration)))

typedef struct _EmberExiGeneratedTimeConfiguration {
  int16u structType;
  EmberExiGeneratedDstRuleType dstEndRule; // element
  EmberExiGeneratedTimeOffsetType dstOffset; // element
  EmberExiGeneratedDstRuleType dstStartRule; // element
  EmberExiGeneratedTimeOffsetType tzOffset; // element
} EmberExiGeneratedTimeConfiguration;


#define emberExiTimeConfigurationStructDataIndex 2545
#define emberExiTimeConfigurationStructData (emEncoderEvents + emberExiTimeConfigurationStructDataIndex)
#define emberExiCompareStructTimeConfiguration(x, y) (emExiCompareStructs(emberExiTimeConfigurationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTimeConfiguration(theStruct) (emExiStructMemoryFootprint(emberExiTimeConfigurationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTimeConfiguration(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTimeConfiguration(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data);

// Converts struct to XML
void emberExiToXmlStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data);

// Writes XML to a string
int emberExiXmlSprintfStructTimeConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedTimeConfiguration *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTimeConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedTimeConfiguration *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>This resource contains various
// settings to control the operation of the
// device</xs:documentation>
// </xs:annotation>
// Complex type: Configuration
#define emberExiStructConfigurationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConfiguration)))

typedef struct _EmberExiGeneratedConfiguration {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedLocaleType locale; // element
  EmberExiGeneratedPowerConfiguration *PowerConfiguration_option; // pointer to PowerConfiguration structs
  EmberExiGeneratedTimeConfiguration *TimeConfiguration_option; // pointer to TimeConfiguration structs
  EmberExiGeneratedString32 userDeviceName; // element
} EmberExiGeneratedConfiguration;


#define emberExiConfigurationStructDataIndex 331
#define emberExiConfigurationStructData (emEncoderEvents + emberExiConfigurationStructDataIndex)
#define emberExiCompareStructConfiguration(x, y) (emExiCompareStructs(emberExiConfigurationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructConfiguration(theStruct) (emExiStructMemoryFootprint(emberExiConfigurationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructConfiguration(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructConfiguration(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructConfiguration(EmberExiGeneratedConfiguration *data);

// Converts struct to XML
void emberExiToXmlStructConfiguration(EmberExiGeneratedConfiguration *data);

// Writes XML to a string
int emberExiXmlSprintfStructConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedConfiguration *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructConfiguration(int8u *stringBuffer, int offset, EmberExiGeneratedConfiguration *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// TextMessage instances.</xs:documentation>
// </xs:annotation>
// Complex type: TextMessageListLink
#define emberExiStructTextMessageListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTextMessageListLink)))

typedef struct _EmberExiGeneratedTextMessageListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTextMessageListLink;


#define emberExiTextMessageListLinkStructDataIndex 2506
#define emberExiTextMessageListLinkStructData (emEncoderEvents + emberExiTextMessageListLinkStructDataIndex)
#define emberExiCompareStructTextMessageListLink(x, y) (emExiCompareStructs(emberExiTextMessageListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTextMessageListLink(theStruct) (emExiStructMemoryFootprint(emberExiTextMessageListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTextMessageListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTextMessageListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data);

// Converts struct to XML
void emberExiToXmlStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTextMessageListLink(int8u *stringBuffer, int offset, EmberExiGeneratedTextMessageListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// DeviceCapability.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceCapabilityLink
#define emberExiStructDeviceCapabilityLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceCapabilityLink)))

typedef struct _EmberExiGeneratedDeviceCapabilityLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDeviceCapabilityLink;


#define emberExiDeviceCapabilityLinkStructDataIndex 811
#define emberExiDeviceCapabilityLinkStructData (emEncoderEvents + emberExiDeviceCapabilityLinkStructDataIndex)
#define emberExiCompareStructDeviceCapabilityLink(x, y) (emExiCompareStructs(emberExiDeviceCapabilityLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDeviceCapabilityLink(theStruct) (emExiStructMemoryFootprint(emberExiDeviceCapabilityLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDeviceCapabilityLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDeviceCapabilityLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDeviceCapabilityLink(EmberExiGeneratedDeviceCapabilityLink *data);

// Converts struct to XML
void emberExiToXmlStructDeviceCapabilityLink(EmberExiGeneratedDeviceCapabilityLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDeviceCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapabilityLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDeviceCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceCapabilityLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains readings that specify
// a target or goal, such as a consumption target, to which billing incentives or
// other contractual ramifications may be
// associated.</xs:documentation>
// </xs:annotation>
// Complex type: TargetReading
#define emberExiStructTargetReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTargetReading)))

typedef struct _EmberExiGeneratedTargetReading {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedIntervalBlockListLink *IntervalBlockListLink_option; // pointer to IntervalBlockListLink structs
  EmberExiGeneratedReadingLink *ReadingLink_option; // pointer to ReadingLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
} EmberExiGeneratedTargetReading;


#define emberExiTargetReadingStructDataIndex 2368
#define emberExiTargetReadingStructData (emEncoderEvents + emberExiTargetReadingStructDataIndex)
#define emberExiCompareStructTargetReading(x, y) (emExiCompareStructs(emberExiTargetReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTargetReading(theStruct) (emExiStructMemoryFootprint(emberExiTargetReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTargetReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTargetReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTargetReading(EmberExiGeneratedTargetReading *data);

// Converts struct to XML
void emberExiToXmlStructTargetReading(EmberExiGeneratedTargetReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructTargetReading(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTargetReading(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// TargetReading objects.</xs:documentation>
// </xs:annotation>
// Complex type: TargetReadingList
#define emberExiStructTargetReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTargetReadingList)))

typedef struct _EmberExiGeneratedTargetReadingList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u TargetReading_count; // number of TargetReading structs
  EmberExiGeneratedTargetReading *TargetReading_array; // pointer to TargetReading structs
} EmberExiGeneratedTargetReadingList;


#define emberExiTargetReadingListStructDataIndex 2374
#define emberExiTargetReadingListStructData (emEncoderEvents + emberExiTargetReadingListStructDataIndex)
#define emberExiCompareStructTargetReadingList(x, y) (emExiCompareStructs(emberExiTargetReadingListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTargetReadingList(theStruct) (emExiStructMemoryFootprint(emberExiTargetReadingListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTargetReadingList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTargetReadingList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTargetReadingList(EmberExiGeneratedTargetReadingList *data);

// Converts struct to XML
void emberExiToXmlStructTargetReadingList(EmberExiGeneratedTargetReadingList *data);

// Writes XML to a string
int emberExiXmlSprintfStructTargetReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTargetReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedTargetReadingList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A 128-bit field encoded as a
// hex string (32 characters / 16 octets)</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary160
typedef struct {
  int8u length;
  int8u bytes[20];
} EmberExiGeneratedHexBinary160;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - none
// 1 - mains 
// 2 -
// battery
// 3 - local generation
// 4 - emergency 
// 5 -
// unknown</xs:documentation>
// </xs:annotation>
// Complex type: PowerSourceType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPowerSourceType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// SupportedLocale instances.</xs:documentation>
// </xs:annotation>
// Complex type: SupportedLocaleListLink
#define emberExiStructSupportedLocaleListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupportedLocaleListLink)))

typedef struct _EmberExiGeneratedSupportedLocaleListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedSupportedLocaleListLink;


#define emberExiSupportedLocaleListLinkStructDataIndex 2362
#define emberExiSupportedLocaleListLinkStructData (emEncoderEvents + emberExiSupportedLocaleListLinkStructDataIndex)
#define emberExiCompareStructSupportedLocaleListLink(x, y) (emExiCompareStructs(emberExiSupportedLocaleListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSupportedLocaleListLink(theStruct) (emExiStructMemoryFootprint(emberExiSupportedLocaleListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSupportedLocaleListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSupportedLocaleListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data);

// Converts struct to XML
void emberExiToXmlStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructSupportedLocaleListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSupportedLocaleListLink(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains identification and
// other information about the device.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceInformation
#define emberExiStructDeviceInformationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceInformation)))

typedef struct _EmberExiGeneratedDeviceInformation {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:13;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary160 gUID; // element
  EmberExiGeneratedTimeType mfDate; // element
  EmberExiGeneratedString32 mfHwVer; // element
  EmberExiGeneratedPENType mfID; // element
  EmberExiGeneratedString32 mfInfo_option; // element
  EmberExiGeneratedString32 mfModel; // element
  EmberExiGeneratedString32 mfSerNum; // element
  EmberExiGeneratedPowerSourceType primaryPower; // element
  EmberExiGeneratedPowerSourceType secondaryPower; // element
  EmberExiGeneratedSupportedLocaleListLink *SupportedLocaleListLink_option; // pointer to SupportedLocaleListLink structs
  EmberExiGeneratedTimeType swActTime; // element
  EmberExiGeneratedString32 swVer; // element
} EmberExiGeneratedDeviceInformation;


#define emberExiDeviceInformationStructDataIndex 817
#define emberExiDeviceInformationStructData (emEncoderEvents + emberExiDeviceInformationStructDataIndex)
#define emberExiCompareStructDeviceInformation(x, y) (emExiCompareStructs(emberExiDeviceInformationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDeviceInformation(theStruct) (emExiStructMemoryFootprint(emberExiDeviceInformationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDeviceInformation(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDeviceInformation(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDeviceInformation(EmberExiGeneratedDeviceInformation *data);

// Converts struct to XML
void emberExiToXmlStructDeviceInformation(EmberExiGeneratedDeviceInformation *data);

// Writes XML to a string
int emberExiXmlSprintfStructDeviceInformation(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformation *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDeviceInformation(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceInformation *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// Registration instances.</xs:documentation>
// </xs:annotation>
// Complex type: RegistrationListLink
#define emberExiStructRegistrationListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRegistrationListLink)))

typedef struct _EmberExiGeneratedRegistrationListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedRegistrationListLink;


#define emberExiRegistrationListLinkStructDataIndex 2095
#define emberExiRegistrationListLinkStructData (emEncoderEvents + emberExiRegistrationListLinkStructDataIndex)
#define emberExiCompareStructRegistrationListLink(x, y) (emExiCompareStructs(emberExiRegistrationListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRegistrationListLink(theStruct) (emExiStructMemoryFootprint(emberExiRegistrationListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRegistrationListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRegistrationListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRegistrationListLink(EmberExiGeneratedRegistrationListLink *data);

// Converts struct to XML
void emberExiToXmlStructRegistrationListLink(EmberExiGeneratedRegistrationListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructRegistrationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRegistrationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedRegistrationListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Provides a container for
// collections of text messages.</xs:documentation>
// </xs:annotation>
// Complex type: MessagingProgram
#define emberExiStructMessagingProgramInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMessagingProgram)))

typedef struct _EmberExiGeneratedMessagingProgram {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedActiveTextMessageListLink *ActiveTextMessageListLink_option; // pointer to ActiveTextMessageListLink structs
  EmberExiGeneratedLocaleType locale; // element
  EmberExiGeneratedTextMessageListLink *TextMessageListLink_option; // pointer to TextMessageListLink structs
} EmberExiGeneratedMessagingProgram;


#define emberExiMessagingProgramStructDataIndex 1456
#define emberExiMessagingProgramStructData (emEncoderEvents + emberExiMessagingProgramStructDataIndex)
#define emberExiCompareStructMessagingProgram(x, y) (emExiCompareStructs(emberExiMessagingProgramStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMessagingProgram(theStruct) (emExiStructMemoryFootprint(emberExiMessagingProgramStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMessagingProgram(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMessagingProgram(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMessagingProgram(EmberExiGeneratedMessagingProgram *data);

// Converts struct to XML
void emberExiToXmlStructMessagingProgram(EmberExiGeneratedMessagingProgram *data);

// Writes XML to a string
int emberExiXmlSprintfStructMessagingProgram(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgram *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMessagingProgram(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgram *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// MeterReading objects.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingList
#define emberExiStructMeterReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingList)))

typedef struct _EmberExiGeneratedMeterReadingList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u MeterReading_count; // number of MeterReading structs
  EmberExiGeneratedMeterReading *MeterReading_array; // pointer to MeterReading structs
} EmberExiGeneratedMeterReadingList;


#define emberExiMeterReadingListStructDataIndex 1531
#define emberExiMeterReadingListStructData (emEncoderEvents + emberExiMeterReadingListStructDataIndex)
#define emberExiCompareStructMeterReadingList(x, y) (emExiCompareStructs(emberExiMeterReadingListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMeterReadingList(theStruct) (emExiStructMemoryFootprint(emberExiMeterReadingListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMeterReadingList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMeterReadingList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMeterReadingList(EmberExiGeneratedMeterReadingList *data);

// Converts struct to XML
void emberExiToXmlStructMeterReadingList(EmberExiGeneratedMeterReadingList *data);

// Writes XML to a string
int emberExiXmlSprintfStructMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMeterReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A class that contains credit
// amount and type</xs:documentation>
// </xs:annotation>
// Complex type: CreditRegister
#define emberExiStructCreditRegisterInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCreditRegister)))

typedef struct _EmberExiGeneratedCreditRegister {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_creditType_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedAccountingUnit *creditAmount; // pointer to creditAmount structs
  EmberExiGeneratedCreditTypeType creditType_option; // element
  EmberExiGeneratedTimeType effectiveTime; // element
  EmberExiGeneratedString32 token; // element
} EmberExiGeneratedCreditRegister;


#define emberExiCreditRegisterStructDataIndex 391
#define emberExiCreditRegisterStructData (emEncoderEvents + emberExiCreditRegisterStructDataIndex)
#define emberExiCompareStructCreditRegister(x, y) (emExiCompareStructs(emberExiCreditRegisterStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCreditRegister(theStruct) (emExiStructMemoryFootprint(emberExiCreditRegisterStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCreditRegister(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCreditRegister(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCreditRegister(EmberExiGeneratedCreditRegister *data);

// Converts struct to XML
void emberExiToXmlStructCreditRegister(EmberExiGeneratedCreditRegister *data);

// Writes XML to a string
int emberExiXmlSprintfStructCreditRegister(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegister *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCreditRegister(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegister *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// CreditRegister objects.</xs:documentation>
// </xs:annotation>
// Complex type: CreditRegisterList
#define emberExiStructCreditRegisterListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCreditRegisterList)))

typedef struct _EmberExiGeneratedCreditRegisterList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u CreditRegister_count; // number of CreditRegister structs
  EmberExiGeneratedCreditRegister *CreditRegister_array; // pointer to CreditRegister structs
} EmberExiGeneratedCreditRegisterList;


#define emberExiCreditRegisterListStructDataIndex 412
#define emberExiCreditRegisterListStructData (emEncoderEvents + emberExiCreditRegisterListStructDataIndex)
#define emberExiCompareStructCreditRegisterList(x, y) (emExiCompareStructs(emberExiCreditRegisterListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCreditRegisterList(theStruct) (emExiStructMemoryFootprint(emberExiCreditRegisterListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCreditRegisterList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCreditRegisterList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCreditRegisterList(EmberExiGeneratedCreditRegisterList *data);

// Converts struct to XML
void emberExiToXmlStructCreditRegisterList(EmberExiGeneratedCreditRegisterList *data);

// Writes XML to a string
int emberExiXmlSprintfStructCreditRegisterList(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCreditRegisterList(int8u *stringBuffer, int offset, EmberExiGeneratedCreditRegisterList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// MessagingProgram objects.</xs:documentation>
// </xs:annotation>
// Complex type: MessagingProgramList
#define emberExiStructMessagingProgramListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMessagingProgramList)))

typedef struct _EmberExiGeneratedMessagingProgramList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u MessagingProgram_count; // number of MessagingProgram structs
  EmberExiGeneratedMessagingProgram *MessagingProgram_array; // pointer to MessagingProgram structs
} EmberExiGeneratedMessagingProgramList;


#define emberExiMessagingProgramListStructDataIndex 1477
#define emberExiMessagingProgramListStructData (emEncoderEvents + emberExiMessagingProgramListStructDataIndex)
#define emberExiCompareStructMessagingProgramList(x, y) (emExiCompareStructs(emberExiMessagingProgramListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMessagingProgramList(theStruct) (emExiStructMemoryFootprint(emberExiMessagingProgramListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMessagingProgramList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMessagingProgramList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data);

// Converts struct to XML
void emberExiToXmlStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data);

// Writes XML to a string
int emberExiXmlSprintfStructMessagingProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMessagingProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedMessagingProgramList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// HistoricalReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: HistoricalReadingListLink
#define emberExiStructHistoricalReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedHistoricalReadingListLink)))

typedef struct _EmberExiGeneratedHistoricalReadingListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedHistoricalReadingListLink;


#define emberExiHistoricalReadingListLinkStructDataIndex 1246
#define emberExiHistoricalReadingListLinkStructData (emEncoderEvents + emberExiHistoricalReadingListLinkStructDataIndex)
#define emberExiCompareStructHistoricalReadingListLink(x, y) (emExiCompareStructs(emberExiHistoricalReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructHistoricalReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiHistoricalReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructHistoricalReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructHistoricalReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructHistoricalReadingListLink(EmberExiGeneratedHistoricalReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructHistoricalReadingListLink(EmberExiGeneratedHistoricalReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructHistoricalReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructHistoricalReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// UsagePoint.</xs:documentation>
// </xs:annotation>
// Complex type: UsagePointLink
#define emberExiStructUsagePointLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePointLink)))

typedef struct _EmberExiGeneratedUsagePointLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedUsagePointLink;


#define emberExiUsagePointLinkStructDataIndex 2665
#define emberExiUsagePointLinkStructData (emEncoderEvents + emberExiUsagePointLinkStructDataIndex)
#define emberExiCompareStructUsagePointLink(x, y) (emExiCompareStructs(emberExiUsagePointLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructUsagePointLink(theStruct) (emExiStructMemoryFootprint(emberExiUsagePointLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructUsagePointLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructUsagePointLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructUsagePointLink(EmberExiGeneratedUsagePointLink *data);

// Converts struct to XML
void emberExiToXmlStructUsagePointLink(EmberExiGeneratedUsagePointLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedUsagePointLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// SupportedLocale objects.</xs:documentation>
// </xs:annotation>
// Complex type: SupportedLocaleList
#define emberExiStructSupportedLocaleListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupportedLocaleList)))

typedef struct _EmberExiGeneratedSupportedLocaleList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u SupportedLocale_count; // number of SupportedLocale structs
  EmberExiGeneratedSupportedLocale *SupportedLocale_array; // pointer to SupportedLocale structs
} EmberExiGeneratedSupportedLocaleList;


#define emberExiSupportedLocaleListStructDataIndex 2350
#define emberExiSupportedLocaleListStructData (emEncoderEvents + emberExiSupportedLocaleListStructDataIndex)
#define emberExiCompareStructSupportedLocaleList(x, y) (emExiCompareStructs(emberExiSupportedLocaleListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSupportedLocaleList(theStruct) (emExiStructMemoryFootprint(emberExiSupportedLocaleListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSupportedLocaleList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSupportedLocaleList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSupportedLocaleList(EmberExiGeneratedSupportedLocaleList *data);

// Converts struct to XML
void emberExiToXmlStructSupportedLocaleList(EmberExiGeneratedSupportedLocaleList *data);

// Writes XML to a string
int emberExiXmlSprintfStructSupportedLocaleList(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSupportedLocaleList(int8u *stringBuffer, int offset, EmberExiGeneratedSupportedLocaleList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// Prepayment objects.</xs:documentation>
// </xs:annotation>
// Complex type: PrepaymentList
#define emberExiStructPrepaymentListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepaymentList)))

typedef struct _EmberExiGeneratedPrepaymentList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u Prepayment_count; // number of Prepayment structs
  EmberExiGeneratedPrepayment *Prepayment_array; // pointer to Prepayment structs
} EmberExiGeneratedPrepaymentList;


#define emberExiPrepaymentListStructDataIndex 1849
#define emberExiPrepaymentListStructData (emEncoderEvents + emberExiPrepaymentListStructDataIndex)
#define emberExiCompareStructPrepaymentList(x, y) (emExiCompareStructs(emberExiPrepaymentListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPrepaymentList(theStruct) (emExiStructMemoryFootprint(emberExiPrepaymentListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPrepaymentList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPrepaymentList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPrepaymentList(EmberExiGeneratedPrepaymentList *data);

// Converts struct to XML
void emberExiToXmlStructPrepaymentList(EmberExiGeneratedPrepaymentList *data);

// Writes XML to a string
int emberExiXmlSprintfStructPrepaymentList(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPrepaymentList(int8u *stringBuffer, int offset, EmberExiGeneratedPrepaymentList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of Charge
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: ChargeListLink
#define emberExiStructChargeListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargeListLink)))

typedef struct _EmberExiGeneratedChargeListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedChargeListLink;


#define emberExiChargeListLinkStructDataIndex 220
#define emberExiChargeListLinkStructData (emEncoderEvents + emberExiChargeListLinkStructDataIndex)
#define emberExiCompareStructChargeListLink(x, y) (emExiCompareStructs(emberExiChargeListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargeListLink(theStruct) (emExiStructMemoryFootprint(emberExiChargeListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargeListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargeListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargeListLink(EmberExiGeneratedChargeListLink *data);

// Converts struct to XML
void emberExiToXmlStructChargeListLink(EmberExiGeneratedChargeListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedChargeListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// TariffProfile objects.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfileList
#define emberExiStructTariffProfileListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfileList)))

typedef struct _EmberExiGeneratedTariffProfileList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u TariffProfile_count; // number of TariffProfile structs
  EmberExiGeneratedTariffProfile *TariffProfile_array; // pointer to TariffProfile structs
} EmberExiGeneratedTariffProfileList;


#define emberExiTariffProfileListStructDataIndex 2425
#define emberExiTariffProfileListStructData (emEncoderEvents + emberExiTariffProfileListStructDataIndex)
#define emberExiCompareStructTariffProfileList(x, y) (emExiCompareStructs(emberExiTariffProfileListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTariffProfileList(theStruct) (emExiStructMemoryFootprint(emberExiTariffProfileListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTariffProfileList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTariffProfileList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTariffProfileList(EmberExiGeneratedTariffProfileList *data);

// Converts struct to XML
void emberExiToXmlStructTariffProfileList(EmberExiGeneratedTariffProfileList *data);

// Writes XML to a string
int emberExiXmlSprintfStructTariffProfileList(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTariffProfileList(int8u *stringBuffer, int offset, EmberExiGeneratedTariffProfileList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// ReadingType instances.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingTypeListLink
#define emberExiStructReadingTypeListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingTypeListLink)))

typedef struct _EmberExiGeneratedReadingTypeListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedReadingTypeListLink;


#define emberExiReadingTypeListLinkStructDataIndex 2059
#define emberExiReadingTypeListLinkStructData (emEncoderEvents + emberExiReadingTypeListLinkStructDataIndex)
#define emberExiCompareStructReadingTypeListLink(x, y) (emExiCompareStructs(emberExiReadingTypeListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingTypeListLink(theStruct) (emExiStructMemoryFootprint(emberExiReadingTypeListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingTypeListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingTypeListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingTypeListLink(EmberExiGeneratedReadingTypeListLink *data);

// Converts struct to XML
void emberExiToXmlStructReadingTypeListLink(EmberExiGeneratedReadingTypeListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingTypeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingTypeListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingTypeListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specification of the
// temperature of a device surface or area.</xs:documentation>
// </xs:annotation>
// Complex type: Temperature
#define emberExiStructTemperatureInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTemperature)))

typedef struct _EmberExiGeneratedTemperature {
  int16u structType;
  unsigned int has_unit_option:1;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt8 subject; // element
  EmberExiGeneratedUomType unit_option; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedTemperature;


#define emberExiTemperatureStructDataIndex 2443
#define emberExiTemperatureStructData (emEncoderEvents + emberExiTemperatureStructDataIndex)
#define emberExiCompareStructTemperature(x, y) (emExiCompareStructs(emberExiTemperatureStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTemperature(theStruct) (emExiStructMemoryFootprint(emberExiTemperatureStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTemperature(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTemperature(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTemperature(EmberExiGeneratedTemperature *data);

// Converts struct to XML
void emberExiToXmlStructTemperature(EmberExiGeneratedTemperature *data);

// Writes XML to a string
int emberExiXmlSprintfStructTemperature(int8u *stringBuffer, int offset, EmberExiGeneratedTemperature *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTemperature(int8u *stringBuffer, int offset, EmberExiGeneratedTemperature *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A response related to a price
// message.</xs:documentation>
// </xs:annotation>
// Complex type: PriceResponse
#define emberExiStructPriceResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPriceResponse)))

typedef struct _EmberExiGeneratedPriceResponse {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_subject_option:1;
  unsigned int flagPadding:9;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 category_option; // element
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedStatusType status_option; // element
  EmberExiGeneratedHexBinary64 subject_option; // element
  EmberExiGeneratedEndDeviceLink *EndDeviceLink; // pointer to EndDeviceLink structs
  EmberExiGeneratedServiceSupplierLink *ServiceSupplierLink; // pointer to ServiceSupplierLink structs
  EmberExiGeneratedSignature *Signature_option; // pointer to Signature structs
} EmberExiGeneratedPriceResponse;


#define emberExiPriceResponseStructDataIndex 1867
#define emberExiPriceResponseStructData (emEncoderEvents + emberExiPriceResponseStructDataIndex)
#define emberExiCompareStructPriceResponse(x, y) (emExiCompareStructs(emberExiPriceResponseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPriceResponse(theStruct) (emExiStructMemoryFootprint(emberExiPriceResponseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPriceResponse(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPriceResponse(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPriceResponse(EmberExiGeneratedPriceResponse *data);

// Converts struct to XML
void emberExiToXmlStructPriceResponse(EmberExiGeneratedPriceResponse *data);

// Writes XML to a string
int emberExiXmlSprintfStructPriceResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponse *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPriceResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponse *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Prepayment (inherited from CIM
// SDPAccountingFunction)</xs:documentation>
// </xs:annotation>
// Complex type: PrepayOperationStatus
#define emberExiStructPrepayOperationStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepayOperationStatus)))

typedef struct _EmberExiGeneratedPrepayOperationStatus {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_creditTypeInUse_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedCreditTypeChange *creditTypeChange_option; // pointer to creditTypeChange structs
  EmberExiGeneratedCreditTypeType creditTypeInUse_option; // element
  EmberExiGeneratedServiceChange *serviceChange_option; // pointer to serviceChange structs
  EmberExiGeneratedServiceStatusType serviceStatus; // element
} EmberExiGeneratedPrepayOperationStatus;


#define emberExiPrepayOperationStatusStructDataIndex 1738
#define emberExiPrepayOperationStatusStructData (emEncoderEvents + emberExiPrepayOperationStatusStructDataIndex)
#define emberExiCompareStructPrepayOperationStatus(x, y) (emExiCompareStructs(emberExiPrepayOperationStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPrepayOperationStatus(theStruct) (emExiStructMemoryFootprint(emberExiPrepayOperationStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPrepayOperationStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPrepayOperationStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPrepayOperationStatus(EmberExiGeneratedPrepayOperationStatus *data);

// Converts struct to XML
void emberExiToXmlStructPrepayOperationStatus(EmberExiGeneratedPrepayOperationStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructPrepayOperationStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPrepayOperationStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayOperationStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains the status of the
// device's power sources</xs:documentation>
// </xs:annotation>
// Complex type: PowerStatus
#define emberExiStructPowerStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPowerStatus)))

typedef struct _EmberExiGeneratedPowerStatus {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_estimatedChargeRemaining_option:1;
  unsigned int has_estimatedTimeRemaining_option:1;
  unsigned int has_timeOnBattery_option:1;
  unsigned int flagPadding:10;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt8 batteryStatus; // element
  EmberExiGeneratedPowerSourceType currentPowerSource; // element
  EmberExiGeneratedUInt32 estimatedChargeRemaining_option; // element
  EmberExiGeneratedUInt32 estimatedTimeRemaining_option; // element
  EmberExiGeneratedUInt32 timeOnBattery_option; // element
} EmberExiGeneratedPowerStatus;


#define emberExiPowerStatusStructDataIndex 1711
#define emberExiPowerStatusStructData (emEncoderEvents + emberExiPowerStatusStructDataIndex)
#define emberExiCompareStructPowerStatus(x, y) (emExiCompareStructs(emberExiPowerStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPowerStatus(theStruct) (emExiStructMemoryFootprint(emberExiPowerStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPowerStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPowerStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPowerStatus(EmberExiGeneratedPowerStatus *data);

// Converts struct to XML
void emberExiToXmlStructPowerStatus(EmberExiGeneratedPowerStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructPowerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPowerStatus(int8u *stringBuffer, int offset, EmberExiGeneratedPowerStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Status of
// device</xs:documentation>
// </xs:annotation>
// Complex type: DeviceStatus
#define emberExiStructDeviceStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceStatus)))

typedef struct _EmberExiGeneratedDeviceStatus {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_onCount_option:1;
  unsigned int has_opState_option:1;
  unsigned int has_opTime_option:1;
  unsigned int flagPadding:10;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedTimeType changedTime; // element
  EmberExiGeneratedUInt16 onCount_option; // element
  EmberExiGeneratedUInt8 opState_option; // element
  EmberExiGeneratedUInt32 opTime_option; // element
  int8u Temperature_count; // number of Temperature structs
  EmberExiGeneratedTemperature *Temperature_array; // pointer to Temperature structs
  EmberExiGeneratedTimeLink *TimeLink_option; // pointer to TimeLink structs
} EmberExiGeneratedDeviceStatus;


#define emberExiDeviceStatusStructDataIndex 868
#define emberExiDeviceStatusStructData (emEncoderEvents + emberExiDeviceStatusStructDataIndex)
#define emberExiCompareStructDeviceStatus(x, y) (emExiCompareStructs(emberExiDeviceStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDeviceStatus(theStruct) (emExiStructMemoryFootprint(emberExiDeviceStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDeviceStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDeviceStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDeviceStatus(EmberExiGeneratedDeviceStatus *data);

// Converts struct to XML
void emberExiToXmlStructDeviceStatus(EmberExiGeneratedDeviceStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructDeviceStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDeviceStatus(int8u *stringBuffer, int offset, EmberExiGeneratedDeviceStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Charges contain non-commodity
// related charges on a customer bill.  These could be items like taxes, levies,
// surcharges, rebates, or others.  This is meant to allow the HAN device to
// retrieve enough information to be able to reconstruct and estimate of what the
// total bill would look like.</xs:documentation>
// </xs:annotation>
// Complex type: Charge
#define emberExiStructChargeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCharge)))

typedef struct _EmberExiGeneratedCharge {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_kind_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedIntervalBlockListLink *IntervalBlockListLink_option; // pointer to IntervalBlockListLink structs
  EmberExiGeneratedReadingLink *ReadingLink_option; // pointer to ReadingLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
  EmberExiGeneratedChargeKind kind_option; // element
} EmberExiGeneratedCharge;


#define emberExiChargeStructDataIndex 199
#define emberExiChargeStructData (emEncoderEvents + emberExiChargeStructDataIndex)
#define emberExiCompareStructCharge(x, y) (emExiCompareStructs(emberExiChargeStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCharge(theStruct) (emExiStructMemoryFootprint(emberExiChargeStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCharge(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCharge(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCharge(EmberExiGeneratedCharge *data);

// Converts struct to XML
void emberExiToXmlStructCharge(EmberExiGeneratedCharge *data);

// Writes XML to a string
int emberExiXmlSprintfStructCharge(int8u *stringBuffer, int offset, EmberExiGeneratedCharge *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCharge(int8u *stringBuffer, int offset, EmberExiGeneratedCharge *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold Charge
// objects.</xs:documentation>
// </xs:annotation>
// Complex type: ChargeList
#define emberExiStructChargeListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedChargeList)))

typedef struct _EmberExiGeneratedChargeList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u Charge_count; // number of Charge structs
  EmberExiGeneratedCharge *Charge_array; // pointer to Charge structs
} EmberExiGeneratedChargeList;


#define emberExiChargeListStructDataIndex 208
#define emberExiChargeListStructData (emEncoderEvents + emberExiChargeListStructDataIndex)
#define emberExiCompareStructChargeList(x, y) (emExiCompareStructs(emberExiChargeListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructChargeList(theStruct) (emExiStructMemoryFootprint(emberExiChargeListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructChargeList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructChargeList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructChargeList(EmberExiGeneratedChargeList *data);

// Converts struct to XML
void emberExiToXmlStructChargeList(EmberExiGeneratedChargeList *data);

// Writes XML to a string
int emberExiXmlSprintfStructChargeList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructChargeList(int8u *stringBuffer, int offset, EmberExiGeneratedChargeList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// LoadShedAvailability objects.</xs:documentation>
// </xs:annotation>
// Complex type: LoadShedAvailabilityList
#define emberExiStructLoadShedAvailabilityListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLoadShedAvailabilityList)))

typedef struct _EmberExiGeneratedLoadShedAvailabilityList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u LoadShedAvailability_count; // number of LoadShedAvailability structs
  EmberExiGeneratedLoadShedAvailability *LoadShedAvailability_array; // pointer to LoadShedAvailability structs
} EmberExiGeneratedLoadShedAvailabilityList;


#define emberExiLoadShedAvailabilityListStructDataIndex 1396
#define emberExiLoadShedAvailabilityListStructData (emEncoderEvents + emberExiLoadShedAvailabilityListStructDataIndex)
#define emberExiCompareStructLoadShedAvailabilityList(x, y) (emExiCompareStructs(emberExiLoadShedAvailabilityListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLoadShedAvailabilityList(theStruct) (emExiStructMemoryFootprint(emberExiLoadShedAvailabilityListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLoadShedAvailabilityList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLoadShedAvailabilityList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLoadShedAvailabilityList(EmberExiGeneratedLoadShedAvailabilityList *data);

// Converts struct to XML
void emberExiToXmlStructLoadShedAvailabilityList(EmberExiGeneratedLoadShedAvailabilityList *data);

// Writes XML to a string
int emberExiXmlSprintfStructLoadShedAvailabilityList(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLoadShedAvailabilityList(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold File
// objects.</xs:documentation>
// </xs:annotation>
// Complex type: FileList
#define emberExiStructFileListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileList)))

typedef struct _EmberExiGeneratedFileList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u File_count; // number of File structs
  EmberExiGeneratedFile *File_array; // pointer to File structs
} EmberExiGeneratedFileList;


#define emberExiFileListStructDataIndex 1195
#define emberExiFileListStructData (emEncoderEvents + emberExiFileListStructDataIndex)
#define emberExiCompareStructFileList(x, y) (emExiCompareStructs(emberExiFileListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFileList(theStruct) (emExiStructMemoryFootprint(emberExiFileListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFileList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFileList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFileList(EmberExiGeneratedFileList *data);

// Converts struct to XML
void emberExiToXmlStructFileList(EmberExiGeneratedFileList *data);

// Writes XML to a string
int emberExiXmlSprintfStructFileList(int8u *stringBuffer, int offset, EmberExiGeneratedFileList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFileList(int8u *stringBuffer, int offset, EmberExiGeneratedFileList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// EndDeviceControl objects.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceControlList
#define emberExiStructEndDeviceControlListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceControlList)))

typedef struct _EmberExiGeneratedEndDeviceControlList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u EndDeviceControl_count; // number of EndDeviceControl structs
  EmberExiGeneratedEndDeviceControl *EndDeviceControl_array; // pointer to EndDeviceControl structs
} EmberExiGeneratedEndDeviceControlList;


#define emberExiEndDeviceControlListStructDataIndex 1060
#define emberExiEndDeviceControlListStructData (emEncoderEvents + emberExiEndDeviceControlListStructDataIndex)
#define emberExiCompareStructEndDeviceControlList(x, y) (emExiCompareStructs(emberExiEndDeviceControlListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceControlList(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceControlListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceControlList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceControlList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceControlList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceControlList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceControlList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A response to a text
// message</xs:documentation>
// </xs:annotation>
// Complex type: TextResponse
#define emberExiStructTextResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTextResponse)))

typedef struct _EmberExiGeneratedTextResponse {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_subject_option:1;
  unsigned int flagPadding:9;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 category_option; // element
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedStatusType status_option; // element
  EmberExiGeneratedHexBinary64 subject_option; // element
  EmberExiGeneratedEndDeviceLink *EndDeviceLink; // pointer to EndDeviceLink structs
  EmberExiGeneratedServiceSupplierLink *ServiceSupplierLink; // pointer to ServiceSupplierLink structs
  EmberExiGeneratedSignature *Signature_option; // pointer to Signature structs
} EmberExiGeneratedTextResponse;


#define emberExiTextResponseStructDataIndex 2512
#define emberExiTextResponseStructData (emEncoderEvents + emberExiTextResponseStructDataIndex)
#define emberExiCompareStructTextResponse(x, y) (emExiCompareStructs(emberExiTextResponseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructTextResponse(theStruct) (emExiStructMemoryFootprint(emberExiTextResponseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructTextResponse(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructTextResponse(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructTextResponse(EmberExiGeneratedTextResponse *data);

// Converts struct to XML
void emberExiToXmlStructTextResponse(EmberExiGeneratedTextResponse *data);

// Writes XML to a string
int emberExiXmlSprintfStructTextResponse(int8u *stringBuffer, int offset, EmberExiGeneratedTextResponse *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructTextResponse(int8u *stringBuffer, int offset, EmberExiGeneratedTextResponse *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of active
// ProjectionReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveProjectionReadingListLink
#define emberExiStructActiveProjectionReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveProjectionReadingListLink)))

typedef struct _EmberExiGeneratedActiveProjectionReadingListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveProjectionReadingListLink;


#define emberExiActiveProjectionReadingListLinkStructDataIndex 124
#define emberExiActiveProjectionReadingListLinkStructData (emEncoderEvents + emberExiActiveProjectionReadingListLinkStructDataIndex)
#define emberExiCompareStructActiveProjectionReadingListLink(x, y) (emExiCompareStructs(emberExiActiveProjectionReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveProjectionReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveProjectionReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveProjectionReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveProjectionReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveProjectionReadingListLink(EmberExiGeneratedActiveProjectionReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveProjectionReadingListLink(EmberExiGeneratedActiveProjectionReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveProjectionReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveProjectionReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveProjectionReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of active
// TargetReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveTargetReadingListLink
#define emberExiStructActiveTargetReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveTargetReadingListLink)))

typedef struct _EmberExiGeneratedActiveTargetReadingListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedActiveTargetReadingListLink;


#define emberExiActiveTargetReadingListLinkStructDataIndex 136
#define emberExiActiveTargetReadingListLinkStructData (emEncoderEvents + emberExiActiveTargetReadingListLinkStructDataIndex)
#define emberExiCompareStructActiveTargetReadingListLink(x, y) (emExiCompareStructs(emberExiActiveTargetReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActiveTargetReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiActiveTargetReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActiveTargetReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActiveTargetReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActiveTargetReadingListLink(EmberExiGeneratedActiveTargetReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructActiveTargetReadingListLink(EmberExiGeneratedActiveTargetReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructActiveTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTargetReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActiveTargetReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedActiveTargetReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Assignment of a group of
// products and services purchased by the Customer through a CustomerAgreement,
// used as a mechanism for customer billing and payment. It contains common
// information from the various types of CustomerAgreements to create billings
// (invoices) for a Customer and receive
// payment.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAccount
#define emberExiStructCustomerAccountInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAccount)))

typedef struct _EmberExiGeneratedCustomerAccount {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_subject_option:1;
  unsigned int has_currency_option:1;
  unsigned int flagPadding:8;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 category_option; // element
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedStatusType status_option; // element
  EmberExiGeneratedHexBinary64 subject_option; // element
  EmberExiGeneratedActiveBillingPeriodListLink *ActiveBillingPeriodListLink_option; // pointer to ActiveBillingPeriodListLink structs
  EmberExiGeneratedActiveProjectionReadingListLink *ActiveProjectionReadingListLink_option; // pointer to ActiveProjectionReadingListLink structs
  EmberExiGeneratedActiveTargetReadingListLink *ActiveTargetReadingListLink_option; // pointer to ActiveTargetReadingListLink structs
  EmberExiGeneratedBillingPeriodListLink *BillingPeriodListLink_option; // pointer to BillingPeriodListLink structs
  EmberExiGeneratedChargeListLink *ChargeListLink_option; // pointer to ChargeListLink structs
  EmberExiGeneratedUInt16 currency_option; // element
  EmberExiGeneratedHistoricalReadingListLink *HistoricalReadingListLink_option; // pointer to HistoricalReadingListLink structs
  EmberExiGeneratedProjectionReadingListLink *ProjectionReadingListLink_option; // pointer to ProjectionReadingListLink structs
  EmberExiGeneratedTargetReadingListLink *TargetReadingListLink_option; // pointer to TargetReadingListLink structs
} EmberExiGeneratedCustomerAccount;


#define emberExiCustomerAccountStructDataIndex 442
#define emberExiCustomerAccountStructData (emEncoderEvents + emberExiCustomerAccountStructDataIndex)
#define emberExiCompareStructCustomerAccount(x, y) (emExiCompareStructs(emberExiCustomerAccountStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCustomerAccount(theStruct) (emExiStructMemoryFootprint(emberExiCustomerAccountStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCustomerAccount(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCustomerAccount(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCustomerAccount(EmberExiGeneratedCustomerAccount *data);

// Converts struct to XML
void emberExiToXmlStructCustomerAccount(EmberExiGeneratedCustomerAccount *data);

// Writes XML to a string
int emberExiXmlSprintfStructCustomerAccount(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccount *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCustomerAccount(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccount *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// DERProgram objects.</xs:documentation>
// </xs:annotation>
// Complex type: DERProgramList
#define emberExiStructDERProgramListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERProgramList)))

typedef struct _EmberExiGeneratedDERProgramList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u DERProgram_count; // number of DERProgram structs
  EmberExiGeneratedDERProgram *DERProgram_array; // pointer to DERProgram structs
} EmberExiGeneratedDERProgramList;


#define emberExiDERProgramListStructDataIndex 643
#define emberExiDERProgramListStructData (emEncoderEvents + emberExiDERProgramListStructDataIndex)
#define emberExiCompareStructDERProgramList(x, y) (emExiCompareStructs(emberExiDERProgramListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERProgramList(theStruct) (emExiStructMemoryFootprint(emberExiDERProgramListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERProgramList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERProgramList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERProgramList(EmberExiGeneratedDERProgramList *data);

// Converts struct to XML
void emberExiToXmlStructDERProgramList(EmberExiGeneratedDERProgramList *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERProgramList(int8u *stringBuffer, int offset, EmberExiGeneratedDERProgramList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A response related to
// prepayment</xs:documentation>
// </xs:annotation>
// Complex type: PrepayResponse
#define emberExiStructPrepayResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepayResponse)))

typedef struct _EmberExiGeneratedPrepayResponse {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_subject_option:1;
  unsigned int flagPadding:9;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedString32 category_option; // element
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedStatusType status_option; // element
  EmberExiGeneratedHexBinary64 subject_option; // element
  EmberExiGeneratedEndDeviceLink *EndDeviceLink; // pointer to EndDeviceLink structs
  EmberExiGeneratedServiceSupplierLink *ServiceSupplierLink; // pointer to ServiceSupplierLink structs
  EmberExiGeneratedSignature *Signature_option; // pointer to Signature structs
  EmberExiGeneratedCreditTypeType creditTypeApplied; // element
  EmberExiGeneratedServiceStatusType serviceStatusApplied; // element
} EmberExiGeneratedPrepayResponse;


#define emberExiPrepayResponseStructDataIndex 1768
#define emberExiPrepayResponseStructData (emEncoderEvents + emberExiPrepayResponseStructDataIndex)
#define emberExiCompareStructPrepayResponse(x, y) (emExiCompareStructs(emberExiPrepayResponseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPrepayResponse(theStruct) (emExiStructMemoryFootprint(emberExiPrepayResponseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPrepayResponse(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPrepayResponse(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPrepayResponse(EmberExiGeneratedPrepayResponse *data);

// Converts struct to XML
void emberExiToXmlStructPrepayResponse(EmberExiGeneratedPrepayResponse *data);

// Writes XML to a string
int emberExiXmlSprintfStructPrepayResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayResponse *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPrepayResponse(int8u *stringBuffer, int offset, EmberExiGeneratedPrepayResponse *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>This resource contains network
// statistics information.</xs:documentation>
// </xs:annotation>
// Complex type: NetworkStatus
#define emberExiStructNetworkStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNetworkStatus)))

typedef struct _EmberExiGeneratedNetworkStatus {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
} EmberExiGeneratedNetworkStatus;


#define emberExiNetworkStatusStructDataIndex 1624
#define emberExiNetworkStatusStructData (emEncoderEvents + emberExiNetworkStatusStructDataIndex)
#define emberExiCompareStructNetworkStatus(x, y) (emExiCompareStructs(emberExiNetworkStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructNetworkStatus(theStruct) (emExiStructMemoryFootprint(emberExiNetworkStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructNetworkStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructNetworkStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructNetworkStatus(EmberExiGeneratedNetworkStatus *data);

// Converts struct to XML
void emberExiToXmlStructNetworkStatus(EmberExiGeneratedNetworkStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructNetworkStatus(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructNetworkStatus(int8u *stringBuffer, int offset, EmberExiGeneratedNetworkStatus *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A schedule of charges;
// structure that allows the definition of tariff structures such as step (block)
// and time of use (tier) when used in conjunction with TimeTariffInterval,
// ConsumptionTariffInterval, and Charge.</xs:documentation>
// </xs:annotation>
// Complex type: BillingPeriod
#define emberExiStructBillingPeriodInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingPeriod)))

typedef struct _EmberExiGeneratedBillingPeriod {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedDateTimeInterval *interval_option; // pointer to interval structs
} EmberExiGeneratedBillingPeriod;


#define emberExiBillingPeriodStructDataIndex 169
#define emberExiBillingPeriodStructData (emEncoderEvents + emberExiBillingPeriodStructDataIndex)
#define emberExiCompareStructBillingPeriod(x, y) (emExiCompareStructs(emberExiBillingPeriodStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingPeriod(theStruct) (emExiStructMemoryFootprint(emberExiBillingPeriodStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingPeriod(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingPeriod(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingPeriod(EmberExiGeneratedBillingPeriod *data);

// Converts struct to XML
void emberExiToXmlStructBillingPeriod(EmberExiGeneratedBillingPeriod *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingPeriod(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriod *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingPeriod(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriod *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// BillingPeriod objects.</xs:documentation>
// </xs:annotation>
// Complex type: BillingPeriodList
#define emberExiStructBillingPeriodListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingPeriodList)))

typedef struct _EmberExiGeneratedBillingPeriodList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u BillingPeriod_count; // number of BillingPeriod structs
  EmberExiGeneratedBillingPeriod *BillingPeriod_array; // pointer to BillingPeriod structs
} EmberExiGeneratedBillingPeriodList;


#define emberExiBillingPeriodListStructDataIndex 181
#define emberExiBillingPeriodListStructData (emEncoderEvents + emberExiBillingPeriodListStructDataIndex)
#define emberExiCompareStructBillingPeriodList(x, y) (emExiCompareStructs(emberExiBillingPeriodListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingPeriodList(theStruct) (emExiStructMemoryFootprint(emberExiBillingPeriodListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingPeriodList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingPeriodList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingPeriodList(EmberExiGeneratedBillingPeriodList *data);

// Converts struct to XML
void emberExiToXmlStructBillingPeriodList(EmberExiGeneratedBillingPeriodList *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingPeriodList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingPeriodList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingPeriodList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List of MirrorUsagePoint
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: MirrorUsagePointList
#define emberExiStructMirrorUsagePointListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorUsagePointList)))

typedef struct _EmberExiGeneratedMirrorUsagePointList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u MirrorUsagePoint_count; // number of MirrorUsagePoint structs
  EmberExiGeneratedMirrorUsagePoint *MirrorUsagePoint_array; // pointer to MirrorUsagePoint structs
} EmberExiGeneratedMirrorUsagePointList;


#define emberExiMirrorUsagePointListStructDataIndex 1606
#define emberExiMirrorUsagePointListStructData (emEncoderEvents + emberExiMirrorUsagePointListStructDataIndex)
#define emberExiCompareStructMirrorUsagePointList(x, y) (emExiCompareStructs(emberExiMirrorUsagePointListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMirrorUsagePointList(theStruct) (emExiStructMemoryFootprint(emberExiMirrorUsagePointListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMirrorUsagePointList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMirrorUsagePointList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMirrorUsagePointList(EmberExiGeneratedMirrorUsagePointList *data);

// Converts struct to XML
void emberExiToXmlStructMirrorUsagePointList(EmberExiGeneratedMirrorUsagePointList *data);

// Writes XML to a string
int emberExiXmlSprintfStructMirrorUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMirrorUsagePointList(int8u *stringBuffer, int offset, EmberExiGeneratedMirrorUsagePointList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains identification and
// other information about the device.</xs:documentation>
// </xs:annotation>
// Complex type: Activation
#define emberExiStructActivationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActivation)))

typedef struct _EmberExiGeneratedActivation {
  int16u structType;
  EmberExiGeneratedTimeType activateTime; // element
  EmberExiGeneratedTimeType currentTime; // element
} EmberExiGeneratedActivation;


#define emberExiActivationStructDataIndex 52
#define emberExiActivationStructData (emEncoderEvents + emberExiActivationStructDataIndex)
#define emberExiCompareStructActivation(x, y) (emExiCompareStructs(emberExiActivationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructActivation(theStruct) (emExiStructMemoryFootprint(emberExiActivationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructActivation(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructActivation(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructActivation(EmberExiGeneratedActivation *data);

// Converts struct to XML
void emberExiToXmlStructActivation(EmberExiGeneratedActivation *data);

// Writes XML to a string
int emberExiXmlSprintfStructActivation(int8u *stringBuffer, int offset, EmberExiGeneratedActivation *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructActivation(int8u *stringBuffer, int offset, EmberExiGeneratedActivation *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Prepayment (inherited from CIM
// SDPAccountingFunction)</xs:documentation>
// </xs:annotation>
// Complex type: AccountBalance
#define emberExiStructAccountBalanceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAccountBalance)))

typedef struct _EmberExiGeneratedAccountBalance {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_creditStatus_option:1;
  unsigned int has_emergencyCreditStatus_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedAccountingUnit *availableCredit; // pointer to availableCredit structs
  EmberExiGeneratedCreditStatusType creditStatus_option; // element
  EmberExiGeneratedAccountingUnit *emergencyCredit_option; // pointer to emergencyCredit structs
  EmberExiGeneratedCreditStatusType emergencyCreditStatus_option; // element
} EmberExiGeneratedAccountBalance;


#define emberExiAccountBalanceStructDataIndex 1
#define emberExiAccountBalanceStructData (emEncoderEvents + emberExiAccountBalanceStructDataIndex)
#define emberExiCompareStructAccountBalance(x, y) (emExiCompareStructs(emberExiAccountBalanceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAccountBalance(theStruct) (emExiStructMemoryFootprint(emberExiAccountBalanceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAccountBalance(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAccountBalance(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAccountBalance(EmberExiGeneratedAccountBalance *data);

// Converts struct to XML
void emberExiToXmlStructAccountBalance(EmberExiGeneratedAccountBalance *data);

// Writes XML to a string
int emberExiXmlSprintfStructAccountBalance(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalance *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAccountBalance(int8u *stringBuffer, int offset, EmberExiGeneratedAccountBalance *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// HistoricalReading objects.</xs:documentation>
// </xs:annotation>
// Complex type: HistoricalReadingList
#define emberExiStructHistoricalReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedHistoricalReadingList)))

typedef struct _EmberExiGeneratedHistoricalReadingList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u HistoricalReading_count; // number of HistoricalReading structs
  EmberExiGeneratedHistoricalReading *HistoricalReading_array; // pointer to HistoricalReading structs
} EmberExiGeneratedHistoricalReadingList;


#define emberExiHistoricalReadingListStructDataIndex 1234
#define emberExiHistoricalReadingListStructData (emEncoderEvents + emberExiHistoricalReadingListStructDataIndex)
#define emberExiCompareStructHistoricalReadingList(x, y) (emExiCompareStructs(emberExiHistoricalReadingListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructHistoricalReadingList(theStruct) (emExiStructMemoryFootprint(emberExiHistoricalReadingListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructHistoricalReadingList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructHistoricalReadingList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructHistoricalReadingList(EmberExiGeneratedHistoricalReadingList *data);

// Converts struct to XML
void emberExiToXmlStructHistoricalReadingList(EmberExiGeneratedHistoricalReadingList *data);

// Writes XML to a string
int emberExiXmlSprintfStructHistoricalReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructHistoricalReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedHistoricalReadingList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Registration represents an
// authorization to access the resources on a
// host.</xs:documentation>
// </xs:annotation>
// Complex type: Registration
#define emberExiStructRegistrationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRegistration)))

typedef struct _EmberExiGeneratedRegistration {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_mRID_option:1;
  unsigned int flagPadding:12;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedHexBinary128 mRID_option; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedUInt32 installCode; // element
} EmberExiGeneratedRegistration;


#define emberExiRegistrationStructDataIndex 2080
#define emberExiRegistrationStructData (emEncoderEvents + emberExiRegistrationStructDataIndex)
#define emberExiCompareStructRegistration(x, y) (emExiCompareStructs(emberExiRegistrationStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRegistration(theStruct) (emExiStructMemoryFootprint(emberExiRegistrationStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRegistration(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRegistration(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRegistration(EmberExiGeneratedRegistration *data);

// Converts struct to XML
void emberExiToXmlStructRegistration(EmberExiGeneratedRegistration *data);

// Writes XML to a string
int emberExiXmlSprintfStructRegistration(int8u *stringBuffer, int offset, EmberExiGeneratedRegistration *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRegistration(int8u *stringBuffer, int offset, EmberExiGeneratedRegistration *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to a List of
// Notification instances.</xs:documentation>
// </xs:annotation>
// Complex type: NotificationListLink
#define emberExiStructNotificationListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNotificationListLink)))

typedef struct _EmberExiGeneratedNotificationListLink {
  int16u structType;
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedNotificationListLink;


#define emberExiNotificationListLinkStructDataIndex 1666
#define emberExiNotificationListLinkStructData (emEncoderEvents + emberExiNotificationListLinkStructDataIndex)
#define emberExiCompareStructNotificationListLink(x, y) (emExiCompareStructs(emberExiNotificationListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructNotificationListLink(theStruct) (emExiStructMemoryFootprint(emberExiNotificationListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructNotificationListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructNotificationListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructNotificationListLink(EmberExiGeneratedNotificationListLink *data);

// Converts struct to XML
void emberExiToXmlStructNotificationListLink(EmberExiGeneratedNotificationListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructNotificationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructNotificationListLink(int8u *stringBuffer, int offset, EmberExiGeneratedNotificationListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Link to an instance of
// MeterReading.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingLink
#define emberExiStructMeterReadingLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingLink)))

typedef struct _EmberExiGeneratedMeterReadingLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedMeterReadingLink;


#define emberExiMeterReadingLinkStructDataIndex 1525
#define emberExiMeterReadingLinkStructData (emEncoderEvents + emberExiMeterReadingLinkStructDataIndex)
#define emberExiCompareStructMeterReadingLink(x, y) (emExiCompareStructs(emberExiMeterReadingLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructMeterReadingLink(theStruct) (emExiStructMemoryFootprint(emberExiMeterReadingLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructMeterReadingLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructMeterReadingLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructMeterReadingLink(EmberExiGeneratedMeterReadingLink *data);

// Converts struct to XML
void emberExiToXmlStructMeterReadingLink(EmberExiGeneratedMeterReadingLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructMeterReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructMeterReadingLink(int8u *stringBuffer, int offset, EmberExiGeneratedMeterReadingLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// Subscription objects.</xs:documentation>
// </xs:annotation>
// Complex type: SubscriptionList
#define emberExiStructSubscriptionListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscriptionList)))

typedef struct _EmberExiGeneratedSubscriptionList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u Subscription_count; // number of Subscription structs
  EmberExiGeneratedSubscription *Subscription_array; // pointer to Subscription structs
} EmberExiGeneratedSubscriptionList;


#define emberExiSubscriptionListStructDataIndex 2293
#define emberExiSubscriptionListStructData (emEncoderEvents + emberExiSubscriptionListStructDataIndex)
#define emberExiCompareStructSubscriptionList(x, y) (emExiCompareStructs(emberExiSubscriptionListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSubscriptionList(theStruct) (emExiStructMemoryFootprint(emberExiSubscriptionListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSubscriptionList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSubscriptionList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSubscriptionList(EmberExiGeneratedSubscriptionList *data);

// Converts struct to XML
void emberExiToXmlStructSubscriptionList(EmberExiGeneratedSubscriptionList *data);

// Writes XML to a string
int emberExiXmlSprintfStructSubscriptionList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSubscriptionList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// EndDeviceGroup objects.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceGroupList
#define emberExiStructEndDeviceGroupListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceGroupList)))

typedef struct _EmberExiGeneratedEndDeviceGroupList {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_signatureRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_all_option:1;
  unsigned int has_results_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedBoolean signatureRequired_option; // attribute
  EmberExiGeneratedBoolean subscribable_option; // attribute
  EmberExiGeneratedUInt16 all_option; // attribute
  EmberExiGeneratedUInt8 results_option; // attribute
  int8u EndDeviceGroup_count; // number of EndDeviceGroup structs
  EmberExiGeneratedEndDeviceGroup *EndDeviceGroup_array; // pointer to EndDeviceGroup structs
} EmberExiGeneratedEndDeviceGroupList;


#define emberExiEndDeviceGroupListStructDataIndex 1138
#define emberExiEndDeviceGroupListStructData (emEncoderEvents + emberExiEndDeviceGroupListStructDataIndex)
#define emberExiCompareStructEndDeviceGroupList(x, y) (emExiCompareStructs(emberExiEndDeviceGroupListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEndDeviceGroupList(theStruct) (emExiStructMemoryFootprint(emberExiEndDeviceGroupListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEndDeviceGroupList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEndDeviceGroupList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEndDeviceGroupList(EmberExiGeneratedEndDeviceGroupList *data);

// Converts struct to XML
void emberExiToXmlStructEndDeviceGroupList(EmberExiGeneratedEndDeviceGroupList *data);

// Writes XML to a string
int emberExiXmlSprintfStructEndDeviceGroupList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEndDeviceGroupList(int8u *stringBuffer, int offset, EmberExiGeneratedEndDeviceGroupList *data);

// Struct comparison function
;


#endif // __EMBER_EXI_GENERATED_FILE_TYPES__
