{ Parsed from CoreText.framework (iPhoneOS8.2) CTGlyphInfo.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTGLYPHINFO__}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTGlyphInfoRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTGlyphInfoRef = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  CTCharacterCollection = cuint16;
  CTCharacterCollectionPtr = ^CTCharacterCollection;

const
  kCTCharacterCollectionIdentityMapping = 0;
  kCTCharacterCollectionAdobeCNS1 = 1;
  kCTCharacterCollectionAdobeGB1 = 2;
  kCTCharacterCollectionAdobeJapan1 = 3;
  kCTCharacterCollectionAdobeJapan2 = 4;
  kCTCharacterCollectionAdobeKorea1 = 5;
  kCTIdentityMappingCharacterCollection = kCTCharacterCollectionIdentityMapping;
  kCTAdobeCNS1CharacterCollection = kCTCharacterCollectionAdobeCNS1;
  kCTAdobeGB1CharacterCollection = kCTCharacterCollectionAdobeGB1;
  kCTAdobeJapan1CharacterCollection = kCTCharacterCollectionAdobeJapan1;
  kCTAdobeJapan2CharacterCollection = kCTCharacterCollectionAdobeJapan2;
  kCTAdobeKorea1CharacterCollection = kCTCharacterCollectionAdobeKorea1;
{$endif}

{$endif}
