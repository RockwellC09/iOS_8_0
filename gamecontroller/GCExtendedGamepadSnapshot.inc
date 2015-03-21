{ Parsed from GameController.framework (iPhoneOS8.2) GCExtendedGamepadSnapshot.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  GCExtendedGamepadSnapshotPtr = ^GCExtendedGamepadSnapshot;
{$endif}

{$ifdef CLASSES}

type
  GCExtendedGamepadSnapshot = objcclass external (GCExtendedGamepad)
  public
    procedure setSnapshotData(newValue: NSData); message 'setSnapshotData:';
    function snapshotData: NSData; message 'snapshotData';
    function initWithSnapshotData (data: NSData): instancetype; message 'initWithSnapshotData:';
    function initWithController_snapshotData (controller__: GCController; data: NSData): instancetype; message 'initWithController:snapshotData:';
  end;
{$endif}

{$ifdef TYPES}
type
  GCExtendedGamepadSnapShotDataV100 = record
    version: cuint16;
    size: cuint16;
    dpadX: float_t;
    dpadY: float_t;
    buttonA: float_t;
    buttonB: float_t;
    buttonX: float_t;
    buttonY: float_t;
    leftShoulder: float_t;
    rightShoulder: float_t;
    leftThumbstickX: float_t;
    leftThumbstickY: float_t;
    rightThumbstickX: float_t;
    rightThumbstickY: float_t;
    leftTrigger: float_t;
    rightTrigger: float_t;
  end;
type
  GCExtendedGamepadSnapShotDataV100Ptr = ^GCExtendedGamepadSnapShotDataV100;
{$endif}

{$ifdef FUNCTIONS}
function GCExtendedGamepadSnapShotDataV100FromNSData(snapshotData: GCExtendedGamepadSnapShotDataV100Ptr; data: NSData): boolean; cdecl; external;
function NSDataFromGCExtendedGamepadSnapShotDataV100(snapshotData: GCExtendedGamepadSnapShotDataV100Ptr): NSData; cdecl; external;
{$endif}

