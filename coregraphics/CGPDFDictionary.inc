{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFDictionary.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFDICTIONARY_H_}
{$ifdef TYPES}
type
  CGPDFDictionaryRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFDictionaryGetCount(dict: CGPDFDictionaryRef): size_t; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetObject(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFObjectRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetBoolean(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFBoolean): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetInteger(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFInteger): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetNumber(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFReal): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetName(dict: CGPDFDictionaryRef; key: PChar; var value: PChar): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetString(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFStringRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetArray(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFArrayRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetDictionary(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFDictionaryRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFDictionaryGetStream(dict: CGPDFDictionaryRef; key: PChar; var value: CGPDFStreamRef): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  CGPDFDictionaryApplierFunction = procedure (key: PChar; value: CGPDFObjectRef; info: pointer); cdecl;
{$endif}

{$ifdef FUNCTIONS}
procedure CGPDFDictionaryApplyFunction(dict: CGPDFDictionaryRef; function_: CGPDFDictionaryApplierFunction; info: pointer); cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
