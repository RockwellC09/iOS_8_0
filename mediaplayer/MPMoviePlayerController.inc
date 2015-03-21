{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMoviePlayerController.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMoviePlayerControllerPtr = ^MPMoviePlayerController;
  MPTimedMetadataPtr = ^MPTimedMetadata;
  MPMovieAccessLogPtr = ^MPMovieAccessLog;
  MPMovieErrorLogPtr = ^MPMovieErrorLog;
  MPMovieAccessLogEventPtr = ^MPMovieAccessLogEvent;
  MPMovieErrorLogEventPtr = ^MPMovieErrorLogEvent;
{$endif}

{$ifdef TYPES}
type
  MPMovieScalingMode = NSInteger;
  MPMovieScalingModePtr = ^MPMovieScalingMode;

const
  MPMovieScalingModeNone = 0;
  MPMovieScalingModeAspectFit = 1;
  MPMovieScalingModeAspectFill = 2;
  MPMovieScalingModeFill = 3;

type
  MPMoviePlaybackState = NSInteger;
  MPMoviePlaybackStatePtr = ^MPMoviePlaybackState;

const
  MPMoviePlaybackStateStopped = 0;
  MPMoviePlaybackStatePlaying = 1;
  MPMoviePlaybackStatePaused = 2;
  MPMoviePlaybackStateInterrupted = 3;
  MPMoviePlaybackStateSeekingForward = 4;
  MPMoviePlaybackStateSeekingBackward = 5;

type
  MPMovieLoadState = NSUInteger;
  MPMovieLoadStatePtr = ^MPMovieLoadState;

const
  MPMovieLoadStateUnknown = 0;
  MPMovieLoadStatePlayable = 1 shl 0;
  MPMovieLoadStatePlaythroughOK = 1 shl 1;
  MPMovieLoadStateStalled = 1 shl 2;

type
  MPMovieRepeatMode = NSInteger;
  MPMovieRepeatModePtr = ^MPMovieRepeatMode;

const
  MPMovieRepeatModeNone = 0;
  MPMovieRepeatModeOne = 1;

type
  MPMovieControlStyle = NSInteger;
  MPMovieControlStylePtr = ^MPMovieControlStyle;

const
  MPMovieControlStyleNone = 0;
  MPMovieControlStyleEmbedded = 1;
  MPMovieControlStyleFullscreen = 2;
  MPMovieControlStyleDefault = MPMovieControlStyleEmbedded;

type
  MPMovieFinishReason = NSInteger;
  MPMovieFinishReasonPtr = ^MPMovieFinishReason;

const
  MPMovieFinishReasonPlaybackEnded = 0;
  MPMovieFinishReasonPlaybackError = 1;
  MPMovieFinishReasonUserExited = 2;

type
  MPMovieMediaTypeMask = NSUInteger;
  MPMovieMediaTypeMaskPtr = ^MPMovieMediaTypeMask;

const
  MPMovieMediaTypeMaskNone = 0;
  MPMovieMediaTypeMaskVideo = 1 shl 0;
  MPMovieMediaTypeMaskAudio = 1 shl 1;

type
  MPMovieSourceType = NSInteger;
  MPMovieSourceTypePtr = ^MPMovieSourceType;

const
  MPMovieSourceTypeUnknown = 0;
  MPMovieSourceTypeFile = 1;
  MPMovieSourceTypeStreaming = 2;
{$endif}

{$ifdef CLASSES}

type
  MPMoviePlayerController = objcclass external (NSObject, MPMediaPlaybackProtocol)
  public
    function initWithContentURL (url: NSURL): instancetype; message 'initWithContentURL:'; { NS_DESIGNATED_INITIALIZER }
    procedure setContentURL(newValue: NSURL); message 'setContentURL:';
    function contentURL: NSURL; message 'contentURL';
    function view: UIView; message 'view';
    function backgroundView: UIView; message 'backgroundView';
    function playbackState: MPMoviePlaybackState; message 'playbackState';
    function loadState: MPMovieLoadState; message 'loadState';
    procedure setControlStyle(newValue: MPMovieControlStyle); message 'setControlStyle:';
    function controlStyle: MPMovieControlStyle; message 'controlStyle';
    procedure setRepeatMode(newValue: MPMovieRepeatMode); message 'setRepeatMode:';
    function repeatMode: MPMovieRepeatMode; message 'repeatMode';
    procedure setShouldAutoplay(newValue: boolean); message 'setShouldAutoplay:';
    function shouldAutoplay: boolean; message 'shouldAutoplay';
    procedure setFullscreen(newValue: boolean); message 'setFullscreen:';
    function isFullscreen: boolean; message 'isFullscreen';
    procedure setFullscreen_animated (fullscreen: boolean; animated: boolean); message 'setFullscreen:animated:';
    procedure setScalingMode(newValue: MPMovieScalingMode); message 'setScalingMode:';
    function scalingMode: MPMovieScalingMode; message 'scalingMode';
    function readyForDisplay: boolean; message 'readyForDisplay';

    { Adopted protocols }
    procedure beginSeekingBackward; message 'beginSeekingBackward';
    procedure beginSeekingForward; message 'beginSeekingForward';
    procedure setCurrentPlaybackRate(newValue: single); message 'setCurrentPlaybackRate:';
    function currentPlaybackRate: single; message 'currentPlaybackRate';
    procedure setCurrentPlaybackTime(newValue: NSTimeInterval); message 'setCurrentPlaybackTime:';
    function currentPlaybackTime: NSTimeInterval; message 'currentPlaybackTime';
    procedure endSeeking; message 'endSeeking';
    function isPreparedToPlay: boolean; message 'isPreparedToPlay';
    procedure pause; message 'pause';
    procedure play; message 'play';
    procedure prepareToPlay; message 'prepareToPlay';
    procedure stop; message 'stop';
  end;


type
  MPMovieProperties = objccategory external (MPMoviePlayerController)
    function movieMediaTypes: MPMovieMediaTypeMask; message 'movieMediaTypes';
    procedure setMovieSourceType(newValue: MPMovieSourceType); message 'setMovieSourceType:';
    function movieSourceType: MPMovieSourceType; message 'movieSourceType';
    function duration: NSTimeInterval; message 'duration';
    function playableDuration: NSTimeInterval; message 'playableDuration';
    function naturalSize: CGSize; message 'naturalSize';
    procedure setInitialPlaybackTime(newValue: NSTimeInterval); message 'setInitialPlaybackTime:';
    function initialPlaybackTime: NSTimeInterval; message 'initialPlaybackTime';
    procedure setEndPlaybackTime(newValue: NSTimeInterval); message 'setEndPlaybackTime:';
    function endPlaybackTime: NSTimeInterval; message 'endPlaybackTime';
    procedure setAllowsAirPlay(newValue: boolean); message 'setAllowsAirPlay:';
    function allowsAirPlay: boolean; message 'allowsAirPlay';
    function isAirPlayVideoActive: boolean; message 'isAirPlayVideoActive';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPMoviePlayerScalingModeDidChangeNotification: NSString; cvar; external;
  MPMoviePlayerPlaybackDidFinishNotification: NSString; cvar; external;
  MPMoviePlayerPlaybackDidFinishReasonUserInfoKey: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerPlaybackStateDidChangeNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerLoadStateDidChangeNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerNowPlayingMovieDidChangeNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerWillEnterFullscreenNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerDidEnterFullscreenNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerWillExitFullscreenNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerDidExitFullscreenNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerFullscreenAnimationDurationUserInfoKey: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerFullscreenAnimationCurveUserInfoKey: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification: NSString { available in 5_0 }; cvar; external;
  MPMoviePlayerReadyForDisplayDidChangeNotification: NSString { available in 6_0 }; cvar; external;
  MPMovieMediaTypesAvailableNotification: NSString { available in 3_2 }; cvar; external;
  MPMovieSourceTypeAvailableNotification: NSString { available in 3_2 }; cvar; external;
  MPMovieDurationAvailableNotification: NSString { available in 3_2 }; cvar; external;
  MPMovieNaturalSizeAvailableNotification: NSString { available in 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MPMovieTimeOption = NSInteger;
  MPMovieTimeOptionPtr = ^MPMovieTimeOption;

const
  MPMovieTimeOptionNearestKeyFrame = 0;
  MPMovieTimeOptionExact = 1;
{$endif}

{$ifdef CLASSES}

type
  MPMoviePlayerThumbnailGeneration = objccategory external (MPMoviePlayerController)
    function thumbnailImageAtTime_timeOption (playbackTime: NSTimeInterval; option: MPMovieTimeOption): UIImage; message 'thumbnailImageAtTime:timeOption:'; deprecated 'in 3_2, 7_0';
    procedure requestThumbnailImagesAtTimes_timeOption (playbackTimes: NSArray; option: MPMovieTimeOption); message 'requestThumbnailImagesAtTimes:timeOption:'; { available in 3_2 }
    procedure cancelAllThumbnailImageRequests; message 'cancelAllThumbnailImageRequests'; { available in 3_2 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPMoviePlayerThumbnailImageRequestDidFinishNotification: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerThumbnailImageKey: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerThumbnailTimeKey: NSString { available in 3_2 }; cvar; external;
  MPMoviePlayerThumbnailErrorKey: NSString { available in 3_2 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MPMoviePlayerTimedMetadataAdditions = objccategory external (MPMoviePlayerController)
    function timedMetadata: NSArray; message 'timedMetadata';
  end;


type
  MPTimedMetadata = objcclass external (NSObject)
  public
    function key: NSString; message 'key';
    function keyspace: NSString; message 'keyspace';
    function value: id; message 'value';
    function timestamp: NSTimeInterval; message 'timestamp';
    function allMetadata: NSDictionary; message 'allMetadata';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPMoviePlayerTimedMetadataUpdatedNotification: NSString { available in 4_0 }; cvar; external;
  MPMoviePlayerTimedMetadataUserInfoKey: NSString { available in 4_0 }; cvar; external;
  MPMoviePlayerTimedMetadataKeyName: NSString { available in 4_0 }; cvar; external;
  MPMoviePlayerTimedMetadataKeyInfo: NSString { available in 4_0 }; cvar; external;
  MPMoviePlayerTimedMetadataKeyMIMEType: NSString { available in 4_0 }; cvar; external;
  MPMoviePlayerTimedMetadataKeyDataType: NSString { available in 4_0 }; cvar; external;
  MPMoviePlayerTimedMetadataKeyLanguageCode: NSString { available in 4_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MPMovieLogging = objccategory external (MPMoviePlayerController)
    function accessLog: MPMovieAccessLog; message 'accessLog';
    function errorLog: MPMovieErrorLog; message 'errorLog';
  end;


type
  MPMovieAccessLog = objcclass external (NSObject, NSCopyingProtocol)
  public
    function extendedLogData: NSData; message 'extendedLogData';
    function extendedLogDataStringEncoding: NSStringEncoding; message 'extendedLogDataStringEncoding';
    function events: NSArray; message 'events';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MPMovieErrorLog = objcclass external (NSObject, NSCopyingProtocol)
  public
    function extendedLogData: NSData; message 'extendedLogData';
    function extendedLogDataStringEncoding: NSStringEncoding; message 'extendedLogDataStringEncoding';
    function events: NSArray; message 'events';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MPMovieAccessLogEvent = objcclass external (NSObject, NSCopyingProtocol)
  public
    function numberOfSegmentsDownloaded: NSUInteger; message 'numberOfSegmentsDownloaded';
    function playbackStartDate: NSDate; message 'playbackStartDate';
    function URI: NSString; message 'URI';
    function serverAddress: NSString; message 'serverAddress';
    function numberOfServerAddressChanges: NSUInteger; message 'numberOfServerAddressChanges';
    function playbackSessionID: NSString; message 'playbackSessionID';
    function playbackStartOffset: NSTimeInterval; message 'playbackStartOffset';
    function segmentsDownloadedDuration: NSTimeInterval; message 'segmentsDownloadedDuration';
    function durationWatched: NSTimeInterval; message 'durationWatched';
    function numberOfStalls: NSInteger; message 'numberOfStalls';
    function numberOfBytesTransferred: cint64; message 'numberOfBytesTransferred';
    function observedBitrate: double; message 'observedBitrate';
    function indicatedBitrate: double; message 'indicatedBitrate';
    function numberOfDroppedVideoFrames: NSInteger; message 'numberOfDroppedVideoFrames';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MPMovieErrorLogEvent = objcclass external (NSObject, NSCopyingProtocol)
  public
    function date: NSDate; message 'date';
    function URI: NSString; message 'URI';
    function serverAddress: NSString; message 'serverAddress';
    function playbackSessionID: NSString; message 'playbackSessionID';
    function errorStatusCode: NSInteger; message 'errorStatusCode';
    function errorDomain: NSString; message 'errorDomain';
    function errorComment: NSString; message 'errorComment';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  MPMoviePlayerDeprecated = objccategory external (MPMoviePlayerController)
    procedure setUseApplicationAudioSession(newValue: boolean); message 'setUseApplicationAudioSession:';
    function useApplicationAudioSession: boolean; message 'useApplicationAudioSession';
  end;
{$endif}

