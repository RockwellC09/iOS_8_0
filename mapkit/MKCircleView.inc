{ Parsed from MapKit.framework (iPhoneOS8.2) MKCircleView.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKCircleViewPtr = ^MKCircleView;
{$endif}

{$ifdef CLASSES}

type
  MKCircleView = objcclass external (MKOverlayPathView)
  public
    function initWithCircle (circle: MKCircle): instancetype; message 'initWithCircle:'; deprecated 'in 4_0, 7_0';
    function circle: MKCircle; message 'circle';
  end;
{$endif}

