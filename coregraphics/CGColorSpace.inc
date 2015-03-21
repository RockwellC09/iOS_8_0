{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGColorSpace.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGCOLORSPACE_H_}
{$ifdef TYPES}
type
  CGColorSpaceRef = OpaqueType;

const
  kCGRenderingIntentDefault = 0;
  kCGRenderingIntentAbsoluteColorimetric = 1;
  kCGRenderingIntentRelativeColorimetric = 2;
  kCGRenderingIntentPerceptual = 3;
  kCGRenderingIntentSaturation = 4;

type
  CGColorRenderingIntent = clong;
  CGColorRenderingIntentPtr = ^CGColorRenderingIntent;

const
  kCGColorSpaceModelUnknown = -1;
  kCGColorSpaceModelMonochrome = 0;
  kCGColorSpaceModelRGB = 1;
  kCGColorSpaceModelCMYK = 2;
  kCGColorSpaceModelLab = 3;
  kCGColorSpaceModelDeviceN = 4;
  kCGColorSpaceModelIndexed = 5;
  kCGColorSpaceModelPattern = 6;

type
  CGColorSpaceModel = clong;
  CGColorSpaceModelPtr = ^CGColorSpaceModel;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGColorSpaceGenericGray: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGColorSpaceGenericRGB: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGColorSpaceGenericCMYK: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGColorSpaceGenericRGBLinear: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCGColorSpaceAdobeRGB1998: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCGColorSpaceSRGB: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCGColorSpaceGenericGrayGamma2_2: CFStringRef { available starting in __MAC_10_6, __IPHONE_NA }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CGColorSpaceCreateDeviceGray: CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateDeviceRGB: CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateDeviceCMYK: CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateCalibratedGray(whitePoint: CGFloatPtr { 3 element array of CGFloat }; blackPoint: CGFloatPtr { 3 element array of CGFloat }; gamma: CGFloat): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateCalibratedRGB(whitePoint: CGFloatPtr { 3 element array of CGFloat }; blackPoint: CGFloatPtr { 3 element array of CGFloat }; gamma: CGFloatPtr { 3 element array of CGFloat }; matrix: CGFloatPtr { 9 element array of CGFloat }): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateLab(whitePoint: CGFloatPtr { 3 element array of CGFloat }; blackPoint: CGFloatPtr { 3 element array of CGFloat }; range: CGFloatPtr { 4 element array of CGFloat }): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateWithICCProfile(data: CFDataRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceCreateICCBased(nComponents: size_t; range: CGFloatPtr; profile: CGDataProviderRef; alternate: CGColorSpaceRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateIndexed(baseSpace: CGColorSpaceRef; lastIndex: size_t; colorTable: PChar): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreatePattern(baseSpace: CGColorSpaceRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCreateWithPlatformColorSpace(ref: pointer): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_NA }
function CGColorSpaceCreateWithName(name: CFStringRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGColorSpaceRetain(space: CGColorSpaceRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGColorSpaceRelease(space: CGColorSpaceRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceCopyName(space: CGColorSpaceRef): CFStringRef; cdecl; external; { available starting in __MAC_10_6, __IPHONE_NA }
function CGColorSpaceGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGColorSpaceGetNumberOfComponents(space: CGColorSpaceRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGColorSpaceGetModel(space: CGColorSpaceRef): CGColorSpaceModel; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceGetBaseColorSpace(space: CGColorSpaceRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceGetColorTableCount(space: CGColorSpaceRef): size_t; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGColorSpaceGetColorTable(space: CGColorSpaceRef; table: pbyte); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGColorSpaceCopyICCProfile(space: CGColorSpaceRef): CFDataRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_6_0 }
{$endif}

{$endif}
