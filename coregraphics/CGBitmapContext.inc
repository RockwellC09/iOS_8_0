{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGBitmapContext.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGBITMAPCONTEXT_H_}
{$ifdef TYPES}
type
  CGBitmapContextReleaseDataCallback = procedure (releaseInfo: pointer; data: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CGBitmapContextCreateWithData(data: pointer; width: size_t; height: size_t; bitsPerComponent: size_t; bytesPerRow: size_t; space: CGColorSpaceRef; bitmapInfo: CGBitmapInfo; releaseCallback: CGBitmapContextReleaseDataCallback; releaseInfo: pointer): CGContextRef; cdecl; external; { available starting in __MAC_10_6, __IPHONE_4_0 }
function CGBitmapContextCreate(data: pointer; width: size_t; height: size_t; bitsPerComponent: size_t; bytesPerRow: size_t; space: CGColorSpaceRef; bitmapInfo: CGBitmapInfo): CGContextRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGBitmapContextGetData(context: CGContextRef): pointer; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetWidth(context: CGContextRef): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetHeight(context: CGContextRef): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBitsPerComponent(context: CGContextRef): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBitsPerPixel(context: CGContextRef): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBytesPerRow(context: CGContextRef): size_t; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetColorSpace(context: CGContextRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetAlphaInfo(context: CGContextRef): CGImageAlphaInfo; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGBitmapContextGetBitmapInfo(context: CGContextRef): CGBitmapInfo; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGBitmapContextCreateImage(context: CGContextRef): CGImageRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
