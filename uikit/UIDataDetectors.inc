{ Parsed from UIKit.framework (iPhoneOS8.2) UIDataDetectors.h }
{ Created on Fri Mar 20 2:11:41 2015 }

{$ifdef TYPES}
type
  UIDataDetectorTypes = NSUInteger;
  UIDataDetectorTypesPtr = ^UIDataDetectorTypes;

const
  UIDataDetectorTypePhoneNumber = 1 shl 0;
  UIDataDetectorTypeLink = 1 shl 1;
  {$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  UIDataDetectorTypeAddress = 1 shl 2;
  UIDataDetectorTypeCalendarEvent = 1 shl 3;
  {$endif}
  UIDataDetectorTypeNone = 0;
  UIDataDetectorTypeAll = NSUIntegerMax;
{$endif}

