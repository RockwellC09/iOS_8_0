{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBCentral.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBCentralPtr = ^CBCentral;
{$endif}

{$ifdef CLASSES}

type
  CBCentral = objcclass external (CBPeer)
  public
    function maximumUpdateValueLength: NSUInteger; message 'maximumUpdateValueLength';
  end;
{$endif}

