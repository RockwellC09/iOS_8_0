{ Parsed from StoreKit.framework (iPhoneOS8.2) SKRequest.h }
{ Created on Fri Mar 20 2:11:20 2015 }


{$ifdef TYPES}
type
  SKRequestPtr = ^SKRequest;
  SKRequestDelegateProtocolPtr = ^SKRequestDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  SKRequest = objcclass external (NSObject)
  private
    _requestInternal: id;
  public
    procedure setDelegate(newValue: SKRequestDelegateProtocol); message 'setDelegate:';
    function delegate: SKRequestDelegateProtocol; message 'delegate';
    procedure cancel; message 'cancel'; { available in 3_0 }
    procedure start; message 'start'; { available in 3_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKRequestDelegateProtocol = objcprotocol external name 'SKRequestDelegate' (NSObjectProtocol)
  optional
    procedure requestDidFinish (request: SKRequest); message 'requestDidFinish:'; { available in 3_0 }
    procedure request_didFailWithError (request: SKRequest; error: NSError); message 'request:didFailWithError:'; { available in 3_0 }
  end;
{$endif}

