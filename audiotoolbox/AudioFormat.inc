{ Parsed from AudioToolbox.framework (iPhoneOS8.2) AudioFormat.h }
{ Created on Fri Mar 20 2:10:47 2015 }

{$if  not (defined(__AudioFormat_h__))}

{$ifdef TYPES}
type
  AudioFormatPropertyID = UInt32;
  AudioFormatPropertyIDPtr = ^AudioFormatPropertyID;

const
  kPanningMode_SoundField = 3;
  kPanningMode_VectorBasedPanning = 4;

type
  AudioPanningInfo = record
    mPanningMode: UInt32;
    mCoordinateFlags: UInt32;
    mCoordinates:array[0..2] of Float32;
    mGainScale: Float32;
    mOutputChannelMap: AudioChannelLayoutPtr;
  end;
type
  AudioPanningInfoPtr = ^AudioPanningInfo;

const
  kAudioBalanceFadeType_MaxUnityGain = 0;
  kAudioBalanceFadeType_EqualPower = 1;

type
  AudioBalanceFade = record
    mLeftRightBalance: Float32;
    mBackFrontFade: Float32;
    mType: UInt32;
    mChannelLayout: AudioChannelLayoutPtr;
  end;
type
  AudioBalanceFadePtr = ^AudioBalanceFade;
type
  AudioFormatInfo = record
    mASBD: AudioStreamBasicDescription;
    mMagicCookie: pointer;
    mMagicCookieSize: UInt32;
  end;
type
  AudioFormatInfoPtr = ^AudioFormatInfo;
type
  ExtendedAudioFormatInfo = record
    mASBD: AudioStreamBasicDescription;
    mMagicCookie: pointer;
    mMagicCookieSize: UInt32;
    mClassDescription: AudioClassDescription;
  end;
type
  ExtendedAudioFormatInfoPtr = ^ExtendedAudioFormatInfo;
type
  AudioFormatListItem = record
    mASBD: AudioStreamBasicDescription;
    mChannelLayoutTag: AudioChannelLayoutTag;
  end;
type
  AudioFormatListItemPtr = ^AudioFormatListItem;

const
  kAudioFormatProperty_FormatInfo = 'fmti';
  kAudioFormatProperty_FormatName = 'fnam';
  kAudioFormatProperty_EncodeFormatIDs = 'acof';
  kAudioFormatProperty_DecodeFormatIDs = 'acif';
  kAudioFormatProperty_FormatList = 'flst';
  kAudioFormatProperty_ASBDFromESDS = 'essd';
  kAudioFormatProperty_ChannelLayoutFromESDS = 'escl';
  kAudioFormatProperty_OutputFormatList = 'ofls';
  kAudioFormatProperty_FirstPlayableFormatFromList = 'fpfl';
  kAudioFormatProperty_FormatIsVBR = 'fvbr';
  kAudioFormatProperty_FormatIsExternallyFramed = 'fexf';
  kAudioFormatProperty_FormatIsEncrypted = 'cryp';
  kAudioFormatProperty_Encoders = 'aven';
  kAudioFormatProperty_Decoders = 'avde';
  kAudioFormatProperty_AvailableEncodeBitRates = 'aebr';
  kAudioFormatProperty_AvailableEncodeSampleRates = 'aesr';
  kAudioFormatProperty_AvailableEncodeChannelLayoutTags = 'aecl';
  kAudioFormatProperty_AvailableEncodeNumberChannels = 'avnc';
  kAudioFormatProperty_ASBDFromMPEGPacket = 'admp';
  kAudioFormatProperty_BitmapForLayoutTag = 'bmtg';
  kAudioFormatProperty_MatrixMixMap = 'mmap';
  kAudioFormatProperty_ChannelMap = 'chmp';
  kAudioFormatProperty_NumberOfChannelsForLayout = 'nchm';
  kAudioFormatProperty_AreChannelLayoutsEquivalent = 'cheq';
  kAudioFormatProperty_ChannelLayoutHash = 'chha';
  kAudioFormatProperty_ValidateChannelLayout = 'vacl';
  kAudioFormatProperty_ChannelLayoutForTag = 'cmpl';
  kAudioFormatProperty_TagForChannelLayout = 'cmpt';
  kAudioFormatProperty_ChannelLayoutName = 'lonm';
  kAudioFormatProperty_ChannelLayoutSimpleName = 'lsnm';
  kAudioFormatProperty_ChannelLayoutForBitmap = 'cmpb';
  kAudioFormatProperty_ChannelName = 'cnam';
  kAudioFormatProperty_ChannelShortName = 'csnm';
  kAudioFormatProperty_TagsForNumberOfChannels = 'tagc';
  kAudioFormatProperty_PanningMatrix = 'panm';
  kAudioFormatProperty_BalanceFade = 'balf';
  kAudioFormatProperty_ID3TagSize = 'id3s';
  kAudioFormatProperty_ID3TagToDictionary = 'id3d';
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  kAudioFormatProperty_HardwareCodecCapabilities = 'hwcc';
const
  kAudioDecoderComponentType = 'adec';
  kAudioEncoderComponentType = 'aenc';
const
  kAppleSoftwareAudioCodecManufacturer = 'appl';
  kAppleHardwareAudioCodecManufacturer = 'aphw';
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function AudioFormatGetPropertyInfo(inPropertyID: AudioFormatPropertyID; inSpecifierSize: UInt32; inSpecifier: pointer; outPropertyDataSize: UInt32Ptr): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
function AudioFormatGetProperty(inPropertyID: AudioFormatPropertyID; inSpecifierSize: UInt32; inSpecifier: pointer; ioPropertyDataSize: UInt32Ptr; outPropertyData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_3,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
const
  kAudioFormatUnspecifiedError = 'what';
  kAudioFormatUnsupportedPropertyError = 'prop';
  kAudioFormatBadPropertySizeError = '!siz';
  kAudioFormatBadSpecifierSizeError = '!spc';
  kAudioFormatUnsupportedDataFormatError = 'fmt?';
  kAudioFormatUnknownFormatError = '!fmt';
{$endif}

{$endif}
