{ Parsed from Security.framework (iPhoneOS8.2) SecRandom.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SECURITY_SECRANDOM_H_}
{$ifdef TYPES}
type
  SecRandomRef = OpaqueType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kSecRandomDefault: SecRandomRef { available starting in __MAC_10_7, __IPHONE_2_0 }; cvar; external;
{$endif}

{$endif}
