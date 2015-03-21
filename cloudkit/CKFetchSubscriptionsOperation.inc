{ Parsed from CloudKit.framework (iPhoneOS8.2) CKFetchSubscriptionsOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKFetchSubscriptionsOperationPtr = ^CKFetchSubscriptionsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchSubscriptionsOperation = objcclass external (CKDatabaseOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    class function fetchAllSubscriptionsOperation: instancetype; message 'fetchAllSubscriptionsOperation';
    function initWithSubscriptionIDs (subscriptionIDs: NSArray): instancetype; message 'initWithSubscriptionIDs:';
    procedure setSubscriptionIDs(newValue: NSArray); message 'setSubscriptionIDs:';
    function subscriptionIDs: NSArray; message 'subscriptionIDs';
    procedure setFetchSubscriptionCompletionBlock(newValue: OpaqueCBlock); message 'setFetchSubscriptionCompletionBlock:';
    function fetchSubscriptionCompletionBlock: OpaqueCBlock; message 'fetchSubscriptionCompletionBlock';
  end;
{$endif}

