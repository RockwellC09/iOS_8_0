{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMMotionActivityManager.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMMotionActivityManagerPtr = ^CMMotionActivityManager;
{$endif}

{$ifdef TYPES}
type
  CMMotionActivityHandler = OpaqueCBlock { available in NA,7_0 };
  CMMotionActivityQueryHandler = OpaqueCBlock { available in NA,7_0 };
{$endif}

{$ifdef CLASSES}

type
  CMMotionActivityManager = objcclass external (NSObject)
  public
    class function isActivityAvailable: boolean; message 'isActivityAvailable';
    procedure queryActivityStartingFromDate_toDate_toQueue_withHandler (start: NSDate; end_: NSDate; queue: NSOperationQueue; handler: CMMotionActivityQueryHandler); message 'queryActivityStartingFromDate:toDate:toQueue:withHandler:';
    procedure startActivityUpdatesToQueue_withHandler (queue: NSOperationQueue; handler: CMMotionActivityHandler); message 'startActivityUpdatesToQueue:withHandler:';
    procedure stopActivityUpdates; message 'stopActivityUpdates';
  end;
{$endif}

