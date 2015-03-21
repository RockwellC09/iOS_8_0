{ Parsed from UIKit.framework (iPhoneOS8.2) UITabBar.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UITabBarPtr = ^UITabBar;
  UITabBarDelegateProtocolPtr = ^UITabBarDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UITabBarItemPositioning = NSInteger;
  UITabBarItemPositioningPtr = ^UITabBarItemPositioning;

const
  UITabBarItemPositioningAutomatic = 0;
  UITabBarItemPositioningFill = 1;
  UITabBarItemPositioningCentered = 2;
{$endif}

{$ifdef CLASSES}

type
  UITabBar = objcclass external (UIView)
  public
    procedure setDelegate(newValue: UITabBarDelegateProtocol); message 'setDelegate:';
    function delegate: UITabBarDelegateProtocol; message 'delegate';
    procedure setItems(newValue: NSArray); message 'setItems:';
    function items: NSArray; message 'items';
    procedure setSelectedItem(newValue: UITabBarItem); message 'setSelectedItem:';
    function selectedItem: UITabBarItem; message 'selectedItem';
    procedure setItems_animated (items_: NSArray; animated: boolean); message 'setItems:animated:';
    procedure beginCustomizingItems (items_: NSArray); message 'beginCustomizingItems:';
    function endCustomizingAnimated (animated: boolean): boolean; message 'endCustomizingAnimated:';
    function isCustomizing: boolean; message 'isCustomizing';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setSelectedImageTintColor(newValue: UIColor); message 'setSelectedImageTintColor:';
    function selectedImageTintColor: UIColor; message 'selectedImageTintColor';
    procedure setBackgroundImage(newValue: UIImage); message 'setBackgroundImage:';
    function backgroundImage: UIImage; message 'backgroundImage';
    procedure setSelectionIndicatorImage(newValue: UIImage); message 'setSelectionIndicatorImage:';
    function selectionIndicatorImage: UIImage; message 'selectionIndicatorImage';
    procedure setShadowImage(newValue: UIImage); message 'setShadowImage:';
    function shadowImage: UIImage; message 'shadowImage';
    procedure setItemPositioning(newValue: UITabBarItemPositioning); message 'setItemPositioning:';
    function itemPositioning: UITabBarItemPositioning; message 'itemPositioning';
    procedure setItemWidth(newValue: CGFloat); message 'setItemWidth:';
    function itemWidth: CGFloat; message 'itemWidth';
    procedure setItemSpacing(newValue: CGFloat); message 'setItemSpacing:';
    function itemSpacing: CGFloat; message 'itemSpacing';
    procedure setBarStyle(newValue: UIBarStyle); message 'setBarStyle:';
    function barStyle: UIBarStyle; message 'barStyle';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITabBarDelegateProtocol = objcprotocol external name 'UITabBarDelegate' (NSObjectProtocol)
  optional
    procedure tabBar_didSelectItem (tabBar: UITabBar; item: UITabBarItem); message 'tabBar:didSelectItem:';
    procedure tabBar_willBeginCustomizingItems (tabBar: UITabBar; items: NSArray); message 'tabBar:willBeginCustomizingItems:';
    procedure tabBar_didBeginCustomizingItems (tabBar: UITabBar; items: NSArray); message 'tabBar:didBeginCustomizingItems:';
    procedure tabBar_willEndCustomizingItems_changed (tabBar: UITabBar; items: NSArray; changed: boolean); message 'tabBar:willEndCustomizingItems:changed:';
    procedure tabBar_didEndCustomizingItems_changed (tabBar: UITabBar; items: NSArray; changed: boolean); message 'tabBar:didEndCustomizingItems:changed:';
  end;
{$endif}

