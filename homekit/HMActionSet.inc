{ Parsed from HomeKit.framework (iPhoneOS8.2) HMActionSet.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMActionSetPtr = ^HMActionSet;
{$endif}

{$ifdef CLASSES}

type
  HMActionSet = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function actions: NSSet; message 'actions';
    function isExecuting: boolean; message 'isExecuting';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addAction_completionHandler (action: HMAction; completion: OpaqueCBlock); message 'addAction:completionHandler:';
    procedure removeAction_completionHandler (action: HMAction; completion: OpaqueCBlock); message 'removeAction:completionHandler:';
  end;
{$endif}

