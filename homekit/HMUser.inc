{ Parsed from HomeKit.framework (iPhoneOS8.2) HMUser.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMUserPtr = ^HMUser;
{$endif}

{$ifdef CLASSES}

type
  HMUser = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
  end;
{$endif}

