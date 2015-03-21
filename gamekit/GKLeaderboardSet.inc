{ Parsed from GameKit.framework (iPhoneOS8.2) GKLeaderboardSet.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{ Types from GKLeaderboardSet_UI }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKLeaderboardSetPtr = ^GKLeaderboardSet;
{$endif}

{$ifdef CLASSES}

type
  GKLeaderboardSet = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    function title: NSString; message 'title';
    function groupIdentifier: NSString; message 'groupIdentifier';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    class procedure loadLeaderboardSetsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadLeaderboardSetsWithCompletionHandler:'; { available in 10_10, 7_0 }
    procedure loadLeaderboardsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadLeaderboardsWithCompletionHandler:'; { available in 10_10, 7_0 }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  GKLeaderboardSet_UI = objccategory external name 'UI' (GKLeaderboardSet)
    {$if defined(TARGET_OS_IPHONE)}
    procedure loadImageWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadImageWithCompletionHandler:';
    {$else}
    procedure loadImageWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadImageWithCompletionHandler:';
    {$endif}
  end;
{$endif}

