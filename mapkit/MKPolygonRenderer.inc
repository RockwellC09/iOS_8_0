{ Parsed from MapKit.framework (iPhoneOS8.2) MKPolygonRenderer.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKPolygonRendererPtr = ^MKPolygonRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKPolygonRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithPolygon (polygon: MKPolygon): instancetype; message 'initWithPolygon:';
    function polygon: MKPolygon; message 'polygon';
  end;
{$endif}

