{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceTimer.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceTimerPtr = ^WKInterfaceTimer;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceTimer = objcclass external (WKInterfaceObject)
  public
    procedure setTextColor (color: UIColor); message 'setTextColor:';
    procedure setDate (date: NSDate); message 'setDate:';
    procedure start; message 'start';
    procedure stop; message 'stop';
  end;
{$endif}

