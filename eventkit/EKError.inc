{ Parsed from EventKit.framework (iPhoneOS8.2) EKError.h }
{ Created on Fri Mar 20 2:10:53 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  EKErrorDomain: NSString { available starting in __MAC_10_8,__IPHONE_4_0 }; cvar; external;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
const
  EKErrorEventNotMutable = 0;
  EKErrorNoCalendar = 1;
  EKErrorNoStartDate = 2;
  EKErrorNoEndDate = 3;
  EKErrorDatesInverted = 4;
  EKErrorInternalFailure = 5;
  EKErrorCalendarReadOnly = 6;
  EKErrorDurationGreaterThanRecurrence = 7;
  EKErrorAlarmGreaterThanRecurrence = 8;
  EKErrorStartDateTooFarInFuture = 9;
  EKErrorStartDateCollidesWithOtherOccurrence = 10;
  EKErrorObjectBelongsToDifferentStore = 11;
  EKErrorInvitesCannotBeMoved = 12;
  EKErrorInvalidSpan = 13;
  EKErrorCalendarHasNoSource = 14;
  EKErrorCalendarSourceCannotBeModified = 15;
  EKErrorCalendarIsImmutable = 16;
  EKErrorSourceDoesNotAllowCalendarAddDelete = 17;
  EKErrorRecurringReminderRequiresDueDate = 18;
  EKErrorStructuredLocationsNotSupported = 19;
  EKErrorReminderLocationsNotSupported = 20;
  EKErrorAlarmProximityNotSupported = 21;
  EKErrorCalendarDoesNotAllowEvents = 22;
  EKErrorCalendarDoesNotAllowReminders = 23;
  EKErrorSourceDoesNotAllowReminders = 24;
  EKErrorPriorityIsInvalid = 25;
  EKErrorInvalidEntityType = 26;
  EKErrorLast = 27;
type
  EKErrorCode = clong;
{$endif}

{$endif}
