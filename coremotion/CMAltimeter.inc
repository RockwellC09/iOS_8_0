{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMAltimeter.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMAltimeterPtr = ^CMAltimeter;
{$endif}

{$ifdef TYPES}
type
  CMAltitudeHandler = OpaqueCBlock { available in NA,8_0 };
{$endif}

{$ifdef CLASSES}

type
  CMAltimeter = objcclass external (NSObject)
  public
    class function isRelativeAltitudeAvailable: boolean; message 'isRelativeAltitudeAvailable';
    procedure startRelativeAltitudeUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMAltitudeHandler); message 'startRelativeAltitudeUpdatesToQueue:withHandler:';
    procedure stopRelativeAltitudeUpdates; message 'stopRelativeAltitudeUpdates';
  end;
{$endif}

