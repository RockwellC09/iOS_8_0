{ Parsed from UIKit.framework (iPhoneOS8.2) UIMenuController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIMenuControllerPtr = ^UIMenuController;
  UIMenuItemPtr = ^UIMenuItem;
{$endif}

{$ifdef TYPES}
type
  UIMenuControllerArrowDirection = NSInteger;
  UIMenuControllerArrowDirectionPtr = ^UIMenuControllerArrowDirection;

const
  UIMenuControllerArrowDefault = 0;
  {$if (__IPHONE_3_2 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  UIMenuControllerArrowUp = 1;
  UIMenuControllerArrowDown = 2;
  UIMenuControllerArrowLeft = 3;
  UIMenuControllerArrowRight = 4;
  {$endif}
{$endif}

{$ifdef CLASSES}

type
  UIMenuController = objcclass external (NSObject)
  private
    _targetRect: CGRect;
    _arrowDirection: UIMenuControllerArrowDirection;
  public
    class function sharedMenuController: UIMenuController; message 'sharedMenuController';
    procedure setMenuVisible(newValue: boolean); message 'setMenuVisible:';
    function isMenuVisible: boolean; message 'isMenuVisible';
    procedure setMenuVisible_animated (menuVisible: boolean; animated: boolean); message 'setMenuVisible:animated:';
    procedure setTargetRect_inView (targetRect: CGRect; targetView: UIView); message 'setTargetRect:inView:';
    procedure setArrowDirection(newValue: UIMenuControllerArrowDirection); message 'setArrowDirection:';
    function arrowDirection: UIMenuControllerArrowDirection; message 'arrowDirection';
    procedure setMenuItems(newValue: NSArray); message 'setMenuItems:';
    function menuItems: NSArray; message 'menuItems';
    procedure update; message 'update';
    function menuFrame: CGRect; message 'menuFrame';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIMenuControllerWillShowMenuNotification: NSString; cvar; external;
  UIMenuControllerDidShowMenuNotification: NSString; cvar; external;
  UIMenuControllerWillHideMenuNotification: NSString; cvar; external;
  UIMenuControllerDidHideMenuNotification: NSString; cvar; external;
  UIMenuControllerMenuFrameDidChangeNotification: NSString { available in 3_2 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIMenuItem = objcclass external (NSObject)
  private
    _title: NSString;
    _action: SEL;
    _dontDismiss: boolean;
  public
    function initWithTitle_action (title: NSString; action: SEL): instancetype; message 'initWithTitle:action:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
  end;
{$endif}

