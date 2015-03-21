{ Parsed from IAd.framework (iPhoneOS8.2) ADClient.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  ADClientPtr = ^ADClient;
{$endif}

{$ifdef CLASSES}

type
  ADClient = objcclass external (NSObject)
  public
    class function sharedClient: ADClient; message 'sharedClient'; { available in 7_1 }
    procedure determineAppInstallationAttributionWithCompletionHandler (completionHandler: OpaqueCBlock); message 'determineAppInstallationAttributionWithCompletionHandler:'; { available in 7_1 }
    procedure lookupAdConversionDetails (completionHandler: OpaqueCBlock); message 'lookupAdConversionDetails:'; { available in 8_0 }
    procedure addClientToSegments_replaceExisting (segmentIdentifiers: NSArray; replaceExisting: boolean); message 'addClientToSegments:replaceExisting:'; { available in 8_0 }
  end;
{$endif}

