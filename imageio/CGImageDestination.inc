{ Parsed from ImageIO.framework (iPhoneOS8.2) CGImageDestination.h }
{ Created on Fri Mar 20 2:11:14 2015 }

{$ifndef CGIMAGEDESTINATION_H_}
{$ifdef TYPES}
type
  CGImageDestinationRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageDestinationLossyCompressionQuality: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageDestinationBackgroundColor: CFStringRef { available starting in __MAC_10_4, __IPHONE_4_0 }; cvar; external;
  kCGImageDestinationImageMaxPixelSize: CFStringRef { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
  kCGImageDestinationEmbedThumbnail: CFStringRef { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageDestinationGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCopyTypeIdentifiers: CFArrayRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCreateWithDataConsumer(consumer: CGDataConsumerRef; type_: CFStringRef; count: size_t; options: CFDictionaryRef): CGImageDestinationRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCreateWithData(data: CFMutableDataRef; type_: CFStringRef; count: size_t; options: CFDictionaryRef): CGImageDestinationRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationCreateWithURL(url: CFURLRef; type_: CFStringRef; count: size_t; options: CFDictionaryRef): CGImageDestinationRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationSetProperties(idst: CGImageDestinationRef; properties: CFDictionaryRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationAddImage(idst: CGImageDestinationRef; image: CGImageRef; properties: CFDictionaryRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationAddImageFromSource(idst: CGImageDestinationRef; isrc: CGImageSourceRef; index: size_t; properties: CFDictionaryRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
function CGImageDestinationFinalize(idst: CGImageDestinationRef): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_4_0 }
procedure CGImageDestinationAddImageAndMetadata(idst: CGImageDestinationRef; image: CGImageRef; metadata: CGImageMetadataRef; options: CFDictionaryRef); cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGImageDestinationMetadata: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageDestinationMergeMetadata: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataShouldExcludeXMP: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageMetadataShouldExcludeGPS: CFStringRef { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
  kCGImageDestinationDateTime: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kCGImageDestinationOrientation: CFStringRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGImageDestinationCopyImageSource(idst: CGImageDestinationRef; isrc: CGImageSourceRef; options: CFDictionaryRef; err: CFErrorRef): cbool; cdecl; external; { available starting in __MAC_10_8, __IPHONE_7_0 }
{$endif}

{$endif}
