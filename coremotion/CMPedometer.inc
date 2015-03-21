{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMPedometer.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMPedometerDataPtr = ^CMPedometerData;
  CMPedometerPtr = ^CMPedometer;
{$endif}

{$ifdef CLASSES}

type
  CMPedometerData = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function numberOfSteps: NSNumber; message 'numberOfSteps';
    function distance: NSNumber; message 'distance';
    function floorsAscended: NSNumber; message 'floorsAscended';
    function floorsDescended: NSNumber; message 'floorsDescended';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  CMPedometerHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  CMPedometer = objcclass external (NSObject)
  public
    class function isStepCountingAvailable: boolean; message 'isStepCountingAvailable';
    class function isDistanceAvailable: boolean; message 'isDistanceAvailable';
    class function isFloorCountingAvailable: boolean; message 'isFloorCountingAvailable';
    procedure queryPedometerDataFromDate_toDate_withHandler (start: NSDate; end_: NSDate; handler: CMPedometerHandler); message 'queryPedometerDataFromDate:toDate:withHandler:';
    procedure startPedometerUpdatesFromDate_withHandler (start: NSDate; handler: CMPedometerHandler); message 'startPedometerUpdatesFromDate:withHandler:';
    procedure stopPedometerUpdates; message 'stopPedometerUpdates';
  end;
{$endif}

