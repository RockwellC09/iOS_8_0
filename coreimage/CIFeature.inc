{ Parsed from CoreImage.framework (iPhoneOS8.2) CIFeature.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  CIFeaturePtr = ^CIFeature;
  CIFaceFeaturePtr = ^CIFaceFeature;
  CIRectangleFeaturePtr = ^CIRectangleFeature;
  CIQRCodeFeaturePtr = ^CIQRCodeFeature;
{$endif}

{$ifdef CLASSES}

type
  CIFeature = objcclass external (NSObject)
  private
  public
    function type_: NSString; message 'type';
    function bounds: CGRect; message 'bounds';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CIFeatureTypeFace: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CIFaceFeature = objcclass external (CIFeature)
  private
    bounds_: CGRect;
    hasLeftEyePosition: boolean;
    leftEyePosition: CGPoint;
    hasRightEyePosition: boolean;
    rightEyePosition: CGPoint;
    hasMouthPosition: boolean;
    mouthPosition: CGPoint;
    hasTrackingID: boolean;
    trackingID: cint;
    hasTrackingFrameCount: boolean;
    trackingFrameCount: cint;
    hasFaceAngle: boolean;
    faceAngle: single;
    hasSmile: boolean;
    leftEyeClosed: boolean;
    rightEyeClosed: boolean;
  public
    function bounds: CGRect; message 'bounds';
    function hasLeftEyePosition_: boolean; message 'hasLeftEyePosition';
    function leftEyePosition_: CGPoint; message 'leftEyePosition';
    function hasRightEyePosition_: boolean; message 'hasRightEyePosition';
    function rightEyePosition_: CGPoint; message 'rightEyePosition';
    function hasMouthPosition_: boolean; message 'hasMouthPosition';
    function mouthPosition_: CGPoint; message 'mouthPosition';
    function hasTrackingID_: boolean; message 'hasTrackingID';
    function trackingID_: cint; message 'trackingID';
    function hasTrackingFrameCount_: boolean; message 'hasTrackingFrameCount';
    function trackingFrameCount_: cint; message 'trackingFrameCount';
    function hasFaceAngle_: boolean; message 'hasFaceAngle';
    function faceAngle_: single; message 'faceAngle';
    function hasSmile_: boolean; message 'hasSmile';
    function leftEyeClosed_: boolean; message 'leftEyeClosed';
    function rightEyeClosed_: boolean; message 'rightEyeClosed';
  end;

type
  CIRectangleFeature = objcclass external (CIFeature)
  private
    bounds_: CGRect;
    topLeft: CGPoint;
    topRight: CGPoint;
    bottomLeft: CGPoint;
    bottomRight: CGPoint;
  public
    function bounds: CGRect; message 'bounds';
    function topLeft_: CGPoint; message 'topLeft';
    function topRight_: CGPoint; message 'topRight';
    function bottomLeft_: CGPoint; message 'bottomLeft';
    function bottomRight_: CGPoint; message 'bottomRight';
  end;

type
  CIQRCodeFeature = objcclass external (CIFeature)
  private
    bounds_: CGRect;
    topLeft: CGPoint;
    topRight: CGPoint;
    bottomLeft: CGPoint;
    bottomRight: CGPoint;
    messageString: NSString;
  public
    function bounds: CGRect; message 'bounds';
    function topLeft_: CGPoint; message 'topLeft';
    function topRight_: CGPoint; message 'topRight';
    function bottomLeft_: CGPoint; message 'bottomLeft';
    function bottomRight_: CGPoint; message 'bottomRight';
    function messageString_: NSString; message 'messageString';
  end;
{$endif}

