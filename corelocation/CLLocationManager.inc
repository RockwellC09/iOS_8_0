{ Parsed from CoreLocation.framework (iPhoneOS8.2) CLLocationManager.h }
{ Created on Fri Mar 20 2:11:06 2015 }


{$ifdef TYPES}
type
  CLLocationManagerPtr = ^CLLocationManager;
{$endif}

{$ifdef TYPES}
type
  CLDeviceOrientation = cint;
  CLDeviceOrientationPtr = ^CLDeviceOrientation;

const
  CLDeviceOrientationUnknown = 0;
  CLDeviceOrientationPortrait = 1;
  CLDeviceOrientationPortraitUpsideDown = 2;
  CLDeviceOrientationLandscapeLeft = 3;
  CLDeviceOrientationLandscapeRight = 4;
  CLDeviceOrientationFaceUp = 5;
  CLDeviceOrientationFaceDown = 6;

type
  CLAuthorizationStatus = cint;
  CLAuthorizationStatusPtr = ^CLAuthorizationStatus;

const
  kCLAuthorizationStatusNotDetermined = 0;
  kCLAuthorizationStatusRestricted = 1;
  kCLAuthorizationStatusDenied = 2;
  kCLAuthorizationStatusAuthorizedAlways = 3 { available in NA, 8_0 };
  kCLAuthorizationStatusAuthorizedWhenInUse = 4 { available in NA, 8_0 };
  kCLAuthorizationStatusAuthorized = kCLAuthorizationStatusAuthorizedAlways deprecated 'in 10_6, NA, 2_0, 8_0, "Use kCLAuthorizationStatusAuthorizedAlways"';

type
  CLActivityType = NSInteger;
  CLActivityTypePtr = ^CLActivityType;

const
  CLActivityTypeOther = 1;
  CLActivityTypeAutomotiveNavigation = 2;
  CLActivityTypeFitness = 3;
  CLActivityTypeOtherNavigation = 4;
{$endif}

{$ifdef CLASSES}

type
  CLLocationManager = objcclass external (NSObject)
  private
    _internal: id;
  public
    class function classLocationServicesEnabled: boolean; message 'locationServicesEnabled'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    class function classHeadingAvailable: boolean; message 'headingAvailable'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    class function significantLocationChangeMonitoringAvailable: boolean; message 'significantLocationChangeMonitoringAvailable'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    class function isMonitoringAvailableForClass (regionClass: pobjc_class): boolean; message 'isMonitoringAvailableForClass:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    class function regionMonitoringAvailable: boolean; message 'regionMonitoringAvailable'; deprecated 'in __MAC_10_7,__MAC_NA,__IPHONE_4_0,__IPHONE_7_0';
    class function regionMonitoringEnabled: boolean; message 'regionMonitoringEnabled'; deprecated 'in __MAC_NA, __MAC_NA,__IPHONE_4_0, __IPHONE_6_0';
    class function isRangingAvailable: boolean; message 'isRangingAvailable'; { available starting in __MAC_NA,__IPHONE_7_0 }
    class function authorizationStatus: CLAuthorizationStatus; message 'authorizationStatus'; { available starting in __MAC_10_7,__IPHONE_4_2 }
    procedure setDelegate(newValue: CLLocationManagerDelegateProtocol); message 'setDelegate:';
    function delegate: CLLocationManagerDelegateProtocol; message 'delegate';
    function locationServicesEnabled: boolean; message 'locationServicesEnabled';
    procedure setPurpose(newValue: NSString); message 'setPurpose:';
    function purpose: NSString; message 'purpose';
    procedure setActivityType(newValue: CLActivityType); message 'setActivityType:';
    function activityType: CLActivityType; message 'activityType';
    procedure setDistanceFilter(newValue: CLLocationDistance); message 'setDistanceFilter:';
    function distanceFilter: CLLocationDistance; message 'distanceFilter';
    procedure setDesiredAccuracy(newValue: CLLocationAccuracy); message 'setDesiredAccuracy:';
    function desiredAccuracy: CLLocationAccuracy; message 'desiredAccuracy';
    procedure setPausesLocationUpdatesAutomatically(newValue: boolean); message 'setPausesLocationUpdatesAutomatically:';
    function pausesLocationUpdatesAutomatically: boolean; message 'pausesLocationUpdatesAutomatically';
    function location: CLLocation; message 'location';
    function headingAvailable: boolean; message 'headingAvailable';
    procedure setHeadingFilter(newValue: CLLocationDegrees); message 'setHeadingFilter:';
    function headingFilter: CLLocationDegrees; message 'headingFilter';
    procedure setHeadingOrientation(newValue: CLDeviceOrientation); message 'setHeadingOrientation:';
    function headingOrientation: CLDeviceOrientation; message 'headingOrientation';
    function heading: CLHeading; message 'heading';
    function maximumRegionMonitoringDistance: CLLocationDistance; message 'maximumRegionMonitoringDistance';
    function monitoredRegions: NSSet; message 'monitoredRegions';
    function rangedRegions: NSSet; message 'rangedRegions';
    procedure requestWhenInUseAuthorization; message 'requestWhenInUseAuthorization'; { available starting in __MAC_NA, __IPHONE_8_0 }
    procedure requestAlwaysAuthorization; message 'requestAlwaysAuthorization'; { available starting in __MAC_NA, __IPHONE_8_0 }
    procedure startUpdatingLocation; message 'startUpdatingLocation';
    procedure stopUpdatingLocation; message 'stopUpdatingLocation';
    procedure startUpdatingHeading; message 'startUpdatingHeading'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure stopUpdatingHeading; message 'stopUpdatingHeading'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure dismissHeadingCalibrationDisplay; message 'dismissHeadingCalibrationDisplay'; { available starting in __MAC_NA,__IPHONE_3_0 }
    procedure startMonitoringSignificantLocationChanges; message 'startMonitoringSignificantLocationChanges'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    procedure stopMonitoringSignificantLocationChanges; message 'stopMonitoringSignificantLocationChanges'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    procedure startMonitoringForRegion_desiredAccuracy (region: CLRegion; accuracy: CLLocationAccuracy); message 'startMonitoringForRegion:desiredAccuracy:'; deprecated 'in __MAC_NA, __MAC_NA,__IPHONE_4_0, __IPHONE_6_0';
    procedure stopMonitoringForRegion (region: CLRegion); message 'stopMonitoringForRegion:'; { available starting in __MAC_10_7,__IPHONE_4_0 }
    procedure startMonitoringForRegion (region: CLRegion); message 'startMonitoringForRegion:'; { available starting in __MAC_TBD,__IPHONE_5_0 }
    procedure requestStateForRegion (region: CLRegion); message 'requestStateForRegion:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    procedure startRangingBeaconsInRegion (region: CLBeaconRegion); message 'startRangingBeaconsInRegion:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    procedure stopRangingBeaconsInRegion (region: CLBeaconRegion); message 'stopRangingBeaconsInRegion:'; { available starting in __MAC_NA,__IPHONE_7_0 }
    procedure allowDeferredLocationUpdatesUntilTraveled_timeout (distance: CLLocationDistance; timeout: NSTimeInterval); message 'allowDeferredLocationUpdatesUntilTraveled:timeout:'; { available starting in __MAC_NA,__IPHONE_6_0 }
    procedure disallowDeferredLocationUpdates; message 'disallowDeferredLocationUpdates'; { available starting in __MAC_NA,__IPHONE_6_0 }
    class function deferredLocationUpdatesAvailable: boolean; message 'deferredLocationUpdatesAvailable'; { available starting in __MAC_NA,__IPHONE_6_0 }
  end;
{$endif}

