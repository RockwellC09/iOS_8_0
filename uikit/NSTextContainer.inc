{ Parsed from UIKit.framework (iPhoneOS8.2) NSTextContainer.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  NSTextContainerPtr = ^NSTextContainer;
{$endif}

{$ifdef CLASSES}

type
  NSTextContainer = objcclass external (NSObject, NSCodingProtocol, NSTextLayoutOrientationProviderProtocol)
  public
    function initWithSize (size: CGSize): instancetype; message 'initWithSize:';
    procedure setLayoutManager(newValue: NSLayoutManager); message 'setLayoutManager:';
    function layoutManager: NSLayoutManager; message 'layoutManager';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setExclusionPaths(newValue: NSArray); message 'setExclusionPaths:';
    function exclusionPaths: NSArray; message 'exclusionPaths';
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:';
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode';
    procedure setLineFragmentPadding(newValue: CGFloat); message 'setLineFragmentPadding:';
    function lineFragmentPadding: CGFloat; message 'lineFragmentPadding';
    procedure setMaximumNumberOfLines(newValue: NSUInteger); message 'setMaximumNumberOfLines:';
    function maximumNumberOfLines: NSUInteger; message 'maximumNumberOfLines';
    function lineFragmentRectForProposedRect_atIndex_writingDirection_remainingRect (proposedRect: CGRect; characterIndex: NSUInteger; baseWritingDirection: NSWritingDirection; remainingRect: CGRectPtr): CGRect; message 'lineFragmentRectForProposedRect:atIndex:writingDirection:remainingRect:';
    procedure setWidthTracksTextView(newValue: boolean); message 'setWidthTracksTextView:';
    function widthTracksTextView: boolean; message 'widthTracksTextView';
    procedure setHeightTracksTextView(newValue: boolean); message 'setHeightTracksTextView:';
    function heightTracksTextView: boolean; message 'heightTracksTextView';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    procedure setLayoutOrientation(newValue: NSTextLayoutOrientation); message 'setLayoutOrientation:';
    function layoutOrientation: NSTextLayoutOrientation; message 'layoutOrientation';
  end;
{$endif}

