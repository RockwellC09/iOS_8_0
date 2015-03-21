{ Parsed from WebKit.framework (iPhoneOS8.2) WKError.h }
{ Created on Fri Mar 20 2:11:42 2015 }

{$if defined(WK_API_ENABLED)}
{$ifdef EXTERNAL_SYMBOLS}
var
  WKErrorDomain: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  WKErrorCode = NSInteger;
  WKErrorCodePtr = ^WKErrorCode;

const
  WKErrorUnknown = 1;
  WKErrorWebContentProcessTerminated = 2;
  WKErrorWebViewInvalidated = 3;
  WKErrorJavaScriptExceptionOccurred = 4;
{$endif}

{$endif}
