{ Parsed from CoreMedia.framework (iPhoneOS8.2) CMBase.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef CMBASE_H}

{$if defined(TARGET_OS_WINDOWS) and defined(TARGET_CPU_X86_64)}
{$ifdef TYPES}
type
  CMItemCount = cint64;
  CMItemCountPtr = ^CMItemCount;
  CMItemIndex = cint64;
  CMItemIndexPtr = ^CMItemIndex;
{$endif}

{$else}
{$ifdef TYPES}
type
  CMItemCount = clong;
  CMItemCountPtr = ^CMItemCount;
  CMItemIndex = clong;
  CMItemIndexPtr = ^CMItemIndex;
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMPersistentTrackID = cint32;
  CMPersistentTrackIDPtr = ^CMPersistentTrackID;

const
  kCMPersistentTrackID_Invalid = 0;
{$endif}

{$endif}
