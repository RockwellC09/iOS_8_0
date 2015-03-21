{ Parsed from AudioToolbox.framework (iPhoneOS8.2) AudioConverter.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$if  not (defined(__AudioConverter_h__))}

{$ifdef TYPES}
type
  AudioConverterRef = OpaqueType;
  AudioConverterPropertyID = UInt32;
  AudioConverterPropertyIDPtr = ^AudioConverterPropertyID;

const
  kAudioConverterPropertyMinimumInputBufferSize = 'mibs';
  kAudioConverterPropertyMinimumOutputBufferSize = 'mobs';
  kAudioConverterPropertyMaximumInputBufferSize = 'xibs';
  kAudioConverterPropertyMaximumInputPacketSize = 'xips';
  kAudioConverterPropertyMaximumOutputPacketSize = 'xops';
  kAudioConverterPropertyCalculateInputBufferSize = 'cibs';
  kAudioConverterPropertyCalculateOutputBufferSize = 'cobs';
  kAudioConverterPropertyInputCodecParameters = 'icdp';
  kAudioConverterPropertyOutputCodecParameters = 'ocdp';
  kAudioConverterSampleRateConverterAlgorithm = 'srci';
  kAudioConverterSampleRateConverterComplexity = 'srca';
  kAudioConverterSampleRateConverterQuality = 'srcq';
  kAudioConverterSampleRateConverterInitialPhase = 'srcp';
  kAudioConverterCodecQuality = 'cdqu';
  kAudioConverterPrimeMethod = 'prmm';
  kAudioConverterPrimeInfo = 'prim';
  kAudioConverterChannelMap = 'chmp';
  kAudioConverterDecompressionMagicCookie = 'dmgc';
  kAudioConverterCompressionMagicCookie = 'cmgc';
  kAudioConverterEncodeBitRate = 'brat';
  kAudioConverterEncodeAdjustableSampleRate = 'ajsr';
  kAudioConverterInputChannelLayout = 'icl ';
  kAudioConverterOutputChannelLayout = 'ocl ';
  kAudioConverterApplicableEncodeBitRates = 'aebr';
  kAudioConverterAvailableEncodeBitRates = 'vebr';
  kAudioConverterApplicableEncodeSampleRates = 'aesr';
  kAudioConverterAvailableEncodeSampleRates = 'vesr';
  kAudioConverterAvailableEncodeChannelLayoutTags = 'aecl';
  kAudioConverterCurrentOutputStreamDescription = 'acod';
  kAudioConverterCurrentInputStreamDescription = 'acid';
  kAudioConverterPropertySettings = 'acps';
  kAudioConverterPropertyBitDepthHint = 'acbd';
  kAudioConverterPropertyFormatList = 'flst';
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioConverterPropertyCanResumeFromInterruption = 'crfi';
{$endif}

{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioConverterPropertyDithering = 'dith';
  kAudioConverterPropertyDitherBitDepth = 'dbit';
const
  kDitherAlgorithm_TPDF = 1;
  kDitherAlgorithm_NoiseShaping = 2;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kAudioConverterQuality_Max = $7F;
  kAudioConverterQuality_High = $60;
  kAudioConverterQuality_Medium = $40;
  kAudioConverterQuality_Low = $20;
  kAudioConverterQuality_Min = 0;
const
  kAudioConverterSampleRateConverterComplexity_Linear = 'line';
  kAudioConverterSampleRateConverterComplexity_Normal = 'norm';
  kAudioConverterSampleRateConverterComplexity_Mastering = 'bats';
const
  kConverterPrimeMethod_Pre = 0;
  kConverterPrimeMethod_Normal = 1;
  kConverterPrimeMethod_None = 2;

type
  AudioConverterPrimeInfo = record
    leadingFrames: UInt32;
    trailingFrames: UInt32;
  end;
type
  AudioConverterPrimeInfoPtr = ^AudioConverterPrimeInfo;

const
  kAudioConverterErr_FormatNotSupported = 'fmt?';
  kAudioConverterErr_OperationNotSupported = $6F703F3F;
  kAudioConverterErr_PropertyNotSupported = 'prop';
  kAudioConverterErr_InvalidInputSize = 'insz';
  kAudioConverterErr_InvalidOutputSize = 'otsz';
  kAudioConverterErr_UnspecifiedError = 'what';
  kAudioConverterErr_BadPropertySizeError = '!siz';
  kAudioConverterErr_RequiresPacketDescriptionsError = '!pkd';
  kAudioConverterErr_InputSampleRateOutOfRange = '!isr';
  kAudioConverterErr_OutputSampleRateOutOfRange = '!osr';
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioConverterErr_HardwareInUse = 'hwiu';
  kAudioConverterErr_NoHardwarePermission = 'perm';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioConverterNew(inSourceFormat: AudioStreamBasicDescriptionPtr; inDestinationFormat: AudioStreamBasicDescriptionPtr; outAudioConverter: AudioConverterRef): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterNewSpecific(inSourceFormat: AudioStreamBasicDescriptionPtr; inDestinationFormat: AudioStreamBasicDescriptionPtr; inNumberClassDescriptions: UInt32; inClassDescriptions: AudioClassDescriptionPtr; outAudioConverter: AudioConverterRef): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioConverterDispose(inAudioConverter: AudioConverterRef): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterReset(inAudioConverter: AudioConverterRef): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterGetPropertyInfo(inAudioConverter: AudioConverterRef; inPropertyID: AudioConverterPropertyID; outSize: UInt32Ptr; outWritable: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterGetProperty(inAudioConverter: AudioConverterRef; inPropertyID: AudioConverterPropertyID; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
function AudioConverterSetProperty(inAudioConverter: AudioConverterRef; inPropertyID: AudioConverterPropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioConverterInputDataProc = function (inAudioConverter: AudioConverterRef; ioDataSize: UInt32Ptr; outData: pointer; inUserData: pointer): OSStatus; cdecl;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioConverterFillBuffer(inAudioConverter: AudioConverterRef; inInputDataProc: AudioConverterInputDataProc; inInputDataProcUserData: pointer; ioOutputDataSize: UInt32Ptr; outOutputData: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_10_1,__MAC_10_5, __IPHONE_NA, __IPHONE_NA';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioConverterConvertBuffer(inAudioConverter: AudioConverterRef; inInputDataSize: UInt32; inInputData: pointer; ioOutputDataSize: UInt32Ptr; outOutputData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_1,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioConverterComplexInputDataProc = function (inAudioConverter: AudioConverterRef; ioNumberDataPackets: UInt32Ptr; ioData: AudioBufferListPtr; outDataPacketDescription: AudioStreamPacketDescriptionPtr; inUserData: pointer): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioConverterFillComplexBuffer(inAudioConverter: AudioConverterRef; inInputDataProc: AudioConverterComplexInputDataProc; inInputDataProcUserData: pointer; ioOutputDataPacketSize: UInt32Ptr; outOutputData: AudioBufferListPtr; outPacketDescription: AudioStreamPacketDescriptionPtr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioConverterConvertComplexBuffer(inAudioConverter: AudioConverterRef; inNumberPCMFrames: UInt32; inInputData: AudioBufferListPtr; outOutputData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_5_0 }
{$endif}

{$endif}
