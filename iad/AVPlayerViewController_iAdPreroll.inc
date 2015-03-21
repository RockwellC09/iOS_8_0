{ Parsed from IAd.framework (iPhoneOS8.2) AVPlayerViewController_iAdPreroll.h }
{ Created on Fri Mar 20 2:11:02 2015 }

{$ifdef CLASSES}

type
  iAdPreroll = objccategory external (AVPlayerViewController)
    class procedure preparePrerollAds; message 'preparePrerollAds'; { available in 8_0 }
    procedure playPrerollAdWithCompletionHandler (completionHandler: OpaqueCBlock); message 'playPrerollAdWithCompletionHandler:'; { available in 8_0 }
    procedure cancelPreroll; message 'cancelPreroll'; { available in 8_0 }
  end;
{$endif}

