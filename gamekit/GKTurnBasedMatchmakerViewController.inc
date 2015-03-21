{ Parsed from GameKit.framework (iPhoneOS8.2) GKTurnBasedMatchmakerViewController.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{$ifdef TYPES}
type
  GKTurnBasedMatchmakerViewControllerPtr = ^GKTurnBasedMatchmakerViewController;
  GKTurnBasedMatchmakerViewControllerPtr = ^GKTurnBasedMatchmakerViewController;
  GKTurnBasedMatchmakerViewControllerDelegateProtocolPtr = ^GKTurnBasedMatchmakerViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)defined(interface)defined(GKTurnBasedMatchmakerViewController)defined(UINavigationController)}

{$else}
{$ifdef CLASSES}

type
  GKTurnBasedMatchmakerViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  private
    _remoteViewController: id;
    _turnBasedMatchmakerDelegateWeak: GKTurnBasedMatchmakerViewControllerDelegateProtocol;
    _matchRequest: GKMatchRequest;
    _showExistingMatches: boolean;
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKTurnBasedMatchmakerViewController = objcclass external (NSObject)
  public
    procedure setTurnBasedMatchmakerDelegate(newValue: GKTurnBasedMatchmakerViewControllerDelegateProtocol); message 'setTurnBasedMatchmakerDelegate:';
    function turnBasedMatchmakerDelegate: GKTurnBasedMatchmakerViewControllerDelegateProtocol; message 'turnBasedMatchmakerDelegate';
    procedure setShowExistingMatches(newValue: boolean); message 'setShowExistingMatches:';
    function showExistingMatches: boolean; message 'showExistingMatches';
    function initWithMatchRequest (request: GKMatchRequest): id; message 'initWithMatchRequest:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKTurnBasedMatchmakerViewControllerDelegateProtocol = objcprotocol external name 'GKTurnBasedMatchmakerViewControllerDelegate' (NSObjectProtocol)
  required
    procedure turnBasedMatchmakerViewControllerWasCancelled (viewController: GKTurnBasedMatchmakerViewController); message 'turnBasedMatchmakerViewControllerWasCancelled:'; { available in 10_8, 5_0 }
    procedure turnBasedMatchmakerViewController_didFailWithError (viewController: GKTurnBasedMatchmakerViewController; error: NSError); message 'turnBasedMatchmakerViewController:didFailWithError:'; { available in 10_8, 5_0 }
    procedure turnBasedMatchmakerViewController_didFindMatch (viewController: GKTurnBasedMatchmakerViewController; match: GKTurnBasedMatch); message 'turnBasedMatchmakerViewController:didFindMatch:'; { available in 10_8, 5_0 }
    procedure turnBasedMatchmakerViewController_playerQuitForMatch (viewController: GKTurnBasedMatchmakerViewController; match: GKTurnBasedMatch); message 'turnBasedMatchmakerViewController:playerQuitForMatch:'; { available in 10_8, 5_0 }
  end;
{$endif}

