{ Parsed from HomeKit.framework (iPhoneOS8.2) HMServiceGroup.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMServiceGroupPtr = ^HMServiceGroup;
{$endif}

{$ifdef CLASSES}

type
  HMServiceGroup = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function services: NSArray; message 'services';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addService_completionHandler (service: HMService; completion: OpaqueCBlock); message 'addService:completionHandler:';
    procedure removeService_completionHandler (service: HMService; completion: OpaqueCBlock); message 'removeService:completionHandler:';
  end;
{$endif}

