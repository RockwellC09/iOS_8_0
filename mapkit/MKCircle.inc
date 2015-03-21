{ Parsed from MapKit.framework (iPhoneOS8.2) MKCircle.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKCirclePtr = ^MKCircle;
{$endif}

{$ifdef CLASSES}

type
  MKCircle = objcclass external (MKShape, MKOverlayProtocol)
  public
    class function circleWithCenterCoordinate_radius (coord: CLLocationCoordinate2D; radius: CLLocationDistance): instancetype; message 'circleWithCenterCoordinate:radius:';
    class function circleWithMapRect (mapRect: MKMapRect): instancetype; message 'circleWithMapRect:';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function radius: CLLocationDistance; message 'radius';
    function boundingMapRect: MKMapRect; message 'boundingMapRect';

    { Adopted protocols }
    function canReplaceMapContent: boolean; message 'canReplaceMapContent'; { available in 10_9, 7_0 }
    function intersectsMapRect (mapRect: MKMapRect): boolean; message 'intersectsMapRect:';
  end;
{$endif}

