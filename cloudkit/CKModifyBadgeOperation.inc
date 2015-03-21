{ Parsed from CloudKit.framework (iPhoneOS8.2) CKModifyBadgeOperation.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKModifyBadgeOperationPtr = ^CKModifyBadgeOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifyBadgeOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithBadgeValue (badgeValue: NSUInteger): instancetype; message 'initWithBadgeValue:';
    procedure setBadgeValue(newValue: NSUInteger); message 'setBadgeValue:';
    function badgeValue: NSUInteger; message 'badgeValue';
    procedure setModifyBadgeCompletionBlock(newValue: OpaqueCBlock); message 'setModifyBadgeCompletionBlock:';
    function modifyBadgeCompletionBlock: OpaqueCBlock; message 'modifyBadgeCompletionBlock';
  end;
{$endif}

