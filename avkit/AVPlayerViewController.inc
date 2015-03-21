{ Parsed from AVKit.framework (iPhoneOS8.2) AVPlayerViewController.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  AVPlayerViewControllerPtr = ^AVPlayerViewController;
{$endif}

{$ifdef CLASSES}

type
  AVPlayerViewController = objcclass external (UIViewController)
  public
    procedure setPlayer(newValue: AVPlayer); message 'setPlayer:';
    function player: AVPlayer; message 'player';
    procedure setShowsPlaybackControls(newValue: boolean); message 'setShowsPlaybackControls:';
    function showsPlaybackControls: boolean; message 'showsPlaybackControls';
    procedure setVideoGravity(newValue: NSString); message 'setVideoGravity:';
    function videoGravity: NSString; message 'videoGravity';
    function isReadyForDisplay: boolean; message 'isReadyForDisplay';
    function videoBounds: CGRect; message 'videoBounds';
    function contentOverlayView: UIView; message 'contentOverlayView';
  end;
{$endif}

