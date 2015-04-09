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
// hex string (32 hex characters max). Where applicable, bit 0, or the least
// significant bit, goes on the right. Note that hexBinary requires pairs of hex
// characters, so an odd number of characters requires a leading
// "0".</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary128
typedef struct {
  int8u length;
  int8u bytes[16];
} EmberExiGeneratedHexBinary128;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A master resource identifier.
// The IANA PEN [PEN] provider ID SHALL be specified in bits 0-31, the
// least-significant bits, and objects created by that provider SHALL be assigned
// unique IDs with the remaining 96 bits. 
// 0xFFFFFFFFFFFFFFFFFFFFFFFF[XXXXXXXX],
// where [XXXXXXXX] is the PEN, is reserved for a object that is being created
// (e.g., a ReadingSet for the current time that is still accumulating). 
// Except
// for this special reserved identifier, each modification of an object (resource)
// representation MUST have a different
// "version".</xs:documentation>
// </xs:annotation>
// Complex type: mRIDType
typedef EmberExiGeneratedHexBinary128 EmberExiGeneratedmRIDType; // based-on HexBinary128



// Built-in type: String
typedef int8u* EmberExiGeneratedString;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max length
// 32. In order to limit internal storage, implementations SHALL reduce the length
// of strings using multi-byte characters so that the string may be stored using
// "maxLength" octets in the given encoding.</xs:documentation>
// </xs:annotation>
// Simple type: String32
typedef EmberExiGeneratedString EmberExiGeneratedString32;



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
// <xs:documentation>Version SHALL indicate a
// distinct identifier for each revision of an IdentifiedObject. If not specified,
// a default version of "0" (initial version) SHALL be assumed. Upon modification
// of any IdentifiedObject, the mRID SHALL remain the same, but the version SHALL
// be incremented. Servers MAY NOT modify objects that they did not create, unless
// they were notified of the change from the entity controlling the object's
// PEN.</xs:documentation>
// </xs:annotation>
// Complex type: VersionType
typedef EmberExiGeneratedUInt16 EmberExiGeneratedVersionType; // based-on UInt16



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


#define emberExiLinkStructDataIndex 1753
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
// <xs:documentation>ListLinks provide a reference,
// via URI, to a List.</xs:documentation>
// </xs:annotation>
// Complex type: ListLink
#define emberExiStructListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedListLink)))

typedef struct _EmberExiGeneratedListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedListLink;


#define emberExiListLinkStructDataIndex 1777
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
// <xs:documentation>SHALL contain a Link to a List
// of active DERControl instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveDERControlListLink
#define emberExiStructActiveDERControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveDERControlListLink)))

typedef struct _EmberExiGeneratedActiveDERControlListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveDERControlListLink;


#define emberExiActiveDERControlListLinkStructDataIndex 130
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
// <xs:documentation>SHALL contain a Link to an
// instance of DefaultDERControl. This is the default mode of the DER which MAY be
// overridden by DERControl events.</xs:documentation>
// </xs:annotation>
// Complex type: DefaultDERControlLink
#define emberExiStructDefaultDERControlLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDefaultDERControlLink)))

typedef struct _EmberExiGeneratedDefaultDERControlLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDefaultDERControlLink;


#define emberExiDefaultDERControlLinkStructDataIndex 994
#define emberExiDefaultDERControlLinkStructData (emEncoderEvents + emberExiDefaultDERControlLinkStructDataIndex)
#define emberExiCompareStructDefaultDERControlLink(x, y) (emExiCompareStructs(emberExiDefaultDERControlLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDefaultDERControlLink(theStruct) (emExiStructMemoryFootprint(emberExiDefaultDERControlLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDefaultDERControlLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDefaultDERControlLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDefaultDERControlLink(EmberExiGeneratedDefaultDERControlLink *data);

