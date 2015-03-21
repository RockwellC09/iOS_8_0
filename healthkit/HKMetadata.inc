{ Parsed from HealthKit.framework (iPhoneOS8.2) HKMetadata.h }
{ Created on Fri Mar 20 2:11:00 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeyDeviceSerialNumber: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyBodyTemperatureSensorLocation: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  HKBodyTemperatureSensorLocation = NSInteger;
  HKBodyTemperatureSensorLocationPtr = ^HKBodyTemperatureSensorLocation;

const
  HKBodyTemperatureSensorLocationOther = 0;
  HKBodyTemperatureSensorLocationArmpit = 1;
  HKBodyTemperatureSensorLocationBody = 2;
  HKBodyTemperatureSensorLocationEar = 3;
  HKBodyTemperatureSensorLocationFinger = 4;
  HKBodyTemperatureSensorLocationGastroIntestinal = 5;
  HKBodyTemperatureSensorLocationMouth = 6;
  HKBodyTemperatureSensorLocationRectum = 7;
  HKBodyTemperatureSensorLocationToe = 8;
  HKBodyTemperatureSensorLocationEarDrum = 9;
  HKBodyTemperatureSensorLocationTemporalArtery = 10;
  HKBodyTemperatureSensorLocationForehead = 11;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeyHeartRateSensorLocation: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  HKHeartRateSensorLocation = NSInteger;
  HKHeartRateSensorLocationPtr = ^HKHeartRateSensorLocation;

const
  HKHeartRateSensorLocationOther = 0;
  HKHeartRateSensorLocationChest = 1;
  HKHeartRateSensorLocationWrist = 2;
  HKHeartRateSensorLocationFinger = 3;
  HKHeartRateSensorLocationHand = 4;
  HKHeartRateSensorLocationEarLobe = 5;
  HKHeartRateSensorLocationFoot = 6;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKMetadataKeyFoodType: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyUDIDeviceIdentifier: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyUDIProductionIdentifier: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyDigitalSignature: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyExternalUUID: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyTimeZone: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyDeviceName: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyDeviceManufacturerName: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyWasTakenInLab: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyReferenceRangeLowerLimit: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyReferenceRangeUpperLimit: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyWasUserEntered: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyWorkoutBrandName: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyGroupFitness: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyIndoorWorkout: NSString { available in 8_0 }; cvar; external;
  HKMetadataKeyCoachedWorkout: NSString { available in 8_0 }; cvar; external;
{$endif}

