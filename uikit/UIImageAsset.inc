{ Parsed from UIKit.framework (iPhoneOS8.2) UIImageAsset.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIImageAssetPtr = ^UIImageAsset;
{$endif}

{$ifdef CLASSES}

type
  UIImageAsset = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function imageWithTraitCollection (traitCollection: UITraitCollection): UIImage; message 'imageWithTraitCollection:';
    procedure registerImage_withTraitCollection (image: UIImage; traitCollection: UITraitCollection); message 'registerImage:withTraitCollection:';
    procedure unregisterImageWithTraitCollection (traitCollection: UITraitCollection); message 'unregisterImageWithTraitCollection:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

