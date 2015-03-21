{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBDescriptor.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBDescriptorPtr = ^CBDescriptor;
  CBMutableDescriptorPtr = ^CBMutableDescriptor;
{$endif}

{$ifdef CLASSES}

type
  CBDescriptor = objcclass external (CBAttribute)
  public
    function characteristic: CBCharacteristic; message 'characteristic';
    function value: id; message 'value';
  end;

type
  CBMutableDescriptor = objcclass external (CBDescriptor)
  public
    function initWithType_value (UUID_: CBUUID; value_: id): instancetype; message 'initWithType:value:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

