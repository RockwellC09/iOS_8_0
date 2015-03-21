{ Parsed from UIKit.framework (iPhoneOS8.2) UIAlertView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIAlertViewPtr = ^UIAlertView;
  UIAlertViewDelegateProtocolPtr = ^UIAlertViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIAlertViewStyle = NSInteger;
  UIAlertViewStylePtr = ^UIAlertViewStyle;

const
  UIAlertViewStyleDefault = 0;
  UIAlertViewStyleSecureTextInput = 1;
  UIAlertViewStylePlainTextInput = 2;
  UIAlertViewStyleLoginAndPasswordInput = 3;
{$endif}

{$ifdef CLASSES}

type
  UIAlertView = objcclass external (UIView)
  public
    function initWithTitle_message_delegate_cancelButtonTitle_otherButtonTitles (title: NSString; message_: NSString; delegate: id; cancelButtonTitle: NSString; otherButtonTitles: NSString): instancetype; message 'initWithTitle:message:delegate:cancelButtonTitle:otherButtonTitles:';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    function addButtonWithTitle (title_: NSString): NSInteger; message 'addButtonWithTitle:';
    function buttonTitleAtIndex (buttonIndex: NSInteger): NSString; message 'buttonTitleAtIndex:';
    function numberOfButtons: NSInteger; message 'numberOfButtons';
    procedure setCancelButtonIndex(newValue: NSInteger); message 'setCancelButtonIndex:';
    function cancelButtonIndex: NSInteger; message 'cancelButtonIndex';
    function firstOtherButtonIndex: NSInteger; message 'firstOtherButtonIndex';
    function isVisible: boolean; message 'isVisible';
    procedure show; message 'show';
    procedure dismissWithClickedButtonIndex_animated (buttonIndex: NSInteger; animated: boolean); message 'dismissWithClickedButtonIndex:animated:';
    procedure setAlertViewStyle(newValue: UIAlertViewStyle); message 'setAlertViewStyle:';
    function alertViewStyle: UIAlertViewStyle; message 'alertViewStyle';
    function textFieldAtIndex (textFieldIndex: NSInteger): UITextField; message 'textFieldAtIndex:'; { available in 5_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAlertViewDelegateProtocol = objcprotocol external name 'UIAlertViewDelegate' (NSObjectProtocol)
  optional
    procedure alertView_clickedButtonAtIndex (alertView: UIAlertView; buttonIndex: NSInteger); message 'alertView:clickedButtonAtIndex:';
    procedure alertViewCancel (alertView: UIAlertView); message 'alertViewCancel:';
    procedure willPresentAlertView (alertView: UIAlertView); message 'willPresentAlertView:';
    procedure didPresentAlertView (alertView: UIAlertView); message 'didPresentAlertView:';
    procedure alertView_willDismissWithButtonIndex (alertView: UIAlertView; buttonIndex: NSInteger); message 'alertView:willDismissWithButtonIndex:';
    procedure alertView_didDismissWithButtonIndex (alertView: UIAlertView; buttonIndex: NSInteger); message 'alertView:didDismissWithButtonIndex:';
    function alertViewShouldEnableFirstOtherButton (alertView: UIAlertView): boolean; message 'alertViewShouldEnableFirstOtherButton:';
  end;
{$endif}

