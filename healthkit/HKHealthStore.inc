{ Parsed from HealthKit.framework (iPhoneOS8.2) HKHealthStore.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKHealthStorePtr = ^HKHealthStore;
  HKBiologicalSexObjectPtr = ^HKBiologicalSexObject;
  HKBloodTypeObjectPtr = ^HKBloodTypeObject;
{$endif}

{$ifdef CLASSES}

type
  HKHealthStore = objcclass external (NSObject)
  public
    class function isHealthDataAvailable: boolean; message 'isHealthDataAvailable';
    function authorizationStatusForType (type_: HKObjectType): HKAuthorizationStatus; message 'authorizationStatusForType:';
    procedure requestAuthorizationToShareTypes_readTypes_completion (typesToShare: NSSet; typesToRead: NSSet; completion: OpaqueCBlock); message 'requestAuthorizationToShareTypes:readTypes:completion:';
    procedure saveObject_withCompletion (object_: HKObject; completion: OpaqueCBlock); message 'saveObject:withCompletion:';
    procedure saveObjects_withCompletion (objects: NSArray; completion: OpaqueCBlock); message 'saveObjects:withCompletion:';
    procedure deleteObject_withCompletion (object_: HKObject; completion: OpaqueCBlock); message 'deleteObject:withCompletion:';
    procedure executeQuery (query: HKQuery); message 'executeQuery:';
    procedure stopQuery (query: HKQuery); message 'stopQuery:';
    function dateOfBirthWithError (error: NSErrorPtr): NSDate; message 'dateOfBirthWithError:';
    function biologicalSexWithError (error: NSErrorPtr): HKBiologicalSexObject; message 'biologicalSexWithError:';
    function bloodTypeWithError (error: NSErrorPtr): HKBloodTypeObject; message 'bloodTypeWithError:';
  end;


type
  HKHealthStore_HKWorkout = objccategory external name 'HKWorkout' (HKHealthStore)
    procedure addSamples_toWorkout_completion (samples: NSArray; workout: HKWorkout; completion: OpaqueCBlock); message 'addSamples:toWorkout:completion:';
  end;

type
  HKBackgroundDelivery = objccategory external (HKHealthStore)
    procedure enableBackgroundDeliveryForType_frequency_withCompletion (type_: HKObjectType; frequency: HKUpdateFrequency; completion: OpaqueCBlock); message 'enableBackgroundDeliveryForType:frequency:withCompletion:';
    procedure disableBackgroundDeliveryForType_withCompletion (type_: HKObjectType; completion: OpaqueCBlock); message 'disableBackgroundDeliveryForType:withCompletion:';
    procedure disableAllBackgroundDeliveryWithCompletion (completion: OpaqueCBlock); message 'disableAllBackgroundDeliveryWithCompletion:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKUserPreferencesDidChangeNotification: NSString { available in 8_2 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  HKUserPreferences = objccategory external (HKHealthStore)
    procedure preferredUnitsForQuantityTypes_completion (quantityTypes: NSSet; completion: OpaqueCBlock); message 'preferredUnitsForQuantityTypes:completion:'; { available in 8_2 }
  end;


type
  HKBiologicalSexObject = objcclass external (NSObject)
  public
    function biologicalSex: HKBiologicalSex; message 'biologicalSex';
  end;

type
  HKBloodTypeObject = objcclass external (NSObject)
  public
    function bloodType: HKBloodType; message 'bloodType';
  end;
{$endif}

