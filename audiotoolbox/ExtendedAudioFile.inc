{ Parsed from AudioToolbox.framework (iPhoneOS8.2) ExtendedAudioFile.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$ifndef __ExtendedAudioFile_h__}

{$ifdef TYPES}
type
  ExtAudioFileRef = OpaqueType;

const
  kExtAudioFileProperty_FileDataFormat = 'ffmt';
  kExtAudioFileProperty_FileChannelLayout = 'fclo';
  kExtAudioFileProperty_ClientDataFormat = 'cfmt';
  kExtAudioFileProperty_ClientChannelLayout = 'cclo';
  kExtAudioFileProperty_CodecManufacturer = 'cman';
  kExtAudioFileProperty_AudioConverter = 'acnv';
  kExtAudioFileProperty_AudioFile = 'afil';
  kExtAudioFileProperty_FileMaxPacketSize = 'fmps';
  kExtAudioFileProperty_ClientMaxPacketSize = 'cmps';
  kExtAudioFileProperty_FileLengthFrames = '#frm';
  kExtAudioFileProperty_ConverterConfig = 'accf';
  kExtAudioFileProperty_IOBufferSizeBytes = 'iobs';
  kExtAudioFileProperty_IOBuffer = 'iobf';
  kExtAudioFileProperty_PacketTable = 'xpti';

type
  ExtAudioFilePropertyID = UInt32;
  ExtAudioFilePropertyIDPtr = ^ExtAudioFilePropertyID;

const
  {$if defined(TARGET_OS_IPHONE)}
  kExtAudioFileError_CodecUnavailableInputConsumed = -66559;
  kExtAudioFileError_CodecUnavailableInputNotConsumed = -66560;
  {$endif}
  kExtAudioFileError_InvalidProperty = -66561;
  kExtAudioFileError_InvalidPropertySize = -66562;
  kExtAudioFileError_NonPCMClientFormat = -66563;
  kExtAudioFileError_InvalidChannelMap = -66564;
  kExtAudioFileError_InvalidOperationOrder = -66565;
  kExtAudioFileError_InvalidDataFormat = -66566;
  kExtAudioFileError_MaxPacketSizeUnknown = -66567;
  kExtAudioFileError_InvalidSeek = -66568;
  kExtAudioFileError_AsyncWriteTooLarge = -66569;
  kExtAudioFileError_AsyncWriteBufferOverflow = -66570;
{$endif}

{$ifdef FUNCTIONS}
function ExtAudioFileOpenURL(inURL: CFURLRef; outExtAudioFile: ExtAudioFileRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_1 }
function ExtAudioFileWrapAudioFileID(inFileID: AudioFileID; inForWriting: Boolean; outExtAudioFile: ExtAudioFileRef): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileCreateWithURL(inURL: CFURLRef; inFileType: AudioFileTypeID; inStreamDesc: AudioStreamBasicDescriptionPtr; inChannelLayout: AudioChannelLayoutPtr; inFlags: UInt32; outExtAudioFile: ExtAudioFileRef): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_1 }
{$endif}

{$if  not defined(TARGET_OS_IPHONE) and not defined(CA_NO_CORE_SERVICES)}
{$ifdef FUNCTIONS}
function ExtAudioFileOpen(inFSRef: FSRefPtr; outExtAudioFile: ExtAudioFileRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_4,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
function ExtAudioFileCreateNew(inParentDir: FSRefPtr; inFileName: CFStringRef; inFileType: AudioFileTypeID; inStreamDesc: AudioStreamBasicDescriptionPtr; inChannelLayout: AudioChannelLayoutPtr; outExtAudioFile: ExtAudioFileRef): OSStatus; cdecl; external; deprecated 'in __MAC_10_4,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function ExtAudioFileDispose(inExtAudioFile: ExtAudioFileRef): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileRead(inExtAudioFile: ExtAudioFileRef; ioNumberFrames: UInt32Ptr; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileWrite(inExtAudioFile: ExtAudioFileRef; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileWriteAsync(inExtAudioFile: ExtAudioFileRef; inNumberFrames: UInt32; ioData: AudioBufferListPtr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileSeek(inExtAudioFile: ExtAudioFileRef; inFrameOffset: SInt64): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileTell(inExtAudioFile: ExtAudioFileRef; outFrameOffset: SInt64Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileGetPropertyInfo(inExtAudioFile: ExtAudioFileRef; inPropertyID: ExtAudioFilePropertyID; outSize: UInt32Ptr; outWritable: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileGetProperty(inExtAudioFile: ExtAudioFileRef; inPropertyID: ExtAudioFilePropertyID; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
function ExtAudioFileSetProperty(inExtAudioFile: ExtAudioFileRef; inPropertyID: ExtAudioFilePropertyID; inPropertyDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_1 }
{$endif}

{$endif}
