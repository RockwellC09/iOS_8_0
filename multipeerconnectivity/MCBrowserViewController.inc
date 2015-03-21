{ Parsed from MultipeerConnectivity.framework (iPhoneOS8.2) MCBrowserViewController.h }
{ Created on Fri Mar 20 2:11:10 2015 }


{$ifdef TYPES}
type
  MCBrowserViewControllerPtr = ^MCBrowserViewController;
  MCBrowserViewControllerDelegateProtocolPtr = ^MCBrowserViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  MCBrowserViewController = objcclass external (UIViewController, MCNearbyServiceBrowserDelegateProtocol)
  public
    function initWithServiceType_session (serviceType: NSString; session: MCSession): instancetype; message 'initWithServiceType:session:';
    function initWithBrowser_session (browser: MCNearbyServiceBrowser; session: MCSession): instancetype; message 'initWithBrowser:session:'; { NS_DESIGNATED_INITIALIZER }
    procedure setDelegate(newValue: MCBrowserViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: MCBrowserViewControllerDelegateProtocol; message 'delegate';
    function browser: MCNearbyServiceBrowser; message 'browser';
    function session: MCSession; message 'session';
    procedure setMinimumNumberOfPeers(newValue: NSUInteger); message 'setMinimumNumberOfPeers:';
    function minimumNumberOfPeers: NSUInteger; message 'minimumNumberOfPeers';
    procedure setMaximumNumberOfPeers(newValue: NSUInteger); message 'setMaximumNumberOfPeers:';
    function maximumNumberOfPeers: NSUInteger; message 'maximumNumberOfPeers';

    { Adopted protocols }
    procedure browser_didNotStartBrowsingForPeers (browser: MCNearbyServiceBrowser; error: NSError); message 'browser:didNotStartBrowsingForPeers:';
    procedure browser_foundPeer_withDiscoveryInfo (browser: MCNearbyServiceBrowser; peerID: MCPeerID; info: NSDictionary); message 'browser:foundPeer:withDiscoveryInfo:';
    procedure browser_lostPeer (browser: MCNearbyServiceBrowser; peerID: MCPeerID); message 'browser:lostPeer:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MCBrowserViewControllerDelegateProtocol = objcprotocol external name 'MCBrowserViewControllerDelegate' (NSObjectProtocol)
    procedure browserViewControllerDidFinish (browserViewController: MCBrowserViewController); message 'browserViewControllerDidFinish:';
    procedure browserViewControllerWasCancelled (browserViewController: MCBrowserViewController); message 'browserViewControllerWasCancelled:';
  optional
    function browserViewController_shouldPresentNearbyPeer_withDiscoveryInfo (browserViewController: MCBrowserViewController; peerID: MCPeerID; info: NSDictionary): boolean; message 'browserViewController:shouldPresentNearbyPeer:withDiscoveryInfo:';
  end;
{$endif}

