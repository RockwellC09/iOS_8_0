{ Parsed from SpriteKit.framework (iPhoneOS8.2) SKTransition.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  SKTransitionPtr = ^SKTransition;
{$endif}

{$ifdef TYPES}
type
  SKTransitionDirection = NSInteger;
  SKTransitionDirectionPtr = ^SKTransitionDirection;

const
  SKTransitionDirectionUp = 0;
  SKTransitionDirectionDown = 1;
  SKTransitionDirectionRight = 2;
  SKTransitionDirectionLeft = 3;
{$endif}

{$ifdef CLASSES}

type
  SKTransition = objcclass external (NSObject)
  public
    class function crossFadeWithDuration (sec: NSTimeInterval): SKTransition; message 'crossFadeWithDuration:';
    class function fadeWithDuration (sec: NSTimeInterval): SKTransition; message 'fadeWithDuration:';
    class function fadeWithColor_duration (color: SKColorPtr; sec: NSTimeInterval): SKTransition; message 'fadeWithColor:duration:';
    class function flipHorizontalWithDuration (sec: NSTimeInterval): SKTransition; message 'flipHorizontalWithDuration:';
    class function flipVerticalWithDuration (sec: NSTimeInterval): SKTransition; message 'flipVerticalWithDuration:';
    class function revealWithDirection_duration (direction: SKTransitionDirection; sec: NSTimeInterval): SKTransition; message 'revealWithDirection:duration:';
    class function moveInWithDirection_duration (direction: SKTransitionDirection; sec: NSTimeInterval): SKTransition; message 'moveInWithDirection:duration:';
    class function pushWithDirection_duration (direction: SKTransitionDirection; sec: NSTimeInterval): SKTransition; message 'pushWithDirection:duration:';
    class function doorsOpenHorizontalWithDuration (sec: NSTimeInterval): SKTransition; message 'doorsOpenHorizontalWithDuration:';
    class function doorsOpenVerticalWithDuration (sec: NSTimeInterval): SKTransition; message 'doorsOpenVerticalWithDuration:';
    class function doorsCloseHorizontalWithDuration (sec: NSTimeInterval): SKTransition; message 'doorsCloseHorizontalWithDuration:';
    class function doorsCloseVerticalWithDuration (sec: NSTimeInterval): SKTransition; message 'doorsCloseVerticalWithDuration:';
    class function doorwayWithDuration (sec: NSTimeInterval): SKTransition; message 'doorwayWithDuration:';
    class function transitionWithCIFilter_duration (filter: CIFilter; sec: NSTimeInterval): SKTransition; message 'transitionWithCIFilter:duration:';
    procedure setPausesIncomingScene(newValue: boolean); message 'setPausesIncomingScene:';
    function pausesIncomingScene: boolean; message 'pausesIncomingScene';
    procedure setPausesOutgoingScene(newValue: boolean); message 'setPausesOutgoingScene:';
    function pausesOutgoingScene: boolean; message 'pausesOutgoingScene';
  end;
{$endif}

