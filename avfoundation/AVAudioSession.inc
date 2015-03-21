{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAudioSession.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{ Types from AVAudioSession }
{$ifdef TYPES}

type
  PermissionBlock = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  AVAudioSessionPtr = ^AVAudioSession;
  AVAudioSessionChannelDescriptionPtr = ^AVAudioSessionChannelDescription;
  AVAudioSessionPortDescriptionPtr = ^AVAudioSessionPortDescription;
  AVAudioSessionRouteDescriptionPtr = ^AVAudioSessionRouteDescription;
  AVAudioSessionDataSourceDescriptionPtr = ^AVAudioSessionDataSourceDescription;
  AVAudioSessionDelegateProtocolPtr = ^AVAudioSessionDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  AVAudioSessionInterruptionOptions = NSUInteger;
  AVAudioSessionInterruptionOptionsPtr = ^AVAudioSessionInterruptionOptions;

const
  AVAudioSessionInterruptionOptionShouldResume = 1;

type
  AVAudioSessionSetActiveOptions = NSUInteger;
  AVAudioSessionSetActiveOptionsPtr = ^AVAudioSessionSetActiveOptions;

const
  AVAudioSessionSetActiveOptionNotifyOthersOnDeactivation = 1;

type
  AVAudioSessionPortOverride = NSUInteger;
  AVAudioSessionPortOverridePtr = ^AVAudioSessionPortOverride;

const
  AVAudioSessionPortOverrideNone = 0;
  AVAudioSessionPortOverrideSpeaker = 'spkr';

type
  AVAudioSessionRouteChangeReason = NSUInteger;
  AVAudioSessionRouteChangeReasonPtr = ^AVAudioSessionRouteChangeReason;

const
  AVAudioSessionRouteChangeReasonUnknown = 0;
  AVAudioSessionRouteChangeReasonNewDeviceAvailable = 1;
  AVAudioSessionRouteChangeReasonOldDeviceUnavailable = 2;
  AVAudioSessionRouteChangeReasonCategoryChange = 3;
  AVAudioSessionRouteChangeReasonOverride = 4;
  AVAudioSessionRouteChangeReasonWakeFromSleep = 6;
  AVAudioSessionRouteChangeReasonNoSuitableRouteForCategory = 7;
  AVAudioSessionRouteChangeReasonRouteConfigurationChange = 8 { available in 7_0 };

type
  AVAudioSessionCategoryOptions = NSUInteger;
  AVAudioSessionCategoryOptionsPtr = ^AVAudioSessionCategoryOptions;

const
  AVAudioSessionCategoryOptionMixWithOthers = 1;
  AVAudioSessionCategoryOptionDuckOthers = 2;
  AVAudioSessionCategoryOptionAllowBluetooth = 4;
  AVAudioSessionCategoryOptionDefaultToSpeaker = 8;

type
  AVAudioSessionInterruptionType = NSUInteger;
  AVAudioSessionInterruptionTypePtr = ^AVAudioSessionInterruptionType;

const
  AVAudioSessionInterruptionTypeBegan = 1;
  AVAudioSessionInterruptionTypeEnded = 0;

type
  AVAudioSessionSilenceSecondaryAudioHintType = NSUInteger;
  AVAudioSessionSilenceSecondaryAudioHintTypePtr = ^AVAudioSessionSilenceSecondaryAudioHintType;

const
  AVAudioSessionSilenceSecondaryAudioHintTypeBegin = 1;
  AVAudioSessionSilenceSecondaryAudioHintTypeEnd = 0;

type
  AVAudioSessionRecordPermission = NSUInteger;
  AVAudioSessionRecordPermissionPtr = ^AVAudioSessionRecordPermission;

const
  AVAudioSessionRecordPermissionUndetermined = 'undt';
  AVAudioSessionRecordPermissionDenied = 'deny';
  AVAudioSessionRecordPermissionGranted = 'grnt';

type
  AVAudioSessionErrorCode = NSInteger;
  AVAudioSessionErrorCodePtr = ^AVAudioSessionErrorCode;

const
  AVAudioSessionErrorCodeNone = 0;
  AVAudioSessionErrorCodeMediaServicesFailed = 'msrv';
  AVAudioSessionErrorCodeIsBusy = '!act';
  AVAudioSessionErrorCodeIncompatibleCategory = '!cat';
  AVAudioSessionErrorCodeCannotInterruptOthers = '!int';
  AVAudioSessionErrorCodeMissingEntitlement = 'ent?';
  AVAudioSessionErrorCodeSiriIsRecording = 'siri';
  AVAudioSessionErrorCodeCannotStartPlaying = '!pla';
  AVAudioSessionErrorCodeCannotStartRecording = '!rec';
  AVAudioSessionErrorCodeBadParam = -50;
  AVAudioSessionErrorInsufficientPriority = '!pri';
  AVAudioSessionErrorCodeUnspecified = 'what';
{$endif}

{$ifdef CLASSES}

type
  AVAudioSession = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    class function sharedInstance: AVAudioSession; message 'sharedInstance';
    function setActive_error (active: boolean; outError: NSErrorPtr): boolean; message 'setActive:error:';
    function setActive_withOptions_error (active: boolean; options: AVAudioSessionSetActiveOptions; outError: NSErrorPtr): boolean; message 'setActive:withOptions:error:'; { available in 6_0 }
    function setCategory_error (category: NSString; outError: NSErrorPtr): boolean; message 'setCategory:error:';
    function setCategory_withOptions_error (category: NSString; options: AVAudioSessionCategoryOptions; outError: NSErrorPtr): boolean; message 'setCategory:withOptions:error:'; { available in 6_0 }
    function recordPermission: AVAudioSessionRecordPermission; message 'recordPermission';
    procedure requestRecordPermission (response: PermissionBlock); message 'requestRecordPermission:'; { available in 7_0 }
    function category: NSString; message 'category';
    function categoryOptions: AVAudioSessionCategoryOptions; message 'categoryOptions';
    function setMode_error (mode: NSString; outError: NSErrorPtr): boolean; message 'setMode:error:'; { available in 5_0 }
    function mode: NSString; message 'mode';
    function overrideOutputAudioPort_error (portOverride: AVAudioSessionPortOverride; outError: NSErrorPtr): boolean; message 'overrideOutputAudioPort:error:'; { available in 6_0 }
    function isOtherAudioPlaying: boolean; message 'isOtherAudioPlaying';
    function secondaryAudioShouldBeSilencedHint: boolean; message 'secondaryAudioShouldBeSilencedHint';
    function currentRoute: AVAudioSessionRouteDescription; message 'currentRoute';
    function setPreferredInput_error (inPort: AVAudioSessionPortDescription; outError: NSErrorPtr): boolean; message 'setPreferredInput:error:'; { available in 7_0 }
    function preferredInput: AVAudioSessionPortDescription; message 'preferredInput';
    function availableInputs: NSArray; message 'availableInputs';
  end;


type
  AVAudioSessionHardwareConfiguration = objccategory external (AVAudioSession)
    function setPreferredSampleRate_error (sampleRate: double; outError: NSErrorPtr): boolean; message 'setPreferredSampleRate:error:'; { available in 6_0 }
    function preferredSampleRate: double; message 'preferredSampleRate';
    function setPreferredIOBufferDuration_error (duration: NSTimeInterval; outError: NSErrorPtr): boolean; message 'setPreferredIOBufferDuration:error:';
    function preferredIOBufferDuration: NSTimeInterval; message 'preferredIOBufferDuration';
    function setPreferredInputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): boolean; message 'setPreferredInputNumberOfChannels:error:'; { available in 7_0 }
    function preferredInputNumberOfChannels: NSInteger; message 'preferredInputNumberOfChannels';
    function setPreferredOutputNumberOfChannels_error (count: NSInteger; outError: NSErrorPtr): boolean; message 'setPreferredOutputNumberOfChannels:error:'; { available in 7_0 }
    function preferredOutputNumberOfChannels: NSInteger; message 'preferredOutputNumberOfChannels';
    function maximumInputNumberOfChannels: NSInteger; message 'maximumInputNumberOfChannels';
    function maximumOutputNumberOfChannels: NSInteger; message 'maximumOutputNumberOfChannels';
    function setInputGain_error (gain: single; outError: NSErrorPtr): boolean; message 'setInputGain:error:'; { available in 6_0 }
    function inputGain: single; message 'inputGain';
    function isInputGainSettable: boolean; message 'isInputGainSettable';
    function isInputAvailable: boolean; message 'isInputAvailable';
    function inputDataSources: NSArray; message 'inputDataSources';
    function inputDataSource: AVAudioSessionDataSourceDescription; message 'inputDataSource';
    function setInputDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): boolean; message 'setInputDataSource:error:'; { available in 6_0 }
    function outputDataSources: NSArray; message 'outputDataSources';
    function outputDataSource: AVAudioSessionDataSourceDescription; message 'outputDataSource';
    function setOutputDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): boolean; message 'setOutputDataSource:error:'; { available in 6_0 }
    function sampleRate: double; message 'sampleRate';
    function inputNumberOfChannels: NSInteger; message 'inputNumberOfChannels';
    function outputNumberOfChannels: NSInteger; message 'outputNumberOfChannels';
    function outputVolume: single; message 'outputVolume';
    function inputLatency: NSTimeInterval; message 'inputLatency';
    function outputLatency: NSTimeInterval; message 'outputLatency';
    function IOBufferDuration: NSTimeInterval; message 'IOBufferDuration';
  end;

