{ Parsed from CFNetwork.framework (iPhoneOS8.2) CFHTTPAuthentication.h }
{ Created on Fri Mar 20 2:09:44 2015 }

{$ifndef __CFHTTPAUTHENTICATION__}

{$ifdef TYPES}
type
  CFHTTPAuthenticationRef = OpaqueType;
  CFStreamErrorHTTPAuthentication = cint;
  CFStreamErrorHTTPAuthenticationPtr = ^CFStreamErrorHTTPAuthentication;

const
  kCFStreamErrorHTTPAuthenticationTypeUnsupported = -1000;
  kCFStreamErrorHTTPAuthenticationBadUserName = -1001;
  kCFStreamErrorHTTPAuthenticationBadPassword = -1002;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFHTTPAuthenticationUsername: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFHTTPAuthenticationPassword: CFStringRef { available in 10_4, 2_0 }; cvar; external;
  kCFHTTPAuthenticationAccountDomain: CFStringRef { available in 10_4, 2_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFHTTPAuthenticationGetTypeID: CFTypeID; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPAuthenticationCreateFromResponse(alloc: CFAllocatorRef; response: CFHTTPMessageRef): CFHTTPAuthenticationRef; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPAuthenticationIsValid(auth: CFHTTPAuthenticationRef; error: CFStreamErrorPtr): Boolean; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPAuthenticationAppliesToRequest(auth: CFHTTPAuthenticationRef; request: CFHTTPMessageRef): Boolean; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPAuthenticationRequiresOrderedRequests(auth: CFHTTPAuthenticationRef): Boolean; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPMessageApplyCredentials(request: CFHTTPMessageRef; auth: CFHTTPAuthenticationRef; username: CFStringRef; password: CFStringRef; error: CFStreamErrorPtr): Boolean; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPMessageApplyCredentialDictionary(request: CFHTTPMessageRef; auth: CFHTTPAuthenticationRef; dict: CFDictionaryRef; error: CFStreamErrorPtr): Boolean; cdecl; external; { available in 10_4, 2_0 }
function CFHTTPAuthenticationCopyRealm(auth: CFHTTPAuthenticationRef): CFStringRef; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPAuthenticationCopyDomains(auth: CFHTTPAuthenticationRef): CFArrayRef; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPAuthenticationCopyMethod(auth: CFHTTPAuthenticationRef): CFStringRef; cdecl; external; { available in 10_2, 2_0 }
function CFHTTPAuthenticationRequiresUserNameAndPassword(auth: CFHTTPAuthenticationRef): Boolean; cdecl; external; { available in 10_3, 2_0 }
function CFHTTPAuthenticationRequiresAccountDomain(auth: CFHTTPAuthenticationRef): Boolean; cdecl; external; { available in 10_4, 2_0 }
{$endif}

{$endif}
