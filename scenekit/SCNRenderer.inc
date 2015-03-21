{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNRenderer.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNRendererPtr = ^SCNRenderer;
{$endif}

{$ifdef CLASSES}

type
  SCNRenderer = objcclass external (NSObject, SCNSceneRendererProtocol, SCNTechniqueSupportProtocol)
  private
    _reserved: id;
  public
    class function rendererWithContext_options (context: pointer; options: NSDictionary): instancetype; message 'rendererWithContext:options:';
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure render; message 'render';
    procedure renderAtTime (time: CFTimeInterval); message 'renderAtTime:'; { available in 10_10, 8_0 }
    function nextFrameTime: CFTimeInterval; message 'nextFrameTime';

    { Adopted protocols }
    procedure setAutoenablesDefaultLighting(newValue: boolean); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: boolean; message 'autoenablesDefaultLighting';
    function context: pointer; message 'context';
    procedure setDelegate(newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function hitTest_options (thePoint: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): boolean; message 'isNodeInsideFrustum:withPointOfView:'; { available in 10_9, 8_0 }
    procedure setJitteringEnabled(newValue: boolean); message 'setJitteringEnabled:';
    function isJitteringEnabled: boolean; message 'isJitteringEnabled';
    procedure setLoops(newValue: boolean); message 'setLoops:';
    function loops: boolean; message 'loops';
    procedure setOverlaySKScene(newValue: SKScene); message 'setOverlaySKScene:';
    function overlaySKScene: SKScene; message 'overlaySKScene';
    procedure setPlaying(newValue: boolean); message 'setPlaying:';
    function isPlaying: boolean; message 'isPlaying';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    function prepareObject_shouldAbortBlock (object_: id; block: OpaqueCBlock): boolean; message 'prepareObject:shouldAbortBlock:'; { available in 10_9, 8_0 }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: OpaqueCBlock); message 'prepareObjects:withCompletionHandler:'; { available in 10_10, 8_0 }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in 10_9, 8_0 }
    procedure setSceneTime(newValue: NSTimeInterval); message 'setSceneTime:';
    function sceneTime: NSTimeInterval; message 'sceneTime';
    procedure setShowsStatistics(newValue: boolean); message 'setShowsStatistics:';
    function showsStatistics: boolean; message 'showsStatistics';
    procedure setTechnique(newValue: SCNTechnique); message 'setTechnique:';
    function technique: SCNTechnique; message 'technique';
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in 10_9, 8_0 }
  end;
{$endif}

