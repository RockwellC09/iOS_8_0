{ Parsed from SystemConfiguration.framework (iPhoneOS8.2) SCNetworkConfiguration.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SCNETWORKCONFIGURATION_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}
{$ifdef TYPES}
type
  SCNetworkInterfaceRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSCNetworkInterfaceType6to4: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeBluetooth: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeBond: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeEthernet: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeFireWire: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIEEE80211: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIPSec: CFStringRef { available starting in __MAC_10_5,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIrDA: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeL2TP: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeModem: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypePPP: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypePPTP: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeSerial: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeVLAN: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeWWAN: CFStringRef { available starting in __MAC_10_5,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceTypeIPv4: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkInterfaceIPv4: SCNetworkInterfaceRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCBondInterfaceRef = SCNetworkInterfaceRef;
  SCBondInterfaceRefPtr = ^SCBondInterfaceRef;
  SCBondStatusRef = OpaqueType;

const
  kSCBondStatusOK = 0;
  kSCBondStatusLinkInvalid = 1;
  kSCBondStatusNoPartner = 2;
  kSCBondStatusNotInActiveGroup = 3;
  kSCBondStatusUnknown = 999;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSCBondStatusDeviceAggregationStatus: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCBondStatusDeviceCollecting: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCBondStatusDeviceDistributing: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCVLANInterfaceRef = SCNetworkInterfaceRef;
  SCVLANInterfaceRefPtr = ^SCVLANInterfaceRef;
  SCNetworkProtocolRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSCNetworkProtocolTypeAppleTalk: CFStringRef deprecated 'in __MAC_10_4,__MAC_10_6,__IPHONE_NA,__IPHONE_NA'; cvar; external;
  kSCNetworkProtocolTypeDNS: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkProtocolTypeIPv4: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkProtocolTypeIPv6: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkProtocolTypeProxies: CFStringRef { available starting in __MAC_10_4,__IPHONE_NA }; cvar; external;
  kSCNetworkProtocolTypeSMB: CFStringRef { available starting in __MAC_10_5,__IPHONE_NA }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNetworkServiceRef = OpaqueType;
  SCNetworkSetRef = OpaqueType;
{$endif}

{$endif}
{$endif}
