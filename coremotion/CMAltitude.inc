{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMAltitude.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMAltitudeDataPtr = ^CMAltitudeData;
{$endif}

{$ifdef CLASSES}

type
  CMAltitudeData = objcclass external (CMLogItem)
  public
    function relativeAltitude: NSNumber; message 'relativeAltitude';
    function pressure: NSNumber; message 'pressure';
  end;
{$endif}

