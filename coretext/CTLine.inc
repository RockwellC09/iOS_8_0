{ Parsed from CoreText.framework (iPhoneOS8.2) CTLine.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTLINE__}

{$ifdef TYPES}
type
  CTLineRef = OpaqueType;
  CTLineBoundsOptions = CFOptionFlags;
  CTLineBoundsOptionsPtr = ^CTLineBoundsOptions;

const
  kCTLineBoundsExcludeTypographicLeading = 1 shl 0;
  kCTLineBoundsExcludeTypographicShifts = 1 shl 1;
  kCTLineBoundsUseHangingPunctuation = 1 shl 2;
  kCTLineBoundsUseGlyphPathBounds = 1 shl 3;
  kCTLineBoundsUseOpticalBounds = 1 shl 4;
  kCTLineBoundsIncludeLanguageExtents = 1 shl 5 { available in 8_0 };

type
  CTLineTruncationType = cuint32;
  CTLineTruncationTypePtr = ^CTLineTruncationType;

const
  kCTLineTruncationStart = 0;
  kCTLineTruncationEnd = 1;
  kCTLineTruncationMiddle = 2;
{$endif}

{$endif}
