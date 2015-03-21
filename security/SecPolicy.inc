{ Parsed from Security.framework (iPhoneOS8.2) SecPolicy.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SECURITY_SECPOLICY_H_}
{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPolicyAppleX509Basic: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleSSL: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleSMIME: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleEAP: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleIPsec: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyApplePKINITClient: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyApplePKINITServer: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyAppleCodeSigning: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyMacAppStoreReceipt: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyAppleIDValidation: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleTimeStamping: CFTypeRef { available starting in __MAC_10_8, __IPHONE_7_0 }; cvar; external;
  kSecPolicyAppleRevocation: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  kSecPolicyOid: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyName: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyClient: CFTypeRef { available starting in __MAC_10_7, __IPHONE_7_0 }; cvar; external;
  kSecPolicyRevocationFlags: CFTypeRef { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kSecRevocationOCSPMethod = 1 shl 0;
  kSecRevocationCRLMethod = 1 shl 1;
  kSecRevocationPreferCRL = 1 shl 2;
  kSecRevocationRequirePositiveResponse = 1 shl 3;
  kSecRevocationNetworkAccessDisabled = 1 shl 4;
  kSecRevocationUseAnyAvailableMethod = kSecRevocationOCSPMethod + kSecRevocationCRLMethod;
{$endif}

{$if defined(TARGET_OS_MAC) and not defined(TARGET_OS_IPHONE)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPolicyKU_DigitalSignature: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_NonRepudiation: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_KeyEncipherment: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_DataEncipherment: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_KeyAgreement: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_KeyCertSign: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_CRLSign: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_EncipherOnly: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
  kSecPolicyKU_DecipherOnly: CFTypeRef { available starting in __MAC_10_7, __IPHONE_NA }; cvar; external;
{$endif}

{$endif}
{$endif}
