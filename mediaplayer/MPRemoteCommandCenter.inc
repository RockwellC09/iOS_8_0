{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPRemoteCommandCenter.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPRemoteCommandCenterPtr = ^MPRemoteCommandCenter;
{$endif}

{$ifdef CLASSES}

type
  MPRemoteCommandCenter = objcclass external (NSObject)
  public
    function pauseCommand: MPRemoteCommand; message 'pauseCommand';
    function playCommand: MPRemoteCommand; message 'playCommand';
    function stopCommand: MPRemoteCommand; message 'stopCommand';
    function togglePlayPauseCommand: MPRemoteCommand; message 'togglePlayPauseCommand';
    function nextTrackCommand: MPRemoteCommand; message 'nextTrackCommand';
    function previousTrackCommand: MPRemoteCommand; message 'previousTrackCommand';
    function skipForwardCommand: MPSkipIntervalCommand; message 'skipForwardCommand';
    function skipBackwardCommand: MPSkipIntervalCommand; message 'skipBackwardCommand';
    function seekForwardCommand: MPRemoteCommand; message 'seekForwardCommand';
    function seekBackwardCommand: MPRemoteCommand; message 'seekBackwardCommand';
    function ratingCommand: MPRatingCommand; message 'ratingCommand';
    function changePlaybackRateCommand: MPChangePlaybackRateCommand; message 'changePlaybackRateCommand';
    function likeCommand: MPFeedbackCommand; message 'likeCommand';
    function dislikeCommand: MPFeedbackCommand; message 'dislikeCommand';
    function bookmarkCommand: MPFeedbackCommand; message 'bookmarkCommand';
    class function sharedCommandCenter: MPRemoteCommandCenter; message 'sharedCommandCenter';
  end;
{$endif}

