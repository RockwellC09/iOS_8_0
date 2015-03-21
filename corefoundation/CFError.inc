{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFError.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFERROR__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFERROR__ = 1;

type
  CFErrorRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CFErrorGetTypeID: CFTypeID; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFErrorDomainPOSIX: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDomainOSStatus: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDomainMach: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDomainCocoa: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorLocalizedDescriptionKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorLocalizedFailureReasonKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorLocalizedRecoverySuggestionKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorDescriptionKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorUnderlyingErrorKey: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFErrorURLKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
  kCFErrorFilePathKey: CFStringRef { available in 10_7, 5_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFErrorCreate(allocator: CFAllocatorRef; domain: CFStringRef; code: CFIndex; userInfo: CFDictionaryRef): CFErrorRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCreateWithUserInfoKeysAndValues(allocator: CFAllocatorRef; domain: CFStringRef; code: CFIndex; userInfoKeys: pointer; userInfoValues: pointer; numUserInfoValues: CFIndex): CFErrorRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorGetDomain(err: CFErrorRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorGetCode(err: CFErrorRef): CFIndex; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyUserInfo(err: CFErrorRef): CFDictionaryRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyDescription(err: CFErrorRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyFailureReason(err: CFErrorRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
function CFErrorCopyRecoverySuggestion(err: CFErrorRef): CFStringRef; cdecl; external; { available in 10_5, 2_0 }
{$endif}

{$endif}
