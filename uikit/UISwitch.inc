{ Parsed from UIKit.framework (iPhoneOS8.2) UISwitch.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UISwitchPtr = ^UISwitch;
{$endif}

{$ifdef CLASSES}

type
  UISwitch = objcclass external (UIControl, NSCodingProtocol)
  private
  public
    procedure setOnTintColor(newValue: UIColor); message 'setOnTintColor:';
    function onTintColor: UIColor; message 'onTintColor';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setThumbTintColor(newValue: UIColor); message 'setThumbTintColor:';
    function thumbTintColor: UIColor; message 'thumbTintColor';
    procedure setOnImage(newValue: UIImage); message 'setOnImage:';
    function onImage: UIImage; message 'onImage';
    procedure setOffImage(newValue: UIImage); message 'setOffImage:';
    function offImage: UIImage; message 'offImage';
    procedure setOn(newValue: boolean); message 'setOn:';
    function isOn: boolean; message 'isOn';
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:';
    procedure setOn_animated (on: boolean; animated: boolean); message 'setOn:animated:';
  end;
{$endif}

