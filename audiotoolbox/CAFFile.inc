{ Parsed from AudioToolbox.framework (iPhoneOS8.2) CAFFile.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$ifndef _CAFFile_H_}

{$ifdef TYPES}
const
  kCAF_FileType = 'caff';
  kCAF_FileVersion_Initial = 1;
const
  kCAF_StreamDescriptionChunkID = 'desc';
  kCAF_AudioDataChunkID = 'data';
  kCAF_ChannelLayoutChunkID = 'chan';
  kCAF_FillerChunkID = 'free';
  kCAF_MarkerChunkID = 'mark';
  kCAF_RegionChunkID = 'regn';
  kCAF_InstrumentChunkID = 'inst';
  kCAF_MagicCookieID = 'kuki';
  kCAF_InfoStringsChunkID = 'info';
  kCAF_EditCommentsChunkID = 'edct';
  kCAF_PacketTableChunkID = 'pakt';
  kCAF_StringsChunkID = 'strg';
  kCAF_UUIDChunkID = 'uuid';
  kCAF_PeakChunkID = 'peak';
  kCAF_OverviewChunkID = 'ovvw';
  kCAF_MIDIChunkID = 'midi';
  kCAF_UMIDChunkID = 'umid';
  kCAF_FormatListID = 'ldsc';
  kCAF_iXMLChunkID = 'iXML';

type
  CAFFileHeader = record
    mFileType: UInt32;
    mFileVersion: UInt16;
    mFileFlags: UInt16;
  end;
type
  CAFFileHeaderPtr = ^CAFFileHeader;
type
  CAFChunkHeader = record
    mChunkType: UInt32;
    mChunkSize: SInt64;
  end;
type
  CAFChunkHeaderPtr = ^CAFChunkHeader;
type
  CAF_UUID_ChunkHeader = record
    mHeader: CAFChunkHeader;
    mUUID:array[0..15] of UInt8;
  end;
type
  CAF_UUID_ChunkHeaderPtr = ^CAF_UUID_ChunkHeader;
type
  CAFAudioDescription = record
    mSampleRate: Float64;
    mFormatID: UInt32;
    mFormatFlags: UInt32;
    mBytesPerPacket: UInt32;
    mFramesPerPacket: UInt32;
    mChannelsPerFrame: UInt32;
    mBitsPerChannel: UInt32;
  end;
type
  CAFAudioDescriptionPtr = ^CAFAudioDescription;

const
  kCAFLinearPCMFormatFlagIsFloat = 1 shl 0;
  kCAFLinearPCMFormatFlagIsLittleEndian = 1 shl 1;

type
  CAFAudioFormatListItem = record
    mFormat: CAFAudioDescription;
    mChannelLayoutTag: UInt32;
  end;
type
  CAFAudioFormatListItemPtr = ^CAFAudioFormatListItem;
type
  CAFPacketTableHeader = record
    mNumberPackets: SInt64;
    mNumberValidFrames: SInt64;
    mPrimingFrames: SInt32;
    mRemainderFrames: SInt32;
    mPacketDescriptions:array[0..0] of UInt8;
  end;
type
  CAFPacketTableHeaderPtr = ^CAFPacketTableHeader;
type
  CAFDataChunk = record
    mEditCount: UInt32;
    mData:array[0..0] of UInt8;
  end;
type
  CAFDataChunkPtr = ^CAFDataChunk;

const
  kCAFMarkerType_Generic = 0;
  kCAFMarkerType_ProgramStart = 'pbeg';
  kCAFMarkerType_ProgramEnd = 'pend';
  kCAFMarkerType_TrackStart = 'tbeg';
  kCAFMarkerType_TrackEnd = 'tend';
  kCAFMarkerType_Index = 'indx';
  kCAFMarkerType_RegionStart = 'rbeg';
  kCAFMarkerType_RegionEnd = 'rend';
  kCAFMarkerType_RegionSyncPoint = 'rsyc';
  kCAFMarkerType_SelectionStart = 'sbeg';
  kCAFMarkerType_SelectionEnd = 'send';
  kCAFMarkerType_EditSourceBegin = 'cbeg';
  kCAFMarkerType_EditSourceEnd = 'cend';
  kCAFMarkerType_EditDestinationBegin = 'dbeg';
  kCAFMarkerType_EditDestinationEnd = 'dend';
  kCAFMarkerType_SustainLoopStart = 'slbg';
  kCAFMarkerType_SustainLoopEnd = 'slen';
  kCAFMarkerType_ReleaseLoopStart = 'rlbg';
  kCAFMarkerType_ReleaseLoopEnd = 'rlen';
  kCAFMarkerType_SavedPlayPosition = 'sply';
  kCAFMarkerType_Tempo = 'tmpo';
  kCAFMarkerType_TimeSignature = 'tsig';
  kCAFMarkerType_KeySignature = 'ksig';
