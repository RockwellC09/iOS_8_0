{ Parsed from UIKit.framework (iPhoneOS8.2) UIDocumentInteractionController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIDocumentInteractionControllerPtr = ^UIDocumentInteractionController;
  UIDocumentInteractionControllerDelegateProtocolPtr = ^UIDocumentInteractionControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIDocumentInteractionController = objcclass external (NSObject, UIActionSheetDelegateProtocol)
  public
    class function interactionControllerWithURL (url: NSURL): UIDocumentInteractionController; message 'interactionControllerWithURL:';
    procedure setDelegate(newValue: UIDocumentInteractionControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIDocumentInteractionControllerDelegateProtocol; message 'delegate';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setUTI(newValue: NSString); message 'setUTI:';
    function UTI: NSString; message 'UTI';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function icons: NSArray; message 'icons';
    procedure setAnnotation(newValue: id); message 'setAnnotation:';
    function annotation: id; message 'annotation';
    function presentOptionsMenuFromRect_inView_animated (rect: CGRect; view: UIView; animated: boolean): boolean; message 'presentOptionsMenuFromRect:inView:animated:';
    function presentOptionsMenuFromBarButtonItem_animated (item: UIBarButtonItem; animated: boolean): boolean; message 'presentOptionsMenuFromBarButtonItem:animated:';
    function presentPreviewAnimated (animated: boolean): boolean; message 'presentPreviewAnimated:';
    function presentOpenInMenuFromRect_inView_animated (rect: CGRect; view: UIView; animated: boolean): boolean; message 'presentOpenInMenuFromRect:inView:animated:';
    function presentOpenInMenuFromBarButtonItem_animated (item: UIBarButtonItem; animated: boolean): boolean; message 'presentOpenInMenuFromBarButtonItem:animated:';
    procedure dismissPreviewAnimated (animated: boolean); message 'dismissPreviewAnimated:';
    procedure dismissMenuAnimated (animated: boolean); message 'dismissMenuAnimated:';
    function gestureRecognizers: NSArray; message 'gestureRecognizers';

    { Adopted protocols }
    procedure actionSheet_clickedButtonAtIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:clickedButtonAtIndex:';
    procedure actionSheet_didDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:didDismissWithButtonIndex:';
    procedure actionSheet_willDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:willDismissWithButtonIndex:';
    procedure actionSheetCancel (actionSheet: UIActionSheet); message 'actionSheetCancel:';
    procedure didPresentActionSheet (actionSheet: UIActionSheet); message 'didPresentActionSheet:';
    procedure willPresentActionSheet (actionSheet: UIActionSheet); message 'willPresentActionSheet:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIDocumentInteractionControllerDelegateProtocol = objcprotocol external name 'UIDocumentInteractionControllerDelegate' (NSObjectProtocol)
  optional
    function documentInteractionControllerViewControllerForPreview (controller: UIDocumentInteractionController): UIViewController; message 'documentInteractionControllerViewControllerForPreview:';
    function documentInteractionControllerRectForPreview (controller: UIDocumentInteractionController): CGRect; message 'documentInteractionControllerRectForPreview:';
    function documentInteractionControllerViewForPreview (controller: UIDocumentInteractionController): UIView; message 'documentInteractionControllerViewForPreview:';
    procedure documentInteractionControllerWillBeginPreview (controller: UIDocumentInteractionController); message 'documentInteractionControllerWillBeginPreview:';
    procedure documentInteractionControllerDidEndPreview (controller: UIDocumentInteractionController); message 'documentInteractionControllerDidEndPreview:';
    procedure documentInteractionControllerWillPresentOptionsMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerWillPresentOptionsMenu:';
    procedure documentInteractionControllerDidDismissOptionsMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerDidDismissOptionsMenu:';
    procedure documentInteractionControllerWillPresentOpenInMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerWillPresentOpenInMenu:';
    procedure documentInteractionControllerDidDismissOpenInMenu (controller: UIDocumentInteractionController); message 'documentInteractionControllerDidDismissOpenInMenu:';
    procedure documentInteractionController_willBeginSendingToApplication (controller: UIDocumentInteractionController; application: NSString); message 'documentInteractionController:willBeginSendingToApplication:';
    procedure documentInteractionController_didEndSendingToApplication (controller: UIDocumentInteractionController; application: NSString); message 'documentInteractionController:didEndSendingToApplication:';
    function documentInteractionController_canPerformAction (controller: UIDocumentInteractionController; action: SEL): boolean; message 'documentInteractionController:canPerformAction:'; deprecated 'in 3_2, 6_0';
    function documentInteractionController_performAction (controller: UIDocumentInteractionController; action: SEL): boolean; message 'documentInteractionController:performAction:'; deprecated 'in 3_2, 6_0';
  end;
{$endif}

