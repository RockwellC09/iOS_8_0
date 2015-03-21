{ Parsed from AudioUnit.framework (iPhoneOS8.2) AUComponent.h }
{ Created on Fri Mar 20 2:10:49 2015 }

{$ifndef __AUCOMPONENT__}

{$ifdef TYPES}
type
  AudioUnit = AudioComponentInstance;
  AudioUnitPtr = ^AudioUnit;

const
  kAudioUnitType_Output = 'auou';
  kAudioUnitType_MusicDevice = 'aumu';
  kAudioUnitType_MusicEffect = 'aumf';
  kAudioUnitType_FormatConverter = 'aufc';
  kAudioUnitType_Effect = 'aufx';
  kAudioUnitType_Mixer = 'aumx';
  kAudioUnitType_Panner = 'aupn';
  kAudioUnitType_Generator = 'augn';
  kAudioUnitType_OfflineEffect = 'auol';
  kAudioUnitType_MIDIProcessor = 'aumi';
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioUnitType_RemoteEffect = 'aurx';
  kAudioUnitType_RemoteGenerator = 'aurg';
  kAudioUnitType_RemoteInstrument = 'auri';
  kAudioUnitType_RemoteMusicEffect = 'aurm';
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioUnitManufacturer_Apple = 'appl';
const
  kAudioUnitSubType_GenericOutput = 'genr';
  {$if  not defined(TARGET_OS_IPHONE)}
  kAudioUnitSubType_HALOutput = 'ahal';
  kAudioUnitSubType_DefaultOutput = 'def ';
  kAudioUnitSubType_SystemOutput = 'sys ';
  {$else}
  kAudioUnitSubType_RemoteIO = 'rioc';
  {$endif}
  kAudioUnitSubType_VoiceProcessingIO = 'vpio';
const
  {$if  not defined(TARGET_OS_IPHONE)}
  kAudioUnitSubType_DLSSynth = 'dls ';
  {$endif}
  kAudioUnitSubType_Sampler = 'samp';
  kAudioUnitSubType_MIDISynth = 'msyn';
const
  kAudioUnitSubType_AUConverter = 'conv';
  kAudioUnitSubType_Varispeed = 'vari';
  kAudioUnitSubType_DeferredRenderer = 'defr';
  kAudioUnitSubType_Splitter = 'splt';
  kAudioUnitSubType_Merger = 'merg';
  kAudioUnitSubType_NewTimePitch = 'nutp';
  kAudioUnitSubType_AUiPodTimeOther = 'ipto';
  kAudioUnitSubType_RoundTripAAC = 'raac';
  {$if  not defined(TARGET_OS_IPHONE)}
  kAudioUnitSubType_TimePitch = 'tmpt';
  {$else}
  kAudioUnitSubType_AUiPodTime = 'iptm';
  {$endif}
const
  kAudioUnitSubType_PeakLimiter = 'lmtr';
  kAudioUnitSubType_DynamicsProcessor = 'dcmp';
  kAudioUnitSubType_LowPassFilter = 'lpas';
  kAudioUnitSubType_HighPassFilter = 'hpas';
  kAudioUnitSubType_BandPassFilter = 'bpas';
  kAudioUnitSubType_HighShelfFilter = 'hshf';
  kAudioUnitSubType_LowShelfFilter = 'lshf';
  kAudioUnitSubType_ParametricEQ = 'pmeq';
  kAudioUnitSubType_Distortion = 'dist';
  kAudioUnitSubType_Delay = 'dely';
  kAudioUnitSubType_SampleDelay = 'sdly';
  {$if  not defined(TARGET_OS_IPHONE)}
  kAudioUnitSubType_GraphicEQ = 'greq';
  kAudioUnitSubType_MultiBandCompressor = 'mcmp';
  kAudioUnitSubType_MatrixReverb = 'mrev';
  kAudioUnitSubType_Pitch = 'tmpt';
  kAudioUnitSubType_AUFilter = 'filt';
  kAudioUnitSubType_NetSend = 'nsnd';
  kAudioUnitSubType_RogerBeep = 'rogr';
  {$else}
  kAudioUnitSubType_Reverb2 = 'rvb2';
  kAudioUnitSubType_AUiPodEQ = 'ipeq';
  {$endif}
  kAudioUnitSubType_NBandEQ = 'nbeq';
