{ Parsed from UIKit.framework (iPhoneOS8.2) UIPopoverController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPopoverControllerPtr = ^UIPopoverController;
  UIPopoverControllerDelegateProtocolPtr = ^UIPopoverControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIPopoverController = objcclass external (NSObject, UIAppearanceContainerProtocol)
  private
  public
    function initWithContentViewController (viewController: UIViewController): instancetype; message 'initWithContentViewController:';
    procedure setDelegate(newValue: UIPopoverControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIPopoverControllerDelegateProtocol; message 'delegate';
    procedure setContentViewController(newValue: UIViewController); message 'setContentViewController:';
    function contentViewController: UIViewController; message 'contentViewController';
    procedure setContentViewController_animated (viewController: UIViewController; animated: boolean); message 'setContentViewController:animated:';
    procedure setPopoverContentSize(newValue: CGSize); message 'setPopoverContentSize:';
    function popoverContentSize: CGSize; message 'popoverContentSize';
    procedure setPopoverContentSize_animated (size: CGSize; animated: boolean); message 'setPopoverContentSize:animated:';
    function isPopoverVisible: boolean; message 'isPopoverVisible';
    function popoverArrowDirection: UIPopoverArrowDirection; message 'popoverArrowDirection';
    procedure setPassthroughViews(newValue: NSArray); message 'setPassthroughViews:';
    function passthroughViews: NSArray; message 'passthroughViews';
    procedure presentPopoverFromRect_inView_permittedArrowDirections_animated (rect: CGRect; view: UIView; arrowDirections: UIPopoverArrowDirection; animated: boolean); message 'presentPopoverFromRect:inView:permittedArrowDirections:animated:';
    procedure presentPopoverFromBarButtonItem_permittedArrowDirections_animated (item: UIBarButtonItem; arrowDirections: UIPopoverArrowDirection; animated: boolean); message 'presentPopoverFromBarButtonItem:permittedArrowDirections:animated:';
    procedure dismissPopoverAnimated (animated: boolean); message 'dismissPopoverAnimated:';
    procedure setBackgroundColor(newValue: UIColor); message 'setBackgroundColor:';
    function backgroundColor: UIColor; message 'backgroundColor';
    procedure setPopoverLayoutMargins(newValue: UIEdgeInsets); message 'setPopoverLayoutMargins:';
    function popoverLayoutMargins: UIEdgeInsets; message 'popoverLayoutMargins';
    procedure setPopoverBackgroundViewClass(newValue: pobjc_class); message 'setPopoverBackgroundViewClass:';
    function popoverBackgroundViewClass: pobjc_class; message 'popoverBackgroundViewClass';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPopoverControllerDelegateProtocol = objcprotocol external name 'UIPopoverControllerDelegate' (NSObjectProtocol)
  optional
    function popoverControllerShouldDismissPopover (popoverController: UIPopoverController): boolean; message 'popoverControllerShouldDismissPopover:';
    procedure popoverControllerDidDismissPopover (popoverController: UIPopoverController); message 'popoverControllerDidDismissPopover:';
    procedure popoverController_willRepositionPopoverToRect_inView (popoverController: UIPopoverController; rect: CGRectPtr; view: UIViewPtr); message 'popoverController:willRepositionPopoverToRect:inView:'; { available in 7_0 }
  end;
{$endif}

