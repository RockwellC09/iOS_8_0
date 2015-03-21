{ Parsed from PassKit.framework (iPhoneOS8.2) PKPaymentPass.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKPaymentPassPtr = ^PKPaymentPass;
{$endif}

{$ifndef __PKPAYMENTPASS_H}
{$ifdef TYPES}
type
  PKPaymentPassActivationState = NSUInteger;
  PKPaymentPassActivationStatePtr = ^PKPaymentPassActivationState;

const
  PKPaymentPassActivationStateActivated = 0;
  PKPaymentPassActivationStateRequiresActivation = 1;
  PKPaymentPassActivationStateActivating = 2;
  PKPaymentPassActivationStateSuspended = 3;
  PKPaymentPassActivationStateDeactivated = 4;
{$endif}

{$ifdef CLASSES}

type
  PKPaymentPass = objcclass external (PKPass)
  public
    function primaryAccountIdentifier: NSString; message 'primaryAccountIdentifier';
    function primaryAccountNumberSuffix: NSString; message 'primaryAccountNumberSuffix';
    function deviceAccountIdentifier: NSString; message 'deviceAccountIdentifier';
    function deviceAccountNumberSuffix: NSString; message 'deviceAccountNumberSuffix';
    function activationState: PKPaymentPassActivationState; message 'activationState';
  end;
{$endif}

{$endif}
