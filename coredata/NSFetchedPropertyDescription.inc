{ Parsed from CoreData.framework (iPhoneOS8.2) NSFetchedPropertyDescription.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSFetchedPropertyDescriptionPtr = ^NSFetchedPropertyDescription;
{$endif}

{$ifdef CLASSES}

type
  NSFetchedPropertyDescription = objcclass external (NSPropertyDescription)
  private
    _reserved5: pointer;
    _reserved6: pointer;
    _fetchRequest: NSFetchRequest;
    _lazyFetchRequestEntityName: NSString;
  public
    procedure setFetchRequest(newValue: NSFetchRequest); message 'setFetchRequest:';
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
  end;
{$endif}

