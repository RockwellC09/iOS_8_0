{ Parsed from HealthKit.framework (iPhoneOS8.2) HKObjectType.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKObjectTypePtr = ^HKObjectType;
  HKCharacteristicTypePtr = ^HKCharacteristicType;
  HKSampleTypePtr = ^HKSampleType;
  HKCategoryTypePtr = ^HKCategoryType;
  HKCorrelationTypePtr = ^HKCorrelationType;
  HKQuantityTypePtr = ^HKQuantityType;
  HKWorkoutTypePtr = ^HKWorkoutType;
{$endif}

{$ifdef CLASSES}

type
  HKObjectType = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function init: instancetype; message 'init';
    class function quantityTypeForIdentifier (identifier_: NSString): HKQuantityType; message 'quantityTypeForIdentifier:';
    class function categoryTypeForIdentifier (identifier_: NSString): HKCategoryType; message 'categoryTypeForIdentifier:';
    class function characteristicTypeForIdentifier (identifier_: NSString): HKCharacteristicType; message 'characteristicTypeForIdentifier:';
    class function correlationTypeForIdentifier (identifier_: NSString): HKCorrelationType; message 'correlationTypeForIdentifier:';
    class function workoutType: HKWorkoutType; message 'workoutType';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKCharacteristicType = objcclass external (HKObjectType)
  end;

type
  HKSampleType = objcclass external (HKObjectType)
  end;

type
  HKCategoryType = objcclass external (HKSampleType)
  end;

type
  HKCorrelationType = objcclass external (HKSampleType)
  end;
{$endif}

{$ifdef TYPES}
type
  HKQuantityAggregationStyle = NSInteger;
  HKQuantityAggregationStylePtr = ^HKQuantityAggregationStyle;

const
  HKQuantityAggregationStyleCumulative = 0;
  HKQuantityAggregationStyleDiscrete = 1;
{$endif}

{$ifdef CLASSES}

type
  HKQuantityType = objcclass external (HKSampleType)
  public
    function aggregationStyle: HKQuantityAggregationStyle; message 'aggregationStyle';
    function isCompatibleWithUnit (unit_: HKUnit): boolean; message 'isCompatibleWithUnit:';
  end;

type
  HKWorkoutType = objcclass external (HKSampleType)
  end;
{$endif}

