{ Parsed from Photos.framework (iPhoneOS8.2) PHFetchResult.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHFetchResultPtr = ^PHFetchResult;
{$endif}

{$ifdef CLASSES}

type
  PHFetchResult = objcclass external (NSObject, NSCopyingProtocol, NSFastEnumerationProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectAtIndex (index: NSUInteger): id; message 'objectAtIndex:';
    function objectAtIndexedSubscript (idx: NSUInteger): id; message 'objectAtIndexedSubscript:';
    function containsObject (anObject: id): boolean; message 'containsObject:';
    function indexOfObject (anObject: id): NSUInteger; message 'indexOfObject:';
    function indexOfObject_inRange (anObject: id; range: NSRange): NSUInteger; message 'indexOfObject:inRange:';
    function firstObject: id; message 'firstObject';
    function lastObject: id; message 'lastObject';
    function objectsAtIndexes (indexes: NSIndexSet): NSArray; message 'objectsAtIndexes:';
    procedure enumerateObjectsUsingBlock (block: OpaqueCBlock); message 'enumerateObjectsUsingBlock:';
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: OpaqueCBlock); message 'enumerateObjectsWithOptions:usingBlock:';
    procedure enumerateObjectsAtIndexes_options_usingBlock (s: NSIndexSet; opts: NSEnumerationOptions; block: OpaqueCBlock); message 'enumerateObjectsAtIndexes:options:usingBlock:';
    function countOfAssetsWithMediaType (mediaType: PHAssetMediaType): NSUInteger; message 'countOfAssetsWithMediaType:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

