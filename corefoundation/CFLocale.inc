{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFLocale.h }
{ Created on Fri Mar 20 2:11:35 2015 }

{$if  not (defined(__COREFOUNDATION_CFLOCALE__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFLOCALE__ = 1;

type
  CFLocaleRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFLocaleGetTypeID: CFTypeID; cdecl; external;
function CFLocaleGetSystem: CFLocaleRef; cdecl; external;
function CFLocaleCopyCurrent: CFLocaleRef; cdecl; external;
function CFLocaleCopyAvailableLocaleIdentifiers: CFArrayRef; cdecl; external;
function CFLocaleCopyISOLanguageCodes: CFArrayRef; cdecl; external;
function CFLocaleCopyISOCountryCodes: CFArrayRef; cdecl; external;
function CFLocaleCopyISOCurrencyCodes: CFArrayRef; cdecl; external;
function CFLocaleCopyCommonISOCurrencyCodes: CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
function CFLocaleCopyPreferredLanguages: CFArrayRef; cdecl; external; { available in 10_5, 2_0 }
function CFLocaleCreateCanonicalLanguageIdentifierFromString(allocator: CFAllocatorRef; localeIdentifier: CFStringRef): CFStringRef; cdecl; external;
function CFLocaleCreateCanonicalLocaleIdentifierFromString(allocator: CFAllocatorRef; localeIdentifier: CFStringRef): CFStringRef; cdecl; external;
function CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes(allocator: CFAllocatorRef; lcode: LangCode; rcode: RegionCode): CFStringRef; cdecl; external;
function CFLocaleCreateLocaleIdentifierFromWindowsLocaleCode(allocator: CFAllocatorRef; lcid: cuint32): CFStringRef; cdecl; external; { available in 10_6, 4_0 }
function CFLocaleGetWindowsLocaleCodeFromLocaleIdentifier(localeIdentifier: CFStringRef): cuint32; cdecl; external; { available in 10_6, 4_0 }
{$endif}

{$ifdef TYPES}
type
  CFLocaleLanguageDirection = CFIndex;
  CFLocaleLanguageDirectionPtr = ^CFLocaleLanguageDirection;

const
  kCFLocaleLanguageDirectionUnknown = 0;
  kCFLocaleLanguageDirectionLeftToRight = 1;
  kCFLocaleLanguageDirectionRightToLeft = 2;
  kCFLocaleLanguageDirectionTopToBottom = 3;
  kCFLocaleLanguageDirectionBottomToTop = 4;
{$endif}

{$ifdef FUNCTIONS}
function CFLocaleGetLanguageCharacterDirection(isoLangCode: CFStringRef): CFLocaleLanguageDirection; cdecl; external; { available in 10_6, 4_0 }
function CFLocaleGetLanguageLineDirection(isoLangCode: CFStringRef): CFLocaleLanguageDirection; cdecl; external; { available in 10_6, 4_0 }
function CFLocaleCreateComponentsFromLocaleIdentifier(allocator: CFAllocatorRef; localeID: CFStringRef): CFDictionaryRef; cdecl; external;
function CFLocaleCreateLocaleIdentifierFromComponents(allocator: CFAllocatorRef; dictionary: CFDictionaryRef): CFStringRef; cdecl; external;
function CFLocaleCreate(allocator: CFAllocatorRef; localeIdentifier: CFStringRef): CFLocaleRef; cdecl; external;
function CFLocaleCreateCopy(allocator: CFAllocatorRef; locale: CFLocaleRef): CFLocaleRef; cdecl; external;
function CFLocaleGetIdentifier(locale: CFLocaleRef): CFStringRef; cdecl; external;
function CFLocaleGetValue(locale: CFLocaleRef; key: CFStringRef): CFTypeRef; cdecl; external;
function CFLocaleCopyDisplayNameForPropertyValue(displayLocale: CFLocaleRef; key: CFStringRef; value: CFStringRef): CFStringRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFLocaleCurrentLocaleDidChangeNotification: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFLocaleIdentifier: CFStringRef; cvar; external;
  kCFLocaleLanguageCode: CFStringRef; cvar; external;
  kCFLocaleCountryCode: CFStringRef; cvar; external;
  kCFLocaleScriptCode: CFStringRef; cvar; external;
  kCFLocaleVariantCode: CFStringRef; cvar; external;
  kCFLocaleExemplarCharacterSet: CFStringRef; cvar; external;
  kCFLocaleCalendarIdentifier: CFStringRef; cvar; external;
  kCFLocaleCalendar: CFStringRef; cvar; external;
  kCFLocaleCollationIdentifier: CFStringRef; cvar; external;
  kCFLocaleUsesMetricSystem: CFStringRef; cvar; external;
  kCFLocaleMeasurementSystem: CFStringRef; cvar; external;
  kCFLocaleDecimalSeparator: CFStringRef; cvar; external;
  kCFLocaleGroupingSeparator: CFStringRef; cvar; external;
  kCFLocaleCurrencySymbol: CFStringRef; cvar; external;
  kCFLocaleCurrencyCode: CFStringRef; cvar; external;
  kCFLocaleCollatorIdentifier: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleQuotationBeginDelimiterKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleQuotationEndDelimiterKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleAlternateQuotationBeginDelimiterKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFLocaleAlternateQuotationEndDelimiterKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFGregorianCalendar: CFStringRef; cvar; external;
  kCFBuddhistCalendar: CFStringRef; cvar; external;
  kCFChineseCalendar: CFStringRef; cvar; external;
  kCFHebrewCalendar: CFStringRef; cvar; external;
  kCFIslamicCalendar: CFStringRef; cvar; external;
  kCFIslamicCivilCalendar: CFStringRef; cvar; external;
  kCFJapaneseCalendar: CFStringRef; cvar; external;
  kCFRepublicOfChinaCalendar: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFPersianCalendar: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFIndianCalendar: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFISO8601Calendar: CFStringRef { available in 10_6, 4_0 }; cvar; external;
  kCFIslamicTabularCalendar: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCFIslamicUmmAlQuraCalendar: CFStringRef { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$endif}
