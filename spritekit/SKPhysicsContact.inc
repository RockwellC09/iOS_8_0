{ Parsed from SpriteKit.framework (iPhoneOS8.2) SKPhysicsContact.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  SKPhysicsContactPtr = ^SKPhysicsContact;
{$endif}

{$ifdef CLASSES}

type
  SKPhysicsContact = objcclass external (NSObject)
  public
    function bodyA: SKPhysicsBody; message 'bodyA';
    function bodyB: SKPhysicsBody; message 'bodyB';
    function contactPoint: CGPoint; message 'contactPoint';
    function contactNormal: CGVector; message 'contactNormal';
    function collisionImpulse: CGFloat; message 'collisionImpulse';
  end;
{$endif}

