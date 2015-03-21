{ Parsed from WebKit.framework (iPhoneOS8.2) WKUserContentController.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKUserContentControllerPtr = ^WKUserContentController;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKUserContentController = objcclass external (NSObject)
  public
    function userScripts: NSArray; message 'userScripts';
    procedure addUserScript (userScript: WKUserScript); message 'addUserScript:';
    procedure removeAllUserScripts; message 'removeAllUserScripts';
    procedure addScriptMessageHandler_name (scriptMessageHandler: WKScriptMessageHandlerProtocol; name: NSString); message 'addScriptMessageHandler:name:';
    procedure removeScriptMessageHandlerForName (name: NSString); message 'removeScriptMessageHandlerForName:';
  end;
{$endif}

{$endif}
