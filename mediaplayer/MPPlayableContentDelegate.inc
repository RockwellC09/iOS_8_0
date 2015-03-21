{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPPlayableContentDelegate.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPPlayableContentDelegateProtocolPtr = ^MPPlayableContentDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MPPlayableContentDelegateProtocol = objcprotocol external name 'MPPlayableContentDelegate' (NSObjectProtocol)
  optional
    procedure playableContentManager_initiatePlaybackOfContentItemAtIndexPath_completionHandler (contentManager: MPPlayableContentManager; indexPath: NSIndexPath; completionHandler: OpaqueCBlock); message 'playableContentManager:initiatePlaybackOfContentItemAtIndexPath:completionHandler:';
  end;
{$endif}

