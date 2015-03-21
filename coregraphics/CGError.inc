{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGError.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGERROR_H_}
{$ifdef TYPES}
const
  kCGErrorSuccess = 0;
  kCGErrorFailure = 1000;
  kCGErrorIllegalArgument = 1001;
  kCGErrorInvalidConnection = 1002;
  kCGErrorInvalidContext = 1003;
  kCGErrorCannotComplete = 1004;
  kCGErrorNotImplemented = 1006;
  kCGErrorRangeCheck = 1007;
  kCGErrorTypeCheck = 1008;
  kCGErrorInvalidOperation = 1010;
  kCGErrorNoneAvailable = 1011;

type
  CGError = cint32;
  CGErrorPtr = ^CGError;
{$endif}

{$endif}
