{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBATTRequest.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBATTRequestPtr = ^CBATTRequest;
{$endif}

{$ifdef CLASSES}

type
  CBATTRequest = objcclass external (NSObject)
  public
    function central: CBCentral; message 'central';
    function characteristic: CBCharacteristic; message 'characteristic';
    function offset: NSUInteger; message 'offset';
    procedure setValue(newValue: NSData); message 'setValue:';
    function value: NSData; message 'value';
  end;
{$endif}

