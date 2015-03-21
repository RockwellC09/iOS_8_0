{ Parsed from MapKit.framework (iPhoneOS8.2) MKLocalSearch.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  MKLocalSearchPtr = ^MKLocalSearch;
{$endif}

{$ifdef TYPES}
type
  MKLocalSearchCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearch = objcclass external (NSObject)
  public
    function initWithRequest (request: MKLocalSearchRequest): instancetype; message 'initWithRequest:'; { NS_DESIGNATED_INITIALIZER }
    procedure startWithCompletionHandler (completionHandler: MKLocalSearchCompletionHandler); message 'startWithCompletionHandler:';
    procedure cancel; message 'cancel';
    function isSearching: boolean; message 'isSearching';
  end;
{$endif}

