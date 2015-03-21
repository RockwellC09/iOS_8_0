{ Parsed from CoreText.framework (iPhoneOS8.2) CTParagraphStyle.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTPARAGRAPHSTYLE__}

{$ifdef TYPES}
type
  CTParagraphStyleRef = OpaqueType;
  CTTextAlignment = cuint8;
  CTTextAlignmentPtr = ^CTTextAlignment;

const
  kCTTextAlignmentLeft = 0;
  kCTTextAlignmentRight = 1;
  kCTTextAlignmentCenter = 2;
  kCTTextAlignmentJustified = 3;
  kCTTextAlignmentNatural = 4;
  kCTLeftTextAlignment = kCTTextAlignmentLeft;
  kCTRightTextAlignment = kCTTextAlignmentRight;
  kCTCenterTextAlignment = kCTTextAlignmentCenter;
  kCTJustifiedTextAlignment = kCTTextAlignmentJustified;
  kCTNaturalTextAlignment = kCTTextAlignmentNatural;

type
  CTLineBreakMode = cuint8;
  CTLineBreakModePtr = ^CTLineBreakMode;

const
  kCTLineBreakByWordWrapping = 0;
  kCTLineBreakByCharWrapping = 1;
  kCTLineBreakByClipping = 2;
  kCTLineBreakByTruncatingHead = 3;
  kCTLineBreakByTruncatingTail = 4;
  kCTLineBreakByTruncatingMiddle = 5;

type
  CTWritingDirection = cint8;
  CTWritingDirectionPtr = ^CTWritingDirection;

const
  kCTWritingDirectionNatural = -1;
  kCTWritingDirectionLeftToRight = 0;
  kCTWritingDirectionRightToLeft = 1;

type
  CTParagraphStyleSpecifier = cuint32;
  CTParagraphStyleSpecifierPtr = ^CTParagraphStyleSpecifier;

const
  kCTParagraphStyleSpecifierAlignment = 0;
  kCTParagraphStyleSpecifierFirstLineHeadIndent = 1;
  kCTParagraphStyleSpecifierHeadIndent = 2;
  kCTParagraphStyleSpecifierTailIndent = 3;
  kCTParagraphStyleSpecifierTabStops = 4;
  kCTParagraphStyleSpecifierDefaultTabInterval = 5;
  kCTParagraphStyleSpecifierLineBreakMode = 6;
  kCTParagraphStyleSpecifierLineHeightMultiple = 7;
  kCTParagraphStyleSpecifierMaximumLineHeight = 8;
  kCTParagraphStyleSpecifierMinimumLineHeight = 9;
  kCTParagraphStyleSpecifierLineSpacing = 10;
  kCTParagraphStyleSpecifierParagraphSpacing = 11;
  kCTParagraphStyleSpecifierParagraphSpacingBefore = 12;
  kCTParagraphStyleSpecifierBaseWritingDirection = 13;
  kCTParagraphStyleSpecifierMaximumLineSpacing = 14;
  kCTParagraphStyleSpecifierMinimumLineSpacing = 15;
  kCTParagraphStyleSpecifierLineSpacingAdjustment = 16;
  kCTParagraphStyleSpecifierLineBoundsOptions = 17;
  kCTParagraphStyleSpecifierCount = 18;

type
  CTParagraphStyleSetting = record
    spec: CTParagraphStyleSpecifier;
    valueSize: size_t;
    value: pointer;
  end;
type
  CTParagraphStyleSettingPtr = ^CTParagraphStyleSetting;
{$endif}

{$endif}
