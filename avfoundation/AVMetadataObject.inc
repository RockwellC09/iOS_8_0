{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVMetadataObject.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVMetadataObjectPtr = ^AVMetadataObject;
  AVMetadataFaceObjectPtr = ^AVMetadataFaceObject;
  AVMetadataMachineReadableCodeObjectPtr = ^AVMetadataMachineReadableCodeObject;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataObject = objcclass external (NSObject)
  private
    _objectInternal: AVMetadataObjectInternal;
  public
    function time: CMTime; message 'time';
    function duration: CMTime; message 'duration';
    function bounds: CGRect; message 'bounds';
    function type_: NSString; message 'type';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeFace: NSString { available in 10_10, 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataFaceObject = objcclass external (AVMetadataObject, NSCopyingProtocol)
  private
    _internal: AVMetadataFaceObjectInternal;
  public
    function faceID: NSInteger; message 'faceID';
    function hasRollAngle: boolean; message 'hasRollAngle';
    function rollAngle: CGFloat; message 'rollAngle';
    function hasYawAngle: boolean; message 'hasYawAngle';
    function yawAngle: CGFloat; message 'yawAngle';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeUPCECode: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeCode39Code: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeCode39Mod43Code: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeEAN13Code: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeEAN8Code: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeCode93Code: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeCode128Code: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypePDF417Code: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeQRCode: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeAztecCode: NSString { available in NA, 7_0 }; cvar; external;
  AVMetadataObjectTypeInterleaved2of5Code: NSString { available in NA, 8_0 }; cvar; external;
  AVMetadataObjectTypeITF14Code: NSString { available in NA, 8_0 }; cvar; external;
  AVMetadataObjectTypeDataMatrixCode: NSString { available in NA, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataMachineReadableCodeObject = objcclass external (AVMetadataObject)
  private
    _internal: AVMetadataMachineReadableCodeObjectInternal;
  public
    function corners: NSArray; message 'corners';
    function stringValue: NSString; message 'stringValue';
  end;
{$endif}

