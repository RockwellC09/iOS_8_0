{ Parsed from CoreVideo.framework (iPhoneOS8.2) CVMetalTexture.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREVIDEO_CVMETALTEXTURE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVMETALTEXTURE_H__ = 1;
{$endif}

{$if (defined(__OBJC__)) and defined(COREVIDEO_SUPPORTS_METAL)}
{$ifdef TYPES}
type
  CVMetalTextureRef = CVImageBufferRef;
  CVMetalTextureRefPtr = ^CVMetalTextureRef;
{$endif}

{$ifdef FUNCTIONS}
function CVMetalTextureGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
function CVMetalTextureGetTexture(image: CVMetalTextureRef): MTLTextureProtocol; cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
function CVMetalTextureIsFlipped(image: CVMetalTextureRef): Boolean; cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
procedure CVMetalTextureGetCleanTexCoords(image: CVMetalTextureRef; lowerLeft: psingle { 2 element array of single }; lowerRight: psingle { 2 element array of single }; upperRight: psingle { 2 element array of single }; upperLeft: psingle { 2 element array of single }); cdecl; external; { available starting in __MAC_NA,__IPHONE_8_0 }
{$endif}

{$endif}

{$endif}
