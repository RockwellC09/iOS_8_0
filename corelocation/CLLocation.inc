{ Parsed from CoreLocation.framework (iPhoneOS8.2) CLLocation.h }
{ Created on Fri Mar 20 2:11:06 2015 }


{$ifdef TYPES}
type
  CLFloorPtr = ^CLFloor;
  CLLocationPtr = ^CLLocation;
{$endif}

{$ifdef TYPES}
type
  CLLocationDegrees = double;
  CLLocationDegreesPtr = ^CLLocationDegrees;
  CLLocationAccuracy = double;
  CLLocationAccuracyPtr = ^CLLocationAccuracy;
  CLLocationSpeed = double;
  CLLocationSpeedPtr = ^CLLocationSpeed;
  CLLocationDirection = double;
  CLLocationDirectionPtr = ^CLLocationDirection;

type
  CLLocationCoordinate2D = record
    latitude: CLLocationDegrees;
    longitude: CLLocationDegrees;
  end;
type
  CLLocationCoordinate2DPtr = ^CLLocationCoordinate2D;

type
  CLLocationDistance = double;
  CLLocationDistancePtr = ^CLLocationDistance;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCLDistanceFilterNone: CLLocationDistance; cvar; external;
  kCLLocationAccuracyBestForNavigation: CLLocationAccuracy { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
  kCLLocationAccuracyBest: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyNearestTenMeters: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyHundredMeters: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyKilometer: CLLocationAccuracy; cvar; external;
  kCLLocationAccuracyThreeKilometers: CLLocationAccuracy; cvar; external;
  CLLocationDistanceMax: CLLocationDistance { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  CLTimeIntervalMax: NSTimeInterval { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  kCLLocationCoordinate2DInvalid: CLLocationCoordinate2D { available starting in __MAC_10_7,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CLFloor = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function level: NSInteger; message 'level';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  CLLocation = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: id;
  public
    function initWithLatitude_longitude (latitude: CLLocationDegrees; longitude: CLLocationDegrees): instancetype; message 'initWithLatitude:longitude:';
    function initWithCoordinate_altitude_horizontalAccuracy_verticalAccuracy_timestamp (coordinate: CLLocationCoordinate2D; altitude: CLLocationDistance; hAccuracy: CLLocationAccuracy; vAccuracy: CLLocationAccuracy; timestamp: NSDate): instancetype; message 'initWithCoordinate:altitude:horizontalAccuracy:verticalAccuracy:timestamp:';
    function initWithCoordinate_altitude_horizontalAccuracy_verticalAccuracy_course_speed_timestamp (coordinate: CLLocationCoordinate2D; altitude: CLLocationDistance; hAccuracy: CLLocationAccuracy; vAccuracy: CLLocationAccuracy; course: CLLocationDirection; speed: CLLocationSpeed; timestamp: NSDate): instancetype; message 'initWithCoordinate:altitude:horizontalAccuracy:verticalAccuracy:course:speed:timestamp:'; { available starting in __MAC_10_7,__IPHONE_4_2 }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function altitude: CLLocationDistance; message 'altitude';
    function horizontalAccuracy: CLLocationAccuracy; message 'horizontalAccuracy';
    function verticalAccuracy: CLLocationAccuracy; message 'verticalAccuracy';
    function course: CLLocationDirection; message 'course';
    function speed: CLLocationSpeed; message 'speed';
    function timestamp: NSDate; message 'timestamp';
    function floor: CLFloor; message 'floor';
    function description: NSString; message 'description';
    function getDistanceFrom (location: CLLocation): CLLocationDistance; message 'getDistanceFrom:'; deprecated 'in __MAC_NA,__MAC_NA,__IPHONE_2_0,__IPHONE_3_2';
    function distanceFromLocation (location: CLLocation): CLLocationDistance; message 'distanceFromLocation:'; { available starting in __MAC_10_6,__IPHONE_3_2 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

