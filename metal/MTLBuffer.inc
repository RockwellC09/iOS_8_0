{ Parsed from Metal.framework (iPhoneOS8.2) MTLBuffer.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLBufferProtocolPtr = ^MTLBufferProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLBufferProtocol = objcprotocol external name 'MTLBuffer' (MTLResourceProtocol)
    function length: NSUInteger; message 'length';
    function contents: pointer; message 'contents';
    function newTextureWithDescriptor_offset_bytesPerRow (descriptor: MTLTextureDescriptor; offset: NSUInteger; bytesPerRow: NSUInteger): MTLTextureProtocol; message 'newTextureWithDescriptor:offset:bytesPerRow:';
  end;
{$endif}

