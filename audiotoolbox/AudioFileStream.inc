{ Parsed from AudioToolbox.framework (iPhoneOS8.2) AudioFileStream.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$if  not (defined(__AudioFileStream_h__))}

{$ifdef TYPES}
type
  AudioFileStreamPropertyID = UInt32;
  AudioFileStreamPropertyIDPtr = ^AudioFileStreamPropertyID;
  AudioFileStreamID = OpaqueType;
  AudioFileStream_PropertyListenerProc = procedure (inClientData: pointer; inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; ioFlags: UInt32Ptr); cdecl;
  AudioFileStream_PacketsProc = procedure (inClientData: pointer; inNumberBytes: UInt32; inNumberPackets: UInt32; inInputData: pointer; inPacketDescriptions: AudioStreamPacketDescriptionPtr); cdecl;

const
  kAudioFileStreamPropertyFlag_PropertyIsCached = 1;
  kAudioFileStreamPropertyFlag_CacheProperty = 2;
  kAudioFileStreamParseFlag_Discontinuity = 1;
  kAudioFileStreamSeekFlag_OffsetIsEstimated = 1;
const
  kAudioFileStreamError_UnsupportedFileType = 'typ?';
  kAudioFileStreamError_UnsupportedDataFormat = 'fmt?';
  kAudioFileStreamError_UnsupportedProperty = 'pty?';
  kAudioFileStreamError_BadPropertySize = '!siz';
  kAudioFileStreamError_NotOptimized = 'optm';
  kAudioFileStreamError_InvalidPacketOffset = 'pck?';
  kAudioFileStreamError_InvalidFile = 'dta?';
  kAudioFileStreamError_ValueUnknown = 'unk?';
  kAudioFileStreamError_DataUnavailable = 'more';
  kAudioFileStreamError_IllegalOperation = 'nope';
  kAudioFileStreamError_UnspecifiedError = 'wht?';
  kAudioFileStreamError_DiscontinuityCantRecover = 'dsc!';
const
  kAudioFileStreamProperty_ReadyToProducePackets = 'redy';
  kAudioFileStreamProperty_FileFormat = 'ffmt';
  kAudioFileStreamProperty_DataFormat = 'dfmt';
  kAudioFileStreamProperty_FormatList = 'flst';
  kAudioFileStreamProperty_MagicCookieData = 'mgic';
  kAudioFileStreamProperty_AudioDataByteCount = 'bcnt';
  kAudioFileStreamProperty_AudioDataPacketCount = 'pcnt';
  kAudioFileStreamProperty_MaximumPacketSize = 'psze';
  kAudioFileStreamProperty_DataOffset = 'doff';
  kAudioFileStreamProperty_ChannelLayout = 'cmap';
  kAudioFileStreamProperty_PacketToFrame = 'pkfr';
  kAudioFileStreamProperty_FrameToPacket = 'frpk';
  kAudioFileStreamProperty_PacketToByte = 'pkby';
  kAudioFileStreamProperty_ByteToPacket = 'bypk';
  kAudioFileStreamProperty_PacketTableInfo = 'pnfo';
  kAudioFileStreamProperty_PacketSizeUpperBound = 'pkub';
  kAudioFileStreamProperty_AverageBytesPerPacket = 'abpp';
  kAudioFileStreamProperty_BitRate = 'brat';
  kAudioFileStreamProperty_InfoDictionary = 'info';
{$endif}

{$ifdef FUNCTIONS}
function AudioFileStreamOpen(inClientData: pointer; inPropertyListenerProc: AudioFileStream_PropertyListenerProc; inPacketsProc: AudioFileStream_PacketsProc; inFileTypeHint: AudioFileTypeID; outAudioFileStream: AudioFileStreamID): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamParseBytes(inAudioFileStream: AudioFileStreamID; inDataByteSize: UInt32; inData: pointer; inFlags: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamSeek(inAudioFileStream: AudioFileStreamID; inPacketOffset: SInt64; outDataByteOffset: SInt64Ptr; ioFlags: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamGetPropertyInfo(inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; outPropertyDataSize: UInt32Ptr; outWritable: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamGetProperty(inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamSetProperty(inAudioFileStream: AudioFileStreamID; inPropertyID: AudioFileStreamPropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileStreamClose(inAudioFileStream: AudioFileStreamID): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$endif}
