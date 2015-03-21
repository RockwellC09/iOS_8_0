{ Parsed from PassKit.framework (iPhoneOS8.2) PKPaymentAuthorizationViewController.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKPaymentAuthorizationViewControllerPtr = ^PKPaymentAuthorizationViewController;
  PKPaymentAuthorizationViewControllerDelegateProtocolPtr = ^PKPaymentAuthorizationViewControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  PKPaymentAuthorizationStatus = NSInteger;
  PKPaymentAuthorizationStatusPtr = ^PKPaymentAuthorizationStatus;

const
  PKPaymentAuthorizationStatusSuccess = 0;
  PKPaymentAuthorizationStatusFailure = 1;
  PKPaymentAuthorizationStatusInvalidBillingPostalAddress = 2;
  PKPaymentAuthorizationStatusInvalidShippingPostalAddress = 3;
  PKPaymentAuthorizationStatusInvalidShippingContact = 4;
{$endif}

{$ifdef PROTOCOLS}

type
  PKPaymentAuthorizationViewControllerDelegateProtocol = objcprotocol external name 'PKPaymentAuthorizationViewControllerDelegate' (NSObjectProtocol)
  required
    procedure paymentAuthorizationViewController_didAuthorizePayment_completion (controller: PKPaymentAuthorizationViewController; payment: PKPayment; completion: OpaqueCBlock); message 'paymentAuthorizationViewController:didAuthorizePayment:completion:';
    procedure paymentAuthorizationViewControllerDidFinish (controller: PKPaymentAuthorizationViewController); message 'paymentAuthorizationViewControllerDidFinish:';
  optional
    procedure paymentAuthorizationViewController_didSelectShippingMethod_completion (controller: PKPaymentAuthorizationViewController; shippingMethod: PKShippingMethod; completion: OpaqueCBlock); message 'paymentAuthorizationViewController:didSelectShippingMethod:completion:';
    procedure paymentAuthorizationViewController_didSelectShippingAddress_completion (controller: PKPaymentAuthorizationViewController; address: ABRecordRef; completion: OpaqueCBlock); message 'paymentAuthorizationViewController:didSelectShippingAddress:completion:';
  end;
{$endif}

{$ifdef CLASSES}

type
  PKPaymentAuthorizationViewController = objcclass external (UIViewController)
  public
    class function canMakePayments: boolean; message 'canMakePayments';
    class function canMakePaymentsUsingNetworks (supportedNetworks: NSArray): boolean; message 'canMakePaymentsUsingNetworks:';
    procedure setDelegate(newValue: PKPaymentAuthorizationViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: PKPaymentAuthorizationViewControllerDelegateProtocol; message 'delegate';
    function initWithPaymentRequest (request: PKPaymentRequest): instancetype; message 'initWithPaymentRequest:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

