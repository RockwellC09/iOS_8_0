{ Parsed from PushKit.framework (iPhoneOS8.2) PKPushPayload.h }
{ Created on Fri Mar 20 2:11:15 2015 }


{$ifdef TYPES}
type
  PKPushPayloadPtr = ^PKPushPayload;
{$endif}

{$ifdef CLASSES}

type
  PKPushPayload = objcclass external (NSObject)
  public
    function type_: NSString; message 'type';
    function dictionaryPayload: NSDictionary; message 'dictionaryPayload';
  end;
{$endif}

