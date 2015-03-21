{ Parsed from ImageIO.framework (iPhoneOS8.2) CGImageSource.h }
{ Created on Fri Mar 20 2:11:14 2015 }

{$ifndef CGIMAGESOURCE_H_}
{$ifdef TYPES}
type
  CGImageSourceRef = OpaqueType;

const
  kCGImageStatusUnexpectedEOF = -5;
  kCGImageStatusInvalidData = -4;
  kCGImageStatusUnknownType = -3;
  kCGImageStatusReadingHeader = -2;
  kCGImageStatusIncomplete = -1;
  kCGImageStatusComplete = 0;

type
  CGImageSourceStatus = clong;
  CGImageSourceStatusPtr = ^CGImageSourceStatus;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageSourceTypeIdentifierHint: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceShouldCache: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceShouldCacheImmediately: CFStringRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kCGImageSourceShouldAllowFloat: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceCreateThumbnailFromImageIfAbsent: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceCreateThumbnailFromImageAlways: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceThumbnailMaxPixelSize: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageSourceCreateThumbnailWithTransform: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageSourceGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyTypeIdentifiers: CFArrayRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateWithDataProvider(provider: CGDataProviderRef; options: CFDictionaryRef): CGImageSourceRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateWithData(data: CFDataRef; options: CFDictionaryRef): CGImageSourceRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateWithURL(url: CFURLRef; options: CFDictionaryRef): CGImageSourceRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetType(isrc: CGImageSourceRef): CFStringRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetCount(isrc: CGImageSourceRef): size_t; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyProperties(isrc: CGImageSourceRef; options: CFDictionaryRef): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyPropertiesAtIndex(isrc: CGImageSourceRef; index: size_t; options: CFDictionaryRef): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCopyMetadataAtIndex(isrc: CGImageSourceRef; index: size_t; options: CFDictionaryRef): CGImageMetadataRef; cdecl; external; { available starting in __MAC_10_8,__IPHONE_7_0 }
function CGImageSourceCreateImageAtIndex(isrc: CGImageSourceRef; index: size_t; options: CFDictionaryRef): CGImageRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageSourceRemoveCacheAtIndex(isrc: CGImageSourceRef; index: size_t); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
function CGImageSourceCreateThumbnailAtIndex(isrc: CGImageSourceRef; index: size_t; options: CFDictionaryRef): CGImageRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceCreateIncremental(options: CFDictionaryRef): CGImageSourceRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageSourceUpdateData(isrc: CGImageSourceRef; data: CFDataRef; final: cbool); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageSourceUpdateDataProvider(isrc: CGImageSourceRef; provider: CGDataProviderRef; final: cbool); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetStatus(isrc: CGImageSourceRef): CGImageSourceStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageSourceGetStatusAtIndex(isrc: CGImageSourceRef; index: size_t): CGImageSourceStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
{$endif}

{$endif}
