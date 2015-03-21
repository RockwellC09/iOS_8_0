{ Parsed from Metal.framework (iPhoneOS8.2) MTLComputePipeline.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLComputePipelineReflectionPtr = ^MTLComputePipelineReflection;
  MTLComputePipelineStateProtocolPtr = ^MTLComputePipelineStateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTLComputePipelineReflection = objcclass external (NSObject)
  public
    function arguments: NSArray; message 'arguments';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLComputePipelineStateProtocol = objcprotocol external name 'MTLComputePipelineState' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    function maxTotalThreadsPerThreadgroup: NSUInteger; message 'maxTotalThreadsPerThreadgroup';
    function threadExecutionWidth: NSUInteger; message 'threadExecutionWidth';
  end;
{$endif}

