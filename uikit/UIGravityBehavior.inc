{ Parsed from UIKit.framework (iPhoneOS8.2) UIGravityBehavior.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIGravityBehaviorPtr = ^UIGravityBehavior;
{$endif}

{$ifdef CLASSES}

type
  UIGravityBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItems (items: NSArray): instancetype; message 'initWithItems:';
    procedure addItem (item: UIDynamicItemProtocol); message 'addItem:';
    procedure removeItem (item: UIDynamicItemProtocol); message 'removeItem:';
    function items: NSArray; message 'items';
    procedure setGravityDirection(newValue: CGVector); message 'setGravityDirection:';
    function gravityDirection: CGVector; message 'gravityDirection';
    procedure setAngle(newValue: CGFloat); message 'setAngle:';
    function angle: CGFloat; message 'angle';
    procedure setMagnitude(newValue: CGFloat); message 'setMagnitude:';
    function magnitude: CGFloat; message 'magnitude';
    procedure setAngle_magnitude (angle_: CGFloat; magnitude_: CGFloat); message 'setAngle:magnitude:';
  end;
{$endif}

