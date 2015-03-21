{ Parsed from NetworkExtension.framework (iPhoneOS8.2) NEVPNProtocol.h }
{ Created on Fri Mar 20 2:11:10 2015 }


{$ifdef TYPES}
type
  NEVPNProtocolPtr = ^NEVPNProtocol;
{$endif}

{$ifdef CLASSES}

type
  NEVPNProtocol = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setServerAddress(newValue: NSString); message 'setServerAddress:';
    function serverAddress: NSString; message 'serverAddress';
    procedure setUsername(newValue: NSString); message 'setUsername:';
    function username: NSString; message 'username';
    procedure setPasswordReference(newValue: NSData); message 'setPasswordReference:';
    function passwordReference: NSData; message 'passwordReference';
    procedure setIdentityReference(newValue: NSData); message 'setIdentityReference:';
    function identityReference: NSData; message 'identityReference';
    procedure setIdentityData(newValue: NSData); message 'setIdentityData:';
    function identityData: NSData; message 'identityData';
    procedure setIdentityDataPassword(newValue: NSString); message 'setIdentityDataPassword:';
    function identityDataPassword: NSString; message 'identityDataPassword';
    procedure setDisconnectOnSleep(newValue: boolean); message 'setDisconnectOnSleep:';
    function disconnectOnSleep: boolean; message 'disconnectOnSleep';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

