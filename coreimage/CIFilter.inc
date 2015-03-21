{ Parsed from CoreImage.framework (iPhoneOS8.2) CIFilter.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  CIFilterPtr = ^CIFilter;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCIAttributeFilterName: NSString; cvar; external;
  kCIAttributeFilterDisplayName: NSString; cvar; external;
  kCIAttributeDescription: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIAttributeReferenceDocumentation: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIAttributeFilterCategories: NSString; cvar; external;
  kCIAttributeClass: NSString; cvar; external;
  kCIAttributeType: NSString; cvar; external;
  kCIAttributeMin: NSString; cvar; external;
  kCIAttributeMax: NSString; cvar; external;
  kCIAttributeSliderMin: NSString; cvar; external;
  kCIAttributeSliderMax: NSString; cvar; external;
  kCIAttributeDefault: NSString; cvar; external;
  kCIAttributeIdentity: NSString; cvar; external;
  kCIAttributeName: NSString; cvar; external;
  kCIAttributeDisplayName: NSString; cvar; external;
  kCIUIParameterSet: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIUISetBasic: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIUISetIntermediate: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIUISetAdvanced: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIUISetDevelopment: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIAttributeTypeTime: NSString; cvar; external;
  kCIAttributeTypeScalar: NSString; cvar; external;
  kCIAttributeTypeDistance: NSString; cvar; external;
  kCIAttributeTypeAngle: NSString; cvar; external;
  kCIAttributeTypeBoolean: NSString; cvar; external;
  kCIAttributeTypeInteger: NSString { available starting in __MAC_10_5, __IPHONE_5_0 }; cvar; external;
  kCIAttributeTypeCount: NSString { available starting in __MAC_10_5, __IPHONE_5_0 }; cvar; external;
  kCIAttributeTypePosition: NSString; cvar; external;
  kCIAttributeTypeOffset: NSString; cvar; external;
  kCIAttributeTypePosition3: NSString; cvar; external;
  kCIAttributeTypeRectangle: NSString; cvar; external;
  kCIAttributeTypeColor: NSString; cvar; external;
  kCIAttributeTypeGradient: NSString { available starting in __MAC_NA, __IPHONE_NA }; cvar; external;
  kCIAttributeTypeImage: NSString { available starting in __MAC_NA, __IPHONE_5_0 }; cvar; external;
  kCIAttributeTypeTransform: NSString { available starting in __MAC_NA, __IPHONE_5_0 }; cvar; external;
  kCICategoryDistortionEffect: NSString; cvar; external;
  kCICategoryGeometryAdjustment: NSString; cvar; external;
  kCICategoryCompositeOperation: NSString; cvar; external;
  kCICategoryHalftoneEffect: NSString; cvar; external;
  kCICategoryColorAdjustment: NSString; cvar; external;
  kCICategoryColorEffect: NSString; cvar; external;
  kCICategoryTransition: NSString; cvar; external;
  kCICategoryTileEffect: NSString; cvar; external;
  kCICategoryGenerator: NSString; cvar; external;
  kCICategoryReduction: NSString { available starting in __MAC_10_5, __IPHONE_5_0 }; cvar; external;
  kCICategoryGradient: NSString; cvar; external;
  kCICategoryStylize: NSString; cvar; external;
  kCICategorySharpen: NSString; cvar; external;
  kCICategoryBlur: NSString; cvar; external;
  kCICategoryVideo: NSString; cvar; external;
  kCICategoryStillImage: NSString; cvar; external;
  kCICategoryInterlaced: NSString; cvar; external;
  kCICategoryNonSquarePixels: NSString; cvar; external;
  kCICategoryHighDynamicRange: NSString; cvar; external;
  kCICategoryBuiltIn: NSString; cvar; external;
  kCICategoryFilterGenerator: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIApplyOptionExtent: NSString { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCIApplyOptionDefinition: NSString { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCIApplyOptionUserInfo: NSString { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCIApplyOptionColorSpace: NSString { available starting in __MAC_10_4, __IPHONE_NA }; cvar; external;
  kCIOutputImageKey: NSString { available starting in __MAC_10_5, __IPHONE_5_0 }; cvar; external;
  kCIInputBackgroundImageKey: NSString { available starting in __MAC_10_5, __IPHONE_5_0 }; cvar; external;
  kCIInputImageKey: NSString { available starting in __MAC_10_5, __IPHONE_5_0 }; cvar; external;
  kCIInputTimeKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputTransformKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputScaleKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputAspectRatioKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputCenterKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputRadiusKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputAngleKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputRefractionKey: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIInputWidthKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputSharpnessKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputIntensityKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputEVKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputSaturationKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputColorKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputBrightnessKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputContrastKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputGradientImageKey: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIInputMaskImageKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputShadingImageKey: NSString { available starting in __MAC_10_5, __IPHONE_NA }; cvar; external;
  kCIInputTargetImageKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputExtentKey: NSString { available starting in __MAC_10_5, __IPHONE_7_0 }; cvar; external;
  kCIInputVersionKey: NSString { available starting in __MAC_NA, __IPHONE_6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CIFilter = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
    _priv:array[0..7] of pointer;
  public
    function outputImage: CIImage; message 'outputImage';
    function name: NSString; message 'name'; { available starting in __MAC_NA, __IPHONE_5_0 }
    function inputKeys: NSArray; message 'inputKeys';
    function outputKeys: NSArray; message 'outputKeys';
    procedure setDefaults; message 'setDefaults';
    function attributes: NSDictionary; message 'attributes';
    function apply_arguments_options (k: CIKernel; args: NSArray; dict: NSDictionary): CIImage; message 'apply:arguments:options:'; { available starting in __MAC_10_4, __IPHONE_NA }
    function apply (k: CIKernel): CIImage; varargs; message 'apply:'; { available starting in __MAC_10_4, __IPHONE_NA }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;


type
  CIFilterRegistry = objccategory external (CIFilter)
    class function filterWithName (name_: NSString): CIFilter; message 'filterWithName:';
    class function filterWithName_keysAndValues (name_: NSString; key0: id): CIFilter; varargs; message 'filterWithName:keysAndValues:';
    class function filterWithName_withInputParameters (name_: NSString; params: NSDictionary): CIFilter; message 'filterWithName:withInputParameters:'; { available starting in __MAC_10_10, __IPHONE_8_0 }
    class function filterNamesInCategory (category: NSString): NSArray; message 'filterNamesInCategory:';
    class function filterNamesInCategories (categories: NSArray): NSArray; message 'filterNamesInCategories:';
    class procedure registerFilterName_constructor_classAttributes (name_: NSString; anObject: CIFilterConstructorProtocol; attributes_: NSDictionary); message 'registerFilterName:constructor:classAttributes:'; { available starting in __MAC_10_4, __IPHONE_NA }
    class function localizedNameForFilterName (filterName: NSString): NSString; message 'localizedNameForFilterName:'; { available starting in __MAC_10_4, __IPHONE_NA }
    class function localizedNameForCategory (category: NSString): NSString; message 'localizedNameForCategory:'; { available starting in __MAC_10_4, __IPHONE_NA }
    class function localizedDescriptionForFilterName (filterName: NSString): NSString; message 'localizedDescriptionForFilterName:'; { available starting in __MAC_10_4, __IPHONE_NA }
    class function localizedReferenceDocumentationForFilterName (filterName: NSString): NSURL; message 'localizedReferenceDocumentationForFilterName:'; { available starting in __MAC_10_4, __IPHONE_NA }
  end;

type
  CIFilterXMPSerialization = objccategory external (CIFilter)
    class function serializedXMPFromFilters_inputImageExtent (filters: NSArray; extent: CGRect): NSData; message 'serializedXMPFromFilters:inputImageExtent:'; { available starting in __MAC_NA, __IPHONE_6_0 }
    class function filterArrayFromSerializedXMP_inputImageExtent_error (xmpData: NSData; extent: CGRect; outError: NSErrorPtr): NSArray; message 'filterArrayFromSerializedXMP:inputImageExtent:error:'; { available starting in __MAC_NA, __IPHONE_6_0 }
  end;
{$endif}

