{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGGradient.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGGRADIENT_H_}
{$ifdef TYPES}
type
  CGGradientRef = OpaqueType;

const
  kCGGradientDrawsBeforeStartLocation = 1 shl 0;
  kCGGradientDrawsAfterEndLocation = 1 shl 1;

type
  CGGradientDrawingOptions = cuint32;
  CGGradientDrawingOptionsPtr = ^CGGradientDrawingOptions;
{$endif}

{$ifdef FUNCTIONS}
function CGGradientGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGGradientCreateWithColorComponents(space: CGColorSpaceRef; components: CGFloatPtr { variable size array of CGFloat }; locations: CGFloatPtr { variable size array of CGFloat }; count: size_t): CGGradientRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGGradientCreateWithColors(space: CGColorSpaceRef; colors: CFArrayRef; locations: CGFloatPtr { variable size array of CGFloat }): CGGradientRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGGradientRetain(gradient: CGGradientRef): CGGradientRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGGradientRelease(gradient: CGGradientRef); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
{$endif}

{$endif}
