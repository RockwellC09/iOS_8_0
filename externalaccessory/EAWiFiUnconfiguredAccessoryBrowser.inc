{ Parsed from ExternalAccessory.framework (iPhoneOS8.2) EAWiFiUnconfiguredAccessoryBrowser.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EAWiFiUnconfiguredAccessoryBrowserPtr = ^EAWiFiUnconfiguredAccessoryBrowser;
  EAWiFiUnconfiguredAccessoryBrowserDelegateProtocolPtr = ^EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  EAWiFiUnconfiguredAccessoryBrowserState = NSInteger;
  EAWiFiUnconfiguredAccessoryBrowserStatePtr = ^EAWiFiUnconfiguredAccessoryBrowserState;

const
  EAWiFiUnconfiguredAccessoryBrowserStateWiFiUnavailable = 0;
  EAWiFiUnconfiguredAccessoryBrowserStateStopped = 1;
  EAWiFiUnconfiguredAccessoryBrowserStateSearching = 2;
  EAWiFiUnconfiguredAccessoryBrowserStateConfiguring = 3;

type
  EAWiFiUnconfiguredAccessoryConfigurationStatus = NSInteger;
  EAWiFiUnconfiguredAccessoryConfigurationStatusPtr = ^EAWiFiUnconfiguredAccessoryConfigurationStatus;

const
  EAWiFiUnconfiguredAccessoryConfigurationStatusSuccess = 0;
  EAWiFiUnconfiguredAccessoryConfigurationStatusUserCancelledConfiguration = 1;
  EAWiFiUnconfiguredAccessoryConfigurationStatusFailed = 2;
{$endif}

{$ifdef CLASSES}

type
  EAWiFiUnconfiguredAccessoryBrowser = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol); message 'setDelegate:';
    function delegate: EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol; message 'delegate';
    function unconfiguredAccessories: NSSet; message 'unconfiguredAccessories';
    function initWithDelegate_queue (delegate_: EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol; queue: dispatch_queue_t): instancetype; message 'initWithDelegate:queue:'; { available in NA, 8_0 }
    procedure startSearchingForUnconfiguredAccessoriesMatchingPredicate (predicate: NSPredicate); message 'startSearchingForUnconfiguredAccessoriesMatchingPredicate:'; { available in NA, 8_0 }
    procedure stopSearchingForUnconfiguredAccessories; message 'stopSearchingForUnconfiguredAccessories'; { available in NA, 8_0 }
    procedure configureAccessory_withConfigurationUIOnViewController (accessory: EAWiFiUnconfiguredAccessory; viewController: UIViewController); message 'configureAccessory:withConfigurationUIOnViewController:'; { available in NA, 8_0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  EAWiFiUnconfiguredAccessoryBrowserDelegateProtocol = objcprotocol external name 'EAWiFiUnconfiguredAccessoryBrowserDelegate' (NSObjectProtocol)
    procedure accessoryBrowser_didUpdateState (browser: EAWiFiUnconfiguredAccessoryBrowser; state: EAWiFiUnconfiguredAccessoryBrowserState); message 'accessoryBrowser:didUpdateState:'; { available in NA, 8_0 }
    procedure accessoryBrowser_didFindUnconfiguredAccessories (browser: EAWiFiUnconfiguredAccessoryBrowser; accessories: NSSet); message 'accessoryBrowser:didFindUnconfiguredAccessories:'; { available in NA, 8_0 }
    procedure accessoryBrowser_didRemoveUnconfiguredAccessories (browser: EAWiFiUnconfiguredAccessoryBrowser; accessories: NSSet); message 'accessoryBrowser:didRemoveUnconfiguredAccessories:'; { available in NA, 8_0 }
    procedure accessoryBrowser_didFinishConfiguringAccessory_withStatus (browser: EAWiFiUnconfiguredAccessoryBrowser; accessory: EAWiFiUnconfiguredAccessory; status: EAWiFiUnconfiguredAccessoryConfigurationStatus); message 'accessoryBrowser:didFinishConfiguringAccessory:withStatus:'; { available in NA, 8_0 }
  end;
{$endif}

