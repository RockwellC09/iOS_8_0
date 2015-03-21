{ Parsed from UIKit.framework (iPhoneOS8.2) UICollectionView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UICollectionViewPtr = ^UICollectionView;
  UICollectionViewDataSourceProtocolPtr = ^UICollectionViewDataSourceProtocol;
  UICollectionViewDelegateProtocolPtr = ^UICollectionViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UICollectionViewScrollPosition = NSUInteger;
  UICollectionViewScrollPositionPtr = ^UICollectionViewScrollPosition;

const
  UICollectionViewScrollPositionNone = 0;
  UICollectionViewScrollPositionTop = 1 shl 0;
  UICollectionViewScrollPositionCenteredVertically = 1 shl 1;
  UICollectionViewScrollPositionBottom = 1 shl 2;
  UICollectionViewScrollPositionLeft = 1 shl 3;
  UICollectionViewScrollPositionCenteredHorizontally = 1 shl 4;
  UICollectionViewScrollPositionRight = 1 shl 5;

type
  UICollectionViewLayoutInteractiveTransitionCompletion = OpaqueCBlock;
{$endif}

{$ifdef PROTOCOLS}

type
  UICollectionViewDataSourceProtocol = objcprotocol external name 'UICollectionViewDataSource' (NSObjectProtocol)
  required
    function collectionView_numberOfItemsInSection (collectionView: UICollectionView; section: NSInteger): NSInteger; message 'collectionView:numberOfItemsInSection:';
    function collectionView_cellForItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): UICollectionViewCell; message 'collectionView:cellForItemAtIndexPath:';
  optional
    function numberOfSectionsInCollectionView (collectionView: UICollectionView): NSInteger; message 'numberOfSectionsInCollectionView:';
    function collectionView_viewForSupplementaryElementOfKind_atIndexPath (collectionView: UICollectionView; kind: NSString; indexPath: NSIndexPath): UICollectionReusableView; message 'collectionView:viewForSupplementaryElementOfKind:atIndexPath:';
  end;

