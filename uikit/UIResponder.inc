{ Parsed from UIKit.framework (iPhoneOS8.2) UIResponder.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIResponderPtr = ^UIResponder;
  UIKeyCommandPtr = ^UIKeyCommand;
{$endif}

{$ifdef CLASSES}

type
  UIResponder = objcclass external (NSObject)
  private
  public
    function nextResponder: UIResponder; message 'nextResponder';
    function canBecomeFirstResponder: boolean; message 'canBecomeFirstResponder';
    function becomeFirstResponder: boolean; message 'becomeFirstResponder';
    function canResignFirstResponder: boolean; message 'canResignFirstResponder';
    function resignFirstResponder: boolean; message 'resignFirstResponder';
    function isFirstResponder: boolean; message 'isFirstResponder';
    procedure touchesBegan_withEvent (touches: NSSet; event: UIEvent); message 'touchesBegan:withEvent:';
    procedure touchesMoved_withEvent (touches: NSSet; event: UIEvent); message 'touchesMoved:withEvent:';
    procedure touchesEnded_withEvent (touches: NSSet; event: UIEvent); message 'touchesEnded:withEvent:';
    procedure touchesCancelled_withEvent (touches: NSSet; event: UIEvent); message 'touchesCancelled:withEvent:';
    procedure motionBegan_withEvent (motion: UIEventSubtype; event: UIEvent); message 'motionBegan:withEvent:'; { available in 3_0 }
    procedure motionEnded_withEvent (motion: UIEventSubtype; event: UIEvent); message 'motionEnded:withEvent:'; { available in 3_0 }
    procedure motionCancelled_withEvent (motion: UIEventSubtype; event: UIEvent); message 'motionCancelled:withEvent:'; { available in 3_0 }
    procedure remoteControlReceivedWithEvent (event: UIEvent); message 'remoteControlReceivedWithEvent:'; { available in 4_0 }
    function canPerformAction_withSender (action: SEL; sender: id): boolean; message 'canPerformAction:withSender:'; { available in 3_0 }
    function targetForAction_withSender (action: SEL; sender: id): id; message 'targetForAction:withSender:'; { available in 7_0 }
    function undoManager: NSUndoManager; message 'undoManager';
  end;
{$endif}

{$ifdef TYPES}
type
  UIKeyModifierFlags = NSInteger;
  UIKeyModifierFlagsPtr = ^UIKeyModifierFlags;

const
  UIKeyModifierAlphaShift = 1 shl 16;
  UIKeyModifierShift = 1 shl 17;
  UIKeyModifierControl = 1 shl 18;
  UIKeyModifierAlternate = 1 shl 19;
  UIKeyModifierCommand = 1 shl 20;
  UIKeyModifierNumericPad = 1 shl 21;
{$endif}

{$ifdef CLASSES}

type
  UIKeyCommand = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function input: NSString; message 'input';
    function modifierFlags: UIKeyModifierFlags; message 'modifierFlags';
    class function keyCommandWithInput_modifierFlags_action (input_: NSString; modifierFlags_: UIKeyModifierFlags; action: SEL): UIKeyCommand; message 'keyCommandWithInput:modifierFlags:action:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  UIResponderKeyCommands = objccategory external (UIResponder)
    function keyCommands: NSArray; message 'keyCommands';
  end;

type
  UIResponderStandardEditActions = objccategory external (NSObject)
    procedure cut (sender: id); message 'cut:'; { available in 3_0 }
    procedure copy (sender: id); message 'copy:'; { available in 3_0 }
    procedure paste (sender: id); message 'paste:'; { available in 3_0 }
    procedure select (sender: id); message 'select:'; { available in 3_0 }
    procedure selectAll (sender: id); message 'selectAll:'; { available in 3_0 }
    procedure delete (sender: id); message 'delete:'; { available in 3_2 }
    procedure makeTextWritingDirectionLeftToRight (sender: id); message 'makeTextWritingDirectionLeftToRight:'; { available in 5_0 }
    procedure makeTextWritingDirectionRightToLeft (sender: id); message 'makeTextWritingDirectionRightToLeft:'; { available in 5_0 }
    procedure toggleBoldface (sender: id); message 'toggleBoldface:'; { available in 6_0 }
    procedure toggleItalics (sender: id); message 'toggleItalics:'; { available in 6_0 }
    procedure toggleUnderline (sender: id); message 'toggleUnderline:'; { available in 6_0 }
    procedure increaseSize (sender: id); message 'increaseSize:'; { available in 7_0 }
    procedure decreaseSize (sender: id); message 'decreaseSize:'; { available in 7_0 }
  end;

type
  UIResponderInputViewAdditions = objccategory external (UIResponder)
    function inputView: UIView; message 'inputView';
    function inputAccessoryView: UIView; message 'inputAccessoryView';
    function inputViewController: UIInputViewController; message 'inputViewController';
    function inputAccessoryViewController: UIInputViewController; message 'inputAccessoryViewController';
    function textInputMode: UITextInputMode; message 'textInputMode';
    function textInputContextIdentifier: NSString; message 'textInputContextIdentifier';
    class procedure clearTextInputContextIdentifier (identifier: NSString); message 'clearTextInputContextIdentifier:'; { available in 7_0 }
    procedure reloadInputViews; message 'reloadInputViews'; { available in 3_2 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIKeyInputUpArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputDownArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputLeftArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputRightArrow: NSString { available in 7_0 }; cvar; external;
  UIKeyInputEscape: NSString { available in 7_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIResponder_ActivityContinuation = objccategory external name 'ActivityContinuation' (UIResponder)
    procedure setUserActivity(newValue: NSUserActivity); message 'setUserActivity:';
    function userActivity: NSUserActivity; message 'userActivity';
    procedure updateUserActivityState (activity: NSUserActivity); message 'updateUserActivityState:'; { available in 8_0 }
    procedure restoreUserActivityState (activity: NSUserActivity); message 'restoreUserActivityState:'; { available in 8_0 }
  end;
{$endif}

