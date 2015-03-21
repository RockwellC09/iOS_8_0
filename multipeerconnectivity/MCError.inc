{ Parsed from MultipeerConnectivity.framework (iPhoneOS8.2) MCError.h }
{ Created on Fri Mar 20 2:11:10 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  MCErrorDomain: _WEAK NSStringPtr; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MCErrorCode = NSInteger;
  MCErrorCodePtr = ^MCErrorCode;

const
  MCErrorUnknown = 0;
  MCErrorNotConnected = 1;
  MCErrorInvalidParameter = 2;
  MCErrorUnsupported = 3;
  MCErrorTimedOut = 4;
  MCErrorCancelled = 5;
  MCErrorUnavailable = 6;
{$endif}

