{ Parsed from HealthKit.framework (iPhoneOS8.2) HKStatistics.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKStatisticsPtr = ^HKStatistics;
{$endif}

{$ifdef TYPES}
type
  HKStatisticsOptions = NSUInteger;
  HKStatisticsOptionsPtr = ^HKStatisticsOptions;

const
  HKStatisticsOptionNone = 0;
  HKStatisticsOptionSeparateBySource = 1 shl 0;
  HKStatisticsOptionDiscreteAverage = 1 shl 1;
  HKStatisticsOptionDiscreteMin = 1 shl 2;
  HKStatisticsOptionDiscreteMax = 1 shl 3;
  HKStatisticsOptionCumulativeSum = 1 shl 4;
{$endif}

{$ifdef CLASSES}

type
  HKStatistics = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function quantityType: HKQuantityType; message 'quantityType';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function sources: NSArray; message 'sources';
    function init: instancetype; message 'init';
    function averageQuantityForSource (source: HKSource): HKQuantity; message 'averageQuantityForSource:';
    function averageQuantity: HKQuantity; message 'averageQuantity';
    function minimumQuantityForSource (source: HKSource): HKQuantity; message 'minimumQuantityForSource:';
    function minimumQuantity: HKQuantity; message 'minimumQuantity';
    function maximumQuantityForSource (source: HKSource): HKQuantity; message 'maximumQuantityForSource:';
    function maximumQuantity: HKQuantity; message 'maximumQuantity';
    function sumQuantityForSource (source: HKSource): HKQuantity; message 'sumQuantityForSource:';
    function sumQuantity: HKQuantity; message 'sumQuantity';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

