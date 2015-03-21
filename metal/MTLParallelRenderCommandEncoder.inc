{ Parsed from Metal.framework (iPhoneOS8.2) MTLParallelRenderCommandEncoder.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLParallelRenderCommandEncoderProtocolPtr = ^MTLParallelRenderCommandEncoderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLParallelRenderCommandEncoderProtocol = objcprotocol external name 'MTLParallelRenderCommandEncoder' (MTLCommandEncoderProtocol)
    function renderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'renderCommandEncoder';
  end;
{$endif}

