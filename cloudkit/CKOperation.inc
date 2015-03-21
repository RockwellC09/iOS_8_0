{ Parsed from CloudKit.framework (iPhoneOS8.2) CKOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKOperationPtr = ^CKOperation;
{$endif}

{$ifdef CLASSES}

type
  CKOperation = objcclass external (NSOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setContainer(newValue: CKContainer); message 'setContainer:';
    function container: CKContainer; message 'container';
    procedure setUsesBackgroundSession(newValue: boolean); message 'setUsesBackgroundSession:';
    function usesBackgroundSession: boolean; message 'usesBackgroundSession';
    procedure setAllowsCellularAccess(newValue: boolean); message 'setAllowsCellularAccess:';
    function allowsCellularAccess: boolean; message 'allowsCellularAccess';
  end;
{$endif}

