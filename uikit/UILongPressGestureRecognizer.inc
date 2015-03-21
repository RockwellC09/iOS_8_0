{ Parsed from UIKit.framework (iPhoneOS8.2) UILongPressGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UILongPressGestureRecognizerPtr = ^UILongPressGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UILongPressGestureRecognizer = objcclass external (UIGestureRecognizer)
  private
    _touches: NSArray;
    _activeTouches: NSMutableSet;
    _numberOfTouchesRequired: NSUInteger;
    _minimumPressDuration: CFTimeInterval;
    _allowableMovement: CGFloat;
    _startPointScreen: CGPoint;
    _enoughTimeElapsed: id;
    _tooMuchTimeElapsed: id;
    _imp: id;
    _anonStruct_UILongPressGestureRecognizer0: record
      case byte of
        0: (anonBitField_UILongPressGestureRecognizer0: cuint);
        1: (data: bitpacked record
          _gotTouchEnd: 0..1;
          _gotTooMany: 0..1;
          _gotEnoughTaps: 0..1;
          _cancelPastAllowableMovement: 0..1;
        end;
      );
          end;
  public
    procedure setNumberOfTapsRequired(newValue: NSUInteger); message 'setNumberOfTapsRequired:';
    function numberOfTapsRequired: NSUInteger; message 'numberOfTapsRequired';
    procedure setNumberOfTouchesRequired(newValue: NSUInteger); message 'setNumberOfTouchesRequired:';
    function numberOfTouchesRequired: NSUInteger; message 'numberOfTouchesRequired';
    procedure setMinimumPressDuration(newValue: CFTimeInterval); message 'setMinimumPressDuration:';
    function minimumPressDuration: CFTimeInterval; message 'minimumPressDuration';
    procedure setAllowableMovement(newValue: CGFloat); message 'setAllowableMovement:';
    function allowableMovement: CGFloat; message 'allowableMovement';
  end;
{$endif}

