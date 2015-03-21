{ Parsed from HealthKit.framework (iPhoneOS8.2) HKStatisticsCollectionQuery.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKStatisticsCollectionPtr = ^HKStatisticsCollection;
  HKStatisticsCollectionQueryPtr = ^HKStatisticsCollectionQuery;
{$endif}

{$ifdef CLASSES}

type
  HKStatisticsCollection = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function statisticsForDate (date: NSDate): HKStatistics; message 'statisticsForDate:';
    procedure enumerateStatisticsFromDate_toDate_withBlock (startDate: NSDate; endDate: NSDate; block: OpaqueCBlock); message 'enumerateStatisticsFromDate:toDate:withBlock:';
    function statistics: NSArray; message 'statistics';
    function sources: NSSet; message 'sources';
  end;

type
  HKStatisticsCollectionQuery = objcclass external (HKQuery)
  public
    function anchorDate: NSDate; message 'anchorDate';
    function options: HKStatisticsOptions; message 'options';
    function intervalComponents: NSDateComponents; message 'intervalComponents';
    procedure setInitialResultsHandler(newValue: OpaqueCBlock); message 'setInitialResultsHandler:';
    function initialResultsHandler: OpaqueCBlock; message 'initialResultsHandler';
    procedure setStatisticsUpdateHandler(newValue: OpaqueCBlock); message 'setStatisticsUpdateHandler:';
    function statisticsUpdateHandler: OpaqueCBlock; message 'statisticsUpdateHandler';
    function initWithQuantityType_quantitySamplePredicate_options_anchorDate_intervalComponents (quantityType: HKQuantityType; quantitySamplePredicate: NSPredicate; options_: HKStatisticsOptions; anchorDate_: NSDate; intervalComponents_: NSDateComponents): instancetype; message 'initWithQuantityType:quantitySamplePredicate:options:anchorDate:intervalComponents:';
  end;
{$endif}

