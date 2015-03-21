{ Parsed from EventKitUI.framework (iPhoneOS8.2) EKEventViewController.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKEventViewControllerPtr = ^EKEventViewController;
  EKEventViewDelegateProtocolPtr = ^EKEventViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  EKEventViewActionDone = 0;
  EKEventViewActionResponded = 1;
  EKEventViewActionDeleted = 2;
type
  EKEventViewAction = clong;
{$endif}

{$ifdef CLASSES}

type
  EKEventViewController = objcclass external (UIViewController)
  public
    procedure setDelegate(newValue: EKEventViewDelegateProtocol); message 'setDelegate:';
    function delegate: EKEventViewDelegateProtocol; message 'delegate';
    procedure setEvent(newValue: EKEvent); message 'setEvent:';
    function event: EKEvent; message 'event';
    procedure setAllowsEditing(newValue: boolean); message 'setAllowsEditing:';
    function allowsEditing: boolean; message 'allowsEditing';
    procedure setAllowsCalendarPreview(newValue: boolean); message 'setAllowsCalendarPreview:';
    function allowsCalendarPreview: boolean; message 'allowsCalendarPreview';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  EKEventViewDelegateProtocol = objcprotocol external name 'EKEventViewDelegate' (NSObjectProtocol)
  required
    procedure eventViewController_didCompleteWithAction (controller: EKEventViewController; action: EKEventViewAction); message 'eventViewController:didCompleteWithAction:'; { available starting in __MAC_NA,__IPHONE_4_2 }
  end;
{$endif}

