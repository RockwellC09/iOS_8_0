{ Parsed from UIKit.framework (iPhoneOS8.2) UIMotionEffect.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIMotionEffectPtr = ^UIMotionEffect;
  UIInterpolatingMotionEffectPtr = ^UIInterpolatingMotionEffect;
  UIMotionEffectGroupPtr = ^UIMotionEffectGroup;
{$endif}

{$ifdef CLASSES}

type
  UIMotionEffect = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function keyPathsAndRelativeValuesForViewerOffset (viewerOffset: UIOffset): NSDictionary; message 'keyPathsAndRelativeValuesForViewerOffset:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
type
  UIInterpolatingMotionEffectType = NSInteger;
  UIInterpolatingMotionEffectTypePtr = ^UIInterpolatingMotionEffectType;

const
  UIInterpolatingMotionEffectTypeTiltAlongHorizontalAxis = 0;
  UIInterpolatingMotionEffectTypeTiltAlongVerticalAxis = 1;
{$endif}

{$ifdef CLASSES}

type
  UIInterpolatingMotionEffect = objcclass external (UIMotionEffect)
  public
    function initWithKeyPath_type (keyPath: NSString; type_: UIInterpolatingMotionEffectType): instancetype; message 'initWithKeyPath:type:';
    function keyPath: NSString; message 'keyPath';
    function type_: UIInterpolatingMotionEffectType; message 'type';
    procedure setMinimumRelativeValue(newValue: id); message 'setMinimumRelativeValue:';
    function minimumRelativeValue: id; message 'minimumRelativeValue';
    procedure setMaximumRelativeValue(newValue: id); message 'setMaximumRelativeValue:';
    function maximumRelativeValue: id; message 'maximumRelativeValue';
  end;

type
  UIMotionEffectGroup = objcclass external (UIMotionEffect)
  public
    procedure setMotionEffects(newValue: NSArray); message 'setMotionEffects:';
    function motionEffects: NSArray; message 'motionEffects';
  end;
{$endif}

