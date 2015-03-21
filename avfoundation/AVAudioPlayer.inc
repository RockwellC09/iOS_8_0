{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAudioPlayer.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{ Types from AVAudioPlayer }
{$ifdef TYPES}

{$endif}


{ Types from AVAudioPlayerDelegateProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioPlayerPtr = ^AVAudioPlayer;
  AVAudioPlayerDelegateProtocolPtr = ^AVAudioPlayerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AVAudioPlayer = objcclass external (NSObject)
  private
    _impl: id;
  public
    function initWithContentsOfURL_error (url: NSURL; outError: NSErrorPtr): instancetype; message 'initWithContentsOfURL:error:';
    function initWithData_error (data: NSData; outError: NSErrorPtr): instancetype; message 'initWithData:error:';
    function initWithContentsOfURL_fileTypeHint_error (url: NSURL; utiString: NSString; outError: NSErrorPtr): instancetype; message 'initWithContentsOfURL:fileTypeHint:error:'; { available in 10_9, 7_0 }
    function initWithData_fileTypeHint_error (data: NSData; utiString: NSString; outError: NSErrorPtr): instancetype; message 'initWithData:fileTypeHint:error:'; { available in 10_9, 7_0 }
    function prepareToPlay: boolean; message 'prepareToPlay';
    function play: boolean; message 'play';
    function playAtTime (time: NSTimeInterval): boolean; message 'playAtTime:'; { available in 10_7, 4_0 }
    procedure pause; message 'pause';
    procedure stop; message 'stop';
    function isPlaying: boolean; message 'isPlaying';
    function numberOfChannels: NSUInteger; message 'numberOfChannels';
    function duration: NSTimeInterval; message 'duration';
    procedure setDelegate(newValue: AVAudioPlayerDelegateProtocol); message 'setDelegate:';
    function delegate: AVAudioPlayerDelegateProtocol; message 'delegate';
    function url: NSURL; message 'url';
    function data: NSData; message 'data';
    procedure setPan(newValue: single); message 'setPan:';
    function pan: single; message 'pan';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setEnableRate(newValue: boolean); message 'setEnableRate:';
    function enableRate: boolean; message 'enableRate';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setCurrentTime(newValue: NSTimeInterval); message 'setCurrentTime:';
    function currentTime: NSTimeInterval; message 'currentTime';
    function deviceCurrentTime: NSTimeInterval; message 'deviceCurrentTime';
    procedure setNumberOfLoops(newValue: NSInteger); message 'setNumberOfLoops:';
    function numberOfLoops: NSInteger; message 'numberOfLoops';
    function settings: NSDictionary; message 'settings';
    procedure setMeteringEnabled(newValue: boolean); message 'setMeteringEnabled:';
    function isMeteringEnabled: boolean; message 'isMeteringEnabled';
    procedure updateMeters; message 'updateMeters';
    function peakPowerForChannel (channelNumber: NSUInteger): single; message 'peakPowerForChannel:';
    function averagePowerForChannel (channelNumber: NSUInteger): single; message 'averagePowerForChannel:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setChannelAssignments(newValue: NSArray); message 'setChannelAssignments:';
    function channelAssignments: NSArray; message 'channelAssignments';
    {$endif}
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAudioPlayerDelegateProtocol = objcprotocol external name 'AVAudioPlayerDelegate' (NSObjectProtocol)
  optional
    procedure audioPlayerDidFinishPlaying_successfully (player: AVAudioPlayer; flag: boolean); message 'audioPlayerDidFinishPlaying:successfully:';
    procedure audioPlayerDecodeErrorDidOccur_error (player: AVAudioPlayer; error: NSError); message 'audioPlayerDecodeErrorDidOccur:error:';
    {$if defined(TARGET_OS_IPHONE)}
    procedure audioPlayerBeginInterruption (player: AVAudioPlayer); message 'audioPlayerBeginInterruption:'; deprecated 'in 2_2, 8_0';
    procedure audioPlayerEndInterruption_withOptions (player: AVAudioPlayer; flags: NSUInteger); message 'audioPlayerEndInterruption:withOptions:'; deprecated 'in 6_0, 8_0';
    procedure audioPlayerEndInterruption_withFlags (player: AVAudioPlayer; flags: NSUInteger); message 'audioPlayerEndInterruption:withFlags:'; deprecated 'in 4_0, 6_0';
    procedure audioPlayerEndInterruption (player: AVAudioPlayer); message 'audioPlayerEndInterruption:'; deprecated 'in 2_2, 6_0';
    {$endif}
  end;
{$endif}

