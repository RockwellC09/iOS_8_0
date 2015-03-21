{ Parsed from HealthKit.framework (iPhoneOS8.2) HKWorkout.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKWorkoutEventPtr = ^HKWorkoutEvent;
  HKWorkoutPtr = ^HKWorkout;
{$endif}

{$ifdef TYPES}
type
  HKWorkoutActivityType = NSUInteger;
  HKWorkoutActivityTypePtr = ^HKWorkoutActivityType;

const
  HKWorkoutActivityTypeAmericanFootball = 1;
  HKWorkoutActivityTypeArchery = 2;
  HKWorkoutActivityTypeAustralianFootball = 3;
  HKWorkoutActivityTypeBadminton = 4;
  HKWorkoutActivityTypeBaseball = 5;
  HKWorkoutActivityTypeBasketball = 6;
  HKWorkoutActivityTypeBowling = 7;
  HKWorkoutActivityTypeBoxing = 8;
  HKWorkoutActivityTypeClimbing = 9;
  HKWorkoutActivityTypeCricket = 10;
  HKWorkoutActivityTypeCrossTraining = 11;
  HKWorkoutActivityTypeCurling = 12;
  HKWorkoutActivityTypeCycling = 13;
  HKWorkoutActivityTypeDance = 14;
  HKWorkoutActivityTypeDanceInspiredTraining = 15;
  HKWorkoutActivityTypeElliptical = 16;
  HKWorkoutActivityTypeEquestrianSports = 17;
  HKWorkoutActivityTypeFencing = 18;
  HKWorkoutActivityTypeFishing = 19;
  HKWorkoutActivityTypeFunctionalStrengthTraining = 20;
  HKWorkoutActivityTypeGolf = 21;
  HKWorkoutActivityTypeGymnastics = 22;
  HKWorkoutActivityTypeHandball = 23;
  HKWorkoutActivityTypeHiking = 24;
  HKWorkoutActivityTypeHockey = 25;
  HKWorkoutActivityTypeHunting = 26;
  HKWorkoutActivityTypeLacrosse = 27;
  HKWorkoutActivityTypeMartialArts = 28;
  HKWorkoutActivityTypeMindAndBody = 29;
  HKWorkoutActivityTypeMixedMetabolicCardioTraining = 30;
  HKWorkoutActivityTypePaddleSports = 31;
  HKWorkoutActivityTypePlay = 32;
  HKWorkoutActivityTypePreparationAndRecovery = 33;
  HKWorkoutActivityTypeRacquetball = 34;
  HKWorkoutActivityTypeRowing = 35;
  HKWorkoutActivityTypeRugby = 36;
  HKWorkoutActivityTypeRunning = 37;
  HKWorkoutActivityTypeSailing = 38;
  HKWorkoutActivityTypeSkatingSports = 39;
  HKWorkoutActivityTypeSnowSports = 40;
  HKWorkoutActivityTypeSoccer = 41;
  HKWorkoutActivityTypeSoftball = 42;
  HKWorkoutActivityTypeSquash = 43;
  HKWorkoutActivityTypeStairClimbing = 44;
  HKWorkoutActivityTypeSurfingSports = 45;
  HKWorkoutActivityTypeSwimming = 46;
  HKWorkoutActivityTypeTableTennis = 47;
  HKWorkoutActivityTypeTennis = 48;
  HKWorkoutActivityTypeTrackAndField = 49;
  HKWorkoutActivityTypeTraditionalStrengthTraining = 50;
  HKWorkoutActivityTypeVolleyball = 51;
  HKWorkoutActivityTypeWalking = 52;
  HKWorkoutActivityTypeWaterFitness = 53;
  HKWorkoutActivityTypeWaterPolo = 54;
  HKWorkoutActivityTypeWaterSports = 55;
  HKWorkoutActivityTypeWrestling = 56;
  HKWorkoutActivityTypeYoga = 57;
  HKWorkoutActivityTypeOther = 3000;

type
  HKWorkoutEventType = NSInteger;
  HKWorkoutEventTypePtr = ^HKWorkoutEventType;

const
  HKWorkoutEventTypePause = 1;
  HKWorkoutEventTypeResume = 2;
{$endif}

{$ifdef CLASSES}

type
  HKWorkoutEvent = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function type_: HKWorkoutEventType; message 'type';
    function date: NSDate; message 'date';
    class function workoutEventWithType_date (type_: HKWorkoutEventType; date_: NSDate): instancetype; message 'workoutEventWithType:date:';
    function init: instancetype; message 'init';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  HKWorkout = objcclass external (HKSample)
  public
    function workoutActivityType: HKWorkoutActivityType; message 'workoutActivityType';
    function workoutEvents: NSArray; message 'workoutEvents';
    function duration: NSTimeInterval; message 'duration';
    function totalEnergyBurned: HKQuantity; message 'totalEnergyBurned';
    function totalDistance: HKQuantity; message 'totalDistance';
    class function workoutWithActivityType_startDate_endDate (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate): instancetype; message 'workoutWithActivityType:startDate:endDate:';
    class function workoutWithActivityType_startDate_endDate_workoutEvents_totalEnergyBurned_totalDistance_metadata (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate; workoutEvents_: NSArray; totalEnergyBurned_: HKQuantity; totalDistance_: HKQuantity; metadata_: NSDictionary): instancetype; message 'workoutWithActivityType:startDate:endDate:workoutEvents:totalEnergyBurned:totalDistance:metadata:';
    class function workoutWithActivityType_startDate_endDate_duration_totalEnergyBurned_totalDistance_metadata (workoutActivityType_: HKWorkoutActivityType; startDate_: NSDate; endDate_: NSDate; duration_: NSTimeInterval; totalEnergyBurned_: HKQuantity; totalDistance_: HKQuantity; metadata_: NSDictionary): instancetype; message 'workoutWithActivityType:startDate:endDate:duration:totalEnergyBurned:totalDistance:metadata:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathWorkoutDuration: NSString { available in 8_0 }; cvar; external;
  HKPredicateKeyPathWorkoutTotalDistance: NSString { available in 8_0 }; cvar; external;
  HKPredicateKeyPathWorkoutTotalEnergyBurned: NSString { available in 8_0 }; cvar; external;
  HKPredicateKeyPathWorkoutType: NSString { available in 8_0 }; cvar; external;
  HKWorkoutSortIdentifierDuration: NSString { available in 8_0 }; cvar; external;
  HKWorkoutSortIdentifierTotalDistance: NSString { available in 8_0 }; cvar; external;
  HKWorkoutSortIdentifierTotalEnergyBurned: NSString { available in 8_0 }; cvar; external;
{$endif}

