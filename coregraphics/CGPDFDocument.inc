{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFDocument.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFDOCUMENT_H_}
{$ifdef TYPES}
type
  CGPDFDocumentRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFDocumentCreateWithProvider(provider: CGDataProviderRef): CGPDFDocumentRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPDFDocumentCreateWithURL(url: CFURLRef): CGPDFDocumentRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPDFDocumentRetain(document: CGPDFDocumentRef): CGPDFDocumentRef; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGPDFDocumentRelease(document: CGPDFDocumentRef); cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
procedure CGPDFDocumentGetVersion(document: CGPDFDocumentRef; var majorVersion: pcint; var minorVersion: pcint); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDocumentIsEncrypted(document: CGPDFDocumentRef): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentUnlockWithPassword(document: CGPDFDocumentRef; password: PChar): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentIsUnlocked(document: CGPDFDocumentRef): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentAllowsPrinting(document: CGPDFDocumentRef): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentAllowsCopying(document: CGPDFDocumentRef): cbool; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentGetNumberOfPages(document: CGPDFDocumentRef): size_t; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function CGPDFDocumentGetPage(document: CGPDFDocumentRef; pageNumber: size_t): CGPDFPageRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDocumentGetCatalog(document: CGPDFDocumentRef): CGPDFDictionaryRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDocumentGetInfo(document: CGPDFDocumentRef): CGPDFDictionaryRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFDocumentGetID(document: CGPDFDocumentRef): CGPDFArrayRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFDocumentGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_2, __IPHONE_2_0 }
function CGPDFDocumentGetMediaBox(document: CGPDFDocumentRef; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,    __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetCropBox(document: CGPDFDocumentRef; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,    __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetBleedBox(document: CGPDFDocumentRef; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,    __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetTrimBox(document: CGPDFDocumentRef; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,    __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetArtBox(document: CGPDFDocumentRef; page: cint): CGRect; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,    __IPHONE_NA, __IPHONE_NA';
function CGPDFDocumentGetRotationAngle(document: CGPDFDocumentRef; page: cint): cint; cdecl; external; deprecated 'in __MAC_10_0, __MAC_10_5,    __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
