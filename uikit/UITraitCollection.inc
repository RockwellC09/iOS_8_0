{ Parsed from UIKit.framework (iPhoneOS8.2) UITraitCollection.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UITraitCollectionPtr = ^UITraitCollection;
  UITraitEnvironmentProtocolPtr = ^UITraitEnvironmentProtocol;
{$endif}

{$ifdef CLASSES}

type
  UITraitCollection = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function containsTraitsInCollection (trait: UITraitCollection): boolean; message 'containsTraitsInCollection:';
    class function traitCollectionWithTraitsFromCollections (traitCollections: NSArray): UITraitCollection; message 'traitCollectionWithTraitsFromCollections:';
    class function traitCollectionWithUserInterfaceIdiom (idiom: UIUserInterfaceIdiom): UITraitCollection; message 'traitCollectionWithUserInterfaceIdiom:';
    function userInterfaceIdiom: UIUserInterfaceIdiom; message 'userInterfaceIdiom';
    class function traitCollectionWithDisplayScale (scale: CGFloat): UITraitCollection; message 'traitCollectionWithDisplayScale:';
    function displayScale: CGFloat; message 'displayScale';
    class function traitCollectionWithHorizontalSizeClass (horizontalSizeClass: UIUserInterfaceSizeClass): UITraitCollection; message 'traitCollectionWithHorizontalSizeClass:';
    function horizontalSizeClass: UIUserInterfaceSizeClass; message 'horizontalSizeClass';
    class function traitCollectionWithVerticalSizeClass (verticalSizeClass: UIUserInterfaceSizeClass): UITraitCollection; message 'traitCollectionWithVerticalSizeClass:';
    function verticalSizeClass: UIUserInterfaceSizeClass; message 'verticalSizeClass';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITraitEnvironmentProtocol = objcprotocol external name 'UITraitEnvironment' (NSObjectProtocol)
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: UITraitCollection); message 'traitCollectionDidChange:';
  end;
{$endif}

