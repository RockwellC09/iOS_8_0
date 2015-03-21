{ Parsed from PushKit.framework (iPhoneOS8.2) PKPushRegistry.h }
{ Created on Fri Mar 20 2:11:15 2015 }


{$ifdef TYPES}
type
  PKPushRegistryPtr = ^PKPushRegistry;
  PKPushRegistryDelegateProtocolPtr = ^PKPushRegistryDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPushTypeVoIP: NSString { available in 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PKPushRegistry = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: PKPushRegistryDelegateProtocol); message 'setDelegate:';
    function delegate: PKPushRegistryDelegateProtocol; message 'delegate';
    procedure setDesiredPushTypes(newValue: NSSet); message 'setDesiredPushTypes:';
    function desiredPushTypes: NSSet; message 'desiredPushTypes';
    function pushTokenForType (type_: NSString): NSData; message 'pushTokenForType:';
    function initWithQueue (queue: dispatch_queue_t): instancetype; message 'initWithQueue:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PKPushRegistryDelegateProtocol = objcprotocol external name 'PKPushRegistryDelegate' (NSObjectProtocol)
  required
    procedure pushRegistry_didUpdatePushCredentials_forType (registry: PKPushRegistry; credentials: PKPushCredentials; type_: NSString); message 'pushRegistry:didUpdatePushCredentials:forType:';
    procedure pushRegistry_didReceiveIncomingPushWithPayload_forType (registry: PKPushRegistry; payload: PKPushPayload; type_: NSString); message 'pushRegistry:didReceiveIncomingPushWithPayload:forType:';
  optional
    procedure pushRegistry_didInvalidatePushTokenForType (registry: PKPushRegistry; type_: NSString); message 'pushRegistry:didInvalidatePushTokenForType:';
  end;
{$endif}

