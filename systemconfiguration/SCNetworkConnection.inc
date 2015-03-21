{ Parsed from SystemConfiguration.framework (iPhoneOS8.2) SCNetworkConnection.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SCNETWORKCONNECTION_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}
{$ifdef TYPES}
type
  SCNetworkConnectionRef = OpaqueType;

type
  SCNetworkConnectionContext = record
    version: CFIndex;
    info: pointer;
    retain: function (info: pointer): pointer; cdecl;
    release: procedure (info: pointer); cdecl;
    copyDescription: function (info: pointer): CFStringRef; cdecl;
  end;
type
  SCNetworkConnectionContextPtr = ^SCNetworkConnectionContext;

const
  kSCNetworkConnectionInvalid = -1;
  kSCNetworkConnectionDisconnected = 0;
  kSCNetworkConnectionConnecting = 1;
  kSCNetworkConnectionConnected = 2;
  kSCNetworkConnectionDisconnecting = 3;

type
  SCNetworkConnectionStatus = cint32;
  SCNetworkConnectionStatusPtr = ^SCNetworkConnectionStatus;

const
  kSCNetworkConnectionPPPDisconnected = 0;
  kSCNetworkConnectionPPPInitializing = 1;
  kSCNetworkConnectionPPPConnectingLink = 2;
  kSCNetworkConnectionPPPDialOnTraffic = 3;
  kSCNetworkConnectionPPPNegotiatingLink = 4;
  kSCNetworkConnectionPPPAuthenticating = 5;
  kSCNetworkConnectionPPPWaitingForCallBack = 6;
  kSCNetworkConnectionPPPNegotiatingNetwork = 7;
  kSCNetworkConnectionPPPConnected = 8;
  kSCNetworkConnectionPPPTerminating = 9;
  kSCNetworkConnectionPPPDisconnectingLink = 10;
  kSCNetworkConnectionPPPHoldingLinkOff = 11;
  kSCNetworkConnectionPPPSuspended = 12;
  kSCNetworkConnectionPPPWaitingForRedial = 13;

type
  SCNetworkConnectionPPPStatus = cint32;
  SCNetworkConnectionPPPStatusPtr = ^SCNetworkConnectionPPPStatus;
  SCNetworkConnectionCallBack = procedure (connection: SCNetworkConnectionRef; status: SCNetworkConnectionStatus; info: pointer); cdecl;

const
  kSCNetworkConnectionBytesIn = 'BytesIn'		;
  kSCNetworkConnectionBytesOut = 'BytesOut'		;
  kSCNetworkConnectionPacketsIn = 'PacketsIn'		;
  kSCNetworkConnectionPacketsOut = 'PacketsOut'		;
  kSCNetworkConnectionErrorsIn = 'ErrorsIn'		;
  kSCNetworkConnectionErrorsOut = 'ErrorsOut'		;
  kSCNetworkConnectionSelectionOptionOnDemandHostName = 'OnDemandHostName'	;
  kSCNetworkConnectionSelectionOptionOnDemandRetry = 'OnDemandRetry'		;
{$endif}

{$endif}
{$endif}
