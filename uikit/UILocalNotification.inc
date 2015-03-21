{ Parsed from UIKit.framework (iPhoneOS8.2) UILocalNotification.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UILocalNotificationPtr = ^UILocalNotification;
{$endif}

{$ifdef CLASSES}

type
  UILocalNotification = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    procedure setFireDate(newValue: NSDate); message 'setFireDate:';
    function fireDate: NSDate; message 'fireDate';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:';
    function timeZone: NSTimeZone; message 'timeZone';
    procedure setRepeatInterval(newValue: NSCalendarUnit); message 'setRepeatInterval:';
    function repeatInterval: NSCalendarUnit; message 'repeatInterval';
    procedure setRepeatCalendar(newValue: NSCalendar); message 'setRepeatCalendar:';
    function repeatCalendar: NSCalendar; message 'repeatCalendar';
    procedure setRegion(newValue: CLRegion); message 'setRegion:';
    function region: CLRegion; message 'region';
    procedure setRegionTriggersOnce(newValue: boolean); message 'setRegionTriggersOnce:';
    function regionTriggersOnce: boolean; message 'regionTriggersOnce';
    procedure setAlertBody(newValue: NSString); message 'setAlertBody:';
    function alertBody: NSString; message 'alertBody';
    procedure setHasAction(newValue: boolean); message 'setHasAction:';
    function hasAction: boolean; message 'hasAction';
    procedure setAlertAction(newValue: NSString); message 'setAlertAction:';
    function alertAction: NSString; message 'alertAction';
    procedure setAlertLaunchImage(newValue: NSString); message 'setAlertLaunchImage:';
    function alertLaunchImage: NSString; message 'alertLaunchImage';
    procedure setAlertTitle(newValue: NSString); message 'setAlertTitle:';
    function alertTitle: NSString; message 'alertTitle';
    procedure setSoundName(newValue: NSString); message 'setSoundName:';
    function soundName: NSString; message 'soundName';
    procedure setApplicationIconBadgeNumber(newValue: NSInteger); message 'setApplicationIconBadgeNumber:';
    function applicationIconBadgeNumber: NSInteger; message 'applicationIconBadgeNumber';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure setCategory(newValue: NSString); message 'setCategory:';
    function category: NSString; message 'category';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UILocalNotificationDefaultSoundName: NSString { available in 4_0 }; cvar; external;
{$endif}

