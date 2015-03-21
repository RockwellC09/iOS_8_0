{ Parsed from UIKit.framework (iPhoneOS8.2) UIWindow.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UIWindowPtr = ^UIWindow;
{$endif}

{$ifdef TYPES}
type
  UIWindowLevel = CGFloat;
  UIWindowLevelPtr = ^UIWindowLevel;
{$endif}

{$ifdef CLASSES}

type
  UIWindow = objcclass external (UIView)
  private
    _delegate: id;
    _windowLevel: CGFloat;
    _windowSublevel: CGFloat;
    _layerContext: id;
    _lastMouseDownView: UIView;
    _lastMouseEnteredView: UIView;
    _firstResponder: UIResponder;
    _fingerInfo: id;
    _touchData: id;
    _viewOrientation: UIInterfaceOrientation;
    _exclusiveTouchView: UIView;
    _undoManager: NSUndoManager;
    _screen: UIScreen;
    _transformLayer: CALayer;
    _rotationViewControllers: NSMutableArray;
    _rootViewController: UIViewController;
    _savedBackgroundColor: UIColor;
    _subtreeMonitoringViews: NSMutableSet;
    _tintViews: NSMutableSet;
    _currentTintView: id;
    _windowFlags: bitpacked record
      case byte of
        0: (_anonBitField__windowFlags0: cuint);
        1: (
          delegateWillRotate: 0..1;
          delegateDidRotate: 0..1;
          delegateWillAnimateFirstHalf: 0..1;
          delegateDidAnimationFirstHalf: 0..1;
          delegateWillAnimateSecondHalf: 0..1;
          autorotatesToPortrait: 0..1;
          autorotatesToPortraitUpsideDown: 0..1;
          autorotatesToLandscapeLeft: 0..1;
          autorotatesToLandscapeRight: 0..1;
          dontBecomeKeyOnOrderFront: 0..1;
          output: 0..1;
          inGesture: 0..1;
          bitsPerComponent: 0..((1 shl 4)-1);
          autorotates: 0..1;
          isRotating: 0..1;
          isUsingOnePartRotationAnimation: 0..1;
          isHandlingContentRotation: 0..1;
          disableAutorotationCount: 0..((1 shl 4)-1);
          needsAutorotationWhenReenabled: 0..1;
          forceTwoPartRotationAnimation: 0..1;
          orderKeyboardInAfterRotating: 0..1;
          roundedCorners: 0..((1 shl 4)-1);
          resizesToFullScreen: 0..1;
          keepContextInBackground: 0..1;
          ignoreSetHidden: 0..1;
          forceVisibleOnInit: 0..1;
          settingFirstResponder: 0..1;
          legacyOrientationChecks: 0..1;
          windowResizedToFullScreen: 0..1;
          statusBarFollowsOrientation: 0..1;
          secure: 0..1;
          isMainSceneSized: 0..1;
        );
      end;
    _windowController: id;
  public
    procedure setScreen(newValue: UIScreen); message 'setScreen:';
    function screen: UIScreen; message 'screen';
    procedure setWindowLevel(newValue: UIWindowLevel); message 'setWindowLevel:';
    function windowLevel: UIWindowLevel; message 'windowLevel';
    function isKeyWindow: boolean; message 'isKeyWindow';
    procedure becomeKeyWindow; message 'becomeKeyWindow';
    procedure resignKeyWindow; message 'resignKeyWindow';
    procedure makeKeyWindow; message 'makeKeyWindow';
    procedure makeKeyAndVisible; message 'makeKeyAndVisible';
    procedure setRootViewController(newValue: UIViewController); message 'setRootViewController:';
    function rootViewController: UIViewController; message 'rootViewController';
    procedure sendEvent (event: UIEvent); message 'sendEvent:';
    function convertPoint_toWindow (point: CGPoint; window: UIWindow): CGPoint; message 'convertPoint:toWindow:';
    function convertPoint_fromWindow (point: CGPoint; window: UIWindow): CGPoint; message 'convertPoint:fromWindow:';
    function convertRect_toWindow (rect: CGRect; window: UIWindow): CGRect; message 'convertRect:toWindow:';
    function convertRect_fromWindow (rect: CGRect; window: UIWindow): CGRect; message 'convertRect:fromWindow:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIWindowLevelNormal: UIWindowLevel; cvar; external;
  UIWindowLevelAlert: UIWindowLevel; cvar; external;
  UIWindowLevelStatusBar: UIWindowLevel; cvar; external;
  UIWindowDidBecomeVisibleNotification: NSString; cvar; external;
  UIWindowDidBecomeHiddenNotification: NSString; cvar; external;
  UIWindowDidBecomeKeyNotification: NSString; cvar; external;
  UIWindowDidResignKeyNotification: NSString; cvar; external;
  UIKeyboardWillShowNotification: NSString; cvar; external;
  UIKeyboardDidShowNotification: NSString; cvar; external;
  UIKeyboardWillHideNotification: NSString; cvar; external;
  UIKeyboardDidHideNotification: NSString; cvar; external;
  UIKeyboardFrameBeginUserInfoKey: NSString { available in 3_2 }; cvar; external;
  UIKeyboardFrameEndUserInfoKey: NSString { available in 3_2 }; cvar; external;
  UIKeyboardAnimationDurationUserInfoKey: NSString { available in 3_0 }; cvar; external;
  UIKeyboardAnimationCurveUserInfoKey: NSString { available in 3_0 }; cvar; external;
  UIKeyboardWillChangeFrameNotification: NSString { available in 5_0 }; cvar; external;
  UIKeyboardDidChangeFrameNotification: NSString { available in 5_0 }; cvar; external;
  UIKeyboardCenterBeginUserInfoKey: NSString deprecated 'in 2_0, 3_2'; cvar; external;
  UIKeyboardCenterEndUserInfoKey: NSString deprecated 'in 2_0, 3_2'; cvar; external;
  UIKeyboardBoundsUserInfoKey: NSString deprecated 'in 2_0, 3_2'; cvar; external;
{$endif}

