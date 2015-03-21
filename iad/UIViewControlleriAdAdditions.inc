{ Parsed from IAd.framework (iPhoneOS8.2) UIViewControlleriAdAdditions.h }
{ Created on Fri Mar 20 2:11:02 2015 }

{$ifdef TYPES}
type
  ADInterstitialPresentationPolicy = NSInteger;
  ADInterstitialPresentationPolicyPtr = ^ADInterstitialPresentationPolicy;

const
  ADInterstitialPresentationPolicyNone = 0;
  ADInterstitialPresentationPolicyAutomatic = 1;
  ADInterstitialPresentationPolicyManual = 2;
{$endif}

{$ifdef CLASSES}

type
  iAdAdditions = objccategory external (UIViewController)
    class procedure prepareInterstitialAds; message 'prepareInterstitialAds'; { available in 7_0 }
    procedure setInterstitialPresentationPolicy(newValue: ADInterstitialPresentationPolicy); message 'setInterstitialPresentationPolicy:';
    function interstitialPresentationPolicy: ADInterstitialPresentationPolicy; message 'interstitialPresentationPolicy';
    procedure setCanDisplayBannerAds(newValue: boolean); message 'setCanDisplayBannerAds:';
    function canDisplayBannerAds: boolean; message 'canDisplayBannerAds';
    function originalContentView: UIView; message 'originalContentView';
    function isPresentingFullScreenAd: boolean; message 'isPresentingFullScreenAd';
    function isDisplayingBannerAd: boolean; message 'isDisplayingBannerAd';
    function requestInterstitialAdPresentation: boolean; message 'requestInterstitialAdPresentation'; { available in 7_0 }
    function shouldPresentInterstitialAd: boolean; message 'shouldPresentInterstitialAd';
  end;
{$endif}

