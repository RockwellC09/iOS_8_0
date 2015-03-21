{ Parsed from UIKit.framework (iPhoneOS8.2) UIDevice.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIDevicePtr = ^UIDevice;
  UIInputViewAudioFeedbackProtocolPtr = ^UIInputViewAudioFeedbackProtocol;
{$endif}

{$ifdef TYPES}
type
  UIDeviceOrientation = NSInteger;
  UIDeviceOrientationPtr = ^UIDeviceOrientation;

const
  UIDeviceOrientationUnknown = 0;
  UIDeviceOrientationPortrait = 1;
  UIDeviceOrientationPortraitUpsideDown = 2;
  UIDeviceOrientationLandscapeLeft = 3;
  UIDeviceOrientationLandscapeRight = 4;
  UIDeviceOrientationFaceUp = 5;
  UIDeviceOrientationFaceDown = 6;

type
  UIDeviceBatteryState = NSInteger;
  UIDeviceBatteryStatePtr = ^UIDeviceBatteryState;

const
  UIDeviceBatteryStateUnknown = 0;
  UIDeviceBatteryStateUnplugged = 1;
  UIDeviceBatteryStateCharging = 2;
  UIDeviceBatteryStateFull = 3;

type
  UIUserInterfaceIdiom = NSInteger;
  UIUserInterfaceIdiomPtr = ^UIUserInterfaceIdiom;

const
  UIUserInterfaceIdiomUnspecified = -1;
  {$if (__IPHONE_3_2 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  UIUserInterfaceIdiomPhone = 0;
  UIUserInterfaceIdiomPad = 1;
  {$endif}
{$endif}

{$ifdef CLASSES}

type
  UIDevice = objcclass external (NSObject)
  private
    _numDeviceOrientationObservers: NSInteger;
    _batteryLevel: single;
    _deviceFlags: bitpacked record
      case byte of
        0: (_anonBitField__deviceFlags0: cuint);
        1: (
          batteryMonitoringEnabled: 0..1;
          proximityMonitoringEnabled: 0..1;
          expectsFaceContactInLandscape: 0..1;
          orientation: 0..((1 shl 3)-1);
          batteryState: 0..((1 shl 2)-1);
          proximityState: 0..1;
        );
      end;
  public
    class function currentDevice: UIDevice; message 'currentDevice';
    function name: NSString; message 'name';
    function model: NSString; message 'model';
    function localizedModel: NSString; message 'localizedModel';
    function systemName: NSString; message 'systemName';
    function systemVersion: NSString; message 'systemVersion';
    function orientation: UIDeviceOrientation; message 'orientation';
    function identifierForVendor: NSUUID; message 'identifierForVendor';
    function isGeneratingDeviceOrientationNotifications: boolean; message 'isGeneratingDeviceOrientationNotifications';
    procedure beginGeneratingDeviceOrientationNotifications; message 'beginGeneratingDeviceOrientationNotifications';
    procedure endGeneratingDeviceOrientationNotifications; message 'endGeneratingDeviceOrientationNotifications';
    procedure setBatteryMonitoringEnabled(newValue: boolean); message 'setBatteryMonitoringEnabled:';
    function isBatteryMonitoringEnabled: boolean; message 'isBatteryMonitoringEnabled';
    function batteryState: UIDeviceBatteryState; message 'batteryState';
    function batteryLevel: single; message 'batteryLevel';
    procedure setProximityMonitoringEnabled(newValue: boolean); message 'setProximityMonitoringEnabled:';
    function isProximityMonitoringEnabled: boolean; message 'isProximityMonitoringEnabled';
    function proximityState: boolean; message 'proximityState';
    function isMultitaskingSupported: boolean; message 'isMultitaskingSupported';
    function userInterfaceIdiom: UIUserInterfaceIdiom; message 'userInterfaceIdiom';
    procedure playInputClick; message 'playInputClick'; { available in 4_2 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIInputViewAudioFeedbackProtocol = objcprotocol external name 'UIInputViewAudioFeedback' (NSObjectProtocol)
  optional
    function enableInputClicksWhenVisible: boolean; message 'enableInputClicksWhenVisible';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIDeviceOrientationDidChangeNotification: NSString; cvar; external;
  UIDeviceBatteryStateDidChangeNotification: NSString { available in 3_0 }; cvar; external;
  UIDeviceBatteryLevelDidChangeNotification: NSString { available in 3_0 }; cvar; external;
  UIDeviceProximityStateDidChangeNotification: NSString { available in 3_0 }; cvar; external;
{$endif}

