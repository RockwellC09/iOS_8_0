{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFNumberFormatter.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFNUMBERFORMATTER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFNUMBERFORMATTER__ = 1;

type
  CFNumberFormatterRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFNumberFormatterGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFNumberFormatterStyle = CFIndex;
  CFNumberFormatterStylePtr = ^CFNumberFormatterStyle;

const
  kCFNumberFormatterNoStyle = 0;
  kCFNumberFormatterDecimalStyle = 1;
  kCFNumberFormatterCurrencyStyle = 2;
  kCFNumberFormatterPercentStyle = 3;
  kCFNumberFormatterScientificStyle = 4;
  kCFNumberFormatterSpellOutStyle = 5;
{$endif}

{$ifdef FUNCTIONS}
function CFNumberFormatterCreate(allocator: CFAllocatorRef; locale: CFLocaleRef; style: CFNumberFormatterStyle): CFNumberFormatterRef; cdecl; external;
function CFNumberFormatterGetLocale(formatter: CFNumberFormatterRef): CFLocaleRef; cdecl; external;
function CFNumberFormatterGetStyle(formatter: CFNumberFormatterRef): CFNumberFormatterStyle; cdecl; external;
function CFNumberFormatterGetFormat(formatter: CFNumberFormatterRef): CFStringRef; cdecl; external;
procedure CFNumberFormatterSetFormat(formatter: CFNumberFormatterRef; formatString: CFStringRef); cdecl; external;
function CFNumberFormatterCreateStringWithNumber(allocator: CFAllocatorRef; formatter: CFNumberFormatterRef; number: CFNumberRef): CFStringRef; cdecl; external;
function CFNumberFormatterCreateStringWithValue(allocator: CFAllocatorRef; formatter: CFNumberFormatterRef; numberType: CFNumberType; valuePtr: pointer): CFStringRef; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFNumberFormatterOptionFlags = CFOptionFlags;
  CFNumberFormatterOptionFlagsPtr = ^CFNumberFormatterOptionFlags;

const
  kCFNumberFormatterParseIntegersOnly = 1;
{$endif}

{$ifdef FUNCTIONS}
function CFNumberFormatterCreateNumberFromString(allocator: CFAllocatorRef; formatter: CFNumberFormatterRef; string_: CFStringRef; rangep: CFRangePtr; options: CFOptionFlags): CFNumberRef; cdecl; external;
function CFNumberFormatterGetValueFromString(formatter: CFNumberFormatterRef; string_: CFStringRef; rangep: CFRangePtr; numberType: CFNumberType; valuePtr: pointer): Boolean; cdecl; external;
procedure CFNumberFormatterSetProperty(formatter: CFNumberFormatterRef; key: CFStringRef; value: CFTypeRef); cdecl; external;
function CFNumberFormatterCopyProperty(formatter: CFNumberFormatterRef; key: CFStringRef): CFTypeRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFNumberFormatterCurrencyCode: CFStringRef; cvar; external;
  kCFNumberFormatterDecimalSeparator: CFStringRef; cvar; external;
  kCFNumberFormatterCurrencyDecimalSeparator: CFStringRef; cvar; external;
  kCFNumberFormatterAlwaysShowDecimalSeparator: CFStringRef; cvar; external;
  kCFNumberFormatterGroupingSeparator: CFStringRef; cvar; external;
  kCFNumberFormatterUseGroupingSeparator: CFStringRef; cvar; external;
  kCFNumberFormatterPercentSymbol: CFStringRef; cvar; external;
  kCFNumberFormatterZeroSymbol: CFStringRef; cvar; external;
  kCFNumberFormatterNaNSymbol: CFStringRef; cvar; external;
  kCFNumberFormatterInfinitySymbol: CFStringRef; cvar; external;
  kCFNumberFormatterMinusSign: CFStringRef; cvar; external;
  kCFNumberFormatterPlusSign: CFStringRef; cvar; external;
  kCFNumberFormatterCurrencySymbol: CFStringRef; cvar; external;
  kCFNumberFormatterExponentSymbol: CFStringRef; cvar; external;
  kCFNumberFormatterMinIntegerDigits: CFStringRef; cvar; external;
  kCFNumberFormatterMaxIntegerDigits: CFStringRef; cvar; external;
  kCFNumberFormatterMinFractionDigits: CFStringRef; cvar; external;
  kCFNumberFormatterMaxFractionDigits: CFStringRef; cvar; external;
  kCFNumberFormatterGroupingSize: CFStringRef; cvar; external;
  kCFNumberFormatterSecondaryGroupingSize: CFStringRef; cvar; external;
  kCFNumberFormatterRoundingMode: CFStringRef; cvar; external;
  kCFNumberFormatterRoundingIncrement: CFStringRef; cvar; external;
  kCFNumberFormatterFormatWidth: CFStringRef; cvar; external;
  kCFNumberFormatterPaddingPosition: CFStringRef; cvar; external;
  kCFNumberFormatterPaddingCharacter: CFStringRef; cvar; external;
  kCFNumberFormatterDefaultFormat: CFStringRef; cvar; external;
  kCFNumberFormatterMultiplier: CFStringRef; cvar; external;
  kCFNumberFormatterPositivePrefix: CFStringRef; cvar; external;
  kCFNumberFormatterPositiveSuffix: CFStringRef; cvar; external;
  kCFNumberFormatterNegativePrefix: CFStringRef; cvar; external;
  kCFNumberFormatterNegativeSuffix: CFStringRef; cvar; external;
  kCFNumberFormatterPerMillSymbol: CFStringRef; cvar; external;
  kCFNumberFormatterInternationalCurrencySymbol: CFStringRef; cvar; external;
  kCFNumberFormatterCurrencyGroupingSeparator: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterIsLenient: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterUseSignificantDigits: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterMinSignificantDigits: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFNumberFormatterMaxSignificantDigits: CFStringRef { available in 10_5, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFNumberFormatterRoundingMode = CFIndex;
  CFNumberFormatterRoundingModePtr = ^CFNumberFormatterRoundingMode;

const
  kCFNumberFormatterRoundCeiling = 0;
  kCFNumberFormatterRoundFloor = 1;
  kCFNumberFormatterRoundDown = 2;
  kCFNumberFormatterRoundUp = 3;
  kCFNumberFormatterRoundHalfEven = 4;
  kCFNumberFormatterRoundHalfDown = 5;
  kCFNumberFormatterRoundHalfUp = 6;

type
  CFNumberFormatterPadPosition = CFIndex;
  CFNumberFormatterPadPositionPtr = ^CFNumberFormatterPadPosition;

const
  kCFNumberFormatterPadBeforePrefix = 0;
  kCFNumberFormatterPadAfterPrefix = 1;
  kCFNumberFormatterPadBeforeSuffix = 2;
  kCFNumberFormatterPadAfterSuffix = 3;
{$endif}

{$ifdef FUNCTIONS}
function CFNumberFormatterGetDecimalInfoForCurrencyCode(currencyCode: CFStringRef; defaultFractionDigits: pcint32; roundingIncrement: pdouble): Boolean; cdecl; external;
{$endif}

{$endif}
