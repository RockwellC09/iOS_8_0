{ Parsed from HomeKit.framework (iPhoneOS8.2) HMRoom.h }
{ Created on Fri Mar 20 2:11:01 2015 }


{$ifdef TYPES}
type
  HMRoomPtr = ^HMRoom;
{$endif}

{$ifdef CLASSES}

type
  HMRoom = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function name: NSString; message 'name';
    function accessories: NSArray; message 'accessories';
    procedure updateName_completionHandler (name_: NSString; completion: OpaqueCBlock); message 'updateName:completionHandler:';
  end;
{$endif}

