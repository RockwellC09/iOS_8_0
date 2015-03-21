{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBUUID.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBUUIDPtr = ^CBUUID;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CBUUIDCharacteristicExtendedPropertiesString: NSString; cvar; external;
  CBUUIDCharacteristicUserDescriptionString: NSString; cvar; external;
  CBUUIDClientCharacteristicConfigurationString: NSString; cvar; external;
  CBUUIDServerCharacteristicConfigurationString: NSString; cvar; external;
  CBUUIDCharacteristicFormatString: NSString; cvar; external;
  CBUUIDCharacteristicAggregateFormatString: NSString; cvar; external;
  CBUUIDGenericAccessProfileString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
  CBUUIDGenericAttributeProfileString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
  CBUUIDDeviceNameString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
  CBUUIDAppearanceString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
  CBUUIDPeripheralPrivacyFlagString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
  CBUUIDReconnectionAddressString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
  CBUUIDPeripheralPreferredConnectionParametersString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
  CBUUIDServiceChangedString: NSString deprecated 'in NA, NA, 5_0, 7_0'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CBUUID = objcclass external (NSObject, NSCopyingProtocol)
  public
    function data: NSData; message 'data';
    function UUIDString: NSString; message 'UUIDString';
    class function UUIDWithString (theString: NSString): CBUUID; message 'UUIDWithString:';
    class function UUIDWithData (theData: NSData): CBUUID; message 'UUIDWithData:';
    class function UUIDWithCFUUID (theUUID: CFUUIDRef): CBUUID; message 'UUIDWithCFUUID:';
    class function UUIDWithNSUUID (theUUID: NSUUID): CBUUID; message 'UUIDWithNSUUID:'; { available in NA, 7_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

