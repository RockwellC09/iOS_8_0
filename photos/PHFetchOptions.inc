{ Parsed from Photos.framework (iPhoneOS8.2) PHFetchOptions.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHFetchOptionsPtr = ^PHFetchOptions;
{$endif}

{$ifdef CLASSES}

type
  PHFetchOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setIncludeHiddenAssets(newValue: boolean); message 'setIncludeHiddenAssets:';
    function includeHiddenAssets: boolean; message 'includeHiddenAssets';
    procedure setIncludeAllBurstAssets(newValue: boolean); message 'setIncludeAllBurstAssets:';
    function includeAllBurstAssets: boolean; message 'includeAllBurstAssets';
    procedure setWantsIncrementalChangeDetails(newValue: boolean); message 'setWantsIncrementalChangeDetails:';
    function wantsIncrementalChangeDetails: boolean; message 'wantsIncrementalChangeDetails';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

