{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMDeviceMotion.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMDeviceMotionPtr = ^CMDeviceMotion;
{$endif}

{$ifdef TYPES}
const
  CMMagneticFieldCalibrationAccuracyUncalibrated = -1;
  CMMagneticFieldCalibrationAccuracyLow = 0;
  CMMagneticFieldCalibrationAccuracyMedium = 1;
  CMMagneticFieldCalibrationAccuracyHigh = 2;
type
  CMMagneticFieldCalibrationAccuracy = clong;

type
  CMCalibratedMagneticField = record
    field: CMMagneticField;
    accuracy: CMMagneticFieldCalibrationAccuracy;
  end;
type
  CMCalibratedMagneticFieldPtr = ^CMCalibratedMagneticField;
{$endif}

{$ifdef CLASSES}

type
  CMDeviceMotion = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function attitude: CMAttitude; message 'attitude';
    function rotationRate: CMRotationRate; message 'rotationRate';
    function gravity: CMAcceleration; message 'gravity';
    function userAcceleration: CMAcceleration; message 'userAcceleration';
    function magneticField: CMCalibratedMagneticField; message 'magneticField';
  end;
{$endif}

