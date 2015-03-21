{ Parsed from UIKit.framework (iPhoneOS8.2) NSText.h }
{ Created on Fri Mar 20 2:11:41 2015 }

{$ifdef TYPES}
type
  NSTextAlignment = NSInteger;
  NSTextAlignmentPtr = ^NSTextAlignment;

const
  NSTextAlignmentLeft = 0;
  {$if defined(TARGET_OS_IPHONE)}
  NSTextAlignmentCenter = 1;
  NSTextAlignmentRight = 2;
  {$else}
  NSTextAlignmentRight = 1;
  NSTextAlignmentCenter = 2;
  {$endif}
  NSTextAlignmentJustified = 3;
  NSTextAlignmentNatural = 4;
{$endif}

{$ifdef FUNCTIONS}
function NSTextAlignmentToCTTextAlignment(nsTextAlignment: NSTextAlignment): CTTextAlignment; cdecl; external; { available in 6_0 }
function NSTextAlignmentFromCTTextAlignment(ctTextAlignment: CTTextAlignment): NSTextAlignment; cdecl; external; { available in 6_0 }
{$endif}

{$ifdef TYPES}
type
  NSWritingDirection = NSInteger;
  NSWritingDirectionPtr = ^NSWritingDirection;

const
  NSWritingDirectionNatural = -1;
  NSWritingDirectionLeftToRight = 0;
  NSWritingDirectionRightToLeft = 1;
{$endif}

