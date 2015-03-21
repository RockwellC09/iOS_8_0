{ Parsed from Photos.framework (iPhoneOS8.2) PhotosTypes.h }
{ Created on Fri Mar 20 2:11:14 2015 }

{$ifndef Photos_PhotosTypes_h}
{$ifdef TYPES}
type
  PHCollectionListType = NSInteger;
  PHCollectionListTypePtr = ^PHCollectionListType;

const
  PHCollectionListTypeMomentList = 1;
  PHCollectionListTypeFolder = 2;
  PHCollectionListTypeSmartFolder = 3;

type
  PHCollectionListSubtype = NSInteger;
  PHCollectionListSubtypePtr = ^PHCollectionListSubtype;

const
  PHCollectionListSubtypeMomentListCluster = 1;
  PHCollectionListSubtypeMomentListYear = 2;
  PHCollectionListSubtypeRegularFolder = 100;
  PHCollectionListSubtypeSmartFolderEvents = 200;
  PHCollectionListSubtypeSmartFolderFaces = 201;
  PHCollectionListSubtypeAny = NSIntegerMax;

type
  PHCollectionEditOperation = NSInteger;
  PHCollectionEditOperationPtr = ^PHCollectionEditOperation;

const
  PHCollectionEditOperationDeleteContent = 1;
  PHCollectionEditOperationRemoveContent = 2;
  PHCollectionEditOperationAddContent = 3;
  PHCollectionEditOperationCreateContent = 4;
  PHCollectionEditOperationRearrangeContent = 5;
  PHCollectionEditOperationDelete = 6;
  PHCollectionEditOperationRename = 7;

type
  PHAssetCollectionType = NSInteger;
  PHAssetCollectionTypePtr = ^PHAssetCollectionType;

const
  PHAssetCollectionTypeAlbum = 1;
  PHAssetCollectionTypeSmartAlbum = 2;
  PHAssetCollectionTypeMoment = 3;

type
  PHAssetCollectionSubtype = NSInteger;
  PHAssetCollectionSubtypePtr = ^PHAssetCollectionSubtype;

const
  PHAssetCollectionSubtypeAlbumRegular = 2;
  PHAssetCollectionSubtypeAlbumSyncedEvent = 3;
  PHAssetCollectionSubtypeAlbumSyncedFaces = 4;
  PHAssetCollectionSubtypeAlbumSyncedAlbum = 5;
  PHAssetCollectionSubtypeAlbumImported = 6;
  PHAssetCollectionSubtypeAlbumMyPhotoStream = 100;
  PHAssetCollectionSubtypeAlbumCloudShared = 101;
  PHAssetCollectionSubtypeSmartAlbumGeneric = 200;
  PHAssetCollectionSubtypeSmartAlbumPanoramas = 201;
  PHAssetCollectionSubtypeSmartAlbumVideos = 202;
  PHAssetCollectionSubtypeSmartAlbumFavorites = 203;
  PHAssetCollectionSubtypeSmartAlbumTimelapses = 204;
  PHAssetCollectionSubtypeSmartAlbumAllHidden = 205;
  PHAssetCollectionSubtypeSmartAlbumRecentlyAdded = 206;
  PHAssetCollectionSubtypeSmartAlbumBursts = 207;
  PHAssetCollectionSubtypeSmartAlbumSlomoVideos = 208;
  PHAssetCollectionSubtypeSmartAlbumUserLibrary = 209;
  PHAssetCollectionSubtypeAny = NSIntegerMax;

type
  PHAssetEditOperation = NSInteger;
  PHAssetEditOperationPtr = ^PHAssetEditOperation;

const
  PHAssetEditOperationDelete = 1;
  PHAssetEditOperationContent = 2;
  PHAssetEditOperationProperties = 3;

type
  PHAssetMediaType = NSInteger;
  PHAssetMediaTypePtr = ^PHAssetMediaType;

const
  PHAssetMediaTypeUnknown = 0;
  PHAssetMediaTypeImage = 1;
  PHAssetMediaTypeVideo = 2;
  PHAssetMediaTypeAudio = 3;

type
  PHAssetMediaSubtype = NSUInteger;
  PHAssetMediaSubtypePtr = ^PHAssetMediaSubtype;

const
  PHAssetMediaSubtypeNone = 0;
  PHAssetMediaSubtypePhotoPanorama = 1 shl 0;
  PHAssetMediaSubtypePhotoHDR = 1 shl 1;
  PHAssetMediaSubtypeVideoStreamed = 1 shl 16;
  PHAssetMediaSubtypeVideoHighFrameRate = 1 shl 17;
  PHAssetMediaSubtypeVideoTimelapse = 1 shl 18;

type
  PHAssetBurstSelectionType = NSUInteger;
  PHAssetBurstSelectionTypePtr = ^PHAssetBurstSelectionType;

const
  PHAssetBurstSelectionTypeNone = 0;
  PHAssetBurstSelectionTypeAutoPick = 1 shl 0;
  PHAssetBurstSelectionTypeUserPick = 1 shl 1;
{$endif}

{$endif}
