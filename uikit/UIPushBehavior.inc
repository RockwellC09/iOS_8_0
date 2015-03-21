{ Parsed from UIKit.framework (iPhoneOS8.2) UIPushBehavior.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIPushBehaviorPtr = ^UIPushBehavior;
{$endif}

{$ifdef TYPES}
type
  UIPushBehaviorMode = NSInteger;
  UIPushBehaviorModePtr = ^UIPushBehaviorMode;

const
  UIPushBehaviorModeContinuous = 0;
  UIPushBehaviorModeInstantaneous = 1;
{$endif}

{$ifdef CLASSES}

type
  UIPushBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItems_mode (items: NSArray; mode: UIPushBehaviorMode): instancetype; message 'initWithItems:mode:';
    procedure addItem (item: UIDynamicItemProtocol); message 'addItem:';
    procedure removeItem (item: UIDynamicItemProtocol); message 'removeItem:';
    function items: NSArray; message 'items';
    function targetOffsetFromCenterForItem (item: UIDynamicItemProtocol): UIOffset; message 'targetOffsetFromCenterForItem:';
    procedure setTargetOffsetFromCenter_forItem (o: UIOffset; item: UIDynamicItemProtocol); message 'setTargetOffsetFromCenter:forItem:';
    function mode: UIPushBehaviorMode; message 'mode';
    procedure setActive(newValue: boolean); message 'setActive:';
    function active: boolean; message 'active';
    procedure setAngle(newValue: CGFloat); message 'setAngle:';
    function angle: CGFloat; message 'angle';
    procedure setMagnitude(newValue: CGFloat); message 'setMagnitude:';
    function magnitude: CGFloat; message 'magnitude';
    procedure setPushDirection(newValue: CGVector); message 'setPushDirection:';
    function pushDirection: CGVector; message 'pushDirection';
    procedure setAngle_magnitude (angle_: CGFloat; magnitude_: CGFloat); message 'setAngle:magnitude:';
  end;
{$endif}

