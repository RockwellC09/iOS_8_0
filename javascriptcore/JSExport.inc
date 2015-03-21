{ Parsed from JavaScriptCore.framework (iPhoneOS8.2) JSExport.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  JSExportProtocolPtr = ^JSExportProtocol;
{$endif}

{$if defined(JSC_OBJC_API_ENABLED)}
{$ifdef PROTOCOLS}

type
  JSExportProtocol = objcprotocol external name 'JSExport'
  end;
{$endif}

{$endif}
