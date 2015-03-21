{ Parsed from AddressBook.framework (iPhoneOS8.2) ABRecord.h }
{ Created on Fri Mar 20 2:11:11 2015 }

{$ifndef __ABRecord__}
{$ifdef TYPES}
type
  ABRecordRef = CFTypeRef;
  ABRecordRefPtr = ^ABRecordRef;
  ABRecordID = cint32;
  ABRecordIDPtr = ^ABRecordID;
  ABPropertyID = cint32;
  ABPropertyIDPtr = ^ABPropertyID;
  ABRecordType = cuint32;
  ABRecordTypePtr = ^ABRecordType;

const
  kABPersonType = 0;
  kABGroupType = 1;
  kABSourceType = 2;

const
  kABMultiValueMask = 1 shl 8;
  kABRecordInvalidID = -1;
  kABPropertyInvalidID = -1;

type
  ABPropertyType = cuint32;
  ABPropertyTypePtr = ^ABPropertyType;

const
  kABInvalidPropertyType = $0;
  kABStringPropertyType = $1;
  kABIntegerPropertyType = $2;
  kABRealPropertyType = $3;
  kABDateTimePropertyType = $4;
  kABDictionaryPropertyType = $5;
  kABMultiStringPropertyType = kABMultiValueMask + kABStringPropertyType;
  kABMultiIntegerPropertyType = kABMultiValueMask + kABIntegerPropertyType;
  kABMultiRealPropertyType = kABMultiValueMask + kABRealPropertyType;
  kABMultiDateTimePropertyType = kABMultiValueMask + kABDateTimePropertyType;
  kABMultiDictionaryPropertyType = kABMultiValueMask + kABDictionaryPropertyType;
{$endif}

{$ifdef FUNCTIONS}
function ABRecordGetRecordID(record_: ABRecordRef): ABRecordID; cdecl; external;
function ABRecordGetRecordType(record_: ABRecordRef): ABRecordType; cdecl; external;
function ABRecordCopyValue(record_: ABRecordRef; property_: ABPropertyID): CFTypeRef; cdecl; external;
function ABRecordSetValue(record_: ABRecordRef; property_: ABPropertyID; value: CFTypeRef; error: CFErrorRef): cbool; cdecl; external;
function ABRecordRemoveValue(record_: ABRecordRef; property_: ABPropertyID; error: CFErrorRef): cbool; cdecl; external;
function ABRecordCopyCompositeName(record_: ABRecordRef): CFStringRef; cdecl; external;
{$endif}

{$endif}
