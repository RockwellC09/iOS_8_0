{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesMediaPlayer;
interface

type
  MPChangePlaybackRateCommand = objcclass external;
  MPChangePlaybackRateCommandEvent = objcclass external;
  MPContentItem = objcclass external;
  MPFeedbackCommand = objcclass external;
  MPFeedbackCommandEvent = objcclass external;
  MPMediaEntity = objcclass external;
  MPMediaItem = objcclass external;
  MPMediaItemArtwork = objcclass external;
  MPMediaItemCollection = objcclass external;
  MPMediaLibrary = objcclass external;
  MPMediaPickerController = objcclass external;
  MPMediaPlaylist = objcclass external;
  MPMediaPredicate = objcclass external;
  MPMediaPropertyPredicate = objcclass external;
  MPMediaQuery = objcclass external;
  MPMediaQuerySection = objcclass external;
  MPMovieAccessLog = objcclass external;
  MPMovieAccessLogEvent = objcclass external;
  MPMovieErrorLog = objcclass external;
  MPMovieErrorLogEvent = objcclass external;
  MPMoviePlayerController = objcclass external;
  MPMoviePlayerViewController = objcclass external;
  MPMusicPlayerController = objcclass external;
  MPNowPlayingInfoCenter = objcclass external;
  MPPlayableContentManager = objcclass external;
  MPRatingCommand = objcclass external;
  MPRatingCommandEvent = objcclass external;
  MPRemoteCommand = objcclass external;
  MPRemoteCommandCenter = objcclass external;
  MPRemoteCommandEvent = objcclass external;
  MPSeekCommandEvent = objcclass external;
  MPSkipIntervalCommand = objcclass external;
  MPSkipIntervalCommandEvent = objcclass external;
  MPTimedMetadata = objcclass external;
  MPVolumeView = objcclass external;
  MPMediaPickerControllerDelegateProtocol = objcprotocol external name 'MPMediaPickerControllerDelegate';
  MPMediaPlaybackProtocol = objcprotocol external name 'MPMediaPlayback';
  MPPlayableContentDataSourceProtocol = objcprotocol external name 'MPPlayableContentDataSource';
  MPPlayableContentDelegateProtocol = objcprotocol external name 'MPPlayableContentDelegate';

type
  MPMusicPlayerControllerInternal = objcclass external;
  UIImage = objcclass external;

implementation
end.
