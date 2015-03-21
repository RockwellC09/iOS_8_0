{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMMotionActivity.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMMotionActivityPtr = ^CMMotionActivity;
{$endif}

{$ifdef TYPES}
type
  CMMotionActivityConfidence = NSInteger;
  CMMotionActivityConfidencePtr = ^CMMotionActivityConfidence;

const
  CMMotionActivityConfidenceLow = 0;
  CMMotionActivityConfidenceMedium = 1;
  CMMotionActivityConfidenceHigh = 2;
{$endif}

{$ifdef CLASSES}

type
  CMMotionActivity = objcclass external (CMLogItem)
  public
    function confidence: CMMotionActivityConfidence; message 'confidence';
    function startDate: NSDate; message 'startDate';
    function unknown: boolean; message 'unknown';
    function stationary: boolean; message 'stationary';
    function walking: boolean; message 'walking';
    function running: boolean; message 'running';
    function automotive: boolean; message 'automotive';
    function cycling: boolean; message 'cycling';
  end;
{$endif}

