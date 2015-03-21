{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMMotionManager.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMMotionManagerPtr = ^CMMotionManager;
{$endif}

{$ifdef TYPES}
type
  CMAccelerometerHandler = OpaqueCBlock;
  CMGyroHandler = OpaqueCBlock;
  CMDeviceMotionHandler = OpaqueCBlock;
  CMMagnetometerHandler = OpaqueCBlock { available in NA,5_0 };
{$endif}

{$ifdef CLASSES}

type
  CMMotionManager = objcclass external (NSObject)
  private
    _internal: id;
  public
    procedure setAccelerometerUpdateInterval(newValue: NSTimeInterval); message 'setAccelerometerUpdateInterval:';
    function accelerometerUpdateInterval: NSTimeInterval; message 'accelerometerUpdateInterval';
    function isAccelerometerAvailable: boolean; message 'isAccelerometerAvailable';
    function isAccelerometerActive: boolean; message 'isAccelerometerActive';
    function accelerometerData: CMAccelerometerData; message 'accelerometerData';
    procedure startAccelerometerUpdates; message 'startAccelerometerUpdates';
    procedure startAccelerometerUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMAccelerometerHandler); message 'startAccelerometerUpdatesToQueue:withHandler:';
    procedure stopAccelerometerUpdates; message 'stopAccelerometerUpdates';
    procedure setGyroUpdateInterval(newValue: NSTimeInterval); message 'setGyroUpdateInterval:';
    function gyroUpdateInterval: NSTimeInterval; message 'gyroUpdateInterval';
    function isGyroAvailable: boolean; message 'isGyroAvailable';
    function isGyroActive: boolean; message 'isGyroActive';
    function gyroData: CMGyroData; message 'gyroData';
    procedure startGyroUpdates; message 'startGyroUpdates';
    procedure startGyroUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMGyroHandler); message 'startGyroUpdatesToQueue:withHandler:';
    procedure stopGyroUpdates; message 'stopGyroUpdates';
    procedure setMagnetometerUpdateInterval(newValue: NSTimeInterval); message 'setMagnetometerUpdateInterval:';
    function magnetometerUpdateInterval: NSTimeInterval; message 'magnetometerUpdateInterval';
    function isMagnetometerAvailable: boolean; message 'isMagnetometerAvailable';
    function isMagnetometerActive: boolean; message 'isMagnetometerActive';
    function magnetometerData: CMMagnetometerData; message 'magnetometerData';
    procedure startMagnetometerUpdates; message 'startMagnetometerUpdates'; { available in NA,5_0 }
    procedure startMagnetometerUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMMagnetometerHandler); message 'startMagnetometerUpdatesToQueue:withHandler:'; { available in NA,5_0 }
    procedure stopMagnetometerUpdates; message 'stopMagnetometerUpdates'; { available in NA,5_0 }
    procedure setDeviceMotionUpdateInterval(newValue: NSTimeInterval); message 'setDeviceMotionUpdateInterval:';
    function deviceMotionUpdateInterval: NSTimeInterval; message 'deviceMotionUpdateInterval';
    class function availableAttitudeReferenceFrames: NSUInteger; message 'availableAttitudeReferenceFrames'; { available in NA,5_0 }
    function attitudeReferenceFrame: CMAttitudeReferenceFrame; message 'attitudeReferenceFrame';
    function isDeviceMotionAvailable: boolean; message 'isDeviceMotionAvailable';
    function isDeviceMotionActive: boolean; message 'isDeviceMotionActive';
    function deviceMotion: CMDeviceMotion; message 'deviceMotion';
    procedure startDeviceMotionUpdates; message 'startDeviceMotionUpdates';
    procedure startDeviceMotionUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMDeviceMotionHandler); message 'startDeviceMotionUpdatesToQueue:withHandler:';
    procedure startDeviceMotionUpdatesUsingReferenceFrame (referenceFrame: CMAttitudeReferenceFrame); message 'startDeviceMotionUpdatesUsingReferenceFrame:'; { available in NA,5_0 }
    procedure startDeviceMotionUpdatesUsingReferenceFrame_toQueue_withHandler (referenceFrame: CMAttitudeReferenceFrame; queue: NSOperationQueue; handler: CMDeviceMotionHandler); message 'startDeviceMotionUpdatesUsingReferenceFrame:toQueue:withHandler:'; { available in NA,5_0 }
    procedure stopDeviceMotionUpdates; message 'stopDeviceMotionUpdates';
    procedure setShowsDeviceMovementDisplay(newValue: boolean); message 'setShowsDeviceMovementDisplay:';
    function showsDeviceMovementDisplay: boolean; message 'showsDeviceMovementDisplay';
  end;
{$endif}

