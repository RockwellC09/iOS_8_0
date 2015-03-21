{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFScanner.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFSCANNER_H_}
{$ifdef TYPES}
type
  CGPDFScannerRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFScannerCreate(cs: CGPDFContentStreamRef; table: CGPDFOperatorTableRef; info: pointer): CGPDFScannerRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerRetain(scanner: CGPDFScannerRef): CGPDFScannerRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFScannerRelease(scanner: CGPDFScannerRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerScan(scanner: CGPDFScannerRef): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerGetContentStream(scanner: CGPDFScannerRef): CGPDFContentStreamRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopObject(scanner: CGPDFScannerRef; var value: CGPDFObjectRef): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopBoolean(scanner: CGPDFScannerRef; var value: CGPDFBoolean): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopInteger(scanner: CGPDFScannerRef; var value: CGPDFInteger): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopNumber(scanner: CGPDFScannerRef; var value: CGPDFReal): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopName(scanner: CGPDFScannerRef; var value: PChar): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopString(scanner: CGPDFScannerRef; var value: CGPDFStringRef): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopArray(scanner: CGPDFScannerRef; var value: CGPDFArrayRef): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopDictionary(scanner: CGPDFScannerRef; var value: CGPDFDictionaryRef): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFScannerPopStream(scanner: CGPDFScannerRef; var value: CGPDFStreamRef): cbool; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
