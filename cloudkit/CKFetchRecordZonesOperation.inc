{ Parsed from CloudKit.framework (iPhoneOS8.2) CKFetchRecordZonesOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKFetchRecordZonesOperationPtr = ^CKFetchRecordZonesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordZonesOperation = objcclass external (CKDatabaseOperation)
  public
    class function fetchAllRecordZonesOperation: instancetype; message 'fetchAllRecordZonesOperation';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordZoneIDs (zoneIDs: NSArray): instancetype; message 'initWithRecordZoneIDs:';
    procedure setRecordZoneIDs(newValue: NSArray); message 'setRecordZoneIDs:';
    function recordZoneIDs: NSArray; message 'recordZoneIDs';
    procedure setFetchRecordZonesCompletionBlock(newValue: OpaqueCBlock); message 'setFetchRecordZonesCompletionBlock:';
    function fetchRecordZonesCompletionBlock: OpaqueCBlock; message 'fetchRecordZonesCompletionBlock';
  end;
{$endif}