const
  kAudioUnitSubType_MultiChannelMixer = 'mcmx';
  kAudioUnitSubType_MatrixMixer = 'mxmx';
  kAudioUnitSubType_SpatialMixer = '3dem';
  {$if  not defined(TARGET_OS_IPHONE)}
  kAudioUnitSubType_StereoMixer = 'smxr';
  kAudioUnitSubType_3DMixer = '3dmx';
  {$else}
  kAudioUnitSubType_AU3DMixerEmbedded = '3dem';
  {$endif}
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioUnitSubType_SphericalHeadPanner = 'sphr';
  kAudioUnitSubType_VectorPanner = 'vbas';
  kAudioUnitSubType_SoundFieldPanner = 'ambi';
  kAudioUnitSubType_HRTFPanner = 'hrtf';
{$endif}

{$endif}
{$ifdef TYPES}
const
  {$if  not defined(TARGET_OS_IPHONE)}
  kAudioUnitSubType_NetReceive = 'nrcv';
  {$endif}
  kAudioUnitSubType_ScheduledSoundPlayer = 'sspl';
  kAudioUnitSubType_AudioFilePlayer = 'afpl';
const
  kAudioUnitRenderAction_PreRender = 1 shl 2;
  kAudioUnitRenderAction_PostRender = 1 shl 3;
  kAudioUnitRenderAction_OutputIsSilence = 1 shl 4;
  kAudioOfflineUnitRenderAction_Preflight = 1 shl 5;
  kAudioOfflineUnitRenderAction_Render = 1 shl 6;
  kAudioOfflineUnitRenderAction_Complete = 1 shl 7;
  kAudioUnitRenderAction_PostRenderError = 1 shl 8;
  kAudioUnitRenderAction_DoNotCheckRenderArgs = 1 shl 9;

type
  AudioUnitRenderActionFlags = UInt32;
  AudioUnitRenderActionFlagsPtr = ^AudioUnitRenderActionFlags;

const
  kAudioUnitErr_InvalidProperty = -10879;
  kAudioUnitErr_InvalidParameter = -10878;
  kAudioUnitErr_InvalidElement = -10877;
  kAudioUnitErr_NoConnection = -10876;
  kAudioUnitErr_FailedInitialization = -10875;
  kAudioUnitErr_TooManyFramesToProcess = -10874;
  kAudioUnitErr_InvalidFile = -10871;
  kAudioUnitErr_FormatNotSupported = -10868;
  kAudioUnitErr_Uninitialized = -10867;
  kAudioUnitErr_InvalidScope = -10866;
  kAudioUnitErr_PropertyNotWritable = -10865;
  kAudioUnitErr_CannotDoInCurrentContext = -10863;
  kAudioUnitErr_InvalidPropertyValue = -10851;
  kAudioUnitErr_PropertyNotInUse = -10850;
  kAudioUnitErr_Initialized = -10849;
  kAudioUnitErr_InvalidOfflineRender = -10848;
  kAudioUnitErr_Unauthorized = -10847;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioComponentErr_DuplicateDescription = -66752;
  kAudioComponentErr_UnsupportedType = -66751;
  kAudioComponentErr_TooManyInstances = -66750;
  kAudioComponentErr_InstanceInvalidated = -66749;
  kAudioComponentErr_NotPermitted = -66748;
  kAudioComponentErr_InitializationTimedOut = -66747;
  kAudioComponentErr_InvalidFormat = -66746;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioUnitPropertyID = UInt32;
  AudioUnitPropertyIDPtr = ^AudioUnitPropertyID;
  AudioUnitScope = UInt32;
  AudioUnitScopePtr = ^AudioUnitScope;
  AudioUnitElement = UInt32;
  AudioUnitElementPtr = ^AudioUnitElement;
  AudioUnitParameterID = UInt32;
  AudioUnitParameterIDPtr = ^AudioUnitParameterID;
  AudioUnitParameterValue = Float32;
  AudioUnitParameterValuePtr = ^AudioUnitParameterValue;

const
  kParameterEvent_Immediate = 1;
  kParameterEvent_Ramped = 2;

type
  AUParameterEventType = UInt32;
  AUParameterEventTypePtr = ^AUParameterEventType;

type
  AudioUnitParameterEvent = record
    scope: AudioUnitScope;
    element: AudioUnitElement;
    parameter: AudioUnitParameterID;
    eventType: AUParameterEventType;
    eventValues: record
      case longint of
        0: (
          ramp: record
            startBufferOffset: SInt32;
            durationInFrames: UInt32;
            startValue: AudioUnitParameterValue;
            endValue: AudioUnitParameterValue;
          end;
        );
        1: (
          immediate: record
            bufferOffset: UInt32;
            value: AudioUnitParameterValue;
          end;
        );
    end;
  end;
type
  AudioUnitParameterEventPtr = ^AudioUnitParameterEvent;
type
  AudioUnitParameter = record
    mAudioUnit: AudioUnit;
    mParameterID: AudioUnitParameterID;
    mScope: AudioUnitScope;
    mElement: AudioUnitElement;
  end;
