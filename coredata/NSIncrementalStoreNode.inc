{ Parsed from CoreData.framework (iPhoneOS8.2) NSIncrementalStoreNode.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSIncrementalStoreNodePtr = ^NSIncrementalStoreNode;
{$endif}

{$ifdef CLASSES}

type
  NSIncrementalStoreNode = objcclass external (NSObject)
  private
    _objectID: NSManagedObjectID;
    _versionNumber: cuint64;
    _propertyCache: id;
    _reserved1: pointer;
  public
    function initWithObjectID_withValues_version (objectID: NSManagedObjectID; values: NSDictionary; version: cuint64): instancetype; message 'initWithObjectID:withValues:version:';
    procedure updateWithValues_version (values: NSDictionary; version: cuint64); message 'updateWithValues:version:';
    function objectID: NSManagedObjectID; message 'objectID';
    function version: cuint64; message 'version';
    function valueForPropertyDescription (prop: NSPropertyDescription): id; message 'valueForPropertyDescription:';
  end;
{$endif}

