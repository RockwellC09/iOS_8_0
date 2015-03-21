{ Parsed from UIKit.framework (iPhoneOS8.2) UIDynamicAnimator.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIDynamicAnimatorPtr = ^UIDynamicAnimator;
  UIDynamicAnimatorDelegateProtocolPtr = ^UIDynamicAnimatorDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDynamicAnimatorDelegateProtocol = objcprotocol external name 'UIDynamicAnimatorDelegate' (NSObjectProtocol)
  optional
    procedure dynamicAnimatorWillResume (animator: UIDynamicAnimator); message 'dynamicAnimatorWillResume:';
    procedure dynamicAnimatorDidPause (animator: UIDynamicAnimator); message 'dynamicAnimatorDidPause:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIDynamicAnimator = objcclass external (NSObject)
  public
    function initWithReferenceView (view: UIView): instancetype; message 'initWithReferenceView:';
    procedure addBehavior (behavior: UIDynamicBehavior); message 'addBehavior:';
    procedure removeBehavior (behavior: UIDynamicBehavior); message 'removeBehavior:';
    procedure removeAllBehaviors; message 'removeAllBehaviors';
    function referenceView: UIView; message 'referenceView';
    function behaviors: NSArray; message 'behaviors';
    function itemsInRect (rect: CGRect): NSArray; message 'itemsInRect:';
    procedure updateItemUsingCurrentState (item: UIDynamicItemProtocol); message 'updateItemUsingCurrentState:';
    function isRunning: boolean; message 'isRunning';
    function elapsedTime: NSTimeInterval; message 'elapsedTime';
    procedure setDelegate(newValue: UIDynamicAnimatorDelegateProtocol); message 'setDelegate:';
    function delegate: UIDynamicAnimatorDelegateProtocol; message 'delegate';
  end;


type
  UICollectionViewAdditions = objccategory external (UIDynamicAnimator)
    function initWithCollectionViewLayout (layout: UICollectionViewLayout): instancetype; message 'initWithCollectionViewLayout:';
    function layoutAttributesForCellAtIndexPath (indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForCellAtIndexPath:';
    function layoutAttributesForSupplementaryViewOfKind_atIndexPath (kind: NSString; indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForSupplementaryViewOfKind:atIndexPath:';
    function layoutAttributesForDecorationViewOfKind_atIndexPath (decorationViewKind: NSString; indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForDecorationViewOfKind:atIndexPath:';
  end;
{$endif}

