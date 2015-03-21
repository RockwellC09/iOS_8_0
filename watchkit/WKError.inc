{ Parsed from WatchKit.framework (iPhoneOS8.2) WKError.h }
{ Created on Fri Mar 20 2:11:37 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  WatchKitErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  WatchKitErrorCode = NSInteger;
  WatchKitErrorCodePtr = ^WatchKitErrorCode;

const
  WatchKitUnknownError = 1;
  WatchKitApplicationDelegateWatchKitRequestReplyNotCalledError = 2;
{$endif}

