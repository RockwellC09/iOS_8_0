{ Parsed from UIKit.framework (iPhoneOS8.2) UISnapBehavior.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UISnapBehaviorPtr = ^UISnapBehavior;
{$endif}

{$ifdef CLASSES}

type
  UISnapBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItem_snapToPoint (item: UIDynamicItemProtocol; point: CGPoint): instancetype; message 'initWithItem:snapToPoint:';
    procedure setDamping(newValue: CGFloat); message 'setDamping:';
    function damping: CGFloat; message 'damping';
  end;
{$endif}

