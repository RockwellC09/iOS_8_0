{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFString.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFSTRING_H_}
{$ifdef TYPES}
type
  CGPDFStringRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFStringGetLength(string_: CGPDFStringRef): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStringGetBytePtr(string_: CGPDFStringRef): PChar; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStringCopyTextString(string_: CGPDFStringRef): CFStringRef; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFStringCopyDate(string_: CGPDFStringRef): CFDateRef; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
{$endif}

{$endif}
