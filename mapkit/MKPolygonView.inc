{ Parsed from MapKit.framework (iPhoneOS8.2) MKPolygonView.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKPolygonViewPtr = ^MKPolygonView;
{$endif}

{$ifdef CLASSES}

type
  MKPolygonView = objcclass external (MKOverlayPathView)
  public
    function initWithPolygon (polygon: MKPolygon): instancetype; message 'initWithPolygon:'; deprecated 'in 4_0, 7_0';
    function polygon: MKPolygon; message 'polygon';
  end;
{$endif}

