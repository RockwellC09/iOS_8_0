{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}

unit DefinedClassesCoreImage;
interface

type
  CIColor = objcclass external;
  CIColorKernel = objcclass external;
  CIContext = objcclass external;
  CIDetector = objcclass external;
  CIFaceFeature = objcclass external;
  CIFeature = objcclass external;
  CIFilter = objcclass external;
  CIImage = objcclass external;
  CIKernel = objcclass external;
  CIQRCodeFeature = objcclass external;
  CIRectangleFeature = objcclass external;
  CIVector = objcclass external;
  CIWarpKernel = objcclass external;

type
  CIFilterShape = objcclass external;
  NSArray = objcclass external;
  NSData = objcclass external;
  NSDictionary = objcclass external;
  NSURL = objcclass external;
  CIFilterConstructorProtocol = objcprotocol external name 'CIFilterConstructor';

implementation
end.
