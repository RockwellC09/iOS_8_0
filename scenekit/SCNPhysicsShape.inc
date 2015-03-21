{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNPhysicsShape.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNPhysicsShapePtr = ^SCNPhysicsShape;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNPhysicsShapeTypeKey: NSString; cvar; external;
  SCNPhysicsShapeTypeBoundingBox: NSString; cvar; external;
  SCNPhysicsShapeTypeConvexHull: NSString; cvar; external;
  SCNPhysicsShapeTypeConcavePolyhedron: NSString; cvar; external;
  SCNPhysicsShapeKeepAsCompoundKey: NSString; cvar; external;
  SCNPhysicsShapeScaleKey: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsShape = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _reserved: id;
  public
    class function shapeWithGeometry_options (geometry: SCNGeometry; options: NSDictionary): instancetype; message 'shapeWithGeometry:options:';
    class function shapeWithNode_options (node: SCNNode; options: NSDictionary): instancetype; message 'shapeWithNode:options:';
    class function shapeWithShapes_transforms (shapes: NSArray; transforms: NSArray): instancetype; message 'shapeWithShapes:transforms:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

