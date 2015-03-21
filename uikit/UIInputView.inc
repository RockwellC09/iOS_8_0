{ Parsed from UIKit.framework (iPhoneOS8.2) UIInputView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIInputViewPtr = ^UIInputView;
{$endif}

{$ifdef TYPES}
type
  UIInputViewStyle = NSInteger;
  UIInputViewStylePtr = ^UIInputViewStyle;

const
  UIInputViewStyleDefault = 0;
  UIInputViewStyleKeyboard = 1;
{$endif}

{$ifdef CLASSES}

type
  UIInputView = objcclass external (UIView)
  public
    function inputViewStyle: UIInputViewStyle; message 'inputViewStyle';
    function initWithFrame_inputViewStyle (frame: CGRect; inputViewStyle_: UIInputViewStyle): instancetype; message 'initWithFrame:inputViewStyle:';
  end;
{$endif}

