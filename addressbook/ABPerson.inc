{ Parsed from AddressBook.framework (iPhoneOS8.2) ABPerson.h }
{ Created on Fri Mar 20 2:11:11 2015 }

{$ifndef __ABPerson__}
{$ifdef FUNCTIONS}
function ABPersonCreate: ABRecordRef; cdecl; external;
function ABPersonCreateInSource(source: ABRecordRef): ABRecordRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABPersonCopySource(person: ABRecordRef): ABRecordRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABPersonCopyArrayOfAllLinkedPeople(person: ABRecordRef): CFArrayRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABPersonGetTypeOfProperty(property_: ABPropertyID): ABPropertyType; cdecl; external;
function ABPersonCopyLocalizedPropertyName(property_: ABPropertyID): CFStringRef; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  ABPersonSortOrdering = cuint32;
  ABPersonSortOrderingPtr = ^ABPersonSortOrdering;

const
  kABPersonSortByFirstName = 0;
  kABPersonSortByLastName = 1;
{$endif}

{$ifdef FUNCTIONS}
function ABPersonGetSortOrdering: ABPersonSortOrdering; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  ABPersonCompositeNameFormat = cuint32;
  ABPersonCompositeNameFormatPtr = ^ABPersonCompositeNameFormat;

const
  kABPersonCompositeNameFormatFirstNameFirst = 0;
  kABPersonCompositeNameFormatLastNameFirst = 1;
{$endif}

{$ifdef FUNCTIONS}
function ABPersonGetCompositeNameFormat: ABPersonCompositeNameFormat; cdecl; external; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_7_0';
function ABPersonGetCompositeNameFormatForRecord(record_: ABRecordRef): ABPersonCompositeNameFormat; cdecl; external; { available starting in __MAC_NA,__IPHONE_7_0 }
function ABPersonCopyCompositeNameDelimiterForRecord(record_: ABRecordRef): CFStringRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_7_0 }
{$endif}

{$ifdef TYPES}
const
  kABPersonImageFormatThumbnail = 0;
  kABPersonImageFormatOriginalSize = 2;
type
  ABPersonImageFormat = clong;
{$endif}

