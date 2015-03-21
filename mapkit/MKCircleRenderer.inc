{ Parsed from MapKit.framework (iPhoneOS8.2) MKCircleRenderer.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKCircleRendererPtr = ^MKCircleRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKCircleRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithCircle (circle: MKCircle): instancetype; message 'initWithCircle:';
    function circle: MKCircle; message 'circle';
  end;
{$endif}

