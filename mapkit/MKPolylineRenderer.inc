{ Parsed from MapKit.framework (iPhoneOS8.2) MKPolylineRenderer.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKPolylineRendererPtr = ^MKPolylineRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKPolylineRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithPolyline (polyline: MKPolyline): instancetype; message 'initWithPolyline:';
    function polyline: MKPolyline; message 'polyline';
  end;
{$endif}

