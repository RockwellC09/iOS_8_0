{ Parsed from UIKit.framework (iPhoneOS8.2) UINib.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UINibPtr = ^UINib;
{$endif}

{$ifdef CLASSES}

type
  UINib = objcclass external (NSObject)
  private
    storage: id;
  public
    class function nibWithNibName_bundle (name: NSString; bundleOrNil: NSBundle): UINib; message 'nibWithNibName:bundle:';
    class function nibWithData_bundle (data: NSData; bundleOrNil: NSBundle): UINib; message 'nibWithData:bundle:';
    function instantiateWithOwner_options (ownerOrNil: id; optionsOrNil: NSDictionary): NSArray; message 'instantiateWithOwner:options:';
  end;
{$endif}

