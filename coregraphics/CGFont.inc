{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGFont.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGFONT_H_}
{$ifdef TYPES}
type
  CGFontRef = OpaqueType;
  CGFontIndex = cushort;
  CGFontIndexPtr = ^CGFontIndex;
  CGGlyph = CGFontIndex;
  CGGlyphPtr = ^CGGlyph;

const
  kCGFontPostScriptFormatType1 = 1;
  kCGFontPostScriptFormatType3 = 3;
  kCGFontPostScriptFormatType42 = 42;

type
  CGFontPostScriptFormat = clong;
  CGFontPostScriptFormatPtr = ^CGFontPostScriptFormat;

const
  kCGFontIndexMax = 1 shl 16;
  kCGFontIndexInvalid = 1 shl 16;
  kCGGlyphMax = kCGFontIndexMax;
{$endif}

{$ifdef FUNCTIONS}
function CGFontGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGFontCreateWithPlatformFont(platformFontReference: pointer): CGFontRef; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_6,    __IPHONE_NA, __IPHONE_NA';
function CGFontCreateWithDataProvider(provider: CGDataProviderRef): CGFontRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCreateWithFontName(name: CFStringRef): CGFontRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCreateCopyWithVariations(font: CGFontRef; variations: CFDictionaryRef): CGFontRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontRetain(font: CGFontRef): CGFontRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGFontRelease(font: CGFontRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontGetNumberOfGlyphs(font: CGFontRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontGetUnitsPerEm(font: CGFontRef): cint; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontCopyPostScriptName(font: CGFontRef): CFStringRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCopyFullName(font: CGFontRef): CFStringRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetAscent(font: CGFontRef): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetDescent(font: CGFontRef): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetLeading(font: CGFontRef): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetCapHeight(font: CGFontRef): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetXHeight(font: CGFontRef): cint; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetFontBBox(font: CGFontRef): CGRect; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetItalicAngle(font: CGFontRef): CGFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetStemV(font: CGFontRef): CGFloat; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCopyVariationAxes(font: CGFontRef): CFArrayRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCopyVariations(font: CGFontRef): CFDictionaryRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontGetGlyphAdvances(font: CGFontRef; glyphs: CGGlyphPtr { variable size array of CGGlyph }; count: size_t; advances: pcint { variable size array of cint }): cbool; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGFontGetGlyphBBoxes(font: CGFontRef; glyphs: CGGlyphPtr { variable size array of CGGlyph }; count: size_t; bboxes: CGRectPtr { variable size array of CGRect }): cbool; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontGetGlyphWithGlyphName(font: CGFontRef; name: CFStringRef): CGGlyph; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCopyGlyphNameForGlyph(font: CGFontRef; glyph: CGGlyph): CFStringRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCanCreatePostScriptSubset(font: CGFontRef; format: CGFontPostScriptFormat): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCreatePostScriptSubset(font: CGFontRef; subsetName: CFStringRef; format: CGFontPostScriptFormat; glyphs: CGGlyphPtr { variable size array of CGGlyph }; count: size_t; encoding: CGGlyphPtr { 6 element array of CGGlyph }): CFDataRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCreatePostScriptEncoding(font: CGFontRef; encoding: CGGlyphPtr { 6 element array of CGGlyph }): CFDataRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGFontCopyTableTags(font: CGFontRef): CFArrayRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function CGFontCopyTableForTag(font: CGFontRef; tag: cuint32): CFDataRef; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGFontVariationAxisName: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGFontVariationAxisMinValue: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGFontVariationAxisMaxValue: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGFontVariationAxisDefaultValue: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  CGGlyphMin = 0;
  __CG_DEPRECATED_ENUMERATOR = 1;
  CGGlyphMax = 2;
{$endif}

{$endif}
