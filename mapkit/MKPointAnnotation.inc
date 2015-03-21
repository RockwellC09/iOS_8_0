{ Parsed from MapKit.framework (iPhoneOS8.2) MKPointAnnotation.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKPointAnnotationPtr = ^MKPointAnnotation;
{$endif}

{$ifdef CLASSES}

type
  MKPointAnnotation = objcclass external (MKShape)
  public
    procedure setCoordinate(newValue: CLLocationCoordinate2D); message 'setCoordinate:';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
  end;
{$endif}

