{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPath.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPATH_H_}
{$ifdef TYPES}
type
  CGMutablePathRef = OpaqueType;
  CGPathRef = OpaqueType;

const
  kCGLineJoinMiter = 0;
  kCGLineJoinRound = 1;
  kCGLineJoinBevel = 2;

type
  CGLineJoin = clong;
  CGLineJoinPtr = ^CGLineJoin;

const
  kCGLineCapButt = 0;
  kCGLineCapRound = 1;
  kCGLineCapSquare = 2;

type
  CGLineCap = clong;
  CGLineCapPtr = ^CGLineCap;
{$endif}

{$ifdef FUNCTIONS}
function CGPathGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateMutable: CGMutablePathRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateCopy(path: CGPathRef): CGPathRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateCopyByTransformingPath(path: CGPathRef; transform: CGAffineTransformPtr): CGPathRef; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateMutableCopy(path: CGPathRef): CGMutablePathRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathCreateMutableCopyByTransformingPath(path: CGPathRef; transform: CGAffineTransformPtr): CGMutablePathRef; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateWithRect(rect: CGRect; transform: CGAffineTransformPtr): CGPathRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_4_0 }
function CGPathCreateWithEllipseInRect(rect: CGRect; transform: CGAffineTransformPtr): CGPathRef; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateWithRoundedRect(rect: CGRect; cornerWidth: CGFloat; cornerHeight: CGFloat; transform: CGAffineTransformPtr): CGPathRef; cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
procedure CGPathAddRoundedRect(path: CGMutablePathRef; transform: CGAffineTransformPtr; rect: CGRect; cornerWidth: CGFloat; cornerHeight: CGFloat); cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
function CGPathCreateCopyByDashingPath(path: CGPathRef; transform: CGAffineTransformPtr; phase: CGFloat; lengths: CGFloatPtr; count: size_t): CGPathRef; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathCreateCopyByStrokingPath(path: CGPathRef; transform: CGAffineTransformPtr; lineWidth: CGFloat; lineCap: CGLineCap; lineJoin: CGLineJoin; miterLimit: CGFloat): CGPathRef; cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
function CGPathRetain(path: CGPathRef): CGPathRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathRelease(path: CGPathRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathEqualToPath(path1: CGPathRef; path2: CGPathRef): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathMoveToPoint(path: CGMutablePathRef; m: CGAffineTransformPtr; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddLineToPoint(path: CGMutablePathRef; m: CGAffineTransformPtr; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddQuadCurveToPoint(path: CGMutablePathRef; m: CGAffineTransformPtr; cpx: CGFloat; cpy: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddCurveToPoint(path: CGMutablePathRef; m: CGAffineTransformPtr; cp1x: CGFloat; cp1y: CGFloat; cp2x: CGFloat; cp2y: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathCloseSubpath(path: CGMutablePathRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddRect(path: CGMutablePathRef; m: CGAffineTransformPtr; rect: CGRect); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddRects(path: CGMutablePathRef; m: CGAffineTransformPtr; rects: CGRectPtr { variable size array of CGRect }; count: size_t); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddLines(path: CGMutablePathRef; m: CGAffineTransformPtr; points: CGPointPtr { variable size array of CGPoint }; count: size_t); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddEllipseInRect(path: CGMutablePathRef; m: CGAffineTransformPtr; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPathAddRelativeArc(path: CGMutablePathRef; matrix: CGAffineTransformPtr; x: CGFloat; y: CGFloat; radius: CGFloat; startAngle: CGFloat; delta: CGFloat); cdecl; external; { available starting in __MAC_10_7, __IPHONE_5_0 }
procedure CGPathAddArc(path: CGMutablePathRef; m: CGAffineTransformPtr; x: CGFloat; y: CGFloat; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat; clockwise: cbool); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddArcToPoint(path: CGMutablePathRef; m: CGAffineTransformPtr; x1: CGFloat; y1: CGFloat; x2: CGFloat; y2: CGFloat; radius: CGFloat); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGPathAddPath(path1: CGMutablePathRef; m: CGAffineTransformPtr; path2: CGPathRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathIsEmpty(path: CGPathRef): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathIsRect(path: CGPathRef; var rect: CGRect): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathGetCurrentPoint(path: CGPathRef): CGPoint; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathGetBoundingBox(path: CGPathRef): CGRect; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPathGetPathBoundingBox(path: CGPathRef): CGRect; cdecl; external; { available starting in __MAC_10_6, __IPHONE_4_0 }
function CGPathContainsPoint(path: CGPathRef; m: CGAffineTransformPtr; point: CGPoint; eoFill: cbool): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
const
  kCGPathElementMoveToPoint = 0;
  kCGPathElementAddLineToPoint = 1;
  kCGPathElementAddQuadCurveToPoint = 2;
  kCGPathElementAddCurveToPoint = 3;
  kCGPathElementCloseSubpath = 4;

type
  CGPathElementType = clong;
  CGPathElementTypePtr = ^CGPathElementType;

type
  CGPathElement = record
    type_: CGPathElementType;
    points: CGPointPtr;
  end;
type
  CGPathElementPtr = ^CGPathElement;

type
  CGPathApplierFunction = procedure (info: pointer; element: CGPathElementPtr); cdecl;
{$endif}

{$ifdef FUNCTIONS}
procedure CGPathApply(path: CGPathRef; info: pointer; function_: CGPathApplierFunction); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
{$endif}

{$endif}
