{ Parsed from UIKit.framework (iPhoneOS8.2) UITabBarController.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UITabBarControllerPtr = ^UITabBarController;
  UITabBarControllerDelegateProtocolPtr = ^UITabBarControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UITabBarController = objcclass external (UIViewController, UITabBarDelegateProtocol, NSCodingProtocol)
  public
    procedure setViewControllers(newValue: NSArray); message 'setViewControllers:';
    function viewControllers: NSArray; message 'viewControllers';
    procedure setViewControllers_animated (viewControllers_: NSArray; animated: boolean); message 'setViewControllers:animated:';
    procedure setSelectedViewController(newValue: UIViewController); message 'setSelectedViewController:';
    function selectedViewController: UIViewController; message 'selectedViewController';
    procedure setSelectedIndex(newValue: NSUInteger); message 'setSelectedIndex:';
    function selectedIndex: NSUInteger; message 'selectedIndex';
    function moreNavigationController: UINavigationController; message 'moreNavigationController';
    procedure setCustomizableViewControllers(newValue: NSArray); message 'setCustomizableViewControllers:';
    function customizableViewControllers: NSArray; message 'customizableViewControllers';
    function tabBar: UITabBar; message 'tabBar';
    procedure setDelegate(newValue: UITabBarControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UITabBarControllerDelegateProtocol; message 'delegate';

    { Adopted protocols }
    procedure tabBar_didBeginCustomizingItems (tabBar: UITabBar; items: NSArray); message 'tabBar:didBeginCustomizingItems:';
    procedure tabBar_didEndCustomizingItems_changed (tabBar: UITabBar; items: NSArray; changed: boolean); message 'tabBar:didEndCustomizingItems:changed:';
    procedure tabBar_didSelectItem (tabBar: UITabBar; item: UITabBarItem); message 'tabBar:didSelectItem:';
    procedure tabBar_willBeginCustomizingItems (tabBar: UITabBar; items: NSArray); message 'tabBar:willBeginCustomizingItems:';
    procedure tabBar_willEndCustomizingItems_changed (tabBar: UITabBar; items: NSArray; changed: boolean); message 'tabBar:willEndCustomizingItems:changed:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITabBarControllerDelegateProtocol = objcprotocol external name 'UITabBarControllerDelegate' (NSObjectProtocol)
  optional
    function tabBarController_shouldSelectViewController (tabBarController: UITabBarController; viewController: UIViewController): boolean; message 'tabBarController:shouldSelectViewController:'; { available in 3_0 }
    procedure tabBarController_didSelectViewController (tabBarController: UITabBarController; viewController: UIViewController); message 'tabBarController:didSelectViewController:';
    procedure tabBarController_willBeginCustomizingViewControllers (tabBarController: UITabBarController; viewControllers: NSArray); message 'tabBarController:willBeginCustomizingViewControllers:'; { available in 3_0 }
    procedure tabBarController_willEndCustomizingViewControllers_changed (tabBarController: UITabBarController; viewControllers: NSArray; changed: boolean); message 'tabBarController:willEndCustomizingViewControllers:changed:'; { available in 3_0 }
    procedure tabBarController_didEndCustomizingViewControllers_changed (tabBarController: UITabBarController; viewControllers: NSArray; changed: boolean); message 'tabBarController:didEndCustomizingViewControllers:changed:';
    function tabBarControllerSupportedInterfaceOrientations (tabBarController: UITabBarController): NSUInteger; message 'tabBarControllerSupportedInterfaceOrientations:'; { available in 7_0 }
    function tabBarControllerPreferredInterfaceOrientationForPresentation (tabBarController: UITabBarController): UIInterfaceOrientation; message 'tabBarControllerPreferredInterfaceOrientationForPresentation:'; { available in 7_0 }
    function tabBarController_interactionControllerForAnimationController (tabBarController: UITabBarController; animationController: UIViewControllerAnimatedTransitioningProtocol): UIViewControllerInteractiveTransitioningProtocol; message 'tabBarController:interactionControllerForAnimationController:'; { available in 7_0 }
    function tabBarController_animationControllerForTransitionFromViewController_toViewController (tabBarController: UITabBarController; fromVC: UIViewController; toVC: UIViewController): UIViewControllerAnimatedTransitioningProtocol; message 'tabBarController:animationControllerForTransitionFromViewController:toViewController:'; { available in 7_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UITabBarControllerItem = objccategory external (UIViewController)
    procedure setTabBarItem(newValue: UITabBarItem); message 'setTabBarItem:';
    function tabBarItem: UITabBarItem; message 'tabBarItem';
    function tabBarController: UITabBarController; message 'tabBarController';
  end;
{$endif}

