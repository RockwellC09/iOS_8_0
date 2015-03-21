{ Parsed from JavaScriptCore.framework (iPhoneOS8.2) JSValueRef.h }
{ Created on Fri Mar 20 2:11:17 2015 }

{$ifndef JSValueRef_h}

{$ifdef TYPES}
const
  kJSTypeUndefined = 0;
  kJSTypeNull = 1;
  kJSTypeBoolean = 2;
  kJSTypeNumber = 3;
  kJSTypeString = 4;
  kJSTypeObject = 5;
type
  JSType = clong;
{$endif}

{$ifdef FUNCTIONS}
function JSValueGetType(ctx: JSContextRef; param2: JSValueRef): JSType; cdecl; external;
function JSValueIsUndefined(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsNull(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsBoolean(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsNumber(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsString(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsObject(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueIsObjectOfClass(ctx: JSContextRef; value: JSValueRef; jsClass: JSClassRef): cbool; cdecl; external;
function JSValueIsEqual(ctx: JSContextRef; a: JSValueRef; b: JSValueRef; exception: JSValueRef): cbool; cdecl; external;
function JSValueIsStrictEqual(ctx: JSContextRef; a: JSValueRef; b: JSValueRef): cbool; cdecl; external;
function JSValueIsInstanceOfConstructor(ctx: JSContextRef; value: JSValueRef; constructor: JSObjectRef; exception: JSValueRef): cbool; cdecl; external;
function JSValueMakeUndefined(ctx: JSContextRef): JSValueRef; cdecl; external;
function JSValueMakeNull(ctx: JSContextRef): JSValueRef; cdecl; external;
function JSValueMakeBoolean(ctx: JSContextRef; boolean: cbool): JSValueRef; cdecl; external;
function JSValueMakeNumber(ctx: JSContextRef; number: double): JSValueRef; cdecl; external;
function JSValueMakeString(ctx: JSContextRef; string_: JSStringRef): JSValueRef; cdecl; external;
function JSValueMakeFromJSONString(ctx: JSContextRef; string_: JSStringRef): JSValueRef; cdecl; external; { available in 10_7, 7_0 }
function JSValueCreateJSONString(ctx: JSContextRef; value: JSValueRef; indent: cuint; exception: JSValueRef): JSStringRef; cdecl; external; { available in 10_7, 7_0 }
function JSValueToBoolean(ctx: JSContextRef; value: JSValueRef): cbool; cdecl; external;
function JSValueToNumber(ctx: JSContextRef; value: JSValueRef; exception: JSValueRef): double; cdecl; external;
function JSValueToStringCopy(ctx: JSContextRef; value: JSValueRef; exception: JSValueRef): JSStringRef; cdecl; external;
function JSValueToObject(ctx: JSContextRef; value: JSValueRef; exception: JSValueRef): JSObjectRef; cdecl; external;
procedure JSValueProtect(ctx: JSContextRef; value: JSValueRef); cdecl; external;
procedure JSValueUnprotect(ctx: JSContextRef; value: JSValueRef); cdecl; external;
{$endif}

{$endif}
