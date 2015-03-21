{ Parsed from HealthKit.framework (iPhoneOS8.2) HKCorrelationQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKCorrelationQueryPtr = ^HKCorrelationQuery;
{$endif}

{$ifdef CLASSES}

type
  HKCorrelationQuery = objcclass external (HKQuery)
  public
    function correlationType: HKCorrelationType; message 'correlationType';
    function samplePredicates: NSDictionary; message 'samplePredicates';
    function initWithType_predicate_samplePredicates_completion (correlationType_: HKCorrelationType; predicate_: NSPredicate; samplePredicates_: NSDictionary; completion: OpaqueCBlock): instancetype; message 'initWithType:predicate:samplePredicates:completion:';
  end;
{$endif}

