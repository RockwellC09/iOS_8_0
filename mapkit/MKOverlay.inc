{ Parsed from MapKit.framework (iPhoneOS8.2) MKOverlay.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKOverlayProtocolPtr = ^MKOverlayProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MKOverlayProtocol = objcprotocol external name 'MKOverlay' (MKAnnotationProtocol)
  required
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function boundingMapRect: MKMapRect; message 'boundingMapRect';
  optional
    function intersectsMapRect (mapRect: MKMapRect): boolean; message 'intersectsMapRect:';
    function canReplaceMapContent: boolean; message 'canReplaceMapContent'; { available in 10_9, 7_0 }
  end;
{$endif}

