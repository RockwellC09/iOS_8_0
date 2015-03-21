{ Parsed from SystemConfiguration.framework (iPhoneOS8.2) SCDynamicStore.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SCDYNAMICSTORE_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}
{$ifdef TYPES}
type
  SCDynamicStoreRef = OpaqueType;

type
  SCDynamicStoreContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  SCDynamicStoreContextPtr = ^SCDynamicStoreContext;

type
  SCDynamicStoreCallBack = procedure (store: SCDynamicStoreRef; changedKeys: CFArrayRef; info: pointer); cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSCDynamicStoreUseSessionKeys: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
{$endif}

{$endif}
{$endif}
