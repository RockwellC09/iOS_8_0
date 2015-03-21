{ Parsed from UIKit.framework (iPhoneOS8.2) UILabel.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UILabelPtr = ^UILabel;
{$endif}

{$ifdef CLASSES}

type
  UILabel = objcclass external (UIView, NSCodingProtocol)
  public
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setTextColor(newValue: UIColor); message 'setTextColor:';
    function textColor: UIColor; message 'textColor';
    procedure setShadowColor(newValue: UIColor); message 'setShadowColor:';
    function shadowColor: UIColor; message 'shadowColor';
    procedure setShadowOffset(newValue: CGSize); message 'setShadowOffset:';
    function shadowOffset: CGSize; message 'shadowOffset';
    procedure setTextAlignment(newValue: NSTextAlignment); message 'setTextAlignment:';
    function textAlignment: NSTextAlignment; message 'textAlignment';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setAttributedText(newValue: NSAttributedString); message 'setAttributedText:';
    function attributedText: NSAttributedString; message 'attributedText';
    procedure setHighlightedTextColor(newValue: UIColor); message 'setHighlightedTextColor:';
    function highlightedTextColor: UIColor; message 'highlightedTextColor';
    procedure setHighlighted(newValue: boolean); message 'setHighlighted:';
    function isHighlighted: boolean; message 'isHighlighted';
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setNumberOfLines(newValue: NSInteger); message 'setNumberOfLines:';
    function numberOfLines: NSInteger; message 'numberOfLines';
    procedure setAdjustsFontSizeToFitWidth(newValue: boolean); message 'setAdjustsFontSizeToFitWidth:';
    function adjustsFontSizeToFitWidth: boolean; message 'adjustsFontSizeToFitWidth';
    procedure setAdjustsLetterSpacingToFitWidth(newValue: boolean); message 'setAdjustsLetterSpacingToFitWidth:';
    function adjustsLetterSpacingToFitWidth: boolean; message 'adjustsLetterSpacingToFitWidth';
    procedure setMinimumFontSize(newValue: CGFloat); message 'setMinimumFontSize:';
    function minimumFontSize: CGFloat; message 'minimumFontSize';
    procedure setBaselineAdjustment(newValue: UIBaselineAdjustment); message 'setBaselineAdjustment:';
    function baselineAdjustment: UIBaselineAdjustment; message 'baselineAdjustment';
    procedure setMinimumScaleFactor(newValue: CGFloat); message 'setMinimumScaleFactor:';
    function minimumScaleFactor: CGFloat; message 'minimumScaleFactor';
    function textRectForBounds_limitedToNumberOfLines (bounds: CGRect; numberOfLines_: NSInteger): CGRect; message 'textRectForBounds:limitedToNumberOfLines:';
    procedure drawTextInRect (rect: CGRect); message 'drawTextInRect:';
    procedure setPreferredMaxLayoutWidth(newValue: CGFloat); message 'setPreferredMaxLayoutWidth:';
    function preferredMaxLayoutWidth: CGFloat; message 'preferredMaxLayoutWidth';
  end;
{$endif}

