{ Parsed from UIKit.framework (iPhoneOS8.2) UIScreenMode.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIScreenModePtr = ^UIScreenMode;
{$endif}

{$ifdef CLASSES}

type
  UIScreenMode = objcclass external (NSObject)
  private
    _mode: id;
  public
    function size: CGSize; message 'size';
    function pixelAspectRatio: CGFloat; message 'pixelAspectRatio';
  end;
{$endif}

