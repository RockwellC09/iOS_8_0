{ Parsed from CoreGraphics.framework (iPhoneOS8.2) CGPDFObject.h }
{ Created on Fri Mar 20 2:11:40 2015 }

{$ifndef CGPDFOBJECT_H_}
{$ifdef TYPES}
type
  CGPDFBoolean = char;
  CGPDFBooleanPtr = ^CGPDFBoolean;
  CGPDFInteger = clong;
  CGPDFIntegerPtr = ^CGPDFInteger;
  CGPDFReal = CGFloat;
  CGPDFRealPtr = ^CGPDFReal;
  CGPDFObjectRef = OpaqueType;

const
  kCGPDFObjectTypeNull = 1;
  kCGPDFObjectTypeBoolean = 2;
  kCGPDFObjectTypeInteger = 3;
  kCGPDFObjectTypeReal = 4;
  kCGPDFObjectTypeName = 5;
  kCGPDFObjectTypeString = 6;
  kCGPDFObjectTypeArray = 7;
  kCGPDFObjectTypeDictionary = 8;
  kCGPDFObjectTypeStream = 9;

type
  CGPDFObjectType = clong;
  CGPDFObjectTypePtr = ^CGPDFObjectType;
{$endif}

{$ifdef FUNCTIONS}
function CGPDFObjectGetType(object_: CGPDFObjectRef): CGPDFObjectType; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function CGPDFObjectGetValue(object_: CGPDFObjectRef; type_: CGPDFObjectType; value: pointer): cbool; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$endif}
