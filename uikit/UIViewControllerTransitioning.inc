{ Parsed from UIKit.framework (iPhoneOS8.2) UIViewControllerTransitioning.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPercentDrivenInteractiveTransitionPtr = ^UIPercentDrivenInteractiveTransition;
  UIViewControllerContextTransitioningProtocolPtr = ^UIViewControllerContextTransitioningProtocol;
  UIViewControllerAnimatedTransitioningProtocolPtr = ^UIViewControllerAnimatedTransitioningProtocol;
  UIViewControllerInteractiveTransitioningProtocolPtr = ^UIViewControllerInteractiveTransitioningProtocol;
  UIViewControllerTransitioningDelegateProtocolPtr = ^UIViewControllerTransitioningDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITransitionContextFromViewControllerKey: NSString { available in 7_0 }; cvar; external;
  UITransitionContextToViewControllerKey: NSString { available in 7_0 }; cvar; external;
  UITransitionContextFromViewKey: NSString { available in 8_0 }; cvar; external;
  UITransitionContextToViewKey: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  UIViewControllerContextTransitioningProtocol = objcprotocol external name 'UIViewControllerContextTransitioning' (NSObjectProtocol)
    function containerView: UIView; message 'containerView';
    function isAnimated: boolean; message 'isAnimated';
    function isInteractive: boolean; message 'isInteractive';
    function transitionWasCancelled: boolean; message 'transitionWasCancelled';
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    procedure updateInteractiveTransition (percentComplete: CGFloat); message 'updateInteractiveTransition:';
    procedure finishInteractiveTransition; message 'finishInteractiveTransition';
    procedure cancelInteractiveTransition; message 'cancelInteractiveTransition';
    procedure completeTransition (didComplete: boolean); message 'completeTransition:';
    function viewControllerForKey (key: NSString): UIViewController; message 'viewControllerForKey:';
    function viewForKey (key: NSString): UIView; message 'viewForKey:'; { available in 8_0 }
    function targetTransform: CGAffineTransform; message 'targetTransform'; { available in 8_0 }
    function initialFrameForViewController (vc: UIViewController): CGRect; message 'initialFrameForViewController:';
    function finalFrameForViewController (vc: UIViewController): CGRect; message 'finalFrameForViewController:';
  end;

type
  UIViewControllerAnimatedTransitioningProtocol = objcprotocol external name 'UIViewControllerAnimatedTransitioning' (NSObjectProtocol)
    function transitionDuration (transitionContext: UIViewControllerContextTransitioningProtocol): NSTimeInterval; message 'transitionDuration:';
    procedure animateTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'animateTransition:';
  optional
    procedure animationEnded (transitionCompleted: boolean); message 'animationEnded:';
  end;

type
  UIViewControllerInteractiveTransitioningProtocol = objcprotocol external name 'UIViewControllerInteractiveTransitioning' (NSObjectProtocol)
    procedure startInteractiveTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'startInteractiveTransition:';
  optional
    function completionSpeed: CGFloat; message 'completionSpeed';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
  end;

type
  UIViewControllerTransitioningDelegateProtocol = objcprotocol external name 'UIViewControllerTransitioningDelegate' (NSObjectProtocol)
  optional
    function animationControllerForPresentedController_presentingController_sourceController (presented: UIViewController; presenting: UIViewController; source: UIViewController): UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForPresentedController:presentingController:sourceController:';
    function animationControllerForDismissedController (dismissed: UIViewController): UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForDismissedController:';
    function interactionControllerForPresentation (animator: UIViewControllerAnimatedTransitioningProtocol): UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForPresentation:';
    function interactionControllerForDismissal (animator: UIViewControllerAnimatedTransitioningProtocol): UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForDismissal:';
    function presentationControllerForPresentedViewController_presentingViewController_sourceViewController (presented: UIViewController; presenting: UIViewController; source: UIViewController): UIPresentationController; message 'presentationControllerForPresentedViewController:presentingViewController:sourceViewController:'; { available in 8_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPercentDrivenInteractiveTransition = objcclass external (NSObject, UIViewControllerInteractiveTransitioningProtocol)
  public
    function duration: CGFloat; message 'duration';
    function percentComplete: CGFloat; message 'percentComplete';
    procedure setCompletionSpeed(newValue: CGFloat); message 'setCompletionSpeed:';
    function completionSpeed: CGFloat; message 'completionSpeed';
    procedure setCompletionCurve(newValue: UIViewAnimationCurve); message 'setCompletionCurve:';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
    procedure updateInteractiveTransition (percentComplete_: CGFloat); message 'updateInteractiveTransition:';
    procedure cancelInteractiveTransition; message 'cancelInteractiveTransition';
    procedure finishInteractiveTransition; message 'finishInteractiveTransition';

    { Adopted protocols }
    procedure startInteractiveTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'startInteractiveTransition:';
  end;
{$endif}

