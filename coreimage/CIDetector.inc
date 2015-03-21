{ Parsed from CoreImage.framework (iPhoneOS8.2) CIDetector.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  CIDetectorPtr = ^CIDetector;
{$endif}

{$ifdef CLASSES}

type
  CIDetector = objcclass external (NSObject)
  private
  public
    class function detectorOfType_context_options (type_: NSString; context: CIContext; options: NSDictionary): CIDetector; message 'detectorOfType:context:options:'; { available starting in __MAC_10_7, __IPHONE_5_0 }
    function featuresInImage (image: CIImage): NSArray; message 'featuresInImage:'; { available starting in __MAC_10_7, __IPHONE_5_0 }
    function featuresInImage_options (image: CIImage; options: NSDictionary): NSArray; message 'featuresInImage:options:'; { available starting in __MAC_10_8, __IPHONE_5_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CIDetectorTypeFace: NSString { available starting in __MAC_10_7, __IPHONE_5_0 }; cvar; external;
  CIDetectorTypeRectangle: NSString { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
  CIDetectorTypeQRCode: NSString { available starting in __MAC_10_10, __IPHONE_6_0 }; cvar; external;
  CIDetectorAccuracy: NSString { available starting in __MAC_10_7, __IPHONE_5_0 }; cvar; external;
  CIDetectorAccuracyLow: NSString { available starting in __MAC_10_7, __IPHONE_5_0 }; cvar; external;
  CIDetectorAccuracyHigh: NSString { available starting in __MAC_10_7, __IPHONE_5_0 }; cvar; external;
  CIDetectorTracking: NSString { available starting in __MAC_10_8, __IPHONE_6_0 }; cvar; external;
  CIDetectorMinFeatureSize: NSString { available starting in __MAC_10_8, __IPHONE_6_0 }; cvar; external;
  CIDetectorImageOrientation: NSString { available starting in __MAC_10_8, __IPHONE_5_0 }; cvar; external;
  CIDetectorEyeBlink: NSString { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  CIDetectorSmile: NSString { available starting in __MAC_10_9, __IPHONE_7_0 }; cvar; external;
  CIDetectorFocalLength: NSString { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
  CIDetectorAspectRatio: NSString { available starting in __MAC_10_10, __IPHONE_8_0 }; cvar; external;
{$endif}

