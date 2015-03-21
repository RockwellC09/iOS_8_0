{ Parsed from MediaToolbox.framework (iPhoneOS8.2) MTAudioProcessingTap.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$ifndef MTAUDIOPROCESSINGTAP_H}

{$ifdef TYPES}
type
  MTAudioProcessingTapRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function MTAudioProcessingTapGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
{$endif}

{$ifdef TYPES}
const
  kMTAudioProcessingTapCreationFlag_PreEffects = 1 shl 0;
  kMTAudioProcessingTapCreationFlag_PostEffects = 1 shl 1;

type
  MTAudioProcessingTapCreationFlags = cuint32;
  MTAudioProcessingTapCreationFlagsPtr = ^MTAudioProcessingTapCreationFlags;

const
  kMTAudioProcessingTapFlag_StartOfStream = 1 shl 8;
  kMTAudioProcessingTapFlag_EndOfStream = 1 shl 9;

type
  MTAudioProcessingTapFlags = cuint32;
  MTAudioProcessingTapFlagsPtr = ^MTAudioProcessingTapFlags;
  MTAudioProcessingTapInitCallback = procedure (tap: MTAudioProcessingTapRef; clientInfo: pointer; tapStorageOut: pointer); cdecl;
  MTAudioProcessingTapFinalizeCallback = procedure (tap: MTAudioProcessingTapRef); cdecl;
  MTAudioProcessingTapPrepareCallback = procedure (tap: MTAudioProcessingTapRef; maxFrames: CMItemCount; processingFormat: AudioStreamBasicDescriptionPtr); cdecl;
  MTAudioProcessingTapUnprepareCallback = procedure (tap: MTAudioProcessingTapRef); cdecl;
  MTAudioProcessingTapProcessCallback = procedure (tap: MTAudioProcessingTapRef; numberFrames: CMItemCount; flags: MTAudioProcessingTapFlags; bufferListInOut: AudioBufferListPtr; numberFramesOut: CMItemCountPtr; flagsOut: MTAudioProcessingTapFlagsPtr); cdecl;

const
  kMTAudioProcessingTapCallbacksVersion_0 = 0;

type
  MTAudioProcessingTapCallbacks = record
    version: cint;
    clientInfo: pointer;
    init: MTAudioProcessingTapInitCallback;
    finalize: MTAudioProcessingTapFinalizeCallback;
    prepare: MTAudioProcessingTapPrepareCallback;
    unprepare: MTAudioProcessingTapUnprepareCallback;
    process: MTAudioProcessingTapProcessCallback;
  end;
type
  MTAudioProcessingTapCallbacksPtr = ^MTAudioProcessingTapCallbacks;
{$endif}

{$ifdef FUNCTIONS}
function MTAudioProcessingTapCreate(allocator: CFAllocatorRef; callbacks: MTAudioProcessingTapCallbacksPtr; flags: MTAudioProcessingTapCreationFlags; tapOut: MTAudioProcessingTapRef): OSStatus; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
function MTAudioProcessingTapGetStorage(tap: MTAudioProcessingTapRef): pointer; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
function MTAudioProcessingTapGetSourceAudio(tap: MTAudioProcessingTapRef; numberFrames: CMItemCount; bufferListInOut: AudioBufferListPtr; flagsOut: MTAudioProcessingTapFlagsPtr; timeRangeOut: CMTimeRangePtr; numberFramesOut: CMItemCountPtr): OSStatus; cdecl; external; { available starting in __MAC_10_9,__IPHONE_6_0 }
{$endif}

{$endif}
