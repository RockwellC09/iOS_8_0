{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceMap.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceMapPtr = ^WKInterfaceMap;
{$endif}

{$ifdef TYPES}
type
  WKInterfaceMapPinColor = NSInteger;
  WKInterfaceMapPinColorPtr = ^WKInterfaceMapPinColor;

const
  WKInterfaceMapPinColorRed = 0;
  WKInterfaceMapPinColorGreen = 1;
  WKInterfaceMapPinColorPurple = 2;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceMap = objcclass external (WKInterfaceObject)
  public
    procedure setVisibleMapRect (mapRect: MKMapRect); message 'setVisibleMapRect:';
    procedure setRegion (coordinateRegion: MKCoordinateRegion); message 'setRegion:';
    procedure addAnnotation_withImage_centerOffset (location: CLLocationCoordinate2D; image: UIImage; offset: CGPoint); message 'addAnnotation:withImage:centerOffset:';
    procedure addAnnotation_withImageNamed_centerOffset (location: CLLocationCoordinate2D; name: NSString; offset: CGPoint); message 'addAnnotation:withImageNamed:centerOffset:';
    procedure addAnnotation_withPinColor (location: CLLocationCoordinate2D; pinColor: WKInterfaceMapPinColor); message 'addAnnotation:withPinColor:';
    procedure removeAllAnnotations; message 'removeAllAnnotations';
  end;
{$endif}

