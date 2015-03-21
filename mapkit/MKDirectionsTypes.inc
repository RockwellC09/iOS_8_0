{ Parsed from MapKit.framework (iPhoneOS8.2) MKDirectionsTypes.h }
{ Created on Fri Mar 20 2:11:37 2015 }

{$ifdef TYPES}
type
  MKDirectionsTransportType = NSUInteger;
  MKDirectionsTransportTypePtr = ^MKDirectionsTransportType;

const
  MKDirectionsTransportTypeAutomobile = 1 shl 0;
  MKDirectionsTransportTypeWalking = 1 shl 1;
  MKDirectionsTransportTypeAny = $0FFFFFFF;
{$endif}

