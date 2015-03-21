{ Parsed from SpriteKit.framework (iPhoneOS8.2) SKView.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{ Types from SKView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKViewPtr = ^SKView;
{$endif}

{$ifdef CLASSES}

type
  SKView = objcclass external (UIView)
  public
    procedure setPaused(newValue: boolean); message 'setPaused:';
    function isPaused: boolean; message 'isPaused';
    procedure setShowsFPS(newValue: boolean); message 'setShowsFPS:';
    function showsFPS: boolean; message 'showsFPS';
    procedure setShowsDrawCount(newValue: boolean); message 'setShowsDrawCount:';
    function showsDrawCount: boolean; message 'showsDrawCount';
    procedure setShowsNodeCount(newValue: boolean); message 'setShowsNodeCount:';
    function showsNodeCount: boolean; message 'showsNodeCount';
    procedure setShowsQuadCount(newValue: boolean); message 'setShowsQuadCount:';
    function showsQuadCount: boolean; message 'showsQuadCount';
    procedure setShowsPhysics(newValue: boolean); message 'setShowsPhysics:';
    function showsPhysics: boolean; message 'showsPhysics';
    procedure setShowsFields(newValue: boolean); message 'setShowsFields:';
    function showsFields: boolean; message 'showsFields';
    procedure setAsynchronous(newValue: boolean); message 'setAsynchronous:';
    function isAsynchronous: boolean; message 'isAsynchronous';
    procedure setAllowsTransparency(newValue: boolean); message 'setAllowsTransparency:';
    function allowsTransparency: boolean; message 'allowsTransparency';
    procedure setIgnoresSiblingOrder(newValue: boolean); message 'setIgnoresSiblingOrder:';
    function ignoresSiblingOrder: boolean; message 'ignoresSiblingOrder';
    procedure setShouldCullNonVisibleNodes(newValue: boolean); message 'setShouldCullNonVisibleNodes:';
    function shouldCullNonVisibleNodes: boolean; message 'shouldCullNonVisibleNodes';
    procedure setFrameInterval(newValue: NSInteger); message 'setFrameInterval:';
    function frameInterval: NSInteger; message 'frameInterval';
    procedure presentScene (scene: SKScene); message 'presentScene:';
    procedure presentScene_transition (scene: SKScene; transition: SKTransition); message 'presentScene:transition:';
    function scene: SKScene; message 'scene';
    function textureFromNode (node: SKNode): SKTexture; message 'textureFromNode:';
    function textureFromNode_crop (node: SKNode; crop: CGRect): SKTexture; message 'textureFromNode:crop:';
    function convertPoint_toScene (point: CGPoint; scene_: SKScene): CGPoint; message 'convertPoint:toScene:';
    function convertPoint_fromScene (point: CGPoint; scene_: SKScene): CGPoint; message 'convertPoint:fromScene:';
  end;
{$endif}

