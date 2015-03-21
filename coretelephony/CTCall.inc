{ Parsed from CoreTelephony.framework (iPhoneOS8.2) CTCall.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CTCallPtr = ^CTCall;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CTCallStateDialing: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  CTCallStateIncoming: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  CTCallStateConnected: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  CTCallStateDisconnected: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CTCall = objcclass external (NSObject)
  private
    _callState: NSString;
    _callID: NSString;
  public
    function callState: NSString; message 'callState';
    function callID: NSString; message 'callID';
  end;
{$endif}

