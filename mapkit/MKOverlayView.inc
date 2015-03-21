{ Parsed from MapKit.framework (iPhoneOS8.2) MKOverlayView.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKOverlayViewPtr = ^MKOverlayView;
{$endif}

{$ifdef CLASSES}

type
  MKOverlayView = objcclass external (UIView)
  public
    function initWithOverlay (overlay: MKOverlayProtocol): instancetype; message 'initWithOverlay:'; deprecated 'in 4_0, 7_0';
    function overlay: MKOverlayProtocol; message 'overlay';
    function pointForMapPoint (mapPoint: MKMapPoint): CGPoint; message 'pointForMapPoint:'; deprecated 'in 4_0, 7_0';
    function mapPointForPoint (point: CGPoint): MKMapPoint; message 'mapPointForPoint:'; deprecated 'in 4_0, 7_0';
    function rectForMapRect (mapRect: MKMapRect): CGRect; message 'rectForMapRect:'; deprecated 'in 4_0, 7_0';
    function mapRectForRect (rect: CGRect): MKMapRect; message 'mapRectForRect:'; deprecated 'in 4_0, 7_0';
    function canDrawMapRect_zoomScale (mapRect: MKMapRect; zoomScale: MKZoomScale): boolean; message 'canDrawMapRect:zoomScale:'; deprecated 'in 4_0, 7_0';
    procedure drawMapRect_zoomScale_inContext (mapRect: MKMapRect; zoomScale: MKZoomScale; context: CGContextRef); message 'drawMapRect:zoomScale:inContext:'; deprecated 'in 4_0, 7_0';
    procedure setNeedsDisplayInMapRect (mapRect: MKMapRect); message 'setNeedsDisplayInMapRect:'; deprecated 'in 4_0, 7_0';
    procedure setNeedsDisplayInMapRect_zoomScale (mapRect: MKMapRect; zoomScale: MKZoomScale); message 'setNeedsDisplayInMapRect:zoomScale:'; deprecated 'in 4_0, 7_0';
  end;
{$endif}

{$ifdef FUNCTIONS}
function MKRoadWidthAtZoomScale_(zoomScale: MKZoomScale): CGFloat; cdecl; external; { available in 10_9, 4_0 }
{$endif}

