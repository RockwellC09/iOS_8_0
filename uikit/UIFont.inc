{ Parsed from UIKit.framework (iPhoneOS8.2) UIFont.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIFontPtr = ^UIFont;
{$endif}

{$ifdef CLASSES}

type
  UIFont = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function preferredFontForTextStyle (style: NSString): UIFont; message 'preferredFontForTextStyle:'; { available in 7_0 }
    class function fontWithName_size (fontName: NSString; fontSize: CGFloat): UIFont; message 'fontWithName:size:';
    class function familyNames: NSArray; message 'familyNames';
    class function fontNamesForFamilyName (familyName: NSString): NSArray; message 'fontNamesForFamilyName:';
    class function systemFontOfSize (fontSize: CGFloat): UIFont; message 'systemFontOfSize:';
    class function boldSystemFontOfSize (fontSize: CGFloat): UIFont; message 'boldSystemFontOfSize:';
    class function italicSystemFontOfSize (fontSize: CGFloat): UIFont; message 'italicSystemFontOfSize:';
    class function systemFontOfSize_weight (fontSize: CGFloat; weight: CGFloat): UIFont; message 'systemFontOfSize:weight:'; { available in 8_2 }
    function familyName: NSString; message 'familyName';
    function fontName: NSString; message 'fontName';
    function pointSize: CGFloat; message 'pointSize';
    function ascender: CGFloat; message 'ascender';
    function descender: CGFloat; message 'descender';
    function capHeight: CGFloat; message 'capHeight';
    function xHeight: CGFloat; message 'xHeight';
    function lineHeight: CGFloat; message 'lineHeight';
    function leading: CGFloat; message 'leading';
    function fontWithSize (fontSize: CGFloat): UIFont; message 'fontWithSize:';
    class function fontWithDescriptor_size (descriptor: UIFontDescriptor; pointSize_: CGFloat): UIFont; message 'fontWithDescriptor:size:'; { available in 7_0 }
    function fontDescriptor: UIFontDescriptor; message 'fontDescriptor'; { available in 7_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

