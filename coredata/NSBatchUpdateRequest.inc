{ Parsed from CoreData.framework (iPhoneOS8.2) NSBatchUpdateRequest.h }
{ Created on Fri Mar 20 2:10:51 2015 }


{$ifdef TYPES}
type
  NSBatchUpdateRequestPtr = ^NSBatchUpdateRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBatchUpdateRequest = objcclass external (NSPersistentStoreRequest)
  private
    _entity: id;
    _predicate: NSPredicate;
    _requestFlags: bitpacked record
      case byte of
        0: (_anonBitField__requestFlags0: cuint);
        1: (
          includesSubentities: 0..1;
          resultType: 0..((1 shl 2)-1);
          entityIsName: 0..1;
          _RESERVED: 0..((1 shl 28)-1);
        );
      end;
    _columnsToUpdate: NSDictionary;
  public
    class function batchUpdateRequestWithEntityName (entityName: NSString): instancetype; message 'batchUpdateRequestWithEntityName:';
    function initWithEntityName (entityName: NSString): instancetype; message 'initWithEntityName:';
    function initWithEntity (entity: NSEntityDescription): instancetype; message 'initWithEntity:';
    function entityName: NSString; message 'entityName';
    function entity: NSEntityDescription; message 'entity';
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setIncludesSubentities(newValue: boolean); message 'setIncludesSubentities:';
    function includesSubentities: boolean; message 'includesSubentities';
    procedure setResultType(newValue: NSBatchUpdateRequestResultType); message 'setResultType:';
    function resultType: NSBatchUpdateRequestResultType; message 'resultType';
    procedure setPropertiesToUpdate(newValue: NSDictionary); message 'setPropertiesToUpdate:';
    function propertiesToUpdate: NSDictionary; message 'propertiesToUpdate';
  end;
{$endif}

