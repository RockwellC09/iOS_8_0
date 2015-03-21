{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFStream.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFSTREAM_H_}
{$ifdef TYPES}
type
  CGPDFStreamRef = OpaqueType;

const
  CGPDFDataFormatRaw = 0;
  CGPDFDataFormatJPEGEncoded = 1;
  CGPDFDataFormatJPEG2000 = 2;

type
  CGPDFDataFormat = clong;
  CGPDFDataFormatPtr = ^CGPDFDataFormat;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFStreamGetDictionary(stream: CGPDFStreamRef): CGPDFDictionaryRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStreamCopyData(stream: CGPDFStreamRef; var format: CGPDFDataFormat): CFDataRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
