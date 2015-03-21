{ Parsed from CoreTelephony.framework (iPhoneOS8.2) CoreTelephonyDefines.h }
{ Created on Fri Mar 20 2:10:52 2015 }

{$ifdef TYPES}
const
  kCTErrorDomainNoError = 0;
  kCTErrorDomainPOSIX = 1;
  kCTErrorDomainMach = 2;

type
  CTError = record
    domain: SInt32;
    error: SInt32;
  end;
type
  CTErrorPtr = ^CTError;
{$endif}

