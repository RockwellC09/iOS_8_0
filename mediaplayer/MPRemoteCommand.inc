{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPRemoteCommand.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPRemoteCommandPtr = ^MPRemoteCommand;
  MPSkipIntervalCommandPtr = ^MPSkipIntervalCommand;
  MPFeedbackCommandPtr = ^MPFeedbackCommand;
  MPRatingCommandPtr = ^MPRatingCommand;
  MPChangePlaybackRateCommandPtr = ^MPChangePlaybackRateCommand;
{$endif}

{$ifdef TYPES}
type
  MPRemoteCommandHandlerStatus = NSInteger;
  MPRemoteCommandHandlerStatusPtr = ^MPRemoteCommandHandlerStatus;

const
  MPRemoteCommandHandlerStatusSuccess = 0;
  MPRemoteCommandHandlerStatusNoSuchContent = 100;
  MPRemoteCommandHandlerStatusCommandFailed = 200;
{$endif}

{$ifdef CLASSES}

type
  MPRemoteCommand = objcclass external (NSObject)
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure addTarget_action (target: id; action: SEL); message 'addTarget:action:';
    procedure removeTarget_action (target: id; action: SEL); message 'removeTarget:action:';
    procedure removeTarget (target: id); message 'removeTarget:';
    function addTargetWithHandler (handler: OpaqueCBlock): id; message 'addTargetWithHandler:';
  end;

type
  MPSkipIntervalCommand = objcclass external (MPRemoteCommand)
  public
    procedure setPreferredIntervals(newValue: NSArray); message 'setPreferredIntervals:';
    function preferredIntervals: NSArray; message 'preferredIntervals';
  end;

type
  MPFeedbackCommand = objcclass external (MPRemoteCommand)
  public
    procedure setActive(newValue: boolean); message 'setActive:';
    function isActive: boolean; message 'isActive';
    procedure setLocalizedTitle(newValue: NSString); message 'setLocalizedTitle:';
    function localizedTitle: NSString; message 'localizedTitle';
    procedure setLocalizedShortTitle(newValue: NSString); message 'setLocalizedShortTitle:';
    function localizedShortTitle: NSString; message 'localizedShortTitle';
  end;

type
  MPRatingCommand = objcclass external (MPRemoteCommand)
  public
    procedure setMinimumRating(newValue: single); message 'setMinimumRating:';
    function minimumRating: single; message 'minimumRating';
    procedure setMaximumRating(newValue: single); message 'setMaximumRating:';
    function maximumRating: single; message 'maximumRating';
  end;

type
  MPChangePlaybackRateCommand = objcclass external (MPRemoteCommand)
  public
    procedure setSupportedPlaybackRates(newValue: NSArray); message 'setSupportedPlaybackRates:';
    function supportedPlaybackRates: NSArray; message 'supportedPlaybackRates';
  end;
{$endif}

