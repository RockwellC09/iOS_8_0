{ Parsed from UIKit.framework (iPhoneOS8.2) NSTextAttachment.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  NSTextAttachmentPtr = ^NSTextAttachment;
  NSTextAttachmentContainerProtocolPtr = ^NSTextAttachmentContainerProtocol;
{$endif}

{$ifdef TYPES}
const
  NSAttachmentCharacter = $FFFC { available in 7_0 };
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextAttachmentContainerProtocol = objcprotocol external name 'NSTextAttachmentContainer' (NSObjectProtocol)
    function imageForBounds_textContainer_characterIndex (imageBounds: CGRect; textContainer: NSTextContainer; charIndex: NSUInteger): UIImage; message 'imageForBounds:textContainer:characterIndex:'; { available in 7_0 }
    function attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: NSTextContainer; lineFrag: CGRect; position: CGPoint; charIndex: NSUInteger): CGRect; message 'attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in 7_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSTextAttachment = objcclass external (NSObject, NSTextAttachmentContainerProtocol, NSCodingProtocol)
  public
    function initWithData_ofType (contentData: NSData; uti: NSString): instancetype; message 'initWithData:ofType:';
    procedure setContents(newValue: NSData); message 'setContents:';
    function contents: NSData; message 'contents';
    procedure setFileType(newValue: NSString); message 'setFileType:';
    function fileType: NSString; message 'fileType';
    procedure setFileWrapper(newValue: NSFileWrapper); message 'setFileWrapper:';
    function fileWrapper: NSFileWrapper; message 'fileWrapper';
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';

    { Adopted protocols }
    function attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex (textContainer: NSTextContainer; lineFrag: CGRect; position: CGPoint; charIndex: NSUInteger): CGRect; message 'attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in 7_0 }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function imageForBounds_textContainer_characterIndex (imageBounds: CGRect; textContainer: NSTextContainer; charIndex: NSUInteger): UIImage; message 'imageForBounds:textContainer:characterIndex:'; { available in 7_0 }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;


type
  NSAttributedStringAttachmentConveniences = objccategory external (NSAttributedString)
    class function attributedStringWithAttachment (attachment: NSTextAttachment): NSAttributedString; message 'attributedStringWithAttachment:'; { available in 7_0 }
  end;
{$endif}

