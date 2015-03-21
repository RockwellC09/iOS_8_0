{ Parsed from UIKit.framework (iPhoneOS8.2) UIBarButtonItem.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIBarButtonItemPtr = ^UIBarButtonItem;
{$endif}

{$ifdef TYPES}
type
  UIBarButtonItemStyle = NSInteger;
  UIBarButtonItemStylePtr = ^UIBarButtonItemStyle;

const
  UIBarButtonItemStylePlain = 0;
  UIBarButtonItemStyleBordered = 1 deprecated 'in 2_0, 8_0, "Use UIBarButtonItemStylePlain when minimum deployment target is iOS7 or later"';
  UIBarButtonItemStyleDone = 2;

type
  UIBarButtonSystemItem = NSInteger;
  UIBarButtonSystemItemPtr = ^UIBarButtonSystemItem;

const
  UIBarButtonSystemItemDone = 0;
  UIBarButtonSystemItemCancel = 1;
  UIBarButtonSystemItemEdit = 2;
  UIBarButtonSystemItemSave = 3;
  UIBarButtonSystemItemAdd = 4;
  UIBarButtonSystemItemFlexibleSpace = 5;
  UIBarButtonSystemItemFixedSpace = 6;
  UIBarButtonSystemItemCompose = 7;
  UIBarButtonSystemItemReply = 8;
  UIBarButtonSystemItemAction = 9;
  UIBarButtonSystemItemOrganize = 10;
  UIBarButtonSystemItemBookmarks = 11;
  UIBarButtonSystemItemSearch = 12;
  UIBarButtonSystemItemRefresh = 13;
  UIBarButtonSystemItemStop = 14;
  UIBarButtonSystemItemCamera = 15;
  UIBarButtonSystemItemTrash = 16;
  UIBarButtonSystemItemPlay = 17;
  UIBarButtonSystemItemPause = 18;
  UIBarButtonSystemItemRewind = 19;
  UIBarButtonSystemItemFastForward = 20;
  {$if (__IPHONE_3_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  UIBarButtonSystemItemUndo = 21;
  UIBarButtonSystemItemRedo = 22;
  {$endif}
  {$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  UIBarButtonSystemItemPageCurl = 23;
  {$endif}
{$endif}

{$ifdef CLASSES}

type
  UIBarButtonItem = objcclass external (UIBarItem, NSCodingProtocol)
  private
    _title: NSString;
    _possibleTitles: NSSet;
    _action: SEL;
    _target: id;
    _image: UIImage;
    _landscapeImagePhone: UIImage;
    _imageInsets: UIEdgeInsets;
    _landscapeImagePhoneInsets: UIEdgeInsets;
    _width: CGFloat;
    _view: UIView;
    _tag: NSInteger;
    _appearanceStorage: id;
    _barButtonItemFlags: bitpacked record
      case byte of
        0: (_anonBitField__barButtonItemFlags0: cuint);
        1: (
          enabled: 0..1;
          style: 0..((1 shl 3)-1);
          isSystemItem: 0..1;
          systemItem: 0..((1 shl 7)-1);
          viewIsCustom: 0..1;
          isMinibarView: 0..1;
          disableAutosizing: 0..1;
          selected: 0..1;
          imageHasEffects: 0..1;
        );
      end;
  public
    function initWithImage_style_target_action (image_: UIImage; style: UIBarButtonItemStyle; target: id; action: SEL): instancetype; message 'initWithImage:style:target:action:';
    function initWithImage_landscapeImagePhone_style_target_action (image_: UIImage; landscapeImagePhone_: UIImage; style: UIBarButtonItemStyle; target: id; action: SEL): instancetype; message 'initWithImage:landscapeImagePhone:style:target:action:'; { available in 5_0 }
    function initWithTitle_style_target_action (title_: NSString; style: UIBarButtonItemStyle; target: id; action: SEL): instancetype; message 'initWithTitle:style:target:action:';
    function initWithBarButtonSystemItem_target_action (systemItem: UIBarButtonSystemItem; target: id; action: SEL): instancetype; message 'initWithBarButtonSystemItem:target:action:';
    function initWithCustomView (customView: UIView): instancetype; message 'initWithCustomView:';
    procedure setStyle(newValue: UIBarButtonItemStyle); message 'setStyle:';
    function style: UIBarButtonItemStyle; message 'style';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setPossibleTitles(newValue: NSSet); message 'setPossibleTitles:';
    function possibleTitles: NSSet; message 'possibleTitles';
    procedure setCustomView(newValue: UIView); message 'setCustomView:';
    function customView: UIView; message 'customView';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setBackgroundImage_forState_barMetrics (backgroundImage: UIImage; state: UIControlState; barMetrics: UIBarMetrics); message 'setBackgroundImage:forState:barMetrics:'; { available in 5_0 }
    function backgroundImageForState_barMetrics (state: UIControlState; barMetrics: UIBarMetrics): UIImage; message 'backgroundImageForState:barMetrics:'; { available in 5_0 }
    procedure setBackgroundImage_forState_style_barMetrics (backgroundImage: UIImage; state: UIControlState; style_: UIBarButtonItemStyle; barMetrics: UIBarMetrics); message 'setBackgroundImage:forState:style:barMetrics:'; { available in 6_0 }
    function backgroundImageForState_style_barMetrics (state: UIControlState; style_: UIBarButtonItemStyle; barMetrics: UIBarMetrics): UIImage; message 'backgroundImageForState:style:barMetrics:'; { available in 6_0 }
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBackgroundVerticalPositionAdjustment_forBarMetrics (adjustment: CGFloat; barMetrics: UIBarMetrics); message 'setBackgroundVerticalPositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function backgroundVerticalPositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): CGFloat; message 'backgroundVerticalPositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure setTitlePositionAdjustment_forBarMetrics (adjustment: UIOffset; barMetrics: UIBarMetrics); message 'setTitlePositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function titlePositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): UIOffset; message 'titlePositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure setBackButtonBackgroundImage_forState_barMetrics (backgroundImage: UIImage; state: UIControlState; barMetrics: UIBarMetrics); message 'setBackButtonBackgroundImage:forState:barMetrics:'; { available in 5_0 }
    function backButtonBackgroundImageForState_barMetrics (state: UIControlState; barMetrics: UIBarMetrics): UIImage; message 'backButtonBackgroundImageForState:barMetrics:'; { available in 5_0 }
    procedure setBackButtonTitlePositionAdjustment_forBarMetrics (adjustment: UIOffset; barMetrics: UIBarMetrics); message 'setBackButtonTitlePositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function backButtonTitlePositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): UIOffset; message 'backButtonTitlePositionAdjustmentForBarMetrics:'; { available in 5_0 }
    procedure setBackButtonBackgroundVerticalPositionAdjustment_forBarMetrics (adjustment: CGFloat; barMetrics: UIBarMetrics); message 'setBackButtonBackgroundVerticalPositionAdjustment:forBarMetrics:'; { available in 5_0 }
    function backButtonBackgroundVerticalPositionAdjustmentForBarMetrics (barMetrics: UIBarMetrics): CGFloat; message 'backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:'; { available in 5_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

