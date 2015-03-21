{ Parsed from WebKit.framework (iPhoneOS8.2) WKScriptMessage.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKScriptMessagePtr = ^WKScriptMessage;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKScriptMessage = objcclass external (NSObject)
  public
    function body: id; message 'body';
    function webView: WKWebView; message 'webView';
    function frameInfo: WKFrameInfo; message 'frameInfo';
    function name: NSString; message 'name';
  end;
{$endif}

{$endif}
