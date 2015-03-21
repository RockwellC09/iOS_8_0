{ Parsed from AudioToolbox.framework (iPhoneOS8.2) AudioFile.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$if  not (defined(__AudioFile_h__))}

{$ifdef TYPES}
const
  kAudioFileAIFFType = 'AIFF';
  kAudioFileAIFCType = 'AIFC';
  kAudioFileWAVEType = 'WAVE';
  kAudioFileSoundDesigner2Type = 'Sd2f';
  kAudioFileNextType = 'NeXT';
  kAudioFileMP3Type = 'MPG3';
  kAudioFileMP2Type = 'MPG2';
  kAudioFileMP1Type = 'MPG1';
  kAudioFileAC3Type = 'ac-3';
  kAudioFileAAC_ADTSType = 'adts';
  kAudioFileMPEG4Type = 'mp4f';
  kAudioFileM4AType = 'm4af';
  kAudioFileM4BType = 'm4bf';
  kAudioFileCAFType = 'caff';
  kAudioFile3GPType = '3gpp';
  kAudioFile3GP2Type = '3gp2';
  kAudioFileAMRType = 'amrf';

type
  AudioFileTypeID = UInt32;
  AudioFileTypeIDPtr = ^AudioFileTypeID;

const
  kAudioFileUnspecifiedError = 'wht?';
  kAudioFileUnsupportedFileTypeError = 'typ?';
  kAudioFileUnsupportedDataFormatError = 'fmt?';
  kAudioFileUnsupportedPropertyError = 'pty?';
  kAudioFileBadPropertySizeError = '!siz';
  kAudioFilePermissionsError = 'prm?';
  kAudioFileNotOptimizedError = 'optm';
  kAudioFileInvalidChunkError = 'chk?';
  kAudioFileDoesNotAllow64BitDataSizeError = 'off?';
  kAudioFileInvalidPacketOffsetError = 'pck?';
  kAudioFileInvalidFileError = 'dta?';
  kAudioFileOperationNotSupportedError = $6F703F3F;
  kAudioFileNotOpenError = -38;
  kAudioFileEndOfFileError = -39;
  kAudioFilePositionError = -40;
  kAudioFileFileNotFoundError = -43;
const
  kAudioFileFlags_EraseFile = 1;
  kAudioFileFlags_DontPageAlignAudioData = 2;
const
  kAudioFileReadPermission = $01;
  kAudioFileWritePermission = $02;
  kAudioFileReadWritePermission = $03;

type
  AudioFileID = OpaqueType;
  AudioFilePropertyID = UInt32;
  AudioFilePropertyIDPtr = ^AudioFilePropertyID;

const
  kAudioFileLoopDirection_NoLooping = 0;
  kAudioFileLoopDirection_Forward = 1;
  kAudioFileLoopDirection_ForwardAndBackward = 2;
  kAudioFileLoopDirection_Backward = 3;

type
  AudioFile_SMPTE_Time = record
    mHours: SInt8;
    mMinutes: UInt8;
    mSeconds: UInt8;
    mFrames: UInt8;
    mSubFrameSampleOffset: UInt32;
  end;
type
  AudioFile_SMPTE_TimePtr = ^AudioFile_SMPTE_Time;

const
  kAudioFileMarkerType_Generic = 0;

type
  AudioFileMarker = record
    mFramePosition: Float64;
    mName: CFStringRef;
    mMarkerID: SInt32;
    mSMPTETime: AudioFile_SMPTE_Time;
    mType: UInt32;
    mReserved: UInt16;
    mChannel: UInt16;
  end;
type
  AudioFileMarkerPtr = ^AudioFileMarker;
type
  AudioFileMarkerList = record
    mSMPTE_TimeType: UInt32;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of AudioFileMarker;
  end;
type
  AudioFileMarkerListPtr = ^AudioFileMarkerList;

const
  kAudioFileRegionFlag_LoopEnable = 1;
  kAudioFileRegionFlag_PlayForward = 2;
  kAudioFileRegionFlag_PlayBackward = 4;

type
  AudioFileRegion = record
    mRegionID: UInt32;
    mName: CFStringRef;
    mFlags: UInt32;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of AudioFileMarker;
  end;
type
  AudioFileRegionPtr = ^AudioFileRegion;
type
  AudioFileRegionList = record
    mSMPTE_TimeType: UInt32;
    mNumberRegions: UInt32;
    mRegions:array[0..0] of AudioFileRegion;
  end;
type
  AudioFileRegionListPtr = ^AudioFileRegionList;
type
  AudioFramePacketTranslation = record
    mFrame: SInt64;
    mPacket: SInt64;
    mFrameOffsetInPacket: UInt32;
  end;
type
  AudioFramePacketTranslationPtr = ^AudioFramePacketTranslation;

const
  kBytePacketTranslationFlag_IsEstimate = 1;

type
  AudioBytePacketTranslation = record
    mByte: SInt64;
    mPacket: SInt64;
    mByteOffsetInPacket: UInt32;
    mFlags: UInt32;
  end;
