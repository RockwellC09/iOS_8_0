{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMMagnetometer.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMMagnetometerDataPtr = ^CMMagnetometerData;
{$endif}

{$ifdef TYPES}
type
  CMMagneticField = record
    x: double;
    y: double;
    z: double;
  end;
type
  CMMagneticFieldPtr = ^CMMagneticField;
{$endif}

{$ifdef CLASSES}

type
  CMMagnetometerData = objcclass external (CMLogItem)
  private
    _internal: id;
  public
    function magneticField: CMMagneticField; message 'magneticField';
  end;
{$endif}

