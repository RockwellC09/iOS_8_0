{ Parsed from GameKit.framework (iPhoneOS8.2) GKChallengeEventHandler.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{$ifdef TYPES}
type
  GKChallengeEventHandlerPtr = ^GKChallengeEventHandler;
  GKChallengeEventHandlerDelegateProtocolPtr = ^GKChallengeEventHandlerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKChallengeEventHandlerDelegateProtocol = objcprotocol external name 'GKChallengeEventHandlerDelegate' (NSObjectProtocol)
  optional
    procedure localPlayerDidSelectChallenge (challenge: GKChallenge); message 'localPlayerDidSelectChallenge:';
    function shouldShowBannerForLocallyReceivedChallenge (challenge: GKChallenge): boolean; message 'shouldShowBannerForLocallyReceivedChallenge:';
    procedure localPlayerDidReceiveChallenge (challenge: GKChallenge); message 'localPlayerDidReceiveChallenge:';
    function shouldShowBannerForLocallyCompletedChallenge (challenge: GKChallenge): boolean; message 'shouldShowBannerForLocallyCompletedChallenge:';
    procedure localPlayerDidCompleteChallenge (challenge: GKChallenge); message 'localPlayerDidCompleteChallenge:';
    function shouldShowBannerForRemotelyCompletedChallenge (challenge: GKChallenge): boolean; message 'shouldShowBannerForRemotelyCompletedChallenge:';
    procedure remotePlayerDidCompleteChallenge (challenge: GKChallenge); message 'remotePlayerDidCompleteChallenge:';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKChallengeEventHandler = objcclass external (NSObject)
  public
    class function challengeEventHandler: GKChallengeEventHandler; message 'challengeEventHandler'; deprecated 'in 10_8, 10_10, 6_0, 7_0';
    procedure setDelegate(newValue: GKChallengeEventHandlerDelegateProtocol); message 'setDelegate:';
    function delegate: GKChallengeEventHandlerDelegateProtocol; message 'delegate';
  end;
{$endif}

