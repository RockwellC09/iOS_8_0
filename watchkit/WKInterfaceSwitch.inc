{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceSwitch.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceSwitchPtr = ^WKInterfaceSwitch;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceSwitch = objcclass external (WKInterfaceObject)
  public
    procedure setTitle (title: NSString); message 'setTitle:';
    procedure setAttributedTitle (attributedTitle: NSAttributedString); message 'setAttributedTitle:';
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
    procedure setOn (on: boolean); message 'setOn:';
    procedure setColor (color: UIColor); message 'setColor:';
  end;
{$endif}

