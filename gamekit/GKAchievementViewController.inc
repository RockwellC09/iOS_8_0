{ Parsed from GameKit.framework (iPhoneOS8.2) GKAchievementViewController.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{$ifdef TYPES}
type
  GKAchievementViewControllerPtr = ^GKAchievementViewController;
  GKAchievementViewControllerPtr = ^GKAchievementViewController;
  GKAchievementViewControllerPtr = ^GKAchievementViewController;
  GKAchievementViewControllerDelegateProtocolPtr = ^GKAchievementViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  GKAchievementViewController = objcclass external (GKGameCenterViewController)
  end;
{$endif}

{$else}
{$ifdef CLASSES}

type
  GKAchievementViewController = objcclass external (GKGameCenterViewController)
  private
    _achievementDelegate: GKAchievementViewControllerDelegateProtocol;
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKAchievementViewController = objcclass external (NSObject)
  public
    procedure setAchievementDelegate(newValue: GKAchievementViewControllerDelegateProtocol); message 'setAchievementDelegate:';
    function achievementDelegate: GKAchievementViewControllerDelegateProtocol; message 'achievementDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKAchievementViewControllerDelegateProtocol = objcprotocol external name 'GKAchievementViewControllerDelegate' (NSObjectProtocol)
  required
    procedure achievementViewControllerDidFinish (viewController: GKAchievementViewController); message 'achievementViewControllerDidFinish:';
  end;
{$endif}

