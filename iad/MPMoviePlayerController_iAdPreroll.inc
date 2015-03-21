{ Parsed from IAd.framework (iPhoneOS8.2) MPMoviePlayerController_iAdPreroll.h }
{ Created on Fri Mar 20 2:11:02 2015 }

{$ifdef CLASSES}

type
  MPMoviePlayerController_iAdPreroll = objccategory external name 'iAdPreroll' (MPMoviePlayerController)
    class procedure preparePrerollAds; message 'preparePrerollAds'; { available in 7_0 }
    procedure playPrerollAdWithCompletionHandler (completionHandler: OpaqueCBlock); message 'playPrerollAdWithCompletionHandler:'; { available in 7_0 }
    procedure cancelPreroll; message 'cancelPreroll'; { available in 8_0 }
  end;
{$endif}

