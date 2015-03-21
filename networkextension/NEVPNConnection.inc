{ Parsed from NetworkExtension.framework (iPhoneOS8.2) NEVPNConnection.h }
{ Created on Fri Mar 20 2:11:10 2015 }


{$ifdef TYPES}
type
  NEVPNConnectionPtr = ^NEVPNConnection;
{$endif}

{$ifdef TYPES}
type
  NEVPNStatus = NSInteger;
  NEVPNStatusPtr = ^NEVPNStatus;

const
  NEVPNStatusInvalid = 0;
  NEVPNStatusDisconnected = 1;
  NEVPNStatusConnecting = 2;
  NEVPNStatusConnected = 3;
  NEVPNStatusReasserting = 4;
  NEVPNStatusDisconnecting = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NEVPNStatusDidChangeNotification: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NEVPNConnection = objcclass external (NSObject)
  public
    function startVPNTunnelAndReturnError (error: NSError * __autoreleasingPtr): boolean; message 'startVPNTunnelAndReturnError:'; { available in 10_10, 8_0 }
    procedure stopVPNTunnel; message 'stopVPNTunnel'; { available in 10_10, 8_0 }
    function status: NEVPNStatus; message 'status';
  end;
{$endif}

