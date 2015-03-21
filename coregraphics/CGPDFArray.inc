{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFArray.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFARRAY_H_}
{$ifdef TYPES}
type
  CGPDFArrayRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFArrayGetCount(array_: CGPDFArrayRef): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetObject(array_: CGPDFArrayRef; index: size_t; var value: CGPDFObjectRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetNull(array_: CGPDFArrayRef; index: size_t): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetBoolean(array_: CGPDFArrayRef; index: size_t; var value: CGPDFBoolean): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetInteger(array_: CGPDFArrayRef; index: size_t; var value: CGPDFInteger): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetNumber(array_: CGPDFArrayRef; index: size_t; var value: CGPDFReal): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetName(array_: CGPDFArrayRef; index: size_t; var value: PChar): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetString(array_: CGPDFArrayRef; index: size_t; var value: CGPDFStringRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetArray(array_: CGPDFArrayRef; index: size_t; var value: CGPDFArrayRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetDictionary(array_: CGPDFArrayRef; index: size_t; var value: CGPDFDictionaryRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFArrayGetStream(array_: CGPDFArrayRef; index: size_t; var value: CGPDFStreamRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
