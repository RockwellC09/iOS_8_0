{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFDateFormatter.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFDATEFORMATTER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFDATEFORMATTER__ = 1;

type
  CFDateFormatterRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFDateFormatterCreateDateFormatFromTemplate(allocator: CFAllocatorRef; tmplate: CFStringRef; options: CFOptionFlags; locale: CFLocaleRef): CFStringRef; cdecl; external; { available in 10_6, 4_0 }
function CFDateFormatterGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  CFDateFormatterStyle = CFIndex;
  CFDateFormatterStylePtr = ^CFDateFormatterStyle;

const
  kCFDateFormatterNoStyle = 0;
  kCFDateFormatterShortStyle = 1;
  kCFDateFormatterMediumStyle = 2;
  kCFDateFormatterLongStyle = 3;
  kCFDateFormatterFullStyle = 4;
{$endif}

{$ifdef FUNCTIONS}
function CFDateFormatterCreate(allocator: CFAllocatorRef; locale: CFLocaleRef; dateStyle: CFDateFormatterStyle; timeStyle: CFDateFormatterStyle): CFDateFormatterRef; cdecl; external;
function CFDateFormatterGetLocale(formatter: CFDateFormatterRef): CFLocaleRef; cdecl; external;
function CFDateFormatterGetDateStyle(formatter: CFDateFormatterRef): CFDateFormatterStyle; cdecl; external;
function CFDateFormatterGetTimeStyle(formatter: CFDateFormatterRef): CFDateFormatterStyle; cdecl; external;
function CFDateFormatterGetFormat(formatter: CFDateFormatterRef): CFStringRef; cdecl; external;
procedure CFDateFormatterSetFormat(formatter: CFDateFormatterRef; formatString: CFStringRef); cdecl; external;
function CFDateFormatterCreateStringWithDate(allocator: CFAllocatorRef; formatter: CFDateFormatterRef; date: CFDateRef): CFStringRef; cdecl; external;
function CFDateFormatterCreateStringWithAbsoluteTime(allocator: CFAllocatorRef; formatter: CFDateFormatterRef; at: CFAbsoluteTime): CFStringRef; cdecl; external;
function CFDateFormatterCreateDateFromString(allocator: CFAllocatorRef; formatter: CFDateFormatterRef; string_: CFStringRef; rangep: CFRangePtr): CFDateRef; cdecl; external;
function CFDateFormatterGetAbsoluteTimeFromString(formatter: CFDateFormatterRef; string_: CFStringRef; rangep: CFRangePtr; atp: CFAbsoluteTimePtr): Boolean; cdecl; external;
procedure CFDateFormatterSetProperty(formatter: CFDateFormatterRef; key: CFStringRef; value: CFTypeRef); cdecl; external;
function CFDateFormatterCopyProperty(formatter: CFDateFormatterRef; key: CFStringRef): CFTypeRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFDateFormatterIsLenient: CFStringRef; cvar; external;
  kCFDateFormatterTimeZone: CFStringRef; cvar; external;
  kCFDateFormatterCalendarName: CFStringRef; cvar; external;
  kCFDateFormatterDefaultFormat: CFStringRef; cvar; external;
  kCFDateFormatterTwoDigitStartDate: CFStringRef; cvar; external;
  kCFDateFormatterDefaultDate: CFStringRef; cvar; external;
  kCFDateFormatterCalendar: CFStringRef; cvar; external;
  kCFDateFormatterEraSymbols: CFStringRef; cvar; external;
  kCFDateFormatterMonthSymbols: CFStringRef; cvar; external;
  kCFDateFormatterShortMonthSymbols: CFStringRef; cvar; external;
  kCFDateFormatterWeekdaySymbols: CFStringRef; cvar; external;
  kCFDateFormatterShortWeekdaySymbols: CFStringRef; cvar; external;
  kCFDateFormatterAMSymbol: CFStringRef; cvar; external;
  kCFDateFormatterPMSymbol: CFStringRef; cvar; external;
  kCFDateFormatterLongEraSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortMonthSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterStandaloneMonthSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortStandaloneMonthSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortStandaloneMonthSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortWeekdaySymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterStandaloneWeekdaySymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortStandaloneWeekdaySymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterVeryShortStandaloneWeekdaySymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterQuarterSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortQuarterSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterStandaloneQuarterSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterShortStandaloneQuarterSymbols: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterGregorianStartDate: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFDateFormatterDoesRelativeDateFormattingKey: CFStringRef { available in 10_6, 4_0 }; cvar; external;
{$endif}

{$endif}
