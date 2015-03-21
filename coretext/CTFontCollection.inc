{ Parsed from CoreText.framework (iPhoneOS8.2) CTFontCollection.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTFONTCOLLECTION__}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTFontCollectionRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTFontCollectionRef = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  CTMutableFontCollectionRef = OpaqueType;
  CTFontCollectionSortDescriptorsCallback = function (first: CTFontDescriptorRef; second: CTFontDescriptorRef; refCon: pointer): CFComparisonResult; cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontCollectionRemoveDuplicatesOption: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontCollectionIncludeDisabledFontsOption: CFStringRef { available in 10_7 }; cvar; external;
  kCTFontCollectionDisallowAutoActivationOption: CFStringRef { available in 10_7 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kCTFontCollectionCopyDefaultOptions = 0;
  kCTFontCollectionCopyUnique = 1 shl 0;
  kCTFontCollectionCopyStandardSort = 1 shl 1;

type
  CTFontCollectionCopyOptions = cuint32;
  CTFontCollectionCopyOptionsPtr = ^CTFontCollectionCopyOptions;
{$endif}

{$endif}
