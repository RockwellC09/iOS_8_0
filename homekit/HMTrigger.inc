{ Parsed from HomeKit.framework (iPhoneOS8.2) HMTrigger.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMTriggerPtr = ^HMTrigger;
{$endif}

{$ifdef CLASSES}

type
  HMTrigger = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function isEnabled: boolean; message 'isEnabled';
    function actionSets: NSArray; message 'actionSets';
    function lastFireDate: NSDate; message 'lastFireDate';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addActionSet_completionHandler (actionSet: HMActionSet; completion: OpaqueCBlock); message 'addActionSet:completionHandler:';
    procedure removeActionSet_completionHandler (actionSet: HMActionSet; completion: OpaqueCBlock); message 'removeActionSet:completionHandler:';
    procedure enable_completionHandler (enable: boolean; completion: OpaqueCBlock); message 'enable:completionHandler:';
  end;
{$endif}

