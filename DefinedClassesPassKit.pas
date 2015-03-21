{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesPassKit;
interface

type
  PKAddPassesViewController = objcclass external;
  PKObject = objcclass external;
  PKPass = objcclass external;
  PKPassLibrary = objcclass external;
  PKPayment = objcclass external;
  PKPaymentAuthorizationViewController = objcclass external;
  PKPaymentPass = objcclass external;
  PKPaymentRequest = objcclass external;
  PKPaymentSummaryItem = objcclass external;
  PKPaymentToken = objcclass external;
  PKShippingMethod = objcclass external;
  PKAddPassesViewControllerDelegateProtocol = objcprotocol external name 'PKAddPassesViewControllerDelegate';
  PKPaymentAuthorizationViewControllerDelegateProtocol = objcprotocol external name 'PKPaymentAuthorizationViewControllerDelegate';

type
  UIImage = objcclass external;

implementation
end.
