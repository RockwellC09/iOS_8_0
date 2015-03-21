{ Parsed from IAd.framework (iPhoneOS8.2) ADBannerView_Deprecated.h }
{ Created on Fri Mar 20 2:11:02 2015 }

{$ifdef CLASSES}

type
  Deprecated = objccategory external (ADBannerView)
    procedure setRequiredContentSizeIdentifiers(newValue: NSSet); message 'setRequiredContentSizeIdentifiers:';
    function requiredContentSizeIdentifiers: NSSet; message 'requiredContentSizeIdentifiers';
    procedure setCurrentContentSizeIdentifier(newValue: NSString); message 'setCurrentContentSizeIdentifier:';
    function currentContentSizeIdentifier: NSString; message 'currentContentSizeIdentifier';
    class function sizeFromBannerContentSizeIdentifier (contentSizeIdentifier: NSString): CGSize; message 'sizeFromBannerContentSizeIdentifier:'; deprecated 'in 4_0, 6_0';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ADBannerContentSizeIdentifier320x50: NSString deprecated 'in 4_0, 4_2'; cvar; external;
  ADBannerContentSizeIdentifier480x32: NSString deprecated 'in 4_0, 4_2'; cvar; external;
  ADBannerContentSizeIdentifierPortrait: NSString deprecated 'in 4_2, 6_0'; cvar; external;
  ADBannerContentSizeIdentifierLandscape: NSString deprecated 'in 4_2, 6_0'; cvar; external;
{$endif}

