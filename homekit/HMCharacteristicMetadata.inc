{ Parsed from HomeKit.framework (iPhoneOS8.2) HMCharacteristicMetadata.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMCharacteristicMetadataPtr = ^HMCharacteristicMetadata;
{$endif}

{$ifdef CLASSES}

type
  HMCharacteristicMetadata = objcclass external (NSObject)
  public
    function minimumValue: NSNumber; message 'minimumValue';
    function maximumValue: NSNumber; message 'maximumValue';
    function stepValue: NSNumber; message 'stepValue';
    function maxLength: NSNumber; message 'maxLength';
    function format: NSString; message 'format';
    function units: NSString; message 'units';
    function manufacturerDescription: NSString; message 'manufacturerDescription';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HMCharacteristicMetadataFormatBool: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatInt: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatFloat: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatString: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatArray: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatDictionary: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt8: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt16: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt32: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatUInt64: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatData: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataFormatTLV8: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsCelsius: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsFahrenheit: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsPercentage: NSString { available in 8_0 }; cvar; external;
  HMCharacteristicMetadataUnitsArcDegree: NSString { available in 8_0 }; cvar; external;
{$endif}

