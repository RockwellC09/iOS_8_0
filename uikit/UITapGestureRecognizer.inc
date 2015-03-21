{ Parsed from UIKit.framework (iPhoneOS8.2) UITapGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UITapGestureRecognizerPtr = ^UITapGestureRecognizer;
{$endif}

{$ifdef CLASSES}

type
  UITapGestureRecognizer = objcclass external (UIGestureRecognizer)
  private
    _locationInView: CGPoint;
    _imp: id;
    _delaysRecognitionForGreaterTapCounts: cuint;
  public
    procedure setNumberOfTapsRequired(newValue: NSUInteger); message 'setNumberOfTapsRequired:';
    function numberOfTapsRequired: NSUInteger; message 'numberOfTapsRequired';
    procedure setNumberOfTouchesRequired(newValue: NSUInteger); message 'setNumberOfTouchesRequired:';
    function numberOfTouchesRequired: NSUInteger; message 'numberOfTouchesRequired';
  end;
{$endif}

