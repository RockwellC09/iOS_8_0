{ Parsed from JavaScriptCore.framework (iPhoneOS8.2) JSBase.h }
{ Created on Fri Mar 20 2:11:17 2015 }

{$ifndef JSBase_h}

{$ifdef TYPES}
type
  JSContextGroupRef = OpaqueType;
  JSContextRef = OpaqueType;
  JSGlobalContextRef = OpaqueType;
  JSStringRef = OpaqueType;
  JSClassRef = OpaqueType;
  JSPropertyNameArrayRef = OpaqueType;
  JSPropertyNameAccumulatorRef = OpaqueType;
  JSValueRef = OpaqueType;
  JSObjectRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function JSEvaluateScript(ctx: JSContextRef; script: JSStringRef; thisObject: JSObjectRef; sourceURL: JSStringRef; startingLineNumber: cint; exception: JSValueRef): JSValueRef; cdecl; external;
function JSCheckScriptSyntax(ctx: JSContextRef; script: JSStringRef; sourceURL: JSStringRef; startingLineNumber: cint; exception: JSValueRef): cbool; cdecl; external;
procedure JSGarbageCollect(ctx: JSContextRef); cdecl; external;
{$endif}

{$endif}
