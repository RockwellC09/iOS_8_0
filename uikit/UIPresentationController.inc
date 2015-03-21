{ Parsed from UIKit.framework (iPhoneOS8.2) UIPresentationController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPresentationControllerPtr = ^UIPresentationController;
  UIAdaptivePresentationControllerDelegateProtocolPtr = ^UIAdaptivePresentationControllerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAdaptivePresentationControllerDelegateProtocol = objcprotocol external name 'UIAdaptivePresentationControllerDelegate' (NSObjectProtocol)
  optional
    function adaptivePresentationStyleForPresentationController (controller: UIPresentationController): UIModalPresentationStyle; message 'adaptivePresentationStyleForPresentationController:';
    function presentationController_viewControllerForAdaptivePresentationStyle (controller: UIPresentationController; style: UIModalPresentationStyle): UIViewController; message 'presentationController:viewControllerForAdaptivePresentationStyle:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIPresentationController = objcclass external (NSObject, UIAppearanceContainerProtocol, UITraitEnvironmentProtocol, UIContentContainerProtocol)
  public
    function presentingViewController: UIViewController; message 'presentingViewController';
    function presentedViewController: UIViewController; message 'presentedViewController';
    function presentationStyle: UIModalPresentationStyle; message 'presentationStyle';
    function containerView: UIView; message 'containerView';
    procedure setDelegate(newValue: UIAdaptivePresentationControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIAdaptivePresentationControllerDelegateProtocol; message 'delegate';
    function initWithPresentedViewController_presentingViewController (presentedViewController_: UIViewController; presentingViewController_: UIViewController): instancetype; message 'initWithPresentedViewController:presentingViewController:';
    function adaptivePresentationStyle: UIModalPresentationStyle; message 'adaptivePresentationStyle';
    procedure containerViewWillLayoutSubviews; message 'containerViewWillLayoutSubviews';
    procedure containerViewDidLayoutSubviews; message 'containerViewDidLayoutSubviews';
    function presentedView: UIView; message 'presentedView';
    function frameOfPresentedViewInContainerView: CGRect; message 'frameOfPresentedViewInContainerView';
    function shouldPresentInFullscreen: boolean; message 'shouldPresentInFullscreen';
    function shouldRemovePresentersView: boolean; message 'shouldRemovePresentersView';
    procedure presentationTransitionWillBegin; message 'presentationTransitionWillBegin';
    procedure presentationTransitionDidEnd (completed: boolean); message 'presentationTransitionDidEnd:';
    procedure dismissalTransitionWillBegin; message 'dismissalTransitionWillBegin';
    procedure dismissalTransitionDidEnd (completed: boolean); message 'dismissalTransitionDidEnd:';
    procedure setOverrideTraitCollection(newValue: UITraitCollection); message 'setOverrideTraitCollection:';
    function overrideTraitCollection: UITraitCollection; message 'overrideTraitCollection';

    { Adopted protocols }
    function preferredContentSize: CGSize; message 'preferredContentSize';
    procedure preferredContentSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'preferredContentSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function sizeForChildContentContainer_withParentContainerSize (container: UIContentContainerProtocol; parentSize: CGSize): CGSize; message 'sizeForChildContentContainer:withParentContainerSize:'; { available in 8_0 }
    procedure systemLayoutFittingSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'systemLayoutFittingSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: UITraitCollection); message 'traitCollectionDidChange:';
    procedure viewWillTransitionToSize_withTransitionCoordinator (size: CGSize; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'viewWillTransitionToSize:withTransitionCoordinator:'; { available in 8_0 }
    procedure willTransitionToTraitCollection_withTransitionCoordinator (newCollection: UITraitCollection; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'willTransitionToTraitCollection:withTransitionCoordinator:'; { available in 8_0 }
  end;
{$endif}

