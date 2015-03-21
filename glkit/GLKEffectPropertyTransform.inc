{ Parsed from GLKit.framework (iPhoneOS8.2) GLKEffectPropertyTransform.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  GLKEffectPropertyTransformPtr = ^GLKEffectPropertyTransform;
{$endif}

{$ifdef CLASSES}

type
  GLKEffectPropertyTransform = objcclass external (GLKEffectProperty)
  private
    _modelviewMatrix, _projectionMatrix: GLKMatrix4;
    _normalMatrix: GLKMatrix3;
  public
    procedure setModelviewMatrix(newValue: GLKMatrix4); message 'setModelviewMatrix:';
    function modelviewMatrix: GLKMatrix4; message 'modelviewMatrix';
    procedure setProjectionMatrix(newValue: GLKMatrix4); message 'setProjectionMatrix:';
    function projectionMatrix: GLKMatrix4; message 'projectionMatrix';
    function normalMatrix: GLKMatrix3; message 'normalMatrix';
  end;
{$endif}

