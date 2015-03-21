{ Parsed from Accounts.framework (iPhoneOS8.2) ACError.h }
{ Created on Fri Mar 20 2:09:44 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  ACErrorDomain: NSString { available in NA, 5_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  ACErrorUnknown = 1;
  ACErrorAccountMissingRequiredProperty = 2;
  ACErrorAccountAuthenticationFailed = 3;
  ACErrorAccountTypeInvalid = 4;
  ACErrorAccountAlreadyExists = 5;
  ACErrorAccountNotFound = 6;
  ACErrorPermissionDenied = 7;
  ACErrorAccessInfoInvalid = 8;
  ACErrorClientPermissionDenied = 9;
  ACErrorAccessDeniedByProtectionPolicy = 10;
  ACErrorCredentialNotFound = 11;
  ACErrorFetchCredentialFailed = 12;
  ACErrorStoreCredentialFailed = 13;
  ACErrorRemoveCredentialFailed = 14;
  ACErrorUpdatingNonexistentAccount = 15;
  ACErrorInvalidClientBundleID = 16;
  ACErrorDeniedByPlugin = 17;
  ACErrorCoreDataSaveFailed = 18;
  ACErrorFailedSerializingAccountInfo = 19;
  ACErrorInvalidCommand = 20;
  ACErrorMissingTransportMessageID = 21;
type
  ACErrorCode = clong;
{$endif}

