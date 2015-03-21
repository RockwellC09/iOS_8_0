{ Parsed from HealthKit.framework (iPhoneOS8.2) HKQuantity.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKQuantityPtr = ^HKQuantity;
{$endif}

{$ifdef CLASSES}

type
  HKQuantity = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    class function quantityWithUnit_doubleValue (unit_: HKUnit; value: double): instancetype; message 'quantityWithUnit:doubleValue:';
    function isCompatibleWithUnit (unit_: HKUnit): boolean; message 'isCompatibleWithUnit:';
    function doubleValueForUnit (unit_: HKUnit): double; message 'doubleValueForUnit:';
    function compare (quantity: HKQuantity): NSComparisonResult; message 'compare:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

