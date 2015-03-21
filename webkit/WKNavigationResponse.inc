{ Parsed from WebKit.framework (iPhoneOS8.2) WKNavigationResponse.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKNavigationResponsePtr = ^WKNavigationResponse;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKNavigationResponse = objcclass external (NSObject)
  public
    function isForMainFrame: boolean; message 'isForMainFrame';
    function response: NSURLResponse; message 'response';
    function canShowMIMEType: boolean; message 'canShowMIMEType';
  end;
{$endif}

{$endif}
