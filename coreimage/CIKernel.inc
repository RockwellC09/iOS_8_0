{ Parsed from CoreImage.framework (iPhoneOS8.2) CIKernel.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{$ifdef TYPES}
type
  CIKernelPtr = ^CIKernel;
  CIColorKernelPtr = ^CIColorKernel;
  CIWarpKernelPtr = ^CIWarpKernel;
{$endif}

{$ifdef TYPES}
type
  CIKernelROICallback = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  CIKernel = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    class function kernelsWithString (s: NSString): NSArray; message 'kernelsWithString:';
    class function kernelWithString (string_: NSString): instancetype; message 'kernelWithString:'; { available starting in __MAC_10_10, __IPHONE_8_0 }
    function name: NSString; message 'name';
    function applyWithExtent_roiCallback_arguments (extent: CGRect; callback: CIKernelROICallback; args: NSArray): CIImage; message 'applyWithExtent:roiCallback:arguments:'; { available starting in __MAC_NA, __IPHONE_8_0 }
  end;

type
  CIColorKernel = objcclass external (CIKernel)
  private
  public
    function applyWithExtent_arguments (extent: CGRect; args: NSArray): CIImage; message 'applyWithExtent:arguments:'; { available starting in __MAC_NA, __IPHONE_8_0 }
  end;

type
  CIWarpKernel = objcclass external (CIKernel)
  private
  public
    function applyWithExtent_roiCallback_inputImage_arguments (extent: CGRect; callback: CIKernelROICallback; image: CIImage; args: NSArray): CIImage; message 'applyWithExtent:roiCallback:inputImage:arguments:'; { available starting in __MAC_NA, __IPHONE_8_0 }
  end;
{$endif}