{$ifdef FUNCTIONS}
function ABPersonSetImageData(person: ABRecordRef; imageData: CFDataRef; error: CFErrorRef): cbool; cdecl; external;
function ABPersonCopyImageData(person: ABRecordRef): CFDataRef; cdecl; external;
function ABPersonCopyImageDataWithFormat(person: ABRecordRef; format: ABPersonImageFormat): CFDataRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_1 }
function ABPersonHasImageData(person: ABRecordRef): cbool; cdecl; external;
function ABPersonRemoveImageData(person: ABRecordRef; error: CFErrorRef): cbool; cdecl; external;
function ABPersonComparePeopleByName(person1: ABRecordRef; person2: ABRecordRef; ordering: ABPersonSortOrdering): CFComparisonResult; cdecl; external;
function ABAddressBookGetPersonCount(addressBook: ABAddressBookRef): CFIndex; cdecl; external;
function ABAddressBookGetPersonWithRecordID(addressBook: ABAddressBookRef; recordID: ABRecordID): ABRecordRef; cdecl; external;
function ABAddressBookCopyArrayOfAllPeople(addressBook: ABAddressBookRef): CFArrayRef; cdecl; external;
function ABAddressBookCopyArrayOfAllPeopleInSource(addressBook: ABAddressBookRef; source: ABRecordRef): CFArrayRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABAddressBookCopyArrayOfAllPeopleInSourceWithSortOrdering(addressBook: ABAddressBookRef; source: ABRecordRef; sortOrdering: ABPersonSortOrdering): CFArrayRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABAddressBookCopyPeopleWithName(addressBook: ABAddressBookRef; name: CFStringRef): CFArrayRef; cdecl; external;
function ABPersonCreatePeopleInSourceWithVCardRepresentation(source: ABRecordRef; vCardData: CFDataRef): CFArrayRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function ABPersonCreateVCardRepresentationWithPeople(people: CFArrayRef): CFDataRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kABWorkLabel: CFStringRef; cvar; external;
  kABHomeLabel: CFStringRef; cvar; external;
  kABOtherLabel: CFStringRef; cvar; external;
  kABPersonFirstNameProperty: ABPropertyID; cvar; external;
  kABPersonLastNameProperty: ABPropertyID; cvar; external;
  kABPersonMiddleNameProperty: ABPropertyID; cvar; external;
  kABPersonPrefixProperty: ABPropertyID; cvar; external;
  kABPersonSuffixProperty: ABPropertyID; cvar; external;
  kABPersonNicknameProperty: ABPropertyID; cvar; external;
  kABPersonFirstNamePhoneticProperty: ABPropertyID; cvar; external;
  kABPersonLastNamePhoneticProperty: ABPropertyID; cvar; external;
  kABPersonMiddleNamePhoneticProperty: ABPropertyID; cvar; external;
  kABPersonOrganizationProperty: ABPropertyID; cvar; external;
  kABPersonJobTitleProperty: ABPropertyID; cvar; external;
  kABPersonDepartmentProperty: ABPropertyID; cvar; external;
  kABPersonEmailProperty: ABPropertyID; cvar; external;
  kABPersonBirthdayProperty: ABPropertyID; cvar; external;
  kABPersonNoteProperty: ABPropertyID; cvar; external;
  kABPersonCreationDateProperty: ABPropertyID; cvar; external;
  kABPersonModificationDateProperty: ABPropertyID; cvar; external;
  kABPersonAddressProperty: ABPropertyID; cvar; external;
  kABPersonAddressStreetKey: CFStringRef; cvar; external;
  kABPersonAddressCityKey: CFStringRef; cvar; external;
  kABPersonAddressStateKey: CFStringRef; cvar; external;
  kABPersonAddressZIPKey: CFStringRef; cvar; external;
  kABPersonAddressCountryKey: CFStringRef; cvar; external;
  kABPersonAddressCountryCodeKey: CFStringRef; cvar; external;
  kABPersonDateProperty: ABPropertyID; cvar; external;
  kABPersonAnniversaryLabel: CFStringRef; cvar; external;
  kABPersonKindProperty: ABPropertyID; cvar; external;
  kABPersonKindPerson: CFNumberRef; cvar; external;
  kABPersonKindOrganization: CFNumberRef; cvar; external;
  kABPersonPhoneProperty: ABPropertyID; cvar; external;
  kABPersonPhoneMobileLabel: CFStringRef; cvar; external;
  kABPersonPhoneIPhoneLabel: CFStringRef { available starting in __MAC_NA,__IPHONE_3_0 }; cvar; external;
  kABPersonPhoneMainLabel: CFStringRef; cvar; external;
  kABPersonPhoneHomeFAXLabel: CFStringRef; cvar; external;
  kABPersonPhoneWorkFAXLabel: CFStringRef; cvar; external;
  kABPersonPhoneOtherFAXLabel: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonPhonePagerLabel: CFStringRef; cvar; external;
  kABPersonInstantMessageProperty: ABPropertyID; cvar; external;
  kABPersonInstantMessageServiceKey: CFStringRef; cvar; external;
  kABPersonInstantMessageServiceYahoo: CFStringRef; cvar; external;
  kABPersonInstantMessageServiceJabber: CFStringRef; cvar; external;
  kABPersonInstantMessageServiceMSN: CFStringRef; cvar; external;
  kABPersonInstantMessageServiceICQ: CFStringRef; cvar; external;
  kABPersonInstantMessageServiceAIM: CFStringRef; cvar; external;
  kABPersonInstantMessageServiceQQ: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonInstantMessageServiceGoogleTalk: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonInstantMessageServiceSkype: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonInstantMessageServiceFacebook: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonInstantMessageServiceGaduGadu: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonInstantMessageUsernameKey: CFStringRef; cvar; external;
  kABPersonURLProperty: ABPropertyID; cvar; external;
  kABPersonHomePageLabel: CFStringRef; cvar; external;
  kABPersonRelatedNamesProperty: ABPropertyID; cvar; external;
  kABPersonFatherLabel: CFStringRef; cvar; external;
  kABPersonMotherLabel: CFStringRef; cvar; external;
  kABPersonParentLabel: CFStringRef; cvar; external;
  kABPersonBrotherLabel: CFStringRef; cvar; external;
  kABPersonSisterLabel: CFStringRef; cvar; external;
  kABPersonChildLabel: CFStringRef; cvar; external;
  kABPersonFriendLabel: CFStringRef; cvar; external;
  kABPersonSpouseLabel: CFStringRef; cvar; external;
  kABPersonPartnerLabel: CFStringRef; cvar; external;
  kABPersonAssistantLabel: CFStringRef; cvar; external;
  kABPersonManagerLabel: CFStringRef; cvar; external;
  kABPersonSocialProfileProperty: ABPropertyID { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileURLKey: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileServiceKey: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileUsernameKey: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileUserIdentifierKey: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileServiceTwitter: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileServiceSinaWeibo: CFStringRef { available starting in __MAC_NA, __IPHONE_6_0 }; cvar; external;
  kABPersonSocialProfileServiceGameCenter: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileServiceFacebook: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileServiceMyspace: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileServiceLinkedIn: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonSocialProfileServiceFlickr: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
  kABPersonAlternateBirthdayProperty: ABPropertyID { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
  kABPersonAlternateBirthdayCalendarIdentifierKey: CFStringRef { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
  kABPersonAlternateBirthdayEraKey: CFStringRef { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
  kABPersonAlternateBirthdayYearKey: CFStringRef { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
  kABPersonAlternateBirthdayMonthKey: CFStringRef { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
  kABPersonAlternateBirthdayIsLeapMonthKey: CFStringRef { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
  kABPersonAlternateBirthdayDayKey: CFStringRef { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