// Converts struct to XML
void emberExiToXmlStructDefaultDERControlLink(EmberExiGeneratedDefaultDERControlLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDefaultDERControlLink(int8u *stringBuffer, int offset, EmberExiGeneratedDefaultDERControlLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDefaultDERControlLink(int8u *stringBuffer, int offset, EmberExiGeneratedDefaultDERControlLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of DERControl instances.</xs:documentation>
// </xs:annotation>
// Complex type: DERControlListLink
#define emberExiStructDERControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERControlListLink)))

typedef struct _EmberExiGeneratedDERControlListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedDERControlListLink;


#define emberExiDERControlListLinkStructDataIndex 814
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
// <xs:documentation>SHALL contain a Link to a List
// of DERCurve instances.</xs:documentation>
// </xs:annotation>
// Complex type: DERCurveListLink
#define emberExiStructDERCurveListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERCurveListLink)))

typedef struct _EmberExiGeneratedDERCurveListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedDERCurveListLink;


#define emberExiDERCurveListLinkStructDataIndex 874
#define emberExiDERCurveListLinkStructData (emEncoderEvents + emberExiDERCurveListLinkStructDataIndex)
#define emberExiCompareStructDERCurveListLink(x, y) (emExiCompareStructs(emberExiDERCurveListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERCurveListLink(theStruct) (emExiStructMemoryFootprint(emberExiDERCurveListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERCurveListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERCurveListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERCurveListLink(EmberExiGeneratedDERCurveListLink *data);

// Converts struct to XML
void emberExiToXmlStructDERCurveListLink(EmberExiGeneratedDERCurveListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERCurveListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERCurveListLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveListLink *data);

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
// <xs:documentation>Values possible for indication
// of "Primary" provider: 
// 0: In home energy management system
// 1: Contracted
// premises service provider
// 2: Non-contractual service provider
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: PrimacyType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPrimacyType; // based-on UInt8



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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
} EmberExiGeneratedResource;


#define emberExiResourceStructDataIndex 2446
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
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
} EmberExiGeneratedIdentifiedObject;


#define emberExiIdentifiedObjectStructDataIndex 1732
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
// <xs:documentation>Distributed Energy Resource
// program.</xs:documentation>
// </xs:annotation>
// Complex type: DERProgram
#define emberExiStructDERProgramInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERProgram)))

typedef struct _EmberExiGeneratedDERProgram {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedActiveDERControlListLink *ActiveDERControlListLink_option; // pointer to ActiveDERControlListLink structs
  EmberExiGeneratedDefaultDERControlLink *DefaultDERControlLink_option; // pointer to DefaultDERControlLink structs
  EmberExiGeneratedDERControlListLink *DERControlListLink_option; // pointer to DERControlListLink structs
  EmberExiGeneratedDERCurveListLink *DERCurveListLink_option; // pointer to DERCurveListLink structs
  EmberExiGeneratedPrimacyType primacy; // element
} EmberExiGeneratedDERProgram;


#define emberExiDERProgramStructDataIndex 898
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


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of DERPrograms having the DERControl(s) for this
// DER.</xs:documentation>
// </xs:annotation>
// Complex type: AssociatedDERProgramListLink
#define emberExiStructAssociatedDERProgramListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAssociatedDERProgramListLink)))

typedef struct _EmberExiGeneratedAssociatedDERProgramListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedAssociatedDERProgramListLink;


#define emberExiAssociatedDERProgramListLinkStructDataIndex 205
#define emberExiAssociatedDERProgramListLinkStructData (emEncoderEvents + emberExiAssociatedDERProgramListLinkStructDataIndex)
#define emberExiCompareStructAssociatedDERProgramListLink(x, y) (emExiCompareStructs(emberExiAssociatedDERProgramListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAssociatedDERProgramListLink(theStruct) (emExiStructMemoryFootprint(emberExiAssociatedDERProgramListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAssociatedDERProgramListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAssociatedDERProgramListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAssociatedDERProgramListLink(EmberExiGeneratedAssociatedDERProgramListLink *data);

// Converts struct to XML
void emberExiToXmlStructAssociatedDERProgramListLink(EmberExiGeneratedAssociatedDERProgramListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructAssociatedDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedDERProgramListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAssociatedDERProgramListLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedDERProgramListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of UsagePoint.  If present, this is the submeter that monitors the DER
// output.</xs:documentation>
// </xs:annotation>
// Complex type: AssociatedUsagePointLink
#define emberExiStructAssociatedUsagePointLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAssociatedUsagePointLink)))

typedef struct _EmberExiGeneratedAssociatedUsagePointLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedAssociatedUsagePointLink;


#define emberExiAssociatedUsagePointLinkStructDataIndex 211
#define emberExiAssociatedUsagePointLinkStructData (emEncoderEvents + emberExiAssociatedUsagePointLinkStructDataIndex)
#define emberExiCompareStructAssociatedUsagePointLink(x, y) (emExiCompareStructs(emberExiAssociatedUsagePointLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAssociatedUsagePointLink(theStruct) (emExiStructMemoryFootprint(emberExiAssociatedUsagePointLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAssociatedUsagePointLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAssociatedUsagePointLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAssociatedUsagePointLink(EmberExiGeneratedAssociatedUsagePointLink *data);

// Converts struct to XML
void emberExiToXmlStructAssociatedUsagePointLink(EmberExiGeneratedAssociatedUsagePointLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructAssociatedUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedUsagePointLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAssociatedUsagePointLink(int8u *stringBuffer, int offset, EmberExiGeneratedAssociatedUsagePointLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of DERProgram.  If present, this is the DERProgram containing the
// currently active DERControl.</xs:documentation>
// </xs:annotation>
// Complex type: CurrentDERProgramLink
#define emberExiStructCurrentDERProgramLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCurrentDERProgramLink)))

typedef struct _EmberExiGeneratedCurrentDERProgramLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedCurrentDERProgramLink;


#define emberExiCurrentDERProgramLinkStructDataIndex 490
#define emberExiCurrentDERProgramLinkStructData (emEncoderEvents + emberExiCurrentDERProgramLinkStructDataIndex)
#define emberExiCompareStructCurrentDERProgramLink(x, y) (emExiCompareStructs(emberExiCurrentDERProgramLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCurrentDERProgramLink(theStruct) (emExiStructMemoryFootprint(emberExiCurrentDERProgramLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCurrentDERProgramLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCurrentDERProgramLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCurrentDERProgramLink(EmberExiGeneratedCurrentDERProgramLink *data);

// Converts struct to XML
void emberExiToXmlStructCurrentDERProgramLink(EmberExiGeneratedCurrentDERProgramLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructCurrentDERProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedCurrentDERProgramLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCurrentDERProgramLink(int8u *stringBuffer, int offset, EmberExiGeneratedCurrentDERProgramLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of DERAvailability.</xs:documentation>
// </xs:annotation>
// Complex type: DERAvailabilityLink
#define emberExiStructDERAvailabilityLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERAvailabilityLink)))

typedef struct _EmberExiGeneratedDERAvailabilityLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERAvailabilityLink;


#define emberExiDERAvailabilityLinkStructDataIndex 715
#define emberExiDERAvailabilityLinkStructData (emEncoderEvents + emberExiDERAvailabilityLinkStructDataIndex)
#define emberExiCompareStructDERAvailabilityLink(x, y) (emExiCompareStructs(emberExiDERAvailabilityLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERAvailabilityLink(theStruct) (emExiStructMemoryFootprint(emberExiDERAvailabilityLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERAvailabilityLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERAvailabilityLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERAvailabilityLink(EmberExiGeneratedDERAvailabilityLink *data);

// Converts struct to XML
void emberExiToXmlStructDERAvailabilityLink(EmberExiGeneratedDERAvailabilityLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERAvailabilityLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERAvailabilityLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of DERCapability.</xs:documentation>
// </xs:annotation>
// Complex type: DERCapabilityLink
#define emberExiStructDERCapabilityLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERCapabilityLink)))

typedef struct _EmberExiGeneratedDERCapabilityLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERCapabilityLink;


#define emberExiDERCapabilityLinkStructDataIndex 721
#define emberExiDERCapabilityLinkStructData (emEncoderEvents + emberExiDERCapabilityLinkStructDataIndex)
#define emberExiCompareStructDERCapabilityLink(x, y) (emExiCompareStructs(emberExiDERCapabilityLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERCapabilityLink(theStruct) (emExiStructMemoryFootprint(emberExiDERCapabilityLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERCapabilityLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERCapabilityLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERCapabilityLink(EmberExiGeneratedDERCapabilityLink *data);

// Converts struct to XML
void emberExiToXmlStructDERCapabilityLink(EmberExiGeneratedDERCapabilityLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCapabilityLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERCapabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCapabilityLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of DERSettings.</xs:documentation>
// </xs:annotation>
// Complex type: DERSettingsLink
#define emberExiStructDERSettingsLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERSettingsLink)))

typedef struct _EmberExiGeneratedDERSettingsLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERSettingsLink;


#define emberExiDERSettingsLinkStructDataIndex 949
#define emberExiDERSettingsLinkStructData (emEncoderEvents + emberExiDERSettingsLinkStructDataIndex)
#define emberExiCompareStructDERSettingsLink(x, y) (emExiCompareStructs(emberExiDERSettingsLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERSettingsLink(theStruct) (emExiStructMemoryFootprint(emberExiDERSettingsLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERSettingsLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERSettingsLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERSettingsLink(EmberExiGeneratedDERSettingsLink *data);

// Converts struct to XML
void emberExiToXmlStructDERSettingsLink(EmberExiGeneratedDERSettingsLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERSettingsLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERSettingsLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERSettingsLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERSettingsLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of DERStatus.</xs:documentation>
// </xs:annotation>
// Complex type: DERStatusLink
#define emberExiStructDERStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERStatusLink)))

typedef struct _EmberExiGeneratedDERStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERStatusLink;


#define emberExiDERStatusLinkStructDataIndex 955
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
// <xs:documentation>The subscribable values.
// 0 -
// Resource does not support subscriptions
// 1 - Resource supports non-conditional
// subscriptions
// 2 - Resource supports conditional subscriptions
// 3 - Resource
// supports both conditional and non-conditional subscriptions
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Simple type: SubscribableType
typedef EmberExiGeneratedInt8u EmberExiGeneratedSubscribableType;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Resource to which a
// Subscription can be requested.</xs:documentation>
// </xs:annotation>
// Complex type: SubscribableResource
#define emberExiStructSubscribableResourceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscribableResource)))

typedef struct _EmberExiGeneratedSubscribableResource {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
} EmberExiGeneratedSubscribableResource;


#define emberExiSubscribableResourceStructDataIndex 2614
#define emberExiSubscribableResourceStructData (emEncoderEvents + emberExiSubscribableResourceStructDataIndex)
#define emberExiCompareStructSubscribableResource(x, y) (emExiCompareStructs(emberExiSubscribableResourceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSubscribableResource(theStruct) (emExiStructMemoryFootprint(emberExiSubscribableResourceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSubscribableResource(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSubscribableResource(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSubscribableResource(EmberExiGeneratedSubscribableResource *data);

// Converts struct to XML
void emberExiToXmlStructSubscribableResource(EmberExiGeneratedSubscribableResource *data);

// Writes XML to a string
int emberExiXmlSprintfStructSubscribableResource(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableResource *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSubscribableResource(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableResource *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains links to DER
// resources.</xs:documentation>
// </xs:annotation>
// Complex type: DER
#define emberExiStructDERInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDER)))

typedef struct _EmberExiGeneratedDER {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedAssociatedDERProgramListLink *AssociatedDERProgramListLink_option; // pointer to AssociatedDERProgramListLink structs
  EmberExiGeneratedAssociatedUsagePointLink *AssociatedUsagePointLink_option; // pointer to AssociatedUsagePointLink structs
  EmberExiGeneratedCurrentDERProgramLink *CurrentDERProgramLink_option; // pointer to CurrentDERProgramLink structs
  EmberExiGeneratedDERAvailabilityLink *DERAvailabilityLink_option; // pointer to DERAvailabilityLink structs
  EmberExiGeneratedDERCapabilityLink *DERCapabilityLink_option; // pointer to DERCapabilityLink structs
  EmberExiGeneratedDERSettingsLink *DERSettingsLink_option; // pointer to DERSettingsLink structs
  EmberExiGeneratedDERStatusLink *DERStatusLink_option; // pointer to DERStatusLink structs
} EmberExiGeneratedDER;


#define emberExiDERStructDataIndex 667
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
// <xs:documentation>0 - Regular
// 1 - Emergency
// 2 -
// Regular, then Emergency
// 3 - Emergency, then Regular
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: CreditTypeType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCreditTypeType; // based-on UInt8



// Built-in type: Int32s
typedef int32s EmberExiGeneratedInt32s;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Signed integer, max inclusive
// 9223372036854775807 (2^63), min inclusive -9223372036854775808 (same as
// xs:long)</xs:documentation>
// </xs:annotation>
// Simple type: Int64
typedef EmberExiGeneratedInt32s EmberExiGeneratedInt64;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Time is a signed 64 bit value
// representing the number of seconds since 0 hours, 0 minutes, 0 seconds, on the
// 1st of January, 1970, in UTC, not counting leap
// seconds.</xs:documentation>
// </xs:annotation>
// Complex type: TimeType
typedef EmberExiGeneratedInt64 EmberExiGeneratedTimeType; // based-on Int64



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


#define emberExiCreditTypeChangeStructDataIndex 478
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


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max length
// 20. In order to limit internal storage, implementations SHALL reduce the length
// of strings using multi-byte characters so that the string may be stored using
// "maxLength" octets in the given encoding.</xs:documentation>
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
// <xs:documentation>Character string of max length
// 42. In order to limit internal storage, implementations SHALL reduce the length
// of strings using multi-byte characters so that the string may be stored using
// "maxLength" octets in the given encoding.</xs:documentation>
// </xs:annotation>
// Simple type: String42
typedef EmberExiGeneratedString EmberExiGeneratedString42;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Organisation that provides
// services to Customers.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceSupplier
#define emberExiStructServiceSupplierInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceSupplier)))

typedef struct _EmberExiGeneratedServiceSupplier {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int has_providerID_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedString32 email_option; // element
  EmberExiGeneratedString20 phone_option; // element
  EmberExiGeneratedUInt32 providerID_option; // element
  EmberExiGeneratedString42 web_option; // element
} EmberExiGeneratedServiceSupplier;


#define emberExiServiceSupplierStructDataIndex 2545
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


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 1 = Block 1
// 2 = Block 2
// 3 = Block 3
// 4 = Block 4
// 5 = Block 5
// 6
// = Block 6
// 7 = Block 7
// 8 = Block 8
// 9 = Block 9
// 10 = Block 10
// 11 = Block 11
// 12 =
// Block 12
// 13 = Block 13
// 14 = Block 14
// 15 = Block 15
// 16 = Block 16
// All other
// values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: ConsumptionBlockType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedConsumptionBlockType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A 16-bit field encoded as a
// hex string (4 hex characters max). Where applicable, bit 0, or the least
// significant bit, goes on the right. Note that hexBinary requires pairs of hex
// characters, so an odd number of characters requires a leading
// "0".</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary16
typedef struct {
  int8u length;
  int8u bytes[2];
} EmberExiGeneratedHexBinary16;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Interval of date and
// time.</xs:documentation>
// </xs:annotation>
// Complex type: DateTimeInterval
#define emberExiStructDateTimeIntervalInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDateTimeInterval)))

typedef struct _EmberExiGeneratedDateTimeInterval {
  int16u structType;
  EmberExiGeneratedUInt32 duration; // element
  EmberExiGeneratedTimeType start; // element
} EmberExiGeneratedDateTimeInterval;


#define emberExiDateTimeIntervalStructDataIndex 982
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


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 1 = TOU A
// 2 = TOU B
// 3 = TOU C
// 4 = TOU D
// 5 = TOU E
// 6 = TOU F
// 7
// = TOU G
// 8 = TOU H
// 9 = TOU I
// 10 = TOU J
// 11 = TOU K
// 12 = TOU L
// 13 = TOU M
// 14 = TOU
// N
// 15 = TOU O
// All other values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: TOUType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedTOUType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Signed integer, max inclusive
// 140737488355328 (2^47), min inclusive
// -140737488355328</xs:documentation>
// </xs:annotation>
// Simple type: Int48
typedef EmberExiGeneratedInt32s EmberExiGeneratedInt48;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specific value measured by a
// meter or other asset. ReadingBase is abstract, used to define the elements
// common to Reading and IntervalReading.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingBase
#define emberExiStructReadingBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingBase)))

typedef struct _EmberExiGeneratedReadingBase {
  int16u structType;
  unsigned int has_consumptionBlock_option:1;
  unsigned int has_qualityFlags_option:1;
  unsigned int has_touTier_option:1;
  unsigned int has_value_option:1;
  unsigned int flagPadding:18;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedConsumptionBlockType consumptionBlock_option; // element
  EmberExiGeneratedHexBinary16 qualityFlags_option; // element
  EmberExiGeneratedDateTimeInterval *timePeriod_option; // pointer to timePeriod structs
  EmberExiGeneratedTOUType touTier_option; // element
  EmberExiGeneratedInt48 value_option; // element
} EmberExiGeneratedReadingBase;


#define emberExiReadingBaseStructDataIndex 2332
#define emberExiReadingBaseStructData (emEncoderEvents + emberExiReadingBaseStructDataIndex)
#define emberExiCompareStructReadingBase(x, y) (emExiCompareStructs(emberExiReadingBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingBase(theStruct) (emExiStructMemoryFootprint(emberExiReadingBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingBase(EmberExiGeneratedReadingBase *data);

// Converts struct to XML
void emberExiToXmlStructReadingBase(EmberExiGeneratedReadingBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingBase *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specific value measured by a
// meter or other asset.</xs:documentation>
// </xs:annotation>
// Complex type: Reading
#define emberExiStructReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReading)))

typedef struct _EmberExiGeneratedReading {
  int16u structType;
  unsigned int has_consumptionBlock_option:1;
  unsigned int has_qualityFlags_option:1;
  unsigned int has_touTier_option:1;
  unsigned int has_value_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_localID_option:1;
  unsigned int flagPadding:16;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedConsumptionBlockType consumptionBlock_option; // element
  EmberExiGeneratedHexBinary16 qualityFlags_option; // element
  EmberExiGeneratedDateTimeInterval *timePeriod_option; // pointer to timePeriod structs
  EmberExiGeneratedTOUType touTier_option; // element
  EmberExiGeneratedInt48 value_option; // element
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedHexBinary16 localID_option; // element
} EmberExiGeneratedReading;


#define emberExiReadingStructDataIndex 2317
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
// <xs:documentation>Signed integer, max inclusive
// 2147483647 (2^31), min inclusive -2147483647 (same as
// xs:int)</xs:documentation>
// </xs:annotation>
// Simple type: Int32
typedef EmberExiGeneratedInteger EmberExiGeneratedInt32;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Charges contain charges on a
// customer bill.  These could be items like taxes, levies, surcharges, rebates, or
// others.  This is meant to allow the HAN device to retrieve enough information to
// be able to reconstruct an estimate of what the total bill would look like.
// 
// 
// Providers can provide line item billing, including multiple charge kinds (e.g.
// taxes, surcharges) at whatever granularity desired, using as many Charges as
// desired during a billing period. There can also be any number of Charges
// associated with different ReadingTypes to distinguish between TOU tiers,
// consumption blocks, or demand charges.</xs:documentation>
// </xs:annotation>
// Complex type: Charge
#define emberExiStructChargeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCharge)))

typedef struct _EmberExiGeneratedCharge {
  int16u structType;
  unsigned int has_kind_option:1;
  EmberExiGeneratedString20 description_option; // element
  EmberExiGeneratedChargeKind kind_option; // element
  EmberExiGeneratedInt32 value; // element
} EmberExiGeneratedCharge;


#define emberExiChargeStructDataIndex 334
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
// <xs:documentation>Data captured at regular
// intervals of time. Interval data could be captured as incremental data, absolute
// data, or relative data. The source for the data is usually a tariff quantity or
// an engineering quantity. Data is typically captured in time-tagged, uniform,
// fixed-length intervals of 5 min, 10 min, 15 min, 30 min, or 60 min. However,
// consumption aggregations can also be represented with this
// class.</xs:documentation>
// </xs:annotation>
// Complex type: BillingReading
#define emberExiStructBillingReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingReading)))

typedef struct _EmberExiGeneratedBillingReading {
  int16u structType;
  unsigned int has_consumptionBlock_option:1;
  unsigned int has_qualityFlags_option:1;
  unsigned int has_touTier_option:1;
  unsigned int has_value_option:1;
  unsigned int flagPadding:18;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedConsumptionBlockType consumptionBlock_option; // element
  EmberExiGeneratedHexBinary16 qualityFlags_option; // element
  EmberExiGeneratedDateTimeInterval *timePeriod_option; // pointer to timePeriod structs
  EmberExiGeneratedTOUType touTier_option; // element
  EmberExiGeneratedInt48 value_option; // element
  int8u Charge_count; // number of Charge structs
  EmberExiGeneratedCharge *Charge_array; // pointer to Charge structs
} EmberExiGeneratedBillingReading;


#define emberExiBillingReadingStructDataIndex 274
#define emberExiBillingReadingStructData (emEncoderEvents + emberExiBillingReadingStructDataIndex)
#define emberExiCompareStructBillingReading(x, y) (emExiCompareStructs(emberExiBillingReadingStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingReading(theStruct) (emExiStructMemoryFootprint(emberExiBillingReadingStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingReading(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingReading(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingReading(EmberExiGeneratedBillingReading *data);

// Converts struct to XML
void emberExiToXmlStructBillingReading(EmberExiGeneratedBillingReading *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingReading(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReading *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingReading(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReading *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Container to hold a collection
// of object instances or references. See [ZB 11-0167] Design Patterns section for
// additional details.</xs:documentation>
// </xs:annotation>
// Complex type: List
#define emberExiStructListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedList)))

typedef struct _EmberExiGeneratedList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
} EmberExiGeneratedList;


#define emberExiListStructDataIndex 1762
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
// BillingReading objects.</xs:documentation>
// </xs:annotation>
// Complex type: BillingReadingList
#define emberExiStructBillingReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingReadingList)))

typedef struct _EmberExiGeneratedBillingReadingList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u BillingReading_count; // number of BillingReading structs
  EmberExiGeneratedBillingReading *BillingReading_array; // pointer to BillingReading structs
} EmberExiGeneratedBillingReadingList;


#define emberExiBillingReadingListStructDataIndex 286
#define emberExiBillingReadingListStructData (emEncoderEvents + emberExiBillingReadingListStructDataIndex)
#define emberExiCompareStructBillingReadingList(x, y) (emExiCompareStructs(emberExiBillingReadingListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingReadingList(theStruct) (emExiStructMemoryFootprint(emberExiBillingReadingListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingReadingList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingReadingList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingReadingList(EmberExiGeneratedBillingReadingList *data);

// Converts struct to XML
void emberExiToXmlStructBillingReadingList(EmberExiGeneratedBillingReadingList *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingReadingList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies the roles that apply
// to a usage point.
// Bit 0 - isMirror - SHALL be set if the server is not the
// measurement device
// Bit 1 - isPremisesAggregationPoint - SHALL be set if the
// UsagePoint is the point of delivery for a premises
// Bit 2 - isPEV - SHALL be set
// if the usage applies to an electric vehicle
// Bit 3 - isDER - SHALL be set if the
// usage applies to a distributed energy resource, capable of delivering power to
// the grid.
// Bit 4 - isRevenueQuality - SHALL be set if usage was measured by a
// device certified as revenue quality
// Bit 5 - isDC - SHALL be set if the usage
// point measures direct current 
// Bit 6 - isSubmeter - SHALL be set if the usage
// point is not a premises aggregation point
// Bit 7-15 -
// Reserved</xs:documentation>
// </xs:annotation>
// Complex type: RoleFlagsType
typedef EmberExiGeneratedHexBinary16 EmberExiGeneratedRoleFlagsType; // based-on HexBinary16



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Service kind
// 0 - electricity
// 1
// - gas
// 2 - water
// 3 - time
// 4 - pressure
// 5 - heat
// 6 - cooling
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceKind
typedef EmberExiGeneratedUInt8 EmberExiGeneratedServiceKind; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of MeterReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingListLink
#define emberExiStructMeterReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingListLink)))

typedef struct _EmberExiGeneratedMeterReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedMeterReadingListLink;


#define emberExiMeterReadingListLinkStructDataIndex 1954
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
// <xs:documentation>Logical point on a network at
// which consumption or production is either physically measured (e.g. metered) or
// estimated (e.g. unmetered street lights). A container for associating
// ReadingType, Readings and ReadingSets.</xs:documentation>
// </xs:annotation>
// Complex type: UsagePointBase
#define emberExiStructUsagePointBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePointBase)))

typedef struct _EmberExiGeneratedUsagePointBase {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedRoleFlagsType roleFlags; // element
  EmberExiGeneratedServiceKind serviceCategoryKind; // element
  EmberExiGeneratedUInt8 status; // element
} EmberExiGeneratedUsagePointBase;


#define emberExiUsagePointBaseStructDataIndex 2968
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
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedRoleFlagsType roleFlags; // element
  EmberExiGeneratedServiceKind serviceCategoryKind; // element
  EmberExiGeneratedUInt8 status; // element
  EmberExiGeneratedMeterReadingListLink *MeterReadingListLink_option; // pointer to MeterReadingListLink structs
} EmberExiGeneratedUsagePoint;


#define emberExiUsagePointStructDataIndex 2956
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
// <xs:documentation>A RPL source routes
// object.</xs:documentation>
// </xs:annotation>
// Complex type: RPLSourceRoutes
#define emberExiStructRPLSourceRoutesInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRPLSourceRoutes)))

typedef struct _EmberExiGeneratedRPLSourceRoutes {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedHexBinary128 DestAddress; // element
  EmberExiGeneratedHexBinary128 SourceRoute; // element
} EmberExiGeneratedRPLSourceRoutes;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Holds the information related
// to a client subscription to receive updates to a resource automatically. The
// actual resources may be passed in the Notification by specifying a specific
// xsi:type for the Resource and passing the full
// representation.</xs:documentation>
// </xs:annotation>
// Complex type: SubscriptionBase
#define emberExiStructSubscriptionBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscriptionBase)))

typedef struct _EmberExiGeneratedSubscriptionBase {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString subscribedResource; // element
} EmberExiGeneratedSubscriptionBase;


#define emberExiSubscriptionBaseStructDataIndex 2650
#define emberExiSubscriptionBaseStructData (emEncoderEvents + emberExiSubscriptionBaseStructDataIndex)
#define emberExiCompareStructSubscriptionBase(x, y) (emExiCompareStructs(emberExiSubscriptionBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSubscriptionBase(theStruct) (emExiStructMemoryFootprint(emberExiSubscriptionBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSubscriptionBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSubscriptionBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data);

// Converts struct to XML
void emberExiToXmlStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructSubscriptionBase(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSubscriptionBase(int8u *stringBuffer, int offset, EmberExiGeneratedSubscriptionBase *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Holds the information related
// to a client subscription to receive updates to a resource automatically. The
// actual resources may be passed in the Notification by specifying a specific
// xsi:type for the Resource and passing the full
// representation.</xs:documentation>
// </xs:annotation>
// Complex type: Notification
#define emberExiStructNotificationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNotification)))

typedef struct _EmberExiGeneratedNotification {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString subscribedResource; // element
  EmberExiGeneratedString newResourceURI_option; // element
  EmberExiGeneratedResource *Resource_option; // pointer to Resource structs
  EmberExiGeneratedUInt8 status; // element
  EmberExiGeneratedString subscriptionURI; // element
} EmberExiGeneratedNotification;


#define emberExiNotificationStructDataIndex 1966
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
// <xs:documentation>A List element to hold
// Notification objects.</xs:documentation>
// </xs:annotation>
// Complex type: NotificationList
#define emberExiStructNotificationListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNotificationList)))

typedef struct _EmberExiGeneratedNotificationList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u Notification_count; // number of Notification structs
  EmberExiGeneratedNotification *Notification_array; // pointer to Notification structs
} EmberExiGeneratedNotificationList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of Configuration.</xs:documentation>
// </xs:annotation>
// Complex type: ConfigurationLink
#define emberExiStructConfigurationLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConfigurationLink)))

typedef struct _EmberExiGeneratedConfigurationLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedConfigurationLink;


#define emberExiConfigurationLinkStructDataIndex 394
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
// <xs:documentation>SHALL contain a Link to a List
// of DER instances.</xs:documentation>
// </xs:annotation>
// Complex type: DERListLink
#define emberExiStructDERListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERListLink)))

typedef struct _EmberExiGeneratedDERListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedDERListLink;


#define emberExiDERListLinkStructDataIndex 892
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
// <xs:documentation>SHALL contain a Link to an
// instance of DeviceInformation.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceInformationLink
#define emberExiStructDeviceInformationLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceInformationLink)))

typedef struct _EmberExiGeneratedDeviceInformationLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDeviceInformationLink;


#define emberExiDeviceInformationLinkStructDataIndex 1132
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
// <xs:documentation>SHALL contain a Link to an
// instance of DeviceStatus.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceStatusLink
#define emberExiStructDeviceStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceStatusLink)))

typedef struct _EmberExiGeneratedDeviceStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDeviceStatusLink;


#define emberExiDeviceStatusLinkStructDataIndex 1168
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
// <xs:documentation>SHALL contain a Link to an
// instance of FileStatus.</xs:documentation>
// </xs:annotation>
// Complex type: FileStatusLink
#define emberExiStructFileStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileStatusLink)))

typedef struct _EmberExiGeneratedFileStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedFileStatusLink;


#define emberExiFileStatusLinkStructDataIndex 1456
#define emberExiFileStatusLinkStructData (emEncoderEvents + emberExiFileStatusLinkStructDataIndex)
#define emberExiCompareStructFileStatusLink(x, y) (emExiCompareStructs(emberExiFileStatusLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFileStatusLink(theStruct) (emExiStructMemoryFootprint(emberExiFileStatusLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFileStatusLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFileStatusLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFileStatusLink(EmberExiGeneratedFileStatusLink *data);

// Converts struct to XML
void emberExiToXmlStructFileStatusLink(EmberExiGeneratedFileStatusLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructFileStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatusLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFileStatusLink(int8u *stringBuffer, int offset, EmberExiGeneratedFileStatusLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of IPInterface instances.</xs:documentation>
// </xs:annotation>
// Complex type: IPInterfaceListLink
#define emberExiStructIPInterfaceListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIPInterfaceListLink)))

typedef struct _EmberExiGeneratedIPInterfaceListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedIPInterfaceListLink;


#define emberExiIPInterfaceListLinkStructDataIndex 1726
#define emberExiIPInterfaceListLinkStructData (emEncoderEvents + emberExiIPInterfaceListLinkStructDataIndex)
#define emberExiCompareStructIPInterfaceListLink(x, y) (emExiCompareStructs(emberExiIPInterfaceListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIPInterfaceListLink(theStruct) (emExiStructMemoryFootprint(emberExiIPInterfaceListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIPInterfaceListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIPInterfaceListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data);

// Converts struct to XML
void emberExiToXmlStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructIPInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterfaceListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIPInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterfaceListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of LoadShedAvailability.</xs:documentation>
// </xs:annotation>
// Complex type: LoadShedAvailabilityLink
#define emberExiStructLoadShedAvailabilityLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLoadShedAvailabilityLink)))

typedef struct _EmberExiGeneratedLoadShedAvailabilityLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedLoadShedAvailabilityLink;


#define emberExiLoadShedAvailabilityLinkStructDataIndex 1813
#define emberExiLoadShedAvailabilityLinkStructData (emEncoderEvents + emberExiLoadShedAvailabilityLinkStructDataIndex)
#define emberExiCompareStructLoadShedAvailabilityLink(x, y) (emExiCompareStructs(emberExiLoadShedAvailabilityLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLoadShedAvailabilityLink(theStruct) (emExiStructMemoryFootprint(emberExiLoadShedAvailabilityLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLoadShedAvailabilityLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLoadShedAvailabilityLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data);

// Converts struct to XML
void emberExiToXmlStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructLoadShedAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLoadShedAvailabilityLink(int8u *stringBuffer, int offset, EmberExiGeneratedLoadShedAvailabilityLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A 32-bit field encoded as a
// hex string (8 hex characters max). Where applicable, bit 0, or the least
// significant bit, goes on the right. Note that hexBinary requires pairs of hex
// characters, so an odd number of characters requires a leading
// "0".</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary32
typedef struct {
  int8u length;
  int8u bytes[4];
} EmberExiGeneratedHexBinary32;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The Device category types
// defined.
// Bit positions SHALL be defined as follows:
// 0 - Programmable
// Communicating Thermostat 
// 1 - Strip Heaters 
// 2 - Baseboard Heaters 
// 3 - Water
// Heater 
// 4 - Pool Pump 
// 5 - Sauna 
// 6 - Hot tub
// 7 - Smart Appliance 
// 8 -
// Irrigation Pump 
// 9 - Managed Commercial and Industrial (C&amp;amp;I) Loads 
// 10 -
// Simple misc. (Residential On/Off) loads 
// 11 - Exterior Lighting 
// 12 - Interior
// Lighting 
// 13 - Electric Vehicle 
// 14 - Generation Systems 
// 15 - Load Control
// Switch 
// 16 - Smart Inverter 
// 17 - EVSE 
// 18 - RESU 
// 19 - Energy Management System
// 
// 20 - Smart Energy Module
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceCategoryType
typedef EmberExiGeneratedHexBinary32 EmberExiGeneratedDeviceCategoryType; // based-on HexBinary32



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of LogEvent instances.</xs:documentation>
// </xs:annotation>
// Complex type: LogEventListLink
#define emberExiStructLogEventListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLogEventListLink)))

typedef struct _EmberExiGeneratedLogEventListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedLogEventListLink;


#define emberExiLogEventListLinkStructDataIndex 1858
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
// <xs:documentation>SHALL contain a Link to an
// instance of PowerStatus.</xs:documentation>
// </xs:annotation>
// Complex type: PowerStatusLink
#define emberExiStructPowerStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPowerStatusLink)))

typedef struct _EmberExiGeneratedPowerStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedPowerStatusLink;


#define emberExiPowerStatusLinkStructDataIndex 2083
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


// Built-in type: Int32u
typedef int32u EmberExiGeneratedInt32u;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unsigned integer, max
// inclusive 1099511627775 (2^40-1)</xs:documentation>
// </xs:annotation>
// Simple type: UInt40
typedef EmberExiGeneratedInt32u EmberExiGeneratedUInt40;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unsigned integer, max
// inclusive 687194767359 (2^36-1), with added "9" max check
// digit.</xs:documentation>
// </xs:annotation>
// Complex type: SFDIType
typedef EmberExiGeneratedUInt40 EmberExiGeneratedSFDIType; // based-on UInt40



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The EndDevice providing the
// resources available within the
// DeviceCapabilities.</xs:documentation>
// </xs:annotation>
// Complex type: AbstractDevice
#define emberExiStructAbstractDeviceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAbstractDevice)))

typedef struct _EmberExiGeneratedAbstractDevice {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_loadShedDeviceCategory_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedConfigurationLink *ConfigurationLink_option; // pointer to ConfigurationLink structs
  EmberExiGeneratedDERListLink *DERListLink_option; // pointer to DERListLink structs
  EmberExiGeneratedDeviceInformationLink *DeviceInformationLink_option; // pointer to DeviceInformationLink structs
  EmberExiGeneratedDeviceStatusLink *DeviceStatusLink_option; // pointer to DeviceStatusLink structs
  EmberExiGeneratedFileStatusLink *FileStatusLink_option; // pointer to FileStatusLink structs
  EmberExiGeneratedIPInterfaceListLink *IPInterfaceListLink_option; // pointer to IPInterfaceListLink structs
  EmberExiGeneratedLoadShedAvailabilityLink *LoadShedAvailabilityLink_option; // pointer to LoadShedAvailabilityLink structs
  EmberExiGeneratedDeviceCategoryType loadShedDeviceCategory_option; // element
  EmberExiGeneratedLogEventListLink *LogEventListLink_option; // pointer to LogEventListLink structs
  EmberExiGeneratedPowerStatusLink *PowerStatusLink_option; // pointer to PowerStatusLink structs
  EmberExiGeneratedSFDIType sFDI; // element
} EmberExiGeneratedAbstractDevice;


#define emberExiAbstractDeviceStructDataIndex 1
#define emberExiAbstractDeviceStructData (emEncoderEvents + emberExiAbstractDeviceStructDataIndex)
#define emberExiCompareStructAbstractDevice(x, y) (emExiCompareStructs(emberExiAbstractDeviceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAbstractDevice(theStruct) (emExiStructMemoryFootprint(emberExiAbstractDeviceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAbstractDevice(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAbstractDevice(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAbstractDevice(EmberExiGeneratedAbstractDevice *data);

// Converts struct to XML
void emberExiToXmlStructAbstractDevice(EmberExiGeneratedAbstractDevice *data);

// Writes XML to a string
int emberExiXmlSprintfStructAbstractDevice(int8u *stringBuffer, int offset, EmberExiGeneratedAbstractDevice *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAbstractDevice(int8u *stringBuffer, int offset, EmberExiGeneratedAbstractDevice *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The EndDevice providing the
// resources available within the
// DeviceCapabilities.</xs:documentation>
// </xs:annotation>
// Complex type: SelfDevice
#define emberExiStructSelfDeviceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSelfDevice)))

typedef struct _EmberExiGeneratedSelfDevice {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_loadShedDeviceCategory_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedConfigurationLink *ConfigurationLink_option; // pointer to ConfigurationLink structs
  EmberExiGeneratedDERListLink *DERListLink_option; // pointer to DERListLink structs
  EmberExiGeneratedDeviceInformationLink *DeviceInformationLink_option; // pointer to DeviceInformationLink structs
  EmberExiGeneratedDeviceStatusLink *DeviceStatusLink_option; // pointer to DeviceStatusLink structs
  EmberExiGeneratedFileStatusLink *FileStatusLink_option; // pointer to FileStatusLink structs
  EmberExiGeneratedIPInterfaceListLink *IPInterfaceListLink_option; // pointer to IPInterfaceListLink structs
  EmberExiGeneratedLoadShedAvailabilityLink *LoadShedAvailabilityLink_option; // pointer to LoadShedAvailabilityLink structs
  EmberExiGeneratedDeviceCategoryType loadShedDeviceCategory_option; // element
  EmberExiGeneratedLogEventListLink *LogEventListLink_option; // pointer to LogEventListLink structs
  EmberExiGeneratedPowerStatusLink *PowerStatusLink_option; // pointer to PowerStatusLink structs
  EmberExiGeneratedSFDIType sFDI; // element
} EmberExiGeneratedSelfDevice;


#define emberExiSelfDeviceStructDataIndex 2521
#define emberExiSelfDeviceStructData (emEncoderEvents + emberExiSelfDeviceStructDataIndex)
#define emberExiCompareStructSelfDevice(x, y) (emExiCompareStructs(emberExiSelfDeviceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSelfDevice(theStruct) (emExiStructMemoryFootprint(emberExiSelfDeviceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSelfDevice(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSelfDevice(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSelfDevice(EmberExiGeneratedSelfDevice *data);

// Converts struct to XML
void emberExiToXmlStructSelfDevice(EmberExiGeneratedSelfDevice *data);

// Writes XML to a string
int emberExiXmlSprintfStructSelfDevice(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDevice *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSelfDevice(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDevice *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies context for
// interpreting percent values:
// 0 - N/A
// 1 - %setMaxW
// 2 - %setMaxVAr
// 3 -
// %statVArAvail
// 4 - %setEffectiveV
// 5 - %setMaxChargeRate
// 6 -
// %setMaxDischargeRate
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: DERUnitRefType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedDERUnitRefType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of TargetReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: TargetReadingListLink
#define emberExiStructTargetReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTargetReadingListLink)))

typedef struct _EmberExiGeneratedTargetReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedTargetReadingListLink;


#define emberExiTargetReadingListLinkStructDataIndex 2734
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
// <xs:documentation>SHALL contain a Link to a List
// of CustomerAccount instances.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAccountListLink
#define emberExiStructCustomerAccountListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAccountListLink)))

typedef struct _EmberExiGeneratedCustomerAccountListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedCustomerAccountListLink;


#define emberExiCustomerAccountListLinkStructDataIndex 571
#define emberExiCustomerAccountListLinkStructData (emEncoderEvents + emberExiCustomerAccountListLinkStructDataIndex)
#define emberExiCompareStructCustomerAccountListLink(x, y) (emExiCompareStructs(emberExiCustomerAccountListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCustomerAccountListLink(theStruct) (emExiStructMemoryFootprint(emberExiCustomerAccountListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCustomerAccountListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCustomerAccountListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data);

// Converts struct to XML
void emberExiToXmlStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructCustomerAccountListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCustomerAccountListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of DemandResponseProgram instances.</xs:documentation>
// </xs:annotation>
// Complex type: DemandResponseProgramListLink
#define emberExiStructDemandResponseProgramListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDemandResponseProgramListLink)))

typedef struct _EmberExiGeneratedDemandResponseProgramListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedDemandResponseProgramListLink;


#define emberExiDemandResponseProgramListLinkStructDataIndex 1048
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
// <xs:documentation>SHALL contain a Link to a List
// of DERProgram instances.</xs:documentation>
// </xs:annotation>
// Complex type: DERProgramListLink
#define emberExiStructDERProgramListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERProgramListLink)))

typedef struct _EmberExiGeneratedDERProgramListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedDERProgramListLink;


#define emberExiDERProgramListLinkStructDataIndex 943
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
// <xs:documentation>SHALL contain a Link to a List
// of File instances.</xs:documentation>
// </xs:annotation>
// Complex type: FileListLink
#define emberExiStructFileListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileListLink)))

typedef struct _EmberExiGeneratedFileListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedFileListLink;


#define emberExiFileListLinkStructDataIndex 1450
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
// <xs:documentation>SHALL contain a Link to a List
// of MessagingProgram instances.</xs:documentation>
// </xs:annotation>
// Complex type: MessagingProgramListLink
#define emberExiStructMessagingProgramListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMessagingProgramListLink)))

typedef struct _EmberExiGeneratedMessagingProgramListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedMessagingProgramListLink;


#define emberExiMessagingProgramListLinkStructDataIndex 1900
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
// <xs:documentation>SHALL contain a Link to a List
// of Prepayment instances.</xs:documentation>
// </xs:annotation>
// Complex type: PrepaymentListLink
#define emberExiStructPrepaymentListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepaymentListLink)))

typedef struct _EmberExiGeneratedPrepaymentListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedPrepaymentListLink;


#define emberExiPrepaymentListLinkStructDataIndex 2212
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
// <xs:documentation>SHALL contain a Link to a List
// of ResponseSet instances.</xs:documentation>
// </xs:annotation>
// Complex type: ResponseSetListLink
#define emberExiStructResponseSetListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponseSetListLink)))

typedef struct _EmberExiGeneratedResponseSetListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedResponseSetListLink;


#define emberExiResponseSetListLinkStructDataIndex 2515
#define emberExiResponseSetListLinkStructData (emEncoderEvents + emberExiResponseSetListLinkStructDataIndex)
#define emberExiCompareStructResponseSetListLink(x, y) (emExiCompareStructs(emberExiResponseSetListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructResponseSetListLink(theStruct) (emExiStructMemoryFootprint(emberExiResponseSetListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructResponseSetListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructResponseSetListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data);

// Converts struct to XML
void emberExiToXmlStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructResponseSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSetListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructResponseSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedResponseSetListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of TariffProfile instances.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfileListLink
#define emberExiStructTariffProfileListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfileListLink)))

typedef struct _EmberExiGeneratedTariffProfileListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedTariffProfileListLink;


#define emberExiTariffProfileListLinkStructDataIndex 2797
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
// <xs:documentation>SHALL contain a Link to an
// instance of Time.</xs:documentation>
// </xs:annotation>
// Complex type: TimeLink
#define emberExiStructTimeLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeLink)))

typedef struct _EmberExiGeneratedTimeLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTimeLink;


#define emberExiTimeLinkStructDataIndex 2902
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
// <xs:documentation>SHALL contain a Link to a List
// of UsagePoint instances.</xs:documentation>
// </xs:annotation>
// Complex type: UsagePointListLink
#define emberExiStructUsagePointListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePointListLink)))

typedef struct _EmberExiGeneratedUsagePointListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedUsagePointListLink;


#define emberExiUsagePointListLinkStructDataIndex 3001
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
// <xs:documentation>Defines a collection of
// function set instances that are to be used by one or more devices as indicated
// by the EndDevice object(s) of the server.</xs:documentation>
// </xs:annotation>
// Complex type: FunctionSetAssignmentsBase
#define emberExiStructFunctionSetAssignmentsBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFunctionSetAssignmentsBase)))

typedef struct _EmberExiGeneratedFunctionSetAssignmentsBase {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedCustomerAccountListLink *CustomerAccountListLink_option; // pointer to CustomerAccountListLink structs
  EmberExiGeneratedDemandResponseProgramListLink *DemandResponseProgramListLink_option; // pointer to DemandResponseProgramListLink structs
  EmberExiGeneratedDERProgramListLink *DERProgramListLink_option; // pointer to DERProgramListLink structs
  EmberExiGeneratedFileListLink *FileListLink_option; // pointer to FileListLink structs
  EmberExiGeneratedMessagingProgramListLink *MessagingProgramListLink_option; // pointer to MessagingProgramListLink structs
  EmberExiGeneratedPrepaymentListLink *PrepaymentListLink_option; // pointer to PrepaymentListLink structs
  EmberExiGeneratedResponseSetListLink *ResponseSetListLink_option; // pointer to ResponseSetListLink structs
  EmberExiGeneratedTariffProfileListLink *TariffProfileListLink_option; // pointer to TariffProfileListLink structs
  EmberExiGeneratedTimeLink *TimeLink_option; // pointer to TimeLink structs
  EmberExiGeneratedUsagePointListLink *UsagePointListLink_option; // pointer to UsagePointListLink structs
} EmberExiGeneratedFunctionSetAssignmentsBase;


#define emberExiFunctionSetAssignmentsBaseStructDataIndex 1522
#define emberExiFunctionSetAssignmentsBaseStructData (emEncoderEvents + emberExiFunctionSetAssignmentsBaseStructDataIndex)
#define emberExiCompareStructFunctionSetAssignmentsBase(x, y) (emExiCompareStructs(emberExiFunctionSetAssignmentsBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFunctionSetAssignmentsBase(theStruct) (emExiStructMemoryFootprint(emberExiFunctionSetAssignmentsBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFunctionSetAssignmentsBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFunctionSetAssignmentsBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data);

// Converts struct to XML
void emberExiToXmlStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructFunctionSetAssignmentsBase(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsBase(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsBase *data);

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
// <xs:documentation>Data point values for defining
// a curve or schedule</xs:documentation>
// </xs:annotation>
// Complex type: CurveData
#define emberExiStructCurveDataInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCurveData)))

typedef struct _EmberExiGeneratedCurveData {
  int16u structType;
  unsigned int has_excitation_option:1;
  EmberExiGeneratedInt8 excitation_option; // element
  EmberExiGeneratedInt32 xvalue; // element
  EmberExiGeneratedInt32 yvalue; // element
} EmberExiGeneratedCurveData;


#define emberExiCurveDataStructDataIndex 496
#define emberExiCurveDataStructData (emEncoderEvents + emberExiCurveDataStructDataIndex)
#define emberExiCompareStructCurveData(x, y) (emExiCompareStructs(emberExiCurveDataStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCurveData(theStruct) (emExiStructMemoryFootprint(emberExiCurveDataStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCurveData(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCurveData(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCurveData(EmberExiGeneratedCurveData *data);

// Converts struct to XML
void emberExiToXmlStructCurveData(EmberExiGeneratedCurveData *data);

// Writes XML to a string
int emberExiXmlSprintfStructCurveData(int8u *stringBuffer, int offset, EmberExiGeneratedCurveData *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCurveData(int8u *stringBuffer, int offset, EmberExiGeneratedCurveData *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Volt-VAr Mode 
// 1 -
// Frequency-Watt Curve Mode 
// 2 - Watt-PowerFactor Mode 
// 3 - Volt-Watt Mode 
// 4 -
// Low Voltage Ride Through Mode 
// 5 - High Voltage Ride Through Mode
// All other
// values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: DERCurveType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedDERCurveType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>-9 = nano=x10^-9
// -6 =
// micro=x10^-6
// -3 = milli=x10^-3
// 0 = none=x1 (default, if not specified)
// 1 =
// deca=x10
// 2 = hecto=x100
// 3 = kilo=x1000
// 6 = Mega=x10^6
// 9 = Giga=x10^9
// This is not
// a complete list. Any integer between -9 and 9 SHALL be supported, indicating the
// power of ten multiplier for the units.</xs:documentation>
// </xs:annotation>
// Complex type: PowerOfTenMultiplierType
typedef EmberExiGeneratedInt8 EmberExiGeneratedPowerOfTenMultiplierType; // based-on Int8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER related curves such as
// Volt-VAr mode curves. Relationship between an independent variable (X-axis) and
// one or two dependent variables (Y-axis and
// excitation).</xs:documentation>
// </xs:annotation>
// Complex type: DERCurve
#define emberExiStructDERCurveInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERCurve)))

typedef struct _EmberExiGeneratedDERCurve {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int has_rampDecTms_option:1;
  unsigned int has_rampIncTms_option:1;
  unsigned int has_rampPT1Tms_option:1;
  unsigned int flagPadding:18;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  int8u CurveData_count; // number of CurveData structs
  EmberExiGeneratedCurveData *CurveData_array; // pointer to CurveData structs
  EmberExiGeneratedDERCurveType curveType; // element
  EmberExiGeneratedUInt16 rampDecTms_option; // element
  EmberExiGeneratedUInt16 rampIncTms_option; // element
  EmberExiGeneratedUInt16 rampPT1Tms_option; // element
  EmberExiGeneratedPowerOfTenMultiplierType xMultiplier; // element
  EmberExiGeneratedPowerOfTenMultiplierType yMultiplier; // element
  EmberExiGeneratedDERUnitRefType yRefType; // element
} EmberExiGeneratedDERCurve;


#define emberExiDERCurveStructDataIndex 820
#define emberExiDERCurveStructData (emEncoderEvents + emberExiDERCurveStructDataIndex)
#define emberExiCompareStructDERCurve(x, y) (emExiCompareStructs(emberExiDERCurveStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERCurve(theStruct) (emExiStructMemoryFootprint(emberExiDERCurveStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERCurve(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERCurve(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERCurve(EmberExiGeneratedDERCurve *data);

// Converts struct to XML
void emberExiToXmlStructDERCurve(EmberExiGeneratedDERCurve *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERCurve(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurve *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERCurve(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurve *data);

// Struct comparison function
;


// Built-in type: Boolean
typedef boolean EmberExiGeneratedBoolean;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max length
// 192. For all string types, in order to limit internal storage, implementations
// SHALL reduce the length of strings using multi-byte characters so that the
// string may be stored using "maxLength" octets in the given
// encoding.</xs:documentation>
// </xs:annotation>
// Simple type: String192
typedef EmberExiGeneratedString EmberExiGeneratedString192;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Current status information
// relevant to a specific object. The Status object is used to indicate the current
// status of an Event. Devices can read the containing resource (e.g. TextMessage)
// to get the most up to date status of the event.  Devices can also subscribe to a
// specific resource instance to get updates when any of its attributes change,
// including the Status object.</xs:documentation>
// </xs:annotation>
// Complex type: EventStatus
#define emberExiStructEventStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEventStatus)))

typedef struct _EmberExiGeneratedEventStatus {
  int16u structType;
  unsigned int has_potentiallySupersededTime_option:1;
  EmberExiGeneratedUInt8 currentStatus; // element
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedBoolean potentiallySuperseded; // element
  EmberExiGeneratedTimeType potentiallySupersededTime_option; // element
  EmberExiGeneratedString192 reason_option; // element
} EmberExiGeneratedEventStatus;


#define emberExiEventStatusStructDataIndex 1381
#define emberExiEventStatusStructData (emEncoderEvents + emberExiEventStatusStructDataIndex)
#define emberExiCompareStructEventStatus(x, y) (emExiCompareStructs(emberExiEventStatusStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEventStatus(theStruct) (emExiStructMemoryFootprint(emberExiEventStatusStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEventStatus(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEventStatus(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEventStatus(EmberExiGeneratedEventStatus *data);

// Converts struct to XML
void emberExiToXmlStructEventStatus(EmberExiGeneratedEventStatus *data);

// Writes XML to a string
int emberExiXmlSprintfStructEventStatus(int8u *stringBuffer, int offset, EmberExiGeneratedEventStatus *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEventStatus(int8u *stringBuffer, int offset, EmberExiGeneratedEventStatus *data);

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



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A signed time offset,
// typically applied to a Time value, expressed in seconds, with range -3600 to
// 3600.</xs:documentation>
// </xs:annotation>
// Complex type: OneHourRangeType
typedef EmberExiGeneratedInt16 EmberExiGeneratedOneHourRangeType; // based-on Int16



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of ConsumptionTariffInterval instances.</xs:documentation>
// </xs:annotation>
// Complex type: ConsumptionTariffIntervalListLink
#define emberExiStructConsumptionTariffIntervalListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConsumptionTariffIntervalListLink)))

typedef struct _EmberExiGeneratedConsumptionTariffIntervalListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedConsumptionTariffIntervalListLink;


#define emberExiConsumptionTariffIntervalListLinkStructDataIndex 433
#define emberExiConsumptionTariffIntervalListLinkStructData (emEncoderEvents + emberExiConsumptionTariffIntervalListLinkStructDataIndex)
#define emberExiCompareStructConsumptionTariffIntervalListLink(x, y) (emExiCompareStructs(emberExiConsumptionTariffIntervalListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructConsumptionTariffIntervalListLink(theStruct) (emExiStructMemoryFootprint(emberExiConsumptionTariffIntervalListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructConsumptionTariffIntervalListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructConsumptionTariffIntervalListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructConsumptionTariffIntervalListLink(EmberExiGeneratedConsumptionTariffIntervalListLink *data);

// Converts struct to XML
void emberExiToXmlStructConsumptionTariffIntervalListLink(EmberExiGeneratedConsumptionTariffIntervalListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructConsumptionTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructConsumptionTariffIntervalListLink(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An 8-bit field encoded as a
// hex string (2 hex characters). Where applicable, bit 0, or the least significant
// bit, goes on the right. Note that hexBinary requires pairs of hex characters, so
// an odd number of characters requires a leading
// "0".</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary8
typedef struct {
  int8u length;
  int8u bytes[1];
} EmberExiGeneratedHexBinary8;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Resource to which a Response
// can be requested.</xs:documentation>
// </xs:annotation>
// Complex type: RespondableResource
#define emberExiStructRespondableResourceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRespondableResource)))

typedef struct _EmberExiGeneratedRespondableResource {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
} EmberExiGeneratedRespondableResource;


#define emberExiRespondableResourceStructDataIndex 2455
#define emberExiRespondableResourceStructData (emEncoderEvents + emberExiRespondableResourceStructDataIndex)
#define emberExiCompareStructRespondableResource(x, y) (emExiCompareStructs(emberExiRespondableResourceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRespondableResource(theStruct) (emExiStructMemoryFootprint(emberExiRespondableResourceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRespondableResource(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRespondableResource(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRespondableResource(EmberExiGeneratedRespondableResource *data);

// Converts struct to XML
void emberExiToXmlStructRespondableResource(EmberExiGeneratedRespondableResource *data);

// Writes XML to a string
int emberExiXmlSprintfStructRespondableResource(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableResource *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRespondableResource(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableResource *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An IdentifiedObject to which a
// Response can be requested.</xs:documentation>
// </xs:annotation>
// Complex type: RespondableSubscribableIdentifiedObject
#define emberExiStructRespondableSubscribableIdentifiedObjectInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRespondableSubscribableIdentifiedObject)))

typedef struct _EmberExiGeneratedRespondableSubscribableIdentifiedObject {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
} EmberExiGeneratedRespondableSubscribableIdentifiedObject;


#define emberExiRespondableSubscribableIdentifiedObjectStructDataIndex 2470
#define emberExiRespondableSubscribableIdentifiedObjectStructData (emEncoderEvents + emberExiRespondableSubscribableIdentifiedObjectStructDataIndex)
#define emberExiCompareStructRespondableSubscribableIdentifiedObject(x, y) (emExiCompareStructs(emberExiRespondableSubscribableIdentifiedObjectStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRespondableSubscribableIdentifiedObject(theStruct) (emExiStructMemoryFootprint(emberExiRespondableSubscribableIdentifiedObjectStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRespondableSubscribableIdentifiedObject(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRespondableSubscribableIdentifiedObject(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data);

// Converts struct to XML
void emberExiToXmlStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data);

// Writes XML to a string
int emberExiXmlSprintfStructRespondableSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableSubscribableIdentifiedObject *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRespondableSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedRespondableSubscribableIdentifiedObject *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An Event indicates information
// that applies to a particular period of time. Events SHALL be executed relative
// to the time of the server, as described in the Time function set section
// 12.1.</xs:documentation>
// </xs:annotation>
// Complex type: Event
#define emberExiStructEventInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEvent)))

typedef struct _EmberExiGeneratedEvent {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
} EmberExiGeneratedEvent;


#define emberExiEventStructDataIndex 1360
#define emberExiEventStructData (emEncoderEvents + emberExiEventStructDataIndex)
#define emberExiCompareStructEvent(x, y) (emExiCompareStructs(emberExiEventStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEvent(theStruct) (emExiStructMemoryFootprint(emberExiEventStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEvent(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEvent(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEvent(EmberExiGeneratedEvent *data);

// Converts struct to XML
void emberExiToXmlStructEvent(EmberExiGeneratedEvent *data);

// Writes XML to a string
int emberExiXmlSprintfStructEvent(int8u *stringBuffer, int offset, EmberExiGeneratedEvent *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEvent(int8u *stringBuffer, int offset, EmberExiGeneratedEvent *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An Event that can indicate
// time ranges over which the start time and duration SHALL be
// randomized.</xs:documentation>
// </xs:annotation>
// Complex type: RandomizableEvent
#define emberExiStructRandomizableEventInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRandomizableEvent)))

typedef struct _EmberExiGeneratedRandomizableEvent {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int has_randomizeDuration_option:1;
  unsigned int has_randomizeStart_option:1;
  unsigned int flagPadding:17;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedOneHourRangeType randomizeDuration_option; // element
  EmberExiGeneratedOneHourRangeType randomizeStart_option; // element
} EmberExiGeneratedRandomizableEvent;


#define emberExiRandomizableEventStructDataIndex 2248
#define emberExiRandomizableEventStructData (emEncoderEvents + emberExiRandomizableEventStructDataIndex)
#define emberExiCompareStructRandomizableEvent(x, y) (emExiCompareStructs(emberExiRandomizableEventStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructRandomizableEvent(theStruct) (emExiStructMemoryFootprint(emberExiRandomizableEventStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructRandomizableEvent(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructRandomizableEvent(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data);

// Converts struct to XML
void emberExiToXmlStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data);

// Writes XML to a string
int emberExiXmlSprintfStructRandomizableEvent(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizableEvent *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructRandomizableEvent(int8u *stringBuffer, int offset, EmberExiGeneratedRandomizableEvent *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Describes the
// time-differentiated portion of the RateComponent, if applicable, and provides
// the ability to specify multiple time intervals, each with its own
// consumption-based components and other
// attributes.</xs:documentation>
// </xs:annotation>
// Complex type: TimeTariffInterval
#define emberExiStructTimeTariffIntervalInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeTariffInterval)))

typedef struct _EmberExiGeneratedTimeTariffInterval {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int has_randomizeDuration_option:1;
  unsigned int has_randomizeStart_option:1;
  unsigned int flagPadding:17;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedOneHourRangeType randomizeDuration_option; // element
  EmberExiGeneratedOneHourRangeType randomizeStart_option; // element
  EmberExiGeneratedConsumptionTariffIntervalListLink *ConsumptionTariffIntervalListLink_option; // pointer to ConsumptionTariffIntervalListLink structs
  EmberExiGeneratedTOUType touTier; // element
} EmberExiGeneratedTimeTariffInterval;


#define emberExiTimeTariffIntervalStructDataIndex 2908
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
// <xs:documentation>SHALL contain a Link to a List
// of Response instances.</xs:documentation>
// </xs:annotation>
// Complex type: ResponseListLink
#define emberExiStructResponseListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponseListLink)))

typedef struct _EmberExiGeneratedResponseListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedResponseListLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A container for a
// ResponseList.</xs:documentation>
// </xs:annotation>
// Complex type: ResponseSet
#define emberExiStructResponseSetInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponseSet)))

typedef struct _EmberExiGeneratedResponseSet {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedResponseListLink *ResponseListLink_option; // pointer to ResponseListLink structs
} EmberExiGeneratedResponseSet;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 2 = Average
// 8 = Maximum
// 9 = Minimum
// 12 = Normal
// All other
// values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: DataQualifierType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedDataQualifierType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of active BillingPeriod instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveBillingPeriodListLink
#define emberExiStructActiveBillingPeriodListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveBillingPeriodListLink)))

typedef struct _EmberExiGeneratedActiveBillingPeriodListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveBillingPeriodListLink;


#define emberExiActiveBillingPeriodListLinkStructDataIndex 118
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
// <xs:documentation>SHALL contain a Link to a List
// of active ProjectionReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveProjectionReadingListLink
#define emberExiStructActiveProjectionReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveProjectionReadingListLink)))

typedef struct _EmberExiGeneratedActiveProjectionReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveProjectionReadingListLink;


#define emberExiActiveProjectionReadingListLinkStructDataIndex 154
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
// <xs:documentation>SHALL contain a Link to a List
// of active TargetReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveTargetReadingListLink
#define emberExiStructActiveTargetReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveTargetReadingListLink)))

typedef struct _EmberExiGeneratedActiveTargetReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveTargetReadingListLink;


#define emberExiActiveTargetReadingListLinkStructDataIndex 166
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
// <xs:documentation>SHALL contain a Link to a List
// of BillingPeriod instances.</xs:documentation>
// </xs:annotation>
// Complex type: BillingPeriodListLink
#define emberExiStructBillingPeriodListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingPeriodListLink)))

typedef struct _EmberExiGeneratedBillingPeriodListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedBillingPeriodListLink;


#define emberExiBillingPeriodListLinkStructDataIndex 268
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
// <xs:documentation>SHALL contain a Link to a List
// of HistoricalReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: HistoricalReadingListLink
#define emberExiStructHistoricalReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedHistoricalReadingListLink)))

typedef struct _EmberExiGeneratedHistoricalReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedHistoricalReadingListLink;


#define emberExiHistoricalReadingListLinkStructDataIndex 1624
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
// <xs:documentation>SHALL contain a Link to an
// instance of Prepayment.</xs:documentation>
// </xs:annotation>
// Complex type: PrepaymentLink
#define emberExiStructPrepaymentLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepaymentLink)))

typedef struct _EmberExiGeneratedPrepaymentLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedPrepaymentLink;


#define emberExiPrepaymentLinkStructDataIndex 2194
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
// <xs:documentation>SHALL contain a Link to a List
// of ProjectionReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: ProjectionReadingListLink
#define emberExiStructProjectionReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedProjectionReadingListLink)))

typedef struct _EmberExiGeneratedProjectionReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedProjectionReadingListLink;


#define emberExiProjectionReadingListLinkStructDataIndex 2242
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
// <xs:documentation>SHALL contain a Link to an
// instance of TariffProfile.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfileLink
#define emberExiStructTariffProfileLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfileLink)))

typedef struct _EmberExiGeneratedTariffProfileLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedTariffProfileLink;


#define emberExiTariffProfileLinkStructDataIndex 2779
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
// <xs:documentation>SHALL contain a Link to an
// instance of UsagePoint.</xs:documentation>
// </xs:annotation>
// Complex type: UsagePointLink
#define emberExiStructUsagePointLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUsagePointLink)))

typedef struct _EmberExiGeneratedUsagePointLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedUsagePointLink;


#define emberExiUsagePointLinkStructDataIndex 2983
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
// <xs:documentation>Agreement between the customer
// and the service supplier to pay for service at a specific service location. It
// records certain billing information about the type of service provided at the
// service location and is used during charge creation to determine the type of
// service.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAgreement
#define emberExiStructCustomerAgreementInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAgreement)))

typedef struct _EmberExiGeneratedCustomerAgreement {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedActiveBillingPeriodListLink *ActiveBillingPeriodListLink_option; // pointer to ActiveBillingPeriodListLink structs
  EmberExiGeneratedActiveProjectionReadingListLink *ActiveProjectionReadingListLink_option; // pointer to ActiveProjectionReadingListLink structs
  EmberExiGeneratedActiveTargetReadingListLink *ActiveTargetReadingListLink_option; // pointer to ActiveTargetReadingListLink structs
  EmberExiGeneratedBillingPeriodListLink *BillingPeriodListLink_option; // pointer to BillingPeriodListLink structs
  EmberExiGeneratedHistoricalReadingListLink *HistoricalReadingListLink_option; // pointer to HistoricalReadingListLink structs
  EmberExiGeneratedPrepaymentLink *PrepaymentLink_option; // pointer to PrepaymentLink structs
  EmberExiGeneratedProjectionReadingListLink *ProjectionReadingListLink_option; // pointer to ProjectionReadingListLink structs
  EmberExiGeneratedString42 serviceAccount_option; // element
  EmberExiGeneratedString42 serviceLocation_option; // element
  EmberExiGeneratedTargetReadingListLink *TargetReadingListLink_option; // pointer to TargetReadingListLink structs
  EmberExiGeneratedTariffProfileLink *TariffProfileLink_option; // pointer to TariffProfileLink structs
  EmberExiGeneratedUsagePointLink *UsagePointLink_option; // pointer to UsagePointLink structs
} EmberExiGeneratedCustomerAgreement;


#define emberExiCustomerAgreementStructDataIndex 577
#define emberExiCustomerAgreementStructData (emEncoderEvents + emberExiCustomerAgreementStructDataIndex)
#define emberExiCompareStructCustomerAgreement(x, y) (emExiCompareStructs(emberExiCustomerAgreementStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCustomerAgreement(theStruct) (emExiStructMemoryFootprint(emberExiCustomerAgreementStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCustomerAgreement(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCustomerAgreement(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCustomerAgreement(EmberExiGeneratedCustomerAgreement *data);

// Converts struct to XML
void emberExiToXmlStructCustomerAgreement(EmberExiGeneratedCustomerAgreement *data);

// Writes XML to a string
int emberExiXmlSprintfStructCustomerAgreement(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreement *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCustomerAgreement(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreement *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>If a temperature offset is
// sent that causes the heating or cooling temperature set point to exceed the
// limit boundaries that are programmed into the device, the device SHALL respond
// by setting the temperature at the limit.
// If an EDC is being targeted at multiple
// devices or to a device that controls multiple devices (e.g., EMS), it can
// provide multiple Offset types within one EDC. For events with multiple Offset
// types, a client SHALL select the Offset that best fits their operating function.
// 
// Alternatively, an event with a single Offset type can be targeted at an EMS in
// order to request a percentage load reduction on the average energy usage of the
// entire premise. An EMS SHOULD use the Metering function set to determine the
// initial load in the premise, reduce energy consumption by controlling devices at
// its disposal, and at the conclusion of the event, once again use the Metering
// function set to determine if the desired load reduction was
// achieved.</xs:documentation>
// </xs:annotation>
// Complex type: Offset
#define emberExiStructOffsetInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedOffset)))

typedef struct _EmberExiGeneratedOffset {
  int16u structType;
  unsigned int has_coolingOffset_option:1;
  unsigned int has_heatingOffset_option:1;
  unsigned int has_loadAdjustmentPercentageOffset_option:1;
  EmberExiGeneratedUInt8 coolingOffset_option; // element
  EmberExiGeneratedUInt8 heatingOffset_option; // element
  EmberExiGeneratedUInt8 loadAdjustmentPercentageOffset_option; // element
} EmberExiGeneratedOffset;


#define emberExiOffsetStructDataIndex 1987
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
// <xs:documentation>Used for signed percentages,
// specified in hundredths of a percent, -10000 - 10000. (10000 =
// 100%)</xs:documentation>
// </xs:annotation>
// Complex type: SignedPerCent
typedef EmberExiGeneratedInt16 EmberExiGeneratedSignedPerCent; // based-on Int16



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of active TextMessage instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveTextMessageListLink
#define emberExiStructActiveTextMessageListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveTextMessageListLink)))

typedef struct _EmberExiGeneratedActiveTextMessageListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveTextMessageListLink;


#define emberExiActiveTextMessageListLinkStructDataIndex 172
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
// <xs:documentation>This element MUST be set to
// the URI of the most recent File being loaded/activated by the LD. In the case of
// file status 0, this element MUST be omitted.</xs:documentation>
// </xs:annotation>
// Complex type: FileLink
#define emberExiStructFileLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileLink)))

typedef struct _EmberExiGeneratedFileLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedFileLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a setpoint for
// Displacement Power Factor, the ratio between apparent and active powers at the
// fundamental frequency (e.g. 60 Hz).</xs:documentation>
// </xs:annotation>
// Complex type: FixedPowerFactor
#define emberExiStructFixedPowerFactorInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFixedPowerFactor)))

typedef struct _EmberExiGeneratedFixedPowerFactor {
  int16u structType;
  EmberExiGeneratedInt16 displacement; // element
  EmberExiGeneratedInt8 excitation; // element
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
} EmberExiGeneratedFixedPowerFactor;


#define emberExiFixedPowerFactorStructDataIndex 1462
#define emberExiFixedPowerFactorStructData (emEncoderEvents + emberExiFixedPowerFactorStructDataIndex)
#define emberExiCompareStructFixedPowerFactor(x, y) (emExiCompareStructs(emberExiFixedPowerFactorStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFixedPowerFactor(theStruct) (emExiStructMemoryFootprint(emberExiFixedPowerFactorStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFixedPowerFactor(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFixedPowerFactor(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFixedPowerFactor(EmberExiGeneratedFixedPowerFactor *data);

// Converts struct to XML
void emberExiToXmlStructFixedPowerFactor(EmberExiGeneratedFixedPowerFactor *data);

// Writes XML to a string
int emberExiXmlSprintfStructFixedPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedFixedPowerFactor *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFixedPowerFactor(int8u *stringBuffer, int offset, EmberExiGeneratedFixedPowerFactor *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of RPLInterface instances.</xs:documentation>
// </xs:annotation>
// Complex type: RPLInstanceListLink
#define emberExiStructRPLInstanceListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRPLInstanceListLink)))

typedef struct _EmberExiGeneratedRPLInstanceListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedRPLInstanceListLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An Internet Protocol address
// object.</xs:documentation>
// </xs:annotation>
// Complex type: IPAddr
#define emberExiStructIPAddrInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIPAddr)))

typedef struct _EmberExiGeneratedIPAddr {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedHexBinary128 address; // element
  EmberExiGeneratedRPLInstanceListLink *RPLInstanceListLink_option; // pointer to RPLInstanceListLink structs
} EmberExiGeneratedIPAddr;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>List of IPAddr
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: IPAddrList
#define emberExiStructIPAddrListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIPAddrList)))

typedef struct _EmberExiGeneratedIPAddrList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u IPAddr_count; // number of IPAddr structs
  EmberExiGeneratedIPAddr *IPAddr_array; // pointer to IPAddr structs
} EmberExiGeneratedIPAddrList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER ConnectStatus value:
// 0 -
// N/A
// 1 - disconnected_unavail
// 2 - disconnected_avail
// 3 - connected_unavail
// 4 -
// connected_avail
// 5 - connected_on
// 6 - test_mode
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: ConnectStatusType
#define emberExiStructConnectStatusTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConnectStatusType)))

typedef struct _EmberExiGeneratedConnectStatusType {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedUInt8 value; // element
} EmberExiGeneratedConnectStatusType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER InverterStatus value:
// 0 -
// N/A
// 1 - off
// 2 - sleeping (auto-shutdown) or DER is at low output power/voltage
// 3
// - starting up or ON but not producing power
// 4 - tracking MPPT power point
// 5 -
// forced power reduction/derating
// 6 - shutting down
// 7 - one or more faults exist
// 8
// - standby (service on unit) - DER may be at high output voltage/power
// 9 - test
// mode
// 10 - as defined in manufacturer status
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: InverterStatusType
#define emberExiStructInverterStatusTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedInverterStatusType)))

typedef struct _EmberExiGeneratedInverterStatusType {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedUInt8 value; // element
} EmberExiGeneratedInverterStatusType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER
// LocalControlModeStatus/value:
// 0 – local control
// 1 – remote control
// All other
// values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: LocalControlModeStatusType
#define emberExiStructLocalControlModeStatusTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLocalControlModeStatusType)))

typedef struct _EmberExiGeneratedLocalControlModeStatusType {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedUInt8 value; // element
} EmberExiGeneratedLocalControlModeStatusType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Character string of max length
// 6. In order to limit internal storage, implementations SHALL reduce the length
// of strings using multi-byte characters so that the string may be stored using
// "maxLength" octets in the given encoding.</xs:documentation>
// </xs:annotation>
// Simple type: String6
typedef EmberExiGeneratedString EmberExiGeneratedString6;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER ManufacturerStatus/value:
// String data type</xs:documentation>
// </xs:annotation>
// Complex type: ManufacturerStatusType
#define emberExiStructManufacturerStatusTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedManufacturerStatusType)))

typedef struct _EmberExiGeneratedManufacturerStatusType {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedString6 value; // element
} EmberExiGeneratedManufacturerStatusType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER OperationalModeStatus
// value:
// 0 - Not applicable / Unknown
// 1 - Off
// 2 - Operational mode
// 3 - Test
// mode
// All other values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: OperationalModeStatusType
#define emberExiStructOperationalModeStatusTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedOperationalModeStatusType)))

typedef struct _EmberExiGeneratedOperationalModeStatusType {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedUInt8 value; // element
} EmberExiGeneratedOperationalModeStatusType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Used for percentages,
// specified in hundredths of a percent, 0 - 10000. (10000 =
// 100%)</xs:documentation>
// </xs:annotation>
// Complex type: PerCent
typedef EmberExiGeneratedUInt16 EmberExiGeneratedPerCent; // based-on UInt16



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER StateOfChargeStatus value:
// Percent data type</xs:documentation>
// </xs:annotation>
// Complex type: StateOfChargeStatusType
#define emberExiStructStateOfChargeStatusTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedStateOfChargeStatusType)))

typedef struct _EmberExiGeneratedStateOfChargeStatusType {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedPerCent value; // element
} EmberExiGeneratedStateOfChargeStatusType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER StorageModeStatus value:
// 0
// – storage charging
// 1 – storage discharging
// 2 – storage holding
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: StorageModeStatusType
#define emberExiStructStorageModeStatusTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedStorageModeStatusType)))

typedef struct _EmberExiGeneratedStorageModeStatusType {
  int16u structType;
  EmberExiGeneratedTimeType dateTime; // element
  EmberExiGeneratedUInt8 value; // element
} EmberExiGeneratedStorageModeStatusType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>DER status
// information.</xs:documentation>
// </xs:annotation>
// Complex type: DERStatus
#define emberExiStructDERStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERStatus)))

typedef struct _EmberExiGeneratedDERStatus {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedConnectStatusType *genConnectStatus_option; // pointer to genConnectStatus structs
  EmberExiGeneratedInverterStatusType *inverterStatus_option; // pointer to inverterStatus structs
  EmberExiGeneratedLocalControlModeStatusType *localControlModeStatus_option; // pointer to localControlModeStatus structs
  EmberExiGeneratedManufacturerStatusType *manufacturerStatus_option; // pointer to manufacturerStatus structs
  EmberExiGeneratedOperationalModeStatusType *operationalModeStatus_option; // pointer to operationalModeStatus structs
  EmberExiGeneratedTimeType readingTime; // element
  EmberExiGeneratedStateOfChargeStatusType *stateOfChargeStatus_option; // pointer to stateOfChargeStatus structs
  EmberExiGeneratedStorageModeStatusType *storageModeStatus_option; // pointer to storageModeStatus structs
  EmberExiGeneratedConnectStatusType *storConnectStatus_option; // pointer to storConnectStatus structs
} EmberExiGeneratedDERStatus;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Credit Ok
// 1 - Credit Low
// 2
// - Credit Exhausted
// 3 - Credit Negative
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: CreditStatusType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCreditStatusType; // based-on UInt8



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
// 12 - Unitless
// All other
// values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: UnitType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedUnitType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The TargetReduction object is
// used by a Demand Response service provider to provide a RECOMMENDED threshold
// that a device/premises should maintain its consumption below.  For example, a
// service provider can provide a RECOMMENDED threshold of some kWh for a 3-hour
// event.  This means that the device/premises would maintain its consumption below
// the specified limit for the specified period.  The service provider SHALL use
// the Type attribute to indicate the type of unit being used to indicate the
// threshold and the Value attribute to indicate the desired
// threshold.</xs:documentation>
// </xs:annotation>
// Complex type: TargetReduction
#define emberExiStructTargetReductionInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTargetReduction)))

typedef struct _EmberExiGeneratedTargetReduction {
  int16u structType;
  EmberExiGeneratedUnitType type; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedTargetReduction;


#define emberExiTargetReductionStructDataIndex 2740
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
// <xs:documentation>SHALL contain a Link to a List
// of active EndDeviceControl instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveEndDeviceControlListLink
#define emberExiStructActiveEndDeviceControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveEndDeviceControlListLink)))

typedef struct _EmberExiGeneratedActiveEndDeviceControlListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveEndDeviceControlListLink;


#define emberExiActiveEndDeviceControlListLinkStructDataIndex 136
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
// <xs:documentation>The active (real) power P (in
// W) is the product of root-mean-square (RMS) voltage, RMS current, and cos(theta)
// where theta is the phase angle of current relative to voltage.  It is the
// primary measure of the rate of flow of
// energy.</xs:documentation>
// </xs:annotation>
// Complex type: ActivePower
#define emberExiStructActivePowerInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActivePower)))

typedef struct _EmberExiGeneratedActivePower {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedInt16 value; // element
} EmberExiGeneratedActivePower;


#define emberExiActivePowerStructDataIndex 142
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
// <xs:documentation>SHALL contain a Link to a List
// of EndDeviceControl instances.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceControlListLink
#define emberExiStructEndDeviceControlListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceControlListLink)))

typedef struct _EmberExiGeneratedEndDeviceControlListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedEndDeviceControlListLink;


#define emberExiEndDeviceControlListLinkStructDataIndex 1318
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
  unsigned int has_version_option:1;
  unsigned int has_availabilityUpdatePercentChangeThreshold_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedActiveEndDeviceControlListLink *ActiveEndDeviceControlListLink_option; // pointer to ActiveEndDeviceControlListLink structs
  EmberExiGeneratedPerCent availabilityUpdatePercentChangeThreshold_option; // element
  EmberExiGeneratedActivePower *availabilityUpdatePowerChangeThreshold_option; // pointer to availabilityUpdatePowerChangeThreshold structs
  EmberExiGeneratedEndDeviceControlListLink *EndDeviceControlListLink_option; // pointer to EndDeviceControlListLink structs
  EmberExiGeneratedPrimacyType primacy; // element
} EmberExiGeneratedDemandResponseProgram;


#define emberExiDemandResponseProgramStructDataIndex 1000
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
// <xs:documentation>A List to which a Subscription
// can be requested.</xs:documentation>
// </xs:annotation>
// Complex type: SubscribableList
#define emberExiStructSubscribableListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscribableList)))

typedef struct _EmberExiGeneratedSubscribableList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
} EmberExiGeneratedSubscribableList;


#define emberExiSubscribableListStructDataIndex 2596
#define emberExiSubscribableListStructData (emEncoderEvents + emberExiSubscribableListStructDataIndex)
#define emberExiCompareStructSubscribableList(x, y) (emExiCompareStructs(emberExiSubscribableListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSubscribableList(theStruct) (emExiStructMemoryFootprint(emberExiSubscribableListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSubscribableList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSubscribableList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSubscribableList(EmberExiGeneratedSubscribableList *data);

// Converts struct to XML
void emberExiToXmlStructSubscribableList(EmberExiGeneratedSubscribableList *data);

// Writes XML to a string
int emberExiXmlSprintfStructSubscribableList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSubscribableList(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableList *data);

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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u DemandResponseProgram_count; // number of DemandResponseProgram structs
  EmberExiGeneratedDemandResponseProgram *DemandResponseProgram_array; // pointer to DemandResponseProgram structs
} EmberExiGeneratedDemandResponseProgramList;


#define emberExiDemandResponseProgramListStructDataIndex 1036
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
// <xs:documentation>IANA Private Enterprise Number
// [PEN].</xs:documentation>
// </xs:annotation>
// Complex type: PENType
typedef EmberExiGeneratedUInt32 EmberExiGeneratedPENType; // based-on UInt32



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A time stamped instance of a
// significant event detected by the device.</xs:documentation>
// </xs:annotation>
// Complex type: LogEvent
#define emberExiStructLogEventInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLogEvent)))

typedef struct _EmberExiGeneratedLogEvent {
  int16u structType;
  unsigned int has_extendedData_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType createdDateTime; // element
  EmberExiGeneratedUInt32 extendedData_option; // element
  EmberExiGeneratedUInt8 functionSet; // element
  EmberExiGeneratedUInt8 logEventCode; // element
  EmberExiGeneratedUInt16 logEventID; // element
  EmberExiGeneratedPENType logEventPEN; // element
  EmberExiGeneratedUInt8 profileID; // element
} EmberExiGeneratedLogEvent;


#define emberExiLogEventStructDataIndex 1819
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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u LogEvent_count; // number of LogEvent structs
  EmberExiGeneratedLogEvent *LogEvent_array; // pointer to LogEvent structs
} EmberExiGeneratedLogEventList;


#define emberExiLogEventListStructDataIndex 1846
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
// <xs:documentation>SHALL contain a Link to a List
// of Neighbor instances.</xs:documentation>
// </xs:annotation>
// Complex type: NeighborListLink
#define emberExiStructNeighborListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNeighborListLink)))

typedef struct _EmberExiGeneratedNeighborListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedNeighborListLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains 802.15.4 link layer
// specific attributes.</xs:documentation>
// </xs:annotation>
// Complex type: IEEE_802_15_4
#define emberExiStructIEEE_802_15_4Init(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIEEE_802_15_4)))

typedef struct _EmberExiGeneratedIEEE_802_15_4 {
  int16u structType;
  EmberExiGeneratedHexBinary8 capabilityInfo; // element
  EmberExiGeneratedNeighborListLink *NeighborListLink_option; // pointer to NeighborListLink structs
  EmberExiGeneratedUInt16 shortAddress; // element
} EmberExiGeneratedIEEE_802_15_4;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of RateComponent instances.</xs:documentation>
// </xs:annotation>
// Complex type: RateComponentListLink
#define emberExiStructRateComponentListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRateComponentListLink)))

typedef struct _EmberExiGeneratedRateComponentListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedRateComponentListLink;


#define emberExiRateComponentListLinkStructDataIndex 2311
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
// <xs:documentation>SHALL contain a Link to an
// instance of DER.</xs:documentation>
// </xs:annotation>
// Complex type: DERLink
#define emberExiStructDERLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERLink)))

typedef struct _EmberExiGeneratedDERLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of active TimeTariffInterval instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveTimeTariffIntervalListLink
#define emberExiStructActiveTimeTariffIntervalListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveTimeTariffIntervalListLink)))

typedef struct _EmberExiGeneratedActiveTimeTariffIntervalListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveTimeTariffIntervalListLink;


#define emberExiActiveTimeTariffIntervalListLinkStructDataIndex 178
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
// <xs:documentation>Control modes supported by the
// DER.  Bit positions SHALL be defined as follows:
// 0 - Volt-VAr Mode 
// 1 -
// Frequency-Watt Curve Mode 
// 2 - Watt-PowerFactor Mode 
// 3 - Volt-Watt Mode 
// 4 -
// Low Voltage Ride Through Mode 
// 5 - High Voltage Ride Through Mode
// 6-9 - reserved
// 
// 10 - setGenConnect
// 11 - setStorConnect
// 12 - Fixed W
// 13 - Fixed VAr
// 14 - Fixed
// PF
// 15 - Charge mode
// 16 - Discharge mode
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: DERControlType
typedef EmberExiGeneratedHexBinary32 EmberExiGeneratedDERControlType; // based-on HexBinary32



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// TimeTariffInterval objects.</xs:documentation>
// </xs:annotation>
// Complex type: TimeTariffIntervalList
#define emberExiStructTimeTariffIntervalListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeTariffIntervalList)))

typedef struct _EmberExiGeneratedTimeTariffIntervalList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u TimeTariffInterval_count; // number of TimeTariffInterval structs
  EmberExiGeneratedTimeTariffInterval *TimeTariffInterval_array; // pointer to TimeTariffInterval structs
} EmberExiGeneratedTimeTariffIntervalList;


#define emberExiTimeTariffIntervalListStructDataIndex 2923
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
// <xs:documentation>Contains 802.15.4 link layer
// specific attributes.</xs:documentation>
// </xs:annotation>
// Complex type: Neighbor
#define emberExiStructNeighborInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNeighbor)))

typedef struct _EmberExiGeneratedNeighbor {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedBoolean isChild; // element
  EmberExiGeneratedUInt8 linkQuality; // element
  EmberExiGeneratedUInt16 shortAddress; // element
} EmberExiGeneratedNeighbor;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of RPLSourceRoutes instances.</xs:documentation>
// </xs:annotation>
// Complex type: RPLSourceRoutesListLink
#define emberExiStructRPLSourceRoutesListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRPLSourceRoutesListLink)))

typedef struct _EmberExiGeneratedRPLSourceRoutesListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedRPLSourceRoutesListLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of DERProgram.</xs:documentation>
// </xs:annotation>
// Complex type: DERProgramLink
#define emberExiStructDERProgramLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERProgramLink)))

typedef struct _EmberExiGeneratedDERProgramLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERProgramLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of LLInterface instances.</xs:documentation>
// </xs:annotation>
// Complex type: LLInterfaceListLink
#define emberExiStructLLInterfaceListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLLInterfaceListLink)))

typedef struct _EmberExiGeneratedLLInterfaceListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedLLInterfaceListLink;


#define emberExiLLInterfaceListLinkStructDataIndex 1747
#define emberExiLLInterfaceListLinkStructData (emEncoderEvents + emberExiLLInterfaceListLinkStructDataIndex)
#define emberExiCompareStructLLInterfaceListLink(x, y) (emExiCompareStructs(emberExiLLInterfaceListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructLLInterfaceListLink(theStruct) (emExiStructMemoryFootprint(emberExiLLInterfaceListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructLLInterfaceListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructLLInterfaceListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data);

// Converts struct to XML
void emberExiToXmlStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructLLInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterfaceListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructLLInterfaceListLink(int8u *stringBuffer, int offset, EmberExiGeneratedLLInterfaceListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A signed time offset,
// typically applied to a Time value, expressed in
// seconds.</xs:documentation>
// </xs:annotation>
// Complex type: TimeOffsetType
typedef EmberExiGeneratedInt32 EmberExiGeneratedTimeOffsetType; // based-on Int32



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains the representation of
// time, constantly updated.</xs:documentation>
// </xs:annotation>
// Complex type: Time
#define emberExiStructTimeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTime)))

typedef struct _EmberExiGeneratedTime {
  int16u structType;
  unsigned int has_localTime_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType currentTime; // element
  EmberExiGeneratedTimeType dstEndTime; // element
  EmberExiGeneratedTimeOffsetType dstOffset; // element
  EmberExiGeneratedTimeType dstStartTime; // element
  EmberExiGeneratedTimeType localTime_option; // element
  EmberExiGeneratedUInt8 quality; // element
  EmberExiGeneratedTimeOffsetType tzOffset; // element
} EmberExiGeneratedTime;


#define emberExiTimeStructDataIndex 2857
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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u UsagePoint_count; // number of UsagePoint structs
  EmberExiGeneratedUsagePoint *UsagePoint_array; // pointer to UsagePoint structs
} EmberExiGeneratedUsagePointList;


#define emberExiUsagePointListStructDataIndex 2989
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
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 
// 3 = Cumulative
// The sum of the previous billing period values.
// Note: “Cumulative” is commonly used in conjunction with “demand.” Each demand
// reset causes the maximum demand value for the present billing period (since the
// last demand reset) to accumulate as an accumulative total of all maximum
// demands. So instead of “zeroing” the demand register, a demand reset has the
// affect of adding the present maximum demand to this accumulating total.
// 
// 4 =
// DeltaData
// The difference between the value at the end of the prescribed interval
// and the beginning of the interval. This is used for incremental interval data.
// 
// Note: One common application would be for load profile data, another use might
// be to report the number of events within an interval (such as the number of
// equipment energizations within the specified period of time.)
// 
// 6 = Indicating
// As
// if a needle is swung out on the meter face to a value to indicate the current
// value. (Note: An “indicating” value is typically measured over hundreds of
// milliseconds or greater, or may imply a “pusher” mechanism to capture a value.
// Compare this to “instantaneous” which is measured over a shorter period of
// time.) 
// 
// 9 = Summation
// A form of accumulation which is selective with respect to
// time. 
// Note : “Summation” could be considered a specialization of “Bulk
// Quantity” according to the rules of inheritance where “Summation” selectively
// accumulates pulses over a timing pattern, and “BulkQuantity” accumulates pulses
// all of the time.
// 
// 12 = Instantaneous
// Typically measured over the fastest period
// of time allowed by the definition of the metric (usually milliseconds or tens of
// milliseconds.) (Note: “Instantaneous” was moved to attribute #3 in 61968-9Ed2
// from attribute #1 in 61968-9Ed1.)
// 
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: AccumulationBehaviourType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedAccumulationBehaviourType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 5 = A (Current in Amperes (RMS))
// 6 = Kelvin (Temperature)
// 23 =
// Degrees Celsius (Relative temperature)
// 29 = Voltage
// 31 = J (Energy joule)
// 33 =
// Hz (Frequency)
// 38 =W (Real power in Watts)
// 42 = m3 (Cubic Meter)
// 61 = VA
// (Apparent power)
// 63 = var (Reactive power)
// 65 = CosTheta (Displacement Power
// Factor)
// 67 = V² (Volts squared)
// 69 = A² (Amp squared)
// 71 = VAh (Apparent
// energy)
// 72 = Wh (Real energy in Watt-hours)
// 73 = varh (Reactive energy)
// 106 = Ah
// (Ampere-hours / Available Charge)
// 119 = ft3 (Cubic Feet)
// 122 = ft3/h (Cubic Feet
// per Hour)
// 125 = m3/h (Cubic Meter per Hour)
// 128 = US gl (US Gallons)
// 129 = US
// gl/h (US Gallons per Hour)
// 130 = IMP gl (Imperial Gallons)
// 131 = IMP gl/h
// (Imperial Gallons per Hour)
// 132 = BTU
// 133 = BTU/h
// 134 = Liter
// 137 = L/h (Liters
// per Hour)
// 140 = PA(gauge)
// 155 = PA(absolute)
// 169 = Therm
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: UomType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedUomType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Type for specification of a
// specific value, with units and power of ten
// multiplier.</xs:documentation>
// </xs:annotation>
// Complex type: UnitValueType
#define emberExiStructUnitValueTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedUnitValueType)))

typedef struct _EmberExiGeneratedUnitValueType {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUomType unit; // element
  EmberExiGeneratedInt32 value; // element
} EmberExiGeneratedUnitValueType;


#define emberExiUnitValueTypeStructDataIndex 2941
#define emberExiUnitValueTypeStructData (emEncoderEvents + emberExiUnitValueTypeStructDataIndex)
#define emberExiCompareStructUnitValueType(x, y) (emExiCompareStructs(emberExiUnitValueTypeStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructUnitValueType(theStruct) (emExiStructMemoryFootprint(emberExiUnitValueTypeStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructUnitValueType(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructUnitValueType(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructUnitValueType(EmberExiGeneratedUnitValueType *data);

// Converts struct to XML
void emberExiToXmlStructUnitValueType(EmberExiGeneratedUnitValueType *data);

// Writes XML to a string
int emberExiXmlSprintfStructUnitValueType(int8u *stringBuffer, int offset, EmberExiGeneratedUnitValueType *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructUnitValueType(int8u *stringBuffer, int offset, EmberExiGeneratedUnitValueType *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 1 = Electricity secondary metered value (a premises meter is
// typically a secondary meter)
// 2 = Electricity primary metered value
// 4 = Air
// 7 =
// NaturalGas
// 8 = Propane
// 9 = PotableWater
// 10 = Steam
// 11 = WasteWater
// 12 =
// HeatingFluid
// 13 = CoolingFluid
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: CommodityType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCommodityType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 1 = Forward (delivered to customer)
// 19 = Reverse (received
// from customer)
// All other values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: FlowDirectionType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedFlowDirectionType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 3 = Currency
// 8 = Demand
// 12 = Energy
// 37 = Power
// All other
// values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: KindType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedKindType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 = Not Applicable (default,
// if not specified)
// 32 = Phase C (and S2)
// 33 = Phase CN (and S2N)
// 40 = Phase CA
// 64
// = Phase B
// 65 = Phase BN
// 66 = Phase BC
// 128 = Phase A (and S1)
// 129 = Phase AN (and
// S1N)
// 132 = Phase AB
// 224 = Phase ABC
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: PhaseCode
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPhaseCode; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Unsigned integer, max
// inclusive 281474976710655 (2^48-1)</xs:documentation>
// </xs:annotation>
// Simple type: UInt48
typedef EmberExiGeneratedInt32u EmberExiGeneratedUInt48;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Type of data conveyed by a
// specific Reading. See IEC 61968 Part 9 Annex C for full definitions of these
// values.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingType
#define emberExiStructReadingTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingType)))

typedef struct _EmberExiGeneratedReadingType {
  int16u structType;
  unsigned int has_accumulationBehaviour_option:1;
  unsigned int has_commodity_option:1;
  unsigned int has_dataQualifier_option:1;
  unsigned int has_flowDirection_option:1;
  unsigned int has_intervalLength_option:1;
  unsigned int has_kind_option:1;
  unsigned int has_maxNumberOfIntervals_option:1;
  unsigned int has_numberOfConsumptionBlocks_option:1;
  unsigned int has_numberOfTouTiers_option:1;
  unsigned int has_phase_option:1;
  unsigned int has_powerOfTenMultiplier_option:1;
  unsigned int has_subIntervalLength_option:1;
  unsigned int has_supplyLimit_option:1;
  unsigned int has_tieredConsumptionBlocks_option:1;
  unsigned int has_uom_option:1;
  unsigned int flagPadding:7;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedAccumulationBehaviourType accumulationBehaviour_option; // element
  EmberExiGeneratedUnitValueType *calorificValue_option; // pointer to calorificValue structs
  EmberExiGeneratedCommodityType commodity_option; // element
  EmberExiGeneratedUnitValueType *conversionFactor_option; // pointer to conversionFactor structs
  EmberExiGeneratedDataQualifierType dataQualifier_option; // element
  EmberExiGeneratedFlowDirectionType flowDirection_option; // element
  EmberExiGeneratedUInt32 intervalLength_option; // element
  EmberExiGeneratedKindType kind_option; // element
  EmberExiGeneratedUInt8 maxNumberOfIntervals_option; // element
  EmberExiGeneratedUInt8 numberOfConsumptionBlocks_option; // element
  EmberExiGeneratedUInt8 numberOfTouTiers_option; // element
  EmberExiGeneratedPhaseCode phase_option; // element
  EmberExiGeneratedPowerOfTenMultiplierType powerOfTenMultiplier_option; // element
  EmberExiGeneratedUInt32 subIntervalLength_option; // element
  EmberExiGeneratedUInt48 supplyLimit_option; // element
  EmberExiGeneratedBoolean tieredConsumptionBlocks_option; // element
  EmberExiGeneratedUomType uom_option; // element
} EmberExiGeneratedReadingType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Delay Appliance
// Load
// Parameter requesting the appliance to respond by providing a moderate load
// reduction for the duration of a delay period.  Typically referring to a
// “non-emergency” event in which appliances can continue operating if already in a
// load consuming period.
// 
// 1 - Temporary Appliance Load Reduction
// Parameter
// requesting the appliance to respond by providing an aggressive load reduction
// for a short time period.  Typically referring to an “emergency/spinning reserve”
// event in which an appliance should start shedding load if currently in a load
// consuming period. 
// 
// * Full definition of how appliances react when receiving
// each parameter is document in the EPA document - ENERGY STAR® Program
// Requirements, Product Specification for Residential Refrigerators and Freezers,
// Eligibility Criteria 5, Draft 2 Version 5.0.
// 
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: ApplianceLoadReductionType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedApplianceLoadReductionType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The ApplianceLoadReduction
// object is used by a Demand Response service provider to provide signals for
// ENERGY STAR compliant appliances. See the definition of
// ApplianceLoadReductionType for more
// information.</xs:documentation>
// </xs:annotation>
// Complex type: ApplianceLoadReduction
#define emberExiStructApplianceLoadReductionInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedApplianceLoadReduction)))

typedef struct _EmberExiGeneratedApplianceLoadReduction {
  int16u structType;
  EmberExiGeneratedApplianceLoadReductionType type; // element
} EmberExiGeneratedApplianceLoadReduction;


#define emberExiApplianceLoadReductionStructDataIndex 184
#define emberExiApplianceLoadReductionStructData (emEncoderEvents + emberExiApplianceLoadReductionStructDataIndex)
#define emberExiCompareStructApplianceLoadReduction(x, y) (emExiCompareStructs(emberExiApplianceLoadReductionStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructApplianceLoadReduction(theStruct) (emExiStructMemoryFootprint(emberExiApplianceLoadReductionStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructApplianceLoadReduction(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructApplianceLoadReduction(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data);

// Converts struct to XML
void emberExiToXmlStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data);

// Writes XML to a string
int emberExiXmlSprintfStructApplianceLoadReduction(int8u *stringBuffer, int offset, EmberExiGeneratedApplianceLoadReduction *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructApplianceLoadReduction(int8u *stringBuffer, int offset, EmberExiGeneratedApplianceLoadReduction *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Duty cycle control is a device
// specific issue and SHALL be managed by the device.  The duty cycle of the device
// under control should span the shortest practical time period in accordance with
// the nature of the device under control and the intent of the request for demand
// reduction.  The default factory setting SHOULD be three minutes for each 10% of
// duty cycle.  This indicates that the default time period over which a duty cycle
// is applied is 30 minutes, meaning a 10% duty cycle would cause a device to be ON
// for 3 minutes.   The “off state” SHALL precede the “on
// state”.</xs:documentation>
// </xs:annotation>
// Complex type: DutyCycle
#define emberExiStructDutyCycleInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDutyCycle)))

typedef struct _EmberExiGeneratedDutyCycle {
  int16u structType;
  EmberExiGeneratedUInt8 normalValue; // element
} EmberExiGeneratedDutyCycle;


#define emberExiDutyCycleStructDataIndex 1213
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
// <xs:documentation>The SetPoint object is used to
// apply a specific temperature value to a temperature control device. The Type
// attribute will indicate what type of set point SHALL be applied.  The Value
// attribute SHALL be calculated as follows:
// Cooling/Heating Temperature Set Point
// / 100 = temperature in degrees Celsius where -273.15°C &amp;lt;= temperature
// &amp;lt;= 327.67°C, corresponding to a Cooling and/or Heating Temperature Set
// Point. The maximum resolution this format allows is 0.01°C. 
// The field not
// present in a Response indicates that this field has not been used by the end
// device. 
// If a temperature is sent that exceeds the temperature limit boundaries
// that are programmed into the device, the device SHALL respond by setting the
// temperature at the limit.</xs:documentation>
// </xs:annotation>
// Complex type: SetPoint
#define emberExiStructSetPointInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSetPoint)))

typedef struct _EmberExiGeneratedSetPoint {
  int16u structType;
  unsigned int has_coolingSetpoint_option:1;
  unsigned int has_heatingSetpoint_option:1;
  EmberExiGeneratedInt16 coolingSetpoint_option; // element
  EmberExiGeneratedInt16 heatingSetpoint_option; // element
} EmberExiGeneratedSetPoint;


#define emberExiSetPointStructDataIndex 2569
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
// <xs:documentation>Instructs an EndDevice to
// perform a specified action.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceControl
#define emberExiStructEndDeviceControlInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceControl)))

typedef struct _EmberExiGeneratedEndDeviceControl {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int has_randomizeDuration_option:1;
  unsigned int has_randomizeStart_option:1;
  unsigned int has_overrideDuration_option:1;
  unsigned int flagPadding:16;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedOneHourRangeType randomizeDuration_option; // element
  EmberExiGeneratedOneHourRangeType randomizeStart_option; // element
  EmberExiGeneratedApplianceLoadReduction *ApplianceLoadReduction_option; // pointer to ApplianceLoadReduction structs
  EmberExiGeneratedDeviceCategoryType deviceCategory; // element
  EmberExiGeneratedBoolean drProgramMandatory; // element
  EmberExiGeneratedDutyCycle *DutyCycle_option; // pointer to DutyCycle structs
  EmberExiGeneratedBoolean loadShiftForward; // element
  EmberExiGeneratedOffset *Offset_option; // pointer to Offset structs
  EmberExiGeneratedUInt16 overrideDuration_option; // element
  EmberExiGeneratedSetPoint *SetPoint_option; // pointer to SetPoint structs
  EmberExiGeneratedTargetReduction *TargetReduction_option; // pointer to TargetReduction structs
} EmberExiGeneratedEndDeviceControl;


#define emberExiEndDeviceControlStructDataIndex 1258
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
// <xs:documentation>SupplyInterruptionOverride:
// There may be periods of time when social, regulatory or other concerns mean that
// service should not be interrupted, even when available credit has been
// exhausted. Each Prepayment instance links to a List of
// SupplyInterruptionOverride instances. Each SupplyInterruptionOverride defines a
// contiguous period of time during which supply SHALL NOT be
// interrupted.</xs:documentation>
// </xs:annotation>
// Complex type: SupplyInterruptionOverride
#define emberExiStructSupplyInterruptionOverrideInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupplyInterruptionOverride)))

typedef struct _EmberExiGeneratedSupplyInterruptionOverride {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
} EmberExiGeneratedSupplyInterruptionOverride;


#define emberExiSupplyInterruptionOverrideStructDataIndex 2677
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
// <xs:documentation>SHALL contain a Link to a List
// of EndDevice instances.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceListLink
#define emberExiStructEndDeviceListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceListLink)))

typedef struct _EmberExiGeneratedEndDeviceListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedEndDeviceListLink;


#define emberExiEndDeviceListLinkStructDataIndex 1336
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
// <xs:documentation>SHALL contain a Link to a List
// of MirrorUsagePoint instances.</xs:documentation>
// </xs:annotation>
// Complex type: MirrorUsagePointListLink
#define emberExiStructMirrorUsagePointListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorUsagePointListLink)))

typedef struct _EmberExiGeneratedMirrorUsagePointListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedMirrorUsagePointListLink;


#define emberExiMirrorUsagePointListLinkStructDataIndex 1960
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
// <xs:documentation>SHALL contain a Link to an
// instance of SelfDevice.</xs:documentation>
// </xs:annotation>
// Complex type: SelfDeviceLink
#define emberExiStructSelfDeviceLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSelfDeviceLink)))

typedef struct _EmberExiGeneratedSelfDeviceLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedSelfDeviceLink;


#define emberExiSelfDeviceLinkStructDataIndex 2527
#define emberExiSelfDeviceLinkStructData (emEncoderEvents + emberExiSelfDeviceLinkStructDataIndex)
#define emberExiCompareStructSelfDeviceLink(x, y) (emExiCompareStructs(emberExiSelfDeviceLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSelfDeviceLink(theStruct) (emExiStructMemoryFootprint(emberExiSelfDeviceLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSelfDeviceLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSelfDeviceLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data);

// Converts struct to XML
void emberExiToXmlStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructSelfDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDeviceLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSelfDeviceLink(int8u *stringBuffer, int offset, EmberExiGeneratedSelfDeviceLink *data);

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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedCustomerAccountListLink *CustomerAccountListLink_option; // pointer to CustomerAccountListLink structs
  EmberExiGeneratedDemandResponseProgramListLink *DemandResponseProgramListLink_option; // pointer to DemandResponseProgramListLink structs
  EmberExiGeneratedDERProgramListLink *DERProgramListLink_option; // pointer to DERProgramListLink structs
  EmberExiGeneratedFileListLink *FileListLink_option; // pointer to FileListLink structs
  EmberExiGeneratedMessagingProgramListLink *MessagingProgramListLink_option; // pointer to MessagingProgramListLink structs
  EmberExiGeneratedPrepaymentListLink *PrepaymentListLink_option; // pointer to PrepaymentListLink structs
  EmberExiGeneratedResponseSetListLink *ResponseSetListLink_option; // pointer to ResponseSetListLink structs
  EmberExiGeneratedTariffProfileListLink *TariffProfileListLink_option; // pointer to TariffProfileListLink structs
  EmberExiGeneratedTimeLink *TimeLink_option; // pointer to TimeLink structs
  EmberExiGeneratedUsagePointListLink *UsagePointListLink_option; // pointer to UsagePointListLink structs
  EmberExiGeneratedEndDeviceListLink *EndDeviceListLink_option; // pointer to EndDeviceListLink structs
  EmberExiGeneratedMirrorUsagePointListLink *MirrorUsagePointListLink_option; // pointer to MirrorUsagePointListLink structs
  EmberExiGeneratedSelfDeviceLink *SelfDeviceLink_option; // pointer to SelfDeviceLink structs
} EmberExiGeneratedDeviceCapability;


#define emberExiDeviceCapabilityStructDataIndex 1054
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
// <xs:documentation>This object provides status of
// device file load and activation operations.</xs:documentation>
// </xs:annotation>
// Complex type: FileStatus
#define emberExiStructFileStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileStatus)))

typedef struct _EmberExiGeneratedFileStatus {
  int16u structType;
  unsigned int has_activateTime_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType activateTime_option; // element
  EmberExiGeneratedFileLink *FileLink_option; // pointer to FileLink structs
  EmberExiGeneratedUInt8 loadPercent; // element
  EmberExiGeneratedTimeType nextRequestAttempt; // element
  EmberExiGeneratedUInt16 request503Count; // element
  EmberExiGeneratedUInt16 requestFailCount; // element
  EmberExiGeneratedUInt8 status; // element
  EmberExiGeneratedTimeType statusTime; // element
} EmberExiGeneratedFileStatus;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of DERCurve.</xs:documentation>
// </xs:annotation>
// Complex type: DERCurveLink
#define emberExiStructDERCurveLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERCurveLink)))

typedef struct _EmberExiGeneratedDERCurveLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDERCurveLink;


#define emberExiDERCurveLinkStructDataIndex 856
#define emberExiDERCurveLinkStructData (emEncoderEvents + emberExiDERCurveLinkStructDataIndex)
#define emberExiCompareStructDERCurveLink(x, y) (emExiCompareStructs(emberExiDERCurveLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERCurveLink(theStruct) (emExiStructMemoryFootprint(emberExiDERCurveLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERCurveLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERCurveLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERCurveLink(EmberExiGeneratedDERCurveLink *data);

// Converts struct to XML
void emberExiToXmlStructDERCurveLink(EmberExiGeneratedDERCurveLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERCurveLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERCurveLink(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of AccountBalance.</xs:documentation>
// </xs:annotation>
// Complex type: AccountBalanceLink
#define emberExiStructAccountBalanceLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAccountBalanceLink)))

typedef struct _EmberExiGeneratedAccountBalanceLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedAccountBalanceLink;


#define emberExiAccountBalanceLinkStructDataIndex 91
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
// <xs:documentation>SHALL contain a Link to a List
// of active CreditRegister instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveCreditRegisterListLink
#define emberExiStructActiveCreditRegisterListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveCreditRegisterListLink)))

typedef struct _EmberExiGeneratedActiveCreditRegisterListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveCreditRegisterListLink;


#define emberExiActiveCreditRegisterListLinkStructDataIndex 124
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
// <xs:documentation>SHALL contain a Link to a List
// of active SupplyInterruptionOverride
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveSupplyInterruptionOverrideListLink
#define emberExiStructActiveSupplyInterruptionOverrideListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveSupplyInterruptionOverrideListLink)))

typedef struct _EmberExiGeneratedActiveSupplyInterruptionOverrideListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveSupplyInterruptionOverrideListLink;


#define emberExiActiveSupplyInterruptionOverrideListLinkStructDataIndex 160
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
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt48 value; // element
} EmberExiGeneratedRealEnergy;


#define emberExiRealEnergyStructDataIndex 2428
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
// <xs:documentation>Follows codes defined in [ISO
// 4217]. 
// 0 - Not Applicable (default, if not specified)
// 36 - Australian
// Dollar
// 124 - Canadian Dollar
// 840 - US Dollar
// 978 - Euro
// This is not a complete
// list.</xs:documentation>
// </xs:annotation>
// Complex type: CurrencyCode
typedef EmberExiGeneratedUInt16 EmberExiGeneratedCurrencyCode; // based-on UInt16



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
  EmberExiGeneratedRealEnergy *energyUnit_option; // pointer to energyUnit structs
  EmberExiGeneratedCurrencyCode monetaryUnit; // element
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedInt32 value; // element
} EmberExiGeneratedAccountingUnit;


#define emberExiAccountingUnitStructDataIndex 97
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
// <xs:documentation>SHALL contain a Link to a List
// of CreditRegister instances.</xs:documentation>
// </xs:annotation>
// Complex type: CreditRegisterListLink
#define emberExiStructCreditRegisterListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCreditRegisterListLink)))

typedef struct _EmberExiGeneratedCreditRegisterListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedCreditRegisterListLink;


#define emberExiCreditRegisterListLinkStructDataIndex 472
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
// 3 - Credit
// All other values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: PrepayModeType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPrepayModeType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of PrepayOperationStatus.</xs:documentation>
// </xs:annotation>
// Complex type: PrepayOperationStatusLink
#define emberExiStructPrepayOperationStatusLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepayOperationStatusLink)))

typedef struct _EmberExiGeneratedPrepayOperationStatusLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedPrepayOperationStatusLink;


#define emberExiPrepayOperationStatusLinkStructDataIndex 2113
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
// <xs:documentation>SHALL contain a Link to a List
// of SupplyInterruptionOverride instances.</xs:documentation>
// </xs:annotation>
// Complex type: SupplyInterruptionOverrideListLink
#define emberExiStructSupplyInterruptionOverrideListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupplyInterruptionOverrideListLink)))

typedef struct _EmberExiGeneratedSupplyInterruptionOverrideListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedSupplyInterruptionOverrideListLink;


#define emberExiSupplyInterruptionOverrideListLinkStructDataIndex 2704
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
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
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
  int8u UsagePoint_count; // number of UsagePoint structs
  EmberExiGeneratedUsagePoint *UsagePoint_array; // pointer to UsagePoint structs
  EmberExiGeneratedUsagePointLink *UsagePointLink_option; // pointer to UsagePointLink structs
} EmberExiGeneratedPrepayment;


#define emberExiPrepaymentStructDataIndex 2119
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
// <xs:documentation>Indicates a condition that
// must be satisfied for the Notification to be
// triggered.</xs:documentation>
// </xs:annotation>
// Complex type: Condition
#define emberExiStructConditionInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCondition)))

typedef struct _EmberExiGeneratedCondition {
  int16u structType;
  EmberExiGeneratedUInt8 attributeIdentifier; // element
  EmberExiGeneratedInt48 lowerThreshold; // element
  EmberExiGeneratedInt48 upperThreshold; // element
} EmberExiGeneratedCondition;


#define emberExiConditionStructDataIndex 349
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
// <xs:documentation>A 160-bit field encoded as a
// hex string (40 hex characters max). Where applicable, bit 0, or the least
// significant bit, goes on the right. Note that hexBinary requires pairs of hex
// characters, so an odd number of characters requires a leading
// "0".</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary160
typedef struct {
  int8u length;
  int8u bytes[20];
} EmberExiGeneratedHexBinary160;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A set of Readings of the
// ReadingType indicated by the parent MeterReading. ReadingBase is abstract, used
// to define the elements common to ReadingSet and
// IntervalBlock.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingSetBase
#define emberExiStructReadingSetBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingSetBase)))

typedef struct _EmberExiGeneratedReadingSetBase {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedDateTimeInterval *timePeriod; // pointer to timePeriod structs
} EmberExiGeneratedReadingSetBase;


#define emberExiReadingSetBaseStructDataIndex 2392
#define emberExiReadingSetBaseStructData (emEncoderEvents + emberExiReadingSetBaseStructDataIndex)
#define emberExiCompareStructReadingSetBase(x, y) (emExiCompareStructs(emberExiReadingSetBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingSetBase(theStruct) (emExiStructMemoryFootprint(emberExiReadingSetBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingSetBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingSetBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingSetBase(EmberExiGeneratedReadingSetBase *data);

// Converts struct to XML
void emberExiToXmlStructReadingSetBase(EmberExiGeneratedReadingSetBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingSetBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingSetBase(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetBase *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A set of Readings of the
// ReadingType indicated by the parent
// MeterReading.</xs:documentation>
// </xs:annotation>
// Complex type: MirrorReadingSet
#define emberExiStructMirrorReadingSetInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorReadingSet)))

typedef struct _EmberExiGeneratedMirrorReadingSet {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedDateTimeInterval *timePeriod; // pointer to timePeriod structs
  int8u Reading_count; // number of Reading structs
  EmberExiGeneratedReading *Reading_array; // pointer to Reading structs
} EmberExiGeneratedMirrorReadingSet;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A container for associating
// ReadingType, Readings and ReadingSets.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingBase
#define emberExiStructMeterReadingBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingBase)))

typedef struct _EmberExiGeneratedMeterReadingBase {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
} EmberExiGeneratedMeterReadingBase;


#define emberExiMeterReadingBaseStructDataIndex 1936
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
  unsigned int has_version_option:1;
  unsigned int has_lastUpdateTime_option:1;
  unsigned int has_nextUpdateTime_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType lastUpdateTime_option; // element
  int8u MirrorReadingSet_count; // number of MirrorReadingSet structs
  EmberExiGeneratedMirrorReadingSet *MirrorReadingSet_array; // pointer to MirrorReadingSet structs
  EmberExiGeneratedTimeType nextUpdateTime_option; // element
  EmberExiGeneratedReading *Reading_option; // pointer to Reading structs
  EmberExiGeneratedReadingType *ReadingType_option; // pointer to ReadingType structs
} EmberExiGeneratedMirrorMeterReading;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A parallel to UsagePoint to
// support mirroring</xs:documentation>
// </xs:annotation>
// Complex type: MirrorUsagePoint
#define emberExiStructMirrorUsagePointInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorUsagePoint)))

typedef struct _EmberExiGeneratedMirrorUsagePoint {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedRoleFlagsType roleFlags; // element
  EmberExiGeneratedServiceKind serviceCategoryKind; // element
  EmberExiGeneratedUInt8 status; // element
  EmberExiGeneratedHexBinary160 deviceLFDI; // element
  int8u MirrorMeterReading_count; // number of MirrorMeterReading structs
  EmberExiGeneratedMirrorMeterReading *MirrorMeterReading_array; // pointer to MirrorMeterReading structs
} EmberExiGeneratedMirrorUsagePoint;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Connected
// 1 -
// Disconnected
// 2 - Armed for Connect
// 3 - Armed for Disconnect
// 4 - No Contactor
// 5 -
// Load Limited
// All other values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceStatusType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedServiceStatusType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a change to the
// service status.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceChange
#define emberExiStructServiceChangeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceChange)))

typedef struct _EmberExiGeneratedServiceChange {
  int16u structType;
  EmberExiGeneratedServiceStatusType newStatus; // element
  EmberExiGeneratedTimeType startTime; // element
} EmberExiGeneratedServiceChange;


#define emberExiServiceChangeStructDataIndex 2533
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
// <xs:documentation>Specific RPLInstance resource.
// This resource may be thought of as network status information for a specific RPL
// instance associated with IPInterface.</xs:documentation>
// </xs:annotation>
// Complex type: RPLInstance
#define emberExiStructRPLInstanceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRPLInstance)))

typedef struct _EmberExiGeneratedRPLInstance {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt8 DODAGid; // element
  EmberExiGeneratedBoolean DODAGroot; // element
  EmberExiGeneratedUInt8 flags; // element
  EmberExiGeneratedBoolean groundedFlag; // element
  EmberExiGeneratedUInt8 MOP; // element
  EmberExiGeneratedUInt8 PRF; // element
  EmberExiGeneratedUInt16 rank; // element
  EmberExiGeneratedUInt8 RPLInstanceID; // element
  EmberExiGeneratedRPLSourceRoutesListLink *RPLSourceRoutesListLink_option; // pointer to RPLSourceRoutesListLink structs
  EmberExiGeneratedUInt8 versionNumber; // element
} EmberExiGeneratedRPLInstance;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Abstract type for specifying a
// fixed-point value without a given unit of
// measure.</xs:documentation>
// </xs:annotation>
// Complex type: FixedPointType
#define emberExiStructFixedPointTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFixedPointType)))

typedef struct _EmberExiGeneratedFixedPointType {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedInt16 value; // element
} EmberExiGeneratedFixedPointType;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of BillingReadingSet instances.</xs:documentation>
// </xs:annotation>
// Complex type: BillingReadingSetListLink
#define emberExiStructBillingReadingSetListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingReadingSetListLink)))

typedef struct _EmberExiGeneratedBillingReadingSetListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedBillingReadingSetListLink;


#define emberExiBillingReadingSetListLinkStructDataIndex 328
#define emberExiBillingReadingSetListLinkStructData (emEncoderEvents + emberExiBillingReadingSetListLinkStructDataIndex)
#define emberExiCompareStructBillingReadingSetListLink(x, y) (emExiCompareStructs(emberExiBillingReadingSetListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingReadingSetListLink(theStruct) (emExiStructMemoryFootprint(emberExiBillingReadingSetListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingReadingSetListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingReadingSetListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingReadingSetListLink(EmberExiGeneratedBillingReadingSetListLink *data);

// Converts struct to XML
void emberExiToXmlStructBillingReadingSetListLink(EmberExiGeneratedBillingReadingSetListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of ReadingType.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingTypeLink
#define emberExiStructReadingTypeLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingTypeLink)))

typedef struct _EmberExiGeneratedReadingTypeLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedReadingTypeLink;


#define emberExiReadingTypeLinkStructDataIndex 2422
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
// <xs:documentation>Contains historical, target,
// and projection readings of various types, possibly associated with
// charges.</xs:documentation>
// </xs:annotation>
// Complex type: BillingMeterReadingBase
#define emberExiStructBillingMeterReadingBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingMeterReadingBase)))

typedef struct _EmberExiGeneratedBillingMeterReadingBase {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedBillingReadingSetListLink *BillingReadingSetListLink_option; // pointer to BillingReadingSetListLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink_option; // pointer to ReadingTypeLink structs
} EmberExiGeneratedBillingMeterReadingBase;


#define emberExiBillingMeterReadingBaseStructDataIndex 217
#define emberExiBillingMeterReadingBaseStructData (emEncoderEvents + emberExiBillingMeterReadingBaseStructDataIndex)
#define emberExiCompareStructBillingMeterReadingBase(x, y) (emExiCompareStructs(emberExiBillingMeterReadingBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingMeterReadingBase(theStruct) (emExiStructMemoryFootprint(emberExiBillingMeterReadingBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingMeterReadingBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingMeterReadingBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingMeterReadingBase(EmberExiGeneratedBillingMeterReadingBase *data);

// Converts struct to XML
void emberExiToXmlStructBillingMeterReadingBase(EmberExiGeneratedBillingMeterReadingBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedBillingMeterReadingBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingMeterReadingBase(int8u *stringBuffer, int offset, EmberExiGeneratedBillingMeterReadingBase *data);

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
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedBillingReadingSetListLink *BillingReadingSetListLink_option; // pointer to BillingReadingSetListLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink_option; // pointer to ReadingTypeLink structs
} EmberExiGeneratedProjectionReading;


#define emberExiProjectionReadingStructDataIndex 2224
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u ProjectionReading_count; // number of ProjectionReading structs
  EmberExiGeneratedProjectionReading *ProjectionReading_array; // pointer to ProjectionReading structs
} EmberExiGeneratedProjectionReadingList;


#define emberExiProjectionReadingListStructDataIndex 2230
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
// incorrect data) by backend systems. This includes quality codes valid, verified,
// estimated, and derived / corrected.</xs:documentation>
// </xs:annotation>
// Complex type: HistoricalReading
#define emberExiStructHistoricalReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedHistoricalReading)))

typedef struct _EmberExiGeneratedHistoricalReading {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedBillingReadingSetListLink *BillingReadingSetListLink_option; // pointer to BillingReadingSetListLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink_option; // pointer to ReadingTypeLink structs
} EmberExiGeneratedHistoricalReading;


#define emberExiHistoricalReadingStructDataIndex 1606
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
// <xs:documentation>SHALL contain a Link to an
// instance of DemandResponseProgram.</xs:documentation>
// </xs:annotation>
// Complex type: DemandResponseProgramLink
#define emberExiStructDemandResponseProgramLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDemandResponseProgramLink)))

typedef struct _EmberExiGeneratedDemandResponseProgramLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDemandResponseProgramLink;


#define emberExiDemandResponseProgramLinkStructDataIndex 1030
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
  unsigned int has_availabilityDuration_option:1;
  unsigned int has_sheddablePercent_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt32 availabilityDuration_option; // element
  EmberExiGeneratedDemandResponseProgramLink *DemandResponseProgramLink_option; // pointer to DemandResponseProgramLink structs
  EmberExiGeneratedPerCent sheddablePercent_option; // element
  EmberExiGeneratedActivePower *sheddablePower_option; // pointer to sheddablePower structs
} EmberExiGeneratedLoadShedAvailability;


#define emberExiLoadShedAvailabilityStructDataIndex 1789
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
// <xs:documentation>Character string of max length
// 16. In order to limit internal storage, implementations SHALL reduce the length
// of strings using multi-byte characters so that the string may be stored using
// "maxLength" octets in the given encoding.</xs:documentation>
// </xs:annotation>
// Simple type: String16
typedef EmberExiGeneratedString EmberExiGeneratedString16;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of IPAddr instances.</xs:documentation>
// </xs:annotation>
// Complex type: IPAddrListLink
#define emberExiStructIPAddrListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIPAddrListLink)))

typedef struct _EmberExiGeneratedIPAddrListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedIPAddrListLink;


#define emberExiIPAddrListLinkStructDataIndex 1630
#define emberExiIPAddrListLinkStructData (emEncoderEvents + emberExiIPAddrListLinkStructDataIndex)
#define emberExiCompareStructIPAddrListLink(x, y) (emExiCompareStructs(emberExiIPAddrListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIPAddrListLink(theStruct) (emExiStructMemoryFootprint(emberExiIPAddrListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIPAddrListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIPAddrListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data);

// Converts struct to XML
void emberExiToXmlStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructIPAddrListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddrListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIPAddrListLink(int8u *stringBuffer, int offset, EmberExiGeneratedIPAddrListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specific IPInterface resource.
// This resource may be thought of as network status information for a specific
// network (IP) layer interface.</xs:documentation>
// </xs:annotation>
// Complex type: IPInterface
#define emberExiStructIPInterfaceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIPInterface)))

typedef struct _EmberExiGeneratedIPInterface {
  int16u structType;
  unsigned int has_ifHighSpeed_option:1;
  unsigned int has_ifInBroadcastPkts_option:1;
  unsigned int has_ifIndex_option:1;
  unsigned int has_ifInDiscards_option:1;
  unsigned int has_ifInErrors_option:1;
  unsigned int has_ifInMulticastPkts_option:1;
  unsigned int has_ifInOctets_option:1;
  unsigned int has_ifInUcastPkts_option:1;
  unsigned int has_ifInUnknownProtos_option:1;
  unsigned int has_ifMtu_option:1;
  unsigned int has_ifOperStatus_option:1;
  unsigned int has_ifOutBroadcastPkts_option:1;
  unsigned int has_ifOutDiscards_option:1;
  unsigned int has_ifOutErrors_option:1;
  unsigned int has_ifOutMulticastPkts_option:1;
  unsigned int has_ifOutOctets_option:1;
  unsigned int has_ifOutUcastPkts_option:1;
  unsigned int has_ifPromiscuousMode_option:1;
  unsigned int has_ifSpeed_option:1;
  unsigned int has_ifType_option:1;
  unsigned int has_lastResetTime_option:1;
  unsigned int has_lastUpdatedTime_option:1;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString192 ifDescr_option; // element
  EmberExiGeneratedUInt32 ifHighSpeed_option; // element
  EmberExiGeneratedUInt32 ifInBroadcastPkts_option; // element
  EmberExiGeneratedUInt32 ifIndex_option; // element
  EmberExiGeneratedUInt32 ifInDiscards_option; // element
  EmberExiGeneratedUInt32 ifInErrors_option; // element
  EmberExiGeneratedUInt32 ifInMulticastPkts_option; // element
  EmberExiGeneratedUInt32 ifInOctets_option; // element
  EmberExiGeneratedUInt32 ifInUcastPkts_option; // element
  EmberExiGeneratedUInt32 ifInUnknownProtos_option; // element
  EmberExiGeneratedUInt32 ifMtu_option; // element
  EmberExiGeneratedString16 ifName_option; // element
  EmberExiGeneratedUInt8 ifOperStatus_option; // element
  EmberExiGeneratedUInt32 ifOutBroadcastPkts_option; // element
  EmberExiGeneratedUInt32 ifOutDiscards_option; // element
  EmberExiGeneratedUInt32 ifOutErrors_option; // element
  EmberExiGeneratedUInt32 ifOutMulticastPkts_option; // element
  EmberExiGeneratedUInt32 ifOutOctets_option; // element
  EmberExiGeneratedUInt32 ifOutUcastPkts_option; // element
  EmberExiGeneratedBoolean ifPromiscuousMode_option; // element
  EmberExiGeneratedUInt32 ifSpeed_option; // element
  EmberExiGeneratedUInt16 ifType_option; // element
  EmberExiGeneratedIPAddrListLink *IPAddrListLink_option; // pointer to IPAddrListLink structs
  EmberExiGeneratedInt64 lastResetTime_option; // element
  EmberExiGeneratedInt64 lastUpdatedTime_option; // element
  EmberExiGeneratedLLInterfaceListLink *LLInterfaceListLink_option; // pointer to LLInterfaceListLink structs
} EmberExiGeneratedIPInterface;


#define emberExiIPInterfaceStructDataIndex 1636
#define emberExiIPInterfaceStructData (emEncoderEvents + emberExiIPInterfaceStructDataIndex)
#define emberExiCompareStructIPInterface(x, y) (emExiCompareStructs(emberExiIPInterfaceStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructIPInterface(theStruct) (emExiStructMemoryFootprint(emberExiIPInterfaceStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructIPInterface(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructIPInterface(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructIPInterface(EmberExiGeneratedIPInterface *data);

// Converts struct to XML
void emberExiToXmlStructIPInterface(EmberExiGeneratedIPInterface *data);

// Writes XML to a string
int emberExiXmlSprintfStructIPInterface(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterface *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructIPInterface(int8u *stringBuffer, int offset, EmberExiGeneratedIPInterface *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>List of IPInterface
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: IPInterfaceList
#define emberExiStructIPInterfaceListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedIPInterfaceList)))

typedef struct _EmberExiGeneratedIPInterfaceList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u IPInterface_count; // number of IPInterface structs
  EmberExiGeneratedIPInterface *IPInterface_array; // pointer to IPInterface structs
} EmberExiGeneratedIPInterfaceList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a signed setpoint
// for reactive power.</xs:documentation>
// </xs:annotation>
// Complex type: FixedVAr
#define emberExiStructFixedVArInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFixedVAr)))

typedef struct _EmberExiGeneratedFixedVAr {
  int16u structType;
  EmberExiGeneratedDERUnitRefType refType; // element
  EmberExiGeneratedSignedPerCent value; // element
} EmberExiGeneratedFixedVAr;


#define emberExiFixedVArStructDataIndex 1477
#define emberExiFixedVArStructData (emEncoderEvents + emberExiFixedVArStructDataIndex)
#define emberExiCompareStructFixedVAr(x, y) (emExiCompareStructs(emberExiFixedVArStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFixedVAr(theStruct) (emExiStructMemoryFootprint(emberExiFixedVArStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFixedVAr(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFixedVAr(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFixedVAr(EmberExiGeneratedFixedVAr *data);

// Converts struct to XML
void emberExiToXmlStructFixedVAr(EmberExiGeneratedFixedVAr *data);

// Writes XML to a string
int emberExiXmlSprintfStructFixedVAr(int8u *stringBuffer, int offset, EmberExiGeneratedFixedVAr *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFixedVAr(int8u *stringBuffer, int offset, EmberExiGeneratedFixedVAr *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specifies a pair of
// DERCurves.</xs:documentation>
// </xs:annotation>
// Complex type: CurvePairType
#define emberExiStructCurvePairTypeInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCurvePairType)))

typedef struct _EmberExiGeneratedCurvePairType {
  int16u structType;
  EmberExiGeneratedDERCurveLink *lowerLimit; // pointer to lowerLimit structs
  EmberExiGeneratedDERCurveLink *upperLimit; // pointer to upperLimit structs
} EmberExiGeneratedCurvePairType;


#define emberExiCurvePairTypeStructDataIndex 511
#define emberExiCurvePairTypeStructData (emEncoderEvents + emberExiCurvePairTypeStructDataIndex)
#define emberExiCompareStructCurvePairType(x, y) (emExiCompareStructs(emberExiCurvePairTypeStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCurvePairType(theStruct) (emExiStructMemoryFootprint(emberExiCurvePairTypeStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCurvePairType(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCurvePairType(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCurvePairType(EmberExiGeneratedCurvePairType *data);

// Converts struct to XML
void emberExiToXmlStructCurvePairType(EmberExiGeneratedCurvePairType *data);

// Writes XML to a string
int emberExiXmlSprintfStructCurvePairType(int8u *stringBuffer, int offset, EmberExiGeneratedCurvePairType *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCurvePairType(int8u *stringBuffer, int offset, EmberExiGeneratedCurvePairType *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Distributed Energy Resource
// (DER) control values.</xs:documentation>
// </xs:annotation>
// Complex type: DERControlBase
#define emberExiStructDERControlBaseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERControlBase)))

typedef struct _EmberExiGeneratedDERControlBase {
  int16u structType;
  unsigned int has_opModFixedFlow_option:1;
  unsigned int has_opModFixedW_option:1;
  unsigned int has_rampTms_option:1;
  EmberExiGeneratedSignedPerCent opModFixedFlow_option; // element
  EmberExiGeneratedFixedPowerFactor *opModFixedPF_option; // pointer to opModFixedPF structs
  EmberExiGeneratedFixedVAr *opModFixedVAr_option; // pointer to opModFixedVAr structs
  EmberExiGeneratedPerCent opModFixedW_option; // element
  EmberExiGeneratedDERCurveLink *opModFreqWatt_option; // pointer to opModFreqWatt structs
  EmberExiGeneratedCurvePairType *opModHVRT_option; // pointer to opModHVRT structs
  EmberExiGeneratedCurvePairType *opModLVRT_option; // pointer to opModLVRT structs
  EmberExiGeneratedDERCurveLink *opModVoltVAr_option; // pointer to opModVoltVAr structs
  EmberExiGeneratedDERCurveLink *opModVoltWatt_option; // pointer to opModVoltWatt structs
  EmberExiGeneratedDERCurveLink *opModWattPF_option; // pointer to opModWattPF structs
  EmberExiGeneratedUInt16 rampTms_option; // element
} EmberExiGeneratedDERControlBase;


#define emberExiDERControlBaseStructDataIndex 739
#define emberExiDERControlBaseStructData (emEncoderEvents + emberExiDERControlBaseStructDataIndex)
#define emberExiCompareStructDERControlBase(x, y) (emExiCompareStructs(emberExiDERControlBaseStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERControlBase(theStruct) (emExiStructMemoryFootprint(emberExiDERControlBaseStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERControlBase(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERControlBase(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERControlBase(EmberExiGeneratedDERControlBase *data);

// Converts struct to XML
void emberExiToXmlStructDERControlBase(EmberExiGeneratedDERControlBase *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERControlBase(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlBase *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERControlBase(int8u *stringBuffer, int offset, EmberExiGeneratedDERControlBase *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Distributed Energy Resource
// (DER) time/event-based control.</xs:documentation>
// </xs:annotation>
// Complex type: DERControl
#define emberExiStructDERControlInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERControl)))

typedef struct _EmberExiGeneratedDERControl {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int has_randomizeDuration_option:1;
  unsigned int has_randomizeStart_option:1;
  unsigned int flagPadding:17;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedOneHourRangeType randomizeDuration_option; // element
  EmberExiGeneratedOneHourRangeType randomizeStart_option; // element
  EmberExiGeneratedDERControlBase *DERControlBase; // pointer to DERControlBase structs
} EmberExiGeneratedDERControl;


#define emberExiDERControlStructDataIndex 727
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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u DERControl_count; // number of DERControl structs
  EmberExiGeneratedDERControl *DERControl_array; // pointer to DERControl structs
} EmberExiGeneratedDERControlList;


#define emberExiDERControlListStructDataIndex 802
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
// <xs:documentation>SHALL contain a Link to a List
// of active FlowReservation instances.</xs:documentation>
// </xs:annotation>
// Complex type: ActiveFlowReservationListLink
#define emberExiStructActiveFlowReservationListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedActiveFlowReservationListLink)))

typedef struct _EmberExiGeneratedActiveFlowReservationListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedActiveFlowReservationListLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of ReadingSet instances.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingSetListLink
#define emberExiStructReadingSetListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingSetListLink)))

typedef struct _EmberExiGeneratedReadingSetListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedReadingSetListLink;


#define emberExiReadingSetListLinkStructDataIndex 2416
#define emberExiReadingSetListLinkStructData (emEncoderEvents + emberExiReadingSetListLinkStructDataIndex)
#define emberExiCompareStructReadingSetListLink(x, y) (emExiCompareStructs(emberExiReadingSetListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingSetListLink(theStruct) (emExiStructMemoryFootprint(emberExiReadingSetListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingSetListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingSetListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingSetListLink(EmberExiGeneratedReadingSetListLink *data);

// Converts struct to XML
void emberExiToXmlStructReadingSetListLink(EmberExiGeneratedReadingSetListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingSetListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Pending
// 1 - Approved
// 2 -
// Revoked
// All other values reserved.</xs:documentation>
// </xs:annotation>
// Complex type: ReservationStatusType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedReservationStatusType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Provides definition of
// FlowReservation elements in common between Requests and
// Responses.</xs:documentation>
// </xs:annotation>
// Complex type: AbstractFlowReservation
#define emberExiStructAbstractFlowReservationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAbstractFlowReservation)))

typedef struct _EmberExiGeneratedAbstractFlowReservation {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedUsagePointLink *UsagePointLink_option; // pointer to UsagePointLink structs
} EmberExiGeneratedAbstractFlowReservation;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The server may modify the
// charging or discharging parameters and interval to provide a lower aggregated
// demand at the premises, or within a larger part of the distribution
// system.</xs:documentation>
// </xs:annotation>
// Complex type: FlowReservationResponse
#define emberExiStructFlowReservationResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFlowReservationResponse)))

typedef struct _EmberExiGeneratedFlowReservationResponse {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedUsagePointLink *UsagePointLink_option; // pointer to UsagePointLink structs
  EmberExiGeneratedRealEnergy *energyAvailable; // pointer to energyAvailable structs
  EmberExiGeneratedActivePower *powerAvailable; // pointer to powerAvailable structs
  EmberExiGeneratedReservationStatusType reservationStatus; // element
  EmberExiGeneratedmRIDType subject; // element
} EmberExiGeneratedFlowReservationResponse;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// FlowReservationResponse objects.</xs:documentation>
// </xs:annotation>
// Complex type: FlowReservationResponseList
#define emberExiStructFlowReservationResponseListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFlowReservationResponseList)))

typedef struct _EmberExiGeneratedFlowReservationResponseList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u FlowReservationResponse_count; // number of FlowReservationResponse structs
  EmberExiGeneratedFlowReservationResponse *FlowReservationResponse_array; // pointer to FlowReservationResponse structs
} EmberExiGeneratedFlowReservationResponseList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Average flow of charge through
// a conductor.</xs:documentation>
// </xs:annotation>
// Complex type: CurrentRMS
#define emberExiStructCurrentRMSInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCurrentRMS)))

typedef struct _EmberExiGeneratedCurrentRMS {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedCurrentRMS;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Available electric
// charge</xs:documentation>
// </xs:annotation>
// Complex type: AmpereHour
#define emberExiStructAmpereHourInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAmpereHour)))

typedef struct _EmberExiGeneratedAmpereHour {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedAmpereHour;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The apparent power S (in VA)
// is the product of root mean square (RMS) voltage and RMS
// current.</xs:documentation>
// </xs:annotation>
// Complex type: ApparentPower
#define emberExiStructApparentPowerInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedApparentPower)))

typedef struct _EmberExiGeneratedApparentPower {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedApparentPower;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The reactive power Q (in var)
// is the product of root mean square (RMS) voltage, RMS current, and sin(theta)
// where theta is the phase angle of current relative to
// voltage.</xs:documentation>
// </xs:annotation>
// Complex type: ReactivePower
#define emberExiStructReactivePowerInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReactivePower)))

typedef struct _EmberExiGeneratedReactivePower {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedReactivePower;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Active (real)
// energy</xs:documentation>
// </xs:annotation>
// Complex type: WattHour
#define emberExiStructWattHourInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedWattHour)))

typedef struct _EmberExiGeneratedWattHour {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedWattHour;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - Not applicable / Unknown
// 
// 1 - Virtual or mixed DER 
// 2 - Reciprocating engine 
// 3 - Fuel cell 
// 4 -
// Photovoltaic system 
// 5 - Combined heat and power 
// 80 - Storage (immobile)
// 81 -
// Electric vehicle / EVSE
// 82 - Combined PV and storage
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: DERType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedDERType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Distributed energy resource
// type and nameplate ratings.</xs:documentation>
// </xs:annotation>
// Complex type: DERCapability
#define emberExiStructDERCapabilityInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERCapability)))

typedef struct _EmberExiGeneratedDERCapability {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedDERControlType modesSupported; // element
  EmberExiGeneratedCurrentRMS *rtgA; // pointer to rtgA structs
  EmberExiGeneratedAmpereHour *rtgAh_option; // pointer to rtgAh structs
  EmberExiGeneratedActivePower *rtgMaxChargeRate_option; // pointer to rtgMaxChargeRate structs
  EmberExiGeneratedActivePower *rtgMaxDischargeRate_option; // pointer to rtgMaxDischargeRate structs
  EmberExiGeneratedFixedPointType *rtgMinPF_option; // pointer to rtgMinPF structs
  EmberExiGeneratedFixedPointType *rtgMinPFUnder_option; // pointer to rtgMinPFUnder structs
  EmberExiGeneratedApparentPower *rtgVA_option; // pointer to rtgVA structs
  EmberExiGeneratedReactivePower *rtgVAr_option; // pointer to rtgVAr structs
  EmberExiGeneratedReactivePower *rtgVArNeg_option; // pointer to rtgVArNeg structs
  EmberExiGeneratedActivePower *rtgW; // pointer to rtgW structs
  EmberExiGeneratedWattHour *rtgWh_option; // pointer to rtgWh structs
  EmberExiGeneratedDERType type; // element
} EmberExiGeneratedDERCapability;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Indicates the priority of a
// message:
// 0 - Low
// 1 - Normal
// 2 - High
// 3 - Critical
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: PriorityType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPriorityType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Text message such as a
// notification.</xs:documentation>
// </xs:annotation>
// Complex type: TextMessage
#define emberExiStructTextMessageInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTextMessage)))

typedef struct _EmberExiGeneratedTextMessage {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedString20 originator_option; // element
  EmberExiGeneratedPriorityType priority; // element
  EmberExiGeneratedString textMessage; // element
} EmberExiGeneratedTextMessage;


#define emberExiTextMessageStructDataIndex 2818
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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u TextMessage_count; // number of TextMessage structs
  EmberExiGeneratedTextMessage *TextMessage_array; // pointer to TextMessage structs
} EmberExiGeneratedTextMessageList;


#define emberExiTextMessageListStructDataIndex 2833
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
// <xs:documentation>[RFC 4646] identifier of a
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedLocaleType locale; // element
} EmberExiGeneratedSupportedLocale;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>The Response object is the
// generic response data repository for functions which do not have additional
// specific data (e.g. DRLC has additional data fields (SetPoint) where Price and
// Text event do not).</xs:documentation>
// </xs:annotation>
// Complex type: Response
#define emberExiStructResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponse)))

typedef struct _EmberExiGeneratedResponse {
  int16u structType;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedHexBinary160 endDeviceLFDI; // element
  EmberExiGeneratedUInt8 status_option; // element
  EmberExiGeneratedmRIDType subject; // element
} EmberExiGeneratedResponse;


#define emberExiResponseStructDataIndex 2497
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u Response_count; // number of Response structs
  EmberExiGeneratedResponse *Response_array; // pointer to Response structs
} EmberExiGeneratedResponseList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>List of RPLInstances
// associated with the IPinterface.</xs:documentation>
// </xs:annotation>
// Complex type: RPLInstanceList
#define emberExiStructRPLInstanceListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRPLInstanceList)))

typedef struct _EmberExiGeneratedRPLInstanceList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u RPLInstance_count; // number of RPLInstance structs
  EmberExiGeneratedRPLInstance *RPLInstance_array; // pointer to RPLInstance structs
} EmberExiGeneratedRPLInstanceList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// ServiceSupplier objects.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceSupplierList
#define emberExiStructServiceSupplierListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceSupplierList)))

typedef struct _EmberExiGeneratedServiceSupplierList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u ServiceSupplier_count; // number of ServiceSupplier structs
  EmberExiGeneratedServiceSupplier *ServiceSupplier_array; // pointer to ServiceSupplier structs
} EmberExiGeneratedServiceSupplierList;


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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString subscribedResource; // element
  EmberExiGeneratedCondition *Condition_option; // pointer to Condition structs
  EmberExiGeneratedUInt8 encoding; // element
  EmberExiGeneratedString16 level; // element
  EmberExiGeneratedUInt16 limit; // element
  EmberExiGeneratedString notificationURI; // element
} EmberExiGeneratedSubscription;


#define emberExiSubscriptionStructDataIndex 2626
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
// <xs:documentation>A List element to hold Reading
// objects.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingList
#define emberExiStructReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingList)))

typedef struct _EmberExiGeneratedReadingList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u Reading_count; // number of Reading structs
  EmberExiGeneratedReading *Reading_array; // pointer to Reading structs
} EmberExiGeneratedReadingList;


#define emberExiReadingListStructDataIndex 2362
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
// <xs:documentation>A 64-bit field encoded as a
// hex string (16 hex characters max). Where applicable, bit 0, or the least
// significant bit, goes on the right. Note that hexBinary requires pairs of hex
// characters, so an odd number of characters requires a leading
// "0".</xs:documentation>
// </xs:annotation>
// Simple type: HexBinary64
typedef struct {
  int8u length;
  int8u bytes[8];
} EmberExiGeneratedHexBinary64;



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains information specific
// to 6LoWPAN.</xs:documentation>
// </xs:annotation>
// Complex type: loWPAN
#define emberExiStructloWPANInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedloWPAN)))

typedef struct _EmberExiGeneratedloWPAN {
  int16u structType;
  unsigned int has_octetsRx_option:1;
  unsigned int has_octetsTx_option:1;
  EmberExiGeneratedUInt32 octetsRx_option; // element
  EmberExiGeneratedUInt32 octetsTx_option; // element
  EmberExiGeneratedUInt32 packetsRx; // element
  EmberExiGeneratedUInt32 packetsTx; // element
  EmberExiGeneratedUInt32 rxFragError; // element
} EmberExiGeneratedloWPAN;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A link-layer interface
// object.</xs:documentation>
// </xs:annotation>
// Complex type: LLInterface
#define emberExiStructLLInterfaceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLLInterface)))

typedef struct _EmberExiGeneratedLLInterface {
  int16u structType;
  unsigned int has_LLAckNotRx_option:1;
  unsigned int has_LLCSMAFail_option:1;
  unsigned int has_LLFramesDropRx_option:1;
  unsigned int has_LLFramesDropTx_option:1;
  unsigned int has_LLFramesRx_option:1;
  unsigned int has_LLFramesTx_option:1;
  unsigned int has_LLMediaAccessFail_option:1;
  unsigned int has_LLOctetsRx_option:1;
  unsigned int has_LLOctetsTx_option:1;
  unsigned int has_LLRetryCount_option:1;
  unsigned int has_LLSecurityErrorRx_option:1;
  unsigned int flagPadding:11;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt32 CRCerrors; // element
  EmberExiGeneratedHexBinary64 EUI64; // element
  EmberExiGeneratedIEEE_802_15_4 *IEEE_802_15_4_option; // pointer to IEEE_802_15_4 structs
  EmberExiGeneratedUInt8 linkLayerType; // element
  EmberExiGeneratedUInt32 LLAckNotRx_option; // element
  EmberExiGeneratedUInt32 LLCSMAFail_option; // element
  EmberExiGeneratedUInt32 LLFramesDropRx_option; // element
  EmberExiGeneratedUInt32 LLFramesDropTx_option; // element
  EmberExiGeneratedUInt32 LLFramesRx_option; // element
  EmberExiGeneratedUInt32 LLFramesTx_option; // element
  EmberExiGeneratedUInt32 LLMediaAccessFail_option; // element
  EmberExiGeneratedUInt32 LLOctetsRx_option; // element
  EmberExiGeneratedUInt32 LLOctetsTx_option; // element
  EmberExiGeneratedUInt32 LLRetryCount_option; // element
  EmberExiGeneratedUInt32 LLSecurityErrorRx_option; // element
  EmberExiGeneratedloWPAN *loWPAN_option; // pointer to loWPAN structs
} EmberExiGeneratedLLInterface;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of FlowReservationRequest instances.</xs:documentation>
// </xs:annotation>
// Complex type: FlowReservationRequestListLink
#define emberExiStructFlowReservationRequestListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFlowReservationRequestListLink)))

typedef struct _EmberExiGeneratedFlowReservationRequestListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedFlowReservationRequestListLink;


#define emberExiFlowReservationRequestListLinkStructDataIndex 1489
#define emberExiFlowReservationRequestListLinkStructData (emEncoderEvents + emberExiFlowReservationRequestListLinkStructDataIndex)
#define emberExiCompareStructFlowReservationRequestListLink(x, y) (emExiCompareStructs(emberExiFlowReservationRequestListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFlowReservationRequestListLink(theStruct) (emExiStructMemoryFootprint(emberExiFlowReservationRequestListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFlowReservationRequestListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFlowReservationRequestListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data);

// Converts struct to XML
void emberExiToXmlStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructFlowReservationRequestListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequestListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFlowReservationRequestListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationRequestListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of FlowReservationResponse instances.</xs:documentation>
// </xs:annotation>
// Complex type: FlowReservationResponseListLink
#define emberExiStructFlowReservationResponseListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFlowReservationResponseListLink)))

typedef struct _EmberExiGeneratedFlowReservationResponseListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedFlowReservationResponseListLink;


#define emberExiFlowReservationResponseListLinkStructDataIndex 1495
#define emberExiFlowReservationResponseListLinkStructData (emEncoderEvents + emberExiFlowReservationResponseListLinkStructDataIndex)
#define emberExiCompareStructFlowReservationResponseListLink(x, y) (emExiCompareStructs(emberExiFlowReservationResponseListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFlowReservationResponseListLink(theStruct) (emExiStructMemoryFootprint(emberExiFlowReservationResponseListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFlowReservationResponseListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFlowReservationResponseListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data);

// Converts struct to XML
void emberExiToXmlStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructFlowReservationResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponseListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFlowReservationResponseListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFlowReservationResponseListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of FunctionSetAssignments instances.</xs:documentation>
// </xs:annotation>
// Complex type: FunctionSetAssignmentsListLink
#define emberExiStructFunctionSetAssignmentsListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFunctionSetAssignmentsListLink)))

typedef struct _EmberExiGeneratedFunctionSetAssignmentsListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedFunctionSetAssignmentsListLink;


#define emberExiFunctionSetAssignmentsListLinkStructDataIndex 1600
#define emberExiFunctionSetAssignmentsListLinkStructData (emEncoderEvents + emberExiFunctionSetAssignmentsListLinkStructDataIndex)
#define emberExiCompareStructFunctionSetAssignmentsListLink(x, y) (emExiCompareStructs(emberExiFunctionSetAssignmentsListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFunctionSetAssignmentsListLink(theStruct) (emExiStructMemoryFootprint(emberExiFunctionSetAssignmentsListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFunctionSetAssignmentsListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFunctionSetAssignmentsListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data);

// Converts struct to XML
void emberExiToXmlStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructFunctionSetAssignmentsListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsListLink(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of Registration.</xs:documentation>
// </xs:annotation>
// Complex type: RegistrationLink
#define emberExiStructRegistrationLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRegistrationLink)))

typedef struct _EmberExiGeneratedRegistrationLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedRegistrationLink;


#define emberExiRegistrationLinkStructDataIndex 2440
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
// <xs:documentation>SHALL contain a Link to a List
// of Subscription instances.</xs:documentation>
// </xs:annotation>
// Complex type: SubscriptionListLink
#define emberExiStructSubscriptionListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscriptionListLink)))

typedef struct _EmberExiGeneratedSubscriptionListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedSubscriptionListLink;


#define emberExiSubscriptionListLinkStructDataIndex 2671
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
// electricity).</xs:documentation>
// </xs:annotation>
// Complex type: EndDevice
#define emberExiStructEndDeviceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDevice)))

typedef struct _EmberExiGeneratedEndDevice {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_loadShedDeviceCategory_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedConfigurationLink *ConfigurationLink_option; // pointer to ConfigurationLink structs
  EmberExiGeneratedDERListLink *DERListLink_option; // pointer to DERListLink structs
  EmberExiGeneratedDeviceInformationLink *DeviceInformationLink_option; // pointer to DeviceInformationLink structs
  EmberExiGeneratedDeviceStatusLink *DeviceStatusLink_option; // pointer to DeviceStatusLink structs
  EmberExiGeneratedFileStatusLink *FileStatusLink_option; // pointer to FileStatusLink structs
  EmberExiGeneratedIPInterfaceListLink *IPInterfaceListLink_option; // pointer to IPInterfaceListLink structs
  EmberExiGeneratedLoadShedAvailabilityLink *LoadShedAvailabilityLink_option; // pointer to LoadShedAvailabilityLink structs
  EmberExiGeneratedDeviceCategoryType loadShedDeviceCategory_option; // element
  EmberExiGeneratedLogEventListLink *LogEventListLink_option; // pointer to LogEventListLink structs
  EmberExiGeneratedPowerStatusLink *PowerStatusLink_option; // pointer to PowerStatusLink structs
  EmberExiGeneratedSFDIType sFDI; // element
  EmberExiGeneratedFlowReservationRequestListLink *FlowReservationRequestListLink_option; // pointer to FlowReservationRequestListLink structs
  EmberExiGeneratedFlowReservationResponseListLink *FlowReservationResponseListLink_option; // pointer to FlowReservationResponseListLink structs
  EmberExiGeneratedFunctionSetAssignmentsListLink *FunctionSetAssignmentsListLink_option; // pointer to FunctionSetAssignmentsListLink structs
  EmberExiGeneratedRegistrationLink *RegistrationLink_option; // pointer to RegistrationLink structs
  EmberExiGeneratedSubscriptionListLink *SubscriptionListLink_option; // pointer to SubscriptionListLink structs
} EmberExiGeneratedEndDevice;


#define emberExiEndDeviceStructDataIndex 1222
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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u EndDevice_count; // number of EndDevice structs
  EmberExiGeneratedEndDevice *EndDevice_array; // pointer to EndDevice structs
} EmberExiGeneratedEndDeviceList;


#define emberExiEndDeviceListStructDataIndex 1324
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u SupplyInterruptionOverride_count; // number of SupplyInterruptionOverride structs
  EmberExiGeneratedSupplyInterruptionOverride *SupplyInterruptionOverride_array; // pointer to SupplyInterruptionOverride structs
} EmberExiGeneratedSupplyInterruptionOverrideList;


#define emberExiSupplyInterruptionOverrideListStructDataIndex 2692
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
// <xs:documentation>SHALL contain a Link to a List
// of CustomerAgreement instances.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAgreementListLink
#define emberExiStructCustomerAgreementListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAgreementListLink)))

typedef struct _EmberExiGeneratedCustomerAgreementListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedCustomerAgreementListLink;


#define emberExiCustomerAgreementListLinkStructDataIndex 661
#define emberExiCustomerAgreementListLinkStructData (emEncoderEvents + emberExiCustomerAgreementListLinkStructDataIndex)
#define emberExiCompareStructCustomerAgreementListLink(x, y) (emExiCompareStructs(emberExiCustomerAgreementListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCustomerAgreementListLink(theStruct) (emExiStructMemoryFootprint(emberExiCustomerAgreementListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCustomerAgreementListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCustomerAgreementListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCustomerAgreementListLink(EmberExiGeneratedCustomerAgreementListLink *data);

// Converts struct to XML
void emberExiToXmlStructCustomerAgreementListLink(EmberExiGeneratedCustomerAgreementListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructCustomerAgreementListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCustomerAgreementListLink(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of ServiceSupplier.</xs:documentation>
// </xs:annotation>
// Complex type: ServiceSupplierLink
#define emberExiStructServiceSupplierLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedServiceSupplierLink)))

typedef struct _EmberExiGeneratedServiceSupplierLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedServiceSupplierLink;


#define emberExiServiceSupplierLinkStructDataIndex 2563
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
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedUInt16 currency; // element
  EmberExiGeneratedString42 customerAccount_option; // element
  EmberExiGeneratedCustomerAgreementListLink *CustomerAgreementListLink_option; // pointer to CustomerAgreementListLink structs
  EmberExiGeneratedString42 customerName_option; // element
  EmberExiGeneratedPowerOfTenMultiplierType pricePowerOfTenMultiplier; // element
  EmberExiGeneratedServiceSupplierLink *ServiceSupplierLink_option; // pointer to ServiceSupplierLink structs
} EmberExiGeneratedCustomerAccount;


#define emberExiCustomerAccountStructDataIndex 529
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
// CustomerAccount objects.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAccountList
#define emberExiStructCustomerAccountListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAccountList)))

typedef struct _EmberExiGeneratedCustomerAccountList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u CustomerAccount_count; // number of CustomerAccount structs
  EmberExiGeneratedCustomerAccount *CustomerAccount_array; // pointer to CustomerAccount structs
} EmberExiGeneratedCustomerAccountList;


#define emberExiCustomerAccountListStructDataIndex 559
#define emberExiCustomerAccountListStructData (emEncoderEvents + emberExiCustomerAccountListStructDataIndex)
#define emberExiCompareStructCustomerAccountList(x, y) (emExiCompareStructs(emberExiCustomerAccountListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCustomerAccountList(theStruct) (emExiStructMemoryFootprint(emberExiCustomerAccountListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCustomerAccountList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCustomerAccountList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCustomerAccountList(EmberExiGeneratedCustomerAccountList *data);

// Converts struct to XML
void emberExiToXmlStructCustomerAccountList(EmberExiGeneratedCustomerAccountList *data);

// Writes XML to a string
int emberExiXmlSprintfStructCustomerAccountList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCustomerAccountList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAccountList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// CustomerAgreement objects.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAgreementList
#define emberExiStructCustomerAgreementListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAgreementList)))

typedef struct _EmberExiGeneratedCustomerAgreementList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u CustomerAgreement_count; // number of CustomerAgreement structs
  EmberExiGeneratedCustomerAgreement *CustomerAgreement_array; // pointer to CustomerAgreement structs
} EmberExiGeneratedCustomerAgreementList;


#define emberExiCustomerAgreementListStructDataIndex 649
#define emberExiCustomerAgreementListStructData (emEncoderEvents + emberExiCustomerAgreementListStructDataIndex)
#define emberExiCompareStructCustomerAgreementList(x, y) (emExiCompareStructs(emberExiCustomerAgreementListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructCustomerAgreementList(theStruct) (emExiStructMemoryFootprint(emberExiCustomerAgreementListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructCustomerAgreementList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructCustomerAgreementList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructCustomerAgreementList(EmberExiGeneratedCustomerAgreementList *data);

// Converts struct to XML
void emberExiToXmlStructCustomerAgreementList(EmberExiGeneratedCustomerAgreementList *data);

// Writes XML to a string
int emberExiXmlSprintfStructCustomerAgreementList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructCustomerAgreementList(int8u *stringBuffer, int offset, EmberExiGeneratedCustomerAgreementList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of TimeTariffInterval instances.</xs:documentation>
// </xs:annotation>
// Complex type: TimeTariffIntervalListLink
#define emberExiStructTimeTariffIntervalListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTimeTariffIntervalListLink)))

typedef struct _EmberExiGeneratedTimeTariffIntervalListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedTimeTariffIntervalListLink;


#define emberExiTimeTariffIntervalListLinkStructDataIndex 2935
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
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedActiveTimeTariffIntervalListLink *ActiveTimeTariffIntervalListLink_option; // pointer to ActiveTimeTariffIntervalListLink structs
  EmberExiGeneratedUnitValueType *flowRateEndLimit_option; // pointer to flowRateEndLimit structs
  EmberExiGeneratedUnitValueType *flowRateStartLimit_option; // pointer to flowRateStartLimit structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
  EmberExiGeneratedRoleFlagsType roleFlags; // element
  EmberExiGeneratedTimeTariffIntervalListLink *TimeTariffIntervalListLink_option; // pointer to TimeTariffIntervalListLink structs
} EmberExiGeneratedRateComponent;


#define emberExiRateComponentStructDataIndex 2260
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u RateComponent_count; // number of RateComponent structs
  EmberExiGeneratedRateComponent *RateComponent_array; // pointer to RateComponent structs
} EmberExiGeneratedRateComponentList;


#define emberExiRateComponentListStructDataIndex 2299
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
// <xs:documentation>0 - Carbon Dioxide emissions,
// in grams per unit
// 1 - Sulfur Dioxide emissions, in grams per unit
// 2 - Nitrogen
// Oxides emissions, in grams per unit
// 3 - Renewable generation, as a percentage of
// overall generation
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: CostKindType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedCostKindType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of PriceResponseCfg instances.</xs:documentation>
// </xs:annotation>
// Complex type: PriceResponseCfgListLink
#define emberExiStructPriceResponseCfgListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPriceResponseCfgListLink)))

typedef struct _EmberExiGeneratedPriceResponseCfgListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedPriceResponseCfgListLink;


#define emberExiPriceResponseCfgListLinkStructDataIndex 2218
#define emberExiPriceResponseCfgListLinkStructData (emEncoderEvents + emberExiPriceResponseCfgListLinkStructDataIndex)
#define emberExiCompareStructPriceResponseCfgListLink(x, y) (emExiCompareStructs(emberExiPriceResponseCfgListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPriceResponseCfgListLink(theStruct) (emExiStructMemoryFootprint(emberExiPriceResponseCfgListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPriceResponseCfgListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPriceResponseCfgListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data);

// Converts struct to XML
void emberExiToXmlStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructPriceResponseCfgListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfgListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPriceResponseCfgListLink(int8u *stringBuffer, int offset, EmberExiGeneratedPriceResponseCfgListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Provides alternative or
// secondary price information for the relevant RateComponent. Supports
// jurisdictions that seek to convey the environmental price per unit of the
// specified commodity not expressed in currency.
// 
// Implementers and consumers can
// use this attribute to prioritize operations of their HAN devices (e.g., PEV
// charging during times of high availability of renewable electricity
// resources).</xs:documentation>
// </xs:annotation>
// Complex type: EnvironmentalCost
#define emberExiStructEnvironmentalCostInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEnvironmentalCost)))

typedef struct _EmberExiGeneratedEnvironmentalCost {
  int16u structType;
  EmberExiGeneratedUInt32 amount; // element
  EmberExiGeneratedCostKindType costKind; // element
  EmberExiGeneratedUInt8 costLevel; // element
  EmberExiGeneratedUInt8 numCostLevels; // element
} EmberExiGeneratedEnvironmentalCost;


#define emberExiEnvironmentalCostStructDataIndex 1342
#define emberExiEnvironmentalCostStructData (emEncoderEvents + emberExiEnvironmentalCostStructDataIndex)
#define emberExiCompareStructEnvironmentalCost(x, y) (emExiCompareStructs(emberExiEnvironmentalCostStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructEnvironmentalCost(theStruct) (emExiStructMemoryFootprint(emberExiEnvironmentalCostStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructEnvironmentalCost(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructEnvironmentalCost(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructEnvironmentalCost(EmberExiGeneratedEnvironmentalCost *data);

// Converts struct to XML
void emberExiToXmlStructEnvironmentalCost(EmberExiGeneratedEnvironmentalCost *data);

// Writes XML to a string
int emberExiXmlSprintfStructEnvironmentalCost(int8u *stringBuffer, int offset, EmberExiGeneratedEnvironmentalCost *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructEnvironmentalCost(int8u *stringBuffer, int offset, EmberExiGeneratedEnvironmentalCost *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>One of a sequence of
// thresholds defined in terms of consumption quantity of a service such as
// electricity, water, gas, etc. It defines the steps or blocks in a step tariff
// structure, where startValue simultaneously defines the entry value of this step
// and the closing value of the previous step. Where consumption is greater than
// startValue, it falls within this block and where consumption is less than or
// equal to startValue, it falls within one of the previous
// blocks.</xs:documentation>
// </xs:annotation>
// Complex type: ConsumptionTariffInterval
#define emberExiStructConsumptionTariffIntervalInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConsumptionTariffInterval)))

typedef struct _EmberExiGeneratedConsumptionTariffInterval {
  int16u structType;
  unsigned int has_price_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedConsumptionBlockType consumptionBlock; // element
  int8u EnvironmentalCost_count; // number of EnvironmentalCost structs
  EmberExiGeneratedEnvironmentalCost *EnvironmentalCost_array; // pointer to EnvironmentalCost structs
  EmberExiGeneratedInt32 price_option; // element
  EmberExiGeneratedUInt48 startValue; // element
} EmberExiGeneratedConsumptionTariffInterval;


#define emberExiConsumptionTariffIntervalStructDataIndex 400
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
// <xs:documentation>A List element to hold
// ConsumptionTariffInterval objects.</xs:documentation>
// </xs:annotation>
// Complex type: ConsumptionTariffIntervalList
#define emberExiStructConsumptionTariffIntervalListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedConsumptionTariffIntervalList)))

typedef struct _EmberExiGeneratedConsumptionTariffIntervalList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u ConsumptionTariffInterval_count; // number of ConsumptionTariffInterval structs
  EmberExiGeneratedConsumptionTariffInterval *ConsumptionTariffInterval_array; // pointer to ConsumptionTariffInterval structs
} EmberExiGeneratedConsumptionTariffIntervalList;


#define emberExiConsumptionTariffIntervalListStructDataIndex 421
#define emberExiConsumptionTariffIntervalListStructData (emEncoderEvents + emberExiConsumptionTariffIntervalListStructDataIndex)
#define emberExiCompareStructConsumptionTariffIntervalList(x, y) (emExiCompareStructs(emberExiConsumptionTariffIntervalListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructConsumptionTariffIntervalList(theStruct) (emExiStructMemoryFootprint(emberExiConsumptionTariffIntervalListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructConsumptionTariffIntervalList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructConsumptionTariffIntervalList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructConsumptionTariffIntervalList(EmberExiGeneratedConsumptionTariffIntervalList *data);

// Converts struct to XML
void emberExiToXmlStructConsumptionTariffIntervalList(EmberExiGeneratedConsumptionTariffIntervalList *data);

// Writes XML to a string
int emberExiXmlSprintfStructConsumptionTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructConsumptionTariffIntervalList(int8u *stringBuffer, int offset, EmberExiGeneratedConsumptionTariffIntervalList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of RateComponent.</xs:documentation>
// </xs:annotation>
// Complex type: RateComponentLink
#define emberExiStructRateComponentLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRateComponentLink)))

typedef struct _EmberExiGeneratedRateComponentLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedRateComponentLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Configuration data that
// specifies how price responsive devices SHOULD respond to price changes while
// acting upon a given RateComponent.</xs:documentation>
// </xs:annotation>
// Complex type: PriceResponseCfg
#define emberExiStructPriceResponseCfgInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPriceResponseCfg)))

typedef struct _EmberExiGeneratedPriceResponseCfg {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedInt32 consumeThreshold; // element
  EmberExiGeneratedInt32 maxReductionThreshold; // element
  EmberExiGeneratedRateComponentLink *RateComponentLink; // pointer to RateComponentLink structs
} EmberExiGeneratedPriceResponseCfg;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An IdentifiedObject to which a
// Subscription can be requested.</xs:documentation>
// </xs:annotation>
// Complex type: SubscribableIdentifiedObject
#define emberExiStructSubscribableIdentifiedObjectInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSubscribableIdentifiedObject)))

typedef struct _EmberExiGeneratedSubscribableIdentifiedObject {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
} EmberExiGeneratedSubscribableIdentifiedObject;


#define emberExiSubscribableIdentifiedObjectStructDataIndex 2581
#define emberExiSubscribableIdentifiedObjectStructData (emEncoderEvents + emberExiSubscribableIdentifiedObjectStructDataIndex)
#define emberExiCompareStructSubscribableIdentifiedObject(x, y) (emExiCompareStructs(emberExiSubscribableIdentifiedObjectStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructSubscribableIdentifiedObject(theStruct) (emExiStructMemoryFootprint(emberExiSubscribableIdentifiedObjectStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructSubscribableIdentifiedObject(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructSubscribableIdentifiedObject(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data);

// Converts struct to XML
void emberExiToXmlStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data);

// Writes XML to a string
int emberExiXmlSprintfStructSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableIdentifiedObject *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructSubscribableIdentifiedObject(int8u *stringBuffer, int offset, EmberExiGeneratedSubscribableIdentifiedObject *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>List or RPL source routes if
// the hosting device is the DODAGroot</xs:documentation>
// </xs:annotation>
// Complex type: RPLSourceRoutesList
#define emberExiStructRPLSourceRoutesListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRPLSourceRoutesList)))

typedef struct _EmberExiGeneratedRPLSourceRoutesList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u RPLSourceRoutes_count; // number of RPLSourceRoutes structs
  EmberExiGeneratedRPLSourceRoutes *RPLSourceRoutes_array; // pointer to RPLSourceRoutes structs
} EmberExiGeneratedRPLSourceRoutesList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of BillingReading instances.</xs:documentation>
// </xs:annotation>
// Complex type: BillingReadingListLink
#define emberExiStructBillingReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingReadingListLink)))

typedef struct _EmberExiGeneratedBillingReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedBillingReadingListLink;


#define emberExiBillingReadingListLinkStructDataIndex 298
#define emberExiBillingReadingListLinkStructData (emEncoderEvents + emberExiBillingReadingListLinkStructDataIndex)
#define emberExiCompareStructBillingReadingListLink(x, y) (emExiCompareStructs(emberExiBillingReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiBillingReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingReadingListLink(EmberExiGeneratedBillingReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructBillingReadingListLink(EmberExiGeneratedBillingReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Time sequence of readings of
// the same reading type.</xs:documentation>
// </xs:annotation>
// Complex type: BillingReadingSet
#define emberExiStructBillingReadingSetInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingReadingSet)))

typedef struct _EmberExiGeneratedBillingReadingSet {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedDateTimeInterval *timePeriod; // pointer to timePeriod structs
  EmberExiGeneratedBillingReadingListLink *BillingReadingListLink_option; // pointer to BillingReadingListLink structs
} EmberExiGeneratedBillingReadingSet;


#define emberExiBillingReadingSetStructDataIndex 304
#define emberExiBillingReadingSetStructData (emEncoderEvents + emberExiBillingReadingSetStructDataIndex)
#define emberExiCompareStructBillingReadingSet(x, y) (emExiCompareStructs(emberExiBillingReadingSetStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingReadingSet(theStruct) (emExiStructMemoryFootprint(emberExiBillingReadingSetStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingReadingSet(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingReadingSet(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingReadingSet(EmberExiGeneratedBillingReadingSet *data);

// Converts struct to XML
void emberExiToXmlStructBillingReadingSet(EmberExiGeneratedBillingReadingSet *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSet *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSet *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>This resource contains various
// meta-data describing a file's characteristics.  The meta-data provides general
// file information and also is used to support filtered queries of file
// lists</xs:documentation>
// </xs:annotation>
// Complex type: File
#define emberExiStructFileInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFile)))

typedef struct _EmberExiGeneratedFile {
  int16u structType;
  unsigned int has_activateTime_option:1;
  unsigned int has_lFDI_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType activateTime_option; // element
  EmberExiGeneratedString fileURI; // element
  EmberExiGeneratedHexBinary160 lFDI_option; // element
  EmberExiGeneratedString32 mfHwVer_option; // element
  EmberExiGeneratedPENType mfID; // element
  EmberExiGeneratedString32 mfModel; // element
  EmberExiGeneratedString32 mfSerNum_option; // element
  EmberExiGeneratedString16 mfVer; // element
  EmberExiGeneratedUInt32 size; // element
  EmberExiGeneratedHexBinary16 type; // element
} EmberExiGeneratedFile;


#define emberExiFileStructDataIndex 1402
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
// <xs:documentation>A schedule of charges;
// structure that allows the definition of tariff structures such as step (block)
// and time of use (tier) when used in conjunction with TimeTariffInterval and
// ConsumptionTariffInterval.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfile
#define emberExiStructTariffProfileInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfile)))

typedef struct _EmberExiGeneratedTariffProfile {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int has_currency_option:1;
  unsigned int has_pricePowerOfTenMultiplier_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedCurrencyCode currency_option; // element
  EmberExiGeneratedPowerOfTenMultiplierType pricePowerOfTenMultiplier_option; // element
  EmberExiGeneratedPrimacyType primacy; // element
  EmberExiGeneratedString20 rateCode_option; // element
  EmberExiGeneratedRateComponentListLink *RateComponentListLink_option; // pointer to RateComponentListLink structs
  EmberExiGeneratedServiceKind serviceCategoryKind; // element
} EmberExiGeneratedTariffProfile;


#define emberExiTariffProfileStructDataIndex 2752
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
// <xs:documentation>SHALL contain a Link to a List
// of Reading instances.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingListLink
#define emberExiStructReadingListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingListLink)))

typedef struct _EmberExiGeneratedReadingListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedReadingListLink;


#define emberExiReadingListLinkStructDataIndex 2374
#define emberExiReadingListLinkStructData (emEncoderEvents + emberExiReadingListLinkStructDataIndex)
#define emberExiCompareStructReadingListLink(x, y) (emExiCompareStructs(emberExiReadingListLinkStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingListLink(theStruct) (emExiStructMemoryFootprint(emberExiReadingListLinkStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingListLink(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingListLink(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingListLink(EmberExiGeneratedReadingListLink *data);

// Converts struct to XML
void emberExiToXmlStructReadingListLink(EmberExiGeneratedReadingListLink *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingListLink *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingListLink(int8u *stringBuffer, int offset, EmberExiGeneratedReadingListLink *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A set of Readings of the
// ReadingType indicated by the parent
// MeterReading.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingSet
#define emberExiStructReadingSetInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingSet)))

typedef struct _EmberExiGeneratedReadingSet {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedDateTimeInterval *timePeriod; // pointer to timePeriod structs
  EmberExiGeneratedReadingListLink *ReadingListLink_option; // pointer to ReadingListLink structs
} EmberExiGeneratedReadingSet;


#define emberExiReadingSetStructDataIndex 2380
#define emberExiReadingSetStructData (emEncoderEvents + emberExiReadingSetStructDataIndex)
#define emberExiCompareStructReadingSet(x, y) (emExiCompareStructs(emberExiReadingSetStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingSet(theStruct) (emExiStructMemoryFootprint(emberExiReadingSetStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingSet(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingSet(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingSet(EmberExiGeneratedReadingSet *data);

// Converts struct to XML
void emberExiToXmlStructReadingSet(EmberExiGeneratedReadingSet *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSet *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingSet(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSet *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// ReadingSet objects.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingSetList
#define emberExiStructReadingSetListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingSetList)))

typedef struct _EmberExiGeneratedReadingSetList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u ReadingSet_count; // number of ReadingSet structs
  EmberExiGeneratedReadingSet *ReadingSet_array; // pointer to ReadingSet structs
} EmberExiGeneratedReadingSetList;


#define emberExiReadingSetListStructDataIndex 2404
#define emberExiReadingSetListStructData (emEncoderEvents + emberExiReadingSetListStructDataIndex)
#define emberExiCompareStructReadingSetList(x, y) (emExiCompareStructs(emberExiReadingSetListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructReadingSetList(theStruct) (emExiStructMemoryFootprint(emberExiReadingSetListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructReadingSetList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructReadingSetList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructReadingSetList(EmberExiGeneratedReadingSetList *data);

// Converts struct to XML
void emberExiToXmlStructReadingSetList(EmberExiGeneratedReadingSetList *data);

// Writes XML to a string
int emberExiXmlSprintfStructReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedReadingSetList *data);

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
  unsigned int has_batteryInstallTime_option:1;
  unsigned int has_lowChargeThreshold_option:1;
  EmberExiGeneratedTimeType batteryInstallTime_option; // element
  EmberExiGeneratedUInt32 lowChargeThreshold_option; // element
} EmberExiGeneratedPowerConfiguration;


#define emberExiPowerConfigurationStructDataIndex 2038
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
// Complex type: DstRuleType
typedef EmberExiGeneratedHexBinary32 EmberExiGeneratedDstRuleType; // based-on HexBinary32



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


#define emberExiTimeConfigurationStructDataIndex 2884
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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedLocaleType currentLocale; // element
  EmberExiGeneratedPowerConfiguration *PowerConfiguration_option; // pointer to PowerConfiguration structs
  EmberExiGeneratedPriceResponseCfgListLink *PriceResponseCfgListLink_option; // pointer to PriceResponseCfgListLink structs
  EmberExiGeneratedTimeConfiguration *TimeConfiguration_option; // pointer to TimeConfiguration structs
  EmberExiGeneratedString32 userDeviceName; // element
} EmberExiGeneratedConfiguration;


#define emberExiConfigurationStructDataIndex 364
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
// <xs:documentation>Specifies the value of the
// TargetReduction applied by the device.</xs:documentation>
// </xs:annotation>
// Complex type: AppliedTargetReduction
#define emberExiStructAppliedTargetReductionInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAppliedTargetReduction)))

typedef struct _EmberExiGeneratedAppliedTargetReduction {
  int16u structType;
  EmberExiGeneratedUnitType type; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedAppliedTargetReduction;


#define emberExiAppliedTargetReductionStructDataIndex 193
#define emberExiAppliedTargetReductionStructData (emEncoderEvents + emberExiAppliedTargetReductionStructDataIndex)
#define emberExiCompareStructAppliedTargetReduction(x, y) (emExiCompareStructs(emberExiAppliedTargetReductionStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructAppliedTargetReduction(theStruct) (emExiStructMemoryFootprint(emberExiAppliedTargetReductionStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructAppliedTargetReduction(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructAppliedTargetReduction(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data);

// Converts struct to XML
void emberExiToXmlStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data);

// Writes XML to a string
int emberExiXmlSprintfStructAppliedTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedAppliedTargetReduction *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructAppliedTargetReduction(int8u *stringBuffer, int offset, EmberExiGeneratedAppliedTargetReduction *data);

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
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int has_overrideDuration_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedHexBinary160 endDeviceLFDI; // element
  EmberExiGeneratedUInt8 status_option; // element
  EmberExiGeneratedmRIDType subject; // element
  EmberExiGeneratedApplianceLoadReduction *ApplianceLoadReduction_option; // pointer to ApplianceLoadReduction structs
  EmberExiGeneratedAppliedTargetReduction *AppliedTargetReduction_option; // pointer to AppliedTargetReduction structs
  EmberExiGeneratedDutyCycle *DutyCycle_option; // pointer to DutyCycle structs
  EmberExiGeneratedOffset *Offset_option; // pointer to Offset structs
  EmberExiGeneratedUInt16 overrideDuration_option; // element
  EmberExiGeneratedSetPoint *SetPoint_option; // pointer to SetPoint structs
} EmberExiGeneratedDrResponse;


#define emberExiDrResponseStructDataIndex 1174
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
// <xs:documentation>6 digit unsigned decimal
// integer (0 - 999999). 
// (Note that this only requires 20 bits, if it can be
// allocated.)</xs:documentation>
// </xs:annotation>
// Complex type: PINType
typedef EmberExiGeneratedUInt32 EmberExiGeneratedPINType; // based-on UInt32



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of TextMessage instances.</xs:documentation>
// </xs:annotation>
// Complex type: TextMessageListLink
#define emberExiStructTextMessageListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTextMessageListLink)))

typedef struct _EmberExiGeneratedTextMessageListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedTextMessageListLink;


#define emberExiTextMessageListLinkStructDataIndex 2845
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
// <xs:documentation>SHALL contain a Link to an
// instance of DeviceCapability.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceCapabilityLink
#define emberExiStructDeviceCapabilityLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceCapabilityLink)))

typedef struct _EmberExiGeneratedDeviceCapabilityLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedDeviceCapabilityLink;


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
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedBillingReadingSetListLink *BillingReadingSetListLink_option; // pointer to BillingReadingSetListLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink_option; // pointer to ReadingTypeLink structs
} EmberExiGeneratedTargetReading;


#define emberExiTargetReadingStructDataIndex 2716
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u TargetReading_count; // number of TargetReading structs
  EmberExiGeneratedTargetReading *TargetReading_array; // pointer to TargetReading structs
} EmberExiGeneratedTargetReadingList;


#define emberExiTargetReadingListStructDataIndex 2722
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
// <xs:documentation>Contains information about the
// static capabilities of the device, to allow service providers to know what types
// of functions are supported, what the normal operating ranges and limits are, and
// other similar information, in order to provide better suggestions of applicable
// programs to receive the maximum benefit.</xs:documentation>
// </xs:annotation>
// Complex type: DRLCCapabilities
#define emberExiStructDRLCCapabilitiesInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDRLCCapabilities)))

typedef struct _EmberExiGeneratedDRLCCapabilities {
  int16u structType;
  EmberExiGeneratedRealEnergy *averageEnergy; // pointer to averageEnergy structs
  EmberExiGeneratedActivePower *maxDemand; // pointer to maxDemand structs
  EmberExiGeneratedHexBinary32 optionsImplemented; // element
} EmberExiGeneratedDRLCCapabilities;


#define emberExiDRLCCapabilitiesStructDataIndex 961
#define emberExiDRLCCapabilitiesStructData (emEncoderEvents + emberExiDRLCCapabilitiesStructDataIndex)
#define emberExiCompareStructDRLCCapabilities(x, y) (emExiCompareStructs(emberExiDRLCCapabilitiesStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDRLCCapabilities(theStruct) (emExiStructMemoryFootprint(emberExiDRLCCapabilitiesStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDRLCCapabilities(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDRLCCapabilities(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data);

// Converts struct to XML
void emberExiToXmlStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data);

// Writes XML to a string
int emberExiXmlSprintfStructDRLCCapabilities(int8u *stringBuffer, int offset, EmberExiGeneratedDRLCCapabilities *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDRLCCapabilities(int8u *stringBuffer, int offset, EmberExiGeneratedDRLCCapabilities *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>0 - none
// 1 - mains 
// 2 -
// battery
// 3 - local generation
// 4 - emergency 
// 5 - unknown
// All other values
// reserved.</xs:documentation>
// </xs:annotation>
// Complex type: PowerSourceType
typedef EmberExiGeneratedUInt8 EmberExiGeneratedPowerSourceType; // based-on UInt8



// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of SupportedLocale instances.</xs:documentation>
// </xs:annotation>
// Complex type: SupportedLocaleListLink
#define emberExiStructSupportedLocaleListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupportedLocaleListLink)))

typedef struct _EmberExiGeneratedSupportedLocaleListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedSupportedLocaleListLink;


#define emberExiSupportedLocaleListLinkStructDataIndex 2710
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
// other information about the device that changes very infrequently, typically
// only when updates are applied, if ever.</xs:documentation>
// </xs:annotation>
// Complex type: DeviceInformation
#define emberExiStructDeviceInformationInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceInformation)))

typedef struct _EmberExiGeneratedDeviceInformation {
  int16u structType;
  unsigned int has_functionsImplemented_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedDRLCCapabilities *DRLCCapabilities_option; // pointer to DRLCCapabilities structs
  EmberExiGeneratedHexBinary64 functionsImplemented_option; // element
  EmberExiGeneratedHexBinary160 lFDI; // element
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


#define emberExiDeviceInformationStructDataIndex 1078
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
// <xs:documentation>Provides an identifiable,
// subscribable collection of resources for a particular device to
// consume.</xs:documentation>
// </xs:annotation>
// Complex type: FunctionSetAssignments
#define emberExiStructFunctionSetAssignmentsInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFunctionSetAssignments)))

typedef struct _EmberExiGeneratedFunctionSetAssignments {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedCustomerAccountListLink *CustomerAccountListLink_option; // pointer to CustomerAccountListLink structs
  EmberExiGeneratedDemandResponseProgramListLink *DemandResponseProgramListLink_option; // pointer to DemandResponseProgramListLink structs
  EmberExiGeneratedDERProgramListLink *DERProgramListLink_option; // pointer to DERProgramListLink structs
  EmberExiGeneratedFileListLink *FileListLink_option; // pointer to FileListLink structs
  EmberExiGeneratedMessagingProgramListLink *MessagingProgramListLink_option; // pointer to MessagingProgramListLink structs
  EmberExiGeneratedPrepaymentListLink *PrepaymentListLink_option; // pointer to PrepaymentListLink structs
  EmberExiGeneratedResponseSetListLink *ResponseSetListLink_option; // pointer to ResponseSetListLink structs
  EmberExiGeneratedTariffProfileListLink *TariffProfileListLink_option; // pointer to TariffProfileListLink structs
  EmberExiGeneratedTimeLink *TimeLink_option; // pointer to TimeLink structs
  EmberExiGeneratedUsagePointListLink *UsagePointListLink_option; // pointer to UsagePointListLink structs
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
} EmberExiGeneratedFunctionSetAssignments;


#define emberExiFunctionSetAssignmentsStructDataIndex 1501
#define emberExiFunctionSetAssignmentsStructData (emEncoderEvents + emberExiFunctionSetAssignmentsStructDataIndex)
#define emberExiCompareStructFunctionSetAssignments(x, y) (emExiCompareStructs(emberExiFunctionSetAssignmentsStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFunctionSetAssignments(theStruct) (emExiStructMemoryFootprint(emberExiFunctionSetAssignmentsStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFunctionSetAssignments(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFunctionSetAssignments(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFunctionSetAssignments(EmberExiGeneratedFunctionSetAssignments *data);

// Converts struct to XML
void emberExiToXmlStructFunctionSetAssignments(EmberExiGeneratedFunctionSetAssignments *data);

// Writes XML to a string
int emberExiXmlSprintfStructFunctionSetAssignments(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignments *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFunctionSetAssignments(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignments *data);

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
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedActiveTextMessageListLink *ActiveTextMessageListLink_option; // pointer to ActiveTextMessageListLink structs
  EmberExiGeneratedLocaleType locale; // element
  EmberExiGeneratedPrimacyType primacy; // element
  EmberExiGeneratedTextMessageListLink *TextMessageListLink_option; // pointer to TextMessageListLink structs
} EmberExiGeneratedMessagingProgram;


#define emberExiMessagingProgramStructDataIndex 1864
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
// <xs:documentation>CreditRegister instances
// define a credit-modifying transaction. Typically this would be a credit-adding
// transaction, but may be a subtracting transaction (perhaps in response to an
// out-of-band debt signal).</xs:documentation>
// </xs:annotation>
// Complex type: CreditRegister
#define emberExiStructCreditRegisterInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCreditRegister)))

typedef struct _EmberExiGeneratedCreditRegister {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int has_creditType_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedAccountingUnit *creditAmount; // pointer to creditAmount structs
  EmberExiGeneratedCreditTypeType creditType_option; // element
  EmberExiGeneratedTimeType effectiveTime; // element
  EmberExiGeneratedString32 token; // element
} EmberExiGeneratedCreditRegister;


#define emberExiCreditRegisterStructDataIndex 439
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u CreditRegister_count; // number of CreditRegister structs
  EmberExiGeneratedCreditRegister *CreditRegister_array; // pointer to CreditRegister structs
} EmberExiGeneratedCreditRegisterList;


#define emberExiCreditRegisterListStructDataIndex 460
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
// <xs:documentation>A Link to a
// Reading.</xs:documentation>
// </xs:annotation>
// Complex type: ReadingLink
#define emberExiStructReadingLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedReadingLink)))

typedef struct _EmberExiGeneratedReadingLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedReadingLink;


#define emberExiReadingLinkStructDataIndex 2356
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
// <xs:documentation>Set of values obtained from
// the meter.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReading
#define emberExiStructMeterReadingInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReading)))

typedef struct _EmberExiGeneratedMeterReading {
  int16u structType;
  unsigned int has_version_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedRateComponentListLink *RateComponentListLink_option; // pointer to RateComponentListLink structs
  EmberExiGeneratedReadingLink *ReadingLink_option; // pointer to ReadingLink structs
  EmberExiGeneratedReadingSetListLink *ReadingSetListLink_option; // pointer to ReadingSetListLink structs
  EmberExiGeneratedReadingTypeLink *ReadingTypeLink; // pointer to ReadingTypeLink structs
} EmberExiGeneratedMeterReading;


#define emberExiMeterReadingStructDataIndex 1906
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
// <xs:documentation>A List element to hold
// MeterReading objects.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingList
#define emberExiStructMeterReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingList)))

typedef struct _EmberExiGeneratedMeterReadingList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u MeterReading_count; // number of MeterReading structs
  EmberExiGeneratedMeterReading *MeterReading_array; // pointer to MeterReading structs
} EmberExiGeneratedMeterReadingList;


#define emberExiMeterReadingListStructDataIndex 1942
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
// <xs:documentation>A List of MirrorMeterReading
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: MirrorMeterReadingList
#define emberExiStructMirrorMeterReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMirrorMeterReadingList)))

typedef struct _EmberExiGeneratedMirrorMeterReadingList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u MirrorMeterReading_count; // number of MirrorMeterReading structs
  EmberExiGeneratedMirrorMeterReading *MirrorMeterReading_array; // pointer to MirrorMeterReading structs
} EmberExiGeneratedMirrorMeterReadingList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// MessagingProgram objects.</xs:documentation>
// </xs:annotation>
// Complex type: MessagingProgramList
#define emberExiStructMessagingProgramListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMessagingProgramList)))

typedef struct _EmberExiGeneratedMessagingProgramList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u MessagingProgram_count; // number of MessagingProgram structs
  EmberExiGeneratedMessagingProgram *MessagingProgram_array; // pointer to MessagingProgram structs
} EmberExiGeneratedMessagingProgramList;


#define emberExiMessagingProgramListStructDataIndex 1888
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
// <xs:documentation>Average electric potential
// difference between two points.</xs:documentation>
// </xs:annotation>
// Complex type: VoltageRMS
#define emberExiStructVoltageRMSInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedVoltageRMS)))

typedef struct _EmberExiGeneratedVoltageRMS {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt16 value; // element
} EmberExiGeneratedVoltageRMS;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Distributed energy resource
// settings</xs:documentation>
// </xs:annotation>
// Complex type: DERSettings
#define emberExiStructDERSettingsInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERSettings)))

typedef struct _EmberExiGeneratedDERSettings {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_setGenConnect_option:1;
  unsigned int has_setStorConnect_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedBoolean setGenConnect_option; // element
  EmberExiGeneratedUInt16 setGradW; // element
  EmberExiGeneratedActivePower *setMaxChargeRate_option; // pointer to setMaxChargeRate structs
  EmberExiGeneratedActivePower *setMaxDischargeRate_option; // pointer to setMaxDischargeRate structs
  EmberExiGeneratedApparentPower *setMaxVA_option; // pointer to setMaxVA structs
  EmberExiGeneratedReactivePower *setMaxVAr_option; // pointer to setMaxVAr structs
  EmberExiGeneratedReactivePower *setMaxVArNeg_option; // pointer to setMaxVArNeg structs
  EmberExiGeneratedActivePower *setMaxW; // pointer to setMaxW structs
  EmberExiGeneratedFixedPointType *setMinPF_option; // pointer to setMinPF structs
  EmberExiGeneratedFixedPointType *setMinPFUnder_option; // pointer to setMinPFUnder structs
  EmberExiGeneratedBoolean setStorConnect_option; // element
  EmberExiGeneratedVoltageRMS *setVRef_option; // pointer to setVRef structs
  EmberExiGeneratedVoltageRMS *setVRefOfs_option; // pointer to setVRefOfs structs
  EmberExiGeneratedTimeType updatedTime; // element
} EmberExiGeneratedDERSettings;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// SupportedLocale objects.</xs:documentation>
// </xs:annotation>
// Complex type: SupportedLocaleList
#define emberExiStructSupportedLocaleListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedSupportedLocaleList)))

typedef struct _EmberExiGeneratedSupportedLocaleList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u SupportedLocale_count; // number of SupportedLocale structs
  EmberExiGeneratedSupportedLocale *SupportedLocale_array; // pointer to SupportedLocale structs
} EmberExiGeneratedSupportedLocaleList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// Prepayment objects.</xs:documentation>
// </xs:annotation>
// Complex type: PrepaymentList
#define emberExiStructPrepaymentListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepaymentList)))

typedef struct _EmberExiGeneratedPrepaymentList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u Prepayment_count; // number of Prepayment structs
  EmberExiGeneratedPrepayment *Prepayment_array; // pointer to Prepayment structs
} EmberExiGeneratedPrepaymentList;


#define emberExiPrepaymentListStructDataIndex 2200
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
// <xs:documentation>A List element to hold
// TariffProfile objects.</xs:documentation>
// </xs:annotation>
// Complex type: TariffProfileList
#define emberExiStructTariffProfileListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTariffProfileList)))

typedef struct _EmberExiGeneratedTariffProfileList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u TariffProfile_count; // number of TariffProfile structs
  EmberExiGeneratedTariffProfile *TariffProfile_array; // pointer to TariffProfile structs
} EmberExiGeneratedTariffProfileList;


#define emberExiTariffProfileListStructDataIndex 2785
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
// <xs:documentation>List of LLInterface
// instances.</xs:documentation>
// </xs:annotation>
// Complex type: LLInterfaceList
#define emberExiStructLLInterfaceListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedLLInterfaceList)))

typedef struct _EmberExiGeneratedLLInterfaceList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u LLInterface_count; // number of LLInterface structs
  EmberExiGeneratedLLInterface *LLInterface_array; // pointer to LLInterface structs
} EmberExiGeneratedLLInterfaceList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Specification of a
// temperature.</xs:documentation>
// </xs:annotation>
// Complex type: Temperature
#define emberExiStructTemperatureInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTemperature)))

typedef struct _EmberExiGeneratedTemperature {
  int16u structType;
  EmberExiGeneratedPowerOfTenMultiplierType multiplier; // element
  EmberExiGeneratedUInt8 subject; // element
  EmberExiGeneratedInt16 value; // element
} EmberExiGeneratedTemperature;


#define emberExiTemperatureStructDataIndex 2803
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
// <xs:documentation>PrepayOperationStatus
// describes the status of the service or commodity being conditionally controlled
// by the Prepayment function set.</xs:documentation>
// </xs:annotation>
// Complex type: PrepayOperationStatus
#define emberExiStructPrepayOperationStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPrepayOperationStatus)))

typedef struct _EmberExiGeneratedPrepayOperationStatus {
  int16u structType;
  unsigned int has_creditTypeInUse_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedCreditTypeChange *creditTypeChange_option; // pointer to creditTypeChange structs
  EmberExiGeneratedCreditTypeType creditTypeInUse_option; // element
  EmberExiGeneratedServiceChange *serviceChange_option; // pointer to serviceChange structs
  EmberExiGeneratedServiceStatusType serviceStatus; // element
} EmberExiGeneratedPrepayOperationStatus;


#define emberExiPrepayOperationStatusStructDataIndex 2089
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
// <xs:documentation>Contains attributes that can
// be exposed by PEVs and other devices that have charging
// requirements.</xs:documentation>
// </xs:annotation>
// Complex type: PEVInfo
#define emberExiStructPEVInfoInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPEVInfo)))

typedef struct _EmberExiGeneratedPEVInfo {
  int16u structType;
  EmberExiGeneratedActivePower *chargingPowerNow; // pointer to chargingPowerNow structs
  EmberExiGeneratedRealEnergy *energyRequestNow; // pointer to energyRequestNow structs
  EmberExiGeneratedActivePower *maxForwardPower; // pointer to maxForwardPower structs
  EmberExiGeneratedUInt32 minimumChargingDuration; // element
  EmberExiGeneratedPerCent targetStateOfCharge; // element
  EmberExiGeneratedTimeType timeChargeIsNeeded; // element
  EmberExiGeneratedTimeType timeChargingStatusPEV; // element
} EmberExiGeneratedPEVInfo;


#define emberExiPEVInfoStructDataIndex 2002
#define emberExiPEVInfoStructData (emEncoderEvents + emberExiPEVInfoStructDataIndex)
#define emberExiCompareStructPEVInfo(x, y) (emExiCompareStructs(emberExiPEVInfoStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructPEVInfo(theStruct) (emExiStructMemoryFootprint(emberExiPEVInfoStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructPEVInfo(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructPEVInfo(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructPEVInfo(EmberExiGeneratedPEVInfo *data);

// Converts struct to XML
void emberExiToXmlStructPEVInfo(EmberExiGeneratedPEVInfo *data);

// Writes XML to a string
int emberExiXmlSprintfStructPEVInfo(int8u *stringBuffer, int offset, EmberExiGeneratedPEVInfo *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructPEVInfo(int8u *stringBuffer, int offset, EmberExiGeneratedPEVInfo *data);

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
  unsigned int has_estimatedChargeRemaining_option:1;
  unsigned int has_estimatedTimeRemaining_option:1;
  unsigned int has_sessionTimeOnBattery_option:1;
  unsigned int has_totalTimeOnBattery_option:1;
  unsigned int flagPadding:18;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt8 batteryStatus; // element
  EmberExiGeneratedTimeType changedTime; // element
  EmberExiGeneratedPowerSourceType currentPowerSource; // element
  EmberExiGeneratedPerCent estimatedChargeRemaining_option; // element
  EmberExiGeneratedUInt32 estimatedTimeRemaining_option; // element
  EmberExiGeneratedPEVInfo *PEVInfo_option; // pointer to PEVInfo structs
  EmberExiGeneratedUInt32 sessionTimeOnBattery_option; // element
  EmberExiGeneratedUInt32 totalTimeOnBattery_option; // element
} EmberExiGeneratedPowerStatus;


#define emberExiPowerStatusStructDataIndex 2050
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
// <xs:documentation>A response related to a price
// message.</xs:documentation>
// </xs:annotation>
// Complex type: PriceResponse
#define emberExiStructPriceResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPriceResponse)))

typedef struct _EmberExiGeneratedPriceResponse {
  int16u structType;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedHexBinary160 endDeviceLFDI; // element
  EmberExiGeneratedUInt8 status_option; // element
  EmberExiGeneratedmRIDType subject; // element
} EmberExiGeneratedPriceResponse;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Contains information about the
// nature of an error if a request could not be completed
// successfully.</xs:documentation>
// </xs:annotation>
// Complex type: Error
#define emberExiStructErrorInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedError)))

typedef struct _EmberExiGeneratedError {
  int16u structType;
  unsigned int has_maxRetryDuration_option:1;
  EmberExiGeneratedUInt16 maxRetryDuration_option; // element
  EmberExiGeneratedUInt16 reasonCode; // element
} EmberExiGeneratedError;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Status of
// device</xs:documentation>
// </xs:annotation>
// Complex type: DeviceStatus
#define emberExiStructDeviceStatusInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDeviceStatus)))

typedef struct _EmberExiGeneratedDeviceStatus {
  int16u structType;
  unsigned int has_onCount_option:1;
  unsigned int has_opState_option:1;
  unsigned int has_opTime_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType changedTime; // element
  EmberExiGeneratedUInt16 onCount_option; // element
  EmberExiGeneratedUInt8 opState_option; // element
  EmberExiGeneratedUInt32 opTime_option; // element
  int8u Temperature_count; // number of Temperature structs
  EmberExiGeneratedTemperature *Temperature_array; // pointer to Temperature structs
  EmberExiGeneratedTimeLink *TimeLink_option; // pointer to TimeLink structs
} EmberExiGeneratedDeviceStatus;


#define emberExiDeviceStatusStructDataIndex 1138
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
// <xs:documentation>A List element to hold
// EndDeviceControl objects.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceControlList
#define emberExiStructEndDeviceControlListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceControlList)))

typedef struct _EmberExiGeneratedEndDeviceControlList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u EndDeviceControl_count; // number of EndDeviceControl structs
  EmberExiGeneratedEndDeviceControl *EndDeviceControl_array; // pointer to EndDeviceControl structs
} EmberExiGeneratedEndDeviceControlList;


#define emberExiEndDeviceControlListStructDataIndex 1306
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
// <xs:documentation>A List element to hold File
// objects.</xs:documentation>
// </xs:annotation>
// Complex type: FileList
#define emberExiStructFileListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFileList)))

typedef struct _EmberExiGeneratedFileList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u File_count; // number of File structs
  EmberExiGeneratedFile *File_array; // pointer to File structs
} EmberExiGeneratedFileList;


#define emberExiFileListStructDataIndex 1438
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
// <xs:documentation>SHALL contain a Link to an
// instance of EndDevice.</xs:documentation>
// </xs:annotation>
// Complex type: EndDeviceLink
#define emberExiStructEndDeviceLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedEndDeviceLink)))

typedef struct _EmberExiGeneratedEndDeviceLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedEndDeviceLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Used to request flow
// transactions. Client EndDevices submit a request for charging or discharging
// from the server. The server creates an associated FlowReservationResponse
// containing the charging parameters and interval to provide a lower aggregated
// demand at the premises, or within a larger part of the distribution
// system.</xs:documentation>
// </xs:annotation>
// Complex type: FlowReservationRequest
#define emberExiStructFlowReservationRequestInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFlowReservationRequest)))

typedef struct _EmberExiGeneratedFlowReservationRequest {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int has_durationRequested_option:1;
  unsigned int flagPadding:18;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedTimeType creationTime; // element
  EmberExiGeneratedEventStatus *EventStatus; // pointer to EventStatus structs
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedUsagePointLink *UsagePointLink_option; // pointer to UsagePointLink structs
  EmberExiGeneratedUInt16 durationRequested_option; // element
  EmberExiGeneratedRealEnergy *energyRequested; // pointer to energyRequested structs
  EmberExiGeneratedActivePower *powerRequested; // pointer to powerRequested structs
} EmberExiGeneratedFlowReservationRequest;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// FlowReservationRequest objects.</xs:documentation>
// </xs:annotation>
// Complex type: FlowReservationRequestList
#define emberExiStructFlowReservationRequestListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFlowReservationRequestList)))

typedef struct _EmberExiGeneratedFlowReservationRequestList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u FlowReservationRequest_count; // number of FlowReservationRequest structs
  EmberExiGeneratedFlowReservationRequest *FlowReservationRequest_array; // pointer to FlowReservationRequest structs
} EmberExiGeneratedFlowReservationRequestList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of CustomerAccount.</xs:documentation>
// </xs:annotation>
// Complex type: CustomerAccountLink
#define emberExiStructCustomerAccountLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedCustomerAccountLink)))

typedef struct _EmberExiGeneratedCustomerAccountLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedCustomerAccountLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold DER
// objects.</xs:documentation>
// </xs:annotation>
// Complex type: DERList
#define emberExiStructDERListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERList)))

typedef struct _EmberExiGeneratedDERList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u DER_count; // number of DER structs
  EmberExiGeneratedDER *DER_array; // pointer to DER structs
} EmberExiGeneratedDERList;


#define emberExiDERListStructDataIndex 880
#define emberExiDERListStructData (emEncoderEvents + emberExiDERListStructDataIndex)
#define emberExiCompareStructDERList(x, y) (emExiCompareStructs(emberExiDERListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERList(theStruct) (emExiStructMemoryFootprint(emberExiDERListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERList(EmberExiGeneratedDERList *data);

// Converts struct to XML
void emberExiToXmlStructDERList(EmberExiGeneratedDERList *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERList(int8u *stringBuffer, int offset, EmberExiGeneratedDERList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERList(int8u *stringBuffer, int offset, EmberExiGeneratedDERList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>List of 15.4
// neighbors.</xs:documentation>
// </xs:annotation>
// Complex type: NeighborList
#define emberExiStructNeighborListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNeighborList)))

typedef struct _EmberExiGeneratedNeighborList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u Neighbor_count; // number of Neighbor structs
  EmberExiGeneratedNeighbor *Neighbor_array; // pointer to Neighbor structs
} EmberExiGeneratedNeighborList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A response to a text
// message</xs:documentation>
// </xs:annotation>
// Complex type: TextResponse
#define emberExiStructTextResponseInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedTextResponse)))

typedef struct _EmberExiGeneratedTextResponse {
  int16u structType;
  unsigned int has_createdDateTime_option:1;
  unsigned int has_status_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType createdDateTime_option; // element
  EmberExiGeneratedHexBinary160 endDeviceLFDI; // element
  EmberExiGeneratedUInt8 status_option; // element
  EmberExiGeneratedmRIDType subject; // element
} EmberExiGeneratedTextResponse;


#define emberExiTextResponseStructDataIndex 2851
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
// <xs:documentation>Contains control mode
// information to be used if no active DERControl is
// found.</xs:documentation>
// </xs:annotation>
// Complex type: DefaultDERControl
#define emberExiStructDefaultDERControlInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDefaultDERControl)))

typedef struct _EmberExiGeneratedDefaultDERControl {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
  EmberExiGeneratedDERControlBase *DERControlBase; // pointer to DERControlBase structs
} EmberExiGeneratedDefaultDERControl;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// DERProgram objects.</xs:documentation>
// </xs:annotation>
// Complex type: DERProgramList
#define emberExiStructDERProgramListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERProgramList)))

typedef struct _EmberExiGeneratedDERProgramList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u DERProgram_count; // number of DERProgram structs
  EmberExiGeneratedDERProgram *DERProgram_array; // pointer to DERProgram structs
} EmberExiGeneratedDERProgramList;


#define emberExiDERProgramListStructDataIndex 931
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
// <xs:documentation>A List element to hold
// PriceResponseCfg objects.</xs:documentation>
// </xs:annotation>
// Complex type: PriceResponseCfgList
#define emberExiStructPriceResponseCfgListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedPriceResponseCfgList)))

typedef struct _EmberExiGeneratedPriceResponseCfgList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u PriceResponseCfg_count; // number of PriceResponseCfg structs
  EmberExiGeneratedPriceResponseCfg *PriceResponseCfg_array; // pointer to PriceResponseCfg structs
} EmberExiGeneratedPriceResponseCfgList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>An IdentifiedObject to which a
// Response can be requested.</xs:documentation>
// </xs:annotation>
// Complex type: RespondableIdentifiedObject
#define emberExiStructRespondableIdentifiedObjectInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedRespondableIdentifiedObject)))

typedef struct _EmberExiGeneratedRespondableIdentifiedObject {
  int16u structType;
  unsigned int has_responseRequired_option:1;
  unsigned int has_version_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedString replyTo_option; // attribute
  EmberExiGeneratedHexBinary8 responseRequired_option; // attribute
  EmberExiGeneratedmRIDType mRID; // element
  EmberExiGeneratedString32 description_option; // element
  EmberExiGeneratedVersionType version_option; // element
} EmberExiGeneratedRespondableIdentifiedObject;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A Billing Period relates to
// the period of time on which a customer is billed.  As an example the billing
// period interval for a particular customer might be 31 days starting on July 1,
// 2011. The start date and interval can change on each billing period. There may
// also be multiple billing periods related to a customer agreement to support
// different tariff structures.</xs:documentation>
// </xs:annotation>
// Complex type: BillingPeriod
#define emberExiStructBillingPeriodInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingPeriod)))

typedef struct _EmberExiGeneratedBillingPeriod {
  int16u structType;
  unsigned int has_billLastPeriod_option:1;
  unsigned int has_billToDate_option:1;
  unsigned int has_statusTimeStamp_option:1;
  unsigned int flagPadding:19;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedInt48 billLastPeriod_option; // element
  EmberExiGeneratedInt48 billToDate_option; // element
  EmberExiGeneratedDateTimeInterval *interval; // pointer to interval structs
  EmberExiGeneratedTimeType statusTimeStamp_option; // element
} EmberExiGeneratedBillingPeriod;


#define emberExiBillingPeriodStructDataIndex 235
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
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u BillingPeriod_count; // number of BillingPeriod structs
  EmberExiGeneratedBillingPeriod *BillingPeriod_array; // pointer to BillingPeriod structs
} EmberExiGeneratedBillingPeriodList;


#define emberExiBillingPeriodListStructDataIndex 256
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u MirrorUsagePoint_count; // number of MirrorUsagePoint structs
  EmberExiGeneratedMirrorUsagePoint *MirrorUsagePoint_array; // pointer to MirrorUsagePoint structs
} EmberExiGeneratedMirrorUsagePointList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// DERCurve objects.</xs:documentation>
// </xs:annotation>
// Complex type: DERCurveList
#define emberExiStructDERCurveListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERCurveList)))

typedef struct _EmberExiGeneratedDERCurveList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u DERCurve_count; // number of DERCurve structs
  EmberExiGeneratedDERCurve *DERCurve_array; // pointer to DERCurve structs
} EmberExiGeneratedDERCurveList;


#define emberExiDERCurveListStructDataIndex 862
#define emberExiDERCurveListStructData (emEncoderEvents + emberExiDERCurveListStructDataIndex)
#define emberExiCompareStructDERCurveList(x, y) (emExiCompareStructs(emberExiDERCurveListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructDERCurveList(theStruct) (emExiStructMemoryFootprint(emberExiDERCurveListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructDERCurveList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructDERCurveList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructDERCurveList(EmberExiGeneratedDERCurveList *data);

// Converts struct to XML
void emberExiToXmlStructDERCurveList(EmberExiGeneratedDERCurveList *data);

// Writes XML to a string
int emberExiXmlSprintfStructDERCurveList(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructDERCurveList(int8u *stringBuffer, int offset, EmberExiGeneratedDERCurveList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>AccountBalance contains the
// regular credit and emergency credit balance for this given service or commodity
// prepay instance. It may also contain status information concerning the balance
// data.</xs:documentation>
// </xs:annotation>
// Complex type: AccountBalance
#define emberExiStructAccountBalanceInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedAccountBalance)))

typedef struct _EmberExiGeneratedAccountBalance {
  int16u structType;
  unsigned int has_creditStatus_option:1;
  unsigned int has_emergencyCreditStatus_option:1;
  unsigned int flagPadding:20;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedAccountingUnit *availableCredit; // pointer to availableCredit structs
  EmberExiGeneratedCreditStatusType creditStatus_option; // element
  EmberExiGeneratedAccountingUnit *emergencyCredit_option; // pointer to emergencyCredit structs
  EmberExiGeneratedCreditStatusType emergencyCreditStatus_option; // element
} EmberExiGeneratedAccountBalance;


#define emberExiAccountBalanceStructDataIndex 67
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
// ResponseSet objects.</xs:documentation>
// </xs:annotation>
// Complex type: ResponseSetList
#define emberExiStructResponseSetListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedResponseSetList)))

typedef struct _EmberExiGeneratedResponseSetList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u ResponseSet_count; // number of ResponseSet structs
  EmberExiGeneratedResponseSet *ResponseSet_array; // pointer to ResponseSet structs
} EmberExiGeneratedResponseSetList;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// HistoricalReading objects.</xs:documentation>
// </xs:annotation>
// Complex type: HistoricalReadingList
#define emberExiStructHistoricalReadingListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedHistoricalReadingList)))

typedef struct _EmberExiGeneratedHistoricalReadingList {
  int16u structType;
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u HistoricalReading_count; // number of HistoricalReading structs
  EmberExiGeneratedHistoricalReading *HistoricalReading_array; // pointer to HistoricalReading structs
} EmberExiGeneratedHistoricalReadingList;


#define emberExiHistoricalReadingListStructDataIndex 1612
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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedTimeType dateTimeRegistered; // element
  EmberExiGeneratedPINType pIN; // element
} EmberExiGeneratedRegistration;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to a List
// of Notification instances.</xs:documentation>
// </xs:annotation>
// Complex type: NotificationListLink
#define emberExiStructNotificationListLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedNotificationListLink)))

typedef struct _EmberExiGeneratedNotificationListLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
  EmberExiGeneratedUInt16 all; // attribute
} EmberExiGeneratedNotificationListLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>SHALL contain a Link to an
// instance of MeterReading.</xs:documentation>
// </xs:annotation>
// Complex type: MeterReadingLink
#define emberExiStructMeterReadingLinkInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedMeterReadingLink)))

typedef struct _EmberExiGeneratedMeterReadingLink {
  int16u structType;
  EmberExiGeneratedString href; // attribute
} EmberExiGeneratedMeterReadingLink;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>A List element to hold
// FunctionSetAssignments objects.</xs:documentation>
// </xs:annotation>
// Complex type: FunctionSetAssignmentsList
#define emberExiStructFunctionSetAssignmentsListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedFunctionSetAssignmentsList)))

typedef struct _EmberExiGeneratedFunctionSetAssignmentsList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u FunctionSetAssignments_count; // number of FunctionSetAssignments structs
  EmberExiGeneratedFunctionSetAssignments *FunctionSetAssignments_array; // pointer to FunctionSetAssignments structs
} EmberExiGeneratedFunctionSetAssignmentsList;


#define emberExiFunctionSetAssignmentsListStructDataIndex 1588
#define emberExiFunctionSetAssignmentsListStructData (emEncoderEvents + emberExiFunctionSetAssignmentsListStructDataIndex)
#define emberExiCompareStructFunctionSetAssignmentsList(x, y) (emExiCompareStructs(emberExiFunctionSetAssignmentsListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructFunctionSetAssignmentsList(theStruct) (emExiStructMemoryFootprint(emberExiFunctionSetAssignmentsListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructFunctionSetAssignmentsList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructFunctionSetAssignmentsList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructFunctionSetAssignmentsList(EmberExiGeneratedFunctionSetAssignmentsList *data);

// Converts struct to XML
void emberExiToXmlStructFunctionSetAssignmentsList(EmberExiGeneratedFunctionSetAssignmentsList *data);

// Writes XML to a string
int emberExiXmlSprintfStructFunctionSetAssignmentsList(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructFunctionSetAssignmentsList(int8u *stringBuffer, int offset, EmberExiGeneratedFunctionSetAssignmentsList *data);

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
  unsigned int flagPadding:22;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u Subscription_count; // number of Subscription structs
  EmberExiGeneratedSubscription *Subscription_array; // pointer to Subscription structs
} EmberExiGeneratedSubscriptionList;


#define emberExiSubscriptionListStructDataIndex 2659
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
// BillingReadingSet objects.</xs:documentation>
// </xs:annotation>
// Complex type: BillingReadingSetList
#define emberExiStructBillingReadingSetListInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedBillingReadingSetList)))

typedef struct _EmberExiGeneratedBillingReadingSetList {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int flagPadding:21;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt16 all; // attribute
  EmberExiGeneratedUInt8 results; // attribute
  int8u BillingReadingSet_count; // number of BillingReadingSet structs
  EmberExiGeneratedBillingReadingSet *BillingReadingSet_array; // pointer to BillingReadingSet structs
} EmberExiGeneratedBillingReadingSetList;


#define emberExiBillingReadingSetListStructDataIndex 316
#define emberExiBillingReadingSetListStructData (emEncoderEvents + emberExiBillingReadingSetListStructDataIndex)
#define emberExiCompareStructBillingReadingSetList(x, y) (emExiCompareStructs(emberExiBillingReadingSetListStructData, ((int8u *) (x)), ((int8u *) (y))))
#define emberExiSizeofStructBillingReadingSetList(theStruct) (emExiStructMemoryFootprint(emberExiBillingReadingSetListStructData, ((int8u *) (theStruct))))
// Compression test function
void emberExiCompressionTestStructBillingReadingSetList(int8u useShortTags);

// Deflate Unit test function
boolean emberDeflateUnitTestStructBillingReadingSetList(void);

// Sizeof function, which returns the deep size of the struct
;

// Struct print function
void emberExiPrintStructBillingReadingSetList(EmberExiGeneratedBillingReadingSetList *data);

// Converts struct to XML
void emberExiToXmlStructBillingReadingSetList(EmberExiGeneratedBillingReadingSetList *data);

// Writes XML to a string
int emberExiXmlSprintfStructBillingReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetList *data);

// Writes XML to a string using short tags
int emberExiXmlShortTagsSprintfStructBillingReadingSetList(int8u *stringBuffer, int offset, EmberExiGeneratedBillingReadingSetList *data);

// Struct comparison function
;


// <xs:annotation xmlns:xs="http://www.w3.org/2001/XMLSchema"
// xmlns="http://zigbee.org/sep" >
// <xs:documentation>Indicates current reserve
// generation status</xs:documentation>
// </xs:annotation>
// Complex type: DERAvailability
#define emberExiStructDERAvailabilityInit(s) (MEMSET((s), 0, sizeof(EmberExiGeneratedDERAvailability)))

typedef struct _EmberExiGeneratedDERAvailability {
  int16u structType;
  unsigned int has_subscribable_option:1;
  unsigned int has_availabilityDuration_option:1;
  unsigned int has_maxChargeDuration_option:1;
  unsigned int has_reserveChargePercent_option:1;
  unsigned int has_reservePercent_option:1;
  unsigned int flagPadding:17;
  EmberExiGeneratedString href_option; // attribute
  EmberExiGeneratedSubscribableType subscribable_option; // attribute
  EmberExiGeneratedUInt32 availabilityDuration_option; // element
  EmberExiGeneratedUInt32 maxChargeDuration_option; // element
  EmberExiGeneratedTimeType readingTime; // element
  EmberExiGeneratedPerCent reserveChargePercent_option; // element
  EmberExiGeneratedPerCent reservePercent_option; // element
  EmberExiGeneratedReactivePower *statVArAvail_option; // pointer to statVArAvail structs
  EmberExiGeneratedActivePower *statWAvail_option; // pointer to statWAvail structs
} EmberExiGeneratedDERAvailability;


#endif // __EMBER_EXI_GENERATED_FILE_TYPES__
