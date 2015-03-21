{ Parsed from CoreBluetooth.framework (iPhoneOS8.2) CBAttribute.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CBAttributePtr = ^CBAttribute;
{$endif}

{$ifdef CLASSES}

type
  CBAttribute = objcclass external (NSObject)
  public
    function UUID: CBUUID; message 'UUID';
  end;
{$endif}

