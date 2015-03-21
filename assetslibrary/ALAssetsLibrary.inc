{ Parsed from AssetsLibrary.framework (iPhoneOS8.2) ALAssetsLibrary.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  ALAssetsLibraryPtr = ^ALAssetsLibrary;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
type
  ALAssetOrientation = NSInteger;
  ALAssetOrientationPtr = ^ALAssetOrientation;

const
  ALAssetOrientationUp = 0;
  ALAssetOrientationDown = 1;
  ALAssetOrientationLeft = 2;
  ALAssetOrientationRight = 3;
  ALAssetOrientationUpMirrored = 4;
  ALAssetOrientationDownMirrored = 5;
  ALAssetOrientationLeftMirrored = 6;
  ALAssetOrientationRightMirrored = 7;
const
  ALAssetsGroupLibrary = 1 shl 0;
  ALAssetsGroupAlbum = 1 shl 1;
  ALAssetsGroupEvent = 1 shl 2;
  ALAssetsGroupFaces = 1 shl 3;
  ALAssetsGroupSavedPhotos = 1 shl 4;
  {$if (__IPHONE_5_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
  ALAssetsGroupPhotoStream = 1 shl 5;
  {$endif}
  ALAssetsGroupAll = $FFFFFFFF;

type
  ALAssetsGroupType = NSUInteger;
  ALAssetsGroupTypePtr = ^ALAssetsGroupType;
  ALAuthorizationStatus = NSInteger;
  ALAuthorizationStatusPtr = ^ALAuthorizationStatus;

const
  ALAuthorizationStatusNotDetermined = 0;
  ALAuthorizationStatusRestricted = 1;
  ALAuthorizationStatusDenied = 2;
  ALAuthorizationStatusAuthorized = 3;

type
  ALAssetsLibraryGroupsEnumerationResultsBlock = OpaqueCBlock;
  ALAssetsLibraryAssetForURLResultBlock = OpaqueCBlock;
  ALAssetsLibraryGroupResultBlock = OpaqueCBlock { available starting in __MAC_NA, __IPHONE_5_0 };
  ALAssetsLibraryAccessFailureBlock = OpaqueCBlock;
  ALAssetsLibraryWriteImageCompletionBlock = OpaqueCBlock;
  ALAssetsLibraryWriteVideoCompletionBlock = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  ALAssetsLibrary = objcclass external (NSObject)
  private
    _internal: id;
  public
    procedure enumerateGroupsWithTypes_usingBlock_failureBlock (types: ALAssetsGroupType; enumerationBlock: ALAssetsLibraryGroupsEnumerationResultsBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'enumerateGroupsWithTypes:usingBlock:failureBlock:';
    procedure assetForURL_resultBlock_failureBlock (assetURL: NSURL; resultBlock: ALAssetsLibraryAssetForURLResultBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'assetForURL:resultBlock:failureBlock:';
    procedure groupForURL_resultBlock_failureBlock (groupURL: NSURL; resultBlock: ALAssetsLibraryGroupResultBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'groupForURL:resultBlock:failureBlock:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    procedure addAssetsGroupAlbumWithName_resultBlock_failureBlock (name: NSString; resultBlock: ALAssetsLibraryGroupResultBlock; failureBlock: ALAssetsLibraryAccessFailureBlock); message 'addAssetsGroupAlbumWithName:resultBlock:failureBlock:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    procedure writeImageToSavedPhotosAlbum_orientation_completionBlock (imageRef: CGImageRef; orientation: ALAssetOrientation; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeImageToSavedPhotosAlbum:orientation:completionBlock:';
    procedure writeImageToSavedPhotosAlbum_metadata_completionBlock (imageRef: CGImageRef; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeImageToSavedPhotosAlbum:metadata:completionBlock:'; { available starting in __MAC_NA,__IPHONE_4_1 }
    procedure writeImageDataToSavedPhotosAlbum_metadata_completionBlock (imageData: NSData; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeImageDataToSavedPhotosAlbum:metadata:completionBlock:'; { available starting in __MAC_NA,__IPHONE_4_1 }
    procedure writeVideoAtPathToSavedPhotosAlbum_completionBlock (videoPathURL: NSURL; completionBlock: ALAssetsLibraryWriteVideoCompletionBlock); message 'writeVideoAtPathToSavedPhotosAlbum:completionBlock:';
    function videoAtPathIsCompatibleWithSavedPhotosAlbum (videoPathURL: NSURL): boolean; message 'videoAtPathIsCompatibleWithSavedPhotosAlbum:';
    class function authorizationStatus: ALAuthorizationStatus; message 'authorizationStatus'; { available starting in __MAC_NA,__IPHONE_6_0 }
    class procedure disableSharedPhotoStreamsSupport; message 'disableSharedPhotoStreamsSupport'; { available starting in __MAC_NA,__IPHONE_6_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ALAssetsLibraryChangedNotification: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetLibraryUpdatedAssetsKey: NSString { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  ALAssetLibraryInsertedAssetGroupsKey: NSString { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  ALAssetLibraryUpdatedAssetGroupsKey: NSString { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  ALAssetLibraryDeletedAssetGroupsKey: NSString { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  ALAssetsLibraryErrorDomain: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  ALAssetsLibraryUnknownError = -1;
  ALAssetsLibraryWriteFailedError = -3300;
  ALAssetsLibraryWriteBusyError = -3301;
  ALAssetsLibraryWriteInvalidDataError = -3302;
  ALAssetsLibraryWriteIncompatibleDataError = -3303;
  ALAssetsLibraryWriteDataEncodingError = -3304;
  ALAssetsLibraryWriteDiskSpaceError = -3305;
  ALAssetsLibraryDataUnavailableError = -3310;
  ALAssetsLibraryAccessUserDeniedError = -3311;
  ALAssetsLibraryAccessGloballyDeniedError = -3312;
{$endif}

{$endif}
