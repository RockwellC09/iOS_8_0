{ Parsed from EventKitUI.framework (iPhoneOS8.2) EKCalendarChooser.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKCalendarChooserPtr = ^EKCalendarChooser;
  EKCalendarChooserDelegateProtocolPtr = ^EKCalendarChooserDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  EKCalendarChooserSelectionStyleSingle = 0;
  EKCalendarChooserSelectionStyleMultiple = 1;
type
  EKCalendarChooserSelectionStyle = clong;
const
  EKCalendarChooserDisplayAllCalendars = 0;
  EKCalendarChooserDisplayWritableCalendarsOnly = 1;
type
  EKCalendarChooserDisplayStyle = clong;
{$endif}

{$ifdef CLASSES}

type
  EKCalendarChooser = objcclass external (UIViewController)
  public
    function initWithSelectionStyle_displayStyle_eventStore (selectionStyle: EKCalendarChooserSelectionStyle; displayStyle: EKCalendarChooserDisplayStyle; eventStore: EKEventStore): id; message 'initWithSelectionStyle:displayStyle:eventStore:';
    function initWithSelectionStyle_displayStyle_entityType_eventStore (style: EKCalendarChooserSelectionStyle; displayStyle: EKCalendarChooserDisplayStyle; entityType: EKEntityType; eventStore: EKEventStore): id; message 'initWithSelectionStyle:displayStyle:entityType:eventStore:';
    function selectionStyle: EKCalendarChooserSelectionStyle; message 'selectionStyle';
    procedure setDelegate(newValue: EKCalendarChooserDelegateProtocol); message 'setDelegate:';
    function delegate: EKCalendarChooserDelegateProtocol; message 'delegate';
    procedure setShowsDoneButton(newValue: boolean); message 'setShowsDoneButton:';
    function showsDoneButton: boolean; message 'showsDoneButton';
    procedure setShowsCancelButton(newValue: boolean); message 'setShowsCancelButton:';
    function showsCancelButton: boolean; message 'showsCancelButton';
    procedure setSelectedCalendars(newValue: NSSet); message 'setSelectedCalendars:';
    function selectedCalendars: NSSet; message 'selectedCalendars';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  EKCalendarChooserDelegateProtocol = objcprotocol external name 'EKCalendarChooserDelegate' (NSObjectProtocol)
  optional
    procedure calendarChooserSelectionDidChange (calendarChooser: EKCalendarChooser); message 'calendarChooserSelectionDidChange:';
    procedure calendarChooserDidFinish (calendarChooser: EKCalendarChooser); message 'calendarChooserDidFinish:';
    procedure calendarChooserDidCancel (calendarChooser: EKCalendarChooser); message 'calendarChooserDidCancel:';
  end;
{$endif}

