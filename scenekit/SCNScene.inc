{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNScene.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNScenePtr = ^SCNScene;
{$endif}

{$ifdef TYPES}
type
  SCNSceneExportProgressHandler = OpaqueCBlock;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneExportDestinationURL: NSString { available in 10_9, 8_0 }; cvar; external;
  SCNSceneStartTimeAttributeKey: NSString; cvar; external;
  SCNSceneEndTimeAttributeKey: NSString; cvar; external;
  SCNSceneFrameRateAttributeKey: NSString; cvar; external;
  SCNSceneUpAxisAttributeKey: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNScene = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _reserved: id;
  public
    class function scene: instancetype; message 'scene';
    function rootNode: SCNNode; message 'rootNode';
    function physicsWorld: SCNPhysicsWorld; message 'physicsWorld';
    function attributeForKey (key: NSString): id; message 'attributeForKey:';
    procedure setAttribute_forKey (attribute: id; key: NSString); message 'setAttribute:forKey:';
    function background: SCNMaterialProperty; message 'background';
    class function sceneNamed (name: NSString): instancetype; message 'sceneNamed:'; { available in 10_9, 8_0 }
    class function sceneNamed_inDirectory_options (name: NSString; directory: NSString; options: NSDictionary): instancetype; message 'sceneNamed:inDirectory:options:'; { available in 10_10, 8_0 }
    class function sceneWithURL_options_error (url: NSURL; options: NSDictionary; error: NSErrorPtr): instancetype; message 'sceneWithURL:options:error:';
    procedure setFogStartDistance(newValue: CGFloat); message 'setFogStartDistance:';
    function fogStartDistance: CGFloat; message 'fogStartDistance';
    procedure setFogEndDistance(newValue: CGFloat); message 'setFogEndDistance:';
    function fogEndDistance: CGFloat; message 'fogEndDistance';
    procedure setFogDensityExponent(newValue: CGFloat); message 'setFogDensityExponent:';
    function fogDensityExponent: CGFloat; message 'fogDensityExponent';
    procedure setFogColor(newValue: id); message 'setFogColor:';
    function fogColor: id; message 'fogColor';
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

