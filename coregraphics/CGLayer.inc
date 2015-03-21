{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGLayer.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGLAYER_H_}
{$ifdef TYPES}
type
  CGLayerRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGLayerCreateWithContext(context: CGContextRef; size: CGSize; auxiliaryInfo: CFDictionaryRef): CGLayerRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerRetain(layer: CGLayerRef): CGLayerRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGLayerRelease(layer: CGLayerRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerGetSize(layer: CGLayerRef): CGSize; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerGetContext(layer: CGLayerRef): CGContextRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextDrawLayerInRect(context: CGContextRef; rect: CGRect; layer: CGLayerRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextDrawLayerAtPoint(context: CGContextRef; point: CGPoint; layer: CGLayerRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGLayerGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
