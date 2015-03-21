{ Parsed from GLKit.framework (iPhoneOS8.2) GLKEffectPropertyMaterial.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  GLKEffectPropertyMaterialPtr = ^GLKEffectPropertyMaterial;
{$endif}

{$ifdef CLASSES}

type
  GLKEffectPropertyMaterial = objcclass external (GLKEffectProperty)
  private
    _ambientColor, _diffuseColor, _specularColor, _emissiveColor: GLKVector4;
    _shininess: GLfloat;
  public
    procedure setAmbientColor(newValue: GLKVector4); message 'setAmbientColor:';
    function ambientColor: GLKVector4; message 'ambientColor';
    procedure setDiffuseColor(newValue: GLKVector4); message 'setDiffuseColor:';
    function diffuseColor: GLKVector4; message 'diffuseColor';
    procedure setSpecularColor(newValue: GLKVector4); message 'setSpecularColor:';
    function specularColor: GLKVector4; message 'specularColor';
    procedure setEmissiveColor(newValue: GLKVector4); message 'setEmissiveColor:';
    function emissiveColor: GLKVector4; message 'emissiveColor';
    procedure setShininess(newValue: GLfloat); message 'setShininess:';
    function shininess: GLfloat; message 'shininess';
  end;
{$endif}

