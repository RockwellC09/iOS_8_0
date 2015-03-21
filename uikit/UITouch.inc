{ Parsed from UIKit.framework (iPhoneOS8.2) UITouch.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UITouchPtr = ^UITouch;
{$endif}

{$ifdef TYPES}
type
  UITouchPhase = NSInteger;
  UITouchPhasePtr = ^UITouchPhase;

const
  UITouchPhaseBegan = 0;
  UITouchPhaseMoved = 1;
  UITouchPhaseStationary = 2;
  UITouchPhaseEnded = 3;
  UITouchPhaseCancelled = 4;
{$endif}

{$ifdef CLASSES}

type
  UITouch = objcclass external (NSObject)
  public
    function timestamp: NSTimeInterval; message 'timestamp';
    function phase: UITouchPhase; message 'phase';
    function tapCount: NSUInteger; message 'tapCount';
    function majorRadius: CGFloat; message 'majorRadius';
    function majorRadiusTolerance: CGFloat; message 'majorRadiusTolerance';
    function window: UIWindow; message 'window';
    function view: UIView; message 'view';
    function gestureRecognizers: NSArray; message 'gestureRecognizers';
    function locationInView (view_: UIView): CGPoint; message 'locationInView:';
    function previousLocationInView (view_: UIView): CGPoint; message 'previousLocationInView:';
  end;
{$endif}

