{ Parsed from UIKit.framework (iPhoneOS8.2) UIEvent.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIEventPtr = ^UIEvent;
{$endif}

{$ifdef TYPES}
type
  UIEventType = NSInteger;
  UIEventTypePtr = ^UIEventType;

const
  UIEventTypeTouches = 0;
  UIEventTypeMotion = 1;
  UIEventTypeRemoteControl = 2;

type
  UIEventSubtype = NSInteger;
  UIEventSubtypePtr = ^UIEventSubtype;

const
  UIEventSubtypeNone = 0;
  UIEventSubtypeMotionShake = 1;
  UIEventSubtypeRemoteControlPlay = 100;
  UIEventSubtypeRemoteControlPause = 101;
  UIEventSubtypeRemoteControlStop = 102;
  UIEventSubtypeRemoteControlTogglePlayPause = 103;
  UIEventSubtypeRemoteControlNextTrack = 104;
  UIEventSubtypeRemoteControlPreviousTrack = 105;
  UIEventSubtypeRemoteControlBeginSeekingBackward = 106;
  UIEventSubtypeRemoteControlEndSeekingBackward = 107;
  UIEventSubtypeRemoteControlBeginSeekingForward = 108;
  UIEventSubtypeRemoteControlEndSeekingForward = 109;
{$endif}

{$ifdef CLASSES}

type
  UIEvent = objcclass external (NSObject)
  private
    _timestamp: NSTimeInterval;
  public
    function type_: UIEventType; message 'type';
    function subtype: UIEventSubtype; message 'subtype';
    function timestamp: NSTimeInterval; message 'timestamp';
    function allTouches: NSSet; message 'allTouches';
    function touchesForWindow (window: UIWindow): NSSet; message 'touchesForWindow:';
    function touchesForView (view: UIView): NSSet; message 'touchesForView:';
    function touchesForGestureRecognizer (gesture: UIGestureRecognizer): NSSet; message 'touchesForGestureRecognizer:'; { available in 3_2 }
  end;
{$endif}

