{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNTechnique.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNTechniquePtr = ^SCNTechnique;
  SCNTechniqueSupportProtocolPtr = ^SCNTechniqueSupportProtocol;
{$endif}

{$ifdef CLASSES}

type
  SCNTechnique = objcclass external (NSObject, SCNAnimatableProtocol, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _reserved: id;
  public
    class function techniqueWithDictionary (dictionary: NSDictionary): SCNTechnique; message 'techniqueWithDictionary:';
    class function techniqueBySequencingTechniques (techniques: NSArray): SCNTechnique; message 'techniqueBySequencingTechniques:';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:';
    function dictionaryRepresentation: NSDictionary; message 'dictionaryRepresentation';

    { Adopted protocols }
    procedure addAnimation_forKey (animation: CAAnimation; key: NSString); message 'addAnimation:forKey:';
    function animationForKey (key: NSString): CAAnimation; message 'animationForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
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

{$ifdef PROTOCOLS}

type
  SCNTechniqueSupportProtocol = objcprotocol external name 'SCNTechniqueSupport' (NSObjectProtocol)
    procedure setTechnique(newValue: SCNTechnique); message 'setTechnique:';
    function technique: SCNTechnique; message 'technique';
  end;
{$endif}

