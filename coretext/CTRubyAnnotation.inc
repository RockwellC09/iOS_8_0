{ Parsed from CoreText.framework (iPhoneOS8.2) CTRubyAnnotation.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTRUBYANNOTATION__}

{$ifdef TYPES}
type
  CTRubyAnnotationRef = OpaqueType;
  CTRubyAlignment = cuint8;
  CTRubyAlignmentPtr = ^CTRubyAlignment;

const
  kCTRubyAlignmentInvalid = -1;
  kCTRubyAlignmentAuto = 0;
  kCTRubyAlignmentStart = 1;
  kCTRubyAlignmentCenter = 2;
  kCTRubyAlignmentEnd = 3;
  kCTRubyAlignmentDistributeLetter = 4;
  kCTRubyAlignmentDistributeSpace = 5;
  kCTRubyAlignmentLineEdge = 6;

type
  CTRubyOverhang = cuint8;
  CTRubyOverhangPtr = ^CTRubyOverhang;

const
  kCTRubyOverhangInvalid = -1;
  kCTRubyOverhangAuto = 0;
  kCTRubyOverhangStart = 1;
  kCTRubyOverhangEnd = 2;
  kCTRubyOverhangNone = 3;

type
  CTRubyPosition = cuint8;
  CTRubyPositionPtr = ^CTRubyPosition;

const
  kCTRubyPositionBefore = 0;
  kCTRubyPositionAfter = 1;
  kCTRubyPositionInterCharacter = 2;
  kCTRubyPositionInline = 3;
  kCTRubyPositionCount = 4;
{$endif}

{$endif}
