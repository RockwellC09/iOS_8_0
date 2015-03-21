{ Parsed from PushKit.framework (iPhoneOS8.2) PKPushCredentials.h }
{ Created on Fri Mar 20 2:11:15 2015 }


{$ifdef TYPES}
type
  PKPushCredentialsPtr = ^PKPushCredentials;
{$endif}

{$ifdef CLASSES}

type
  PKPushCredentials = objcclass external (NSObject)
  public
    function type_: NSString; message 'type';
    function token: NSData; message 'token';
  end;
{$endif}

