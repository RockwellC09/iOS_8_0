{ Parsed from Photos.framework (iPhoneOS8.2) PHChange.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHChangePtr = ^PHChange;
  PHObjectChangeDetailsPtr = ^PHObjectChangeDetails;
  PHFetchResultChangeDetailsPtr = ^PHFetchResultChangeDetails;
{$endif}

{$ifdef CLASSES}

type
  PHChange = objcclass external (NSObject)
  public
    function changeDetailsForObject (object_: PHObject): PHObjectChangeDetails; message 'changeDetailsForObject:';
    function changeDetailsForFetchResult (object_: PHFetchResult): PHFetchResultChangeDetails; message 'changeDetailsForFetchResult:';
  end;

type
  PHObjectChangeDetails = objcclass external (NSObject)
  public
    function objectBeforeChanges: id; message 'objectBeforeChanges';
    function objectAfterChanges: id; message 'objectAfterChanges';
    function assetContentChanged: boolean; message 'assetContentChanged';
    function objectWasDeleted: boolean; message 'objectWasDeleted';
  end;

type
  PHFetchResultChangeDetails = objcclass external (NSObject)
  public
    function fetchResultBeforeChanges: PHFetchResult; message 'fetchResultBeforeChanges';
    function fetchResultAfterChanges: PHFetchResult; message 'fetchResultAfterChanges';
    function hasIncrementalChanges: boolean; message 'hasIncrementalChanges';
    function removedIndexes: NSIndexSet; message 'removedIndexes';
    function removedObjects: NSArray; message 'removedObjects';
    function insertedIndexes: NSIndexSet; message 'insertedIndexes';
    function insertedObjects: NSArray; message 'insertedObjects';
    function changedIndexes: NSIndexSet; message 'changedIndexes';
    function changedObjects: NSArray; message 'changedObjects';
    procedure enumerateMovesWithBlock (handler: OpaqueCBlock); message 'enumerateMovesWithBlock:';
    function hasMoves: boolean; message 'hasMoves';
    class function changeDetailsFromFetchResult_toFetchResult_changedObjects (fromResult: PHFetchResult; toResult: PHFetchResult; changedObjects_: NSArray): instancetype; message 'changeDetailsFromFetchResult:toFetchResult:changedObjects:';
  end;
{$endif}

