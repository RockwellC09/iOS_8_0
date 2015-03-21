{ Parsed from HomeKit.framework (iPhoneOS8.2) HMCharacteristic.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMCharacteristicPtr = ^HMCharacteristic;
{$endif}

{$ifdef CLASSES}

type
  HMCharacteristic = objcclass external (NSObject)
  public
    function characteristicType: NSString; message 'characteristicType';
    function service: HMService; message 'service';
    function properties: NSArray; message 'properties';
    function metadata: HMCharacteristicMetadata; message 'metadata';
    function value: id; message 'value';
    function isNotificationEnabled: boolean; message 'isNotificationEnabled';
    procedure writeValue_completionHandler (value_: id; completion: OpaqueCBlock); message 'writeValue:completionHandler:';
    procedure readValueWithCompletionHandler (completion: OpaqueCBlock); message 'readValueWithCompletionHandler:';
    procedure enableNotification_completionHandler (enable: boolean; completion: OpaqueCBlock); message 'enableNotification:completionHandler:';
    procedure updateAuthorizationData_completionHandler (data: NSData; completion: OpaqueCBlock); message 'updateAuthorizationData:completionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HMCharacteristicPropertySupportsEventNotification: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicPropertyReadable: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicPropertyWritable: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypePowerState: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeHue: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeSaturation: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeBrightness: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeTemperatureUnits: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeCurrentTemperature: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeTargetTemperature: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeCurrentHeatingCooling: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeTargetHeatingCooling: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeCoolingThreshold: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeHeatingThreshold: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeCurrentRelativeHumidity: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeTargetRelativeHumidity: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeCurrentDoorState: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeTargetDoorState: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeObstructionDetected: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeName: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeManufacturer: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeModel: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeSerialNumber: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeIdentify: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeRotationDirection: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeRotationSpeed: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeOutletInUse: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeVersion: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeLogs: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeAudioFeedback: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeAdminOnlyAccess: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeMotionDetected: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeCurrentLockMechanismState: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeTargetLockMechanismState: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeLockMechanismLastKnownAction: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeLockManagementControlPoint: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicTypeLockManagementAutoSecureTimeout: NSString { available in 8_0 }; cvar; external;
{$endif}

