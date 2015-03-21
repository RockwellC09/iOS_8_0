{ Parsed from CloudKit.framework (iPhoneOS8.2) CKLocationSortDescriptor.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKLocationSortDescriptorPtr = ^CKLocationSortDescriptor;
{$endif}

{$ifdef CLASSES}

type
  CKLocationSortDescriptor = objcclass external (NSSortDescriptor, NSSecureCodingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithKey_relativeLocation (key: NSString; relativeLocation: CLLocation): instancetype; message 'initWithKey:relativeLocation:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function relativeLocation: CLLocation; message 'relativeLocation';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

