{ Parsed from UIKit.framework (iPhoneOS8.2) UIImageView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIImageViewPtr = ^UIImageView;
{$endif}

{$ifdef CLASSES}

type
  UIImageView = objcclass external (UIView)
  private
    _storage: id;
  public
    function initWithImage (image: UIImage): instancetype; message 'initWithImage:';
    function initWithImage_highlightedImage (image: UIImage; highlightedImage: UIImage): instancetype; message 'initWithImage:highlightedImage:'; { available in 3_0 }
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setHighlightedImage(newValue: UIImage); message 'setHighlightedImage:';
    function highlightedImage: UIImage; message 'highlightedImage';
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setAnimationImages(newValue: NSArray); message 'setAnimationImages:';
    function animationImages: NSArray; message 'animationImages';
    procedure setHighlightedAnimationImages(newValue: NSArray); message 'setHighlightedAnimationImages:';
    function highlightedAnimationImages: NSArray; message 'highlightedAnimationImages';
    procedure setAnimationDuration(newValue: NSTimeInterval); message 'setAnimationDuration:';
    function animationDuration: NSTimeInterval; message 'animationDuration';
    procedure setAnimationRepeatCount(newValue: NSInteger); message 'setAnimationRepeatCount:';
    function animationRepeatCount: NSInteger; message 'animationRepeatCount';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure startAnimating; message 'startAnimating';
    procedure stopAnimating; message 'stopAnimating';
    function isAnimating: boolean; message 'isAnimating';
  end;
{$endif}

