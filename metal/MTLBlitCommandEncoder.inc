{ Parsed from Metal.framework (iPhoneOS8.2) MTLBlitCommandEncoder.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLBlitCommandEncoderProtocolPtr = ^MTLBlitCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLBlitCommandEncoderProtocol = objcprotocol external name 'MTLBlitCommandEncoder' (MTLCommandEncoderProtocol)
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toTexture_destinationSlice_destinationLevel_destinationOrigin (sourceTexture: MTLTextureProtocol; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationTexture: MTLTextureProtocol; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:';
    procedure copyFromBuffer_sourceOffset_sourceBytesPerRow_sourceBytesPerImage_sourceSize_toTexture_destinationSlice_destinationLevel_destinationOrigin (sourceBuffer: MTLBufferProtocol; sourceOffset: NSUInteger; sourceBytesPerRow: NSUInteger; sourceBytesPerImage: NSUInteger; sourceSize: MTLSize; destinationTexture: MTLTextureProtocol; destinationSlice: NSUInteger; destinationLevel: NSUInteger; destinationOrigin: MTLOrigin); message 'copyFromBuffer:sourceOffset:sourceBytesPerRow:sourceBytesPerImage:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:';
    procedure copyFromTexture_sourceSlice_sourceLevel_sourceOrigin_sourceSize_toBuffer_destinationOffset_destinationBytesPerRow_destinationBytesPerImage (sourceTexture: MTLTextureProtocol; sourceSlice: NSUInteger; sourceLevel: NSUInteger; sourceOrigin: MTLOrigin; sourceSize: MTLSize; destinationBuffer: MTLBufferProtocol; destinationOffset: NSUInteger; destinationBytesPerRow: NSUInteger; destinationBytesPerImage: NSUInteger); message 'copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toBuffer:destinationOffset:destinationBytesPerRow:destinationBytesPerImage:';
    procedure generateMipmapsForTexture (texture: MTLTextureProtocol); message 'generateMipmapsForTexture:';
    procedure fillBuffer_range_value (buffer: MTLBufferProtocol; range: NSRange; value: cuint8); message 'fillBuffer:range:value:';
    procedure copyFromBuffer_sourceOffset_toBuffer_destinationOffset_size (sourceBuffer: MTLBufferProtocol; sourceOffset: NSUInteger; destinationBuffer: MTLBufferProtocol; destinationOffset: NSUInteger; size: NSUInteger); message 'copyFromBuffer:sourceOffset:toBuffer:destinationOffset:size:';
  end;
{$endif}

