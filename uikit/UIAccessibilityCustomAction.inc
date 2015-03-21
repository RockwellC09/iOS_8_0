{ Parsed from UIKit.framework (iPhoneOS8.2) UIAccessibilityCustomAction.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIAccessibilityCustomActionPtr = ^UIAccessibilityCustomAction;
{$endif}

{$ifdef CLASSES}

type
  UIAccessibilityCustomAction = objcclass external (NSObject)
  public
    function initWithName_target_selector (name: NSString; target: id; selector: SEL): instancetype; message 'initWithName:target:selector:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setSelector(newValue: SEL); message 'setSelector:';
    function selector: SEL; message 'selector';
  end;
{$endif}

