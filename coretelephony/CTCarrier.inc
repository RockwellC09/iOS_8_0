{ Parsed from CoreTelephony.framework (iPhoneOS8.2) CTCarrier.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CTCarrierPtr = ^CTCarrier;
{$endif}

{$ifdef CLASSES}

type
  CTCarrier = objcclass external (NSObject)
  public
    function carrierName: NSString; message 'carrierName';
    function mobileCountryCode: NSString; message 'mobileCountryCode';
    function mobileNetworkCode: NSString; message 'mobileNetworkCode';
    function isoCountryCode: NSString; message 'isoCountryCode';
    function allowsVOIP: boolean; message 'allowsVOIP';
  end;
{$endif}

