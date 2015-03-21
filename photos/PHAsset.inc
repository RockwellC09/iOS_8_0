{ Parsed from Photos.framework (iPhoneOS8.2) PHAsset.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHAssetPtr = ^PHAsset;
{$endif}

{$ifdef CLASSES}

type
  PHAsset = objcclass external (PHObject)
  public
    function mediaType: PHAssetMediaType; message 'mediaType';
    function mediaSubtypes: PHAssetMediaSubtype; message 'mediaSubtypes';
    function pixelWidth: NSUInteger; message 'pixelWidth';
    function pixelHeight: NSUInteger; message 'pixelHeight';
    function creationDate: NSDate; message 'creationDate';
    function modificationDate: NSDate; message 'modificationDate';
    function location: CLLocation; message 'location';
    function duration: NSTimeInterval; message 'duration';
    function isHidden: boolean; message 'isHidden';
    function isFavorite: boolean; message 'isFavorite';
    function burstIdentifier: NSString; message 'burstIdentifier';
    function burstSelectionTypes: PHAssetBurstSelectionType; message 'burstSelectionTypes';
    function representsBurst: boolean; message 'representsBurst';
    function canPerformEditOperation (editOperation: PHAssetEditOperation): boolean; message 'canPerformEditOperation:';
    class function fetchAssetsInAssetCollection_options (assetCollection: PHAssetCollection; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsInAssetCollection:options:';
    class function fetchAssetsWithMediaType_options (mediaType_: PHAssetMediaType; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithMediaType:options:';
    class function fetchAssetsWithLocalIdentifiers_options (identifiers: NSArray; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithLocalIdentifiers:options:';
    class function fetchKeyAssetsInAssetCollection_options (assetCollection: PHAssetCollection; options: PHFetchOptions): PHFetchResult; message 'fetchKeyAssetsInAssetCollection:options:';
    class function fetchAssetsWithBurstIdentifier_options (burstIdentifier_: NSString; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithBurstIdentifier:options:';
    class function fetchAssetsWithOptions (options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithOptions:';
    class function fetchAssetsWithALAssetURLs_options (assetURLs: NSArray; options: PHFetchOptions): PHFetchResult; message 'fetchAssetsWithALAssetURLs:options:';
  end;
{$endif}