type
  AudioBytePacketTranslationPtr = ^AudioBytePacketTranslation;
type
  AudioFilePacketTableInfo = record
    mNumberValidFrames: SInt64;
    mPrimingFrames: SInt32;
    mRemainderFrames: SInt32;
  end;
type
  AudioFilePacketTableInfoPtr = ^AudioFilePacketTableInfo;

const
  kAFInfoDictionary_Artist = 'artist';
  kAFInfoDictionary_Album = 'album';
  kAFInfoDictionary_Tempo = 'tempo';
  kAFInfoDictionary_KeySignature = 'key signature';
  kAFInfoDictionary_TimeSignature = 'time signature';
  kAFInfoDictionary_TrackNumber = 'track number';
  kAFInfoDictionary_Year = 'year';
  kAFInfoDictionary_Composer = 'composer';
  kAFInfoDictionary_Lyricist = 'lyricist';
  kAFInfoDictionary_Genre = 'genre';
  kAFInfoDictionary_Title = 'title';
  kAFInfoDictionary_RecordedDate = 'recorded date';
  kAFInfoDictionary_Comments = 'comments';
  kAFInfoDictionary_Copyright = 'copyright';
  kAFInfoDictionary_SourceEncoder = 'source encoder';
  kAFInfoDictionary_EncodingApplication = 'encoding application';
  kAFInfoDictionary_NominalBitRate = 'nominal bit rate';
  kAFInfoDictionary_ChannelLayout = 'channel layout';
  kAFInfoDictionary_ApproximateDurationInSeconds = 'approximate duration in seconds';
  kAFInfoDictionary_SourceBitDepth = 'source bit depth';
  kAFInfoDictionary_ISRC = 'ISRC';
  kAFInfoDictionary_SubTitle = 'subtitle';
{$endif}

