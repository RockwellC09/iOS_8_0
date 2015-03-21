{ Parsed from HealthKit.framework (iPhoneOS8.2) HKCategorySample.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKCategorySamplePtr = ^HKCategorySample;
{$endif}

{$ifdef CLASSES}

type
  HKCategorySample = objcclass external (HKSample)
  public
    function categoryType: HKCategoryType; message 'categoryType';
    function value: NSInteger; message 'value';
    function init: instancetype; message 'init';
    class function categorySampleWithType_value_startDate_endDate_metadata (type_: HKCategoryType; value_: NSInteger; startDate_: NSDate; endDate_: NSDate; metadata_: NSDictionary): instancetype; message 'categorySampleWithType:value:startDate:endDate:metadata:';
    class function categorySampleWithType_value_startDate_endDate (type_: HKCategoryType; value_: NSInteger; startDate_: NSDate; endDate_: NSDate): instancetype; message 'categorySampleWithType:value:startDate:endDate:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathCategoryValue: NSString { available in 8_0 }; cvar; external;
{$endif}

