{ Parsed from UIKit.framework (iPhoneOS8.2) UIInputViewController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIInputViewControllerPtr = ^UIInputViewController;
  UITextDocumentProxyProtocolPtr = ^UITextDocumentProxyProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UITextDocumentProxyProtocol = objcprotocol external name 'UITextDocumentProxy' (UIKeyInputProtocol)
    function documentContextBeforeInput: NSString; message 'documentContextBeforeInput';
    function documentContextAfterInput: NSString; message 'documentContextAfterInput';
    procedure adjustTextPositionByCharacterOffset (offset: NSInteger); message 'adjustTextPositionByCharacterOffset:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIInputViewController = objcclass external (UIViewController, UITextInputDelegateProtocol)
  public
    procedure setInputView(newValue: UIInputView); message 'setInputView:';
    function inputView: UIInputView; message 'inputView';
    function textDocumentProxy: UITextDocumentProxyProtocol; message 'textDocumentProxy';
    procedure setPrimaryLanguage(newValue: NSString); message 'setPrimaryLanguage:';
    function primaryLanguage: NSString; message 'primaryLanguage';
    procedure dismissKeyboard; message 'dismissKeyboard';
    procedure advanceToNextInputMode; message 'advanceToNextInputMode';
    procedure requestSupplementaryLexiconWithCompletion (completionHandler: OpaqueCBlock); message 'requestSupplementaryLexiconWithCompletion:';

    { Adopted protocols }
    procedure selectionDidChange (textInput: UITextInputProtocol); message 'selectionDidChange:';
    procedure selectionWillChange (textInput: UITextInputProtocol); message 'selectionWillChange:';
    procedure textDidChange (textInput: UITextInputProtocol); message 'textDidChange:';
    procedure textWillChange (textInput: UITextInputProtocol); message 'textWillChange:';
  end;
{$endif}

