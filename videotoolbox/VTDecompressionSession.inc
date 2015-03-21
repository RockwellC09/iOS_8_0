{ Parsed from VideoToolbox.framework (iPhoneOS8.2) VTDecompressionSession.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef VTDECOMPRESSIONSESSION_H}

{$ifdef TYPES}
type
  VTDecompressionSessionRef = OpaqueType;
  VTDecompressionOutputCallback = procedure (decompressionOutputRefCon: pointer; sourceFrameRefCon: pointer; status: OSStatus; infoFlags: VTDecodeInfoFlags; imageBuffer: CVImageBufferRef; presentationTimeStamp: CMTime; presentationDuration: CMTime); cdecl;

type
  VTDecompressionOutputCallbackRecord = record
    decompressionOutputCallback: VTDecompressionOutputCallback;
    decompressionOutputRefCon: pointer;
  end;
type
  VTDecompressionOutputCallbackRecordPtr = ^VTDecompressionOutputCallbackRecord;
{$endif}

{$ifdef FUNCTIONS}
function VTDecompressionSessionCreate(allocator: CFAllocatorRef; videoFormatDescription: CMVideoFormatDescriptionRef; videoDecoderSpecification: CFDictionaryRef; destinationImageBufferAttributes: CFDictionaryRef; outputCallback: VTDecompressionOutputCallbackRecordPtr; decompressionSessionOut: VTDecompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
procedure VTDecompressionSessionInvalidate(session: VTDecompressionSessionRef); cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionDecodeFrame(session: VTDecompressionSessionRef; sampleBuffer: CMSampleBufferRef; decodeFlags: VTDecodeFrameFlags; sourceFrameRefCon: pointer; infoFlagsOut: VTDecodeInfoFlagsPtr): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionFinishDelayedFrames(session: VTDecompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionCanAcceptFormatDescription(session: VTDecompressionSessionRef; newFormatDesc: CMFormatDescriptionRef): Boolean; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionWaitForAsynchronousFrames(session: VTDecompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
function VTDecompressionSessionCopyBlackPixelBuffer(session: VTDecompressionSessionRef; pixelBufferOut: CVPixelBufferRefPtr): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$endif}
