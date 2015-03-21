{ Parsed from UIKit.framework (iPhoneOS8.2) UIImage.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIImagePtr = ^UIImage;
{$endif}

{$ifdef TYPES}
type
  UIImageOrientation = NSInteger;
  UIImageOrientationPtr = ^UIImageOrientation;

const
  UIImageOrientationUp = 0;
  UIImageOrientationDown = 1;
  UIImageOrientationLeft = 2;
  UIImageOrientationRight = 3;
  UIImageOrientationUpMirrored = 4;
  UIImageOrientationDownMirrored = 5;
  UIImageOrientationLeftMirrored = 6;
  UIImageOrientationRightMirrored = 7;

type
  UIImageResizingMode = NSInteger;
  UIImageResizingModePtr = ^UIImageResizingMode;

const
  UIImageResizingModeTile = 0;
  UIImageResizingModeStretch = 1;

type
  UIImageRenderingMode = NSInteger;
  UIImageRenderingModePtr = ^UIImageRenderingMode;

const
  UIImageRenderingModeAutomatic = 0;
  UIImageRenderingModeAlwaysOriginal = 1;
  UIImageRenderingModeAlwaysTemplate = 2;
{$endif}

{$ifdef CLASSES}

type
  UIImage = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _imageRef: CFTypeRef;
    _scale: CGFloat;
    _imageFlags: bitpacked record
      case byte of
        0: (_anonBitField__imageFlags0: cuint);
        1: (
          named: 0..1;
          imageOrientation: 0..((1 shl 3)-1);
          cached: 0..1;
          hasPattern: 0..1;
          isCIImage: 0..1;
          renderingMode: 0..((1 shl 2)-1);
          suppressesAccessibilityHairlineThickening: 0..1;
          hasDecompressionInfo: 0..1;
        );
      end;
  public
    class function imageNamed (name: NSString): UIImage; message 'imageNamed:';
    class function imageNamed_inBundle_compatibleWithTraitCollection (name: NSString; bundle: NSBundle; traitCollection: UITraitCollection): UIImage; message 'imageNamed:inBundle:compatibleWithTraitCollection:';
    class function imageWithContentsOfFile (path: NSString): UIImage; message 'imageWithContentsOfFile:';
    class function imageWithData (data: NSData): UIImage; message 'imageWithData:';
    class function imageWithData_scale (data: NSData; scale: CGFloat): UIImage; message 'imageWithData:scale:'; { available in 6_0 }
    class function imageWithCGImage (cgImage: CGImageRef): UIImage; message 'imageWithCGImage:';
    class function imageWithCGImage_scale_orientation (cgImage: CGImageRef; scale: CGFloat; orientation: UIImageOrientation): UIImage; message 'imageWithCGImage:scale:orientation:'; { available in 4_0 }
    class function imageWithCIImage (ciImage_: CIImage): UIImage; message 'imageWithCIImage:'; { available in 5_0 }
    class function imageWithCIImage_scale_orientation (ciImage_: CIImage; scale: CGFloat; orientation: UIImageOrientation): UIImage; message 'imageWithCIImage:scale:orientation:'; { available in 6_0 }
    function initWithContentsOfFile (path: NSString): instancetype; message 'initWithContentsOfFile:';
    function initWithData (data: NSData): instancetype; message 'initWithData:';
    function initWithData_scale (data: NSData; scale: CGFloat): instancetype; message 'initWithData:scale:'; { available in 6_0 }
    function initWithCGImage (cgImage: CGImageRef): instancetype; message 'initWithCGImage:';
    function initWithCGImage_scale_orientation (cgImage: CGImageRef; scale: CGFloat; orientation: UIImageOrientation): instancetype; message 'initWithCGImage:scale:orientation:'; { available in 4_0 }
    function initWithCIImage (ciImage_: CIImage): instancetype; message 'initWithCIImage:'; { available in 5_0 }
    function initWithCIImage_scale_orientation (ciImage_: CIImage; scale: CGFloat; orientation: UIImageOrientation): instancetype; message 'initWithCIImage:scale:orientation:'; { available in 6_0 }
    function size: CGSize; message 'size';
    function CGImage: CGImageRef; message 'CGImage';
    function CGImage_: CGImageRef; message 'CGImage'; { CF_RETURNS_NOT_RETAINED }
    function CIImage : CIImage; message 'CIImage';
    function imageOrientation: UIImageOrientation; message 'imageOrientation';
    function scale: CGFloat; message 'scale';
    class function animatedImageNamed_duration (name: NSString; duration: NSTimeInterval): UIImage; message 'animatedImageNamed:duration:'; { available in 5_0 }
    class function animatedResizableImageNamed_capInsets_duration (name: NSString; capInsets: UIEdgeInsets; duration: NSTimeInterval): UIImage; message 'animatedResizableImageNamed:capInsets:duration:'; { available in 5_0 }
    class function animatedResizableImageNamed_capInsets_resizingMode_duration (name: NSString; capInsets: UIEdgeInsets; resizingMode: UIImageResizingMode; duration: NSTimeInterval): UIImage; message 'animatedResizableImageNamed:capInsets:resizingMode:duration:'; { available in 6_0 }
    class function animatedImageWithImages_duration (images: NSArray; duration: NSTimeInterval): UIImage; message 'animatedImageWithImages:duration:'; { available in 5_0 }
    function images: NSArray; message 'images';
    function duration: NSTimeInterval; message 'duration';
    procedure drawAtPoint (point: CGPoint); message 'drawAtPoint:';
    procedure drawAtPoint_blendMode_alpha (point: CGPoint; blendMode: CGBlendMode; alpha: CGFloat); message 'drawAtPoint:blendMode:alpha:';
    procedure drawInRect (rect: CGRect); message 'drawInRect:';
    procedure drawInRect_blendMode_alpha (rect: CGRect; blendMode: CGBlendMode; alpha: CGFloat); message 'drawInRect:blendMode:alpha:';
    procedure drawAsPatternInRect (rect: CGRect); message 'drawAsPatternInRect:';
    function resizableImageWithCapInsets (capInsets: UIEdgeInsets): UIImage; message 'resizableImageWithCapInsets:'; { available in 5_0 }
    function resizableImageWithCapInsets_resizingMode (capInsets: UIEdgeInsets; resizingMode: UIImageResizingMode): UIImage; message 'resizableImageWithCapInsets:resizingMode:'; { available in 6_0 }
    function capInsets: UIEdgeInsets; message 'capInsets';
    function resizingMode: UIImageResizingMode; message 'resizingMode';
    function imageWithAlignmentRectInsets (alignmentInsets: UIEdgeInsets): UIImage; message 'imageWithAlignmentRectInsets:'; { available in 6_0 }
    function alignmentRectInsets: UIEdgeInsets; message 'alignmentRectInsets';
    function imageWithRenderingMode (renderingMode: UIImageRenderingMode): UIImage; message 'imageWithRenderingMode:'; { available in 7_0 }
    function renderingMode: UIImageRenderingMode; message 'renderingMode';
    function traitCollection: UITraitCollection; message 'traitCollection';
    function imageAsset: UIImageAsset; message 'imageAsset';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  UIImageDeprecated = objccategory external (UIImage)
    function stretchableImageWithLeftCapWidth_topCapHeight (leftCapWidth: NSInteger; topCapHeight: NSInteger): UIImage; message 'stretchableImageWithLeftCapWidth:topCapHeight:';
    function leftCapWidth: NSInteger; message 'leftCapWidth';
    function topCapHeight: NSInteger; message 'topCapHeight';
  end;

type
  UIKitAdditions = objccategory external (CIImage)
    function initWithImage (image: UIImage): instancetype; message 'initWithImage:'; { available in 5_0 }
    function initWithImage_options (image: UIImage; options: NSDictionary): instancetype; message 'initWithImage:options:'; { available in 5_0 }
  end;
{$endif}

{$ifdef FUNCTIONS}
function UIImagePNGRepresentation(image: UIImage): NSData; cdecl; external;
function UIImageJPEGRepresentation(image: UIImage; compressionQuality: CGFloat): NSData; cdecl; external;
{$endif}

