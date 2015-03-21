{ Parsed from PassKit.framework (iPhoneOS8.2) PKPayment.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKPaymentPtr = ^PKPayment;
{$endif}

{$ifdef CLASSES}

type
  PKPayment = objcclass external (NSObject)
  public
    function token: PKPaymentToken; message 'token';
    function billingAddress: ABRecordRef; message 'billingAddress';
    function shippingAddress: ABRecordRef; message 'shippingAddress';
    function shippingMethod: PKShippingMethod; message 'shippingMethod';
  end;
{$endif}

