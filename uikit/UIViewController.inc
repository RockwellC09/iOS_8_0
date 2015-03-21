{ Parsed from UIKit.framework (iPhoneOS8.2) UIViewController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIViewControllerPtr = ^UIViewController;
  UIContentContainerProtocolPtr = ^UIContentContainerProtocol;
{$endif}

{$ifdef TYPES}
type
  UIModalTransitionStyle = NSInteger;
  UIModalTransitionStylePtr = ^UIModalTransitionStyle;

const
  UIModalTransitionStyleCoverVertical = 0;
  UIModalTransitionStyleFlipHorizontal = 1;
  UIModalTransitionStyleCrossDissolve = 2;
  UIModalTransitionStylePartialCurl = 3 { available in 3_2 };

type
  UIModalPresentationStyle = NSInteger;
  UIModalPresentationStylePtr = ^UIModalPresentationStyle;

const
  UIModalPresentationFullScreen = 0;
  UIModalPresentationPageSheet = 1 { available in 3_2 };
  UIModalPresentationFormSheet = 2 { available in 3_2 };
  UIModalPresentationCurrentContext = 3 { available in 3_2 };
  UIModalPresentationCustom = 4 { available in 7_0 };
  UIModalPresentationOverFullScreen = 5 { available in 8_0 };
  UIModalPresentationOverCurrentContext = 6 { available in 8_0 };
  UIModalPresentationPopover = 7 { available in 8_0 };
  UIModalPresentationNone = -1 { available in 7_0 };
{$endif}

{$ifdef PROTOCOLS}

type
  UIContentContainerProtocol = objcprotocol external name 'UIContentContainer' (NSObjectProtocol)
    function preferredContentSize: CGSize; message 'preferredContentSize';
    procedure preferredContentSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'preferredContentSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    procedure systemLayoutFittingSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'systemLayoutFittingSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function sizeForChildContentContainer_withParentContainerSize (container: UIContentContainerProtocol; parentSize: CGSize): CGSize; message 'sizeForChildContentContainer:withParentContainerSize:'; { available in 8_0 }
    procedure viewWillTransitionToSize_withTransitionCoordinator (size: CGSize; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'viewWillTransitionToSize:withTransitionCoordinator:'; { available in 8_0 }
    procedure willTransitionToTraitCollection_withTransitionCoordinator (newCollection: UITraitCollection; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'willTransitionToTraitCollection:withTransitionCoordinator:'; { available in 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIViewControllerShowDetailTargetDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIViewController = objcclass external (UIResponder, NSCodingProtocol, UIAppearanceContainerProtocol, UITraitEnvironmentProtocol, UIContentContainerProtocol)
  private
    _view: UIView;
    _tabBarItem: UITabBarItem;
    _navigationItem: UINavigationItem;
    _toolbarItems: NSArray;
    _title: NSString;
    _nibName: NSString;
    _nibBundle: NSBundle;
    _parentViewController: UIViewController;
    _childModalViewController: UIViewController;
    _parentModalViewController: UIViewController;
    _previousRootViewController: UIViewController;
    _modalTransitionView: UIView;
    _modalPreservedFirstResponder: UIResponder;
    _dimmingView: id;
    _dropShadowView: id;
    _currentAction: id;
    _storyboard: UIStoryboard;
    _storyboardSegueTemplates: NSArray;
    _externalObjectsTableForViewLoading: NSDictionary;
    _topLevelObjectsToKeepAliveFromStoryboard: NSArray;
    _savedHeaderSuperview: UIView;
    _savedFooterSuperview: UIView;
    _editButtonItem: UIBarButtonItem;
    _searchDisplayController: UISearchDisplayController;
    _modalTransitionStyle: UIModalTransitionStyle;
    _modalPresentationStyle: UIModalPresentationStyle;
    _lastKnownInterfaceOrientation: UIInterfaceOrientation;
    _popoverController: UIPopoverController;
    _containerViewInSheet: UIView;
    _contentSizeForViewInPopover: CGSize;
    _formSheetSize: CGSize;
    _recordedContentScrollView: UIScrollView;
    _afterAppearance: OpaqueCBlock;
    _explicitAppearanceTransitionLevel: NSInteger;
    _keyCommands: NSArray;
    _overrideTraitCollections: NSMapTable;
    _viewControllerFlags: bitpacked record
      case byte of
        0: (_anonBitField__viewControllerFlags0: cuint);
        1: (
          appearState: 0..((1 shl 2)-1);
          isEditing: 0..1;
          isPerformingModalTransition: 0..1;
          hidesBottomBarWhenPushed: 0..1;
          autoresizesArchivedViewToFullSize: 0..1;
          viewLoadedFromControllerNib: 0..1;
          isRootViewController: 0..1;
          customizesForPresentationInPopover: 0..1;
          isSuspended: 0..1;
          wasApplicationFrameAtSuspend: 0..1;
          wantsFullScreenLayout: 0..1;
          shouldUseFullScreenLayout: 0..1;
          allowsAutorotation: 0..1;
          searchControllerRetained: 0..1;
          oldModalInPopover: 0..1;
          isModalInPopover: 0..1;
          isInWillRotateCallback: 0..1;
          disallowMixedOrientationPresentations: 0..1;
          isFinishingModalTransition: 0..1;
          definesPresentationContext: 0..1;
          providesPresentationContextTransitionStyle: 0..1;
          containmentSupport: 0..1;
          isSettingAppearState: 0..1;
          isInAnimatedVCTransition: 0..1;
          presentationIsChanging: 0..1;
          isBeingPresented_: 0..1;
          containmentIsChanging: 0..1;
          explicitTransitionIsAppearing: 0..1;
          disableAppearanceTransitions: 0..1;
          needsDidMoveCleanup: 0..1;
          suppressesBottomBar: 0..1;
          disableRootPromotion: 0..1;
          interfaceOrientationReentranceGuard: 0..1;
          isExecutingAfterAppearance: 0..1;
          rootResignationNeeded: 0..1;
          shouldSynthesizeSupportedOrientations: 0..1;
          viewConstraintsNeedUpdateOnAppearance: 0..1;
          shouldForceNonAnimatedTransition: 0..1;
          isInCustomTransition: 0..1;
          usesSharedView: 0..1;
          extendedLayoutIncludesOpaqueBars: 0..1;
          automaticallyAdjustInsets: 0..1;
          previousShouldUnderlapUnderStatusBar: 0..1;
          freezeShouldUnderlapUnderStatusBar: 0..1;
          neverResizeRoot: 0..1;
          monitorsSystemLayoutFittingSize: 0..1;
        );
      end;
  public
    function initWithNibName_bundle (nibNameOrNil: NSString; nibBundleOrNil: NSBundle): instancetype; message 'initWithNibName:bundle:';
    procedure setView(newValue: UIView); message 'setView:';
    function view: UIView; message 'view';
    procedure loadView; message 'loadView';
    procedure viewWillUnload; message 'viewWillUnload'; deprecated 'in 5_0,6_0';
    procedure viewDidUnload; message 'viewDidUnload'; deprecated 'in 3_0,6_0';
    procedure viewDidLoad; message 'viewDidLoad';
    function isViewLoaded: boolean; message 'isViewLoaded'; { available in 3_0 }
    function nibName: NSString; message 'nibName';
    function nibBundle: NSBundle; message 'nibBundle';
    function storyboard: UIStoryboard; message 'storyboard';
    procedure performSegueWithIdentifier_sender (identifier: NSString; sender: id); message 'performSegueWithIdentifier:sender:'; { available in 5_0 }
    function shouldPerformSegueWithIdentifier_sender (identifier: NSString; sender: id): boolean; message 'shouldPerformSegueWithIdentifier:sender:'; { available in 6_0 }
    procedure prepareForSegue_sender (segue: UIStoryboardSegue; sender: id); message 'prepareForSegue:sender:'; { available in 5_0 }
    function canPerformUnwindSegueAction_fromViewController_withSender (action: SEL; fromViewController: UIViewController; sender: id): boolean; message 'canPerformUnwindSegueAction:fromViewController:withSender:'; { available in 6_0 }
    function viewControllerForUnwindSegueAction_fromViewController_withSender (action: SEL; fromViewController: UIViewController; sender: id): UIViewController; message 'viewControllerForUnwindSegueAction:fromViewController:withSender:'; { available in 6_0 }
    function segueForUnwindingToViewController_fromViewController_identifier (toViewController: UIViewController; fromViewController: UIViewController; identifier: NSString): UIStoryboardSegue; message 'segueForUnwindingToViewController:fromViewController:identifier:'; { available in 6_0 }
    procedure viewWillAppear (animated: boolean); message 'viewWillAppear:';
    procedure viewDidAppear (animated: boolean); message 'viewDidAppear:';
    procedure viewWillDisappear (animated: boolean); message 'viewWillDisappear:';
    procedure viewDidDisappear (animated: boolean); message 'viewDidDisappear:';
    procedure viewWillLayoutSubviews; message 'viewWillLayoutSubviews'; { available in 5_0 }
    procedure viewDidLayoutSubviews; message 'viewDidLayoutSubviews'; { available in 5_0 }
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure didReceiveMemoryWarning; message 'didReceiveMemoryWarning';
    function parentViewController: UIViewController; message 'parentViewController';
    function modalViewController: UIViewController; message 'modalViewController';
    function presentedViewController: UIViewController; message 'presentedViewController';
    function presentingViewController: UIViewController; message 'presentingViewController';
    procedure setDefinesPresentationContext(newValue: boolean); message 'setDefinesPresentationContext:';
    function definesPresentationContext: boolean; message 'definesPresentationContext';
    procedure setProvidesPresentationContextTransitionStyle(newValue: boolean); message 'setProvidesPresentationContextTransitionStyle:';
    function providesPresentationContextTransitionStyle: boolean; message 'providesPresentationContextTransitionStyle';
    function isBeingPresented: boolean; message 'isBeingPresented'; { available in 5_0 }
    function isBeingDismissed: boolean; message 'isBeingDismissed'; { available in 5_0 }
    function isMovingToParentViewController: boolean; message 'isMovingToParentViewController'; { available in 5_0 }
    function isMovingFromParentViewController: boolean; message 'isMovingFromParentViewController'; { available in 5_0 }
    procedure presentViewController_animated_completion (viewControllerToPresent: UIViewController; flag: boolean; completion: OpaqueCBlock); message 'presentViewController:animated:completion:'; { available in 5_0 }
    procedure dismissViewControllerAnimated_completion (flag: boolean; completion: OpaqueCBlock); message 'dismissViewControllerAnimated:completion:'; { available in 5_0 }
    procedure presentModalViewController_animated (modalViewController_: UIViewController; animated: boolean); message 'presentModalViewController:animated:'; deprecated 'in 2_0, 6_0';
    procedure dismissModalViewControllerAnimated (animated: boolean); message 'dismissModalViewControllerAnimated:'; deprecated 'in 2_0, 6_0';
    procedure setModalTransitionStyle(newValue: UIModalTransitionStyle); message 'setModalTransitionStyle:';
    function modalTransitionStyle: UIModalTransitionStyle; message 'modalTransitionStyle';
    procedure setModalPresentationStyle(newValue: UIModalPresentationStyle); message 'setModalPresentationStyle:';
    function modalPresentationStyle: UIModalPresentationStyle; message 'modalPresentationStyle';
    procedure setModalPresentationCapturesStatusBarAppearance(newValue: boolean); message 'setModalPresentationCapturesStatusBarAppearance:';
    function modalPresentationCapturesStatusBarAppearance: boolean; message 'modalPresentationCapturesStatusBarAppearance';
    function disablesAutomaticKeyboardDismissal: boolean; message 'disablesAutomaticKeyboardDismissal'; { available in 4_3 }
    procedure setWantsFullScreenLayout(newValue: boolean); message 'setWantsFullScreenLayout:';
    function wantsFullScreenLayout: boolean; message 'wantsFullScreenLayout';
    procedure setEdgesForExtendedLayout(newValue: UIRectEdge); message 'setEdgesForExtendedLayout:';
    function edgesForExtendedLayout: UIRectEdge; message 'edgesForExtendedLayout';
    procedure setExtendedLayoutIncludesOpaqueBars(newValue: boolean); message 'setExtendedLayoutIncludesOpaqueBars:';
    function extendedLayoutIncludesOpaqueBars: boolean; message 'extendedLayoutIncludesOpaqueBars';
    procedure setAutomaticallyAdjustsScrollViewInsets(newValue: boolean); message 'setAutomaticallyAdjustsScrollViewInsets:';
    function automaticallyAdjustsScrollViewInsets: boolean; message 'automaticallyAdjustsScrollViewInsets';
    procedure setPreferredContentSize(newValue: CGSize); message 'setPreferredContentSize:';
    function preferredContentSize: CGSize; message 'preferredContentSize';
    function preferredStatusBarStyle: UIStatusBarStyle; message 'preferredStatusBarStyle'; { available in 7_0 }
    function prefersStatusBarHidden: boolean; message 'prefersStatusBarHidden'; { available in 7_0 }
    function preferredStatusBarUpdateAnimation: UIStatusBarAnimation; message 'preferredStatusBarUpdateAnimation'; { available in 7_0 }
    procedure setNeedsStatusBarAppearanceUpdate; message 'setNeedsStatusBarAppearanceUpdate'; { available in 7_0 }
    function targetViewControllerForAction_sender (action: SEL; sender: id): UIViewController; message 'targetViewControllerForAction:sender:'; { available in 8_0 }
    procedure showViewController_sender (vc: UIViewController; sender: id); message 'showViewController:sender:'; { available in 8_0 }
    procedure showDetailViewController_sender (vc: UIViewController; sender: id); message 'showDetailViewController:sender:'; { available in 8_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    procedure preferredContentSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'preferredContentSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function sizeForChildContentContainer_withParentContainerSize (container: UIContentContainerProtocol; parentSize: CGSize): CGSize; message 'sizeForChildContentContainer:withParentContainerSize:'; { available in 8_0 }
    procedure systemLayoutFittingSizeDidChangeForChildContentContainer (container: UIContentContainerProtocol); message 'systemLayoutFittingSizeDidChangeForChildContentContainer:'; { available in 8_0 }
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: UITraitCollection); message 'traitCollectionDidChange:';
    procedure viewWillTransitionToSize_withTransitionCoordinator (size: CGSize; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'viewWillTransitionToSize:withTransitionCoordinator:'; { available in 8_0 }
    procedure willTransitionToTraitCollection_withTransitionCoordinator (newCollection: UITraitCollection; coordinator: UIViewControllerTransitionCoordinatorProtocol); message 'willTransitionToTraitCollection:withTransitionCoordinator:'; { available in 8_0 }
  end;


type
  UIViewControllerRotation = objccategory external (UIViewController)
    class procedure attemptRotationToDeviceOrientation; message 'attemptRotationToDeviceOrientation'; { available in 5_0 }
    function shouldAutorotateToInterfaceOrientation (toInterfaceOrientation: UIInterfaceOrientation): boolean; message 'shouldAutorotateToInterfaceOrientation:'; deprecated 'in 2_0, 6_0';
    function shouldAutorotate: boolean; message 'shouldAutorotate'; { available in 6_0 }
    function supportedInterfaceOrientations: NSUInteger; message 'supportedInterfaceOrientations'; { available in 6_0 }
    function preferredInterfaceOrientationForPresentation: UIInterfaceOrientation; message 'preferredInterfaceOrientationForPresentation'; { available in 6_0 }
    function rotatingHeaderView: UIView; message 'rotatingHeaderView'; deprecated 'in 2_0,8_0, "Header views are animated along with the rest of the view hierarchy"';
    function rotatingFooterView: UIView; message 'rotatingFooterView'; deprecated 'in 2_0,8_0, "Footer views are animated along with the rest of the view hierarchy"';
    function interfaceOrientation: UIInterfaceOrientation; message 'interfaceOrientation';
    procedure willRotateToInterfaceOrientation_duration (toInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willRotateToInterfaceOrientation:duration:'; deprecated 'in 2_0,8_0, "Implement viewWillTransitionToSize:withTransitionCoordinator: instead"';
    procedure didRotateFromInterfaceOrientation (fromInterfaceOrientation: UIInterfaceOrientation); message 'didRotateFromInterfaceOrientation:'; deprecated 'in 2_0,8_0';
    procedure willAnimateRotationToInterfaceOrientation_duration (toInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willAnimateRotationToInterfaceOrientation:duration:'; deprecated 'in 3_0,8_0, "Implement viewWillTransitionToSize:withTransitionCoordinator: instead"';
    procedure willAnimateFirstHalfOfRotationToInterfaceOrientation_duration (toInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willAnimateFirstHalfOfRotationToInterfaceOrientation:duration:'; deprecated 'in 2_0, 5_0';
    procedure didAnimateFirstHalfOfRotationToInterfaceOrientation (toInterfaceOrientation: UIInterfaceOrientation); message 'didAnimateFirstHalfOfRotationToInterfaceOrientation:'; deprecated 'in 2_0, 5_0';
    procedure willAnimateSecondHalfOfRotationFromInterfaceOrientation_duration (fromInterfaceOrientation: UIInterfaceOrientation; duration: NSTimeInterval); message 'willAnimateSecondHalfOfRotationFromInterfaceOrientation:duration:'; deprecated 'in 2_0, 5_0';
  end;

type
  UIViewControllerEditing = objccategory external (UIViewController)
    procedure setEditing(newValue: boolean); message 'setEditing:';
    function isEditing: boolean; message 'isEditing';
    procedure setEditing_animated (editing: boolean; animated: boolean); message 'setEditing:animated:';
    function editButtonItem: UIBarButtonItem; message 'editButtonItem';
  end;

type
  UISearchDisplayControllerSupport = objccategory external (UIViewController)
    function searchDisplayController: UISearchDisplayController; message 'searchDisplayController';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIViewControllerHierarchyInconsistencyException: NSString { available in 5_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIContainerViewControllerProtectedMethods = objccategory external (UIViewController)
    function childViewControllers: NSArray; message 'childViewControllers';
    procedure addChildViewController (childController: UIViewController); message 'addChildViewController:'; { available in 5_0 }
    procedure removeFromParentViewController; message 'removeFromParentViewController'; { available in 5_0 }
    procedure transitionFromViewController_toViewController_duration_options_animations_completion (fromViewController: UIViewController; toViewController: UIViewController; duration: NSTimeInterval; options: UIViewAnimationOptions; animations: OpaqueCBlock; completion: OpaqueCBlock); message 'transitionFromViewController:toViewController:duration:options:animations:completion:'; { available in 5_0 }
    procedure beginAppearanceTransition_animated (isAppearing: boolean; animated: boolean); message 'beginAppearanceTransition:animated:'; { available starting in __MAC_NA,__IPHONE_5_0 }
    procedure endAppearanceTransition; message 'endAppearanceTransition'; { available starting in __MAC_NA,__IPHONE_5_0 }
    function childViewControllerForStatusBarStyle: UIViewController; message 'childViewControllerForStatusBarStyle'; { available in 7_0 }
    function childViewControllerForStatusBarHidden: UIViewController; message 'childViewControllerForStatusBarHidden'; { available in 7_0 }
    procedure setOverrideTraitCollection_forChildViewController (collection: UITraitCollection; childViewController: UIViewController); message 'setOverrideTraitCollection:forChildViewController:'; { available in 8_0 }
    function overrideTraitCollectionForChildViewController (childViewController: UIViewController): UITraitCollection; message 'overrideTraitCollectionForChildViewController:'; { available in 8_0 }
  end;

type
  UIContainerViewControllerCallbacks = objccategory external (UIViewController)
    function automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers: boolean; message 'automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers'; deprecated 'in 5_0,6_0';
    function shouldAutomaticallyForwardRotationMethods: boolean; message 'shouldAutomaticallyForwardRotationMethods'; deprecated 'in 6_0,8_0, "Manually forward viewWillTransitionToSize:withTransitionCoordinator: if necessary"';
    function shouldAutomaticallyForwardAppearanceMethods: boolean; message 'shouldAutomaticallyForwardAppearanceMethods'; { available in 6_0 }
    procedure willMoveToParentViewController (parent: UIViewController); message 'willMoveToParentViewController:'; { available in 5_0 }
    procedure didMoveToParentViewController (parent: UIViewController); message 'didMoveToParentViewController:'; { available in 5_0 }
  end;

type
  UIStateRestoration = objccategory external (UIViewController)
    procedure setRestorationIdentifier(newValue: NSString); message 'setRestorationIdentifier:';
    function restorationIdentifier: NSString; message 'restorationIdentifier';
    procedure setRestorationClass(newValue: UIViewControllerRestorationProtocol); message 'setRestorationClass:';
    function restorationClass: UIViewControllerRestorationProtocol; message 'restorationClass';
    procedure encodeRestorableStateWithCoder (coder: NSCoder); message 'encodeRestorableStateWithCoder:'; { available in 6_0 }
    procedure decodeRestorableStateWithCoder (coder: NSCoder); message 'decodeRestorableStateWithCoder:'; { available in 6_0 }
    procedure applicationFinishedRestoringState; message 'applicationFinishedRestoringState'; { available in 7_0 }
  end;

type
  UIConstraintBasedLayoutCoreMethods = objccategory external (UIViewController)
    procedure updateViewConstraints; message 'updateViewConstraints'; { available in 6_0 }
  end;

type
  UIViewControllerTransitioning = objccategory external (UIViewController)
    procedure setTransitioningDelegate(newValue: UIViewControllerTransitioningDelegateProtocol); message 'setTransitioningDelegate:';
    function transitioningDelegate: UIViewControllerTransitioningDelegateProtocol; message 'transitioningDelegate';
  end;

type
  UILayoutSupport = objccategory external (UIViewController)
    function topLayoutGuide: UILayoutSupportProtocol; message 'topLayoutGuide';
    function bottomLayoutGuide: UILayoutSupportProtocol; message 'bottomLayoutGuide';
  end;

type
  NSExtensionAdditions = objccategory external (UIViewController)
    function extensionContext: NSExtensionContext; message 'extensionContext';
  end;

type
  UIAdaptivePresentations = objccategory external (UIViewController)
    function presentationController: UIPresentationController; message 'presentationController';
    function popoverPresentationController: UIPopoverPresentationController; message 'popoverPresentationController';
  end;
{$endif}

