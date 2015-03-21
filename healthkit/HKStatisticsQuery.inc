{ Parsed from HealthKit.framework (iPhoneOS8.2) HKStatisticsQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKStatisticsQueryPtr = ^HKStatisticsQuery;
{$endif}

{$ifdef CLASSES}

type
  HKStatisticsQuery = objcclass external (HKQuery)
  public
    function initWithQuantityType_quantitySamplePredicate_options_completionHandler (quantityType: HKQuantityType; quantitySamplePredicate: NSPredicate; options: HKStatisticsOptions; handler: OpaqueCBlock): instancetype; message 'initWithQuantityType:quantitySamplePredicate:options:completionHandler:';
  end;
{$endif}

