{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGShading.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGSHADING_H_}
{$ifdef TYPES}
type
  CGShadingRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGShadingGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGShadingCreateAxial(space: CGColorSpaceRef; start: CGPoint; end_: CGPoint; function_: CGFunctionRef; extendStart: cbool; extendEnd: cbool): CGShadingRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGShadingCreateRadial(space: CGColorSpaceRef; start: CGPoint; startRadius: CGFloat; end_: CGPoint; endRadius: CGFloat; function_: CGFunctionRef; extendStart: cbool; extendEnd: cbool): CGShadingRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGShadingRetain(shading: CGShadingRef): CGShadingRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGShadingRelease(shading: CGShadingRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
{$endif}

{$endif}
