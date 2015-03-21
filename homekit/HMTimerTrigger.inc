{ Parsed from HomeKit.framework (iPhoneOS8.2) HMTimerTrigger.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMTimerTriggerPtr = ^HMTimerTrigger;
{$endif}

{$ifdef CLASSES}

type
  HMTimerTrigger = objcclass external (HMTrigger)
  public
    function init: instancetype; message 'init';
    function initWithName_fireDate_timeZone_recurrence_recurrenceCalendar (name_: NSString; fireDate: NSDate; timeZone: NSTimeZone; recurrence: NSDateComponents; recurrenceCalendar: NSCalendar): instancetype; message 'initWithName:fireDate:timeZone:recurrence:recurrenceCalendar:'; { NS_DESIGNATED_INITIALIZER }
    function fireDate: NSDate; message 'fireDate';
    function timeZone: NSTimeZone; message 'timeZone';
    function recurrence: NSDateComponents; message 'recurrence';
    function recurrenceCalendar: NSCalendar; message 'recurrenceCalendar';
    procedure updateFireDate_completionHandler (fireDate_: NSDate; completion: OpaqueCBlock); message 'updateFireDate:completionHandler:';
    procedure updateTimeZone_completionHandler (timeZone_: NSTimeZone; completion: OpaqueCBlock); message 'updateTimeZone:completionHandler:';
    procedure updateRecurrence_completionHandler (recurrence_: NSDateComponents; completion: OpaqueCBlock); message 'updateRecurrence:completionHandler:';
  end;
{$endif}

