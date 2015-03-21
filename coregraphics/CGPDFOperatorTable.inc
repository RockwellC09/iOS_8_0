{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFOperatorTable.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFOPERATORTABLE_H_}
{$ifdef TYPES}
type
  CGPDFOperatorTableRef = OpaqueType;
  CGPDFOperatorCallback = procedure (scanner: CGPDFScannerRef; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFOperatorTableCreate: CGPDFOperatorTableRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function CGPDFOperatorTableRetain(table: CGPDFOperatorTableRef): CGPDFOperatorTableRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFOperatorTableRelease(table: CGPDFOperatorTableRef); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
procedure CGPDFOperatorTableSetCallback(table: CGPDFOperatorTableRef; name: PChar; callback: CGPDFOperatorCallback); cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
