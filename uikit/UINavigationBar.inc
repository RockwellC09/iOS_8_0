{ Parsed from UIKit.framework (iPhoneOS8.2) UINavigationBar.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UINavigationBarPtr = ^UINavigationBar;
  UINavigationItemPtr = ^UINavigationItem;
  UINavigationBarDelegateProtocolPtr = ^UINavigationBarDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UINavigationBar = objcclass external (UIView, NSCodingProtocol, UIBarPositioningProtocol)
  private
    _itemStack: NSMutableArray;
    _rightMargin: CGFloat;
    _state: cuint;
    _delegate: id;
    _backgroundView: UIView;
    _titleView: UIView;
    _leftViews: NSArray;
    _rightViews: NSArray;
    _prompt: UIView;
    _accessoryView: UIView;
    _barTintColor: UIColor;
    _appearanceStorage: id;
    _currentAlert: id;
    _navbarFlags: bitpacked record
      case byte of
        0: (_anonBitField__navbarFlags0: cuint);
        1: (
          animate: 0..1;
          animationDisabledCount: 0..((1 shl 10)-1);
          transitioningBarStyle: 0..1;
          newBarStyle: 0..((1 shl 3)-1);
          transitioningToTranslucent: 0..1;
          barStyle: 0..((1 shl 3)-1);
          barTranslucence: 0..((1 shl 3)-1);
          disableLayout: 0..1;
          backPressed: 0..1;
          animatePromptChange: 0..1;
          pendingHideBackButton: 0..1;
          titleAutosizesToFit: 0..1;
          usingNewAPI: 0..1;
          forceFullHeightInLandscape: 0..1;
          isLocked: 0..1;
          shouldUpdatePromptAfterTransition: 0..1;
          crossfadeItems: 0..1;
          autoAdjustTitle: 0..1;
          isContainedInPopover: 0..1;
          needsDrawRect: 0..1;
          animationCleanupCancelled: 0..1;
          layoutInProgress: 0..1;
          dynamicDuration: 0..1;
          isInteractive: 0..1;
          cancelledTransition: 0..1;
          animationCount: 0..((1 shl 4)-1);
          backgroundLayoutNeedsUpdate: 0..1;
          backgroundImageNeedsUpdate: 0..1;
        );
      end;
  public
    procedure setBarStyle(newValue: UIBarStyle); message 'setBarStyle:';
    function barStyle: UIBarStyle; message 'barStyle';
    procedure setDelegate(newValue: UINavigationBarDelegateProtocol); message 'setDelegate:';
    function delegate: UINavigationBarDelegateProtocol; message 'delegate';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
    procedure pushNavigationItem_animated (item: UINavigationItem; animated: boolean); message 'pushNavigationItem:animated:';
    function popNavigationItemAnimated (animated: boolean): UINavigationItem; message 'popNavigationItemAnimated:';
    function topItem: UINavigationItem; message 'topItem';
    function backItem: UINavigationItem; message 'backItem';
    procedure setItems(newValue: NSArray); message 'setItems:';
    function items: NSArray; message 'items';
    procedure setItems_animated (items_: NSArray; animated: boolean); message 'setItems:animated:';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setBackgroundImage_forBarPosition_barMetrics (backgroundImage: UIImage; barPosition: UIBarPosition; barMetrics: UIBarMetrics); message 'setBackgroundImage:forBarPosition:barMetrics:'; { available in 7_0 }
    function backgroundImageForBarPosition_barMetrics (barPosition: UIBarPosition; barMetrics: UIBarMetrics): UIImage; message 'backgroundImageForBarPosition:barMetrics:'; { available in 7_0 }
    procedure setBackgroundImage_forBarMetrics (backgroundImage: UIImage; barMetrics: UIBarMetrics); message 'setBackgroundImage:forBarMetrics:'; { available in 5_0 }
    function backgroundImageForBarMetrics (barMetrics: UIBarMetrics): UIImage; message 'backgroundImageForBarMetrics:'; { available in 5_0 }
    procedure setShadowImage(newValue: UIImage); message 'setShadowImage:';
    function shadowImage: UIImage; message 'shadowImage';
    procedure setTitleTextAttributes(newValue: NSDictionary); message 'setTitleTextAttributes:';
    function titleTextAttributes: NSDictionary; message 'titleTextAttributes';
    procedure setTitleVerticalPositionAdjustment_forBarMetrics (adjustment: CGFloat; barMetrics: UIBarMetrics); message 'setTitleVerticalPositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function titleVerticalPositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): CGFloat; message 'titleVerticalPositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure setBackIndicatorImage(newValue: UIImage); message 'setBackIndicatorImage:';
    function backIndicatorImage: UIImage; message 'backIndicatorImage';
    procedure setBackIndicatorTransitionMaskImage(newValue: UIImage); message 'setBackIndicatorTransitionMaskImage:';
    function backIndicatorTransitionMaskImage: UIImage; message 'backIndicatorTransitionMaskImage';

    { Adopted protocols }
    function barPosition: UIBarPosition; message 'barPosition';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UINavigationBarDelegateProtocol = objcprotocol external name 'UINavigationBarDelegate' (UIBarPositioningDelegateProtocol)
  optional
    function navigationBar_shouldPushItem (navigationBar: UINavigationBar; item: UINavigationItem): boolean; message 'navigationBar:shouldPushItem:';
    procedure navigationBar_didPushItem (navigationBar: UINavigationBar; item: UINavigationItem); message 'navigationBar:didPushItem:';
    function navigationBar_shouldPopItem (navigationBar: UINavigationBar; item: UINavigationItem): boolean; message 'navigationBar:shouldPopItem:';
    procedure navigationBar_didPopItem (navigationBar: UINavigationBar; item: UINavigationItem); message 'navigationBar:didPopItem:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UINavigationItem = objcclass external (NSObject, NSCodingProtocol)
  private
    _title: NSString;
    _backButtonTitle: NSString;
    _backBarButtonItem: UIBarButtonItem;
    _prompt: NSString;
    _tag: NSInteger;
    _context: id;
    _navigationBar: UINavigationBar;
    _defaultTitleView: UIView;
    _titleView: UIView;
    _backButtonView: UIView;
    _leftBarButtonItems: NSArray;
    _rightBarButtonItems: NSArray;
    _customLeftViews: NSArray;
    _customRightViews: NSArray;
    _hidesBackButton: boolean;
    _leftItemsSupplementBackButton: boolean;
    _frozenTitleView: UIImageView;
  public
    function initWithTitle (title: NSString): instancetype; message 'initWithTitle:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setBackBarButtonItem(newValue: UIBarButtonItem); message 'setBackBarButtonItem:';
    function backBarButtonItem: UIBarButtonItem; message 'backBarButtonItem';
    procedure setTitleView(newValue: UIView); message 'setTitleView:';
    function titleView: UIView; message 'titleView';
    procedure setPrompt(newValue: NSString); message 'setPrompt:';
    function prompt: NSString; message 'prompt';
    procedure setHidesBackButton(newValue: boolean); message 'setHidesBackButton:';
    function hidesBackButton: boolean; message 'hidesBackButton';
    procedure setHidesBackButton_animated (hidesBackButton_: boolean; animated: boolean); message 'setHidesBackButton:animated:';
    procedure setLeftBarButtonItems(newValue: NSArray); message 'setLeftBarButtonItems:';
    function leftBarButtonItems: NSArray; message 'leftBarButtonItems';
    procedure setRightBarButtonItems(newValue: NSArray); message 'setRightBarButtonItems:';
    function rightBarButtonItems: NSArray; message 'rightBarButtonItems';
    procedure setLeftBarButtonItems_animated (items: NSArray; animated: boolean); message 'setLeftBarButtonItems:animated:'; { available in 5_0 }
    procedure setRightBarButtonItems_animated (items: NSArray; animated: boolean); message 'setRightBarButtonItems:animated:'; { available in 5_0 }
    procedure setLeftItemsSupplementBackButton(newValue: boolean); message 'setLeftItemsSupplementBackButton:';
    function leftItemsSupplementBackButton: boolean; message 'leftItemsSupplementBackButton';
    procedure setLeftBarButtonItem(newValue: UIBarButtonItem); message 'setLeftBarButtonItem:';
    function leftBarButtonItem: UIBarButtonItem; message 'leftBarButtonItem';
    procedure setRightBarButtonItem(newValue: UIBarButtonItem); message 'setRightBarButtonItem:';
    function rightBarButtonItem: UIBarButtonItem; message 'rightBarButtonItem';
    procedure setLeftBarButtonItem_animated (item: UIBarButtonItem; animated: boolean); message 'setLeftBarButtonItem:animated:';
    procedure setRightBarButtonItem_animated (item: UIBarButtonItem; animated: boolean); message 'setRightBarButtonItem:animated:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

