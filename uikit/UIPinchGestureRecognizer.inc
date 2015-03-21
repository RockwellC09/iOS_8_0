{ Parsed from UIKit.framework (iPhoneOS8.2) UIPinchGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPinchGestureRecognizerPtr = ^UIPinchGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIPinchGestureRecognizer = objcclass external (UIGestureRecognizer)
  private
    _initialTouchDistance: CGFloat;
    _initialTouchScale: CGFloat;
    _lastTouchTime: NSTimeInterval;
    _velocity: CGFloat;
    _previousVelocity: CGFloat;
    _scaleThreshold: CGFloat;
    _transform: CGAffineTransform;
    _anchorSceneReferencePoint: CGPoint;
    _touches:array[0..1] of UITouch;
    _hysteresis: CGFloat;
    _transformAnalyzer: id;
    _anonStruct_UIPinchGestureRecognizer0: record
      case byte of
        0: (anonBitField_UIPinchGestureRecognizer0: cuint);
        1: (data: bitpacked record
          _endsOnSingleTouch: 0..1;
        end;
      );
          end;
  public
    procedure setScale(newValue: CGFloat); message 'setScale:';
    function scale: CGFloat; message 'scale';
    function velocity: CGFloat; message 'velocity';
  end;
{$endif}

