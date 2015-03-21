{ Parsed from GameKit.framework (iPhoneOS8.2) GKFriendRequestComposeViewController.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{$ifdef TYPES}
type
  GKFriendRequestComposeViewControllerPtr = ^GKFriendRequestComposeViewController;
  GKFriendRequestComposeViewControllerPtr = ^GKFriendRequestComposeViewController;
  GKFriendRequestComposeViewControllerDelegateProtocolPtr = ^GKFriendRequestComposeViewControllerDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)defined(interface)defined(GKFriendRequestComposeViewController)defined(UINavigationController)}

{$else}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewController = objcclass external (NSViewController, GKViewControllerProtocol)
  private
    _remoteViewController: id;
    _composeViewDelegateWeak: GKFriendRequestComposeViewControllerDelegateProtocol;
    _initialState: id;
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  GKFriendRequestComposeViewController = objcclass external (NSObject)
  public
    class function maxNumberOfRecipients: NSUInteger; message 'maxNumberOfRecipients';
    procedure setMessage (message_: NSString); message 'setMessage:';
    procedure addRecipientPlayers (players: NSArray); message 'addRecipientPlayers:'; { available in 10_10, 8_0 }
    procedure addRecipientsWithPlayerIDs (playerIDs: NSArray); message 'addRecipientsWithPlayerIDs:'; deprecated 'in 10_8, 10_10, 4_2, 8_0, "use addRecipientPlayers:"';
    procedure addRecipientsWithEmailAddresses (emailAddresses: NSArray); message 'addRecipientsWithEmailAddresses:';
    procedure setComposeViewDelegate(newValue: GKFriendRequestComposeViewControllerDelegateProtocol); message 'setComposeViewDelegate:';
    function composeViewDelegate: GKFriendRequestComposeViewControllerDelegateProtocol; message 'composeViewDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKFriendRequestComposeViewControllerDelegateProtocol = objcprotocol external name 'GKFriendRequestComposeViewControllerDelegate'
    procedure friendRequestComposeViewControllerDidFinish (viewController: GKFriendRequestComposeViewController); message 'friendRequestComposeViewControllerDidFinish:'; { available in 10_8, 4_2 }
  end;
{$endif}

