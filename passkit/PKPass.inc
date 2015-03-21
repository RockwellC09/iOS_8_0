{ Parsed from PassKit.framework (iPhoneOS8.2) PKPass.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKPassPtr = ^PKPass;
{$endif}

{$ifndef __PKPASS_H}
{$ifdef TYPES}
type
  PKPassType = NSUInteger;
  PKPassTypePtr = ^PKPassType;

const
  PKPassTypeBarcode = 0;
  PKPassTypePayment = 1;
  PKPassTypeAny = not(0);
{$endif}

{$ifdef CLASSES}

type
  PKPass = objcclass external (PKObject)
  public
    function initWithData_error (data: NSData; error: NSErrorPtr): instancetype; message 'initWithData:error:';
    function passType: PKPassType; message 'passType';
    function paymentPass: PKPaymentPass; message 'paymentPass';
    function serialNumber: NSString; message 'serialNumber';
    function passTypeIdentifier: NSString; message 'passTypeIdentifier';
    function webServiceURL: NSURL; message 'webServiceURL';
    function authenticationToken: NSString; message 'authenticationToken';
    function icon: UIImage; message 'icon';
    function localizedName: NSString; message 'localizedName';
    function localizedDescription: NSString; message 'localizedDescription';
    function organizationName: NSString; message 'organizationName';
    function relevantDate: NSDate; message 'relevantDate';
    function userInfo: NSDictionary; message 'userInfo';
    function passURL: NSURL; message 'passURL';
    function localizedValueForFieldKey (key: NSString): id; message 'localizedValueForFieldKey:';
  end;
{$endif}

{$endif}
