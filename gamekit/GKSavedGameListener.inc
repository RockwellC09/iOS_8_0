{ Parsed from GameKit.framework (iPhoneOS8.2) GKSavedGameListener.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{$ifdef TYPES}
type
  GKSavedGameListenerProtocolPtr = ^GKSavedGameListenerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKSavedGameListenerProtocol = objcprotocol external name 'GKSavedGameListener' (NSObjectProtocol)
  optional
    procedure player_didModifySavedGame (player: GKPlayer; savedGame: GKSavedGame); message 'player:didModifySavedGame:';
    procedure player_hasConflictingSavedGames (player: GKPlayer; savedGames: NSArray); message 'player:hasConflictingSavedGames:';
  end;
{$endif}

