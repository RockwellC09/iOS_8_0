{ Parsed from AddressBook.framework (iPhoneOS8.2) ABGroup.h }
{ Created on Fri Mar 20 2:11:11 2015 }

{$ifndef __ABGroup__}
{$ifdef EXTERNAL_SYMBOLS}
var
  kABGroupNameProperty: cint; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function ABGroupCreate: ABRecordRef; cdecl; external;
function ABGroupCreateInSource(source: ABRecordRef): ABRecordRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABGroupCopySource(group: ABRecordRef): ABRecordRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
function ABGroupCopyArrayOfAllMembers(group: ABRecordRef): CFArrayRef; cdecl; external;
function ABGroupCopyArrayOfAllMembersWithSortOrdering(group: ABRecordRef; sortOrdering: ABPersonSortOrdering): CFArrayRef; cdecl; external;
function ABGroupAddMember(group: ABRecordRef; person: ABRecordRef; error: CFErrorRef): cbool; cdecl; external;
function ABGroupRemoveMember(group: ABRecordRef; member: ABRecordRef; error: CFErrorRef): cbool; cdecl; external;
function ABAddressBookGetGroupWithRecordID(addressBook: ABAddressBookRef; recordID: ABRecordID): ABRecordRef; cdecl; external;
function ABAddressBookGetGroupCount(addressBook: ABAddressBookRef): CFIndex; cdecl; external;
function ABAddressBookCopyArrayOfAllGroups(addressBook: ABAddressBookRef): CFArrayRef; cdecl; external;
function ABAddressBookCopyArrayOfAllGroupsInSource(addressBook: ABAddressBookRef; source: ABRecordRef): CFArrayRef; cdecl; external; { available starting in __MAC_NA,__IPHONE_4_0 }
{$endif}

{$endif}
