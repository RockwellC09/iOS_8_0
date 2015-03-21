{ Parsed from CoreData.framework (iPhoneOS8.2) NSFetchedResultsController.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{ Types from NSFetchedResultsControllerDelegateProtocol }
{$ifdef TYPES}

type
  NSFetchedResultsChangeType = NSUInteger;
type
  NSFetchedResultsChangeTypePtr = ^NSFetchedResultsChangeType;

const
  NSFetchedResultsChangeInsert = 1;
  NSFetchedResultsChangeDelete = 2;
  NSFetchedResultsChangeMove = 3;
  NSFetchedResultsChangeUpdate = 4;
{$endif}


{$ifdef TYPES}
type
  NSFetchedResultsControllerPtr = ^NSFetchedResultsController;
  NSFetchedResultsSectionInfoProtocolPtr = ^NSFetchedResultsSectionInfoProtocol;
  NSFetchedResultsControllerDelegateProtocolPtr = ^NSFetchedResultsControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSFetchedResultsController = objcclass external (NSObject)
  private
    _fetchRequest: NSFetchRequest;
    _managedObjectContext: NSManagedObjectContext;
    _sectionNameKeyPath: NSString;
    _sectionNameKey: NSString;
    _cacheName: NSString;
    _cache: pointer;
    _fetchResultsControllerFlags: bitpacked record
      case byte of
        0: (_anonBitField__fetchResultsControllerFlags0: cuint);
        1: (
          _sendObjectChangeNotifications: 0..1;
          _sendSectionChangeNotifications: 0..1;
          _sendDidChangeContentNotifications: 0..1;
          _sendWillChangeContentNotifications: 0..1;
          _sendSectionIndexTitleForSectionName: 0..1;
          _changedResultsSinceLastSave: 0..1;
          _hasMutableFetchedResults: 0..1;
          _hasBatchedArrayResults: 0..1;
          _hasSections: 0..1;
          _usesNonpersistedProperties: 0..1;
          _includesSubentities: 0..1;
          _reservedFlags: 0..((1 shl 21)-1);
        );
      end;
    _delegate: id;
    _sortKeys: id;
    _fetchedObjects: id;
    _sections: id;
    _sectionsByName: id;
    _sectionIndexTitles: id;
    _sectionIndexTitlesSections: id;
  public
    function initWithFetchRequest_managedObjectContext_sectionNameKeyPath_cacheName (fetchRequest: NSFetchRequest; context: NSManagedObjectContext; sectionNameKeyPath: NSString; name: NSString): id; message 'initWithFetchRequest:managedObjectContext:sectionNameKeyPath:cacheName:';
    function performFetch (error: NSErrorPtr): boolean; message 'performFetch:';
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function sectionNameKeyPath: NSString; message 'sectionNameKeyPath';
    function cacheName: NSString; message 'cacheName';
    procedure setDelegate(newValue: NSFetchedResultsControllerDelegateProtocol); message 'setDelegate:';
    function delegate: NSFetchedResultsControllerDelegateProtocol; message 'delegate';
    class procedure deleteCacheWithName (name: NSString); message 'deleteCacheWithName:';
    function fetchedObjects: NSArray; message 'fetchedObjects';
    function objectAtIndexPath (indexPath: NSIndexPath): id; message 'objectAtIndexPath:';
    function indexPathForObject (object_: id): NSIndexPath; message 'indexPathForObject:';
    function sectionIndexTitleForSectionName (sectionName: NSString): NSString; message 'sectionIndexTitleForSectionName:';
    function sectionIndexTitles: NSArray; message 'sectionIndexTitles';
    function sections: NSArray; message 'sections';
    function sectionForSectionIndexTitle_atIndex (title: NSString; sectionIndex: NSInteger): NSInteger; message 'sectionForSectionIndexTitle:atIndex:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFetchedResultsSectionInfoProtocol = objcprotocol external name 'NSFetchedResultsSectionInfo'
    function name: NSString; message 'name';
    function indexTitle: NSString; message 'indexTitle';
    function numberOfObjects: NSUInteger; message 'numberOfObjects';
    function objects: NSArray; message 'objects';
  end;

type
  NSFetchedResultsControllerDelegateProtocol = objcprotocol external name 'NSFetchedResultsControllerDelegate'
  optional
    procedure controller_didChangeObject_atIndexPath_forChangeType_newIndexPath (controller: NSFetchedResultsController; anObject: id; indexPath: NSIndexPath; type_: NSFetchedResultsChangeType; newIndexPath: NSIndexPath); message 'controller:didChangeObject:atIndexPath:forChangeType:newIndexPath:';
  optional
    procedure controller_didChangeSection_atIndex_forChangeType (controller: NSFetchedResultsController; sectionInfo: NSFetchedResultsSectionInfoProtocol; sectionIndex: NSUInteger; type_: NSFetchedResultsChangeType); message 'controller:didChangeSection:atIndex:forChangeType:';
  optional
    procedure controllerWillChangeContent (controller: NSFetchedResultsController); message 'controllerWillChangeContent:';
  optional
    procedure controllerDidChangeContent (controller: NSFetchedResultsController); message 'controllerDidChangeContent:';
  optional
    function controller_sectionIndexTitleForSectionName (controller: NSFetchedResultsController; sectionName: NSString): NSString; message 'controller:sectionIndexTitleForSectionName:'; { available starting in __MAC_NA,__IPHONE_4_0 }
  end;
{$endif}

