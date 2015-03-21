{ Parsed from EventKit.framework (iPhoneOS8.2) EKAlarm.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKAlarmPtr = ^EKAlarm;
{$endif}

{$ifdef CLASSES}

type
  EKAlarm = objcclass external (EKObject, NSCopyingProtocol)
  private
  public
    class function alarmWithAbsoluteDate (date: NSDate): EKAlarm; message 'alarmWithAbsoluteDate:';
    class function alarmWithRelativeOffset (offset: NSTimeInterval): EKAlarm; message 'alarmWithRelativeOffset:';
    procedure setRelativeOffset(newValue: NSTimeInterval); message 'setRelativeOffset:';
    function relativeOffset: NSTimeInterval; message 'relativeOffset';
    procedure setAbsoluteDate(newValue: NSDate); message 'setAbsoluteDate:';
    function absoluteDate: NSDate; message 'absoluteDate';
    procedure setStructuredLocation(newValue: EKStructuredLocation); message 'setStructuredLocation:';
    function structuredLocation: EKStructuredLocation; message 'structuredLocation';
    procedure setProximity(newValue: EKAlarmProximity); message 'setProximity:';
    function proximity: EKAlarmProximity; message 'proximity';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