type
  AudioUnitParameterPtr = ^AudioUnitParameter;
type
  AudioUnitProperty = record
    mAudioUnit: AudioUnit;
    mPropertyID: AudioUnitPropertyID;
    mScope: AudioUnitScope;
    mElement: AudioUnitElement;
  end;
type
  AudioUnitPropertyPtr = ^AudioUnitProperty;

type
  AURenderCallback = function (inRefCon: pointer; var ioActionFlags: AudioUnitRenderActionFlags; inTimeStamp: AudioTimeStampPtr; inBusNumber: UInt32; inNumberFrames: UInt32; var ioData: AudioBufferList): OSStatus; cdecl;
  AudioUnitPropertyListenerProc = procedure (inRefCon: pointer; inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement); cdecl;
  AUInputSamplesInOutputCallback = procedure (inRefCon: pointer; inOutputTimeStamp: AudioTimeStampPtr; inInputSample: Float64; inNumberInputSamples: Float64); cdecl;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kAudioComponentRegistrationsChangedNotification: CFStringRef { available starting in __MAC_NA, __IPHONE_7_0 }; cvar; external;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioUnitInitialize(inUnit: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitUninitialize(inUnit: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitGetPropertyInfo(inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; outDataSize: UInt32Ptr; outWritable: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitGetProperty(inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; outData: pointer; var ioDataSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitSetProperty(inUnit: AudioUnit; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; inData: pointer; inDataSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitAddPropertyListener(inUnit: AudioUnit; inID: AudioUnitPropertyID; inProc: AudioUnitPropertyListenerProc; inProcUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitRemovePropertyListenerWithUserData(inUnit: AudioUnit; inID: AudioUnitPropertyID; inProc: AudioUnitPropertyListenerProc; inProcUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioUnitAddRenderNotify(inUnit: AudioUnit; inProc: AURenderCallback; inProcUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitRemoveRenderNotify(inUnit: AudioUnit; inProc: AURenderCallback; inProcUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitGetParameter(inUnit: AudioUnit; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; var outValue: AudioUnitParameterValue): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitSetParameter(inUnit: AudioUnit; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; inValue: AudioUnitParameterValue; inBufferOffsetInFrames: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioUnitScheduleParameters(inUnit: AudioUnit; inParameterEvent: AudioUnitParameterEventPtr; inNumParamEvents: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitRender(inUnit: AudioUnit; var ioActionFlags: AudioUnitRenderActionFlags; inTimeStamp: AudioTimeStampPtr; inOutputBusNumber: UInt32; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioUnitProcess(inUnit: AudioUnit; ioActionFlags: AudioUnitRenderActionFlagsPtr; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioUnitProcessMultiple(inUnit: AudioUnit; ioActionFlags: AudioUnitRenderActionFlagsPtr; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; inNumberInputBufferLists: UInt32; inInputBufferLists: AudioBufferListPtr; inNumberOutputBufferLists: UInt32; ioOutputBufferLists: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_6_0 }
function AudioUnitReset(inUnit: AudioUnit; inScope: AudioUnitScope; inElement: AudioUnitElement): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioOutputUnitPublish(inDesc: AudioComponentDescriptionPtr; inName: CFStringRef; inVersion: UInt32; inOutputUnit: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
{$endif}

{$if (defined(__OBJC__))}
{$ifdef FUNCTIONS}
function AudioOutputUnitGetHostIcon(au: AudioUnit; desiredPointSize: single): UIImage; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
function AudioComponentGetIcon(comp: AudioComponent; desiredPointSize: single): UIImage; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioComponentGetLastActiveTime(comp: AudioComponent): CFAbsoluteTime; cdecl; external; { available starting in __MAC_NA, __IPHONE_7_0 }
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioUnitRange = $0000;
  kAudioUnitInitializeSelect = $0001;
  kAudioUnitUninitializeSelect = $0002;
  kAudioUnitGetPropertyInfoSelect = $0003;
  kAudioUnitGetPropertySelect = $0004;
  kAudioUnitSetPropertySelect = $0005;
  kAudioUnitAddPropertyListenerSelect = $000A;
  kAudioUnitRemovePropertyListenerSelect = $000B;
  kAudioUnitRemovePropertyListenerWithUserDataSelect = $0012;
  kAudioUnitAddRenderNotifySelect = $000F;
  kAudioUnitRemoveRenderNotifySelect = $0010;
  kAudioUnitGetParameterSelect = $0006;
  kAudioUnitSetParameterSelect = $0007;
  kAudioUnitScheduleParametersSelect = $0011;
  kAudioUnitRenderSelect = $000E;
  kAudioUnitResetSelect = $0009;
  kAudioUnitComplexRenderSelect = $0013;
  kAudioUnitProcessSelect = $0014;
  kAudioUnitProcessMultipleSelect = $0015;

type
  AudioUnitInitializeProc = function (self_: pointer): OSStatus; cdecl;
  AudioUnitUninitializeProc = function (self_: pointer): OSStatus; cdecl;
  AudioUnitGetPropertyInfoProc = function (self_: pointer; prop: AudioUnitPropertyID; scope: AudioUnitScope; elem: AudioUnitElement; outDataSize: UInt32Ptr; outWritable: pboolean): OSStatus; cdecl;
  AudioUnitGetPropertyProc = function (self_: pointer; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; outData: pointer; ioDataSize: UInt32Ptr): OSStatus; cdecl;
  AudioUnitSetPropertyProc = function (self_: pointer; inID: AudioUnitPropertyID; inScope: AudioUnitScope; inElement: AudioUnitElement; inData: pointer; inDataSize: UInt32): OSStatus; cdecl;
  AudioUnitAddPropertyListenerProc = function (self_: pointer; prop: AudioUnitPropertyID; proc: AudioUnitPropertyListenerProc; userData: pointer): OSStatus; cdecl;
  AudioUnitRemovePropertyListenerProc = function (self_: pointer; prop: AudioUnitPropertyID; proc: AudioUnitPropertyListenerProc): OSStatus; cdecl;
  AudioUnitRemovePropertyListenerWithUserDataProc = function (self_: pointer; prop: AudioUnitPropertyID; proc: AudioUnitPropertyListenerProc; userData: pointer): OSStatus; cdecl;
  AudioUnitAddRenderNotifyProc = function (self_: pointer; proc: AURenderCallback; userData: pointer): OSStatus; cdecl;
  AudioUnitRemoveRenderNotifyProc = function (self_: pointer; proc: AURenderCallback; userData: pointer): OSStatus; cdecl;
  AudioUnitScheduleParametersProc = function (self_: pointer; events: AudioUnitParameterEventPtr; numEvents: UInt32): OSStatus; cdecl;
  AudioUnitResetProc = function (self_: pointer; inScope: AudioUnitScope; inElement: AudioUnitElement): OSStatus; cdecl;
  AudioUnitComplexRenderProc = function (self_: pointer; ioActionFlags: AudioUnitRenderActionFlagsPtr; inTimeStamp: AudioTimeStampPtr; inOutputBusNumber: UInt32; inNumberOfPackets: UInt32; outNumberOfPackets: UInt32Ptr; outPacketDescriptions: AudioStreamPacketDescriptionPtr; ioData: AudioBufferListPtr; outMetadata: pointer; outMetadataByteSize: UInt32Ptr): OSStatus; cdecl;
  AudioUnitProcessProc = function (self_: pointer; ioActionFlags: AudioUnitRenderActionFlagsPtr; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl;
  AudioUnitProcessMultipleProc = function (self_: pointer; ioActionFlags: AudioUnitRenderActionFlagsPtr; inTimeStamp: AudioTimeStampPtr; inNumberFrames: UInt32; inNumberInputBufferLists: UInt32; inInputBufferLists: AudioBufferListPtr; inNumberOutputBufferLists: UInt32; ioOutputBufferLists: AudioBufferListPtr): OSStatus; cdecl;
  AudioUnitGetParameterProc = function (inComponentStorage: pointer; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; var outValue: AudioUnitParameterValue): OSStatus; cdecl;
  AudioUnitSetParameterProc = function (inComponentStorage: pointer; inID: AudioUnitParameterID; inScope: AudioUnitScope; inElement: AudioUnitElement; inValue: AudioUnitParameterValue; inBufferOffsetInFrames: UInt32): OSStatus; cdecl;
  AudioUnitRenderProc = function (inComponentStorage: pointer; var ioActionFlags: AudioUnitRenderActionFlags; inTimeStamp: AudioTimeStampPtr; inOutputBusNumber: UInt32; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl;

const
  kAudioUnitErr_IllegalInstrument = -10873;
  kAudioUnitErr_InstrumentTypeNotFound = -10872;
  kAudioUnitErr_UnknownFileType = -10870;
  kAudioUnitErr_FileNotSpecified = -10869;
{$endif}

{$if  not defined(__LP64__) and not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioUnitRemovePropertyListener(inUnit: AudioUnit; inID: AudioUnitPropertyID; inProc: AudioUnitPropertyListenerProc): OSStatus; cdecl; external; deprecated 'in __MAC_10_0,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}

{$endif}