type
  AVAudioSessionDeprecated = objccategory external (AVAudioSession)
    procedure setDelegate(newValue: AVAudioSessionDelegateProtocol); message 'setDelegate:';
    function delegate: AVAudioSessionDelegateProtocol; message 'delegate';
    function setActive_withFlags_error (active: boolean; flags: NSInteger; outError: NSErrorPtr): boolean; message 'setActive:withFlags:error:'; deprecated 'in 4_0, 6_0';
    function inputIsAvailable: boolean; message 'inputIsAvailable';
    function currentHardwareSampleRate: double; message 'currentHardwareSampleRate';
    function currentHardwareInputNumberOfChannels: NSInteger; message 'currentHardwareInputNumberOfChannels';
    function currentHardwareOutputNumberOfChannels: NSInteger; message 'currentHardwareOutputNumberOfChannels';
    function setPreferredHardwareSampleRate_error (sampleRate: double; outError: NSErrorPtr): boolean; message 'setPreferredHardwareSampleRate:error:'; deprecated 'in 3_0, 6_0';
    function preferredHardwareSampleRate: double; message 'preferredHardwareSampleRate';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAudioSessionInterruptionNotification: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionRouteChangeNotification: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionMediaServicesWereLostNotification: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionMediaServicesWereResetNotification: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionSilenceSecondaryAudioHintNotification: NSString { available in 8_0 }; cvar; external;
  AVAudioSessionInterruptionTypeKey: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionInterruptionOptionKey: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionRouteChangeReasonKey: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionRouteChangePreviousRouteKey: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionSilenceSecondaryAudioHintTypeKey: NSString { available in 8_0 }; cvar; external;
  AVAudioSessionCategoryAmbient: NSString; cvar; external;
  AVAudioSessionCategorySoloAmbient: NSString; cvar; external;
  AVAudioSessionCategoryPlayback: NSString; cvar; external;
  AVAudioSessionCategoryRecord: NSString; cvar; external;
  AVAudioSessionCategoryPlayAndRecord: NSString; cvar; external;
  AVAudioSessionCategoryAudioProcessing: NSString; cvar; external;
  AVAudioSessionCategoryMultiRoute: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionModeDefault: NSString { available in 5_0 }; cvar; external;
  AVAudioSessionModeVoiceChat: NSString { available in 5_0 }; cvar; external;
  AVAudioSessionModeGameChat: NSString { available in 5_0 }; cvar; external;
  AVAudioSessionModeVideoRecording: NSString { available in 5_0 }; cvar; external;
  AVAudioSessionModeMeasurement: NSString { available in 5_0 }; cvar; external;
  AVAudioSessionModeMoviePlayback: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionModeVideoChat: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionPortLineIn: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortBuiltInMic: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortHeadsetMic: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortLineOut: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortHeadphones: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortBluetoothA2DP: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortBuiltInReceiver: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortBuiltInSpeaker: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortHDMI: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortAirPlay: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortBluetoothLE: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionPortBluetoothHFP: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortUSBAudio: NSString { available in 6_0 }; cvar; external;
  AVAudioSessionPortCarAudio: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionLocationUpper: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionLocationLower: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionOrientationTop: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionOrientationBottom: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionOrientationFront: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionOrientationBack: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionOrientationLeft: NSString { available in 8_0 }; cvar; external;
  AVAudioSessionOrientationRight: NSString { available in 8_0 }; cvar; external;
  AVAudioSessionPolarPatternOmnidirectional: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionPolarPatternCardioid: NSString { available in 7_0 }; cvar; external;
  AVAudioSessionPolarPatternSubcardioid: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAudioSessionChannelDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function channelName: NSString; message 'channelName';
    function owningPortUID: NSString; message 'owningPortUID';
    function channelNumber: NSUInteger; message 'channelNumber';
    function channelLabel: AudioChannelLabel; message 'channelLabel';
  end;

