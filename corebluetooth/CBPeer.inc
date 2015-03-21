{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBPeer.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBPeerPtr = ^CBPeer;
{$endif}

{$ifdef CLASSES}

type
  CBPeer = objcclass external (NSObject, NSCopyingProtocol)
  public
    function UUID: CFUUIDRef; message 'UUID';
    function identifier: NSUUID; message 'identifier';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

