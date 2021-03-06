{ Parsed from MapKit.framework (iPhoneOS8.2) MKShape.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKShapePtr = ^MKShape;
{$endif}

{$ifdef CLASSES}

type
  MKShape = objcclass external (NSObject, MKAnnotationProtocol)
  public
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:';
    function subtitle: NSString; message 'subtitle';

    { Adopted protocols }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in 10_9, 4_0 }
  end;
{$endif}

