{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGImage.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGIMAGE_H_}
{$ifdef TYPES}
type
  CGImageRef = OpaqueType;
  CGImageAlphaInfo = cuint32;
  CGImageAlphaInfoPtr = ^CGImageAlphaInfo;

const
  kCGImageAlphaNone = 0;
  kCGImageAlphaPremultipliedLast = 1;
  kCGImageAlphaPremultipliedFirst = 2;
  kCGImageAlphaLast = 3;
  kCGImageAlphaFirst = 4;
  kCGImageAlphaNoneSkipLast = 5;
  kCGImageAlphaNoneSkipFirst = 6;
  kCGImageAlphaOnly = 7;

type
  CGBitmapInfo = cuint32;
  CGBitmapInfoPtr = ^CGBitmapInfo;

const
  kCGBitmapAlphaInfoMask = $1F;
  kCGBitmapFloatComponents = 1 shl 8;
  kCGBitmapByteOrderMask = $7000;
  kCGBitmapByteOrderDefault = 0 shl 12;
  kCGBitmapByteOrder16Little = 1 shl 12;
  kCGBitmapByteOrder32Little = 2 shl 12;
  kCGBitmapByteOrder16Big = 3 shl 12;
  kCGBitmapByteOrder32Big = 4 shl 12;
{$endif}

{$ifdef __BIG_ENDIAN__}
{$ifdef TYPES}
const
  kCGBitmapByteOrder16Host = kCGBitmapByteOrder16Big;
  kCGBitmapByteOrder32Host = kCGBitmapByteOrder32Big;
{$endif}

{$else}
{$ifdef TYPES}
const
  kCGBitmapByteOrder16Host = kCGBitmapByteOrder16Little;
  kCGBitmapByteOrder32Host = kCGBitmapByteOrder32Little;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CGImageGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGImageCreate(width: size_t; height: size_t; bitsPerComponent: size_t; bitsPerPixel: size_t; bytesPerRow: size_t; space: CGColorSpaceRef; bitmapInfo: CGBitmapInfo; provider: CGDataProviderRef; decode: CGFloatPtr { variable size array of CGFloat }; shouldInterpolate: cbool; intent: CGColorRenderingIntent): CGImageRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageMaskCreate(width: size_t; height: size_t; bitsPerComponent: size_t; bitsPerPixel: size_t; bytesPerRow: size_t; provider: CGDataProviderRef; decode: CGFloatPtr { variable size array of CGFloat }; shouldInterpolate: cbool): CGImageRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageCreateCopy(image: CGImageRef): CGImageRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateWithJPEGDataProvider(source: CGDataProviderRef; decode: CGFloatPtr { variable size array of CGFloat }; shouldInterpolate: cbool; intent: CGColorRenderingIntent): CGImageRef; cdecl; external; { available starting in __MAC_10_1, __IPHONE_2_0 }
function CGImageCreateWithPNGDataProvider(source: CGDataProviderRef; decode: CGFloatPtr { variable size array of CGFloat }; shouldInterpolate: cbool; intent: CGColorRenderingIntent): CGImageRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGImageCreateWithImageInRect(image: CGImageRef; rect: CGRect): CGImageRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateWithMask(image: CGImageRef; mask: CGImageRef): CGImageRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateWithMaskingColors(image: CGImageRef; components: CGFloatPtr { variable size array of CGFloat }): CGImageRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGImageCreateCopyWithColorSpace(image: CGImageRef; space: CGColorSpaceRef): CGImageRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGImageRetain(image: CGImageRef): CGImageRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGImageRelease(image: CGImageRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageIsMask(image: CGImageRef): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetWidth(image: CGImageRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetHeight(image: CGImageRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBitsPerComponent(image: CGImageRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBitsPerPixel(image: CGImageRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBytesPerRow(image: CGImageRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetColorSpace(image: CGImageRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetAlphaInfo(image: CGImageRef): CGImageAlphaInfo; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetDataProvider(image: CGImageRef): CGDataProviderRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetDecode(image: CGImageRef): CGFloatPtr; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetShouldInterpolate(image: CGImageRef): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetRenderingIntent(image: CGImageRef): CGColorRenderingIntent; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGImageGetBitmapInfo(image: CGImageRef): CGBitmapInfo; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
