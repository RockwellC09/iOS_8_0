{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMediaQuery.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMediaQueryPtr = ^MPMediaQuery;
  MPMediaPredicatePtr = ^MPMediaPredicate;
  MPMediaPropertyPredicatePtr = ^MPMediaPropertyPredicate;
{$endif}

{$ifdef TYPES}
type
  MPMediaGrouping = NSInteger;
  MPMediaGroupingPtr = ^MPMediaGrouping;

const
  MPMediaGroupingTitle = 0;
  MPMediaGroupingAlbum = 1;
  MPMediaGroupingArtist = 2;
  MPMediaGroupingAlbumArtist = 3;
  MPMediaGroupingComposer = 4;
  MPMediaGroupingGenre = 5;
  MPMediaGroupingPlaylist = 6;
  MPMediaGroupingPodcastTitle = 7;
{$endif}

{$ifdef CLASSES}

type
  MPMediaQuery = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithFilterPredicates (filterPredicates: NSSet): instancetype; message 'initWithFilterPredicates:'; { NS_DESIGNATED_INITIALIZER }
    procedure setFilterPredicates(newValue: NSSet); message 'setFilterPredicates:';
    function filterPredicates: NSSet; message 'filterPredicates';
    procedure addFilterPredicate (predicate: MPMediaPredicate); message 'addFilterPredicate:';
    procedure removeFilterPredicate (predicate: MPMediaPredicate); message 'removeFilterPredicate:';
    function items: NSArray; message 'items';
    function collections: NSArray; message 'collections';
    procedure setGroupingType(newValue: MPMediaGrouping); message 'setGroupingType:';
    function groupingType: MPMediaGrouping; message 'groupingType';
    function itemSections: NSArray; message 'itemSections';
    function collectionSections: NSArray; message 'collectionSections';
    class function albumsQuery: MPMediaQuery; message 'albumsQuery';
    class function artistsQuery: MPMediaQuery; message 'artistsQuery';
    class function songsQuery: MPMediaQuery; message 'songsQuery';
    class function playlistsQuery: MPMediaQuery; message 'playlistsQuery';
    class function podcastsQuery: MPMediaQuery; message 'podcastsQuery';
    class function audiobooksQuery: MPMediaQuery; message 'audiobooksQuery';
    class function compilationsQuery: MPMediaQuery; message 'compilationsQuery';
    class function composersQuery: MPMediaQuery; message 'composersQuery';
    class function genresQuery: MPMediaQuery; message 'genresQuery';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  MPMediaPredicate = objcclass external (NSObject, NSSecureCodingProtocol)
  private

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  MPMediaPredicateComparison = NSInteger;
  MPMediaPredicateComparisonPtr = ^MPMediaPredicateComparison;

const
  MPMediaPredicateComparisonEqualTo = 0;
  MPMediaPredicateComparisonContains = 1;
{$endif}

{$ifdef CLASSES}

type
  MPMediaPropertyPredicate = objcclass external (MPMediaPredicate)
  public
    class function predicateWithValue_forProperty (value: id; property_: NSString): MPMediaPropertyPredicate; message 'predicateWithValue:forProperty:';
    class function predicateWithValue_forProperty_comparisonType (value: id; property_: NSString; comparisonType: MPMediaPredicateComparison): MPMediaPropertyPredicate; message 'predicateWithValue:forProperty:comparisonType:';
    function property_: NSString; message 'property';
    function value: id; message 'value';
    function comparisonType: MPMediaPredicateComparison; message 'comparisonType';
  end;


type
  MPMediaQueryAdditions = objccategory external (MPMediaItem)
    class function persistentIDPropertyForGroupingType (groupingType: MPMediaGrouping): NSString; message 'persistentIDPropertyForGroupingType:'; { available in 4_2 }
    class function titlePropertyForGroupingType (groupingType: MPMediaGrouping): NSString; message 'titlePropertyForGroupingType:'; { available in 4_2 }
  end;
{$endif}

