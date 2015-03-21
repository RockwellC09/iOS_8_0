{ Parsed from HealthKit.framework (iPhoneOS8.2) HKObserverQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKObserverQueryPtr = ^HKObserverQuery;
{$endif}

{$ifdef TYPES}
type
  HKObserverQueryCompletionHandler = OpaqueCBlock { available in 8_0 };
{$endif}

{$ifdef CLASSES}

type
  HKObserverQuery = objcclass external (HKQuery)
  public
    function initWithSampleType_predicate_updateHandler (sampleType_: HKSampleType; predicate_: NSPredicate; updateHandler: OpaqueCBlock): instancetype; message 'initWithSampleType:predicate:updateHandler:';
  end;
{$endif}

