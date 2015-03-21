{ Parsed from HealthKit.framework (iPhoneOS8.2) HKSampleQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKSampleQueryPtr = ^HKSampleQuery;
{$endif}

{$ifdef CLASSES}

type
  HKSampleQuery = objcclass external (HKQuery)
  public
    function limit: NSUInteger; message 'limit';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    function initWithSampleType_predicate_limit_sortDescriptors_resultsHandler (sampleType_: HKSampleType; predicate_: NSPredicate; limit_: NSUInteger; sortDescriptors_: NSArray; resultsHandler: OpaqueCBlock): instancetype; message 'initWithSampleType:predicate:limit:sortDescriptors:resultsHandler:';
  end;
{$endif}

