{ Parsed from CoreVideo.framework (iPhoneOS8.2) CVMetalTextureCache.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREVIDEO__CVMETALTEXTURECACHE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVMETALTEXTURECACHE_H__ = 1;
{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_SUPPORTS_METAL)}
{$ifdef TYPES}
type
  CVMetalTextureCacheRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVMetalTextureCacheMaximumTextureAgeKey: CFStringRef { available starting in __MAC_NA,__IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVMetalTextureCacheGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
function CVMetalTextureCacheCreate(allocator: CFAllocatorRef; cacheAttributes: CFDictionaryRef; metalDevice: MTLDeviceProtocol; textureAttributes: CFDictionaryRef; cacheOut: CVMetalTextureCacheRef): CVReturn; cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
function CVMetalTextureCacheCreateTextureFromImage(allocator: CFAllocatorRef; textureCache: CVMetalTextureCacheRef; sourceImage: CVImageBufferRef; textureAttributes: CFDictionaryRef; pixelFormat: MTLPixelFormat; width: size_t; height: size_t; planeIndex: size_t; textureOut: CVMetalTextureRefPtr): CVReturn; cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
procedure CVMetalTextureCacheFlush(textureCache: CVMetalTextureCacheRef; options: CVOptionFlags); cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
{$endif}

{$endif}

{$endif}
