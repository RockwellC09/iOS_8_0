{ Parsed from UIKit.framework (iPhoneOS8.2) UICollisionBehavior.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UICollisionBehaviorPtr = ^UICollisionBehavior;
  UICollisionBehaviorDelegateProtocolPtr = ^UICollisionBehaviorDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UICollisionBehaviorMode = NSUInteger;
  UICollisionBehaviorModePtr = ^UICollisionBehaviorMode;

const
  UICollisionBehaviorModeItems = 1 shl 0;
  UICollisionBehaviorModeBoundaries = 1 shl 1;
  UICollisionBehaviorModeEverything = NSUIntegerMax;
{$endif}

{$ifdef PROTOCOLS}

type
  UICollisionBehaviorDelegateProtocol = objcprotocol external name 'UICollisionBehaviorDelegate' (NSObjectProtocol)
  optional
    procedure collisionBehavior_beganContactForItem_withItem_atPoint (behavior: UICollisionBehavior; item1: UIDynamicItemProtocol; item2: UIDynamicItemProtocol; p: CGPoint); message 'collisionBehavior:beganContactForItem:withItem:atPoint:';
    procedure collisionBehavior_endedContactForItem_withItem (behavior: UICollisionBehavior; item1: UIDynamicItemProtocol; item2: UIDynamicItemProtocol); message 'collisionBehavior:endedContactForItem:withItem:';
    procedure collisionBehavior_beganContactForItem_withBoundaryIdentifier_atPoint (behavior: UICollisionBehavior; item: UIDynamicItemProtocol; identifier: NSCopyingProtocol; p: CGPoint); message 'collisionBehavior:beganContactForItem:withBoundaryIdentifier:atPoint:';
    procedure collisionBehavior_endedContactForItem_withBoundaryIdentifier (behavior: UICollisionBehavior; item: UIDynamicItemProtocol; identifier: NSCopyingProtocol); message 'collisionBehavior:endedContactForItem:withBoundaryIdentifier:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UICollisionBehavior = objcclass external (UIDynamicBehavior)
  public
    function initWithItems (items: NSArray): instancetype; message 'initWithItems:';
    procedure addItem (item: UIDynamicItemProtocol); message 'addItem:';
    procedure removeItem (item: UIDynamicItemProtocol); message 'removeItem:';
    function items: NSArray; message 'items';
    procedure setCollisionMode(newValue: UICollisionBehaviorMode); message 'setCollisionMode:';
    function collisionMode: UICollisionBehaviorMode; message 'collisionMode';
    procedure setTranslatesReferenceBoundsIntoBoundary(newValue: boolean); message 'setTranslatesReferenceBoundsIntoBoundary:';
    function translatesReferenceBoundsIntoBoundary: boolean; message 'translatesReferenceBoundsIntoBoundary';
    procedure setTranslatesReferenceBoundsIntoBoundaryWithInsets (insets: UIEdgeInsets); message 'setTranslatesReferenceBoundsIntoBoundaryWithInsets:';
    procedure addBoundaryWithIdentifier_forPath (identifier: NSCopyingProtocol; bezierPath: UIBezierPath); message 'addBoundaryWithIdentifier:forPath:';
    procedure addBoundaryWithIdentifier_fromPoint_toPoint (identifier: NSCopyingProtocol; p1: CGPoint; p2: CGPoint); message 'addBoundaryWithIdentifier:fromPoint:toPoint:';
    function boundaryWithIdentifier (identifier: NSCopyingProtocol): UIBezierPath; message 'boundaryWithIdentifier:';
    procedure removeBoundaryWithIdentifier (identifier: NSCopyingProtocol); message 'removeBoundaryWithIdentifier:';
    function boundaryIdentifiers: NSArray; message 'boundaryIdentifiers';
    procedure removeAllBoundaries; message 'removeAllBoundaries';
    procedure setCollisionDelegate(newValue: UICollisionBehaviorDelegateProtocol); message 'setCollisionDelegate:';
    function collisionDelegate: UICollisionBehaviorDelegateProtocol; message 'collisionDelegate';
  end;
{$endif}