{$ifdef FUNCTIONS}
function AudioFileCreateWithURL(inFileRef: CFURLRef; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; outAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
function AudioFileOpenURL(inFileRef: CFURLRef; inPermissions: SInt8; inFileTypeHint: AudioFileTypeID; outAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
type
  AudioFile_ReadProc = function (inClientData: pointer; inPosition: SInt64; requestCount: UInt32; buffer: pointer; actualCount: UInt32Ptr): OSStatus; cdecl;
  AudioFile_WriteProc = function (inClientData: pointer; inPosition: SInt64; requestCount: UInt32; buffer: pointer; actualCount: UInt32Ptr): OSStatus; cdecl;
  AudioFile_GetSizeProc = function (inClientData: pointer): SInt64; cdecl;
  AudioFile_SetSizeProc = function (inClientData: pointer; inSize: SInt64): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioFileInitializeWithCallbacks(inClientData: pointer; inReadFunc: AudioFile_ReadProc; inWriteFunc: AudioFile_WriteProc; inGetSizeFunc: AudioFile_GetSizeProc; inSetSizeFunc: AudioFile_SetSizeProc; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; outAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFileOpenWithCallbacks(inClientData: pointer; inReadFunc: AudioFile_ReadProc; inWriteFunc: AudioFile_WriteProc; inGetSizeFunc: AudioFile_GetSizeProc; inSetSizeFunc: AudioFile_SetSizeProc; inFileTypeHint: AudioFileTypeID; outAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFileClose(inAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileOptimize(inAudioFile: AudioFileID): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileReadBytes(inAudioFile: AudioFileID; inUseCache: Boolean; inStartingByte: SInt64; ioNumBytes: UInt32Ptr; outBuffer: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileWriteBytes(inAudioFile: AudioFileID; inUseCache: Boolean; inStartingByte: SInt64; ioNumBytes: UInt32Ptr; inBuffer: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileReadPacketData(inAudioFile: AudioFileID; inUseCache: Boolean; ioNumBytes: UInt32Ptr; outPacketDescriptions: AudioStreamPacketDescriptionPtr; inStartingPacket: SInt64; ioNumPackets: UInt32Ptr; outBuffer: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_2 }
function AudioFileReadPackets(inAudioFile: AudioFileID; inUseCache: Boolean; outNumBytes: UInt32Ptr; outPacketDescriptions: AudioStreamPacketDescriptionPtr; inStartingPacket: SInt64; ioNumPackets: UInt32Ptr; outBuffer: pointer): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_10, __IPHONE_2_0,__IPHONE_8_0';
function AudioFileWritePackets(inAudioFile: AudioFileID; inUseCache: Boolean; inNumBytes: UInt32; inPacketDescriptions: AudioStreamPacketDescriptionPtr; inStartingPacket: SInt64; ioNumPackets: UInt32Ptr; inBuffer: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileCountUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; outNumberItems: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileGetUserDataSize(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32; outUserDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileGetUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32; ioUserDataSize: UInt32Ptr; outUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileSetUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32; inUserDataSize: UInt32; inUserData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4,__IPHONE_2_0 }
function AudioFileRemoveUserData(inAudioFile: AudioFileID; inUserDataID: UInt32; inIndex: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_5,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
const
  kAudioFilePropertyFileFormat = 'ffmt';
  kAudioFilePropertyDataFormat = 'dfmt';
  kAudioFilePropertyIsOptimized = 'optm';
  kAudioFilePropertyMagicCookieData = 'mgic';
  kAudioFilePropertyAudioDataByteCount = 'bcnt';
  kAudioFilePropertyAudioDataPacketCount = 'pcnt';
  kAudioFilePropertyMaximumPacketSize = 'psze';
  kAudioFilePropertyDataOffset = 'doff';
  kAudioFilePropertyChannelLayout = 'cmap';
  kAudioFilePropertyDeferSizeUpdates = 'dszu';
  kAudioFilePropertyDataFormatName = 'fnme';
  kAudioFilePropertyMarkerList = 'mkls';
  kAudioFilePropertyRegionList = 'rgls';
  kAudioFilePropertyPacketToFrame = 'pkfr';
  kAudioFilePropertyFrameToPacket = 'frpk';
  kAudioFilePropertyPacketToByte = 'pkby';
  kAudioFilePropertyByteToPacket = 'bypk';
  kAudioFilePropertyChunkIDs = 'chid';
  kAudioFilePropertyInfoDictionary = 'info';
  kAudioFilePropertyPacketTableInfo = 'pnfo';
  kAudioFilePropertyFormatList = 'flst';
  kAudioFilePropertyPacketSizeUpperBound = 'pkub';
  kAudioFilePropertyReserveDuration = 'rsrv';
  kAudioFilePropertyEstimatedDuration = 'edur';
  kAudioFilePropertyBitRate = 'brat';
  kAudioFilePropertyID3Tag = 'id3t';
  kAudioFilePropertySourceBitDepth = 'sbtd';
  kAudioFilePropertyAlbumArtwork = 'aart';
  kAudioFilePropertyAudioTrackCount = 'atct';
  kAudioFilePropertyUseAudioTrack = 'uatk';
{$endif}

{$ifdef FUNCTIONS}
function AudioFileGetPropertyInfo(inAudioFile: AudioFileID; inPropertyID: AudioFilePropertyID; outDataSize: UInt32Ptr; isWritable: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileGetProperty(inAudioFile: AudioFileID; inPropertyID: AudioFilePropertyID; ioDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
function AudioFileSetProperty(inAudioFile: AudioFileID; inPropertyID: AudioFilePropertyID; inDataSize: UInt32; inPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_2,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
const
  kAudioFileGlobalInfo_ReadableTypes = 'afrf';
  kAudioFileGlobalInfo_WritableTypes = 'afwf';
  kAudioFileGlobalInfo_FileTypeName = 'ftnm';
  kAudioFileGlobalInfo_AvailableStreamDescriptionsForFormat = 'sdid';
  kAudioFileGlobalInfo_AvailableFormatIDs = 'fmid';
  kAudioFileGlobalInfo_AllExtensions = 'alxt';
  kAudioFileGlobalInfo_AllHFSTypeCodes = 'ahfs';
  kAudioFileGlobalInfo_AllUTIs = 'auti';
  kAudioFileGlobalInfo_AllMIMETypes = 'amim';
  kAudioFileGlobalInfo_ExtensionsForType = 'fext';
  kAudioFileGlobalInfo_HFSTypeCodesForType = 'fhfs';
  kAudioFileGlobalInfo_UTIsForType = 'futi';
  kAudioFileGlobalInfo_MIMETypesForType = 'fmim';
  kAudioFileGlobalInfo_TypesForMIMEType = 'tmim';
  kAudioFileGlobalInfo_TypesForUTI = 'tuti';
  kAudioFileGlobalInfo_TypesForHFSTypeCode = 'thfs';
  kAudioFileGlobalInfo_TypesForExtension = 'text';

type
  AudioFileTypeAndFormatID = record
    mFileType: AudioFileTypeID;
    mFormatID: UInt32;
  end;
type
  AudioFileTypeAndFormatIDPtr = ^AudioFileTypeAndFormatID;
{$endif}

{$ifdef FUNCTIONS}
function AudioFileGetGlobalInfoSize(inPropertyID: AudioFilePropertyID; inSpecifierSize: UInt32; inSpecifier: pointer; outDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFileGetGlobalInfo(inPropertyID: AudioFilePropertyID; inSpecifierSize: UInt32; inSpecifier: pointer; ioDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function AudioFileCreate(inParentRef: FSRefPtr; inFileName: CFStringRef; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; outNewFileRef: FSRefPtr; outAudioFile: AudioFileID): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
function AudioFileInitialize(inFileRef: FSRefPtr; inFileType: AudioFileTypeID; inFormat: AudioStreamBasicDescriptionPtr; inFlags: UInt32; outAudioFile: AudioFileID): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
function AudioFileOpen(inFileRef: FSRefPtr; inPermissions: SInt8; inFileTypeHint: AudioFileTypeID; outAudioFile: AudioFileID): OSStatus; cdecl; external; deprecated 'in __MAC_10_2,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
{$endif}

{$endif}

{$endif}
