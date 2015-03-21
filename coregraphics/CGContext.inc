{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGContext.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGCONTEXT_H_}
{$ifdef TYPES}
 type
  CAEdgeAntiAliasingMask = OpaqueType;
  
const
  kCGPathFill = 0;
  kCGPathEOFill = 1;
  kCGPathStroke = 2;
  kCGPathFillStroke = 3;
  kCGPathEOFillStroke = 4;

type
  CGPathDrawingMode = clong;
  CGPathDrawingModePtr = ^CGPathDrawingMode;

const
  kCGTextFill = 0;
  kCGTextStroke = 1;
  kCGTextFillStroke = 2;
  kCGTextInvisible = 3;
  kCGTextFillClip = 4;
  kCGTextStrokeClip = 5;
  kCGTextFillStrokeClip = 6;
  kCGTextClip = 7;

type
  CGTextDrawingMode = clong;
  CGTextDrawingModePtr = ^CGTextDrawingMode;

const
  kCGEncodingFontSpecific = 0;
  kCGEncodingMacRoman = 1;

type
  CGTextEncoding = clong deprecated 'in __MAC_10_0, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';
  CGTextEncodingPtr = ^CGTextEncoding deprecated 'in __MAC_10_0, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';

const
  kCGInterpolationDefault = 0;
  kCGInterpolationNone = 1;
  kCGInterpolationLow = 2;
  kCGInterpolationMedium = 4;
  kCGInterpolationHigh = 3;

type
  CGInterpolationQuality = clong;
  CGInterpolationQualityPtr = ^CGInterpolationQuality;

const
  kCGBlendModeNormal = 0;
  kCGBlendModeMultiply = 1;
  kCGBlendModeScreen = 2;
  kCGBlendModeOverlay = 3;
  kCGBlendModeDarken = 4;
  kCGBlendModeLighten = 5;
  kCGBlendModeColorDodge = 6;
  kCGBlendModeColorBurn = 7;
  kCGBlendModeSoftLight = 8;
  kCGBlendModeHardLight = 9;
  kCGBlendModeDifference = 10;
  kCGBlendModeExclusion = 11;
  kCGBlendModeHue = 12;
  kCGBlendModeSaturation = 13;
  kCGBlendModeColor = 14;
  kCGBlendModeLuminosity = 15;
  kCGBlendModeClear = 16;
  kCGBlendModeCopy = 17;
  kCGBlendModeSourceIn = 18;
  kCGBlendModeSourceOut = 19;
  kCGBlendModeSourceAtop = 20;
  kCGBlendModeDestinationOver = 21;
  kCGBlendModeDestinationIn = 22;
  kCGBlendModeDestinationOut = 23;
  kCGBlendModeDestinationAtop = 24;
  kCGBlendModeXOR = 25;
  kCGBlendModePlusDarker = 26;
  kCGBlendModePlusLighter = 27;

type
  CGBlendMode = clong;
  CGBlendModePtr = ^CGBlendMode;
{$endif}