const
  kCAF_SMPTE_TimeTypeNone = 0;
  kCAF_SMPTE_TimeType24 = 1;
  kCAF_SMPTE_TimeType25 = 2;
  kCAF_SMPTE_TimeType30Drop = 3;
  kCAF_SMPTE_TimeType30 = 4;
  kCAF_SMPTE_TimeType2997 = 5;
  kCAF_SMPTE_TimeType2997Drop = 6;
  kCAF_SMPTE_TimeType60 = 7;
  kCAF_SMPTE_TimeType5994 = 8;
  kCAF_SMPTE_TimeType60Drop = 9;
  kCAF_SMPTE_TimeType5994Drop = 10;
  kCAF_SMPTE_TimeType50 = 11;
  kCAF_SMPTE_TimeType2398 = 12;

type
  CAF_SMPTE_Time = record
    mHours: SInt8;
    mMinutes: SInt8;
    mSeconds: SInt8;
    mFrames: SInt8;
    mSubFrameSampleOffset: UInt32;
  end;
type
  CAF_SMPTE_TimePtr = ^CAF_SMPTE_Time;
type
  CAFMarker = record
    mType: UInt32;
    mFramePosition: Float64;
    mMarkerID: UInt32;
    mSMPTETime: CAF_SMPTE_Time;
    mChannel: UInt32;
  end;
type
  CAFMarkerPtr = ^CAFMarker;
type
  CAFMarkerChunk = record
    mSMPTE_TimeType: UInt32;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of CAFMarker;
  end;
type
  CAFMarkerChunkPtr = ^CAFMarkerChunk;

const
  kCAFRegionFlag_LoopEnable = 1;
  kCAFRegionFlag_PlayForward = 2;
  kCAFRegionFlag_PlayBackward = 4;

type
  CAFRegion = record
    mRegionID: UInt32;
    mFlags: UInt32;
    mNumberMarkers: UInt32;
    mMarkers:array[0..0] of CAFMarker;
  end;
type
  CAFRegionPtr = ^CAFRegion;
type
  CAFRegionChunk = record
    mSMPTE_TimeType: UInt32;
    mNumberRegions: UInt32;
    mRegions:array[0..0] of CAFRegion;
  end;
type
  CAFRegionChunkPtr = ^CAFRegionChunk;
type
  CAFInstrumentChunk = record
    mBaseNote: Float32;
    mMIDILowNote: UInt8;
    mMIDIHighNote: UInt8;
    mMIDILowVelocity: UInt8;
    mMIDIHighVelocity: UInt8;
    mdBGain: Float32;
    mStartRegionID: UInt32;
    mSustainRegionID: UInt32;
    mReleaseRegionID: UInt32;
    mInstrumentID: UInt32;
  end;
type
  CAFInstrumentChunkPtr = ^CAFInstrumentChunk;
type
  CAFStringID = record
    mStringID: UInt32;
    mStringStartByteOffset: SInt64;
  end;
type
  CAFStringIDPtr = ^CAFStringID;
type
  CAFStrings = record
    mNumEntries: UInt32;
    mStringsIDs:array[0..0] of CAFStringID;
  end;
type
  CAFStringsPtr = ^CAFStrings;
type
  CAFInfoStrings = record
    mNumEntries: UInt32;
  end;
type
  CAFInfoStringsPtr = ^CAFInfoStrings;
type
  CAFPositionPeak = record
    mValue: Float32;
    mFrameNumber: UInt64;
  end;
type
  CAFPositionPeakPtr = ^CAFPositionPeak;
type
  CAFPeakChunk = record
    mEditCount: UInt32;
    mPeaks:array[0..0] of CAFPositionPeak;
  end;
type
  CAFPeakChunkPtr = ^CAFPeakChunk;
type
  CAFOverviewSample = record
    mMinValue: SInt16;
    mMaxValue: SInt16;
  end;
type
  CAFOverviewSamplePtr = ^CAFOverviewSample;
type
  CAFOverviewChunk = record
    mEditCount: UInt32;
    mNumFramesPerOVWSample: UInt32;
    mData:array[0..0] of CAFOverviewSample;
  end;
type
  CAFOverviewChunkPtr = ^CAFOverviewChunk;
type
  CAFUMIDChunk = record
    mBytes:array[0..63] of UInt8;
  end;
type
  CAFUMIDChunkPtr = ^CAFUMIDChunk;
{$endif}

{$endif}
