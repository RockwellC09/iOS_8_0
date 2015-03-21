{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesHomeKit;
interface

type
  HMAccessory = objcclass external;
  HMAccessoryBrowser = objcclass external;
  HMAction = objcclass external;
  HMActionSet = objcclass external;
  HMCharacteristic = objcclass external;
  HMCharacteristicMetadata = objcclass external;
  HMCharacteristicWriteAction = objcclass external;
  HMHome = objcclass external;
  HMHomeManager = objcclass external;
  HMRoom = objcclass external;
  HMService = objcclass external;
  HMServiceGroup = objcclass external;
  HMTimerTrigger = objcclass external;
  HMTrigger = objcclass external;
  HMUser = objcclass external;
  HMZone = objcclass external;
  HMAccessoryBrowserDelegateProtocol = objcprotocol external name 'HMAccessoryBrowserDelegate';
  HMAccessoryDelegateProtocol = objcprotocol external name 'HMAccessoryDelegate';
  HMHomeDelegateProtocol = objcprotocol external name 'HMHomeDelegate';
  HMHomeManagerDelegateProtocol = objcprotocol external name 'HMHomeManagerDelegate';

implementation
end.
