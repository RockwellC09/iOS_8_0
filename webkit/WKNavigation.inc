{ Parsed from WebKit.framework (iPhoneOS8.2) WKNavigation.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKNavigationPtr = ^WKNavigation;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKNavigation = objcclass external (NSObject)
  end;
{$endif}

{$endif}
