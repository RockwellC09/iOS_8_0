{ Parsed from WebKit.framework (iPhoneOS8.2) WKWebView.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{ Types from WKWebView }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  WKWebViewPtr = ^WKWebView;
{$endif}

{$if defined(TARGET_OS_IPHONE)defined(interface)defined(WKWebView)defined(UIView)}

{$else}
{$ifdef CLASSES}

type
  WKWebView = objcclass external (NSView)
  public
    function configuration: WKWebViewConfiguration; message 'configuration';
    procedure setNavigationDelegate(newValue: WKNavigationDelegateProtocol); message 'setNavigationDelegate:';
    function navigationDelegate: WKNavigationDelegateProtocol; message 'navigationDelegate';
    procedure setUIDelegate(newValue: WKUIDelegateProtocol); message 'setUIDelegate:';
    function UIDelegate: WKUIDelegateProtocol; message 'UIDelegate';
    function backForwardList: WKBackForwardList; message 'backForwardList';
    function initWithFrame_configuration (frame: CGRect; configuration_: WKWebViewConfiguration): instancetype; message 'initWithFrame:configuration:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): instancetype; message 'initWithCoder:';
    function loadRequest (request: NSURLRequest): WKNavigation; message 'loadRequest:';
    function loadHTMLString_baseURL (string_: NSString; baseURL: NSURL): WKNavigation; message 'loadHTMLString:baseURL:';
    function goToBackForwardListItem (item: WKBackForwardListItem): WKNavigation; message 'goToBackForwardListItem:';
    function title: NSString; message 'title';
    function URL: NSURL; message 'URL';
    function isLoading: boolean; message 'isLoading';
    function estimatedProgress: double; message 'estimatedProgress';
    function hasOnlySecureContent: boolean; message 'hasOnlySecureContent';
    function canGoBack: boolean; message 'canGoBack';
    function canGoForward: boolean; message 'canGoForward';
    function goBack: WKNavigation; message 'goBack';
    function goForward: WKNavigation; message 'goForward';
    function reload: WKNavigation; message 'reload';
    function reloadFromOrigin: WKNavigation; message 'reloadFromOrigin';
    procedure stopLoading; message 'stopLoading';
    procedure evaluateJavaScript_completionHandler (javaScriptString: NSString; completionHandler: OpaqueCBlock); message 'evaluateJavaScript:completionHandler:';
    procedure setAllowsBackForwardNavigationGestures(newValue: boolean); message 'setAllowsBackForwardNavigationGestures:';
    function allowsBackForwardNavigationGestures: boolean; message 'allowsBackForwardNavigationGestures';
    {$if defined(TARGET_OS_IPHONE)}
    function scrollView: UIScrollView; message 'scrollView';
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAllowsMagnification(newValue: boolean); message 'setAllowsMagnification:';
    function allowsMagnification: boolean; message 'allowsMagnification';
    procedure setMagnification(newValue: CGFloat); message 'setMagnification:';
    function magnification: CGFloat; message 'magnification';
    procedure setMagnification_centeredAtPoint (magnification_: CGFloat; point: CGPoint); message 'setMagnification:centeredAtPoint:';
    {$endif}
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKIBActions = objccategory external (WKWebView)
    procedure goBack_ (sender: id); message 'goBack:';
    procedure goForward_ (sender: id); message 'goForward:';
    procedure reload_ (sender: id); message 'reload:';
    procedure reloadFromOrigin_ (sender: id); message 'reloadFromOrigin:';
    procedure stopLoading_ (sender: id); message 'stopLoading:';
  end;
{$endif}

{$endif}
{$endif}
