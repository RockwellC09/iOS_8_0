{ Parsed from VideoToolbox.framework (iPhoneOS8.2) VTCompressionSession.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef VTCOMPRESSIONSESSION_H}

{$ifdef TYPES}
type
  VTCompressionSessionRef = OpaqueType;
  VTCompressionOutputCallback = procedure (outputCallbackRefCon: pointer; sourceFrameRefCon: pointer; status: OSStatus; infoFlags: VTEncodeInfoFlags; sampleBuffer: CMSampleBufferRef); cdecl;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTVideoEncoderSpecification_EncoderID: CFStringRef { available starting in __MAC_10_8, __IPHONE_8_0 }; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function VTCompressionSessionCreate(allocator: CFAllocatorRef; width: cint32; height: cint32; codecType: CMVideoCodecType; encoderSpecification: CFDictionaryRef; sourceImageBufferAttributes: CFDictionaryRef; compressedDataAllocator: CFAllocatorRef; outputCallback: VTCompressionOutputCallback; outputCallbackRefCon: pointer; compressionSessionOut: VTCompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
procedure VTCompressionSessionInvalidate(session: VTCompressionSessionRef); cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
function VTCompressionSessionGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
function VTCompressionSessionGetPixelBufferPool(session: VTCompressionSessionRef): CVPixelBufferPoolRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
function VTCompressionSessionPrepareToEncodeFrames(session: VTCompressionSessionRef): OSStatus; cdecl; external; { available starting in __MAC_10_9, __IPHONE_8_0 }
function VTCompressionSessionEncodeFrame(session: VTCompressionSessionRef; imageBuffer: CVImageBufferRef; presentationTimeStamp: CMTime; duration: CMTime; frameProperties: CFDictionaryRef; sourceFrameRefCon: pointer; infoFlagsOut: VTEncodeInfoFlagsPtr): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_8_0 }
function VTCompressionSessionCompleteFrames(session: VTCompressionSessionRef; completeUntilPresentationTimeStamp: CMTime): OSStatus; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  VTCompressionSessionOptionFlags = cuint32;
  VTCompressionSessionOptionFlagsPtr = ^VTCompressionSessionOptionFlags;

const
  kVTCompressionSessionBeginFinalPass = 1 shl 0;
{$endif}

{$ifdef FUNCTIONS}
function VTCompressionSessionBeginPass(session: VTCompressionSessionRef; beginPassFlags: VTCompressionSessionOptionFlags; reserved: pcuint32): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTCompressionSessionEndPass(session: VTCompressionSessionRef; furtherPassesRequestedOut: pboolean; reserved: pcuint32): OSStatus; cdecl; external; { available starting in __MAC_10_10,__IPHONE_8_0 }
function VTCompressionSessionGetTimeRangesForNextPass(session: VTCompressionSessionRef; timeRangeCountOut: CMItemCountPtr; timeRangeArrayOut: CMTimeRangePtr): OSStatus; cdecl; external;
{$endif}

{$endif}
