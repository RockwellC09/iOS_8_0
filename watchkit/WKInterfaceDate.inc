{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceDate.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceDatePtr = ^WKInterfaceDate;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceDate = objcclass external (WKInterfaceObject)
  public
    procedure setTextColor (color: UIColor); message 'setTextColor:';
    procedure setTimeZone (timeZone: NSTimeZone); message 'setTimeZone:';
    procedure setCalendar (calendar: NSCalendar); message 'setCalendar:';
  end;
{$endif}

