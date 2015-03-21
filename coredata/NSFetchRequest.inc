{ Parsed from CoreData.framework (iPhoneOS8.2) NSFetchRequest.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSFetchRequestPtr = ^NSFetchRequest;
{$endif}

{$ifdef TYPES}
type
  NSFetchRequestResultType = NSUInteger;
  NSFetchRequestResultTypePtr = ^NSFetchRequestResultType;

const
  NSManagedObjectResultType = $00;
  NSManagedObjectIDResultType = $01;
  NSDictionaryResultType = $02 { available in 10_6,3_0 };
  NSCountResultType = $04 { available in 10_6,3_0 };
{$endif}

{$ifdef CLASSES}

type
  NSFetchRequest = objcclass external (NSPersistentStoreRequest, NSCodingProtocol)
  private
    _groupByProperties: NSArray;
    _havingPredicate: NSPredicate;
    _additionalPrivateIvars: idPtr;
    _valuesToFetch: NSArray;
    _entity: NSEntityDescription;
    _predicate: NSPredicate;
    _sortDescriptors: NSArray;
    _batchSize: NSUInteger;
    _fetchLimit: culong;
    _relationshipKeyPathsForPrefetching: NSArray;
    _fetchRequestFlags: bitpacked record
      case byte of
        0: (_anonBitField__fetchRequestFlags0: cuint);
        1: (
          distinctValuesOnly: 0..1;
          includesSubentities: 0..1;
          includesPropertyValues: 0..1;
          resultType: 0..((1 shl 3)-1);
          returnsObjectsAsFaults: 0..1;
          excludePendingChanges: 0..1;
          isInUse: 0..1;
          entityIsName: 0..1;
          refreshesRefetched: 0..1;
          propertiesValidated: 0..1;
          disableCaching: 0..1;
          _RESERVED: 0..((1 shl 19)-1);
        );
      end;
  public
    class function fetchRequestWithEntityName (entityName: NSString): NSFetchRequest; message 'fetchRequestWithEntityName:'; { available in 10_7, 4_0 }
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithEntityName (entityName: NSString): instancetype; message 'initWithEntityName:'; { available in 10_7, 4_0 }
    procedure setEntity(newValue: NSEntityDescription); message 'setEntity:';
    function entity: NSEntityDescription; message 'entity';
    function entityName: NSString; message 'entityName';
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setFetchLimit(newValue: NSUInteger); message 'setFetchLimit:';
    function fetchLimit: NSUInteger; message 'fetchLimit';
    procedure setAffectedStores(newValue: NSArray); message 'setAffectedStores:';
    function affectedStores: NSArray; message 'affectedStores';
    procedure setResultType(newValue: NSFetchRequestResultType); message 'setResultType:';
    function resultType: NSFetchRequestResultType; message 'resultType';
    procedure setIncludesSubentities(newValue: boolean); message 'setIncludesSubentities:';
    function includesSubentities: boolean; message 'includesSubentities';
    procedure setIncludesPropertyValues(newValue: boolean); message 'setIncludesPropertyValues:';
    function includesPropertyValues: boolean; message 'includesPropertyValues';
    procedure setReturnsObjectsAsFaults(newValue: boolean); message 'setReturnsObjectsAsFaults:';
    function returnsObjectsAsFaults: boolean; message 'returnsObjectsAsFaults';
    procedure setRelationshipKeyPathsForPrefetching(newValue: NSArray); message 'setRelationshipKeyPathsForPrefetching:';
    function relationshipKeyPathsForPrefetching: NSArray; message 'relationshipKeyPathsForPrefetching';
    procedure setIncludesPendingChanges(newValue: boolean); message 'setIncludesPendingChanges:';
    function includesPendingChanges: boolean; message 'includesPendingChanges';
    procedure setReturnsDistinctResults(newValue: boolean); message 'setReturnsDistinctResults:';
    function returnsDistinctResults: boolean; message 'returnsDistinctResults';
    procedure setPropertiesToFetch(newValue: NSArray); message 'setPropertiesToFetch:';
    function propertiesToFetch: NSArray; message 'propertiesToFetch';
    procedure setFetchOffset(newValue: NSUInteger); message 'setFetchOffset:';
    function fetchOffset: NSUInteger; message 'fetchOffset';
    procedure setFetchBatchSize(newValue: NSUInteger); message 'setFetchBatchSize:';
    function fetchBatchSize: NSUInteger; message 'fetchBatchSize';
    procedure setShouldRefreshRefetchedObjects(newValue: boolean); message 'setShouldRefreshRefetchedObjects:';
    function shouldRefreshRefetchedObjects: boolean; message 'shouldRefreshRefetchedObjects';
    procedure setPropertiesToGroupBy(newValue: NSArray); message 'setPropertiesToGroupBy:';
    function propertiesToGroupBy: NSArray; message 'propertiesToGroupBy';
    procedure setHavingPredicate(newValue: NSPredicate); message 'setHavingPredicate:';
    function havingPredicate: NSPredicate; message 'havingPredicate';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

