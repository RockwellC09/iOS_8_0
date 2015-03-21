{ Parsed from VideoToolbox.framework (iPhoneOS8.2) VTMultiPassStorage.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef VTMULTIPASSSTORAGE_H}

{$ifdef TYPES}
type
  VTMultiPassStorageRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function VTMultiPassStorageGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTMultiPassStorageCreate(allocator: CFAllocatorRef; fileURL: CFURLRef; timeRange: CMTimeRange; options: CFDictionaryRef; multiPassStorageOut: VTMultiPassStorageRef): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTMultiPassStorageCreationOption_DoNotDelete: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function VTMultiPassStorageClose(multiPassStorage: VTMultiPassStorageRef): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
{$endif}

{$endif}
