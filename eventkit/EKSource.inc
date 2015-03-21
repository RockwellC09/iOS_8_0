{ Parsed from EventKit.framework (iPhoneOS8.2) EKSource.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKSourcePtr = ^EKSource;
{$endif}

{$ifdef CLASSES}

type
  EKSource = objcclass external (EKObject)
  public
    function sourceIdentifier: NSString; message 'sourceIdentifier';
    function sourceType: EKSourceType; message 'sourceType';
    function title: NSString; message 'title';
    function calendars: NSSet; message 'calendars';
    function calendarsForEntityType (entityType: EKEntityType): NSSet; message 'calendarsForEntityType:'; { available starting in __MAC_10_8,__IPHONE_6_0 }
  end;
{$endif}

