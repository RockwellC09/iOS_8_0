{ Parsed from CloudKit.framework (iPhoneOS8.2) CKFetchRecordsOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKFetchRecordsOperationPtr = ^CKFetchRecordsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchRecordsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordIDs (recordIDs: NSArray): instancetype; message 'initWithRecordIDs:';
    class function fetchCurrentUserRecordOperation: instancetype; message 'fetchCurrentUserRecordOperation';
    procedure setRecordIDs(newValue: NSArray); message 'setRecordIDs:';
    function recordIDs: NSArray; message 'recordIDs';
    procedure setDesiredKeys(newValue: NSArray); message 'setDesiredKeys:';
    function desiredKeys: NSArray; message 'desiredKeys';
    procedure setPerRecordProgressBlock(newValue: OpaqueCBlock); message 'setPerRecordProgressBlock:';
    function perRecordProgressBlock: OpaqueCBlock; message 'perRecordProgressBlock';
    procedure setPerRecordCompletionBlock(newValue: OpaqueCBlock); message 'setPerRecordCompletionBlock:';
    function perRecordCompletionBlock: OpaqueCBlock; message 'perRecordCompletionBlock';
    procedure setFetchRecordsCompletionBlock(newValue: OpaqueCBlock); message 'setFetchRecordsCompletionBlock:';
    function fetchRecordsCompletionBlock: OpaqueCBlock; message 'fetchRecordsCompletionBlock';
  end;
{$endif}

