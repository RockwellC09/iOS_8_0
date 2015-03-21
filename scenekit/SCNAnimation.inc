{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNAnimation.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNAnimationEventPtr = ^SCNAnimationEvent;
  SCNAnimatableProtocolPtr = ^SCNAnimatableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNAnimatableProtocol = objcprotocol external name 'SCNAnimatable' (NSObjectProtocol)
    procedure addAnimation_forKey (animation: CAAnimation; key: NSString); message 'addAnimation:forKey:';
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationForKey (key: NSString): CAAnimation; message 'animationForKey:';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; { available in 10_9, 8_0 }
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; { available in 10_9, 8_0 }
    function isAnimationForKeyPaused (key: NSString): boolean; message 'isAnimationForKeyPaused:'; { available in 10_9, 8_0 }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; { available in 10_10, 8_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  SceneKitAdditions = objccategory external (CAAnimation)
    procedure setUsesSceneTimeBase(newValue: boolean); message 'setUsesSceneTimeBase:';
    function usesSceneTimeBase: boolean; message 'usesSceneTimeBase';
    procedure setFadeInDuration(newValue: CGFloat); message 'setFadeInDuration:';
    function fadeInDuration: CGFloat; message 'fadeInDuration';
    procedure setFadeOutDuration(newValue: CGFloat); message 'setFadeOutDuration:';
    function fadeOutDuration: CGFloat; message 'fadeOutDuration';
    procedure setAnimationEvents(newValue: NSArray); message 'setAnimationEvents:';
    function animationEvents: NSArray; message 'animationEvents';
  end;
{$endif}

{$ifdef TYPES}
type
  SCNAnimationEventBlock = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  SCNAnimationEvent = objcclass external (NSObject)
  private
    _reserved: id;
  public
    class function animationEventWithKeyTime_block (time: CGFloat; eventBlock: SCNAnimationEventBlock): instancetype; message 'animationEventWithKeyTime:block:';
  end;
{$endif}

