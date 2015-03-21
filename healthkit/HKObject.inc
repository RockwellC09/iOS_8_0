{ Parsed from HealthKit.framework (iPhoneOS8.2) HKObject.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKObjectPtr = ^HKObject;
{$endif}

{$ifdef CLASSES}

type
  HKObject = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function UUID: NSUUID; message 'UUID';
    function source: HKSource; message 'source';
    function metadata: NSDictionary; message 'metadata';
    function init: instancetype; message 'init';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HKPredicateKeyPathUUID: NSString { available in 8_0 }; cvar; external;
  HKPredicateKeyPathSource: NSString { available in 8_0 }; cvar; external;
  HKPredicateKeyPathMetadata: NSString { available in 8_0 }; cvar; external;
  HKPredicateKeyPathCorrelation: NSString { available in 8_0 }; cvar; external;
  HKPredicateKeyPathWorkout: NSString { available in 8_0 }; cvar; external;
{$endif}

