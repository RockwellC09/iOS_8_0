{ Parsed from UIKit.framework (iPhoneOS8.2) UIButton.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIButtonPtr = ^UIButton;
{$endif}

{$ifdef TYPES}
type
  UIButtonType = NSInteger;
  UIButtonTypePtr = ^UIButtonType;

const
  UIButtonTypeCustom = 0;
  UIButtonTypeSystem = 1 { available in 7_0 };
  UIButtonTypeDetailDisclosure = 2;
  UIButtonTypeInfoLight = 3;
  UIButtonTypeInfoDark = 4;
  UIButtonTypeContactAdd = 5;
  UIButtonTypeRoundedRect = UIButtonTypeSystem;
{$endif}

{$ifdef CLASSES}

type
  UIButton = objcclass external (UIControl, NSCodingProtocol)
  public
    class function buttonWithType (buttonType: UIButtonType): id; message 'buttonWithType:';
    procedure setContentEdgeInsets(newValue: UIEdgeInsets); message 'setContentEdgeInsets:';
    function contentEdgeInsets: UIEdgeInsets; message 'contentEdgeInsets';
    procedure setTitleEdgeInsets(newValue: UIEdgeInsets); message 'setTitleEdgeInsets:';
    function titleEdgeInsets: UIEdgeInsets; message 'titleEdgeInsets';
    procedure setReversesTitleShadowWhenHighlighted(newValue: boolean); message 'setReversesTitleShadowWhenHighlighted:';
    function reversesTitleShadowWhenHighlighted: boolean; message 'reversesTitleShadowWhenHighlighted';
    procedure setImageEdgeInsets(newValue: UIEdgeInsets); message 'setImageEdgeInsets:';
    function imageEdgeInsets: UIEdgeInsets; message 'imageEdgeInsets';
    procedure setAdjustsImageWhenHighlighted(newValue: boolean); message 'setAdjustsImageWhenHighlighted:';
    function adjustsImageWhenHighlighted: boolean; message 'adjustsImageWhenHighlighted';
    procedure setAdjustsImageWhenDisabled(newValue: boolean); message 'setAdjustsImageWhenDisabled:';
    function adjustsImageWhenDisabled: boolean; message 'adjustsImageWhenDisabled';
    procedure setShowsTouchWhenHighlighted(newValue: boolean); message 'setShowsTouchWhenHighlighted:';
    function showsTouchWhenHighlighted: boolean; message 'showsTouchWhenHighlighted';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    function buttonType: UIButtonType; message 'buttonType';
    procedure setTitle_forState (title: NSString; state_: UIControlState); message 'setTitle:forState:';
    procedure setTitleColor_forState (color: UIColor; state_: UIControlState); message 'setTitleColor:forState:';
    procedure setTitleShadowColor_forState (color: UIColor; state_: UIControlState); message 'setTitleShadowColor:forState:';
    procedure setImage_forState (image: UIImage; state_: UIControlState); message 'setImage:forState:';
    procedure setBackgroundImage_forState (image: UIImage; state_: UIControlState); message 'setBackgroundImage:forState:';
    procedure setAttributedTitle_forState (title: NSAttributedString; state_: UIControlState); message 'setAttributedTitle:forState:'; { available in 6_0 }
    function titleForState (state_: UIControlState): NSString; message 'titleForState:';
    function titleColorForState (state_: UIControlState): UIColor; message 'titleColorForState:';
    function titleShadowColorForState (state_: UIControlState): UIColor; message 'titleShadowColorForState:';
    function imageForState (state_: UIControlState): UIImage; message 'imageForState:';
    function backgroundImageForState (state_: UIControlState): UIImage; message 'backgroundImageForState:';
    function attributedTitleForState (state_: UIControlState): NSAttributedString; message 'attributedTitleForState:'; { available in 6_0 }
    function currentTitle: NSString; message 'currentTitle';
    function currentTitleColor: UIColor; message 'currentTitleColor';
    function currentTitleShadowColor: UIColor; message 'currentTitleShadowColor';
    function currentImage: UIImage; message 'currentImage';
    function currentBackgroundImage: UIImage; message 'currentBackgroundImage';
    function currentAttributedTitle: NSAttributedString; message 'currentAttributedTitle';
    function titleLabel: UILabel; message 'titleLabel';
    function imageView: UIImageView; message 'imageView';
    function backgroundRectForBounds (bounds: CGRect): CGRect; message 'backgroundRectForBounds:';
    function contentRectForBounds (bounds: CGRect): CGRect; message 'contentRectForBounds:';
    function titleRectForContentRect (contentRect: CGRect): CGRect; message 'titleRectForContentRect:';
    function imageRectForContentRect (contentRect: CGRect): CGRect; message 'imageRectForContentRect:';
  end;


type
  UIButtonDeprecated = objccategory external (UIButton)
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setTitleShadowOffset(newValue: CGSize); message 'setTitleShadowOffset:';
    function titleShadowOffset: CGSize; message 'titleShadowOffset';
  end;
{$endif}

