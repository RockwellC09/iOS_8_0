{ Parsed from UIKit.framework (iPhoneOS8.2) UIImagePickerController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIImagePickerControllerPtr = ^UIImagePickerController;
  UIImagePickerControllerDelegateProtocolPtr = ^UIImagePickerControllerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UIImagePickerControllerSourceType = NSInteger;
  UIImagePickerControllerSourceTypePtr = ^UIImagePickerControllerSourceType;

const
  UIImagePickerControllerSourceTypePhotoLibrary = 0;
  UIImagePickerControllerSourceTypeCamera = 1;
  UIImagePickerControllerSourceTypeSavedPhotosAlbum = 2;

type
  UIImagePickerControllerQualityType = NSInteger;
  UIImagePickerControllerQualityTypePtr = ^UIImagePickerControllerQualityType;

const
  UIImagePickerControllerQualityTypeHigh = 0;
  UIImagePickerControllerQualityTypeMedium = 1;
  UIImagePickerControllerQualityTypeLow = 2;
  {$if (__IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_4_0)}
  UIImagePickerControllerQualityType640x480 = 3;
  {$endif}
  {$if (__IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_5_0)}
  UIImagePickerControllerQualityTypeIFrame1280x720 = 4;
  UIImagePickerControllerQualityTypeIFrame960x540 = 5;
  {$endif}

type
  UIImagePickerControllerCameraCaptureMode = NSInteger;
  UIImagePickerControllerCameraCaptureModePtr = ^UIImagePickerControllerCameraCaptureMode;

const
  UIImagePickerControllerCameraCaptureModePhoto = 0;
  UIImagePickerControllerCameraCaptureModeVideo = 1;

type
  UIImagePickerControllerCameraDevice = NSInteger;
  UIImagePickerControllerCameraDevicePtr = ^UIImagePickerControllerCameraDevice;

const
  UIImagePickerControllerCameraDeviceRear = 0;
  UIImagePickerControllerCameraDeviceFront = 1;

type
  UIImagePickerControllerCameraFlashMode = NSInteger;
  UIImagePickerControllerCameraFlashModePtr = ^UIImagePickerControllerCameraFlashMode;

const
  UIImagePickerControllerCameraFlashModeOff = -1;
  UIImagePickerControllerCameraFlashModeAuto = 0;
  UIImagePickerControllerCameraFlashModeOn = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIImagePickerControllerMediaType: NSString; cvar; external;
  UIImagePickerControllerOriginalImage: NSString; cvar; external;
  UIImagePickerControllerEditedImage: NSString; cvar; external;
  UIImagePickerControllerCropRect: NSString; cvar; external;
  UIImagePickerControllerMediaURL: NSString; cvar; external;
  UIImagePickerControllerReferenceURL: NSString { available in 4_1 }; cvar; external;
  UIImagePickerControllerMediaMetadata: NSString { available in 4_1 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIImagePickerController = objcclass external (UINavigationController, NSCodingProtocol)
  private
    _sourceType: UIImagePickerControllerSourceType;
    _image: id;
    _cropRect: CGRect;
    _mediaTypes: NSArray;
    _properties: NSMutableDictionary;
    _previousStatusBarStyle: cint;
    _previousStatusBarHidden: boolean;
    _imagePickerFlags: bitpacked record
      case byte of
        0: (_anonBitField__imagePickerFlags0: cuint);
        1: (
          visible: 0..1;
          isCleaningUp: 0..1;
          savingOptions: 0..((1 shl 3)-1);
          didRevertStatusBar: 0..1;
        );
      end;
  public
    class function isSourceTypeAvailable (sourceType: UIImagePickerControllerSourceType): boolean; message 'isSourceTypeAvailable:';
    class function availableMediaTypesForSourceType (sourceType: UIImagePickerControllerSourceType): NSArray; message 'availableMediaTypesForSourceType:';
    class function isCameraDeviceAvailable (cameraDevice: UIImagePickerControllerCameraDevice): boolean; message 'isCameraDeviceAvailable:'; { available in 4_0 }
    class function isFlashAvailableForCameraDevice (cameraDevice: UIImagePickerControllerCameraDevice): boolean; message 'isFlashAvailableForCameraDevice:'; { available in 4_0 }
    class function availableCaptureModesForCameraDevice (cameraDevice: UIImagePickerControllerCameraDevice): NSArray; message 'availableCaptureModesForCameraDevice:'; { available in 4_0 }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setSourceType(newValue: UIImagePickerControllerSourceType); message 'setSourceType:';
    function sourceType: UIImagePickerControllerSourceType; message 'sourceType';
    procedure setMediaTypes(newValue: NSArray); message 'setMediaTypes:';
    function mediaTypes: NSArray; message 'mediaTypes';
    procedure setAllowsEditing(newValue: boolean); message 'setAllowsEditing:';
    function allowsEditing: boolean; message 'allowsEditing';
    procedure setAllowsImageEditing(newValue: boolean); message 'setAllowsImageEditing:';
    function allowsImageEditing: boolean; message 'allowsImageEditing';
    procedure setVideoMaximumDuration(newValue: NSTimeInterval); message 'setVideoMaximumDuration:';
    function videoMaximumDuration: NSTimeInterval; message 'videoMaximumDuration';
    procedure setVideoQuality(newValue: UIImagePickerControllerQualityType); message 'setVideoQuality:';
    function videoQuality: UIImagePickerControllerQualityType; message 'videoQuality';
    procedure setShowsCameraControls(newValue: boolean); message 'setShowsCameraControls:';
    function showsCameraControls: boolean; message 'showsCameraControls';
    procedure setCameraOverlayView(newValue: UIView); message 'setCameraOverlayView:';
    function cameraOverlayView: UIView; message 'cameraOverlayView';
    procedure setCameraViewTransform(newValue: CGAffineTransform); message 'setCameraViewTransform:';
    function cameraViewTransform: CGAffineTransform; message 'cameraViewTransform';
    procedure takePicture; message 'takePicture'; { available in 3_1 }
    function startVideoCapture: boolean; message 'startVideoCapture'; { available in 4_0 }
    procedure stopVideoCapture; message 'stopVideoCapture'; { available in 4_0 }
    procedure setCameraCaptureMode(newValue: UIImagePickerControllerCameraCaptureMode); message 'setCameraCaptureMode:';
    function cameraCaptureMode: UIImagePickerControllerCameraCaptureMode; message 'cameraCaptureMode';
    procedure setCameraDevice(newValue: UIImagePickerControllerCameraDevice); message 'setCameraDevice:';
    function cameraDevice: UIImagePickerControllerCameraDevice; message 'cameraDevice';
    procedure setCameraFlashMode(newValue: UIImagePickerControllerCameraFlashMode); message 'setCameraFlashMode:';
    function cameraFlashMode: UIImagePickerControllerCameraFlashMode; message 'cameraFlashMode';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIImagePickerControllerDelegateProtocol = objcprotocol external name 'UIImagePickerControllerDelegate' (NSObjectProtocol)
  optional
    procedure imagePickerController_didFinishPickingImage_editingInfo (picker: UIImagePickerController; image: UIImage; editingInfo: NSDictionary); message 'imagePickerController:didFinishPickingImage:editingInfo:'; deprecated 'in 2_0, 3_0';
    procedure imagePickerController_didFinishPickingMediaWithInfo (picker: UIImagePickerController; info: NSDictionary); message 'imagePickerController:didFinishPickingMediaWithInfo:';
    procedure imagePickerControllerDidCancel (picker: UIImagePickerController); message 'imagePickerControllerDidCancel:';
  end;
{$endif}

{$ifdef FUNCTIONS}
procedure UIImageWriteToSavedPhotosAlbum(image: UIImage; completionTarget: id; completionSelector: SEL; contextInfo: pointer); cdecl; external;
function UIVideoAtPathIsCompatibleWithSavedPhotosAlbum(videoPath: NSString): boolean; cdecl; external; { available in 3_1 }
procedure UISaveVideoAtPathToSavedPhotosAlbum(videoPath: NSString; completionTarget: id; completionSelector: SEL; contextInfo: pointer); cdecl; external; { available in 3_1 }
{$endif}

