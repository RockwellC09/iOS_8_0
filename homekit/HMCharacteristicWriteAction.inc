{ Parsed from HomeKit.framework (iPhoneOS8.2) HMCharacteristicWriteAction.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMCharacteristicWriteActionPtr = ^HMCharacteristicWriteAction;
{$endif}

{$ifdef CLASSES}

type
  HMCharacteristicWriteAction = objcclass external (HMAction)
  public
    function init: instancetype; message 'init';
    function initWithCharacteristic_targetValue (characteristic: HMCharacteristic; targetValue: id): instancetype; message 'initWithCharacteristic:targetValue:'; { NS_DESIGNATED_INITIALIZER }
    function characteristic: HMCharacteristic; message 'characteristic';
    function targetValue: id; message 'targetValue';
    procedure updateTargetValue_completionHandler (targetValue_: id; completion: OpaqueCBlock); message 'updateTargetValue:completionHandler:';
  end;
{$endif}

