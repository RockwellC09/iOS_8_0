{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMStepCounter.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMStepCounterPtr = ^CMStepCounter;
{$endif}

{$ifdef TYPES}
type
  CMStepQueryHandler = OpaqueCBlock;
  CMStepUpdateHandler = OpaqueCBlock deprecated 'in 7_0,8_0,"Use CMPedometer instead"';
{$endif}

{$ifdef CLASSES}

type
  CMStepCounter = objcclass external (NSObject)
  public
    class function isStepCountingAvailable: boolean; message 'isStepCountingAvailable';
    procedure queryStepCountStartingFrom_to_toQueue_withHandler (start: NSDate; end_: NSDate; queue: NSOperationQueue; handler: CMStepQueryHandler); message 'queryStepCountStartingFrom:to:toQueue:withHandler:';
    procedure startStepCountingUpdatesToQueue_updateOn_withHandler (queue: NSOperationQueue; stepCounts: NSInteger; handler: CMStepUpdateHandler); message 'startStepCountingUpdatesToQueue:updateOn:withHandler:';
    procedure stopStepCountingUpdates; message 'stopStepCountingUpdates';
  end;
{$endif}

