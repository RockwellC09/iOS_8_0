{ Parsed from UIKit.framework (iPhoneOS8.2) UIActivityIndicatorView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIActivityIndicatorViewPtr = ^UIActivityIndicatorView;
{$endif}

{$ifdef TYPES}
type
  UIActivityIndicatorViewStyle = NSInteger;
  UIActivityIndicatorViewStylePtr = ^UIActivityIndicatorViewStyle;

const
  UIActivityIndicatorViewStyleWhiteLarge = 0;
  UIActivityIndicatorViewStyleWhite = 1;
  UIActivityIndicatorViewStyleGray = 2;
{$endif}

{$ifdef CLASSES}

type
  UIActivityIndicatorView = objcclass external (UIView, NSCodingProtocol)
  private
    _duration: CFTimeInterval;
    _animating: boolean;
    _activityIndicatorViewStyle: UIActivityIndicatorViewStyle;
    _actualActivityIndicatorViewStyle: UIActivityIndicatorViewStyle;
    _hidesWhenStopped: boolean;
  public
    function initWithActivityIndicatorStyle (style: UIActivityIndicatorViewStyle): instancetype; message 'initWithActivityIndicatorStyle:';
    procedure setActivityIndicatorViewStyle(newValue: UIActivityIndicatorViewStyle); message 'setActivityIndicatorViewStyle:';
    function activityIndicatorViewStyle: UIActivityIndicatorViewStyle; message 'activityIndicatorViewStyle';
    procedure setHidesWhenStopped(newValue: boolean); message 'setHidesWhenStopped:';
    function hidesWhenStopped: boolean; message 'hidesWhenStopped';
    procedure setColor(newValue: UIColor); message 'setColor:';
    function color: UIColor; message 'color';
    procedure startAnimating; message 'startAnimating';
    procedure stopAnimating; message 'stopAnimating';
    function isAnimating: boolean; message 'isAnimating';
  end;
{$endif}

