{ Parsed from AssetsLibrary.framework (iPhoneOS8.2) ALAssetsGroup.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  ALAssetsGroupPtr = ^ALAssetsGroup;
{$endif}

{$if (__IPHONE_4_0 <= __IPHONE_OS_VERSION_MAX_ALLOWED)}
{$ifdef TYPES}
type
  ALAssetsGroupEnumerationResultsBlock = OpaqueCBlock;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ALAssetsGroupPropertyName: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetsGroupPropertyType: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetsGroupPropertyPersistentID: NSString { available starting in __MAC_NA,__IPHONE_4_0 }; cvar; external;
  ALAssetsGroupPropertyURL: NSString { available starting in __MAC_NA, __IPHONE_5_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ALAssetsGroup = objcclass external (NSObject)
  private
    _internal: id;
  public
    function valueForProperty (property_: NSString): id; message 'valueForProperty:';
    function posterImage: CGImageRef; message 'posterImage';
    procedure setAssetsFilter (filter: ALAssetsFilter); message 'setAssetsFilter:';
    function numberOfAssets: NSInteger; message 'numberOfAssets';
    procedure enumerateAssetsUsingBlock (enumerationBlock: ALAssetsGroupEnumerationResultsBlock); message 'enumerateAssetsUsingBlock:';
    procedure enumerateAssetsWithOptions_usingBlock (options: NSEnumerationOptions; enumerationBlock: ALAssetsGroupEnumerationResultsBlock); message 'enumerateAssetsWithOptions:usingBlock:';
    procedure enumerateAssetsAtIndexes_options_usingBlock (indexSet: NSIndexSet; options: NSEnumerationOptions; enumerationBlock: ALAssetsGroupEnumerationResultsBlock); message 'enumerateAssetsAtIndexes:options:usingBlock:';
    function isEditable: boolean; message 'isEditable';
    function addAsset (asset: ALAsset): boolean; message 'addAsset:'; { available starting in __MAC_NA, __IPHONE_5_0 }
  end;
{$endif}

{$endif}
