{ Parsed from SpriteKit.framework (iPhoneOS8.2) SpriteKitBase.h }
{ Created on Fri Mar 20 2:11:19 2015 }

{$ifdef TYPES}
const
  SK_AVAILABLE = __OSX_AVAILABLE_STARTING;
{$endif}

{$if defined(TARGET_OS_IPHONE)}

{$else}
{$ifdef TYPES}
const
  SKColor = NSColor;
{$endif}

{$endif}
{$ifdef TYPES}
type
  vector_float3 = single;
  vector_float3Ptr = ^vector_float3;
{$endif}

{$ifndef CGVECTOR_DEFINED}
{$ifdef TYPES}
const
  CGVECTOR_DEFINED = 1;

type
  CGVector = record
    dx: CGFloat;
    dy: CGFloat;
  end;
type
  CGVectorPtr = ^CGVector;
{$endif}

{$endif}
