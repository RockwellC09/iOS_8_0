{ Parsed from CloudKit.framework (iPhoneOS8.2) CKDiscoverUserInfosOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKDiscoverUserInfosOperationPtr = ^CKDiscoverUserInfosOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverUserInfosOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithEmailAddresses_userRecordIDs (emailAddresses: NSArray; userRecordIDs: NSArray): instancetype; message 'initWithEmailAddresses:userRecordIDs:';
    procedure setEmailAddresses(newValue: NSArray); message 'setEmailAddresses:';
    function emailAddresses: NSArray; message 'emailAddresses';
    procedure setUserRecordIDs(newValue: NSArray); message 'setUserRecordIDs:';
    function userRecordIDs: NSArray; message 'userRecordIDs';
    procedure setDiscoverUserInfosCompletionBlock(newValue: OpaqueCBlock); message 'setDiscoverUserInfosCompletionBlock:';
    function discoverUserInfosCompletionBlock: OpaqueCBlock; message 'discoverUserInfosCompletionBlock';
  end;
{$endif}

