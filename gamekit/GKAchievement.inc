{ Parsed from GameKit.framework (iPhoneOS8.2) GKAchievement.h }
{ Created on Fri Mar 20 2:10:56 2015 }


{$ifdef TYPES}
type
  GKAchievementPtr = ^GKAchievement;
{$endif}

{$ifdef CLASSES}

type
  GKAchievement = objcclass external (NSObject, NSCodingProtocol, NSSecureCodingProtocol)
  public
    class procedure loadAchievementsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'loadAchievementsWithCompletionHandler:';
    class procedure resetAchievementsWithCompletionHandler (completionHandler: OpaqueCBlock); message 'resetAchievementsWithCompletionHandler:';
    function initWithIdentifier (identifier: NSString): instancetype; message 'initWithIdentifier:';
    function initWithIdentifier_player (identifier: NSString; player: GKPlayer): instancetype; message 'initWithIdentifier:player:'; { available in 10_10, 8_0 }
    class procedure reportAchievements_withCompletionHandler (achievements: NSArray; completionHandler: OpaqueCBlock); message 'reportAchievements:withCompletionHandler:'; { available in 10_8, 6_0 }
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setPercentComplete(newValue: double); message 'setPercentComplete:';
    function percentComplete: double; message 'percentComplete';
    function isCompleted: boolean; message 'isCompleted';
    function lastReportedDate: NSDate; message 'lastReportedDate';
    procedure setShowsCompletionBanner(newValue: boolean); message 'setShowsCompletionBanner:';
    function showsCompletionBanner: boolean; message 'showsCompletionBanner';
    function player: GKPlayer; message 'player';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;


type
  GKAchievement_Deprecated = objccategory external name 'Deprecated' (GKAchievement)
    procedure reportAchievementWithCompletionHandler (completionHandler: OpaqueCBlock); message 'reportAchievementWithCompletionHandler:'; deprecated 'in 10_8, 10_10, 4_1, 7_0, "Use +reportAchievements:withCompletionHandler:"';
    function initWithIdentifier_forPlayer (identifier_: NSString; playerID: NSString): instancetype; message 'initWithIdentifier:forPlayer:'; deprecated 'in 7_0, 8_0, "use initWithIdentifier:player:"';
    function isHidden: boolean; message 'isHidden';
    function playerID: NSString; message 'playerID';
  end;
{$endif}

