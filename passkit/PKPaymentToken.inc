{ Parsed from PassKit.framework (iPhoneOS8.2) PKPaymentToken.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKPaymentTokenPtr = ^PKPaymentToken;
{$endif}

{$ifdef CLASSES}

type
  PKPaymentToken = objcclass external (NSObject)
  public
    function paymentInstrumentName: NSString; message 'paymentInstrumentName';
    function paymentNetwork: NSString; message 'paymentNetwork';
    function transactionIdentifier: NSString; message 'transactionIdentifier';
    function paymentData: NSData; message 'paymentData';
  end;
{$endif}

