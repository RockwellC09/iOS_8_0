{ Parsed from AddressBook.framework (iPhoneOS8.2) ABSource.h }
{ Created on Fri Mar 20 2:11:11 2015 }

{$ifndef __ABSource__}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
const
  kABSourceTypeSearchableMask = $01000000;

const
  kABSourceTypeLocal = $0;
  kABSourceTypeExchange = $1;
  kABSourceTypeExchangeGAL = kABSourceTypeExchange + kABSourceTypeSearchableMask;
  kABSourceTypeMobileMe = $2;
  kABSourceTypeLDAP = $3 + kABSourceTypeSearchableMask;
  kABSourceTypeCardDAV = $4;
  kABSourceTypeCardDAVSearch = kABSourceTypeCardDAV + kABSourceTypeSearchableMask;

type
  ABSourceType = cint;
  ABSourceTypePtr = ^ABSourceType;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kABSourceNameProperty: ABPropertyID { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  kABSourceTypeProperty: ABPropertyID { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function ABAddressBookCopyDefaultSource(addressBook: ABAddressBookRef): ABRecordRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABAddressBookGetSourceWithRecordID(addressBook: ABAddressBookRef; sourceID: ABRecordID): ABRecordRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABAddressBookCopyArrayOfAllSources(addressBook: ABAddressBookRef): CFArrayRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
{$endif}

{$endif}
