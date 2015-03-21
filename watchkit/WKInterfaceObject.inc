{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceObject.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceObjectPtr = ^WKInterfaceObject;
  WKAccessibilityImageRegionPtr = ^WKAccessibilityImageRegion;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceObject = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    procedure setHidden (hidden: boolean); message 'setHidden:';
    procedure setAlpha (alpha: CGFloat); message 'setAlpha:';
    procedure setWidth (width: CGFloat); message 'setWidth:';
    procedure setHeight (height: CGFloat); message 'setHeight:';
    function interfaceProperty: NSString; message 'interfaceProperty';
  end;


type
  WKAccessibility = objccategory external (WKInterfaceObject)
    procedure setAccessibilityLabel (accessibilityLabel: NSString); message 'setAccessibilityLabel:';
    procedure setAccessibilityHint (accessibilityHint: NSString); message 'setAccessibilityHint:';
    procedure setAccessibilityValue (accessibilityValue: NSString); message 'setAccessibilityValue:';
    procedure setIsAccessibilityElement (isAccessibilityElement: boolean); message 'setIsAccessibilityElement:';
    procedure setAccessibilityTraits (accessibilityTraits: UIAccessibilityTraits); message 'setAccessibilityTraits:';
    procedure setAccessibilityImageRegions (accessibilityImageRegions: NSArray); message 'setAccessibilityImageRegions:';
  end;


type
  WKAccessibilityImageRegion = objcclass external (NSObject)
  public
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
  end;
{$endif}

