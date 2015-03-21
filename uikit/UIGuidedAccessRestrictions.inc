{ Parsed from UIKit.framework (iPhoneOS8.2) UIGuidedAccessRestrictions.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIGuidedAccessRestrictionDelegateProtocolPtr = ^UIGuidedAccessRestrictionDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIGuidedAccessRestrictionState = NSInteger;
  UIGuidedAccessRestrictionStatePtr = ^UIGuidedAccessRestrictionState;

const
  UIGuidedAccessRestrictionStateAllow = 0;
  UIGuidedAccessRestrictionStateDeny = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  UIGuidedAccessRestrictionDelegateProtocol = objcprotocol external name 'UIGuidedAccessRestrictionDelegate' (NSObjectProtocol)
  required
    function guidedAccessRestrictionIdentifiers: NSArray; message 'guidedAccessRestrictionIdentifiers';
    procedure guidedAccessRestrictionWithIdentifier_didChangeState (restrictionIdentifier: NSString; newRestrictionState: UIGuidedAccessRestrictionState); message 'guidedAccessRestrictionWithIdentifier:didChangeState:';
    function textForGuidedAccessRestrictionWithIdentifier (restrictionIdentifier: NSString): NSString; message 'textForGuidedAccessRestrictionWithIdentifier:';
  optional
    function detailTextForGuidedAccessRestrictionWithIdentifier (restrictionIdentifier: NSString): NSString; message 'detailTextForGuidedAccessRestrictionWithIdentifier:';
  end;
{$endif}

{$ifdef FUNCTIONS}
function UIGuidedAccessRestrictionStateForIdentifier(restrictionIdentifier: NSString): UIGuidedAccessRestrictionState; cdecl; external; { available in 7_0 }
{$endif}

