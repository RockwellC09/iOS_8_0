{ Parsed from SpriteKit.framework (iPhoneOS8.2) SKCropNode.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  SKCropNodePtr = ^SKCropNode;
{$endif}

{$ifdef CLASSES}

type
  SKCropNode = objcclass external (SKNode)
  public
    procedure setMaskNode(newValue: SKNode); message 'setMaskNode:';
    function maskNode: SKNode; message 'maskNode';
  end;
{$endif}

