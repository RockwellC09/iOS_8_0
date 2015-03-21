{ Parsed from AddressBook.framework (iPhoneOS8.2) ABMultiValue.h }
{ Created on Fri Mar 20 2:11:11 2015 }

{$ifndef __ABMultiValue__}
{$ifdef TYPES}
type
  ABMultiValueRef = CFTypeRef;
  ABMultiValueRefPtr = ^ABMultiValueRef;
  ABMultiValueIdentifier = cint32;
  ABMultiValueIdentifierPtr = ^ABMultiValueIdentifier;

const
  kABMultiValueInvalidIdentifier = -1;
{$endif}

{$ifdef FUNCTIONS}
function ABMultiValueGetPropertyType(multiValue: ABMultiValueRef): ABPropertyType; cdecl; external;
function ABMultiValueGetCount(multiValue: ABMultiValueRef): CFIndex; cdecl; external;
function ABMultiValueCopyValueAtIndex(multiValue: ABMultiValueRef; index: CFIndex): CFTypeRef; cdecl; external;
function ABMultiValueCopyArrayOfAllValues(multiValue: ABMultiValueRef): CFArrayRef; cdecl; external;
function ABMultiValueCopyLabelAtIndex(multiValue: ABMultiValueRef; index: CFIndex): CFStringRef; cdecl; external;
function ABMultiValueGetIndexForIdentifier(multiValue: ABMultiValueRef; identifier: ABMultiValueIdentifier): CFIndex; cdecl; external;
function ABMultiValueGetIdentifierAtIndex(multiValue: ABMultiValueRef; index: CFIndex): ABMultiValueIdentifier; cdecl; external;
function ABMultiValueGetFirstIndexOfValue(multiValue: ABMultiValueRef; value: CFTypeRef): CFIndex; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  ABMutableMultiValueRef = CFTypeRef;
  ABMutableMultiValueRefPtr = ^ABMutableMultiValueRef;
{$endif}

{$ifdef FUNCTIONS}
function ABMultiValueCreateMutable(type_: ABPropertyType): ABMutableMultiValueRef; cdecl; external;
function ABMultiValueCreateMutableCopy(multiValue: ABMultiValueRef): ABMutableMultiValueRef; cdecl; external;
function ABMultiValueAddValueAndLabel(multiValue: ABMutableMultiValueRef; value: CFTypeRef; label_: CFStringRef; outIdentifier: ABMultiValueIdentifierPtr): cbool; cdecl; external;
function ABMultiValueInsertValueAndLabelAtIndex(multiValue: ABMutableMultiValueRef; value: CFTypeRef; label_: CFStringRef; index: CFIndex; outIdentifier: ABMultiValueIdentifierPtr): cbool; cdecl; external;
function ABMultiValueRemoveValueAndLabelAtIndex(multiValue: ABMutableMultiValueRef; index: CFIndex): cbool; cdecl; external;
function ABMultiValueReplaceValueAtIndex(multiValue: ABMutableMultiValueRef; value: CFTypeRef; index: CFIndex): cbool; cdecl; external;
function ABMultiValueReplaceLabelAtIndex(multiValue: ABMutableMultiValueRef; label_: CFStringRef; index: CFIndex): cbool; cdecl; external;
{$endif}

{$endif}
