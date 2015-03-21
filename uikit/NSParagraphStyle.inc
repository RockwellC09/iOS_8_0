{ Parsed from UIKit.framework (iPhoneOS8.2) NSParagraphStyle.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  NSTextTabPtr = ^NSTextTab;
  NSParagraphStylePtr = ^NSParagraphStyle;
  NSMutableParagraphStylePtr = ^NSMutableParagraphStyle;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTabColumnTerminatorsAttributeName: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSTextTab = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function initWithTextAlignment_location_options (alignment: NSTextAlignment; loc: CGFloat; options: NSDictionary): instancetype; message 'initWithTextAlignment:location:options:';
    class function columnTerminatorsForLocale (aLocale: NSLocale): NSCharacterSet; message 'columnTerminatorsForLocale:';
    function alignment: NSTextAlignment; message 'alignment';
    function location: CGFloat; message 'location';
    function options: NSDictionary; message 'options';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSLineBreakMode = NSInteger;
  NSLineBreakModePtr = ^NSLineBreakMode;

const
  NSLineBreakByWordWrapping = 0;
  NSLineBreakByCharWrapping = 1;
  NSLineBreakByClipping = 2;
  NSLineBreakByTruncatingHead = 3;
  NSLineBreakByTruncatingTail = 4;
  NSLineBreakByTruncatingMiddle = 5;
{$endif}

{$ifdef CLASSES}

type
  NSParagraphStyle = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSCodingProtocol)
  public
    class function defaultParagraphStyle: NSParagraphStyle; message 'defaultParagraphStyle';
    class function defaultWritingDirectionForLanguage (languageName: NSString): NSWritingDirection; message 'defaultWritingDirectionForLanguage:';
    function lineSpacing: CGFloat; message 'lineSpacing';
    function paragraphSpacing: CGFloat; message 'paragraphSpacing';
    function alignment: NSTextAlignment; message 'alignment';
    function headIndent: CGFloat; message 'headIndent';
    function tailIndent: CGFloat; message 'tailIndent';
    function firstLineHeadIndent: CGFloat; message 'firstLineHeadIndent';
    function minimumLineHeight: CGFloat; message 'minimumLineHeight';
    function maximumLineHeight: CGFloat; message 'maximumLineHeight';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    function lineHeightMultiple: CGFloat; message 'lineHeightMultiple';
    function paragraphSpacingBefore: CGFloat; message 'paragraphSpacingBefore';
    function hyphenationFactor: single; message 'hyphenationFactor';
    function tabStops: NSArray; message 'tabStops';
    function defaultTabInterval: CGFloat; message 'defaultTabInterval';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  NSMutableParagraphStyle = objcclass external (NSParagraphStyle)
  public
    procedure setLineSpacing(newValue: CGFloat); message 'setLineSpacing:';
    function lineSpacing: CGFloat; message 'lineSpacing';
    procedure setParagraphSpacing(newValue: CGFloat); message 'setParagraphSpacing:';
    function paragraphSpacing: CGFloat; message 'paragraphSpacing';
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setFirstLineHeadIndent(newValue: CGFloat); message 'setFirstLineHeadIndent:';
    function firstLineHeadIndent: CGFloat; message 'firstLineHeadIndent';
    procedure setHeadIndent(newValue: CGFloat); message 'setHeadIndent:';
    function headIndent: CGFloat; message 'headIndent';
    procedure setTailIndent(newValue: CGFloat); message 'setTailIndent:';
    function tailIndent: CGFloat; message 'tailIndent';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setMinimumLineHeight(newValue: CGFloat); message 'setMinimumLineHeight:';
    function minimumLineHeight: CGFloat; message 'minimumLineHeight';
    procedure setMaximumLineHeight(newValue: CGFloat); message 'setMaximumLineHeight:';
    function maximumLineHeight: CGFloat; message 'maximumLineHeight';
    procedure setBaseWritingDirection(newValue: NSWritingDirection); message 'setBaseWritingDirection:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    procedure setLineHeightMultiple(newValue: CGFloat); message 'setLineHeightMultiple:';
    function lineHeightMultiple: CGFloat; message 'lineHeightMultiple';
    procedure setParagraphSpacingBefore(newValue: CGFloat); message 'setParagraphSpacingBefore:';
    function paragraphSpacingBefore: CGFloat; message 'paragraphSpacingBefore';
    procedure setHyphenationFactor(newValue: single); message 'setHyphenationFactor:';
    function hyphenationFactor: single; message 'hyphenationFactor';
    procedure setTabStops(newValue: NSArray); message 'setTabStops:';
    function tabStops: NSArray; message 'tabStops';
    procedure setDefaultTabInterval(newValue: CGFloat); message 'setDefaultTabInterval:';
    function defaultTabInterval: CGFloat; message 'defaultTabInterval';
  end;
{$endif}

