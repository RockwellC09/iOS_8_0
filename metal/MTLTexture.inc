{ Parsed from Metal.framework (iPhoneOS8.2) MTLTexture.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLTextureDescriptorPtr = ^MTLTextureDescriptor;
  MTLTextureProtocolPtr = ^MTLTextureProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLTextureType = NSUInteger;
  MTLTextureTypePtr = ^MTLTextureType;

const
  MTLTextureType1D = 0;
  MTLTextureType1DArray = 1;
  MTLTextureType2D = 2;
  MTLTextureType2DArray = 3;
  MTLTextureType2DMultisample = 4;
  MTLTextureTypeCube = 5;
  MTLTextureType3D = 7;
{$endif}

{$ifdef CLASSES}

type
  MTLTextureDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function texture2DDescriptorWithPixelFormat_width_height_mipmapped (pixelFormat: MTLPixelFormat; width: NSUInteger; height: NSUInteger; mipmapped: boolean): MTLTextureDescriptor; message 'texture2DDescriptorWithPixelFormat:width:height:mipmapped:';
    class function textureCubeDescriptorWithPixelFormat_size_mipmapped (pixelFormat: MTLPixelFormat; size: NSUInteger; mipmapped: boolean): MTLTextureDescriptor; message 'textureCubeDescriptorWithPixelFormat:size:mipmapped:';
    procedure setTextureType(newValue: MTLTextureType); message 'setTextureType:';
    function textureType: MTLTextureType; message 'textureType';
    procedure setPixelFormat(newValue: MTLPixelFormat); message 'setPixelFormat:';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    procedure setWidth(newValue: NSUInteger); message 'setWidth:';
    function width: NSUInteger; message 'width';
    procedure setHeight(newValue: NSUInteger); message 'setHeight:';
    function height: NSUInteger; message 'height';
    procedure setDepth(newValue: NSUInteger); message 'setDepth:';
    function depth: NSUInteger; message 'depth';
    procedure setMipmapLevelCount(newValue: NSUInteger); message 'setMipmapLevelCount:';
    function mipmapLevelCount: NSUInteger; message 'mipmapLevelCount';
    procedure setSampleCount(newValue: NSUInteger); message 'setSampleCount:';
    function sampleCount: NSUInteger; message 'sampleCount';
    procedure setArrayLength(newValue: NSUInteger); message 'setArrayLength:';
    function arrayLength: NSUInteger; message 'arrayLength';
    procedure setResourceOptions(newValue: MTLResourceOptions); message 'setResourceOptions:';
    function resourceOptions: MTLResourceOptions; message 'resourceOptions';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLTextureProtocol = objcprotocol external name 'MTLTexture' (MTLResourceProtocol)
    function rootResource: MTLResourceProtocol; message 'rootResource';
    function textureType: MTLTextureType; message 'textureType';
    function pixelFormat: MTLPixelFormat; message 'pixelFormat';
    function width: NSUInteger; message 'width';
    function height: NSUInteger; message 'height';
    function depth: NSUInteger; message 'depth';
    function mipmapLevelCount: NSUInteger; message 'mipmapLevelCount';
    function sampleCount: NSUInteger; message 'sampleCount';
    function arrayLength: NSUInteger; message 'arrayLength';
    function isFramebufferOnly: boolean; message 'isFramebufferOnly';
    procedure getBytes_bytesPerRow_bytesPerImage_fromRegion_mipmapLevel_slice (pixelBytes: pointer; bytesPerRow: NSUInteger; bytesPerImage: NSUInteger; region: MTLRegion; level: NSUInteger; slice: NSUInteger); message 'getBytes:bytesPerRow:bytesPerImage:fromRegion:mipmapLevel:slice:';
    procedure replaceRegion_mipmapLevel_slice_withBytes_bytesPerRow_bytesPerImage (region: MTLRegion; level: NSUInteger; slice: NSUInteger; pixelBytes: pointer; bytesPerRow: NSUInteger; bytesPerImage: NSUInteger); message 'replaceRegion:mipmapLevel:slice:withBytes:bytesPerRow:bytesPerImage:';
    procedure getBytes_bytesPerRow_fromRegion_mipmapLevel (pixelBytes: pointer; bytesPerRow: NSUInteger; region: MTLRegion; level: NSUInteger); message 'getBytes:bytesPerRow:fromRegion:mipmapLevel:';
    procedure replaceRegion_mipmapLevel_withBytes_bytesPerRow (region: MTLRegion; level: NSUInteger; pixelBytes: pointer; bytesPerRow: NSUInteger); message 'replaceRegion:mipmapLevel:withBytes:bytesPerRow:';
    function newTextureViewWithPixelFormat (pixelFormat_: MTLPixelFormat): MTLTextureProtocol; message 'newTextureViewWithPixelFormat:';
  end;
{$endif}

