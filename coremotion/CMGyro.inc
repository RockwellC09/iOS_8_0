{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMGyro.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMGyroDataPtr = ^CMGyroData;
{$endif}

{$ifdef TYPES}
type
  CMRotationRate = record
    x: double;
    y: double;
    z: double;
  end;
type
  CMRotationRatePtr = ^CMRotationRate;
{$endif}

{$ifdef CLASSES}

type
  CMGyroData = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function rotationRate: CMRotationRate; message 'rotationRate';
  end;
{$endif}

