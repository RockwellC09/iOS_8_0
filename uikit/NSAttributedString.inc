{ Parsed from UIKit.framework (iPhoneOS8.2) NSAttributedString.h }
{ Created on Fri Mar 20 2:11:42 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontAttributeName: NSString { available in 6_0 }; cvar; external;
  NSParagraphStyleAttributeName: NSString { available in 6_0 }; cvar; external;
  NSForegroundColorAttributeName: NSString { available in 6_0 }; cvar; external;
  NSBackgroundColorAttributeName: NSString { available in 6_0 }; cvar; external;
  NSLigatureAttributeName: NSString { available in 6_0 }; cvar; external;
  NSKernAttributeName: NSString { available in 6_0 }; cvar; external;
  NSStrikethroughStyleAttributeName: NSString { available in 6_0 }; cvar; external;
  NSUnderlineStyleAttributeName: NSString { available in 6_0 }; cvar; external;
  NSStrokeColorAttributeName: NSString { available in 6_0 }; cvar; external;
  NSStrokeWidthAttributeName: NSString { available in 6_0 }; cvar; external;
  NSShadowAttributeName: NSString { available in 6_0 }; cvar; external;
  NSTextEffectAttributeName: NSString { available in 7_0 }; cvar; external;
  NSAttachmentAttributeName: NSString { available in 7_0 }; cvar; external;
  NSLinkAttributeName: NSString { available in 7_0 }; cvar; external;
  NSBaselineOffsetAttributeName: NSString { available in 7_0 }; cvar; external;
  NSUnderlineColorAttributeName: NSString { available in 7_0 }; cvar; external;
  NSStrikethroughColorAttributeName: NSString { available in 7_0 }; cvar; external;
  NSObliquenessAttributeName: NSString { available in 7_0 }; cvar; external;
  NSExpansionAttributeName: NSString { available in 7_0 }; cvar; external;
  NSWritingDirectionAttributeName: NSString { available in 7_0 }; cvar; external;
  NSVerticalGlyphFormAttributeName: NSString { available in 6_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSUnderlineStyle = NSInteger;
  NSUnderlineStylePtr = ^NSUnderlineStyle;

const
  NSUnderlineStyleNone = $00;
  NSUnderlineStyleSingle = $01;
  NSUnderlineStyleThick = $02 { available in 7_0 };
  NSUnderlineStyleDouble = $09 { available in 7_0 };
  NSUnderlinePatternSolid = $0000 { available in 7_0 };
  NSUnderlinePatternDot = $0100 { available in 7_0 };
  NSUnderlinePatternDash = $0200 { available in 7_0 };
  NSUnderlinePatternDashDot = $0300 { available in 7_0 };
  NSUnderlinePatternDashDotDot = $0400 { available in 7_0 };
  NSUnderlineByWord = $8000 { available in 7_0 };

type
  NSTextWritingDirection = NSInteger;
  NSTextWritingDirectionPtr = ^NSTextWritingDirection;

const
  NSTextWritingDirectionEmbedding = 0 shl 1;
  NSTextWritingDirectionOverride = 1 shl 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextEffectLetterpressStyle: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSMutableAttributedStringKitAdditions = objccategory external (NSMutableAttributedString)
    procedure fixAttributesInRange (range: NSRange); message 'fixAttributesInRange:'; { available in 7_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPlainTextDocumentType: NSString { available in 7_0 }; cvar; external;
  NSRTFTextDocumentType: NSString { available in 7_0 }; cvar; external;
  NSRTFDTextDocumentType: NSString { available in 7_0 }; cvar; external;
  NSHTMLTextDocumentType: NSString { available in 7_0 }; cvar; external;
  NSTextLayoutSectionOrientation: NSString { available in 7_0 }; cvar; external;
  NSTextLayoutSectionRange: NSString { available in 7_0 }; cvar; external;
  NSDocumentTypeDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSCharacterEncodingDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSDefaultAttributesDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSPaperSizeDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSPaperMarginDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSViewSizeDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSViewZoomDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSViewModeDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSReadOnlyDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSBackgroundColorDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSHyphenationFactorDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSDefaultTabIntervalDocumentAttribute: NSString { available in 7_0 }; cvar; external;
  NSTextLayoutSectionsAttribute: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAttributedStringDocumentFormats = objccategory external (NSAttributedString)
    function initWithFileURL_options_documentAttributes_error (url: NSURL; options: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): instancetype; message 'initWithFileURL:options:documentAttributes:error:'; { available in 7_0 }
    function initWithData_options_documentAttributes_error (data: NSData; options: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): instancetype; message 'initWithData:options:documentAttributes:error:'; { available in 7_0 }
    function dataFromRange_documentAttributes_error (range: NSRange; dict: NSDictionary; error: NSErrorPtr): NSData; message 'dataFromRange:documentAttributes:error:'; { available in 7_0 }
    function fileWrapperFromRange_documentAttributes_error (range: NSRange; dict: NSDictionary; error: NSErrorPtr): NSFileWrapper; message 'fileWrapperFromRange:documentAttributes:error:'; { available in 7_0 }
  end;

type
  NSMutableAttributedStringDocumentFormats = objccategory external (NSMutableAttributedString)
    function readFromFileURL_options_documentAttributes_error (url: NSURL; opts: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): boolean; message 'readFromFileURL:options:documentAttributes:error:'; { available in 7_0 }
    function readFromData_options_documentAttributes_error (data: NSData; opts: NSDictionary; dict: NSDictionaryPtr; error: NSErrorPtr): boolean; message 'readFromData:options:documentAttributes:error:'; { available in 7_0 }
  end;
{$endif}

