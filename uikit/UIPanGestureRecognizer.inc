{ Parsed from UIKit.framework (iPhoneOS8.2) UIPanGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPanGestureRecognizerPtr = ^UIPanGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UIPanGestureRecognizer = objcclass external (UIGestureRecognizer)
  private
    _firstSceneReferenceLocation: CGPoint;
    _lastSceneReferenceLocation: CGPoint;
    _lastTouchTime: NSTimeInterval;
    _velocitySample: id;
    _previousVelocitySample: id;
    _touches: NSMutableArray;
    _lastTouchCount: NSUInteger;
    _minimumNumberOfTouches: NSUInteger;
    _maximumNumberOfTouches: NSUInteger;
    _hysteresis: CGFloat;
    _lastUnadjustedSceneReferenceLocation: CGPoint;
    _anonStruct_UIPanGestureRecognizer0: record
      case byte of
        0: (anonBitField_UIPanGestureRecognizer0: cuint);
        1: (data: bitpacked record
          _failsPastMaxTouches: 0..1;
          _canPanHorizontally: 0..1;
          _canPanVertically: 0..1;
          _ignoresStationaryTouches: 0..1;
        end;
      );
          end;
  public
    procedure setMinimumNumberOfTouches(newValue: NSUInteger); message 'setMinimumNumberOfTouches:';
    function minimumNumberOfTouches: NSUInteger; message 'minimumNumberOfTouches';
    procedure setMaximumNumberOfTouches(newValue: NSUInteger); message 'setMaximumNumberOfTouches:';
    function maximumNumberOfTouches: NSUInteger; message 'maximumNumberOfTouches';
    function translationInView (view_: UIView): CGPoint; message 'translationInView:';
    procedure setTranslation_inView (translation: CGPoint; view_: UIView); message 'setTranslation:inView:';
    function velocityInView (view_: UIView): CGPoint; message 'velocityInView:';
  end;
{$endif}

