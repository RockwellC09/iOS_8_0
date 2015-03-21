{ Parsed from GameController.framework (iPhoneOS8.2) GCGamepadSnapshot.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  GCGamepadSnapshotPtr = ^GCGamepadSnapshot;
{$endif}

{$ifdef CLASSES}

type
  GCGamepadSnapshot = objcclass external (GCGamepad)
  public
    procedure setSnapshotData(newValue: NSData); message 'setSnapshotData:';
    function snapshotData: NSData; message 'snapshotData';
    function initWithSnapshotData (data: NSData): instancetype; message 'initWithSnapshotData:';
    function initWithController_snapshotData (controller__: GCController; data: NSData): instancetype; message 'initWithController:snapshotData:';
  end;
{$endif}

{$ifdef TYPES}
type
  GCGamepadSnapShotDataV100 = record
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
  end;
type
  GCGamepadSnapShotDataV100Ptr = ^GCGamepadSnapShotDataV100;
{$endif}

{$ifdef FUNCTIONS}
function GCGamepadSnapShotDataV100FromNSData(snapshotData: GCGamepadSnapShotDataV100Ptr; data: NSData): boolean; cdecl; external;
function NSDataFromGCGamepadSnapShotDataV100(snapshotData: GCGamepadSnapShotDataV100Ptr): NSData; cdecl; external;
{$endif}

