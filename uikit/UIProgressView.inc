{ Parsed from UIKit.framework (iPhoneOS8.2) UIProgressView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIProgressViewPtr = ^UIProgressView;
{$endif}

{$ifdef TYPES}
type
  UIProgressViewStyle = NSInteger;
  UIProgressViewStylePtr = ^UIProgressViewStyle;

const
  UIProgressViewStyleDefault = 0;
  UIProgressViewStyleBar = 1;
{$endif}

{$ifdef CLASSES}

type
  UIProgressView = objcclass external (UIView, NSCodingProtocol)
  public
    function initWithProgressViewStyle (style: UIProgressViewStyle): instancetype; message 'initWithProgressViewStyle:';
    procedure setProgressViewStyle(newValue: UIProgressViewStyle); message 'setProgressViewStyle:';
    function progressViewStyle: UIProgressViewStyle; message 'progressViewStyle';
    procedure setProgress(newValue: single); message 'setProgress:';
    function progress: single; message 'progress';
    procedure setProgressTintColor(newValue: UIColor); message 'setProgressTintColor:';
    function progressTintColor: UIColor; message 'progressTintColor';
    procedure setTrackTintColor(newValue: UIColor); message 'setTrackTintColor:';
    function trackTintColor: UIColor; message 'trackTintColor';
    procedure setProgressImage(newValue: UIImage); message 'setProgressImage:';
    function progressImage: UIImage; message 'progressImage';
    procedure setTrackImage(newValue: UIImage); message 'setTrackImage:';
    function trackImage: UIImage; message 'trackImage';
    procedure setProgress_animated (progress_: single; animated: boolean); message 'setProgress:animated:'; { available in 5_0 }
  end;
{$endif}

