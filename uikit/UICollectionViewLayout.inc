{ Parsed from UIKit.framework (iPhoneOS8.2) UICollectionViewLayout.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UICollectionViewLayoutAttributesPtr = ^UICollectionViewLayoutAttributes;
  UICollectionViewUpdateItemPtr = ^UICollectionViewUpdateItem;
  UICollectionViewLayoutInvalidationContextPtr = ^UICollectionViewLayoutInvalidationContext;
  UICollectionViewLayoutPtr = ^UICollectionViewLayout;
{$endif}

{$ifdef TYPES}
type
  UICollectionElementCategory = NSUInteger;
  UICollectionElementCategoryPtr = ^UICollectionElementCategory;

const
  UICollectionElementCategoryCell = 0;
  UICollectionElementCategorySupplementaryView = 1;
  UICollectionElementCategoryDecorationView = 2;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewLayoutAttributes = objcclass external (NSObject, NSCopyingProtocol, UIDynamicItemProtocol)
  public
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setTransform3D(newValue: CATransform3D); message 'setTransform3D:';
    function transform3D: CATransform3D; message 'transform3D';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setZIndex(newValue: NSInteger); message 'setZIndex:';
    function zIndex: NSInteger; message 'zIndex';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setIndexPath(newValue: NSIndexPath); message 'setIndexPath:';
    function indexPath: NSIndexPath; message 'indexPath';
    function representedElementCategory: UICollectionElementCategory; message 'representedElementCategory';
    function representedElementKind: NSString; message 'representedElementKind';
    class function layoutAttributesForCellWithIndexPath (indexPath_: NSIndexPath): instancetype; message 'layoutAttributesForCellWithIndexPath:';
    class function layoutAttributesForSupplementaryViewOfKind_withIndexPath (elementKind: NSString; indexPath_: NSIndexPath): instancetype; message 'layoutAttributesForSupplementaryViewOfKind:withIndexPath:';
    class function layoutAttributesForDecorationViewOfKind_withIndexPath (decorationViewKind: NSString; indexPath_: NSIndexPath): instancetype; message 'layoutAttributesForDecorationViewOfKind:withIndexPath:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  UICollectionUpdateAction = NSInteger;
  UICollectionUpdateActionPtr = ^UICollectionUpdateAction;

const
  UICollectionUpdateActionInsert = 0;
  UICollectionUpdateActionDelete = 1;
  UICollectionUpdateActionReload = 2;
  UICollectionUpdateActionMove = 3;
  UICollectionUpdateActionNone = 4;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewUpdateItem = objcclass external (NSObject)
  public
    function indexPathBeforeUpdate: NSIndexPath; message 'indexPathBeforeUpdate';
    function indexPathAfterUpdate: NSIndexPath; message 'indexPathAfterUpdate';
    function updateAction: UICollectionUpdateAction; message 'updateAction';
  end;

type
  UICollectionViewLayoutInvalidationContext = objcclass external (NSObject)
  public
    function invalidateEverything: boolean; message 'invalidateEverything';
    function invalidateDataSourceCounts: boolean; message 'invalidateDataSourceCounts';
    procedure invalidateItemsAtIndexPaths (indexPaths: NSArray); message 'invalidateItemsAtIndexPaths:'; { available in 8_0 }
    procedure invalidateSupplementaryElementsOfKind_atIndexPaths (elementKind: NSString; indexPaths: NSArray); message 'invalidateSupplementaryElementsOfKind:atIndexPaths:'; { available in 8_0 }
    procedure invalidateDecorationElementsOfKind_atIndexPaths (elementKind: NSString; indexPaths: NSArray); message 'invalidateDecorationElementsOfKind:atIndexPaths:'; { available in 8_0 }
    function invalidatedItemIndexPaths: NSArray; message 'invalidatedItemIndexPaths';
    function invalidatedSupplementaryIndexPaths: NSDictionary; message 'invalidatedSupplementaryIndexPaths';
    function invalidatedDecorationIndexPaths: NSDictionary; message 'invalidatedDecorationIndexPaths';
    procedure setContentOffsetAdjustment(newValue: CGPoint); message 'setContentOffsetAdjustment:';
    function contentOffsetAdjustment: CGPoint; message 'contentOffsetAdjustment';
    procedure setContentSizeAdjustment(newValue: CGSize); message 'setContentSizeAdjustment:';
    function contentSizeAdjustment: CGSize; message 'contentSizeAdjustment';
  end;

type
  UICollectionViewLayout = objcclass external (NSObject, NSCodingProtocol)
  public
    function collectionView: UICollectionView; message 'collectionView';
    procedure invalidateLayout; message 'invalidateLayout';
    procedure invalidateLayoutWithContext (context: UICollectionViewLayoutInvalidationContext); message 'invalidateLayoutWithContext:'; { available in 7_0 }
    procedure registerClass_forDecorationViewOfKind (viewClass: pobjc_class; elementKind: NSString); message 'registerClass:forDecorationViewOfKind:';
    procedure registerNib_forDecorationViewOfKind (nib: UINib; elementKind: NSString); message 'registerNib:forDecorationViewOfKind:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;


type
  UISubclassingHooks = objccategory external (UICollectionViewLayout)
    class function layoutAttributesClass: pobjc_class; message 'layoutAttributesClass';
    class function invalidationContextClass: pobjc_class; message 'invalidationContextClass'; { available in 7_0 }
    procedure prepareLayout; message 'prepareLayout';
    function layoutAttributesForElementsInRect (rect: CGRect): NSArray; message 'layoutAttributesForElementsInRect:';
    function layoutAttributesForItemAtIndexPath (indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForItemAtIndexPath:';
    function layoutAttributesForSupplementaryViewOfKind_atIndexPath (elementKind: NSString; indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForSupplementaryViewOfKind:atIndexPath:';
    function layoutAttributesForDecorationViewOfKind_atIndexPath (elementKind: NSString; indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForDecorationViewOfKind:atIndexPath:';
    function shouldInvalidateLayoutForBoundsChange (newBounds: CGRect): boolean; message 'shouldInvalidateLayoutForBoundsChange:';
    function invalidationContextForBoundsChange (newBounds: CGRect): UICollectionViewLayoutInvalidationContext; message 'invalidationContextForBoundsChange:'; { available in 7_0 }
    function shouldInvalidateLayoutForPreferredLayoutAttributes_withOriginalAttributes (preferredAttributes: UICollectionViewLayoutAttributes; originalAttributes: UICollectionViewLayoutAttributes): boolean; message 'shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:'; { available in 8_0 }
    function invalidationContextForPreferredLayoutAttributes_withOriginalAttributes (preferredAttributes: UICollectionViewLayoutAttributes; originalAttributes: UICollectionViewLayoutAttributes): UICollectionViewLayoutInvalidationContext; message 'invalidationContextForPreferredLayoutAttributes:withOriginalAttributes:'; { available in 8_0 }
    function targetContentOffsetForProposedContentOffset_withScrollingVelocity (proposedContentOffset: CGPoint; velocity: CGPoint): CGPoint; message 'targetContentOffsetForProposedContentOffset:withScrollingVelocity:';
    function targetContentOffsetForProposedContentOffset (proposedContentOffset: CGPoint): CGPoint; message 'targetContentOffsetForProposedContentOffset:'; { available in 7_0 }
    function collectionViewContentSize: CGSize; message 'collectionViewContentSize';
  end;

type
  UIUpdateSupportHooks = objccategory external (UICollectionViewLayout)
    procedure prepareForCollectionViewUpdates (updateItems: NSArray); message 'prepareForCollectionViewUpdates:';
    procedure finalizeCollectionViewUpdates; message 'finalizeCollectionViewUpdates';
    procedure prepareForAnimatedBoundsChange (oldBounds: CGRect); message 'prepareForAnimatedBoundsChange:';
    procedure finalizeAnimatedBoundsChange; message 'finalizeAnimatedBoundsChange';
    procedure prepareForTransitionToLayout (newLayout: UICollectionViewLayout); message 'prepareForTransitionToLayout:'; { available in 7_0 }
    procedure prepareForTransitionFromLayout (oldLayout: UICollectionViewLayout); message 'prepareForTransitionFromLayout:'; { available in 7_0 }
    procedure finalizeLayoutTransition; message 'finalizeLayoutTransition'; { available in 7_0 }
    function initialLayoutAttributesForAppearingItemAtIndexPath (itemIndexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'initialLayoutAttributesForAppearingItemAtIndexPath:';
    function finalLayoutAttributesForDisappearingItemAtIndexPath (itemIndexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'finalLayoutAttributesForDisappearingItemAtIndexPath:';
    function initialLayoutAttributesForAppearingSupplementaryElementOfKind_atIndexPath (elementKind: NSString; elementIndexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:';
    function finalLayoutAttributesForDisappearingSupplementaryElementOfKind_atIndexPath (elementKind: NSString; elementIndexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:';
    function initialLayoutAttributesForAppearingDecorationElementOfKind_atIndexPath (elementKind: NSString; decorationIndexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'initialLayoutAttributesForAppearingDecorationElementOfKind:atIndexPath:';
    function finalLayoutAttributesForDisappearingDecorationElementOfKind_atIndexPath (elementKind: NSString; decorationIndexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'finalLayoutAttributesForDisappearingDecorationElementOfKind:atIndexPath:';
    function indexPathsToDeleteForSupplementaryViewOfKind (elementKind: NSString): NSArray; message 'indexPathsToDeleteForSupplementaryViewOfKind:'; { available in 7_0 }
    function indexPathsToDeleteForDecorationViewOfKind (elementKind: NSString): NSArray; message 'indexPathsToDeleteForDecorationViewOfKind:'; { available in 7_0 }
    function indexPathsToInsertForSupplementaryViewOfKind (elementKind: NSString): NSArray; message 'indexPathsToInsertForSupplementaryViewOfKind:'; { available in 7_0 }
    function indexPathsToInsertForDecorationViewOfKind (elementKind: NSString): NSArray; message 'indexPathsToInsertForDecorationViewOfKind:'; { available in 7_0 }
  end;
{$endif}

