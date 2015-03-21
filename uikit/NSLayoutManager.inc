{ Parsed from UIKit.framework (iPhoneOS8.2) NSLayoutManager.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  NSLayoutManagerPtr = ^NSLayoutManager;
  NSLayoutManagerDelegateProtocolPtr = ^NSLayoutManagerDelegateProtocol;
  NSTextLayoutOrientationProviderProtocolPtr = ^NSTextLayoutOrientationProviderProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTextLayoutOrientation = NSInteger;
  NSTextLayoutOrientationPtr = ^NSTextLayoutOrientation;

const
  NSTextLayoutOrientationHorizontal = 0;
  NSTextLayoutOrientationVertical = 1;

type
  NSGlyphProperty = NSInteger;
  NSGlyphPropertyPtr = ^NSGlyphProperty;

const
  NSGlyphPropertyNull = 1 shl 0;
  NSGlyphPropertyControlCharacter = 1 shl 1;
  NSGlyphPropertyElastic = 1 shl 2;
  NSGlyphPropertyNonBaseCharacter = 1 shl 3;

type
  NSControlCharacterAction = NSInteger;
  NSControlCharacterActionPtr = ^NSControlCharacterAction;

const
  NSControlCharacterZeroAdvancementAction = 1 shl 0;
  NSControlCharacterWhitespaceAction = 1 shl 1;
  NSControlCharacterHorizontalTabAction = 1 shl 2;
  NSControlCharacterLineBreakAction = 1 shl 3;
  NSControlCharacterParagraphBreakAction = 1 shl 4;
  NSControlCharacterContainerBreakAction = 1 shl 5;
{$endif}

{$ifdef CLASSES}

type
  NSLayoutManager = objcclass external (NSObject, NSCodingProtocol)
  public
    procedure setTextStorage(newValue: NSTextStorage); message 'setTextStorage:';
    function textStorage: NSTextStorage; message 'textStorage';
    function textContainers: NSArray; message 'textContainers';
    procedure addTextContainer (container: NSTextContainer); message 'addTextContainer:';
    procedure insertTextContainer_atIndex (container: NSTextContainer; index: NSUInteger); message 'insertTextContainer:atIndex:';
    procedure removeTextContainerAtIndex (index: NSUInteger); message 'removeTextContainerAtIndex:';
    procedure textContainerChangedGeometry (container: NSTextContainer); message 'textContainerChangedGeometry:';
    procedure setDelegate(newValue: NSLayoutManagerDelegateProtocol); message 'setDelegate:';
    function delegate: NSLayoutManagerDelegateProtocol; message 'delegate';
    procedure setShowsInvisibleCharacters(newValue: boolean); message 'setShowsInvisibleCharacters:';
    function showsInvisibleCharacters: boolean; message 'showsInvisibleCharacters';
    procedure setShowsControlCharacters(newValue: boolean); message 'setShowsControlCharacters:';
    function showsControlCharacters: boolean; message 'showsControlCharacters';
    procedure setHyphenationFactor(newValue: CGFloat); message 'setHyphenationFactor:';
    function hyphenationFactor: CGFloat; message 'hyphenationFactor';
    procedure setUsesFontLeading(newValue: boolean); message 'setUsesFontLeading:';
    function usesFontLeading: boolean; message 'usesFontLeading';
    procedure setAllowsNonContiguousLayout(newValue: boolean); message 'setAllowsNonContiguousLayout:';
    function allowsNonContiguousLayout: boolean; message 'allowsNonContiguousLayout';
    function hasNonContiguousLayout: boolean; message 'hasNonContiguousLayout';
    procedure invalidateGlyphsForCharacterRange_changeInLength_actualCharacterRange (charRange: NSRange; delta: NSInteger; actualCharRange: NSRangePointer); message 'invalidateGlyphsForCharacterRange:changeInLength:actualCharacterRange:';
    procedure invalidateLayoutForCharacterRange_actualCharacterRange (charRange: NSRange; actualCharRange: NSRangePointer); message 'invalidateLayoutForCharacterRange:actualCharacterRange:';
    procedure invalidateDisplayForCharacterRange (charRange: NSRange); message 'invalidateDisplayForCharacterRange:';
    procedure invalidateDisplayForGlyphRange (glyphRange: NSRange); message 'invalidateDisplayForGlyphRange:';
    procedure processEditingForTextStorage_edited_range_changeInLength_invalidatedRange (textStorage_: NSTextStorage; editMask: NSTextStorageEditActions; newCharRange: NSRange; delta: NSInteger; invalidatedCharRange: NSRange); message 'processEditingForTextStorage:edited:range:changeInLength:invalidatedRange:';
    procedure ensureGlyphsForCharacterRange (charRange: NSRange); message 'ensureGlyphsForCharacterRange:';
    procedure ensureGlyphsForGlyphRange (glyphRange: NSRange); message 'ensureGlyphsForGlyphRange:';
    procedure ensureLayoutForCharacterRange (charRange: NSRange); message 'ensureLayoutForCharacterRange:';
    procedure ensureLayoutForGlyphRange (glyphRange: NSRange); message 'ensureLayoutForGlyphRange:';
    procedure ensureLayoutForTextContainer (container: NSTextContainer); message 'ensureLayoutForTextContainer:';
    procedure ensureLayoutForBoundingRect_inTextContainer (bounds: CGRect; container: NSTextContainer); message 'ensureLayoutForBoundingRect:inTextContainer:';
    procedure setGlyphs_properties_characterIndexes_font_forGlyphRange (glyphs: CGGlyphPtr; props: NSGlyphPropertyPtr; charIndexes: NSUIntegerPtr; aFont: UIFont; glyphRange: NSRange); message 'setGlyphs:properties:characterIndexes:font:forGlyphRange:';
    function numberOfGlyphs: NSUInteger; message 'numberOfGlyphs';
    function glyphAtIndex_isValidIndex (glyphIndex: NSUInteger; isValidIndex: pboolean): CGGlyph; message 'glyphAtIndex:isValidIndex:';
    function glyphAtIndex (glyphIndex: NSUInteger): CGGlyph; message 'glyphAtIndex:';
    function isValidGlyphIndex (glyphIndex: NSUInteger): boolean; message 'isValidGlyphIndex:';
    function propertyForGlyphAtIndex (glyphIndex: NSUInteger): NSGlyphProperty; message 'propertyForGlyphAtIndex:';
    function characterIndexForGlyphAtIndex (glyphIndex: NSUInteger): NSUInteger; message 'characterIndexForGlyphAtIndex:';
    function glyphIndexForCharacterAtIndex (charIndex: NSUInteger): NSUInteger; message 'glyphIndexForCharacterAtIndex:';
    function getGlyphsInRange_glyphs_properties_characterIndexes_bidiLevels (glyphRange: NSRange; glyphBuffer: CGGlyphPtr; props: NSGlyphPropertyPtr; charIndexBuffer: NSUIntegerPtr; bidiLevelBuffer: PChar): NSUInteger; message 'getGlyphsInRange:glyphs:properties:characterIndexes:bidiLevels:';
    procedure setTextContainer_forGlyphRange (container: NSTextContainer; glyphRange: NSRange); message 'setTextContainer:forGlyphRange:';
    procedure setLineFragmentRect_forGlyphRange_usedRect (fragmentRect: CGRect; glyphRange: NSRange; usedRect: CGRect); message 'setLineFragmentRect:forGlyphRange:usedRect:';
    procedure setExtraLineFragmentRect_usedRect_textContainer (fragmentRect: CGRect; usedRect: CGRect; container: NSTextContainer); message 'setExtraLineFragmentRect:usedRect:textContainer:';
    procedure setLocation_forStartOfGlyphRange (location: CGPoint; glyphRange: NSRange); message 'setLocation:forStartOfGlyphRange:';
    procedure setNotShownAttribute_forGlyphAtIndex (flag: boolean; glyphIndex: NSUInteger); message 'setNotShownAttribute:forGlyphAtIndex:';
    procedure setDrawsOutsideLineFragment_forGlyphAtIndex (flag: boolean; glyphIndex: NSUInteger); message 'setDrawsOutsideLineFragment:forGlyphAtIndex:';
    procedure setAttachmentSize_forGlyphRange (attachmentSize: CGSize; glyphRange: NSRange); message 'setAttachmentSize:forGlyphRange:';
    procedure getFirstUnlaidCharacterIndex_glyphIndex (charIndex: NSUIntegerPtr; glyphIndex: NSUIntegerPtr); message 'getFirstUnlaidCharacterIndex:glyphIndex:';
    function firstUnlaidCharacterIndex: NSUInteger; message 'firstUnlaidCharacterIndex';
    function firstUnlaidGlyphIndex: NSUInteger; message 'firstUnlaidGlyphIndex';
    function textContainerForGlyphAtIndex_effectiveRange (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): NSTextContainer; message 'textContainerForGlyphAtIndex:effectiveRange:';
    function usedRectForTextContainer (container: NSTextContainer): CGRect; message 'usedRectForTextContainer:';
    function lineFragmentRectForGlyphAtIndex_effectiveRange (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): CGRect; message 'lineFragmentRectForGlyphAtIndex:effectiveRange:';
    function lineFragmentUsedRectForGlyphAtIndex_effectiveRange (glyphIndex: NSUInteger; effectiveGlyphRange: NSRangePointer): CGRect; message 'lineFragmentUsedRectForGlyphAtIndex:effectiveRange:';
    function extraLineFragmentRect: CGRect; message 'extraLineFragmentRect';
    function extraLineFragmentUsedRect: CGRect; message 'extraLineFragmentUsedRect';
    function extraLineFragmentTextContainer: NSTextContainer; message 'extraLineFragmentTextContainer';
    function locationForGlyphAtIndex (glyphIndex: NSUInteger): CGPoint; message 'locationForGlyphAtIndex:';
    function notShownAttributeForGlyphAtIndex (glyphIndex: NSUInteger): boolean; message 'notShownAttributeForGlyphAtIndex:';
    function drawsOutsideLineFragmentForGlyphAtIndex (glyphIndex: NSUInteger): boolean; message 'drawsOutsideLineFragmentForGlyphAtIndex:';
    function attachmentSizeForGlyphAtIndex (glyphIndex: NSUInteger): CGSize; message 'attachmentSizeForGlyphAtIndex:';
    function truncatedGlyphRangeInLineFragmentForGlyphAtIndex (glyphIndex: NSUInteger): NSRange; message 'truncatedGlyphRangeInLineFragmentForGlyphAtIndex:';
    function glyphRangeForCharacterRange_actualCharacterRange (charRange: NSRange; actualCharRange: NSRangePointer): NSRange; message 'glyphRangeForCharacterRange:actualCharacterRange:';
    function characterRangeForGlyphRange_actualGlyphRange (glyphRange: NSRange; actualGlyphRange: NSRangePointer): NSRange; message 'characterRangeForGlyphRange:actualGlyphRange:';
    function glyphRangeForTextContainer (container: NSTextContainer): NSRange; message 'glyphRangeForTextContainer:';
    function rangeOfNominallySpacedGlyphsContainingIndex (glyphIndex: NSUInteger): NSRange; message 'rangeOfNominallySpacedGlyphsContainingIndex:';
    function boundingRectForGlyphRange_inTextContainer (glyphRange: NSRange; container: NSTextContainer): CGRect; message 'boundingRectForGlyphRange:inTextContainer:';
    function glyphRangeForBoundingRect_inTextContainer (bounds: CGRect; container: NSTextContainer): NSRange; message 'glyphRangeForBoundingRect:inTextContainer:';
    function glyphRangeForBoundingRectWithoutAdditionalLayout_inTextContainer (bounds: CGRect; container: NSTextContainer): NSRange; message 'glyphRangeForBoundingRectWithoutAdditionalLayout:inTextContainer:';
    function glyphIndexForPoint_inTextContainer_fractionOfDistanceThroughGlyph (point: CGPoint; container: NSTextContainer; partialFraction: CGFloatPtr): NSUInteger; message 'glyphIndexForPoint:inTextContainer:fractionOfDistanceThroughGlyph:';
    function glyphIndexForPoint_inTextContainer (point: CGPoint; container: NSTextContainer): NSUInteger; message 'glyphIndexForPoint:inTextContainer:';
    function fractionOfDistanceThroughGlyphForPoint_inTextContainer (point: CGPoint; container: NSTextContainer): CGFloat; message 'fractionOfDistanceThroughGlyphForPoint:inTextContainer:';
    function characterIndexForPoint_inTextContainer_fractionOfDistanceBetweenInsertionPoints (point: CGPoint; container: NSTextContainer; partialFraction: CGFloatPtr): NSUInteger; message 'characterIndexForPoint:inTextContainer:fractionOfDistanceBetweenInsertionPoints:';
    function getLineFragmentInsertionPointsForCharacterAtIndex_alternatePositions_inDisplayOrder_positions_characterIndexes (charIndex: NSUInteger; aFlag: boolean; dFlag: boolean; positions: CGFloatPtr; charIndexes: NSUIntegerPtr): NSUInteger; message 'getLineFragmentInsertionPointsForCharacterAtIndex:alternatePositions:inDisplayOrder:positions:characterIndexes:';
    procedure enumerateLineFragmentsForGlyphRange_usingBlock (glyphRange: NSRange; block: OpaqueCBlock); message 'enumerateLineFragmentsForGlyphRange:usingBlock:';
    procedure enumerateEnclosingRectsForGlyphRange_withinSelectedGlyphRange_inTextContainer_usingBlock (glyphRange: NSRange; selectedRange: NSRange; textContainer: NSTextContainer; block: OpaqueCBlock); message 'enumerateEnclosingRectsForGlyphRange:withinSelectedGlyphRange:inTextContainer:usingBlock:';
    procedure drawBackgroundForGlyphRange_atPoint (glyphsToShow: NSRange; origin: CGPoint); message 'drawBackgroundForGlyphRange:atPoint:';
    procedure drawGlyphsForGlyphRange_atPoint (glyphsToShow: NSRange; origin: CGPoint); message 'drawGlyphsForGlyphRange:atPoint:';
    procedure showCGGlyphs_positions_count_font_matrix_attributes_inContext (glyphs: CGGlyphPtr; positions: CGPointPtr; glyphCount: NSUInteger; font: UIFont; textMatrix: CGAffineTransform; attributes: NSDictionary; graphicsContext: CGContextRef); message 'showCGGlyphs:positions:count:font:matrix:attributes:inContext:';
    procedure fillBackgroundRectArray_count_forCharacterRange_color (rectArray: CGRectPtr; rectCount: NSUInteger; charRange: NSRange; color: UIColor); message 'fillBackgroundRectArray:count:forCharacterRange:color:';
    procedure drawUnderlineForGlyphRange_underlineType_baselineOffset_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; underlineVal: NSUnderlineStyle; baselineOffset: CGFloat; lineRect: CGRect; lineGlyphRange: NSRange; containerOrigin: CGPoint); message 'drawUnderlineForGlyphRange:underlineType:baselineOffset:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';
    procedure underlineGlyphRange_underlineType_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; underlineVal: NSUnderlineStyle; lineRect: CGRect; lineGlyphRange: NSRange; containerOrigin: CGPoint); message 'underlineGlyphRange:underlineType:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';
    procedure drawStrikethroughForGlyphRange_strikethroughType_baselineOffset_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; strikethroughVal: NSUnderlineStyle; baselineOffset: CGFloat; lineRect: CGRect; lineGlyphRange: NSRange; containerOrigin: CGPoint); message 'drawStrikethroughForGlyphRange:strikethroughType:baselineOffset:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';
    procedure strikethroughGlyphRange_strikethroughType_lineFragmentRect_lineFragmentGlyphRange_containerOrigin (glyphRange: NSRange; strikethroughVal: NSUnderlineStyle; lineRect: CGRect; lineGlyphRange: NSRange; containerOrigin: CGPoint); message 'strikethroughGlyphRange:strikethroughType:lineFragmentRect:lineFragmentGlyphRange:containerOrigin:';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSLayoutManagerDelegateProtocol = objcprotocol external name 'NSLayoutManagerDelegate' (NSObjectProtocol)
  optional
    function layoutManager_shouldGenerateGlyphs_properties_characterIndexes_font_forGlyphRange (layoutManager: NSLayoutManager; glyphs: CGGlyphPtr; props: NSGlyphPropertyPtr; charIndexes: NSUIntegerPtr; aFont: UIFont; glyphRange: NSRange): NSUInteger; message 'layoutManager:shouldGenerateGlyphs:properties:characterIndexes:font:forGlyphRange:'; { available in 7_0 }
    function layoutManager_lineSpacingAfterGlyphAtIndex_withProposedLineFragmentRect (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; rect: CGRect): CGFloat; message 'layoutManager:lineSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:'; { available in 7_0 }
    function layoutManager_paragraphSpacingBeforeGlyphAtIndex_withProposedLineFragmentRect (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; rect: CGRect): CGFloat; message 'layoutManager:paragraphSpacingBeforeGlyphAtIndex:withProposedLineFragmentRect:'; { available in 7_0 }
    function layoutManager_paragraphSpacingAfterGlyphAtIndex_withProposedLineFragmentRect (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; rect: CGRect): CGFloat; message 'layoutManager:paragraphSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:'; { available in 7_0 }
    function layoutManager_shouldUseAction_forControlCharacterAtIndex (layoutManager: NSLayoutManager; action: NSControlCharacterAction; charIndex: NSUInteger): NSControlCharacterAction; message 'layoutManager:shouldUseAction:forControlCharacterAtIndex:'; { available in 7_0 }
    function layoutManager_shouldBreakLineByWordBeforeCharacterAtIndex (layoutManager: NSLayoutManager; charIndex: NSUInteger): boolean; message 'layoutManager:shouldBreakLineByWordBeforeCharacterAtIndex:'; { available in 7_0 }
    function layoutManager_shouldBreakLineByHyphenatingBeforeCharacterAtIndex (layoutManager: NSLayoutManager; charIndex: NSUInteger): boolean; message 'layoutManager:shouldBreakLineByHyphenatingBeforeCharacterAtIndex:'; { available in 7_0 }
    function layoutManager_boundingBoxForControlGlyphAtIndex_forTextContainer_proposedLineFragment_glyphPosition_characterIndex (layoutManager: NSLayoutManager; glyphIndex: NSUInteger; textContainer: NSTextContainer; proposedRect: CGRect; glyphPosition: CGPoint; charIndex: NSUInteger): CGRect; message 'layoutManager:boundingBoxForControlGlyphAtIndex:forTextContainer:proposedLineFragment:glyphPosition:characterIndex:'; { available in 7_0 }
    procedure layoutManagerDidInvalidateLayout (sender: NSLayoutManager); message 'layoutManagerDidInvalidateLayout:'; { available in 7_0 }
    procedure layoutManager_didCompleteLayoutForTextContainer_atEnd (layoutManager: NSLayoutManager; textContainer: NSTextContainer; layoutFinishedFlag: boolean); message 'layoutManager:didCompleteLayoutForTextContainer:atEnd:'; { available in 7_0 }
    procedure layoutManager_textContainer_didChangeGeometryFromSize (layoutManager: NSLayoutManager; textContainer: NSTextContainer; oldSize: CGSize); message 'layoutManager:textContainer:didChangeGeometryFromSize:'; { available in 7_0 }
  end;

type
  NSTextLayoutOrientationProviderProtocol = objcprotocol external name 'NSTextLayoutOrientationProvider'
    procedure setLayoutOrientation(newValue: NSTextLayoutOrientation); message 'setLayoutOrientation:';
    function layoutOrientation: NSTextLayoutOrientation; message 'layoutOrientation';
  end;
{$endif}

