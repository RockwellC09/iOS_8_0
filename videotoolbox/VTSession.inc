{ Parsed from VideoToolbox.framework (iPhoneOS8.2) VTSession.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef VTSESSION_H}

{$ifdef TYPES}
type
  VTSessionRef = CFTypeRef;
  VTSessionRefPtr = ^VTSessionRef;
{$endif}

{$ifdef FUNCTIONS}
function VTSessionCopySupportedPropertyDictionary(session: VTSessionRef; supportedPropertyDictionaryOut: CFDictionaryRefPtr): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTPropertyTypeKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyType_Enumeration: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyType_Boolean: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyType_Number: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyReadWriteStatusKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyReadWriteStatus_ReadOnly: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyReadWriteStatus_ReadWrite: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyShouldBeSerializedKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertySupportedValueMinimumKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertySupportedValueMaximumKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertySupportedValueListKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTPropertyDocumentationKey: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function VTSessionSetProperty(session: VTSessionRef; propertyKey: CFStringRef; propertyValue: CFTypeRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTSessionCopyProperty(session: VTSessionRef; propertyKey: CFStringRef; allocator: CFAllocatorRef; propertyValueOut: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTSessionSetProperties(session: VTSessionRef; propertyDictionary: CFDictionaryRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTSessionCopySerializableProperties(session: VTSessionRef; allocator: CFAllocatorRef; dictionaryOut: CFDictionaryRefPtr): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$endif}