type
  AVAudioSessionPortDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function portType: NSString; message 'portType';
    function portName: NSString; message 'portName';
    function UID: NSString; message 'UID';
    function channels: NSArray; message 'channels';
    function dataSources: NSArray; message 'dataSources';
    function selectedDataSource: AVAudioSessionDataSourceDescription; message 'selectedDataSource';
    function preferredDataSource: AVAudioSessionDataSourceDescription; message 'preferredDataSource';
    function setPreferredDataSource_error (dataSource: AVAudioSessionDataSourceDescription; outError: NSErrorPtr): boolean; message 'setPreferredDataSource:error:'; { available in 7_0 }
  end;

type
  AVAudioSessionRouteDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function inputs: NSArray; message 'inputs';
    function outputs: NSArray; message 'outputs';
  end;

type
  AVAudioSessionDataSourceDescription = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function dataSourceID: NSNumber; message 'dataSourceID';
    function dataSourceName: NSString; message 'dataSourceName';
    function location: NSString; message 'location';
    function orientation: NSString; message 'orientation';
    function supportedPolarPatterns: NSArray; message 'supportedPolarPatterns';
    function selectedPolarPattern: NSString; message 'selectedPolarPattern';
    function preferredPolarPattern: NSString; message 'preferredPolarPattern';
    function setPreferredPolarPattern_error (pattern: NSString; outError: NSErrorPtr): boolean; message 'setPreferredPolarPattern:error:'; { available in 7_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioSessionDelegateProtocol = objcprotocol external name 'AVAudioSessionDelegate' (NSObjectProtocol)
  optional
    procedure beginInterruption; message 'beginInterruption';
    procedure endInterruptionWithFlags (flags: NSUInteger); message 'endInterruptionWithFlags:'; { available in 4_0 }
    procedure endInterruption; message 'endInterruption';
    procedure inputIsAvailableChanged (isInputAvailable: boolean); message 'inputIsAvailableChanged:';
  end;
{$endif}

{$ifdef TYPES}
const
  AVAudioSessionInterruptionFlags_ShouldResume = 1;
const
  AVAudioSessionSetActiveFlags_NotifyOthersOnDeactivation = 1;
{$endif}

