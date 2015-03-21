{ Parsed from EventKit.framework (iPhoneOS8.2) EKCalendar.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKCalendarPtr = ^EKCalendar;
{$endif}

{$ifdef CLASSES}

type
  EKCalendar = objcclass external (EKObject)
  public
    class function calendarWithEventStore (eventStore: EKEventStore): EKCalendar; message 'calendarWithEventStore:'; deprecated 'in __MAC_NA, __MAC_NA, __IPHONE_4_0, __IPHONE_6_0';
    class function calendarForEntityType_eventStore (entityType: EKEntityType; eventStore: EKEventStore): EKCalendar; message 'calendarForEntityType:eventStore:'; { available starting in __MAC_10_8,__IPHONE_6_0 }
    procedure setSource(newValue: EKSource); message 'setSource:';
    function source: EKSource; message 'source';
    function calendarIdentifier: NSString; message 'calendarIdentifier';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    function type_: EKCalendarType; message 'type';
    function allowsContentModifications: boolean; message 'allowsContentModifications';
    function isSubscribed: boolean; message 'isSubscribed';
    function isImmutable: boolean; message 'isImmutable';
    procedure setCGColor(newValue: CGColorRef); message 'setCGColor:';
    function CGColor: CGColorRef; message 'CGColor';
    function supportedEventAvailabilities: EKCalendarEventAvailabilityMask; message 'supportedEventAvailabilities';
    function allowedEntityTypes: EKEntityMask; message 'allowedEntityTypes';
  end;
{$endif}

