{ Parsed from QuartzCore.framework (iPhoneOS8.2) CADisplayLink.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  CADisplayLinkPtr = ^CADisplayLink;
{$endif}

{$ifdef CLASSES}

type
  CADisplayLink = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    class function displayLinkWithTarget_selector (target: id; sel_: SEL): CADisplayLink; message 'displayLinkWithTarget:selector:';
    procedure addToRunLoop_forMode (runloop: NSRunLoop; mode: NSString); message 'addToRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (runloop: NSRunLoop; mode: NSString); message 'removeFromRunLoop:forMode:';
    procedure invalidate; message 'invalidate';
    function timestamp: CFTimeInterval; message 'timestamp';
    function duration: CFTimeInterval; message 'duration';
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    procedure setFrameInterval(newValue: NSInteger); message 'setFrameInterval:';
    function frameInterval: NSInteger; message 'frameInterval';
  end;
{$endif}

