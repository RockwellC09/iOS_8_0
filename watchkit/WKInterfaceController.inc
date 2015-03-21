{ Parsed from WatchKit.framework (iPhoneOS8.2) WKInterfaceController.h }
{ Created on Fri Mar 20 2:11:37 2015 }


{$ifdef TYPES}
type
  WKInterfaceControllerPtr = ^WKInterfaceController;
  WKUserNotificationInterfaceControllerPtr = ^WKUserNotificationInterfaceController;
{$endif}

{$ifdef TYPES}
type
  WKUserNotificationInterfaceType = NSInteger;
  WKUserNotificationInterfaceTypePtr = ^WKUserNotificationInterfaceType;

const
  WKUserNotificationInterfaceTypeDefault = 0;
  WKUserNotificationInterfaceTypeCustom = 1;

type
  WKMenuItemIcon = NSInteger;
  WKMenuItemIconPtr = ^WKMenuItemIcon;

const
  WKMenuItemIconAccept = 0;
  WKMenuItemIconAdd = 1;
  WKMenuItemIconBlock = 2;
  WKMenuItemIconDecline = 3;
  WKMenuItemIconInfo = 4;
  WKMenuItemIconMaybe = 5;
  WKMenuItemIconMore = 6;
  WKMenuItemIconMute = 7;
  WKMenuItemIconPause = 8;
  WKMenuItemIconPlay = 9;
  WKMenuItemIconRepeat = 10;
  WKMenuItemIconResume = 11;
  WKMenuItemIconShare = 12;
  WKMenuItemIconShuffle = 13;
  WKMenuItemIconSpeaker = 14;
  WKMenuItemIconTrash = 15;

type
  WKTextInputMode = NSInteger;
  WKTextInputModePtr = ^WKTextInputMode;

const
  WKTextInputModePlain = 0;
  WKTextInputModeAllowEmoji = 1;
  WKTextInputModeAllowAnimatedEmoji = 2;
{$endif}

{$ifdef CLASSES}

type
  WKInterfaceController = objcclass external (NSObject)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure awakeWithContext (context: id); message 'awakeWithContext:';
    function contentFrame: CGRect; message 'contentFrame';
    procedure willActivate; message 'willActivate';
    procedure didDeactivate; message 'didDeactivate';
    procedure table_didSelectRowAtIndex (table: WKInterfaceTable; rowIndex: NSInteger); message 'table:didSelectRowAtIndex:';
    procedure handleActionWithIdentifier_forRemoteNotification (identifier: NSString; remoteNotification: NSDictionary); message 'handleActionWithIdentifier:forRemoteNotification:';
    procedure handleActionWithIdentifier_forLocalNotification (identifier: NSString; localNotification: UILocalNotification); message 'handleActionWithIdentifier:forLocalNotification:';
    procedure handleUserActivity (userInfo: NSDictionary); message 'handleUserActivity:';
    procedure setTitle (title: NSString); message 'setTitle:';
    procedure pushControllerWithName_context (name: NSString; context: id); message 'pushControllerWithName:context:';
    procedure popController; message 'popController';
    procedure popToRootController; message 'popToRootController';
    class procedure reloadRootControllersWithNames_contexts (names: NSArray; contexts: NSArray); message 'reloadRootControllersWithNames:contexts:';
    procedure becomeCurrentPage; message 'becomeCurrentPage';
    procedure presentControllerWithName_context (name: NSString; context: id); message 'presentControllerWithName:context:';
    procedure presentControllerWithNames_contexts (names: NSArray; contexts: NSArray); message 'presentControllerWithNames:contexts:';
    procedure dismissController; message 'dismissController';
    procedure presentTextInputControllerWithSuggestions_allowedInputMode_completion (suggestions: NSArray; inputMode: WKTextInputMode; completion: OpaqueCBlock); message 'presentTextInputControllerWithSuggestions:allowedInputMode:completion:';
    procedure dismissTextInputController; message 'dismissTextInputController';
    function contextForSegueWithIdentifier (segueIdentifier: NSString): id; message 'contextForSegueWithIdentifier:';
    function contextsForSegueWithIdentifier (segueIdentifier: NSString): NSArray; message 'contextsForSegueWithIdentifier:';
    function contextForSegueWithIdentifier_inTable_rowIndex (segueIdentifier: NSString; table: WKInterfaceTable; rowIndex: NSInteger): id; message 'contextForSegueWithIdentifier:inTable:rowIndex:';
    function contextsForSegueWithIdentifier_inTable_rowIndex (segueIdentifier: NSString; table: WKInterfaceTable; rowIndex: NSInteger): NSArray; message 'contextsForSegueWithIdentifier:inTable:rowIndex:';
    procedure addMenuItemWithImage_title_action (image: UIImage; title: NSString; action: SEL); message 'addMenuItemWithImage:title:action:';
    procedure addMenuItemWithImageNamed_title_action (imageName: NSString; title: NSString; action: SEL); message 'addMenuItemWithImageNamed:title:action:';
    procedure addMenuItemWithItemIcon_title_action (itemIcon: WKMenuItemIcon; title: NSString; action: SEL); message 'addMenuItemWithItemIcon:title:action:';
    procedure clearAllMenuItems; message 'clearAllMenuItems';
    procedure updateUserActivity_userInfo_webpageURL (type_: NSString; userInfo: NSDictionary; webpageURL: NSURL); message 'updateUserActivity:userInfo:webpageURL:';
    procedure invalidateUserActivity; message 'invalidateUserActivity';
    class function openParentApplication_reply (userInfo: NSDictionary; reply: OpaqueCBlock): boolean; message 'openParentApplication:reply:';
  end;

type
  WKUserNotificationInterfaceController = objcclass external (WKInterfaceController)
  public
    function init: instancetype; message 'init';
    procedure didReceiveRemoteNotification_withCompletion (remoteNotification: NSDictionary; completionHandler: OpaqueCBlock); message 'didReceiveRemoteNotification:withCompletion:';
    procedure didReceiveLocalNotification_withCompletion (localNotification: UILocalNotification; completionHandler: OpaqueCBlock); message 'didReceiveLocalNotification:withCompletion:';
  end;
{$endif}