type
  UICollectionViewDelegateProtocol = objcprotocol external name 'UICollectionViewDelegate' (UIScrollViewDelegateProtocol)
  optional
    function collectionView_shouldHighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldHighlightItemAtIndexPath:';
    procedure collectionView_didHighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didHighlightItemAtIndexPath:';
    procedure collectionView_didUnhighlightItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didUnhighlightItemAtIndexPath:';
    function collectionView_shouldSelectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldSelectItemAtIndexPath:';
    function collectionView_shouldDeselectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldDeselectItemAtIndexPath:';
    procedure collectionView_didSelectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didSelectItemAtIndexPath:';
    procedure collectionView_didDeselectItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath); message 'collectionView:didDeselectItemAtIndexPath:';
    procedure collectionView_willDisplayCell_forItemAtIndexPath (collectionView: UICollectionView; cell: UICollectionViewCell; indexPath: NSIndexPath); message 'collectionView:willDisplayCell:forItemAtIndexPath:'; { available in 8_0 }
    procedure collectionView_willDisplaySupplementaryView_forElementKind_atIndexPath (collectionView: UICollectionView; view: UICollectionReusableView; elementKind: NSString; indexPath: NSIndexPath); message 'collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:'; { available in 8_0 }
    procedure collectionView_didEndDisplayingCell_forItemAtIndexPath (collectionView: UICollectionView; cell: UICollectionViewCell; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingCell:forItemAtIndexPath:';
    procedure collectionView_didEndDisplayingSupplementaryView_forElementOfKind_atIndexPath (collectionView: UICollectionView; view: UICollectionReusableView; elementKind: NSString; indexPath: NSIndexPath); message 'collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:';
    function collectionView_shouldShowMenuForItemAtIndexPath (collectionView: UICollectionView; indexPath: NSIndexPath): boolean; message 'collectionView:shouldShowMenuForItemAtIndexPath:';
    function collectionView_canPerformAction_forItemAtIndexPath_withSender (collectionView: UICollectionView; action: SEL; indexPath: NSIndexPath; sender: id): boolean; message 'collectionView:canPerformAction:forItemAtIndexPath:withSender:';
    procedure collectionView_performAction_forItemAtIndexPath_withSender (collectionView: UICollectionView; action: SEL; indexPath: NSIndexPath; sender: id); message 'collectionView:performAction:forItemAtIndexPath:withSender:';
    function collectionView_transitionLayoutForOldLayout_newLayout (collectionView: UICollectionView; fromLayout: UICollectionViewLayout; toLayout: UICollectionViewLayout): UICollectionViewTransitionLayout; message 'collectionView:transitionLayoutForOldLayout:newLayout:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UICollectionView = objcclass external (UIScrollView)
  public
    function initWithFrame_collectionViewLayout (frame: CGRect; layout: UICollectionViewLayout): instancetype; message 'initWithFrame:collectionViewLayout:';
    procedure setCollectionViewLayout(newValue: UICollectionViewLayout); message 'setCollectionViewLayout:';
    function collectionViewLayout: UICollectionViewLayout; message 'collectionViewLayout';
    procedure setDelegate(newValue: UICollectionViewDelegateProtocol); message 'setDelegate:';
    function delegate: UICollectionViewDelegateProtocol; message 'delegate';
    procedure setDataSource(newValue: UICollectionViewDataSourceProtocol); message 'setDataSource:';
    function dataSource: UICollectionViewDataSourceProtocol; message 'dataSource';
    procedure setBackgroundView(newValue: UIView); message 'setBackgroundView:';
    function backgroundView: UIView; message 'backgroundView';
    procedure registerClass_forCellWithReuseIdentifier (cellClass: pobjc_class; identifier: NSString); message 'registerClass:forCellWithReuseIdentifier:';
    procedure registerNib_forCellWithReuseIdentifier (nib: UINib; identifier: NSString); message 'registerNib:forCellWithReuseIdentifier:';
    procedure registerClass_forSupplementaryViewOfKind_withReuseIdentifier (viewClass: pobjc_class; elementKind: NSString; identifier: NSString); message 'registerClass:forSupplementaryViewOfKind:withReuseIdentifier:';
    procedure registerNib_forSupplementaryViewOfKind_withReuseIdentifier (nib: UINib; kind: NSString; identifier: NSString); message 'registerNib:forSupplementaryViewOfKind:withReuseIdentifier:';
    function dequeueReusableCellWithReuseIdentifier_forIndexPath (identifier: NSString; indexPath: NSIndexPath): id; message 'dequeueReusableCellWithReuseIdentifier:forIndexPath:';
    function dequeueReusableSupplementaryViewOfKind_withReuseIdentifier_forIndexPath (elementKind: NSString; identifier: NSString; indexPath: NSIndexPath): id; message 'dequeueReusableSupplementaryViewOfKind:withReuseIdentifier:forIndexPath:';
    procedure setAllowsSelection(newValue: boolean); message 'setAllowsSelection:';
    function allowsSelection: boolean; message 'allowsSelection';
    procedure setAllowsMultipleSelection(newValue: boolean); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: boolean; message 'allowsMultipleSelection';
    function indexPathsForSelectedItems: NSArray; message 'indexPathsForSelectedItems';
    procedure selectItemAtIndexPath_animated_scrollPosition (indexPath: NSIndexPath; animated: boolean; scrollPosition: UICollectionViewScrollPosition); message 'selectItemAtIndexPath:animated:scrollPosition:';
    procedure deselectItemAtIndexPath_animated (indexPath: NSIndexPath; animated: boolean); message 'deselectItemAtIndexPath:animated:';
    procedure reloadData; message 'reloadData';
    procedure setCollectionViewLayout_animated (layout: UICollectionViewLayout; animated: boolean); message 'setCollectionViewLayout:animated:';
    procedure setCollectionViewLayout_animated_completion (layout: UICollectionViewLayout; animated: boolean; completion: OpaqueCBlock); message 'setCollectionViewLayout:animated:completion:'; { available in 7_0 }
    function startInteractiveTransitionToCollectionViewLayout_completion (layout: UICollectionViewLayout; completion: UICollectionViewLayoutInteractiveTransitionCompletion): UICollectionViewTransitionLayout; message 'startInteractiveTransitionToCollectionViewLayout:completion:'; { available in 7_0 }
    procedure finishInteractiveTransition; message 'finishInteractiveTransition'; { available in 7_0 }
    procedure cancelInteractiveTransition; message 'cancelInteractiveTransition'; { available in 7_0 }
    function numberOfSections: NSInteger; message 'numberOfSections';
    function numberOfItemsInSection (section: NSInteger): NSInteger; message 'numberOfItemsInSection:';
    function layoutAttributesForItemAtIndexPath (indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForItemAtIndexPath:';
    function layoutAttributesForSupplementaryElementOfKind_atIndexPath (kind: NSString; indexPath: NSIndexPath): UICollectionViewLayoutAttributes; message 'layoutAttributesForSupplementaryElementOfKind:atIndexPath:';
    function indexPathForItemAtPoint (point: CGPoint): NSIndexPath; message 'indexPathForItemAtPoint:';
    function indexPathForCell (cell: UICollectionViewCell): NSIndexPath; message 'indexPathForCell:';
    function cellForItemAtIndexPath (indexPath: NSIndexPath): UICollectionViewCell; message 'cellForItemAtIndexPath:';
    function visibleCells: NSArray; message 'visibleCells';
    function indexPathsForVisibleItems: NSArray; message 'indexPathsForVisibleItems';
    procedure scrollToItemAtIndexPath_atScrollPosition_animated (indexPath: NSIndexPath; scrollPosition: UICollectionViewScrollPosition; animated: boolean); message 'scrollToItemAtIndexPath:atScrollPosition:animated:';
    procedure insertSections (sections: NSIndexSet); message 'insertSections:';
    procedure deleteSections (sections: NSIndexSet); message 'deleteSections:';
    procedure reloadSections (sections: NSIndexSet); message 'reloadSections:';
    procedure moveSection_toSection (section: NSInteger; newSection: NSInteger); message 'moveSection:toSection:';
    procedure insertItemsAtIndexPaths (indexPaths: NSArray); message 'insertItemsAtIndexPaths:';
    procedure deleteItemsAtIndexPaths (indexPaths: NSArray); message 'deleteItemsAtIndexPaths:';
    procedure reloadItemsAtIndexPaths (indexPaths: NSArray); message 'reloadItemsAtIndexPaths:';
    procedure moveItemAtIndexPath_toIndexPath (indexPath: NSIndexPath; newIndexPath: NSIndexPath); message 'moveItemAtIndexPath:toIndexPath:';
    procedure performBatchUpdates_completion (updates: OpaqueCBlock; completion: OpaqueCBlock); message 'performBatchUpdates:completion:';
  end;


type
  NSIndexPath_UICollectionViewAdditions = objccategory external name 'UICollectionViewAdditions' (NSIndexPath)
    class function indexPathForItem_inSection (item: NSInteger; section: NSInteger): NSIndexPath; message 'indexPathForItem:inSection:'; { available in 6_0 }
    function item: NSInteger; message 'item';
  end;
{$endif}

