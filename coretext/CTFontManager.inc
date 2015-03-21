{ Parsed from CoreText.framework (iPhoneOS8.2) CTFontManager.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTFONTMANAGER__}

{$ifdef TYPES}
type
  CTFontManagerScope = cuint32;
  CTFontManagerScopePtr = ^CTFontManagerScope;

const
  kCTFontManagerScopeNone = 0;
  kCTFontManagerScopeProcess = 1;
  kCTFontManagerScopeUser = 2;
  kCTFontManagerScopeSession = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontManagerBundleIdentifier: CFStringRef { available in 10_6 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontManagerAutoActivationSetting = cuint32;
  CTFontManagerAutoActivationSettingPtr = ^CTFontManagerAutoActivationSetting;

const
  kCTFontManagerAutoActivationDefault = 0;
  kCTFontManagerAutoActivationDisabled = 1;
  kCTFontManagerAutoActivationEnabled = 2;
  kCTFontManagerAutoActivationPromptUser = 3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontManagerRegisteredFontsChangedNotification: CFStringRef { available in 10_6, 7_0 }; cvar; external;
{$endif}

{$endif}
