{ Parsed from UIKit.framework (iPhoneOS8.2) UIActivity.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIActivityPtr = ^UIActivity;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIActivityTypePostToFacebook: NSString { available in 6_0 }; cvar; external;
  UIActivityTypePostToTwitter: NSString { available in 6_0 }; cvar; external;
  UIActivityTypePostToWeibo: NSString { available in 6_0 }; cvar; external;
  UIActivityTypeMessage: NSString { available in 6_0 }; cvar; external;
  UIActivityTypeMail: NSString { available in 6_0 }; cvar; external;
  UIActivityTypePrint: NSString { available in 6_0 }; cvar; external;
  UIActivityTypeCopyToPasteboard: NSString { available in 6_0 }; cvar; external;
  UIActivityTypeAssignToContact: NSString { available in 6_0 }; cvar; external;
  UIActivityTypeSaveToCameraRoll: NSString { available in 6_0 }; cvar; external;
  UIActivityTypeAddToReadingList: NSString { available in 7_0 }; cvar; external;
  UIActivityTypePostToFlickr: NSString { available in 7_0 }; cvar; external;
  UIActivityTypePostToVimeo: NSString { available in 7_0 }; cvar; external;
  UIActivityTypePostToTencentWeibo: NSString { available in 7_0 }; cvar; external;
  UIActivityTypeAirDrop: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIActivityCategory = NSInteger;
  UIActivityCategoryPtr = ^UIActivityCategory;

const
  UIActivityCategoryAction = 0;
  UIActivityCategoryShare = 1;
{$endif}

{$ifdef CLASSES}

type
  UIActivity = objcclass external (NSObject)
  public
    class function activityCategory: UIActivityCategory; message 'activityCategory'; { available in 7_0 }
    function activityType: NSString; message 'activityType';
    function activityTitle: NSString; message 'activityTitle';
    function activityImage: UIImage; message 'activityImage';
    function canPerformWithActivityItems (activityItems: NSArray): boolean; message 'canPerformWithActivityItems:';
    procedure prepareWithActivityItems (activityItems: NSArray); message 'prepareWithActivityItems:';
    function activityViewController: UIViewController; message 'activityViewController';
    procedure performActivity; message 'performActivity';
    procedure activityDidFinish (completed: boolean); message 'activityDidFinish:';
  end;
{$endif}

