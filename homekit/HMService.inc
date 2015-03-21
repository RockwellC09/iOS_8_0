{ Parsed from HomeKit.framework (iPhoneOS8.2) HMService.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMServicePtr = ^HMService;
{$endif}

{$ifdef CLASSES}

type
  HMService = objcclass external (NSObject)
  public
    function accessory: HMAccessory; message 'accessory';
    function serviceType: NSString; message 'serviceType';
    function name: NSString; message 'name';
    function associatedServiceType: NSString; message 'associatedServiceType';
    function characteristics: NSArray; message 'characteristics';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure updateAssociatedServiceType_completionHandler (serviceType_: NSString; completion: OpaqueCBlock); message 'updateAssociatedServiceType:completionHandler:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  HMServiceTypeLightbulb: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeSwitch: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeThermostat: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeGarageDoorOpener: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeAccessoryInformation: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeFan: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeOutlet: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeLockMechanism: NSString { available in 8_0 }; cvar; external;
  HMServiceTypeLockManagement: NSString { available in 8_0 }; cvar; external;
{$endif}

