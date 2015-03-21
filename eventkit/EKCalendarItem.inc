{ Parsed from EventKit.framework (iPhoneOS8.2) EKCalendarItem.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKCalendarItemPtr = ^EKCalendarItem;
{$endif}

{$ifdef CLASSES}

type
  EKCalendarItem = objcclass external (EKObject)
  private
  public
    function UUID: NSString; message 'UUID';
    procedure setCalendar(newValue: EKCalendar); message 'setCalendar:';
    function calendar: EKCalendar; message 'calendar';
    function calendarItemIdentifier: NSString; message 'calendarItemIdentifier';
    function calendarItemExternalIdentifier: NSString; message 'calendarItemExternalIdentifier';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setLocation(newValue: NSString); message 'setLocation:';
    function location: NSString; message 'location';
    procedure setNotes(newValue: NSString); message 'setNotes:';
    function notes: NSString; message 'notes';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    function lastModifiedDate: NSDate; message 'lastModifiedDate';
    function creationDate: NSDate; message 'creationDate';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    function hasAlarms: boolean; message 'hasAlarms';
    function hasRecurrenceRules: boolean; message 'hasRecurrenceRules';
    function hasAttendees: boolean; message 'hasAttendees';
    function hasNotes: boolean; message 'hasNotes';
    function attendees: NSArray; message 'attendees';
    procedure setAlarms(newValue: NSArray); message 'setAlarms:';
    function alarms: NSArray; message 'alarms';
    procedure addAlarm (alarm: EKAlarm); message 'addAlarm:';
    procedure removeAlarm (alarm: EKAlarm); message 'removeAlarm:';
    procedure setRecurrenceRules(newValue: NSArray); message 'setRecurrenceRules:';
    function recurrenceRules: NSArray; message 'recurrenceRules';
    procedure addRecurrenceRule (rule: EKRecurrenceRule); message 'addRecurrenceRule:';
    procedure removeRecurrenceRule (rule: EKRecurrenceRule); message 'removeRecurrenceRule:';
  end;
{$endif}

