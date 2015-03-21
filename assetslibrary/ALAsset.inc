{ Parsed from AssetsLibrary.framework (iPhoneOS8.2) ALAsset.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  ALAssetPtr = ^ALAsset;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef EXTERNAL_SYMBOLS}
var
  ALErrorInvalidProperty: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyType: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyLocation: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyDuration: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyOrientation: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyDate: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyRepresentations: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyURLs: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetPropertyAssetURL: NSString { available starting in __MAC_NA,__IPHONE_6_0 }; cvar; external;
  ALAssetTypePhoto: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetTypeVideo: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetTypeUnknown: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ALAsset = objcclass external (NSObject)
  private
    _internal: id;
  public
    function valueForProperty (property_: NSString): id; message 'valueForProperty:';
    function defaultRepresentation: ALAssetRepresentation; message 'defaultRepresentation';
    function representationForUTI (representationUTI: NSString): ALAssetRepresentation; message 'representationForUTI:';
    function thumbnail: CGImageRef; message 'thumbnail';
    function aspectRatioThumbnail: CGImageRef; message 'aspectRatioThumbnail'; { available starting in __MAC_NA, __IPHONE_5_0 }
    procedure writeModifiedImageDataToSavedPhotosAlbum_metadata_completionBlock (imageData: NSData; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'writeModifiedImageDataToSavedPhotosAlbum:metadata:completionBlock:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    procedure writeModifiedVideoAtPathToSavedPhotosAlbum_completionBlock (videoPathURL: NSURL; completionBlock: ALAssetsLibraryWriteVideoCompletionBlock); message 'writeModifiedVideoAtPathToSavedPhotosAlbum:completionBlock:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    function originalAsset: ALAsset; message 'originalAsset';
    function isEditable: boolean; message 'isEditable';
    procedure setImageData_metadata_completionBlock (imageData: NSData; metadata: NSDictionary; completionBlock: ALAssetsLibraryWriteImageCompletionBlock); message 'setImageData:metadata:completionBlock:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    procedure setVideoAtPath_completionBlock (videoPathURL: NSURL; completionBlock: ALAssetsLibraryWriteVideoCompletionBlock); message 'setVideoAtPath:completionBlock:'; { available starting in __MAC_NA, __IPHONE_5_0 }
  end;
{$endif}

{$endif}
