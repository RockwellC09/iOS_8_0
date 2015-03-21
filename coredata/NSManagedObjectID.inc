{ Parsed from CoreData.framework (iPhoneOS8.2) NSManagedObjectID.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSManagedObjectIDPtr = ^NSManagedObjectID;
{$endif}

{$ifdef CLASSES}

type
  NSManagedObjectID = objcclass external (NSObject, NSCopyingProtocol)
  private
  public
    function entity: NSEntityDescription; message 'entity';
    function persistentStore: NSPersistentStore; message 'persistentStore';
    function isTemporaryID: boolean; message 'isTemporaryID';
    function URIRepresentation: NSURL; message 'URIRepresentation';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

