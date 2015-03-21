{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBPeripheral.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBPeripheralPtr = ^CBPeripheral;
  CBPeripheralDelegateProtocolPtr = ^CBPeripheralDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBPeripheralState = NSInteger;
  CBPeripheralStatePtr = ^CBPeripheralState;

const
  CBPeripheralStateDisconnected = 0;
  CBPeripheralStateConnecting = 1;
  CBPeripheralStateConnected = 2;

type
  CBCharacteristicWriteType = NSInteger;
  CBCharacteristicWriteTypePtr = ^CBCharacteristicWriteType;

const
  CBCharacteristicWriteWithResponse = 0;
  CBCharacteristicWriteWithoutResponse = 1;
{$endif}

{$ifdef CLASSES}

type
  CBPeripheral = objcclass external (CBPeer)
  public
    procedure setDelegate(newValue: CBPeripheralDelegateProtocol); message 'setDelegate:';
    function delegate: CBPeripheralDelegateProtocol; message 'delegate';
    function name: NSString; message 'name';
    function RSSI: NSNumber; message 'RSSI';
    function isConnected: boolean; message 'isConnected';
    function state: CBPeripheralState; message 'state';
    function services: NSArray; message 'services';
    procedure readRSSI; message 'readRSSI';
    procedure discoverServices (serviceUUIDs: NSArray); message 'discoverServices:';
    procedure discoverIncludedServices_forService (includedServiceUUIDs: NSArray; service: CBService); message 'discoverIncludedServices:forService:';
    procedure discoverCharacteristics_forService (characteristicUUIDs: NSArray; service: CBService); message 'discoverCharacteristics:forService:';
    procedure readValueForCharacteristic (characteristic: CBCharacteristic); message 'readValueForCharacteristic:';
    procedure writeValue_forCharacteristic_type (data: NSData; characteristic: CBCharacteristic; type_: CBCharacteristicWriteType); message 'writeValue:forCharacteristic:type:';
    procedure setNotifyValue_forCharacteristic (enabled: boolean; characteristic: CBCharacteristic); message 'setNotifyValue:forCharacteristic:';
    procedure discoverDescriptorsForCharacteristic (characteristic: CBCharacteristic); message 'discoverDescriptorsForCharacteristic:';
    procedure readValueForDescriptor (descriptor: CBDescriptor); message 'readValueForDescriptor:';
    procedure writeValue_forDescriptor (data: NSData; descriptor: CBDescriptor); message 'writeValue:forDescriptor:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBPeripheralDelegateProtocol = objcprotocol external name 'CBPeripheralDelegate' (NSObjectProtocol)
  optional
    procedure peripheralDidUpdateName (peripheral: CBPeripheral); message 'peripheralDidUpdateName:'; { available in NA, 6_0 }
    procedure peripheralDidInvalidateServices (peripheral: CBPeripheral); message 'peripheralDidInvalidateServices:'; deprecated 'in NA, NA, 6_0, 7_0';
    procedure peripheral_didModifyServices (peripheral: CBPeripheral; invalidatedServices: NSArray); message 'peripheral:didModifyServices:'; { available in NA, 7_0 }
    procedure peripheralDidUpdateRSSI_error (peripheral: CBPeripheral; error: NSError); message 'peripheralDidUpdateRSSI:error:'; deprecated 'in NA, NA, 5_0, 8_0';
    procedure peripheral_didReadRSSI_error (peripheral: CBPeripheral; RSSI: NSNumber; error: NSError); message 'peripheral:didReadRSSI:error:'; { available in NA, 8_0 }
    procedure peripheral_didDiscoverServices (peripheral: CBPeripheral; error: NSError); message 'peripheral:didDiscoverServices:';
    procedure peripheral_didDiscoverIncludedServicesForService_error (peripheral: CBPeripheral; service: CBService; error: NSError); message 'peripheral:didDiscoverIncludedServicesForService:error:';
    procedure peripheral_didDiscoverCharacteristicsForService_error (peripheral: CBPeripheral; service: CBService; error: NSError); message 'peripheral:didDiscoverCharacteristicsForService:error:';
    procedure peripheral_didUpdateValueForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didUpdateValueForCharacteristic:error:';
    procedure peripheral_didWriteValueForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didWriteValueForCharacteristic:error:';
    procedure peripheral_didUpdateNotificationStateForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didUpdateNotificationStateForCharacteristic:error:';
    procedure peripheral_didDiscoverDescriptorsForCharacteristic_error (peripheral: CBPeripheral; characteristic: CBCharacteristic; error: NSError); message 'peripheral:didDiscoverDescriptorsForCharacteristic:error:';
    procedure peripheral_didUpdateValueForDescriptor_error (peripheral: CBPeripheral; descriptor: CBDescriptor; error: NSError); message 'peripheral:didUpdateValueForDescriptor:error:';
    procedure peripheral_didWriteValueForDescriptor_error (peripheral: CBPeripheral; descriptor: CBDescriptor; error: NSError); message 'peripheral:didWriteValueForDescriptor:error:';
  end;
{$endif}

