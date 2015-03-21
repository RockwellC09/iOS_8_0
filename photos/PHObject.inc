{ Parsed from Photos.framework (iPhoneOS8.2) PHObject.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHObjectPtr = ^PHObject;
  PHObjectPlaceholderPtr = ^PHObjectPlaceholder;
{$endif}

{$ifdef CLASSES}

type
  PHObject = objcclass external (NSObject, NSCopyingProtocol)
  public
    function localIdentifier: NSString; message 'localIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  PHObjectPlaceholder = objcclass external (PHObject)
  end;
{$endif}

