{ Parsed from WebKit.framework (iPhoneOS8.2) WKProcessPool.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKProcessPoolPtr = ^WKProcessPool;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKProcessPool = objcclass external (NSObject)
  end;
{$endif}

{$endif}
