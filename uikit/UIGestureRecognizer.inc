{ Parsed from UIKit.framework (iPhoneOS8.2) UIGestureRecognizer.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIGestureRecognizerPtr = ^UIGestureRecognizer;
  UIGestureRecognizerDelegateProtocolPtr = ^UIGestureRecognizerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIGestureRecognizerState = NSInteger;
  UIGestureRecognizerStatePtr = ^UIGestureRecognizerState;

const
  UIGestureRecognizerStatePossible = 0;
  UIGestureRecognizerStateBegan = 1;
  UIGestureRecognizerStateChanged = 2;
  UIGestureRecognizerStateEnded = 3;
  UIGestureRecognizerStateCancelled = 4;
  UIGestureRecognizerStateFailed = 5;
  UIGestureRecognizerStateRecognized = UIGestureRecognizerStateEnded;
{$endif}

{$ifdef CLASSES}

type
  UIGestureRecognizer = objcclass external (NSObject)
  public
    function initWithTarget_action (target: id; action: SEL): instancetype; message 'initWithTarget:action:';
    procedure addTarget_action (target: id; action: SEL); message 'addTarget:action:';
    procedure removeTarget_action (target: id; action: SEL); message 'removeTarget:action:';
    function state: UIGestureRecognizerState; message 'state';
    procedure setDelegate(newValue: UIGestureRecognizerDelegateProtocol); message 'setDelegate:';
    function delegate: UIGestureRecognizerDelegateProtocol; message 'delegate';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    function view: UIView; message 'view';
    procedure setCancelsTouchesInView(newValue: boolean); message 'setCancelsTouchesInView:';
    function cancelsTouchesInView: boolean; message 'cancelsTouchesInView';
    procedure setDelaysTouchesBegan(newValue: boolean); message 'setDelaysTouchesBegan:';
    function delaysTouchesBegan: boolean; message 'delaysTouchesBegan';
    procedure setDelaysTouchesEnded(newValue: boolean); message 'setDelaysTouchesEnded:';
    function delaysTouchesEnded: boolean; message 'delaysTouchesEnded';
    procedure requireGestureRecognizerToFail (otherGestureRecognizer: UIGestureRecognizer); message 'requireGestureRecognizerToFail:';
    function locationInView (view_: UIView): CGPoint; message 'locationInView:';
    function numberOfTouches: NSUInteger; message 'numberOfTouches';
    function locationOfTouch_inView (touchIndex: NSUInteger; view_: UIView): CGPoint; message 'locationOfTouch:inView:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIGestureRecognizerDelegateProtocol = objcprotocol external name 'UIGestureRecognizerDelegate' (NSObjectProtocol)
  optional
    function gestureRecognizerShouldBegin (gestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizerShouldBegin:';
    function gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:';
    function gestureRecognizer_shouldRequireFailureOfGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldRequireFailureOfGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizer_shouldBeRequiredToFailByGestureRecognizer (gestureRecognizer: UIGestureRecognizer; otherGestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:'; { available in 7_0 }
    function gestureRecognizer_shouldReceiveTouch (gestureRecognizer: UIGestureRecognizer; touch: UITouch): boolean; message 'gestureRecognizer:shouldReceiveTouch:';
  end;
{$endif}

