{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNPhysicsContact.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNPhysicsContactPtr = ^SCNPhysicsContact;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsContact = objcclass external (NSObject)
  private
    _reserved: id;
  public
    function nodeA: SCNNode; message 'nodeA';
    function nodeB: SCNNode; message 'nodeB';
    function contactPoint: SCNVector3; message 'contactPoint';
    function contactNormal: SCNVector3; message 'contactNormal';
    function collisionImpulse: CGFloat; message 'collisionImpulse';
    function penetrationDistance: CGFloat; message 'penetrationDistance';
  end;
{$endif}

