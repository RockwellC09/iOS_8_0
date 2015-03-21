{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMAccelerometer.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMAccelerometerDataPtr = ^CMAccelerometerData;
{$endif}

{$ifdef TYPES}
type
  CMAcceleration = record
    x: double;
    y: double;
    z: double;
  end;
type
  CMAccelerationPtr = ^CMAcceleration;
{$endif}

{$ifdef CLASSES}

type
  CMAccelerometerData = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function acceleration: CMAcceleration; message 'acceleration';
  end;
{$endif}

