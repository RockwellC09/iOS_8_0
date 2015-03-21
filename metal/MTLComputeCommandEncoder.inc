{ Parsed from Metal.framework (iPhoneOS8.2) MTLComputeCommandEncoder.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLComputeCommandEncoderProtocolPtr = ^MTLComputeCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLComputeCommandEncoderProtocol = objcprotocol external name 'MTLComputeCommandEncoder' (MTLCommandEncoderProtocol)
    procedure setComputePipelineState (state: MTLComputePipelineStateProtocol); message 'setComputePipelineState:';
    procedure setBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setBuffer:offset:atIndex:';
    procedure setBuffers_offsets_withRange (buffers: MTLBufferProtocol; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setBuffers:offsets:withRange:';
    procedure setTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setTexture:atIndex:';
    procedure setTextures_withRange (textures: MTLTextureProtocol; range: NSRange); message 'setTextures:withRange:';
    procedure setSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setSamplerState:atIndex:';
    procedure setSamplerStates_withRange (samplers: MTLSamplerStateProtocol; range: NSRange); message 'setSamplerStates:withRange:';
    procedure setSamplerState_lodMinClamp_lodMaxClamp_atIndex (sampler: MTLSamplerStateProtocol; lodMinClamp: single; lodMaxClamp: single; index: NSUInteger); message 'setSamplerState:lodMinClamp:lodMaxClamp:atIndex:';
    procedure setSamplerStates_lodMinClamps_lodMaxClamps_withRange (samplers: MTLSamplerStateProtocol; lodMinClamps: psingle { variable size array of single }; lodMaxClamps: psingle { variable size array of single }; range: NSRange); message 'setSamplerStates:lodMinClamps:lodMaxClamps:withRange:';
    procedure setThreadgroupMemoryLength_atIndex (length: NSUInteger; index: NSUInteger); message 'setThreadgroupMemoryLength:atIndex:';
    procedure dispatchThreadgroups_threadsPerThreadgroup (threadgroupsPerGrid: MTLSize; threadsPerThreadgroup: MTLSize); message 'dispatchThreadgroups:threadsPerThreadgroup:';
  end;
{$endif}

