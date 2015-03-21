{ Parsed from UIKit.framework (iPhoneOS8.2) UIScreen.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIScreenPtr = ^UIScreen;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIScreenDidConnectNotification: NSString { available in 3_2 }; cvar; external;
  UIScreenDidDisconnectNotification: NSString { available in 3_2 }; cvar; external;
  UIScreenModeDidChangeNotification: NSString { available in 3_2 }; cvar; external;
  UIScreenBrightnessDidChangeNotification: NSString { available in 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  UIScreenOverscanCompensation = NSInteger;
  UIScreenOverscanCompensationPtr = ^UIScreenOverscanCompensation;

const
  UIScreenOverscanCompensationScale = 0;
  UIScreenOverscanCompensationInsetBounds = 1;
  UIScreenOverscanCompensationInsetApplicationFrame = 2;
{$endif}

{$ifdef CLASSES}

type
  UIScreen = objcclass external (NSObject, UITraitEnvironmentProtocol)
  public
    class function screens: NSArray; message 'screens'; { available in 3_2 }
    class function mainScreen: UIScreen; message 'mainScreen';
    function bounds: CGRect; message 'bounds';
    function applicationFrame: CGRect; message 'applicationFrame';
    function scale: CGFloat; message 'scale';
    function availableModes: NSArray; message 'availableModes';
    function preferredMode: UIScreenMode; message 'preferredMode';
    procedure setCurrentMode(newValue: UIScreenMode); message 'setCurrentMode:';
    function currentMode: UIScreenMode; message 'currentMode';
    procedure setOverscanCompensation(newValue: UIScreenOverscanCompensation); message 'setOverscanCompensation:';
    function overscanCompensation: UIScreenOverscanCompensation; message 'overscanCompensation';
    function mirroredScreen: UIScreen; message 'mirroredScreen';
    procedure setBrightness(newValue: CGFloat); message 'setBrightness:';
    function brightness: CGFloat; message 'brightness';
    procedure setWantsSoftwareDimming(newValue: boolean); message 'setWantsSoftwareDimming:';
    function wantsSoftwareDimming: boolean; message 'wantsSoftwareDimming';
    function coordinateSpace: UICoordinateSpaceProtocol; message 'coordinateSpace';
    function fixedCoordinateSpace: UICoordinateSpaceProtocol; message 'fixedCoordinateSpace';
    function nativeBounds: CGRect; message 'nativeBounds';
    function nativeScale: CGFloat; message 'nativeScale';
    function displayLinkWithTarget_selector (target: id; sel_: SEL): CADisplayLink; message 'displayLinkWithTarget:selector:'; { available in 4_0 }

    { Adopted protocols }
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: UITraitCollection); message 'traitCollectionDidChange:';
  end;


type
  UISnapshotting = objccategory external (UIScreen)
    function snapshotViewAfterScreenUpdates (afterUpdates: boolean): UIView; message 'snapshotViewAfterScreenUpdates:'; { available in 7_0 }
  end;
{$endif}

