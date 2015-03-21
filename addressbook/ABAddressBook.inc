{ Parsed from AddressBook.framework (iPhoneOS8.2) ABAddressBook.h }
{ Created on Fri Mar 20 2:11:11 2015 }

{$ifndef __ABAddressBook__}
{$ifdef EXTERNAL_SYMBOLS}
var
  ABAddressBookErrorDomain: CFStringRef; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kABOperationNotPermittedByStoreError = 0;
  kABOperationNotPermittedByUserError = 1;

type
  ABAddressBookRef = CFTypeRef;
  ABAddressBookRefPtr = ^ABAddressBookRef;
  ABAuthorizationStatus = CFIndex;
  ABAuthorizationStatusPtr = ^ABAuthorizationStatus;

const
  kABAuthorizationStatusNotDetermined = 0;
  kABAuthorizationStatusRestricted = 1;
  kABAuthorizationStatusDenied = 2;
  kABAuthorizationStatusAuthorized = 3;
{$endif}

{$ifdef FUNCTIONS}
function ABAddressBookGetAuthorizationStatus: ABAuthorizationStatus; cdecl; external; { available starting in __MAC_NA,__IPHONE_6_0 }
function ABAddressBookCreateWithOptions(options: CFDictionaryRef; error: CFErrorRef): ABAddressBookRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_6_0 }
function ABAddressBookCreate: ABAddressBookRef; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_6_0';
{$endif}

{$ifdef TYPES}
type
  ABAddressBookRequestAccessCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef FUNCTIONS}
procedure ABAddressBookRequestAccessWithCompletion(addressBook: ABAddressBookRef; completion: ABAddressBookRequestAccessCompletionHandler); cdecl; external; { available starting in __MAC_NA,__IPHONE_6_0 }
function ABAddressBookSave(addressBook: ABAddressBookRef; error: CFErrorRef): cbool; cdecl; external;
function ABAddressBookHasUnsavedChanges(addressBook: ABAddressBookRef): cbool; cdecl; external;
function ABAddressBookAddRecord(addressBook: ABAddressBookRef; record_: ABRecordRef; error: CFErrorRef): cbool; cdecl; external;
function ABAddressBookRemoveRecord(addressBook: ABAddressBookRef; record_: ABRecordRef; error: CFErrorRef): cbool; cdecl; external;
function ABAddressBookCopyLocalizedLabel(label_: CFStringRef): CFStringRef; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  ABExternalChangeCallback = procedure (addressBook: ABAddressBookRef; info: CFDictionaryRef; context: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
procedure ABAddressBookRegisterExternalChangeCallback(addressBook: ABAddressBookRef; callback: ABExternalChangeCallback; context: pointer); cdecl; external;
procedure ABAddressBookUnregisterExternalChangeCallback(addressBook: ABAddressBookRef; callback: ABExternalChangeCallback; context: pointer); cdecl; external;
procedure ABAddressBookRevert(addressBook: ABAddressBookRef); cdecl; external;
{$endif}

{$endif}
