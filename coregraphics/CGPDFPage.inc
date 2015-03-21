{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFPage.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFPAGE_H_}
{$ifdef TYPES}
type
  CGPDFPageRef = OpaqueType;

const
  kCGPDFMediaBox = 0;
  kCGPDFCropBox = 1;
  kCGPDFBleedBox = 2;
  kCGPDFTrimBox = 3;
  kCGPDFArtBox = 4;

type
  CGPDFBox = clong;
  CGPDFBoxPtr = ^CGPDFBox;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFPageRetain(page: CGPDFPageRef): CGPDFPageRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
procedure CGPDFPageRelease(page: CGPDFPageRef); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetDocument(page: CGPDFPageRef): CGPDFDocumentRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetPageNumber(page: CGPDFPageRef): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetBoxRect(page: CGPDFPageRef; box: CGPDFBox): CGRect; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetRotationAngle(page: CGPDFPageRef): cint; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetDrawingTransform(page: CGPDFPageRef; box: CGPDFBox; rect: CGRect; rotate: cint; preserveAspectRatio: cbool): CGAffineTransform; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetDictionary(page: CGPDFPageRef): CGPDFDictionaryRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFPageGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
