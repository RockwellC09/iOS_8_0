{ Parsed from CoreText.framework (iPhoneOS8.2) CTStringAttributes.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTSTRINGATTRIBUTES__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTForegroundColorFromContextAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTKernAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTLigatureAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTForegroundColorAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTParagraphStyleAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTStrokeWidthAttributeName: CFStringRef { available in 10_6, 3_2 }; cvar; external;
  kCTStrokeColorAttributeName: CFStringRef { available in 10_6, 3_2 }; cvar; external;
  kCTUnderlineStyleAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTSuperscriptAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTUnderlineColorAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTVerticalFormsAttributeName: CFStringRef { available in 10_5, 4_3 }; cvar; external;
  kCTGlyphInfoAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTCharacterShapeAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTLanguageAttributeName: CFStringRef { available in 10_9, 7_0 }; cvar; external;
  kCTRunDelegateAttributeName: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTUnderlineStyle = cint32;
  CTUnderlineStylePtr = ^CTUnderlineStyle;

const
  kCTUnderlineStyleNone = $00;
  kCTUnderlineStyleSingle = $01;
  kCTUnderlineStyleThick = $02;
  kCTUnderlineStyleDouble = $09;

type
  CTUnderlineStyleModifiers = cint32;
  CTUnderlineStyleModifiersPtr = ^CTUnderlineStyleModifiers;

const
  kCTUnderlinePatternSolid = $0000;
  kCTUnderlinePatternDot = $0100;
  kCTUnderlinePatternDash = $0200;
  kCTUnderlinePatternDashDot = $0300;
  kCTUnderlinePatternDashDotDot = $0400;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTBaselineClassAttributeName: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineInfoAttributeName: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineReferenceInfoAttributeName: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTWritingDirectionAttributeName: CFStringRef { available in 10_8, 6_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kCTWritingDirectionEmbedding = 0 shl 1;
  kCTWritingDirectionOverride = 1 shl 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTRubyAnnotationAttributeName: CFStringRef { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$endif}
