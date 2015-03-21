{ Parsed from HomeKit.framework (iPhoneOS8.2) HMZone.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMZonePtr = ^HMZone;
{$endif}

{$ifdef CLASSES}

type
  HMZone = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function rooms: NSArray; message 'rooms';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
    procedure addRoom_completionHandler (room: HMRoom; completion: OpaqueCBlock); message 'addRoom:completionHandler:';
    procedure removeRoom_completionHandler (room: HMRoom; completion: OpaqueCBlock); message 'removeRoom:completionHandler:';
  end;
{$endif}

