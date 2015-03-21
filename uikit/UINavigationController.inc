{ Parsed from UIKit.framework (iPhoneOS8.2) UINavigationController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UINavigationControllerPtr = ^UINavigationController;
  UINavigationControllerDelegateProtocolPtr = ^UINavigationControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UINavigationControllerOperation = NSInteger;
  UINavigationControllerOperationPtr = ^UINavigationControllerOperation;

const
  UINavigationControllerOperationNone = 0;
  UINavigationControllerOperationPush = 1;
  UINavigationControllerOperationPop = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UINavigationControllerHideShowBarDuration: CGFloat; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UINavigationController = objcclass external (UIViewController)
  public
    function initWithNavigationBarClass_toolbarClass (navigationBarClass: pobjc_class; toolbarClass: pobjc_class): instancetype; message 'initWithNavigationBarClass:toolbarClass:'; { available in 5_0 }
    function initWithRootViewController (rootViewController: UIViewController): instancetype; message 'initWithRootViewController:';
    procedure pushViewController_animated (viewController: UIViewController; animated: boolean); message 'pushViewController:animated:';
    function popViewControllerAnimated (animated: boolean): UIViewController; message 'popViewControllerAnimated:';
    function popToViewController_animated (viewController: UIViewController; animated: boolean): NSArray; message 'popToViewController:animated:';
    function popToRootViewControllerAnimated (animated: boolean): NSArray; message 'popToRootViewControllerAnimated:';
    function topViewController: UIViewController; message 'topViewController';
    function visibleViewController: UIViewController; message 'visibleViewController';
    procedure setViewControllers(newValue: NSArray); message 'setViewControllers:';
    function viewControllers: NSArray; message 'viewControllers';
    procedure setViewControllers_animated (viewControllers_: NSArray; animated: boolean); message 'setViewControllers:animated:'; { available in 3_0 }
    procedure setNavigationBarHidden(newValue: boolean); message 'setNavigationBarHidden:';
    function isNavigationBarHidden: boolean; message 'isNavigationBarHidden';
    procedure setNavigationBarHidden_animated (hidden: boolean; animated: boolean); message 'setNavigationBarHidden:animated:';
    function navigationBar: UINavigationBar; message 'navigationBar';
    procedure setToolbarHidden(newValue: boolean); message 'setToolbarHidden:';
    function isToolbarHidden: boolean; message 'isToolbarHidden';
    procedure setToolbarHidden_animated (hidden: boolean; animated: boolean); message 'setToolbarHidden:animated:'; { available in 3_0 }
    function toolbar: UIToolbar; message 'toolbar';
    procedure setDelegate(newValue: UINavigationControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UINavigationControllerDelegateProtocol; message 'delegate';
    function interactivePopGestureRecognizer: UIGestureRecognizer; message 'interactivePopGestureRecognizer';
    procedure showViewController_sender (vc: UIViewController; sender: id); message 'showViewController:sender:'; { available in 8_0 }
    procedure setHidesBarsWhenKeyboardAppears(newValue: boolean); message 'setHidesBarsWhenKeyboardAppears:';
    function hidesBarsWhenKeyboardAppears: boolean; message 'hidesBarsWhenKeyboardAppears';
    procedure setHidesBarsOnSwipe(newValue: boolean); message 'setHidesBarsOnSwipe:';
    function hidesBarsOnSwipe: boolean; message 'hidesBarsOnSwipe';
    function barHideOnSwipeGestureRecognizer: UIPanGestureRecognizer; message 'barHideOnSwipeGestureRecognizer';
    procedure setHidesBarsWhenVerticallyCompact(newValue: boolean); message 'setHidesBarsWhenVerticallyCompact:';
    function hidesBarsWhenVerticallyCompact: boolean; message 'hidesBarsWhenVerticallyCompact';
    procedure setHidesBarsOnTap(newValue: boolean); message 'setHidesBarsOnTap:';
    function hidesBarsOnTap: boolean; message 'hidesBarsOnTap';
    function barHideOnTapGestureRecognizer: UITapGestureRecognizer; message 'barHideOnTapGestureRecognizer';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UINavigationControllerDelegateProtocol = objcprotocol external name 'UINavigationControllerDelegate' (NSObjectProtocol)
  optional
    procedure navigationController_willShowViewController_animated (navigationController: UINavigationController; viewController: UIViewController; animated: boolean); message 'navigationController:willShowViewController:animated:';
    procedure navigationController_didShowViewController_animated (navigationController: UINavigationController; viewController: UIViewController; animated: boolean); message 'navigationController:didShowViewController:animated:';
    function navigationControllerSupportedInterfaceOrientations (navigationController: UINavigationController): NSUInteger; message 'navigationControllerSupportedInterfaceOrientations:'; { available in 7_0 }
    function navigationControllerPreferredInterfaceOrientationForPresentation (navigationController: UINavigationController): UIInterfaceOrientation; message 'navigationControllerPreferredInterfaceOrientationForPresentation:'; { available in 7_0 }
    function navigationController_interactionControllerForAnimationController (navigationController: UINavigationController; animationController: UIViewControllerAnimatedTransitioningProtocol): UIViewControllerInteractiveTransitioningProtocol; message 'navigationController:interactionControllerForAnimationController:'; { available in 7_0 }
    function navigationController_animationControllerForOperation_fromViewController_toViewController (navigationController: UINavigationController; operation: UINavigationControllerOperation; fromVC: UIViewController; toVC: UIViewController): UIViewControllerAnimatedTransitioningProtocol; message 'navigationController:animationControllerForOperation:fromViewController:toViewController:'; { available in 7_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UINavigationControllerItem = objccategory external (UIViewController)
    function navigationItem: UINavigationItem; message 'navigationItem';
    procedure setHidesBottomBarWhenPushed(newValue: boolean); message 'setHidesBottomBarWhenPushed:';
    function hidesBottomBarWhenPushed: boolean; message 'hidesBottomBarWhenPushed';
    function navigationController: UINavigationController; message 'navigationController';
  end;

type
  UINavigationControllerContextualToolbarItems = objccategory external (UIViewController)
    procedure setToolbarItems(newValue: NSArray); message 'setToolbarItems:';
    function toolbarItems: NSArray; message 'toolbarItems';
    procedure setToolbarItems_animated (toolbarItems_: NSArray; animated: boolean); message 'setToolbarItems:animated:'; { available in 3_0 }
  end;
{$endif}

