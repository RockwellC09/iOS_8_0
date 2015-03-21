{ Parsed from UIKit.framework (iPhoneOS8.2) UIRotationGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIRotationGestureRecognizerPtr = ^UIRotationGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIRotationGestureRecognizer = objcclass external (UIGestureRecognizer)
  private
    _initialTouchDistance: double;
    _initialTouchAngle: double;
    _currentTouchAngle: double;
    _currentRotationCount: NSInteger;
    _lastTouchTime: NSTimeInterval;
    _velocity: CGFloat;
    _previousVelocity: CGFloat;
    _anchorSceneReferencePoint: CGPoint;
    _transformAnalyzer: id;
    _touches:array[0..1] of UITouch;
  public
    procedure setRotation(newValue: CGFloat); message 'setRotation:';
    function rotation: CGFloat; message 'rotation';
    function velocity: CGFloat; message 'velocity';
  end;
{$endif}

