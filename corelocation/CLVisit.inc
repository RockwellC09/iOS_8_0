{ Parsed from CoreLocation.framework (iPhoneOS8.2) CLVisit.h }
{ Created on Fri Mar 20 2:11:06 2015 }


{$ifdef TYPES}
type
  CLVisitPtr = ^CLVisit;
{$endif}

{$ifdef CLASSES}

type
  CLVisit = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function arrivalDate: NSDate; message 'arrivalDate';
    function departureDate: NSDate; message 'departureDate';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    function horizontalAccuracy: CLLocationAccuracy; message 'horizontalAccuracy';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

