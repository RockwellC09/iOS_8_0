{ Parsed from CoreText.framework (iPhoneOS8.2) CTFontManagerErrors.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTFONTMANAGERERRORS__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontManagerErrorDomain: CFStringRef { available in 10_6, 3_2 }; cvar; external;
  kCTFontManagerErrorFontURLsKey: CFStringRef { available in 10_6, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontManagerError = CFIndex;
  CTFontManagerErrorPtr = ^CTFontManagerError;

const
  kCTFontManagerErrorFileNotFound = 101;
  kCTFontManagerErrorInsufficientPermissions = 102;
  kCTFontManagerErrorUnrecognizedFormat = 103;
  kCTFontManagerErrorInvalidFontData = 104;
  kCTFontManagerErrorAlreadyRegistered = 105;
  kCTFontManagerErrorNotRegistered = 201;
  kCTFontManagerErrorInUse = 202;
  kCTFontManagerErrorSystemRequired = 203;
{$endif}

{$endif}
