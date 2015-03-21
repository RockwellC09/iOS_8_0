{ Parsed from CloudKit.framework (iPhoneOS8.2) CKDiscoverAllContactsOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKDiscoverAllContactsOperationPtr = ^CKDiscoverAllContactsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverAllContactsOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setDiscoverAllContactsCompletionBlock(newValue: OpaqueCBlock); message 'setDiscoverAllContactsCompletionBlock:';
    function discoverAllContactsCompletionBlock: OpaqueCBlock; message 'discoverAllContactsCompletionBlock';
  end;
{$endif}

