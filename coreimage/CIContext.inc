{ Parsed from CoreImage.framework (iPhoneOS8.2) CIContext.h }
{ Created on Fri Mar 20 2:10:09 2015 }


{ Types from CIContext }
{$ifdef TYPES}




{$endif}


{$ifdef TYPES}
type
  CIContextPtr = ^CIContext;
{$endif}

{$ifdef CLASSES}

type
  CIContext = objcclass external (NSObject)
  private
    _priv: CIContextInternalPtr;
  public
    {$if  not defined(TARGET_OS_IPHONE)}
    class function contextWithCGLContext_pixelFormat_colorSpace_options (ctx: CGLContextObj; pf: CGLPixelFormatObj; cs: CGColorSpaceRef; dict: NSDictionary): CIContext; message 'contextWithCGLContext:pixelFormat:colorSpace:options:'; { available starting in __MAC_10_6, __IPHONE_NA }
    {$endif}
    {$if  not defined(TARGET_OS_IPHONE)}
    class function contextWithCGLContext_pixelFormat_options (ctx: CGLContextObj; pf: CGLPixelFormatObj; dict: NSDictionary): CIContext; message 'contextWithCGLContext:pixelFormat:options:'; deprecated 'in __MAC_10_4,__MAC_10_6,__IPHONE_NA,__IPHONE_NA';
    {$endif}
    class function contextWithCGContext_options (ctx: CGContextRef; dict: NSDictionary): CIContext; message 'contextWithCGContext:options:'; { available starting in __MAC_10_4, __IPHONE_NA }
    class function contextWithOptions (dict: NSDictionary): CIContext; message 'contextWithOptions:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    {$if defined(TARGET_OS_IPHONE)}
    class function contextWithEAGLContext (eaglContext_: EAGLContext): CIContext; message 'contextWithEAGLContext:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    class function contextWithEAGLContext_options (eaglContext_: EAGLContext; dict: NSDictionary): CIContext; message 'contextWithEAGLContext:options:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    {$endif}
    procedure drawImage_atPoint_fromRect (im: CIImage; p: CGPoint; src: CGRect); message 'drawImage:atPoint:fromRect:'; deprecated 'in __MAC_10_4, __MAC_10_8, __IPHONE_5_0, __IPHONE_6_0';
    procedure drawImage_inRect_fromRect (im: CIImage; dest: CGRect; src: CGRect); message 'drawImage:inRect:fromRect:';
    function createCGImage_fromRect (im: CIImage; r: CGRect): CGImageRef; message 'createCGImage:fromRect:';
    function createCGImage_fromRect_format_colorSpace (im: CIImage; r: CGRect; f: CIFormat; cs: CGColorSpaceRef): CGImageRef; message 'createCGImage:fromRect:format:colorSpace:';
    function createCGLayerWithSize_info (size: CGSize; d: CFDictionaryRef): CGLayerRef; message 'createCGLayerWithSize:info:'; { available starting in __MAC_10_4, __IPHONE_NA }
    procedure render_toBitmap_rowBytes_bounds_format_colorSpace (im: CIImage; data: pointer; rb: ptrdiff_t; r: CGRect; f: CIFormat; cs: CGColorSpaceRef); message 'render:toBitmap:rowBytes:bounds:format:colorSpace:';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure render_toIOSurface_bounds_colorSpace (im: CIImage; surface: IOSurfaceRef; r: CGRect; cs: CGColorSpaceRef); message 'render:toIOSurface:bounds:colorSpace:'; { available starting in __MAC_10_6, __IPHONE_NA }
    {$endif}
    procedure render_toCVPixelBuffer (image: CIImage; buffer: CVPixelBufferRef); message 'render:toCVPixelBuffer:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    procedure render_toCVPixelBuffer_bounds_colorSpace (image: CIImage; buffer: CVPixelBufferRef; r: CGRect; cs: CGColorSpaceRef); message 'render:toCVPixelBuffer:bounds:colorSpace:'; { available starting in __MAC_NA, __IPHONE_5_0 }
    procedure reclaimResources; message 'reclaimResources'; { available starting in __MAC_10_4, __IPHONE_NA }
    procedure clearCaches; message 'clearCaches'; { available starting in __MAC_10_4, __IPHONE_NA }
    function inputImageMaximumSize: CGSize; message 'inputImageMaximumSize'; { available starting in __MAC_NA, __IPHONE_5_0 }
    function outputImageMaximumSize: CGSize; message 'outputImageMaximumSize'; { available starting in __MAC_NA, __IPHONE_5_0 }
  end;
{$endif}

