{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceSeparator.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceSeparatorPtr = ^WKInterfaceSeparator;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceSeparator = objcclass external (WKInterfaceObject)
  public
    procedure setColor (color: UIColor); message 'setColor:';
  end;
{$endif}

