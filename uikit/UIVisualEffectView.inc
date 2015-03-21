{ Parsed from UIKit.framework (iPhoneOS8.2) UIVisualEffectView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIVisualEffectPtr = ^UIVisualEffect;
  UIBlurEffectPtr = ^UIBlurEffect;
  UIVibrancyEffectPtr = ^UIVibrancyEffect;
  UIVisualEffectViewPtr = ^UIVisualEffectView;
{$endif}

{$ifdef TYPES}
type
  UIBlurEffectStyle = NSInteger;
  UIBlurEffectStylePtr = ^UIBlurEffectStyle;

const
  UIBlurEffectStyleExtraLight = 0;
  UIBlurEffectStyleLight = 1;
  UIBlurEffectStyleDark = 2;
{$endif}

{$ifdef CLASSES}

type
  UIVisualEffect = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UIBlurEffect = objcclass external (UIVisualEffect)
  public
    class function effectWithStyle (style: UIBlurEffectStyle): UIBlurEffect; message 'effectWithStyle:';
  end;

type
  UIVibrancyEffect = objcclass external (UIVisualEffect)
  public
    class function effectForBlurEffect (blurEffect: UIBlurEffect): UIVibrancyEffect; message 'effectForBlurEffect:';
  end;

type
  UIVisualEffectView = objcclass external (UIView, NSSecureCodingProtocol)
  public
    function contentView: UIView; message 'contentView';
    function effect: UIVisualEffect; message 'effect';
    function initWithEffect (effect_: UIVisualEffect): instancetype; message 'initWithEffect:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

