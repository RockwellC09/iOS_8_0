{ Parsed from UIKit.framework (iPhoneOS8.2) UIActionSheet.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIActionSheetPtr = ^UIActionSheet;
  UIActionSheetDelegateProtocolPtr = ^UIActionSheetDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIActionSheetStyle = NSInteger;
  UIActionSheetStylePtr = ^UIActionSheetStyle;

const
  UIActionSheetStyleAutomatic = -1;
  UIActionSheetStyleDefault = UIBarStyleDefault;
  UIActionSheetStyleBlackTranslucent = UIBarStyleBlackTranslucent;
  UIActionSheetStyleBlackOpaque = UIBarStyleBlackOpaque;
{$endif}

{$ifdef CLASSES}

type
  UIActionSheet = objcclass external (UIView)
  public
    function initWithTitle_delegate_cancelButtonTitle_destructiveButtonTitle_otherButtonTitles (title: NSString; delegate: UIActionSheetDelegateProtocol; cancelButtonTitle: NSString; destructiveButtonTitle: NSString; otherButtonTitles: NSString): instancetype; message 'initWithTitle:delegate:cancelButtonTitle:destructiveButtonTitle:otherButtonTitles:';
    procedure setDelegate(newValue: UIActionSheetDelegateProtocol); message 'setDelegate:';
    function delegate: UIActionSheetDelegateProtocol; message 'delegate';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setActionSheetStyle(newValue: UIActionSheetStyle); message 'setActionSheetStyle:';
    function actionSheetStyle: UIActionSheetStyle; message 'actionSheetStyle';
    function addButtonWithTitle (title_: NSString): NSInteger; message 'addButtonWithTitle:';
    function buttonTitleAtIndex (buttonIndex: NSInteger): NSString; message 'buttonTitleAtIndex:';
    function numberOfButtons: NSInteger; message 'numberOfButtons';
    procedure setCancelButtonIndex(newValue: NSInteger); message 'setCancelButtonIndex:';
    function cancelButtonIndex: NSInteger; message 'cancelButtonIndex';
    procedure setDestructiveButtonIndex(newValue: NSInteger); message 'setDestructiveButtonIndex:';
    function destructiveButtonIndex: NSInteger; message 'destructiveButtonIndex';
    function firstOtherButtonIndex: NSInteger; message 'firstOtherButtonIndex';
    function isVisible: boolean; message 'isVisible';
    procedure showFromToolbar (view: UIToolbar); message 'showFromToolbar:';
    procedure showFromTabBar (view: UITabBar); message 'showFromTabBar:';
    procedure showFromBarButtonItem_animated (item: UIBarButtonItem; animated: boolean); message 'showFromBarButtonItem:animated:'; { available in 3_2 }
    procedure showFromRect_inView_animated (rect: CGRect; view: UIView; animated: boolean); message 'showFromRect:inView:animated:'; { available in 3_2 }
    procedure showInView (view: UIView); message 'showInView:';
    procedure dismissWithClickedButtonIndex_animated (buttonIndex: NSInteger; animated: boolean); message 'dismissWithClickedButtonIndex:animated:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIActionSheetDelegateProtocol = objcprotocol external name 'UIActionSheetDelegate' (NSObjectProtocol)
  optional
    procedure actionSheet_clickedButtonAtIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:clickedButtonAtIndex:';
    procedure actionSheetCancel (actionSheet: UIActionSheet); message 'actionSheetCancel:';
    procedure willPresentActionSheet (actionSheet: UIActionSheet); message 'willPresentActionSheet:';
    procedure didPresentActionSheet (actionSheet: UIActionSheet); message 'didPresentActionSheet:';
    procedure actionSheet_willDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:willDismissWithButtonIndex:';
    procedure actionSheet_didDismissWithButtonIndex (actionSheet: UIActionSheet; buttonIndex: NSInteger); message 'actionSheet:didDismissWithButtonIndex:';
  end;
{$endif}

