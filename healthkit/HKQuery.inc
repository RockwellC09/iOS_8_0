{ Parsed from HealthKit.framework (iPhoneOS8.2) HKQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKQueryPtr = ^HKQuery;
{$endif}

{$ifdef CLASSES}

type
  HKQuery = objcclass external (NSObject)
  public
    function sampleType: HKSampleType; message 'sampleType';
    function predicate: NSPredicate; message 'predicate';
    function init: instancetype; message 'init';
  end;
{$endif}

{$ifdef TYPES}
type
  HKQueryOptions = NSUInteger;
  HKQueryOptionsPtr = ^HKQueryOptions;

const
  HKQueryOptionNone = 0;
  HKQueryOptionStrictStartDate = 1 shl 0;
  HKQueryOptionStrictEndDate = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  HKObjectPredicates = objccategory external (HKQuery)
    class function predicateForObjectsWithMetadataKey (key: NSString): NSPredicate; message 'predicateForObjectsWithMetadataKey:';
    class function predicateForObjectsWithMetadataKey_allowedValues (key: NSString; allowedValues: NSArray): NSPredicate; message 'predicateForObjectsWithMetadataKey:allowedValues:';
    class function predicateForObjectsWithMetadataKey_operatorType_value (key: NSString; operatorType: NSPredicateOperatorType; value: id): NSPredicate; message 'predicateForObjectsWithMetadataKey:operatorType:value:';
    class function predicateForObjectsFromSource (source: HKSource): NSPredicate; message 'predicateForObjectsFromSource:';
    class function predicateForObjectsFromSources (sources: NSSet): NSPredicate; message 'predicateForObjectsFromSources:';
    class function predicateForObjectWithUUID (UUID: NSUUID): NSPredicate; message 'predicateForObjectWithUUID:';
    class function predicateForObjectsWithUUIDs (UUIDs: NSSet): NSPredicate; message 'predicateForObjectsWithUUIDs:';
    class function predicateForObjectsWithNoCorrelation: NSPredicate; message 'predicateForObjectsWithNoCorrelation';
    class function predicateForObjectsFromWorkout (workout: HKWorkout): NSPredicate; message 'predicateForObjectsFromWorkout:';
  end;

type
  HKSamplePredicates = objccategory external (HKQuery)
    class function predicateForSamplesWithStartDate_endDate_options (startDate: NSDate; endDate: NSDate; options: HKQueryOptions): NSPredicate; message 'predicateForSamplesWithStartDate:endDate:options:';
  end;

type
  HKQuantitySamplePredicates = objccategory external (HKQuery)
    class function predicateForQuantitySamplesWithOperatorType_quantity (operatorType: NSPredicateOperatorType; quantity: HKQuantity): NSPredicate; message 'predicateForQuantitySamplesWithOperatorType:quantity:';
  end;

type
  HKCategorySamplePredicates = objccategory external (HKQuery)
    class function predicateForCategorySamplesWithOperatorType_value (operatorType: NSPredicateOperatorType; value: NSInteger): NSPredicate; message 'predicateForCategorySamplesWithOperatorType:value:';
  end;

type
  HKWorkoutPredicates = objccategory external (HKQuery)
    class function predicateForWorkoutsWithWorkoutActivityType (workoutActivityType: HKWorkoutActivityType): NSPredicate; message 'predicateForWorkoutsWithWorkoutActivityType:';
    class function predicateForWorkoutsWithOperatorType_duration (operatorType: NSPredicateOperatorType; duration: NSTimeInterval): NSPredicate; message 'predicateForWorkoutsWithOperatorType:duration:';
    class function predicateForWorkoutsWithOperatorType_totalEnergyBurned (operatorType: NSPredicateOperatorType; totalEnergyBurned: HKQuantity): NSPredicate; message 'predicateForWorkoutsWithOperatorType:totalEnergyBurned:';
    class function predicateForWorkoutsWithOperatorType_totalDistance (operatorType: NSPredicateOperatorType; totalDistance: HKQuantity): NSPredicate; message 'predicateForWorkoutsWithOperatorType:totalDistance:';
  end;
{$endif}

