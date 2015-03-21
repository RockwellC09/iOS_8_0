{ Parsed from Security.framework (iPhoneOS8.2) SecTrust.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SECURITY_SECTRUST_H_}
{$ifdef TYPES}
type
  SecTrustResultType = cuint32;
  SecTrustResultTypePtr = ^SecTrustResultType;

const
  kSecTrustResultInvalid = 0;
  kSecTrustResultProceed = 1;
  kSecTrustResultConfirm = 2;
  SEC_ = 2;
  kSecTrustResultDeny = 3;
  kSecTrustResultUnspecified = 4;
  kSecTrustResultRecoverableTrustFailure = 5;
  kSecTrustResultFatalTrustFailure = 6;
  kSecTrustResultOtherError = 7;

type
  SecTrustRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPropertyTypeTitle: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPropertyTypeError: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecTrustEvaluationDate: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustExtendedValidation: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustOrganizationName: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustResultValue: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustRevocationChecked: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecTrustRevocationValidUntilDate: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef __BLOCKS__}
{$ifdef TYPES}
type
  SecTrustCallback = OpaqueCBlock;
{$endif}

{$endif}

{$if defined(TARGET_OS_MAC) and not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  SecTrustUserSetting = SecTrustResultType deprecated 'in __MAC_10_2, __MAC_10_9, __IPHONE_NA, __IPHONE_NA';
  SecTrustUserSettingPtr = ^SecTrustUserSetting deprecated 'in __MAC_10_2, __MAC_10_9, __IPHONE_NA, __IPHONE_NA';
  SecTrustOptionFlags = cuint32;
  SecTrustOptionFlagsPtr = ^SecTrustOptionFlags;

const
  kSecTrustOptionAllowExpired = $00000001;
  kSecTrustOptionLeafIsCA = $00000002;
  kSecTrustOptionFetchIssuerFromNet = $00000004;
  kSecTrustOptionAllowExpiredRoot = $00000008;
  kSecTrustOptionRequireRevPerCert = $00000010;
  kSecTrustOptionUseTrustSettings = $00000020;
  kSecTrustOptionImplicitAnchors = $00000040;
{$endif}

{$endif}
{$endif}
