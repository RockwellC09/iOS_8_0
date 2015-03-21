{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceSlider.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceSliderPtr = ^WKInterfaceSlider;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceSlider = objcclass external (WKInterfaceObject)
  public
    procedure setEnabled (enabled: boolean); message 'setEnabled:';
    procedure setValue (value: single); message 'setValue:';
    procedure setColor (color: UIColor); message 'setColor:';
    procedure setNumberOfSteps (numberOfSteps: NSInteger); message 'setNumberOfSteps:';
  end;
{$endif}

