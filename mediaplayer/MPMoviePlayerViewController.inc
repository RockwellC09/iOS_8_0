{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMoviePlayerViewController.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMoviePlayerViewControllerPtr = ^MPMoviePlayerViewController;
{$endif}

{$ifdef CLASSES}

type
  MPMoviePlayerViewController = objcclass external (UIViewController)
  public
    function initWithContentURL (contentURL: NSURL): instancetype; message 'initWithContentURL:'; { NS_DESIGNATED_INITIALIZER }
    function moviePlayer: MPMoviePlayerController; message 'moviePlayer';
  end;


type
  UIViewController_MPMoviePlayerViewController = objccategory external name 'MPMoviePlayerViewController' (UIViewController)
    procedure presentMoviePlayerViewControllerAnimated (moviePlayerViewController: MPMoviePlayerViewController); message 'presentMoviePlayerViewControllerAnimated:';
    procedure dismissMoviePlayerViewControllerAnimated; message 'dismissMoviePlayerViewControllerAnimated';
  end;
{$endif}

