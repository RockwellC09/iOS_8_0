{ Parsed from UIKit.framework (iPhoneOS8.2) UIFontDescriptor.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIFontDescriptorPtr = ^UIFontDescriptor;
{$endif}

{$ifdef TYPES}
type
  UIFontDescriptorSymbolicTraits = cuint32;
  UIFontDescriptorSymbolicTraitsPtr = ^UIFontDescriptorSymbolicTraits;

const
  UIFontDescriptorTraitItalic = 1 shl 0;
  UIFontDescriptorTraitBold = 1 shl 1;
  UIFontDescriptorTraitExpanded = 1 shl 5;
  UIFontDescriptorTraitCondensed = 1 shl 6;
  UIFontDescriptorTraitMonoSpace = 1 shl 10;
  UIFontDescriptorTraitVertical = 1 shl 11;
  UIFontDescriptorTraitUIOptimized = 1 shl 12;
  UIFontDescriptorTraitTightLeading = 1 shl 15;
  UIFontDescriptorTraitLooseLeading = 1 shl 16;
  UIFontDescriptorClassMask = $F0000000;
  UIFontDescriptorClassUnknown = 0 shl 28;
  UIFontDescriptorClassOldStyleSerifs = 1 shl 28;
  UIFontDescriptorClassTransitionalSerifs = 2 shl 28;
  UIFontDescriptorClassModernSerifs = 3 shl 28;
  UIFontDescriptorClassClarendonSerifs = 4 shl 28;
  UIFontDescriptorClassSlabSerifs = 5 shl 28;
  UIFontDescriptorClassFreeformSerifs = 7 shl 28;
  UIFontDescriptorClassSansSerif = 8 shl 28;
  UIFontDescriptorClassOrnamentals = 9 shl 28;
  UIFontDescriptorClassScripts = 10 shl 28;
  UIFontDescriptorClassSymbolic = 12 shl 28;

type
  UIFontDescriptorClass = NSUInteger;
  UIFontDescriptorClassPtr = ^UIFontDescriptorClass;
{$endif}

{$ifdef CLASSES}

type
  UIFontDescriptor = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function postscriptName: NSString; message 'postscriptName';
    function pointSize: CGFloat; message 'pointSize';
    function matrix: CGAffineTransform; message 'matrix';
    function symbolicTraits: UIFontDescriptorSymbolicTraits; message 'symbolicTraits';
    function objectForKey (anAttribute: NSString): id; message 'objectForKey:';
    function fontAttributes: NSDictionary; message 'fontAttributes';
    function matchingFontDescriptorsWithMandatoryKeys (mandatoryKeys: NSSet): NSArray; message 'matchingFontDescriptorsWithMandatoryKeys:';
    class function fontDescriptorWithFontAttributes (attributes: NSDictionary): UIFontDescriptor; message 'fontDescriptorWithFontAttributes:';
    class function fontDescriptorWithName_size (fontName: NSString; size: CGFloat): UIFontDescriptor; message 'fontDescriptorWithName:size:';
    class function fontDescriptorWithName_matrix (fontName: NSString; matrix_: CGAffineTransform): UIFontDescriptor; message 'fontDescriptorWithName:matrix:';
    class function preferredFontDescriptorWithTextStyle (style: NSString): UIFontDescriptor; message 'preferredFontDescriptorWithTextStyle:';
    function initWithFontAttributes (attributes: NSDictionary): instancetype; message 'initWithFontAttributes:';
    function fontDescriptorByAddingAttributes (attributes: NSDictionary): UIFontDescriptor; message 'fontDescriptorByAddingAttributes:';
    function fontDescriptorWithSymbolicTraits (symbolicTraits_: UIFontDescriptorSymbolicTraits): UIFontDescriptor; message 'fontDescriptorWithSymbolicTraits:';
    function fontDescriptorWithSize (newPointSize: CGFloat): UIFontDescriptor; message 'fontDescriptorWithSize:';
    function fontDescriptorWithMatrix (matrix_: CGAffineTransform): UIFontDescriptor; message 'fontDescriptorWithMatrix:';
    function fontDescriptorWithFace (newFace: NSString): UIFontDescriptor; message 'fontDescriptorWithFace:';
    function fontDescriptorWithFamily (newFamily: NSString): UIFontDescriptor; message 'fontDescriptorWithFamily:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIFontDescriptorFamilyAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorNameAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorFaceAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorSizeAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorVisibleNameAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorMatrixAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorCharacterSetAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorCascadeListAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorTraitsAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorFixedAdvanceAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorFeatureSettingsAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontDescriptorTextStyleAttribute: NSString { available in 7_0 }; cvar; external;
  UIFontSymbolicTrait: NSString { available in 7_0 }; cvar; external;
  UIFontWeightTrait: NSString { available in 7_0 }; cvar; external;
  UIFontWidthTrait: NSString { available in 7_0 }; cvar; external;
  UIFontSlantTrait: NSString { available in 7_0 }; cvar; external;
  UIFontWeightUltraLight: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightThin: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightLight: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightRegular: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightMedium: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightSemibold: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightBold: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightHeavy: CGFloat { available in 8_2 }; cvar; external;
  UIFontWeightBlack: CGFloat { available in 8_2 }; cvar; external;
  UIFontFeatureTypeIdentifierKey: NSString { available in 7_0 }; cvar; external;
  UIFontFeatureSelectorIdentifierKey: NSString { available in 7_0 }; cvar; external;
  UIFontTextStyleHeadline: NSString { available in 7_0 }; cvar; external;
  UIFontTextStyleBody: NSString { available in 7_0 }; cvar; external;
  UIFontTextStyleSubheadline: NSString { available in 7_0 }; cvar; external;
  UIFontTextStyleFootnote: NSString { available in 7_0 }; cvar; external;
  UIFontTextStyleCaption1: NSString { available in 7_0 }; cvar; external;
  UIFontTextStyleCaption2: NSString { available in 7_0 }; cvar; external;
{$endif}

