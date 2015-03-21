{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFContext.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFCONTEXT_H_}
{$ifdef FUNCTIONS}
function CGPDFContextCreate(consumer: CGDataConsumerRef; mediaBox: CGRectPtr; auxiliaryInfo: CFDictionaryRef): CGContextRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPDFContextCreateWithURL(url: CFURLRef; mediaBox: CGRectPtr; auxiliaryInfo: CFDictionaryRef): CGContextRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGPDFContextClose(context: CGContextRef); cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
procedure CGPDFContextBeginPage(context: CGContextRef; pageInfo: CFDictionaryRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFContextEndPage(context: CGContextRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFContextAddDocumentMetadata(context: CGContextRef; metadata: CFDataRef); cdecl; external; { available starting in __MAC_10_7, __IPHONE_4_0 }
procedure CGPDFContextSetURLForRect(context: CGContextRef; url: CFURLRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFContextAddDestinationAtPoint(context: CGContextRef; name: CFStringRef; point: CGPoint); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFContextSetDestinationForRect(context: CGContextRef; name: CFStringRef; rect: CGRect); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCGPDFContextMediaBox: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextCropBox: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextBleedBox: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextTrimBox: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextArtBox: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextTitle: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextAuthor: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextSubject: CFStringRef { available starting in __MAC_10_5, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextKeywords: CFStringRef { available starting in __MAC_10_5, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextCreator: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextOwnerPassword: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextUserPassword: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextEncryptionKeyLength: CFStringRef { available starting in __MAC_10_5, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextAllowsPrinting: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextAllowsCopying: CFStringRef { available starting in __MAC_10_4, __IPHONE_2_0 }; cvar; external;
  kCGPDFContextOutputIntent: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGPDFXOutputIntentSubtype: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGPDFXOutputConditionIdentifier: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGPDFXOutputCondition: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGPDFXRegistryName: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGPDFXInfo: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGPDFXDestinationOutputProfile: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCGPDFContextOutputIntents: CFStringRef { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
{$endif}

{$endif}
