{ Parsed from MapKit.framework (iPhoneOS8.2) MKLocalSearchRequest.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKLocalSearchRequestPtr = ^MKLocalSearchRequest;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchRequest = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setNaturalLanguageQuery(newValue: NSString); message 'setNaturalLanguageQuery:';
    function naturalLanguageQuery: NSString; message 'naturalLanguageQuery';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

