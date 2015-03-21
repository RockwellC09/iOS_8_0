{ Parsed from CloudKit.framework (iPhoneOS8.2) CKDatabaseOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKDatabaseOperationPtr = ^CKDatabaseOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDatabaseOperation = objcclass external (CKOperation)
  public
    procedure setDatabase(newValue: CKDatabase); message 'setDatabase:';
    function database: CKDatabase; message 'database';
  end;
{$endif}

