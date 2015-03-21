{ Parsed from CoreVideo.framework (iPhoneOS8.2) CVOpenGLESTextureCache.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREVIDEO__CVOPENGLESTEXTURECACHE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO__CVOPENGLESTEXTURECACHE_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVOpenGLESTextureCacheRef = OpaqueType;
{$endif}

{$ifndef COREVIDEO_USE_EAGLCONTEXT_CLASS_IN_API}
{$ifdef TYPES}
const
  COREVIDEO_USE_EAGLCONTEXT_CLASS_IN_API = 1;
{$endif}

{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_USE_EAGLCONTEXT_CLASS_IN_API)}
{$ifdef TYPES}
type
  CVEAGLContext = ^EAGLContext;
{$endif}

{$else}
{$ifdef TYPES}
type
  CVEAGLContext = pointer;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCVOpenGLESTextureCacheMaximumTextureAgeKey: CFStringRef { available starting in __MAC_NA,__IPHONE_5_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CVOpenGLESTextureCacheGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function CVOpenGLESTextureCacheCreate(allocator: CFAllocatorRef; cacheAttributes: CFDictionaryRef; eaglContext: CVEAGLContext; textureAttributes: CFDictionaryRef; cacheOut: CVOpenGLESTextureCacheRef): CVReturn; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function CVOpenGLESTextureCacheCreateTextureFromImage(allocator: CFAllocatorRef; textureCache: CVOpenGLESTextureCacheRef; sourceImage: CVImageBufferRef; textureAttributes: CFDictionaryRef; target: GLenum; internalFormat: GLint; width: GLsizei; height: GLsizei; format: GLenum; type_: GLenum; planeIndex: size_t; textureOut: CVOpenGLESTextureRefPtr): CVReturn; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
procedure CVOpenGLESTextureCacheFlush(textureCache: CVOpenGLESTextureCacheRef; options: CVOptionFlags); cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
{$endif}

{$endif}
