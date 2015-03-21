{ Parsed from PassKit.framework (iPhoneOS8.2) PKPaymentRequest.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKPaymentSummaryItemPtr = ^PKPaymentSummaryItem;
  PKShippingMethodPtr = ^PKShippingMethod;
  PKPaymentRequestPtr = ^PKPaymentRequest;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPaymentNetworkAmex: NSString; cvar; external;
  PKPaymentNetworkMasterCard: NSString; cvar; external;
  PKPaymentNetworkVisa: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PKMerchantCapability = NSUInteger;
  PKMerchantCapabilityPtr = ^PKMerchantCapability;

const
  PKMerchantCapability3DS = 1 shl 0;
  PKMerchantCapabilityEMV = 1 shl 1;

type
  PKAddressField = NSUInteger;
  PKAddressFieldPtr = ^PKAddressField;

const
  PKAddressFieldNone = 0;
  PKAddressFieldPostalAddress = 1 shl 0;
  PKAddressFieldPhone = 1 shl 1;
  PKAddressFieldEmail = 1 shl 2;
  PKAddressFieldAll = PKAddressFieldPostalAddress + PKAddressFieldPhone + PKAddressFieldEmail;
{$endif}

{$ifdef CLASSES}

type
  PKPaymentSummaryItem = objcclass external (NSObject)
  public
    class function summaryItemWithLabel_amount (label_: NSString; amount: NSDecimalNumber): instancetype; message 'summaryItemWithLabel:amount:';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setAmount(newValue: NSDecimalNumber); message 'setAmount:';
    function amount: NSDecimalNumber; message 'amount';
  end;

type
  PKShippingMethod = objcclass external (PKPaymentSummaryItem)
  public
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setDetail(newValue: NSString); message 'setDetail:';
    function detail: NSString; message 'detail';
  end;

type
  PKPaymentRequest = objcclass external (NSObject)
  public
    procedure setMerchantIdentifier(newValue: NSString); message 'setMerchantIdentifier:';
    function merchantIdentifier: NSString; message 'merchantIdentifier';
    procedure setCountryCode(newValue: NSString); message 'setCountryCode:';
    function countryCode: NSString; message 'countryCode';
    procedure setSupportedNetworks(newValue: NSArray); message 'setSupportedNetworks:';
    function supportedNetworks: NSArray; message 'supportedNetworks';
    procedure setMerchantCapabilities(newValue: PKMerchantCapability); message 'setMerchantCapabilities:';
    function merchantCapabilities: PKMerchantCapability; message 'merchantCapabilities';
    procedure setPaymentSummaryItems(newValue: NSArray); message 'setPaymentSummaryItems:';
    function paymentSummaryItems: NSArray; message 'paymentSummaryItems';
    procedure setCurrencyCode(newValue: NSString); message 'setCurrencyCode:';
    function currencyCode: NSString; message 'currencyCode';
    procedure setRequiredBillingAddressFields(newValue: PKAddressField); message 'setRequiredBillingAddressFields:';
    function requiredBillingAddressFields: PKAddressField; message 'requiredBillingAddressFields';
    procedure setBillingAddress(newValue: ABRecordRef); message 'setBillingAddress:';
    function billingAddress: ABRecordRef; message 'billingAddress';
    procedure setRequiredShippingAddressFields(newValue: PKAddressField); message 'setRequiredShippingAddressFields:';
    function requiredShippingAddressFields: PKAddressField; message 'requiredShippingAddressFields';
    procedure setShippingAddress(newValue: ABRecordRef); message 'setShippingAddress:';
    function shippingAddress: ABRecordRef; message 'shippingAddress';
    procedure setShippingMethods(newValue: NSArray); message 'setShippingMethods:';
    function shippingMethods: NSArray; message 'shippingMethods';
    procedure setApplicationData(newValue: NSData); message 'setApplicationData:';
    function applicationData: NSData; message 'applicationData';
  end;
{$endif}

