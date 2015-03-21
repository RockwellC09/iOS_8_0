{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGColor.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGCOLOR_H_}
{$ifdef TYPES}
type
  CGColorRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGColorCreate(space: CGColorSpaceRef; components: CGFloatPtr { variable size array of CGFloat }): CGColorRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorCreateGenericGray(gray: CGFloat; alpha: CGFloat): CGColorRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorCreateGenericRGB(red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): CGColorRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorCreateGenericCMYK(cyan: CGFloat; magenta: CGFloat; yellow: CGFloat; black: CGFloat; alpha: CGFloat): CGColorRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorGetConstantColor(colorName: CFStringRef): CGColorRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_NA }
function CGColorCreateWithPattern(space: CGColorSpaceRef; pattern: CGPatternRef; components: CGFloatPtr { variable size array of CGFloat }): CGColorRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorCreateCopy(color: CGColorRef): CGColorRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorCreateCopyWithAlpha(color: CGColorRef; alpha: CGFloat): CGColorRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorRetain(color: CGColorRef): CGColorRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGColorRelease(color: CGColorRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorEqualToColor(color1: CGColorRef; color2: CGColorRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetNumberOfComponents(color: CGColorRef): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetComponents(color: CGColorRef): CGFloatPtr; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetAlpha(color: CGColorRef): CGFloat; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetColorSpace(color: CGColorRef): CGColorSpaceRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetPattern(color: CGColorRef): CGPatternRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGColorGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGColorWhite: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCGColorBlack: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCGColorClear: CFStringRef { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
{$endif}

{$endif}
