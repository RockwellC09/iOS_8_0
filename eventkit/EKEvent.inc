{ Parsed from EventKit.framework (iPhoneOS8.2) EKEvent.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKEventPtr = ^EKEvent;
{$endif}

{$ifdef TYPES}
const
  EKEventAvailabilityNotSupported = -1;
  EKEventAvailabilityBusy = 0;
  EKEventAvailabilityFree = 1;
  EKEventAvailabilityTentative = 2;
  EKEventAvailabilityUnavailable = 3;
type
  EKEventAvailability = clong;
const
  EKEventStatusNone = 0;
  EKEventStatusConfirmed = 1;
  EKEventStatusTentative = 2;
  EKEventStatusCanceled = 3;
type
  EKEventStatus = clong;
{$endif}

{$ifdef CLASSES}

type
  EKEvent = objcclass external (EKCalendarItem)
  private
  public
    class function eventWithEventStore (eventStore: EKEventStore): EKEvent; message 'eventWithEventStore:';
    function eventIdentifier: NSString; message 'eventIdentifier';
    procedure setAllDay(newValue: boolean); message 'setAllDay:';
    function isAllDay: boolean; message 'isAllDay';
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:';
    function endDate: NSDate; message 'endDate';
    function compareStartDateWithEvent (other: EKEvent): NSComparisonResult; message 'compareStartDateWithEvent:';
    function organizer: EKParticipant; message 'organizer';
    procedure setAvailability(newValue: EKEventAvailability); message 'setAvailability:';
    function availability: EKEventAvailability; message 'availability';
    function status: EKEventStatus; message 'status';
    function isDetached: boolean; message 'isDetached';
    function refresh: boolean; message 'refresh';
    function birthdayPersonID: NSInteger; message 'birthdayPersonID';
  end;
{$endif}

