{ Parsed from Metal.framework (iPhoneOS8.2) MTLCommandBuffer.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLCommandBufferProtocolPtr = ^MTLCommandBufferProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLCommandBufferStatus = NSUInteger;
  MTLCommandBufferStatusPtr = ^MTLCommandBufferStatus;

const
  MTLCommandBufferStatusNotEnqueued = 0;
  MTLCommandBufferStatusEnqueued = 1;
  MTLCommandBufferStatusCommitted = 2;
  MTLCommandBufferStatusScheduled = 3;
  MTLCommandBufferStatusCompleted = 4;
  MTLCommandBufferStatusError = 5;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCommandBufferErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCommandBufferError = NSUInteger;
  MTLCommandBufferErrorPtr = ^MTLCommandBufferError;

const
  MTLCommandBufferErrorNone = 0;
  MTLCommandBufferErrorInternal = 1;
  MTLCommandBufferErrorTimeout = 2;
  MTLCommandBufferErrorPageFault = 3;
  MTLCommandBufferErrorBlacklisted = 4;
  MTLCommandBufferErrorNotPermitted = 7;
  MTLCommandBufferErrorOutOfMemory = 8;
  MTLCommandBufferErrorInvalidResource = 9;

type
  MTLCommandBufferHandler = OpaqueCBlock { available in 8_0 };
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandBufferProtocol = objcprotocol external name 'MTLCommandBuffer' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    function commandQueue: MTLCommandQueueProtocol; message 'commandQueue';
    function retainedReferences: boolean; message 'retainedReferences';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure enqueue; message 'enqueue';
    procedure commit; message 'commit';
    procedure addScheduledHandler (block: MTLCommandBufferHandler); message 'addScheduledHandler:';
    procedure presentDrawable (drawable: MTLDrawableProtocol); message 'presentDrawable:';
    procedure presentDrawable_atTime (drawable: MTLDrawableProtocol; presentationTime: CFTimeInterval); message 'presentDrawable:atTime:';
    procedure waitUntilScheduled; message 'waitUntilScheduled';
    procedure addCompletedHandler (block: MTLCommandBufferHandler); message 'addCompletedHandler:';
    procedure waitUntilCompleted; message 'waitUntilCompleted';
    function status: MTLCommandBufferStatus; message 'status';
    function error: NSError; message 'error';
    function blitCommandEncoder: MTLBlitCommandEncoderProtocol; message 'blitCommandEncoder';
    function renderCommandEncoderWithDescriptor (renderPassDescriptor: MTLRenderPassDescriptor): MTLRenderCommandEncoderProtocol; message 'renderCommandEncoderWithDescriptor:';
    function computeCommandEncoder: MTLComputeCommandEncoderProtocol; message 'computeCommandEncoder';
    function parallelRenderCommandEncoderWithDescriptor (renderPassDescriptor: MTLRenderPassDescriptor): MTLParallelRenderCommandEncoderProtocol; message 'parallelRenderCommandEncoderWithDescriptor:';
  end;
{$endif}

