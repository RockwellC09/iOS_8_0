{ Parsed from PassKit.framework (iPhoneOS8.2) PKPassLibrary.h }
{ Created on Fri Mar 20 2:11:11 2015 }


{$ifdef TYPES}
type
  PKPassLibraryPtr = ^PKPassLibrary;
{$endif}

{$ifdef TYPES}
type
  PKPassLibraryAddPassesStatus = NSInteger;
  PKPassLibraryAddPassesStatusPtr = ^PKPassLibraryAddPassesStatus;

const
  PKPassLibraryDidAddPasses = 0;
  PKPassLibraryShouldReviewPasses = 1;
  PKPassLibraryDidCancelAddPasses = 2;
{$endif}

{$ifdef CLASSES}

type
  PKPassLibrary = objcclass external (NSObject)
  public
    class function isPassLibraryAvailable: boolean; message 'isPassLibraryAvailable';
    function passes: NSArray; message 'passes';
    function passWithPassTypeIdentifier_serialNumber (identifier: NSString; serialNumber: NSString): PKPass; message 'passWithPassTypeIdentifier:serialNumber:';
    function passesOfType (passType: PKPassType): NSArray; message 'passesOfType:'; { available in 8_0 }
    procedure removePass (pass: PKPass); message 'removePass:';
    function containsPass (pass: PKPass): boolean; message 'containsPass:';
    function replacePassWithPass (pass: PKPass): boolean; message 'replacePassWithPass:';
    procedure addPasses_withCompletionHandler (passes_: NSArray; completion: OpaqueCBlock); message 'addPasses:withCompletionHandler:'; { available in 7_0 }
    class function isPaymentPassActivationAvailable: boolean; message 'isPaymentPassActivationAvailable'; { available in 8_0 }
    procedure activatePaymentPass_withActivationData_completion (paymentPass: PKPaymentPass; activationData: NSData; completion: OpaqueCBlock); message 'activatePaymentPass:withActivationData:completion:'; { available in 8_0 }
    procedure activatePaymentPass_withActivationCode_completion (paymentPass: PKPaymentPass; activationCode: NSString; completion: OpaqueCBlock); message 'activatePaymentPass:withActivationCode:completion:'; { available in 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPassLibraryDidChangeNotification: NSString { available in 6_0 }; cvar; external;
  PKPassLibraryAddedPassesUserInfoKey: NSString { available in 6_0 }; cvar; external;
  PKPassLibraryReplacementPassesUserInfoKey: NSString { available in 6_0 }; cvar; external;
  PKPassLibraryRemovedPassInfosUserInfoKey: NSString { available in 6_0 }; cvar; external;
  PKPassLibraryPassTypeIdentifierUserInfoKey: NSString { available in 6_0 }; cvar; external;
  PKPassLibrarySerialNumberUserInfoKey: NSString { available in 6_0 }; cvar; external;
{$endif}

