{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPRemoteCommandEvent.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPRemoteCommandEventPtr = ^MPRemoteCommandEvent;
  MPSkipIntervalCommandEventPtr = ^MPSkipIntervalCommandEvent;
  MPSeekCommandEventPtr = ^MPSeekCommandEvent;
  MPRatingCommandEventPtr = ^MPRatingCommandEvent;
  MPChangePlaybackRateCommandEventPtr = ^MPChangePlaybackRateCommandEvent;
  MPFeedbackCommandEventPtr = ^MPFeedbackCommandEvent;
{$endif}

{$ifdef CLASSES}

type
  MPRemoteCommandEvent = objcclass external (NSObject)
  public
    function command: MPRemoteCommand; message 'command';
    function timestamp: NSTimeInterval; message 'timestamp';
  end;

type
  MPSkipIntervalCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function interval: NSTimeInterval; message 'interval';
  end;
{$endif}

{$ifdef TYPES}
type
  MPSeekCommandEventType = NSUInteger;
  MPSeekCommandEventTypePtr = ^MPSeekCommandEventType;

const
  MPSeekCommandEventTypeBeginSeeking = 0;
  MPSeekCommandEventTypeEndSeeking = 1;
{$endif}

{$ifdef CLASSES}

type
  MPSeekCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function type_: MPSeekCommandEventType; message 'type';
  end;

type
  MPRatingCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function rating: single; message 'rating';
  end;

type
  MPChangePlaybackRateCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function playbackRate: single; message 'playbackRate';
  end;

type
  MPFeedbackCommandEvent = objcclass external (MPRemoteCommandEvent)
  public
    function isNegative: boolean; message 'isNegative';
  end;
{$endif}

