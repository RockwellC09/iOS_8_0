{ Parsed from UIKit.framework (iPhoneOS8.2) UIColor.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIColorPtr = ^UIColor;
{$endif}

{$ifdef CLASSES}

type
  UIColor = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
  public
    class function colorWithWhite_alpha (white: CGFloat; alpha: CGFloat): UIColor; message 'colorWithWhite:alpha:';
    class function colorWithHue_saturation_brightness_alpha (hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): UIColor; message 'colorWithHue:saturation:brightness:alpha:';
    class function colorWithRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): UIColor; message 'colorWithRed:green:blue:alpha:';
    class function colorWithCGColor (cgColor: CGColorRef): UIColor; message 'colorWithCGColor:';
    class function colorWithPatternImage (image: UIImage): UIColor; message 'colorWithPatternImage:';
    class function colorWithCIColor (ciColor_: CIColor): UIColor; message 'colorWithCIColor:'; { available in 5_0 }
    function initWithWhite_alpha (white: CGFloat; alpha: CGFloat): UIColor; message 'initWithWhite:alpha:';
    function initWithHue_saturation_brightness_alpha (hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): UIColor; message 'initWithHue:saturation:brightness:alpha:';
    function initWithRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): UIColor; message 'initWithRed:green:blue:alpha:';
    function initWithCGColor (cgColor: CGColorRef): UIColor; message 'initWithCGColor:';
    function initWithPatternImage (image: UIImage): UIColor; message 'initWithPatternImage:';
    function initWithCIColor (ciColor_: CIColor): UIColor; message 'initWithCIColor:'; { available in 5_0 }
    class function blackColor: UIColor; message 'blackColor';
    class function darkGrayColor: UIColor; message 'darkGrayColor';
    class function lightGrayColor: UIColor; message 'lightGrayColor';
    class function whiteColor: UIColor; message 'whiteColor';
    class function grayColor: UIColor; message 'grayColor';
    class function redColor: UIColor; message 'redColor';
    class function greenColor: UIColor; message 'greenColor';
    class function blueColor: UIColor; message 'blueColor';
    class function cyanColor: UIColor; message 'cyanColor';
    class function yellowColor: UIColor; message 'yellowColor';
    class function magentaColor: UIColor; message 'magentaColor';
    class function orangeColor: UIColor; message 'orangeColor';
    class function purpleColor: UIColor; message 'purpleColor';
    class function brownColor: UIColor; message 'brownColor';
    class function clearColor: UIColor; message 'clearColor';
    procedure set_; message 'set';
    procedure setFill; message 'setFill';
    procedure setStroke; message 'setStroke';
    function getWhite_alpha (white: CGFloatPtr; alpha: CGFloatPtr): boolean; message 'getWhite:alpha:'; { available in 5_0 }
    function getHue_saturation_brightness_alpha (hue: CGFloatPtr; saturation: CGFloatPtr; brightness: CGFloatPtr; alpha: CGFloatPtr): boolean; message 'getHue:saturation:brightness:alpha:'; { available in 5_0 }
    function getRed_green_blue_alpha (red: CGFloatPtr; green: CGFloatPtr; blue: CGFloatPtr; alpha: CGFloatPtr): boolean; message 'getRed:green:blue:alpha:'; { available in 5_0 }
    function colorWithAlphaComponent (alpha: CGFloat): UIColor; message 'colorWithAlphaComponent:';
    function CGColor: CGColorRef; message 'CGColor';
    function CGColor_: CGColorRef; message 'CGColor'; { CF_RETURNS_NOT_RETAINED }
    function CIColor: CIColor; message 'CIColor';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  CIColor_UIKitAdditions = objccategory external name 'UIKitAdditions' (CIColor)
    function initWithColor (color: UIColor): instancetype; message 'initWithColor:'; { available in 5_0 }
  end;
{$endif}

