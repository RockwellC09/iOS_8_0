{ Parsed from ImageIO.framework (iPhoneOS8.2) CGImageMetadata.h }
{ Created on Fri Mar 20 2:11:14 2015 }

{$ifndef CGIMAGEMETADATA_H_}
{$ifdef TYPES}
type
  CGImageMetadataRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CGMutableImageMetadataRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataCreateMutable: CGMutableImageMetadataRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCreateMutableCopy(metadata: CGImageMetadataRef): CGMutableImageMetadataRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef TYPES}
type
  CGImageMetadataTagRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataTagGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageMetadataNamespaceExif: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceExifAux: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceExifEX: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceDublinCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceIPTCCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespacePhotoshop: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceTIFF: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceXMPBasic: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataNamespaceXMPRights: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixExif: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixExifAux: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixExifEX: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixDublinCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixIPTCCore: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixPhotoshop: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixTIFF: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixXMPBasic: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataPrefixXMPRights: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kCGImageMetadataTypeInvalid = -1;
  kCGImageMetadataTypeDefault = 0;
  kCGImageMetadataTypeString = 1;
  kCGImageMetadataTypeArrayUnordered = 2;
  kCGImageMetadataTypeArrayOrdered = 3;
  kCGImageMetadataTypeAlternateArray = 4;
  kCGImageMetadataTypeAlternateText = 5;
  kCGImageMetadataTypeStructure = 6;
type
  CGImageMetadataType = clong;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataTagCreate(xmlns: CFStringRef; prefix: CFStringRef; name: CFStringRef; type_: CGImageMetadataType; value: CFTypeRef): CGImageMetadataTagRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyNamespace(tag: CGImageMetadataTagRef): CFStringRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyPrefix(tag: CGImageMetadataTagRef): CFStringRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyName(tag: CGImageMetadataTagRef): CFStringRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyValue(tag: CGImageMetadataTagRef): CFTypeRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagGetType(tag: CGImageMetadataTagRef): CGImageMetadataType; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataTagCopyQualifiers(tag: CGImageMetadataTagRef): CFArrayRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCopyTags(metadata: CGImageMetadataRef): CFArrayRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCopyTagWithPath(metadata: CGImageMetadataRef; parent: CGImageMetadataTagRef; path: CFStringRef): CGImageMetadataTagRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCopyStringValueWithPath(metadata: CGImageMetadataRef; parent: CGImageMetadataTagRef; path: CFStringRef): CFStringRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataRegisterNamespaceForPrefix(metadata: CGMutableImageMetadataRef; xmlns: CFStringRef; prefix: CFStringRef; err: CFErrorRef): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataSetTagWithPath(metadata: CGMutableImageMetadataRef; parent: CGImageMetadataTagRef; path: CFStringRef; tag: CGImageMetadataTagRef): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataSetValueWithPath(metadata: CGMutableImageMetadataRef; parent: CGImageMetadataTagRef; path: CFStringRef; value: CFTypeRef): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataRemoveTagWithPath(metadata: CGMutableImageMetadataRef; parent: CGImageMetadataTagRef; path: CFStringRef): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef __BLOCKS__}
{$ifdef TYPES}
type
  CGImageMetadataTagBlock = OpaqueCBlock;
{$endif}

{$ifdef FUNCTIONS}
procedure CGImageMetadataEnumerateTagsUsingBlock(metadata: CGImageMetadataRef; rootPath: CFStringRef; options: CFDictionaryRef; block: CGImageMetadataTagBlock); cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageMetadataEnumerateRecursively: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageMetadataCopyTagMatchingImageProperty(metadata: CGImageMetadataRef; dictionaryName: CFStringRef; propertyName: CFStringRef): CGImageMetadataTagRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataSetValueMatchingImageProperty(metadata: CGMutableImageMetadataRef; dictionaryName: CFStringRef; propertyName: CFStringRef; value: CFTypeRef): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCreateXMPData(metadata: CGImageMetadataRef; options: CFDictionaryRef): CFDataRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
function CGImageMetadataCreateFromXMPData(data: CFDataRef): CGImageMetadataRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFErrorDomainCGImageMetadata: CFStringRef; cvar; external;
{$endif}

{$endif}
