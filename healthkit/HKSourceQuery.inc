{ Parsed from HealthKit.framework (iPhoneOS8.2) HKSourceQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKSourceQueryPtr = ^HKSourceQuery;
{$endif}

{$ifdef CLASSES}

type
  HKSourceQuery = objcclass external (HKQuery)
  public
    function initWithSampleType_samplePredicate_completionHandler (sampleType_: HKSampleType; objectPredicate: NSPredicate; completionHandler: OpaqueCBlock): instancetype; message 'initWithSampleType:samplePredicate:completionHandler:';
  end;
{$endif}

