{ Parsed from UIKit.framework (iPhoneOS8.2) UIViewControllerTransitionCoordinator.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIViewControllerTransitionCoordinatorContextProtocolPtr = ^UIViewControllerTransitionCoordinatorContextProtocol;
  UIViewControllerTransitionCoordinatorProtocolPtr = ^UIViewControllerTransitionCoordinatorProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIViewControllerTransitionCoordinatorContextProtocol = objcprotocol external name 'UIViewControllerTransitionCoordinatorContext' (NSObjectProtocol)
    function isAnimated: boolean; message 'isAnimated';
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    function initiallyInteractive: boolean; message 'initiallyInteractive';
    function isInteractive: boolean; message 'isInteractive';
    function isCancelled: boolean; message 'isCancelled';
    function transitionDuration: NSTimeInterval; message 'transitionDuration';
    function percentComplete: CGFloat; message 'percentComplete';
    function completionVelocity: CGFloat; message 'completionVelocity';
    function completionCurve: UIViewAnimationCurve; message 'completionCurve';
    function viewControllerForKey (key: NSString): UIViewController; message 'viewControllerForKey:';
    function viewForKey (key: NSString): UIView; message 'viewForKey:'; { available in 8_0 }
    function containerView: UIView; message 'containerView';
    function targetTransform: CGAffineTransform; message 'targetTransform'; { available in 8_0 }
  end;

type
  UIViewControllerTransitionCoordinatorProtocol = objcprotocol external name 'UIViewControllerTransitionCoordinator' (UIViewControllerTransitionCoordinatorContextProtocol)
    function animateAlongsideTransition_completion (animation: OpaqueCBlock; completion: OpaqueCBlock): boolean; message 'animateAlongsideTransition:completion:';
    function animateAlongsideTransitionInView_animation_completion (view: UIView; animation: OpaqueCBlock; completion: OpaqueCBlock): boolean; message 'animateAlongsideTransitionInView:animation:completion:';
    procedure notifyWhenInteractionEndsUsingBlock (handler: OpaqueCBlock); message 'notifyWhenInteractionEndsUsingBlock:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIViewController_UIViewControllerTransitionCoordinator = objccategory external name 'UIViewControllerTransitionCoordinator' (UIViewController)
    function transitionCoordinator: UIViewControllerTransitionCoordinatorProtocol; message 'transitionCoordinator'; { available in 7_0 }
  end;
{$endif}

