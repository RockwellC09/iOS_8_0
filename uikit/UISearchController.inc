{ Parsed from UIKit.framework (iPhoneOS8.2) UISearchController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UISearchControllerPtr = ^UISearchController;
  UISearchControllerDelegateProtocolPtr = ^UISearchControllerDelegateProtocol;
  UISearchResultsUpdatingProtocolPtr = ^UISearchResultsUpdatingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UISearchControllerDelegateProtocol = objcprotocol external name 'UISearchControllerDelegate' (NSObjectProtocol)
  optional
    procedure willPresentSearchController (searchController: UISearchController); message 'willPresentSearchController:';
    procedure didPresentSearchController (searchController: UISearchController); message 'didPresentSearchController:';
    procedure willDismissSearchController (searchController: UISearchController); message 'willDismissSearchController:';
    procedure didDismissSearchController (searchController: UISearchController); message 'didDismissSearchController:';
    procedure presentSearchController (searchController: UISearchController); message 'presentSearchController:';
  end;

type
  UISearchResultsUpdatingProtocol = objcprotocol external name 'UISearchResultsUpdating' (NSObjectProtocol)
  required
    procedure updateSearchResultsForSearchController (searchController: UISearchController); message 'updateSearchResultsForSearchController:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UISearchController = objcclass external (UIViewController, UIViewControllerTransitioningDelegateProtocol, UIViewControllerAnimatedTransitioningProtocol)
  public
    function initWithSearchResultsController (searchResultsController: UIViewController): instancetype; message 'initWithSearchResultsController:';
    procedure setSearchResultsUpdater(newValue: UISearchResultsUpdatingProtocol); message 'setSearchResultsUpdater:';
    function searchResultsUpdater: UISearchResultsUpdatingProtocol; message 'searchResultsUpdater';
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    procedure setDelegate(newValue: UISearchControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UISearchControllerDelegateProtocol; message 'delegate';
    procedure setDimsBackgroundDuringPresentation(newValue: boolean); message 'setDimsBackgroundDuringPresentation:';
    function dimsBackgroundDuringPresentation: boolean; message 'dimsBackgroundDuringPresentation';
    procedure setHidesNavigationBarDuringPresentation(newValue: boolean); message 'setHidesNavigationBarDuringPresentation:';
    function hidesNavigationBarDuringPresentation: boolean; message 'hidesNavigationBarDuringPresentation';
    function searchResultsController: UIViewController; message 'searchResultsController';
    function searchBar: UISearchBar; message 'searchBar';

    { Adopted protocols }
    procedure animateTransition (transitionContext: UIViewControllerContextTransitioningProtocol); message 'animateTransition:';
    function animationControllerForDismissedController (dismissed: UIViewController): UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForDismissedController:';
    function animationControllerForPresentedController_presentingController_sourceController (presented: UIViewController; presenting: UIViewController; source: UIViewController): UIViewControllerAnimatedTransitioningProtocol; message 'animationControllerForPresentedController:presentingController:sourceController:';
    procedure animationEnded (transitionCompleted: boolean); message 'animationEnded:';
    function interactionControllerForDismissal (animator: UIViewControllerAnimatedTransitioningProtocol): UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForDismissal:';
    function interactionControllerForPresentation (animator: UIViewControllerAnimatedTransitioningProtocol): UIViewControllerInteractiveTransitioningProtocol; message 'interactionControllerForPresentation:';
    function presentationControllerForPresentedViewController_presentingViewController_sourceViewController (presented: UIViewController; presenting: UIViewController; source: UIViewController): UIPresentationController; message 'presentationControllerForPresentedViewController:presentingViewController:sourceViewController:'; { available in 8_0 }
    function transitionDuration (transitionContext: UIViewControllerContextTransitioningProtocol): NSTimeInterval; message 'transitionDuration:';
  end;
{$endif}

