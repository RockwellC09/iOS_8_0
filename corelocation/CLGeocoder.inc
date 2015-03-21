{ Parsed from CoreLocation.framework (iPhoneOS8.2) CLGeocoder.h }
{ Created on Fri Mar 20 2:11:06 2015 }


{$ifdef TYPES}
type
  CLGeocoderPtr = ^CLGeocoder;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CLGeocodeCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  CLGeocoder = objcclass external (NSObject)
  private
    _internal: CLGeocoderInternal;
  public
    function isGeocoding: boolean; message 'isGeocoding';
    procedure reverseGeocodeLocation_completionHandler (location: CLLocation; completionHandler: CLGeocodeCompletionHandler); message 'reverseGeocodeLocation:completionHandler:';
    procedure geocodeAddressDictionary_completionHandler (addressDictionary: NSDictionary; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressDictionary:completionHandler:';
    procedure geocodeAddressString_completionHandler (addressString: NSString; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressString:completionHandler:';
    procedure geocodeAddressString_inRegion_completionHandler (addressString: NSString; region: CLRegion; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressString:inRegion:completionHandler:';
    procedure cancelGeocode; message 'cancelGeocode';
  end;
{$endif}

{$endif}
