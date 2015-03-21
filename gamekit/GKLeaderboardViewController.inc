{ Parsed from GameKit.framework (iPhoneOS8.2) GKLeaderboardViewController.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{$ifdef TYPES}
type
  GKLeaderboardViewControllerPtr = ^GKLeaderboardViewController;
  GKLeaderboardViewControllerPtr = ^GKLeaderboardViewController;
  GKLeaderboardViewControllerPtr = ^GKLeaderboardViewController;
  GKLeaderboardViewControllerDelegateProtocolPtr = ^GKLeaderboardViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  GKLeaderboardViewController = objcclass external (GKGameCenterViewController)
  end;
{$endif}

{$else}
{$ifdef CLASSES}

type
  GKLeaderboardViewController = objcclass external (GKGameCenterViewController)
  private
    _leaderboardDelegate: GKLeaderboardViewControllerDelegateProtocol;
    _category: NSString;
    _timeScope: GKLeaderboardTimeScope;
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKLeaderboardViewController = objcclass external (NSObject)
  public
    procedure setTimeScope(newValue: GKLeaderboardTimeScope); message 'setTimeScope:';
    function timeScope: GKLeaderboardTimeScope; message 'timeScope';
    procedure setCategory(newValue: NSString); message 'setCategory:';
    function category: NSString; message 'category';
    procedure setLeaderboardDelegate(newValue: GKLeaderboardViewControllerDelegateProtocol); message 'setLeaderboardDelegate:';
    function leaderboardDelegate: GKLeaderboardViewControllerDelegateProtocol; message 'leaderboardDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKLeaderboardViewControllerDelegateProtocol = objcprotocol external name 'GKLeaderboardViewControllerDelegate' (NSObjectProtocol)
  required
    procedure leaderboardViewControllerDidFinish (viewController: GKLeaderboardViewController); message 'leaderboardViewControllerDidFinish:';
  end;
{$endif}