{$ifdef FUNCTIONS}
function CGContextGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSaveGState(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextRestoreGState(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextScaleCTM(c: CGContextRef; sx: CGFloat; sy: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextTranslateCTM(c: CGContextRef; tx: CGFloat; ty: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextRotateCTM(c: CGContextRef; angle: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextConcatCTM(c: CGContextRef; transform: CGAffineTransform); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetCTM(c: CGContextRef): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineWidth(c: CGContextRef; width: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineCap(c: CGContextRef; cap: CGLineCap); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineJoin(c: CGContextRef; join: CGLineJoin); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetMiterLimit(c: CGContextRef; limit: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetLineDash(c: CGContextRef; phase: CGFloat; lengths: CGFloatPtr { variable size array of CGFloat }; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFlatness(c: CGContextRef; flatness: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetAlpha(c: CGContextRef; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetBlendMode(context: CGContextRef; mode: CGBlendMode); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextBeginPath(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextMoveToPoint(c: CGContextRef; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddLineToPoint(c: CGContextRef; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddCurveToPoint(c: CGContextRef; cp1x: CGFloat; cp1y: CGFloat; cp2x: CGFloat; cp2y: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddQuadCurveToPoint(c: CGContextRef; cpx: CGFloat; cpy: CGFloat; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClosePath(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddRect(c: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddRects(c: CGContextRef; rects: CGRectPtr { variable size array of CGRect }; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddLines(c: CGContextRef; points: CGPointPtr { variable size array of CGPoint }; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddEllipseInRect(context: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextAddArc(c: CGContextRef; x: CGFloat; y: CGFloat; radius: CGFloat; startAngle: CGFloat; endAngle: CGFloat; clockwise: cint); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddArcToPoint(c: CGContextRef; x1: CGFloat; y1: CGFloat; x2: CGFloat; y2: CGFloat; radius: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextAddPath(context: CGContextRef; path: CGPathRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextReplacePathWithStrokedPath(c: CGContextRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextIsPathEmpty(context: CGContextRef): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetPathCurrentPoint(context: CGContextRef): CGPoint; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetPathBoundingBox(context: CGContextRef): CGRect; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextCopyPath(context: CGContextRef): CGPathRef; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGContextPathContainsPoint(context: CGContextRef; point: CGPoint; mode: CGPathDrawingMode): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextDrawPath(c: CGContextRef; mode: CGPathDrawingMode); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillPath(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextEOFillPath(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextStrokePath(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillRect(c: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillRects(c: CGContextRef; rects: CGRectPtr { variable size array of CGRect }; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextStrokeRect(c: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextStrokeRectWithWidth(c: CGContextRef; rect: CGRect; width: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClearRect(c: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFillEllipseInRect(context: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextStrokeEllipseInRect(context: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextStrokeLineSegments(c: CGContextRef; points: CGPointPtr { variable size array of CGPoint }; count: size_t); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextClip(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextEOClip(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClipToMask(c: CGContextRef; rect: CGRect; mask: CGImageRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextGetClipBoundingBox(c: CGContextRef): CGRect; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextClipToRect(c: CGContextRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextClipToRects(c: CGContextRef; rects: CGRectPtr { variable size array of CGRect }; count: size_t); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFillColorWithColor(c: CGContextRef; color: CGColorRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextSetStrokeColorWithColor(c: CGContextRef; color: CGColorRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextSetFillColorSpace(context: CGContextRef; space: CGColorSpaceRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetStrokeColorSpace(context: CGContextRef; space: CGColorSpaceRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFillColor(context: CGContextRef; components: CGFloatPtr { variable size array of CGFloat }); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetStrokeColor(context: CGContextRef; components: CGFloatPtr { variable size array of CGFloat }); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFillPattern(context: CGContextRef; pattern: CGPatternRef; components: CGFloatPtr { variable size array of CGFloat }); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetStrokePattern(context: CGContextRef; pattern: CGPatternRef; components: CGFloatPtr { variable size array of CGFloat }); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetPatternPhase(context: CGContextRef; phase: CGSize); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetGrayFillColor(context: CGContextRef; gray: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetGrayStrokeColor(context: CGContextRef; gray: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetRGBFillColor(context: CGContextRef; red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetRGBStrokeColor(context: CGContextRef; red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetCMYKFillColor(context: CGContextRef; cyan: CGFloat; magenta: CGFloat; yellow: CGFloat; black: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetCMYKStrokeColor(context: CGContextRef; cyan: CGFloat; magenta: CGFloat; yellow: CGFloat; black: CGFloat; alpha: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetRenderingIntent(context: CGContextRef; intent: CGColorRenderingIntent); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextDrawImage(c: CGContextRef; rect: CGRect; image: CGImageRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextDrawTiledImage(c: CGContextRef; rect: CGRect; image: CGImageRef); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGContextGetInterpolationQuality(context: CGContextRef): CGInterpolationQuality; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetInterpolationQuality(context: CGContextRef; quality: CGInterpolationQuality); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetShadowWithColor(context: CGContextRef; offset: CGSize; blur: CGFloat; color: CGColorRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextSetShadow(context: CGContextRef; offset: CGSize; blur: CGFloat); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextDrawLinearGradient(context: CGContextRef; gradient: CGGradientRef; startPoint: CGPoint; endPoint: CGPoint; options: CGGradientDrawingOptions); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextDrawRadialGradient(context: CGContextRef; gradient: CGGradientRef; startCenter: CGPoint; startRadius: CGFloat; endCenter: CGPoint; endRadius: CGFloat; options: CGGradientDrawingOptions); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextDrawShading(context: CGContextRef; shading: CGShadingRef); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSetCharacterSpacing(context: CGContextRef; spacing: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetTextPosition(c: CGContextRef; x: CGFloat; y: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetTextPosition(context: CGContextRef): CGPoint; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetTextMatrix(c: CGContextRef; t: CGAffineTransform); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextGetTextMatrix(c: CGContextRef): CGAffineTransform; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetTextDrawingMode(c: CGContextRef; mode: CGTextDrawingMode); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFont(c: CGContextRef; font: CGFontRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetFontSize(c: CGContextRef; size: CGFloat); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextShowGlyphsAtPositions(context: CGContextRef; glyphs: CGGlyphPtr { variable size array of CGGlyph }; positions: CGPointPtr { variable size array of CGPoint }; count: size_t); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextDrawPDFPage(c: CGContextRef; page: CGPDFPageRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextBeginPage(c: CGContextRef; mediaBox: CGRectPtr); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextEndPage(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGContextRetain(c: CGContextRef): CGContextRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextRelease(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextFlush(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSynchronize(c: CGContextRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetShouldAntialias(context: CGContextRef; shouldAntialias: cbool); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGContextSetAllowsAntialiasing(context: CGContextRef; allowsAntialiasing: cbool); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextSetShouldSmoothFonts(context: CGContextRef; shouldSmoothFonts: cbool); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSetAllowsFontSmoothing(context: CGContextRef; allowsFontSmoothing: cbool); cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
procedure CGContextSetShouldSubpixelPositionFonts(context: CGContextRef; shouldSubpixelPositionFonts: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextSetAllowsFontSubpixelPositioning(context: CGContextRef; allowsFontSubpixelPositioning: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextSetShouldSubpixelQuantizeFonts(context: CGContextRef; shouldSubpixelQuantizeFonts: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextSetAllowsFontSubpixelQuantization(context: CGContextRef; allowsFontSubpixelQuantization: cbool); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextBeginTransparencyLayer(context: CGContextRef; auxiliaryInfo: CFDictionaryRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGContextBeginTransparencyLayerWithRect(context: CGContextRef; rect: CGRect; auxiliaryInfo: CFDictionaryRef); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGContextEndTransparencyLayer(context: CGContextRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGContextGetUserSpaceToDeviceSpaceTransform(context: CGContextRef): CGAffineTransform; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertPointToDeviceSpace(context: CGContextRef; point: CGPoint): CGPoint; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertPointToUserSpace(context: CGContextRef; point: CGPoint): CGPoint; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertSizeToDeviceSpace(context: CGContextRef; size: CGSize): CGSize; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertSizeToUserSpace(context: CGContextRef; size: CGSize): CGSize; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertRectToDeviceSpace(context: CGContextRef; rect: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGContextConvertRectToUserSpace(context: CGContextRef; rect: CGRect): CGRect; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGContextSelectFont(c: CGContextRef; name: PChar; size: CGFloat; textEncoding: CGTextEncoding); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowText(c: CGContextRef; string_: PChar; length: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowTextAtPoint(c: CGContextRef; x: CGFloat; y: CGFloat; string_: PChar; length: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowGlyphs(c: CGContextRef; g: CGGlyphPtr { variable size array of CGGlyph }; count: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowGlyphsAtPoint(context: CGContextRef; x: CGFloat; y: CGFloat; glyphs: CGGlyphPtr { variable size array of CGGlyph }; count: size_t); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextShowGlyphsWithAdvances(context: CGContextRef; glyphs: CGGlyphPtr { variable size array of CGGlyph }; advances: CGSizePtr { variable size array of CGSize }; count: size_t); cdecl; external; deprecated 'in __MAC_10_3, __MAC_10_9,    __IPHONE_2_0, __IPHONE_7_0';
procedure CGContextDrawPDFDocument(c: CGContextRef; rect: CGRect; document: CGPDFDocumentRef; page: cint); cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,    __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
