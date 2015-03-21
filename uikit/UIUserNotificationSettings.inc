{ Parsed from UIKit.framework (iPhoneOS8.2) UIUserNotificationSettings.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIUserNotificationSettingsPtr = ^UIUserNotificationSettings;
  UIUserNotificationCategoryPtr = ^UIUserNotificationCategory;
  UIMutableUserNotificationCategoryPtr = ^UIMutableUserNotificationCategory;
  UIUserNotificationActionPtr = ^UIUserNotificationAction;
  UIMutableUserNotificationActionPtr = ^UIMutableUserNotificationAction;
{$endif}

{$ifdef TYPES}
type
  UIUserNotificationType = NSUInteger;
  UIUserNotificationTypePtr = ^UIUserNotificationType;

const
  UIUserNotificationTypeNone = 0;
  UIUserNotificationTypeBadge = 1 shl 0;
  UIUserNotificationTypeSound = 1 shl 1;
  UIUserNotificationTypeAlert = 1 shl 2;

type
  UIUserNotificationActivationMode = NSUInteger;
  UIUserNotificationActivationModePtr = ^UIUserNotificationActivationMode;

const
  UIUserNotificationActivationModeForeground = 0;
  UIUserNotificationActivationModeBackground = 1;

type
  UIUserNotificationActionContext = NSUInteger;
  UIUserNotificationActionContextPtr = ^UIUserNotificationActionContext;

const
  UIUserNotificationActionContextDefault = 0;
  UIUserNotificationActionContextMinimal = 1;
{$endif}

{$ifdef CLASSES}

type
  UIUserNotificationSettings = objcclass external (NSObject)
  public
    class function settingsForTypes_categories (types: UIUserNotificationType; categories: NSSet): instancetype; message 'settingsForTypes:categories:';
    function types: UIUserNotificationType; message 'types';
    function categories: NSSet; message 'categories';
  end;

type
  UIUserNotificationCategory = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function actionsForContext (context: UIUserNotificationActionContext): NSArray; message 'actionsForContext:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UIMutableUserNotificationCategory = objcclass external (UIUserNotificationCategory)
  public
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setActions_forContext (actions: NSArray; context: UIUserNotificationActionContext); message 'setActions:forContext:';
  end;

type
  UIUserNotificationAction = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function identifier: NSString; message 'identifier';
    function title: NSString; message 'title';
    function activationMode: UIUserNotificationActivationMode; message 'activationMode';
    function isAuthenticationRequired: boolean; message 'isAuthenticationRequired';
    function isDestructive: boolean; message 'isDestructive';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  UIMutableUserNotificationAction = objcclass external (UIUserNotificationAction)
  public
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setActivationMode(newValue: UIUserNotificationActivationMode); message 'setActivationMode:';
    function activationMode: UIUserNotificationActivationMode; message 'activationMode';
    procedure setAuthenticationRequired(newValue: boolean); message 'setAuthenticationRequired:';
    function isAuthenticationRequired: boolean; message 'isAuthenticationRequired';
    procedure setDestructive(newValue: boolean); message 'setDestructive:';
    function isDestructive: boolean; message 'isDestructive';
  end;
{$endif}

