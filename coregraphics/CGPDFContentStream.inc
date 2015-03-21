{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFContentStream.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFCONTENTSTREAM_H_}
{$ifdef TYPES}
type
  CGPDFContentStreamRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFContentStreamCreateWithPage(page: CGPDFPageRef): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamCreateWithStream(stream: CGPDFStreamRef; streamResources: CGPDFDictionaryRef; parent: CGPDFContentStreamRef): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamRetain(cs: CGPDFContentStreamRef): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFContentStreamRelease(cs: CGPDFContentStreamRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamGetStreams(cs: CGPDFContentStreamRef): CFArrayRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFContentStreamGetResource(cs: CGPDFContentStreamRef; category: PChar; name: PChar): CGPDFObjectRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
