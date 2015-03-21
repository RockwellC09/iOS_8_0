{ Parsed from Security.framework (iPhoneOS8.2) SecBase.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SECURITY_SECBASE_H_}

{$ifdef TYPES}
type
  SecCertificateRef = OpaqueType;
  SecIdentityRef = OpaqueType;
  SecKeyRef = OpaqueType;
  SecPolicyRef = OpaqueType;
  SecAccessControlRef = OpaqueType;

const
  errSecSuccess = 0;
  errSecUnimplemented = -4;
  errSecIO = -36;
  errSecOpWr = -49;
  errSecParam = -50;
  errSecAllocate = -108;
  errSecUserCanceled = -128;
  errSecBadReq = -909;
  errSecInternalComponent = -2070;
  errSecNotAvailable = -25291;
  errSecDuplicateItem = -25299;
  errSecItemNotFound = -25300;
  errSecInteractionNotAllowed = -25308;
  errSecDecode = -26275;
  errSecAuthFailed = -25293;
{$endif}

{$endif}
