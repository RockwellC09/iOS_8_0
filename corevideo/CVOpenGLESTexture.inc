{ Parsed from CoreVideo.framework (iPhoneOS8.2) CVOpenGLESTexture.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREVIDEO_CVOPENGLESTEXTURE_H__))}
{$ifdef TYPES}
const
  __COREVIDEO_CVOPENGLESTEXTURE_H__ = 1;
{$endif}

{$ifdef TYPES}
type
  CVOpenGLESTextureRef = CVImageBufferRef;
  CVOpenGLESTextureRefPtr = ^CVOpenGLESTextureRef;
{$endif}

{$ifdef FUNCTIONS}
function CVOpenGLESTextureGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function CVOpenGLESTextureGetTarget(image: CVOpenGLESTextureRef): GLenum; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function CVOpenGLESTextureGetName(image: CVOpenGLESTextureRef): GLuint; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
function CVOpenGLESTextureIsFlipped(image: CVOpenGLESTextureRef): Boolean; cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
procedure CVOpenGLESTextureGetCleanTexCoords(image: CVOpenGLESTextureRef; lowerLeft: GLfloatPtr { 2 element array of GLfloat }; lowerRight: GLfloatPtr { 2 element array of GLfloat }; upperRight: GLfloatPtr { 2 element array of GLfloat }; upperLeft: GLfloatPtr { 2 element array of GLfloat }); cdecl; external; { available starting in __MAC_NA,__IPHONE_5_0 }
{$endif}

{$endif}
