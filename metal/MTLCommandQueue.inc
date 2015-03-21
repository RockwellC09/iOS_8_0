{ Parsed from Metal.framework (iPhoneOS8.2) MTLCommandQueue.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLCommandQueueProtocolPtr = ^MTLCommandQueueProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLCommandQueueProtocol = objcprotocol external name 'MTLCommandQueue' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function commandBuffer: MTLCommandBufferProtocol; message 'commandBuffer';
    function commandBufferWithUnretainedReferences: MTLCommandBufferProtocol; message 'commandBufferWithUnretainedReferences';
    procedure insertDebugCaptureBoundary; message 'insertDebugCaptureBoundary';
  end;
{$endif}

