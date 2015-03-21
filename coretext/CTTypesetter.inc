{ Parsed from CoreText.framework (iPhoneOS8.2) CTTypesetter.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTTYPESETTER__}

{$ifdef TYPES}
type
  CTTypesetterRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTTypesetterOptionDisableBidiProcessing: CFStringRef deprecated 'in 10_5, 10_8, 3_2, 6_0'; cvar; external;
  kCTTypesetterOptionForcedEmbeddingLevel: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$endif}
