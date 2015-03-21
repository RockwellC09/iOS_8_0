{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPNowPlayingInfoCenter.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPNowPlayingInfoCenterPtr = ^MPNowPlayingInfoCenter;
{$endif}

{$ifdef CLASSES}

type
  MPNowPlayingInfoCenter = objcclass external (NSObject)
  public
    class function defaultCenter: MPNowPlayingInfoCenter; message 'defaultCenter';
    procedure setNowPlayingInfo(newValue: NSDictionary); message 'setNowPlayingInfo:';
    function nowPlayingInfo: NSDictionary; message 'nowPlayingInfo';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPNowPlayingInfoPropertyElapsedPlaybackTime: NSString { available in 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyPlaybackRate: NSString { available in 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyDefaultPlaybackRate: NSString { available in 8_0 }; cvar; external;
  MPNowPlayingInfoPropertyPlaybackQueueIndex: NSString { available in 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyPlaybackQueueCount: NSString { available in 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyChapterNumber: NSString { available in 5_0 }; cvar; external;
  MPNowPlayingInfoPropertyChapterCount: NSString { available in 5_0 }; cvar; external;
{$endif}

