{ Parsed from HealthKit.framework (iPhoneOS8.2) HKAnchoredObjectQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKAnchoredObjectQueryPtr = ^HKAnchoredObjectQuery;
{$endif}

{$ifdef CLASSES}

type
  HKAnchoredObjectQuery = objcclass external (HKQuery)
  public
    function initWithType_predicate_anchor_limit_completionHandler (type_: HKSampleType; predicate_: NSPredicate; anchor: NSUInteger; limit: NSUInteger; handler: OpaqueCBlock): instancetype; message 'initWithType:predicate:anchor:limit:completionHandler:';
  end;
{$endif}

