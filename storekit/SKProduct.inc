{ Parsed from StoreKit.framework (iPhoneOS8.2) SKProduct.h }
{ Created on Fri Mar 20 2:11:20 2015 }


{$ifdef TYPES}
type
  SKProductPtr = ^SKProduct;
{$endif}

{$ifdef CLASSES}

type
  SKProduct = objcclass external (NSObject)
  private
    _internal: id;
  public
    function localizedDescription: NSString; message 'localizedDescription';
    function localizedTitle: NSString; message 'localizedTitle';
    function price: NSDecimalNumber; message 'price';
    function priceLocale: NSLocale; message 'priceLocale';
    function productIdentifier: NSString; message 'productIdentifier';
    function isDownloadable: boolean; message 'isDownloadable';
    function downloadContentLengths: NSArray; message 'downloadContentLengths';
    function downloadContentVersion: NSString; message 'downloadContentVersion';
  end;
{$endif}

