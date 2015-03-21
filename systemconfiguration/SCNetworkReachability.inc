{ Parsed from SystemConfiguration.framework (iPhoneOS8.2) SCNetworkReachability.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SCNETWORKREACHABILITY_H}
{$ifdef TYPES}
type
  SCNetworkReachabilityRef = OpaqueType;

type
  SCNetworkReachabilityContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  SCNetworkReachabilityContextPtr = ^SCNetworkReachabilityContext;

const
  kSCNetworkReachabilityFlagsTransientConnection = 1 shl 0;
  kSCNetworkReachabilityFlagsReachable = 1 shl 1;
  kSCNetworkReachabilityFlagsConnectionRequired = 1 shl 2;
  kSCNetworkReachabilityFlagsConnectionOnTraffic = 1 shl 3;
  kSCNetworkReachabilityFlagsInterventionRequired = 1 shl 4;
  kSCNetworkReachabilityFlagsConnectionOnDemand = 1 shl 5;
  kSCNetworkReachabilityFlagsIsLocalAddress = 1 shl 16;
  kSCNetworkReachabilityFlagsIsDirect = 1 shl 17;
  {$if defined(TARGET_OS_IPHONE)}
  kSCNetworkReachabilityFlagsIsWWAN = 1 shl 18;
  {$endif}
  kSCNetworkReachabilityFlagsConnectionAutomatic = kSCNetworkReachabilityFlagsConnectionOnTraffic;

type
  SCNetworkReachabilityFlags = cuint32;
  SCNetworkReachabilityFlagsPtr = ^SCNetworkReachabilityFlags;
  SCNetworkReachabilityCallBack = procedure (target: SCNetworkReachabilityRef; flags: SCNetworkReachabilityFlags; info: pointer); cdecl;
{$endif}

{$endif}
