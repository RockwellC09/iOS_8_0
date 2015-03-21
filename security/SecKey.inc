{ Parsed from Security.framework (iPhoneOS8.2) SecKey.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SECURITY_SECKEY_H_}
{$ifdef TYPES}
type
  SecPadding = cuint32;
  SecPaddingPtr = ^SecPadding;

const
  kSecPaddingNone = 0;
  kSecPaddingPKCS1 = 1;
  kSecPaddingOAEP = 2;
  kSecPaddingPKCS1MD2 = $8000;
  kSecPaddingPKCS1MD5 = $8001;
  kSecPaddingPKCS1SHA1 = $8002;
  kSecPaddingPKCS1SHA224 = $8003;
  kSecPaddingPKCS1SHA256 = $8004;
  kSecPaddingPKCS1SHA384 = $8005;
  kSecPaddingPKCS1SHA512 = $8006;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSecPrivateKeyAttrs: CFTypeRef { available starting in __MAC_10_8, __IPHONE_2_0 }; cvar; external;
  kSecPublicKeyAttrs: CFTypeRef { available starting in __MAC_10_8, __IPHONE_2_0 }; cvar; external;
{$endif}

{$endif}
