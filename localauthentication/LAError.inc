{ Parsed from LocalAuthentication.framework (iPhoneOS8.2) LAError.h }
{ Created on Fri Mar 20 2:11:05 2015 }

{$ifdef TYPES}
type
  LAError = NSInteger;
  LAErrorPtr = ^LAError;

const
  LAErrorAuthenticationFailed = kLAErrorAuthenticationFailed;
  LAErrorUserCancel = kLAErrorUserCancel;
  LAErrorUserFallback = kLAErrorUserFallback;
  LAErrorSystemCancel = kLAErrorSystemCancel;
  LAErrorPasscodeNotSet = kLAErrorPasscodeNotSet;
  LAErrorTouchIDNotAvailable = kLAErrorTouchIDNotAvailable;
  LAErrorTouchIDNotEnrolled = kLAErrorTouchIDNotEnrolled;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  LAErrorDomain: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

