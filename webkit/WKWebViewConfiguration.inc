{ Parsed from WebKit.framework (iPhoneOS8.2) WKWebViewConfiguration.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{ Types from WKWebViewConfiguration }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  WKWebViewConfigurationPtr = ^WKWebViewConfiguration;
{$endif}

{$if defined(WK_API_ENABLED)}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  WKSelectionGranularity = NSInteger;
  WKSelectionGranularityPtr = ^WKSelectionGranularity;

const
  WKSelectionGranularityDynamic = 0;
  WKSelectionGranularityCharacter = 1;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  WKWebViewConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setProcessPool(newValue: WKProcessPool); message 'setProcessPool:';
    function processPool: WKProcessPool; message 'processPool';
    procedure setPreferences(newValue: WKPreferences); message 'setPreferences:';
    function preferences: WKPreferences; message 'preferences';
    procedure setUserContentController(newValue: WKUserContentController); message 'setUserContentController:';
    function userContentController: WKUserContentController; message 'userContentController';
    procedure setSuppressesIncrementalRendering(newValue: boolean); message 'setSuppressesIncrementalRendering:';
    function suppressesIncrementalRendering: boolean; message 'suppressesIncrementalRendering';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setAllowsInlineMediaPlayback(newValue: boolean); message 'setAllowsInlineMediaPlayback:';
    function allowsInlineMediaPlayback: boolean; message 'allowsInlineMediaPlayback';
    procedure setMediaPlaybackRequiresUserAction(newValue: boolean); message 'setMediaPlaybackRequiresUserAction:';
    function mediaPlaybackRequiresUserAction: boolean; message 'mediaPlaybackRequiresUserAction';
    procedure setMediaPlaybackAllowsAirPlay(newValue: boolean); message 'setMediaPlaybackAllowsAirPlay:';
    function mediaPlaybackAllowsAirPlay: boolean; message 'mediaPlaybackAllowsAirPlay';
    procedure setSelectionGranularity(newValue: WKSelectionGranularity); message 'setSelectionGranularity:';
    function selectionGranularity: WKSelectionGranularity; message 'selectionGranularity';
    {$endif}

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
