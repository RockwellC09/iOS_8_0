{ Parsed from Metal.framework (iPhoneOS8.2) MTLRenderCommandEncoder.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLRenderCommandEncoderProtocolPtr = ^MTLRenderCommandEncoderProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLPrimitiveType = NSUInteger;
  MTLPrimitiveTypePtr = ^MTLPrimitiveType;

const
  MTLPrimitiveTypePoint = 0;
  MTLPrimitiveTypeLine = 1;
  MTLPrimitiveTypeLineStrip = 2;
  MTLPrimitiveTypeTriangle = 3;
  MTLPrimitiveTypeTriangleStrip = 4;

type
  MTLIndexType = NSUInteger;
  MTLIndexTypePtr = ^MTLIndexType;

const
  MTLIndexTypeUInt16 = 0;
  MTLIndexTypeUInt32 = 1;

type
  MTLVisibilityResultMode = NSUInteger;
  MTLVisibilityResultModePtr = ^MTLVisibilityResultMode;

const
  MTLVisibilityResultModeDisabled = 0;
  MTLVisibilityResultModeBoolean = 1;

type
  MTLScissorRect = record
    x, y, width, height: NSUInteger;
  end;
type
  MTLScissorRectPtr = ^MTLScissorRect;
type
  MTLViewport = record
    originX, originY, width, height, znear, zfar: double;
  end;
type
  MTLViewportPtr = ^MTLViewport;

type
  MTLCullMode = NSUInteger;
  MTLCullModePtr = ^MTLCullMode;

const
  MTLCullModeNone = 0;
  MTLCullModeFront = 1;
  MTLCullModeBack = 2;

type
  MTLWinding = NSUInteger;
  MTLWindingPtr = ^MTLWinding;

const
  MTLWindingClockwise = 0;
  MTLWindingCounterClockwise = 1;

type
  MTLTriangleFillMode = NSUInteger;
  MTLTriangleFillModePtr = ^MTLTriangleFillMode;

const
  MTLTriangleFillModeFill = 0;
  MTLTriangleFillModeLines = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLRenderCommandEncoderProtocol = objcprotocol external name 'MTLRenderCommandEncoder' (MTLCommandEncoderProtocol)
    procedure setRenderPipelineState (pipelineState: MTLRenderPipelineStateProtocol); message 'setRenderPipelineState:';
    procedure setVertexBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setVertexBuffer:offset:atIndex:';
    procedure setVertexBuffers_offsets_withRange (buffers: MTLBufferProtocol { variable size array of MTLBufferProtocol }; offsets: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setVertexBuffers:offsets:withRange:';
    procedure setVertexTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setVertexTexture:atIndex:';
    procedure setVertexTextures_withRange (textures: MTLTextureProtocol; range: NSRange); message 'setVertexTextures:withRange:';
    procedure setVertexSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setVertexSamplerState:atIndex:';
    procedure setVertexSamplerStates_withRange (samplers: MTLSamplerStateProtocol; range: NSRange); message 'setVertexSamplerStates:withRange:';
    procedure setVertexSamplerState_lodMinClamp_lodMaxClamp_atIndex (sampler: MTLSamplerStateProtocol; lodMinClamp: single; lodMaxClamp: single; index: NSUInteger); message 'setVertexSamplerState:lodMinClamp:lodMaxClamp:atIndex:';
    procedure setVertexSamplerStates_lodMinClamps_lodMaxClamps_withRange (samplers: MTLSamplerStateProtocol; lodMinClamps: psingle { variable size array of single }; lodMaxClamps: psingle { variable size array of single }; range: NSRange); message 'setVertexSamplerStates:lodMinClamps:lodMaxClamps:withRange:';
    procedure setViewport (viewport: MTLViewport); message 'setViewport:';
    procedure setFrontFacingWinding (frontFacingWinding: MTLWinding); message 'setFrontFacingWinding:';
    procedure setCullMode (cullMode: MTLCullMode); message 'setCullMode:';
    procedure setDepthBias_slopeScale_clamp (depthBias: single; slopeScale: single; clamp: single); message 'setDepthBias:slopeScale:clamp:';
    procedure setScissorRect (rect: MTLScissorRect); message 'setScissorRect:';
    procedure setTriangleFillMode (fillMode: MTLTriangleFillMode); message 'setTriangleFillMode:';
    procedure setFragmentBuffer_offset_atIndex (buffer: MTLBufferProtocol; offset: NSUInteger; index: NSUInteger); message 'setFragmentBuffer:offset:atIndex:';
    procedure setFragmentBuffers_offsets_withRange (buffers: MTLBufferProtocol; offset: NSUIntegerPtr { variable size array of NSUInteger }; range: NSRange); message 'setFragmentBuffers:offsets:withRange:';
    procedure setFragmentTexture_atIndex (texture: MTLTextureProtocol; index: NSUInteger); message 'setFragmentTexture:atIndex:';
    procedure setFragmentTextures_withRange (textures: MTLTextureProtocol; range: NSRange); message 'setFragmentTextures:withRange:';
    procedure setFragmentSamplerState_atIndex (sampler: MTLSamplerStateProtocol; index: NSUInteger); message 'setFragmentSamplerState:atIndex:';
    procedure setFragmentSamplerStates_withRange (samplers: MTLSamplerStateProtocol; range: NSRange); message 'setFragmentSamplerStates:withRange:';
    procedure setFragmentSamplerState_lodMinClamp_lodMaxClamp_atIndex (sampler: MTLSamplerStateProtocol; lodMinClamp: single; lodMaxClamp: single; index: NSUInteger); message 'setFragmentSamplerState:lodMinClamp:lodMaxClamp:atIndex:';
    procedure setFragmentSamplerStates_lodMinClamps_lodMaxClamps_withRange (samplers: MTLSamplerStateProtocol; lodMinClamps: psingle { variable size array of single }; lodMaxClamps: psingle { variable size array of single }; range: NSRange); message 'setFragmentSamplerStates:lodMinClamps:lodMaxClamps:withRange:';
    procedure setBlendColorRed_green_blue_alpha (red: single; green: single; blue: single; alpha: single); message 'setBlendColorRed:green:blue:alpha:';
    procedure setDepthStencilState (depthStencilState: MTLDepthStencilStateProtocol); message 'setDepthStencilState:';
    procedure setStencilReferenceValue (referenceValue: cuint32); message 'setStencilReferenceValue:';
    procedure setVisibilityResultMode_offset (mode: MTLVisibilityResultMode; offset: NSUInteger); message 'setVisibilityResultMode:offset:';
    procedure drawPrimitives_vertexStart_vertexCount_instanceCount (primitiveType: MTLPrimitiveType; vertexStart: NSUInteger; vertexCount: NSUInteger; instanceCount: NSUInteger); message 'drawPrimitives:vertexStart:vertexCount:instanceCount:';
    procedure drawPrimitives_vertexStart_vertexCount (primitiveType: MTLPrimitiveType; vertexStart: NSUInteger; vertexCount: NSUInteger); message 'drawPrimitives:vertexStart:vertexCount:';
    procedure drawIndexedPrimitives_indexCount_indexType_indexBuffer_indexBufferOffset_instanceCount (primitiveType: MTLPrimitiveType; indexCount: NSUInteger; indexType: MTLIndexType; indexBuffer: MTLBufferProtocol; indexBufferOffset: NSUInteger; instanceCount: NSUInteger); message 'drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount:';
    procedure drawIndexedPrimitives_indexCount_indexType_indexBuffer_indexBufferOffset (primitiveType: MTLPrimitiveType; indexCount: NSUInteger; indexType: MTLIndexType; indexBuffer: MTLBufferProtocol; indexBufferOffset: NSUInteger); message 'drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:';
  end;
{$endif}

