{ Parsed from AdSupport.framework (iPhoneOS8.2) ASIdentifierManager.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  ASIdentifierManagerPtr = ^ASIdentifierManager;
{$endif}

{$ifdef CLASSES}

type
  ASIdentifierManager = objcclass external (NSObject)
  public
    class function sharedManager: ASIdentifierManager; message 'sharedManager';
    function advertisingIdentifier: NSUUID; message 'advertisingIdentifier';
    function isAdvertisingTrackingEnabled: boolean; message 'isAdvertisingTrackingEnabled';
  end;
{$endif}

