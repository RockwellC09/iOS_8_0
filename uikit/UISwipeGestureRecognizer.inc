{ Parsed from UIKit.framework (iPhoneOS8.2) UISwipeGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UISwipeGestureRecognizerPtr = ^UISwipeGestureRecognizer;
{$endif}

{$ifdef TYPES}
type
  UISwipeGestureRecognizerDirection = NSUInteger;
  UISwipeGestureRecognizerDirectionPtr = ^UISwipeGestureRecognizerDirection;

const
  UISwipeGestureRecognizerDirectionRight = 1 shl 0;
  UISwipeGestureRecognizerDirectionLeft = 1 shl 1;
  UISwipeGestureRecognizerDirectionUp = 1 shl 2;
  UISwipeGestureRecognizerDirectionDown = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  UISwipeGestureRecognizer = objcclass external (UIGestureRecognizer)
  private
    _maximumDuration: CFTimeInterval;
    _minimumPrimaryMovement: CGFloat;
    _maximumPrimaryMovement: CGFloat;
    _minimumSecondaryMovement: CGFloat;
    _maximumSecondaryMovement: CGFloat;
    _rateOfMinimumMovementDecay: CGFloat;
    _rateOfMaximumMovementDecay: CGFloat;
    _numberOfTouchesRequired: NSUInteger;
    _touches: NSMutableArray;
    _direction: UISwipeGestureRecognizerDirection;
    _startLocation: CGPoint;
    _startLocations: CGPointPtr;
    _startTime: CFTimeInterval;
    _anonStruct_UISwipeGestureRecognizer0: record
      case byte of
        0: (anonBitField_UISwipeGestureRecognizer0: cuint);
        1: (data: bitpacked record
          _failed: 0..1;
        end;
      );
          end;
  public
    procedure setNumberOfTouchesRequired(newValue: NSUInteger); message 'setNumberOfTouchesRequired:';
    function numberOfTouchesRequired: NSUInteger; message 'numberOfTouchesRequired';
    procedure setDirection(newValue: UISwipeGestureRecognizerDirection); message 'setDirection:';
    function direction: UISwipeGestureRecognizerDirection; message 'direction';
  end;
{$endif}

