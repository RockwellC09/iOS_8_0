{ Parsed from GLKit.framework (iPhoneOS8.2) GLKEffectProperty.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  GLKEffectPropertyPtr = ^GLKEffectProperty;
{$endif}

{$ifdef TYPES}
type
  GLKEffectPropertyPrvPtr = OpaqueType;
{$endif}

{$ifdef CLASSES}

type
  GLKEffectProperty = objcclass external (NSObject)
  private
    _location: GLint;
    _nameString: GLcharPtr;
    _prv: GLKEffectPropertyPrvPtr;
  end;
{$endif}

