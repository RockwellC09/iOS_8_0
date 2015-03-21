{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFAvailability.h }
{ Created on Fri Mar 20 2:11:35 2015 }

{$if  not (defined(__COREFOUNDATION_CFAVAILABILITY__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFAVAILABILITY__ = 1;
{$endif}

{$if defined(__has_feature)}
{$ifdef TYPES}
const
  __NSi_NA = unavailable;
{$endif}

{$elseif (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))) or (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE))}

{$endif}

{$endif}
