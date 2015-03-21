{ Parsed from HealthKit.framework (iPhoneOS8.2) HKQuantitySample.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKQuantitySamplePtr = ^HKQuantitySample;
{$endif}

{$ifdef CLASSES}

type
  HKQuantitySample = objcclass external (HKSample)
  public
    function quantityType: HKQuantityType; message 'quantityType';
    function quantity: HKQuantity; message 'quantity';
    class function quantitySampleWithType_quantity_startDate_endDate (quantityType_: HKQuantityType; quantity_: HKQuantity; startDate_: NSDate; endDate_: NSDate): instancetype; message 'quantitySampleWithType:quantity:startDate:endDate:';
    class function quantitySampleWithType_quantity_startDate_endDate_metadata (quantityType_: HKQuantityType; quantity_: HKQuantity; startDate_: NSDate; endDate_: NSDate; metadata_: NSDictionary): instancetype; message 'quantitySampleWithType:quantity:startDate:endDate:metadata:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathQuantity: NSString { available in 8_0 }; cvar; external;
{$endif}

