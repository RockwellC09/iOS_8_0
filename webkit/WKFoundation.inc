{ Parsed from WebKit.framework (iPhoneOS8.2) WKFoundation.h }
{ Created on Fri Mar 20 2:11:42 2015 }

{$if  not (defined(WK_API_ENABLED))}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  WK_API_ENABLED = 1;
{$endif}

{$else}
{$endif}
{$endif}

