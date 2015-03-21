{ Parsed from UIKit.framework (iPhoneOS8.2) UIDynamicBehavior.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIDynamicBehaviorPtr = ^UIDynamicBehavior;
  UIDynamicItemProtocolPtr = ^UIDynamicItemProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDynamicItemProtocol = objcprotocol external name 'UIDynamicItem' (NSObjectProtocol)
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    function bounds: CGRect; message 'bounds';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIDynamicBehavior = objcclass external (NSObject)
  public
    procedure addChildBehavior (behavior: UIDynamicBehavior); message 'addChildBehavior:';
    procedure removeChildBehavior (behavior: UIDynamicBehavior); message 'removeChildBehavior:';
    function childBehaviors: NSArray; message 'childBehaviors';
    procedure setAction(newValue: OpaqueCBlock); message 'setAction:';
    function action: OpaqueCBlock; message 'action';
    procedure willMoveToAnimator (dynamicAnimator: UIDynamicAnimator); message 'willMoveToAnimator:';
    function dynamicAnimator: UIDynamicAnimator; message 'dynamicAnimator';
  end;
{$endif}

