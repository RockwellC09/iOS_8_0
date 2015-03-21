{ Parsed from MapKit.framework (iPhoneOS8.2) MKPolylineView.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKPolylineViewPtr = ^MKPolylineView;
{$endif}

{$ifdef CLASSES}

type
  MKPolylineView = objcclass external (MKOverlayPathView)
  public
    function initWithPolyline (polyline: MKPolyline): instancetype; message 'initWithPolyline:'; deprecated 'in 4_0, 7_0';
    function polyline: MKPolyline; message 'polyline';
  end;
{$endif}

