{ Parsed from MapKit.framework (iPhoneOS8.2) MKLocalSearchResponse.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKLocalSearchResponsePtr = ^MKLocalSearchResponse;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchResponse = objcclass external (NSObject)
  public
    function mapItems: NSArray; message 'mapItems';
    function boundingRegion: MKCoordinateRegion; message 'boundingRegion';
  end;
{$endif}

