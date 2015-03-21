{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNMorpher.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNMorpherPtr = ^SCNMorpher;
{$endif}

{$ifdef TYPES}
type
  SCNMorpherCalculationMode = NSInteger;
  SCNMorpherCalculationModePtr = ^SCNMorpherCalculationMode;

const
  SCNMorpherCalculationModeNormalized = 0;
  SCNMorpherCalculationModeAdditive = 1;
{$endif}

{$ifdef CLASSES}

type
  SCNMorpher = objcclass external (NSObject, SCNAnimatableProtocol, NSSecureCodingProtocol)
  private
    _reserved: id;
  public
    procedure setTargets(newValue: NSArray); message 'setTargets:';
    function targets: NSArray; message 'targets';
    procedure setWeight_forTargetAtIndex (weight: CGFloat; targetIndex: NSUInteger); message 'setWeight:forTargetAtIndex:';
    function weightForTargetAtIndex (targetIndex: NSUInteger): CGFloat; message 'weightForTargetAtIndex:';
    procedure setCalculationMode(newValue: SCNMorpherCalculationMode); message 'setCalculationMode:';
    function calculationMode: SCNMorpherCalculationMode; message 'calculationMode';

    { Adopted protocols }
    procedure addAnimation_forKey (animation: CAAnimation; key: NSString); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): CAAnimation; message 'animationForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): boolean; message 'isAnimationForKeyPaused:'; { available in 10_9, 8_0 }
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; { available in 10_9, 8_0 }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; { available in 10_10, 8_0 }
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; { available in 10_9, 8_0 }
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

