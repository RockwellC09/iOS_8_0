{ Parsed from CloudKit.framework (iPhoneOS8.2) CKRecordZone.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKRecordZonePtr = ^CKRecordZone;
{$endif}

{$ifdef TYPES}
type
  CKRecordZoneCapabilities = NSUInteger;
  CKRecordZoneCapabilitiesPtr = ^CKRecordZoneCapabilities;

const
  CKRecordZoneCapabilityFetchChanges = 1 shl 0;
  CKRecordZoneCapabilityAtomic = 1 shl 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CKRecordZoneDefaultName: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CKRecordZone = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function defaultRecordZone: CKRecordZone; message 'defaultRecordZone';
    function init: instancetype; message 'init';
    function initWithZoneName (zoneName: NSString): instancetype; message 'initWithZoneName:';
    function initWithZoneID (zoneID: CKRecordZoneID): instancetype; message 'initWithZoneID:';
    function zoneID: CKRecordZoneID; message 'zoneID';
    function capabilities: CKRecordZoneCapabilities; message 'capabilities';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

