{ Parsed from UIKit.framework (iPhoneOS8.2) UICollectionViewTransitionLayout.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UICollectionViewTransitionLayoutPtr = ^UICollectionViewTransitionLayout;
{$endif}

{$ifdef CLASSES}

type
  UICollectionViewTransitionLayout = objcclass external (UICollectionViewLayout)
  public
    procedure setTransitionProgress(newValue: CGFloat); message 'setTransitionProgress:';
    function transitionProgress: CGFloat; message 'transitionProgress';
    function currentLayout: UICollectionViewLayout; message 'currentLayout';
    function nextLayout: UICollectionViewLayout; message 'nextLayout';
    function initWithCurrentLayout_nextLayout (currentLayout_: UICollectionViewLayout; newLayout: UICollectionViewLayout): instancetype; message 'initWithCurrentLayout:nextLayout:';
    procedure updateValue_forAnimatedKey (value: CGFloat; key: NSString); message 'updateValue:forAnimatedKey:';
    function valueForAnimatedKey (key: NSString): CGFloat; message 'valueForAnimatedKey:';
  end;
{$endif}

