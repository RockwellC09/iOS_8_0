{ Parsed from SpriteKit.framework (iPhoneOS8.2) SKMutableTexture.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  SKMutableTexturePtr = ^SKMutableTexture;
{$endif}

{$ifdef CLASSES}

type
  SKMutableTexture = objcclass external (SKTexture)
  public
    function initWithSize (size_: CGSize): instancetype; message 'initWithSize:';
    class function mutableTextureWithSize (size_: CGSize): instancetype; message 'mutableTextureWithSize:';
    function initWithSize_pixelFormat (size_: CGSize; format: cint): instancetype; message 'initWithSize:pixelFormat:';
    procedure modifyPixelDataWithBlock (block: OpaqueCBlock); message 'modifyPixelDataWithBlock:';
  end;
{$endif}

