{ Parsed from CFNetwork.framework (iPhoneOS8.2) CFHTTPStream.h }
{ Created on Fri Mar 20 2:09:44 2015 }

{$ifndef __CFHTTPSTREAM__}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamErrorDomainHTTP: SInt32 { available in 10_1, 2_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CFStreamErrorHTTP = cint;
  CFStreamErrorHTTPPtr = ^CFStreamErrorHTTP;

const
  kCFStreamErrorHTTPParseFailure = -1;
  kCFStreamErrorHTTPRedirectionLoop = -2;
  kCFStreamErrorHTTPBadURL = -3;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCFStreamPropertyHTTPResponseHeader: CFStringRef { available in 10_1, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPFinalURL: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPFinalRequest: CFStringRef { available in 10_5, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPProxy: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPProxyHost: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPProxyPort: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPSProxyHost: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPSProxyPort: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPShouldAutoredirect: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPAttemptPersistentConnection: CFStringRef { available in 10_2, 2_0 }; cvar; external;
  kCFStreamPropertyHTTPRequestBytesWrittenCount: CFStringRef { available in 10_3, 2_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CFReadStreamCreateForHTTPRequest(alloc: CFAllocatorRef; request: CFHTTPMessageRef): CFReadStreamRef; cdecl; external; { available in 10_1, 2_0 }
function CFReadStreamCreateForStreamedHTTPRequest(alloc: CFAllocatorRef; requestHeaders: CFHTTPMessageRef; requestBody: CFReadStreamRef): CFReadStreamRef; cdecl; external; { available in 10_2, 2_0 }
procedure CFHTTPReadStreamSetRedirectsAutomatically(httpStream: CFReadStreamRef; shouldAutoRedirect: Boolean); cdecl; external; deprecated 'in 10_1, 10_3, NA, NA';
{$endif}

{$endif}
