{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBCentralManager.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBCentralManagerPtr = ^CBCentralManager;
  CBCentralManagerDelegateProtocolPtr = ^CBCentralManagerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CBCentralManagerState = NSInteger;
  CBCentralManagerStatePtr = ^CBCentralManagerState;

const
  CBCentralManagerStateUnknown = 0;
  CBCentralManagerStateResetting = 1;
  CBCentralManagerStateUnsupported = 2;
  CBCentralManagerStateUnauthorized = 3;
  CBCentralManagerStatePoweredOff = 4;
  CBCentralManagerStatePoweredOn = 5;
{$endif}

{$ifdef CLASSES}

type
  CBCentralManager = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: CBCentralManagerDelegateProtocol); message 'setDelegate:';
    function delegate: CBCentralManagerDelegateProtocol; message 'delegate';
    function state: CBCentralManagerState; message 'state';
    function initWithDelegate_queue (delegate_: CBCentralManagerDelegateProtocol; queue: dispatch_queue_t): instancetype; message 'initWithDelegate:queue:';
    function initWithDelegate_queue_options (delegate_: CBCentralManagerDelegateProtocol; queue: dispatch_queue_t; options: NSDictionary): instancetype; message 'initWithDelegate:queue:options:'; { available in NA, 7_0 }
    procedure retrievePeripherals (peripheralUUIDs: NSArray); message 'retrievePeripherals:'; deprecated 'in NA, NA, 5_0, 7_0';
    function retrievePeripheralsWithIdentifiers (identifiers: NSArray): NSArray; message 'retrievePeripheralsWithIdentifiers:'; { available in NA, 7_0 }
    procedure retrieveConnectedPeripherals; message 'retrieveConnectedPeripherals'; deprecated 'in NA, NA, 5_0, 7_0';
    function retrieveConnectedPeripheralsWithServices (serviceUUIDs: NSArray): NSArray; message 'retrieveConnectedPeripheralsWithServices:'; { available in NA, 7_0 }
    procedure scanForPeripheralsWithServices_options (serviceUUIDs: NSArray; options: NSDictionary); message 'scanForPeripheralsWithServices:options:';
    procedure stopScan; message 'stopScan';
    procedure connectPeripheral_options (peripheral: CBPeripheral; options: NSDictionary); message 'connectPeripheral:options:';
    procedure cancelPeripheralConnection (peripheral: CBPeripheral); message 'cancelPeripheralConnection:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CBCentralManagerDelegateProtocol = objcprotocol external name 'CBCentralManagerDelegate' (NSObjectProtocol)
  required
    procedure centralManagerDidUpdateState (central: CBCentralManager); message 'centralManagerDidUpdateState:';
  optional
    procedure centralManager_willRestoreState (central: CBCentralManager; dict: NSDictionary); message 'centralManager:willRestoreState:';
    procedure centralManager_didRetrievePeripherals (central: CBCentralManager; peripherals: NSArray); message 'centralManager:didRetrievePeripherals:';
    procedure centralManager_didRetrieveConnectedPeripherals (central: CBCentralManager; peripherals: NSArray); message 'centralManager:didRetrieveConnectedPeripherals:';
    procedure centralManager_didDiscoverPeripheral_advertisementData_RSSI (central: CBCentralManager; peripheral: CBPeripheral; advertisementData: NSDictionary; RSSI: NSNumber); message 'centralManager:didDiscoverPeripheral:advertisementData:RSSI:';
    procedure centralManager_didConnectPeripheral (central: CBCentralManager; peripheral: CBPeripheral); message 'centralManager:didConnectPeripheral:';
    procedure centralManager_didFailToConnectPeripheral_error (central: CBCentralManager; peripheral: CBPeripheral; error: NSError); message 'centralManager:didFailToConnectPeripheral:error:';
    procedure centralManager_didDisconnectPeripheral_error (central: CBCentralManager; peripheral: CBPeripheral; error: NSError); message 'centralManager:didDisconnectPeripheral:error:';
  end;
{$endif}

