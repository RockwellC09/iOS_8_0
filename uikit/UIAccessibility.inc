{ Parsed from UIKit.framework (iPhoneOS8.2) UIAccessibility.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{ Types from UIAccessibilityAction }
{$ifdef TYPES}

type
  UIAccessibilityScrollDirection = NSInteger;
type
  UIAccessibilityScrollDirectionPtr = ^UIAccessibilityScrollDirection;

const
  UIAccessibilityScrollDirectionRight = 1;
  UIAccessibilityScrollDirectionLeft = 2;
  UIAccessibilityScrollDirectionUp = 3;
  UIAccessibilityScrollDirectionDown = 4;
  {$if (__IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_5_0)}
  UIAccessibilityScrollDirectionNext = 5;
  UIAccessibilityScrollDirectionPrevious = 6;
  {$endif}
{$endif}


{$ifdef TYPES}
type
  UIAccessibilityReadingContentProtocolPtr = ^UIAccessibilityReadingContentProtocol;
{$endif}

{$ifdef CLASSES}

type
  UIAccessibility = objccategory external (NSObject)
    procedure setIsAccessibilityElement(newValue: boolean); message 'setIsAccessibilityElement:';
    function isAccessibilityElement: boolean; message 'isAccessibilityElement';
    procedure setAccessibilityLabel(newValue: NSString); message 'setAccessibilityLabel:';
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    procedure setAccessibilityHint(newValue: NSString); message 'setAccessibilityHint:';
    function accessibilityHint: NSString; message 'accessibilityHint';
    procedure setAccessibilityValue(newValue: NSString); message 'setAccessibilityValue:';
    function accessibilityValue: NSString; message 'accessibilityValue';
    procedure setAccessibilityTraits(newValue: UIAccessibilityTraits); message 'setAccessibilityTraits:';
    function accessibilityTraits: UIAccessibilityTraits; message 'accessibilityTraits';
    procedure setAccessibilityFrame(newValue: CGRect); message 'setAccessibilityFrame:';
    function accessibilityFrame: CGRect; message 'accessibilityFrame';
    procedure setAccessibilityPath(newValue: UIBezierPath); message 'setAccessibilityPath:';
    function accessibilityPath: UIBezierPath; message 'accessibilityPath';
    procedure setAccessibilityActivationPoint(newValue: CGPoint); message 'setAccessibilityActivationPoint:';
    function accessibilityActivationPoint: CGPoint; message 'accessibilityActivationPoint';
    procedure setAccessibilityLanguage(newValue: NSString); message 'setAccessibilityLanguage:';
    function accessibilityLanguage: NSString; message 'accessibilityLanguage';
    procedure setAccessibilityElementsHidden(newValue: boolean); message 'setAccessibilityElementsHidden:';
    function accessibilityElementsHidden: boolean; message 'accessibilityElementsHidden';
    procedure setAccessibilityViewIsModal(newValue: boolean); message 'setAccessibilityViewIsModal:';
    function accessibilityViewIsModal: boolean; message 'accessibilityViewIsModal';
    procedure setShouldGroupAccessibilityChildren(newValue: boolean); message 'setShouldGroupAccessibilityChildren:';
    function shouldGroupAccessibilityChildren: boolean; message 'shouldGroupAccessibilityChildren';
    procedure setAccessibilityNavigationStyle(newValue: UIAccessibilityNavigationStyle); message 'setAccessibilityNavigationStyle:';
    function accessibilityNavigationStyle: UIAccessibilityNavigationStyle; message 'accessibilityNavigationStyle';
  end;

type
  UIAccessibilityContainer = objccategory external (NSObject)
    function accessibilityElementCount: NSInteger; message 'accessibilityElementCount';
    function accessibilityElementAtIndex (index: NSInteger): id; message 'accessibilityElementAtIndex:';
    function indexOfAccessibilityElement (element: id): NSInteger; message 'indexOfAccessibilityElement:';
    procedure setAccessibilityElements(newValue: NSArray); message 'setAccessibilityElements:';
    function accessibilityElements: NSArray; message 'accessibilityElements';
  end;

type
  UIAccessibilityFocus = objccategory external (NSObject)
    procedure accessibilityElementDidBecomeFocused; message 'accessibilityElementDidBecomeFocused'; { available in 4_0 }
    procedure accessibilityElementDidLoseFocus; message 'accessibilityElementDidLoseFocus'; { available in 4_0 }
    function accessibilityElementIsFocused: boolean; message 'accessibilityElementIsFocused'; { available in 4_0 }
  end;

type
  UIAccessibilityAction = objccategory external (NSObject)
    function accessibilityActivate: boolean; message 'accessibilityActivate'; { available in 7_0 }
    procedure accessibilityIncrement; message 'accessibilityIncrement'; { available in 4_0 }
    procedure accessibilityDecrement; message 'accessibilityDecrement'; { available in 4_0 }
    function accessibilityScroll (direction: UIAccessibilityScrollDirection): boolean; message 'accessibilityScroll:'; { available in 4_2 }
    function accessibilityPerformEscape: boolean; message 'accessibilityPerformEscape'; { available in 5_0 }
    function accessibilityPerformMagicTap: boolean; message 'accessibilityPerformMagicTap'; { available in 6_0 }
    procedure setAccessibilityCustomActions(newValue: NSArray); message 'setAccessibilityCustomActions:';
    function accessibilityCustomActions: NSArray; message 'accessibilityCustomActions';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIAccessibilityReadingContentProtocol = objcprotocol external name 'UIAccessibilityReadingContent'
  required
    function accessibilityLineNumberForPoint (point: CGPoint): NSInteger; message 'accessibilityLineNumberForPoint:'; { available in 5_0 }
    function accessibilityContentForLineNumber (lineNumber: NSInteger): NSString; message 'accessibilityContentForLineNumber:'; { available in 5_0 }
    function accessibilityFrameForLineNumber (lineNumber: NSInteger): CGRect; message 'accessibilityFrameForLineNumber:'; { available in 5_0 }
    function accessibilityPageContent: NSString; message 'accessibilityPageContent'; { available in 5_0 }
  end;
{$endif}

{$ifdef FUNCTIONS}
procedure UIAccessibilityPostNotification(notification: UIAccessibilityNotifications; argument: id); cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIAccessibilityVoiceOverStatusChanged: NSString { available in 4_0 }; cvar; external;
  UIAccessibilityMonoAudioStatusDidChangeNotification: NSString { available in 5_0 }; cvar; external;
  UIAccessibilityClosedCaptioningStatusDidChangeNotification: NSString { available in 5_0 }; cvar; external;
  UIAccessibilityInvertColorsStatusDidChangeNotification: NSString { available in 6_0 }; cvar; external;
  UIAccessibilityGuidedAccessStatusDidChangeNotification: NSString { available in 6_0 }; cvar; external;
  UIAccessibilityBoldTextStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
  UIAccessibilityGrayscaleStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
  UIAccessibilityReduceTransparencyStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
  UIAccessibilityReduceMotionStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
  UIAccessibilityDarkerSystemColorsStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
  UIAccessibilitySwitchControlStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
  UIAccessibilitySpeakSelectionStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
  UIAccessibilitySpeakScreenStatusDidChangeNotification: NSString { available in 8_0 }; cvar; external;
{$endif}

