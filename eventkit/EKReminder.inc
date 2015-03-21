{ Parsed from EventKit.framework (iPhoneOS8.2) EKReminder.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKReminderPtr = ^EKReminder;
{$endif}

{$ifdef CLASSES}

type
  EKReminder = objcclass external (EKCalendarItem)
  private
  public
    class function reminderWithEventStore (eventStore: EKEventStore): EKReminder; message 'reminderWithEventStore:';
    procedure setStartDateComponents(newValue: NSDateComponents); message 'setStartDateComponents:';
    function startDateComponents: NSDateComponents; message 'startDateComponents';
    procedure setDueDateComponents(newValue: NSDateComponents); message 'setDueDateComponents:';
    function dueDateComponents: NSDateComponents; message 'dueDateComponents';
    procedure setCompleted(newValue: boolean); message 'setCompleted:';
    function isCompleted: boolean; message 'isCompleted';
    procedure setCompletionDate(newValue: NSDate); message 'setCompletionDate:';
    function completionDate: NSDate; message 'completionDate';
    procedure setPriority(newValue: NSInteger); message 'setPriority:';
    function priority: NSInteger; message 'priority';
  end;
{$endif}

