{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBService.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBServicePtr = ^CBService;
  CBMutableServicePtr = ^CBMutableService;
{$endif}

{$ifdef CLASSES}

type
  CBService = objcclass external (CBAttribute)
  public
    function peripheral: CBPeripheral; message 'peripheral';
    function isPrimary: boolean; message 'isPrimary';
    function includedServices: NSArray; message 'includedServices';
    function characteristics: NSArray; message 'characteristics';
  end;

type
  CBMutableService = objcclass external (CBService)
  public
    procedure setUUID(newValue: CBUUID); message 'setUUID:';
    function UUID: CBUUID; message 'UUID';
    procedure setIsPrimary(newValue: boolean); message 'setIsPrimary:';
    function isPrimary: boolean; message 'isPrimary';
    procedure setIncludedServices(newValue: NSArray); message 'setIncludedServices:';
    function includedServices: NSArray; message 'includedServices';
    procedure setCharacteristics(newValue: NSArray); message 'setCharacteristics:';
    function characteristics: NSArray; message 'characteristics';
    function initWithType_primary (UUID_: CBUUID; isPrimary_: boolean): instancetype; message 'initWithType:primary:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

