{ Parsed from HealthKit.framework (iPhoneOS8.2) HKCorrelation.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKCorrelationPtr = ^HKCorrelation;
{$endif}

{$ifdef CLASSES}

type
  HKCorrelation = objcclass external (HKSample, NSSecureCodingProtocol)
  public
    function correlationType: HKCorrelationType; message 'correlationType';
    function objects: NSSet; message 'objects';
    class function correlationWithType_startDate_endDate_objects (correlationType_: HKCorrelationType; startDate_: NSDate; endDate_: NSDate; objects_: NSSet): instancetype; message 'correlationWithType:startDate:endDate:objects:';
    class function correlationWithType_startDate_endDate_objects_metadata (correlationType_: HKCorrelationType; startDate_: NSDate; endDate_: NSDate; objects_: NSSet; metadata_: NSDictionary): instancetype; message 'correlationWithType:startDate:endDate:objects:metadata:';
    function objectsForType (objectType: HKObjectType): NSSet; message 'objectsForType:';
  end;
{$endif}

