{ Parsed from CloudKit.framework (iPhoneOS8.2) CKModifySubscriptionsOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKModifySubscriptionsOperationPtr = ^CKModifySubscriptionsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifySubscriptionsOperation = objcclass external (CKDatabaseOperation)
  public
    function initWithSubscriptionsToSave_subscriptionIDsToDelete (subscriptionsToSave: NSArray; subscriptionIDsToDelete: NSArray): instancetype; message 'initWithSubscriptionsToSave:subscriptionIDsToDelete:'; { NS_DESIGNATED_INITIALIZER }
    procedure setSubscriptionsToSave(newValue: NSArray); message 'setSubscriptionsToSave:';
    function subscriptionsToSave: NSArray; message 'subscriptionsToSave';
    procedure setSubscriptionIDsToDelete(newValue: NSArray); message 'setSubscriptionIDsToDelete:';
    function subscriptionIDsToDelete: NSArray; message 'subscriptionIDsToDelete';
    procedure setModifySubscriptionsCompletionBlock(newValue: OpaqueCBlock); message 'setModifySubscriptionsCompletionBlock:';
    function modifySubscriptionsCompletionBlock: OpaqueCBlock; message 'modifySubscriptionsCompletionBlock';
  end;
{$endif}

