{ Parsed from WebKit.framework (iPhoneOS8.2) WKScriptMessageHandler.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKScriptMessageHandlerProtocolPtr = ^WKScriptMessageHandlerProtocol;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef PROTOCOLS}

type
  WKScriptMessageHandlerProtocol = objcprotocol external name 'WKScriptMessageHandler' (NSObjectProtocol)
  required
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage); message 'userContentController:didReceiveScriptMessage:';
  end;
{$endif}

{$endif}
