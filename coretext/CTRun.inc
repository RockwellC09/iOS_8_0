{ Parsed from CoreText.framework (iPhoneOS8.2) CTRun.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTRUN__}

{$ifdef TYPES}
type
  CTRunRef = OpaqueType;
  CTRunStatus = cuint32;
  CTRunStatusPtr = ^CTRunStatus;

const
  kCTRunStatusNoStatus = 0;
  kCTRunStatusRightToLeft = 1 shl 0;
  kCTRunStatusNonMonotonic = 1 shl 1;
  kCTRunStatusHasNonIdentityMatrix = 1 shl 2;
{$endif}

{$endif}
