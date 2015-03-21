{ Parsed from UIKit.framework (iPhoneOS8.2) UITabBarItem.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UITabBarItemPtr = ^UITabBarItem;
{$endif}

{$ifdef TYPES}
type
  UITabBarSystemItem = NSInteger;
  UITabBarSystemItemPtr = ^UITabBarSystemItem;

const
  UITabBarSystemItemMore = 0;
  UITabBarSystemItemFavorites = 1;
  UITabBarSystemItemFeatured = 2;
  UITabBarSystemItemTopRated = 3;
  UITabBarSystemItemRecents = 4;
  UITabBarSystemItemContacts = 5;
  UITabBarSystemItemHistory = 6;
  UITabBarSystemItemBookmarks = 7;
  UITabBarSystemItemSearch = 8;
  UITabBarSystemItemDownloads = 9;
  UITabBarSystemItemMostRecent = 10;
  UITabBarSystemItemMostViewed = 11;
{$endif}

{$ifdef CLASSES}

type
  UITabBarItem = objcclass external (UIBarItem)
  private
    _title: NSString;
    _action: SEL;
    _target: id;
    _templateImage: UIImage;
    _selectedTemplateImage: UIImage;
    _selectedImage: UIImage;
    _unselectedImage: UIImage;
    _imageInsets: UIEdgeInsets;
    _badgeValue: NSString;
    _view: UIView;
    _tag: NSInteger;
    _appearanceStorage: id;
    _tabBarItemFlags: bitpacked record
      case byte of
        0: (_anonBitField__tabBarItemFlags0: cuint);
        1: (
          enabled: 0..1;
          style: 0..((1 shl 3)-1);
          isSystemItem: 0..1;
          systemItem: 0..((1 shl 7)-1);
          viewIsCustom: 0..1;
          animatedBadge: 0..1;
          customSelectedImage: 0..1;
          customUnselectedImage: 0..1;
        );
      end;
  public
    function initWithTitle_image_tag (title_: NSString; image_: UIImage; tag_: NSInteger): instancetype; message 'initWithTitle:image:tag:';
    function initWithTitle_image_selectedImage (title_: NSString; image_: UIImage; selectedImage: UIImage): instancetype; message 'initWithTitle:image:selectedImage:'; { available in 7_0 }
    function initWithTabBarSystemItem_tag (systemItem: UITabBarSystemItem; tag_: NSInteger): instancetype; message 'initWithTabBarSystemItem:tag:';
    procedure setSelectedImage(newValue: UIImage); message 'setSelectedImage:';
    function selectedImage: UIImage; message 'selectedImage';
    procedure setBadgeValue(newValue: NSString); message 'setBadgeValue:';
    function badgeValue: NSString; message 'badgeValue';
    procedure setFinishedSelectedImage_withFinishedUnselectedImage (selectedImage_: UIImage; unselectedImage: UIImage); message 'setFinishedSelectedImage:withFinishedUnselectedImage:'; deprecated 'in 5_0,7_0,"Use initWithTitle:image:selectedImage: or the image and selectedImage properties along with UIImageRenderingModeAlwaysOriginal"';
    function finishedSelectedImage: UIImage; message 'finishedSelectedImage'; deprecated 'in 5_0,7_0';
    function finishedUnselectedImage: UIImage; message 'finishedUnselectedImage'; deprecated 'in 5_0,7_0';
    procedure setTitlePositionAdjustment (adjustment: UIOffset); message 'setTitlePositionAdjustment:'; { available in 5_0 }
    function titlePositionAdjustment: UIOffset; message 'titlePositionAdjustment'; { available in 5_0 }
  end;
{$endif}

