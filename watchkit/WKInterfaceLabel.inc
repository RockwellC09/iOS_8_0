{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceLabel.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceLabelPtr = ^WKInterfaceLabel;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceLabel = objcclass external (WKInterfaceObject)
  public
    procedure setText (text: NSString); message 'setText:';
    procedure setTextColor (color: UIColor); message 'setTextColor:';
    procedure setAttributedText (attributedText: NSAttributedString); message 'setAttributedText:';
  end;
{$endif}

