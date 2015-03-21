{ Parsed from Metal.framework (iPhoneOS8.2) MTLLibrary.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLVertexAttributePtr = ^MTLVertexAttribute;
  MTLCompileOptionsPtr = ^MTLCompileOptions;
  MTLFunctionProtocolPtr = ^MTLFunctionProtocol;
  MTLLibraryProtocolPtr = ^MTLLibraryProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTLVertexAttribute = objcclass external (NSObject)
  public
    function name: NSString; message 'name';
    function attributeIndex: NSUInteger; message 'attributeIndex';
    function isActive: boolean; message 'isActive';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLFunctionType = NSUInteger;
  MTLFunctionTypePtr = ^MTLFunctionType;

const
  MTLFunctionTypeVertex = 1;
  MTLFunctionTypeFragment = 2;
  MTLFunctionTypeKernel = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLFunctionProtocol = objcprotocol external name 'MTLFunction' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    function functionType: MTLFunctionType; message 'functionType';
    function vertexAttributes: NSArray; message 'vertexAttributes';
    function name: NSString; message 'name';
  end;
{$endif}

{$ifdef CLASSES}

type
  MTLCompileOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPreprocessorMacros(newValue: NSDictionary); message 'setPreprocessorMacros:';
    function preprocessorMacros: NSDictionary; message 'preprocessorMacros';
    procedure setFastMathEnabled(newValue: boolean); message 'setFastMathEnabled:';
    function fastMathEnabled: boolean; message 'fastMathEnabled';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLLibraryErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLLibraryError = NSUInteger;
  MTLLibraryErrorPtr = ^MTLLibraryError;

const
  MTLLibraryErrorUnsupported = 1;
  MTLLibraryErrorInternal = 2;
  MTLLibraryErrorCompileFailure = 3;
  MTLLibraryErrorCompileWarning = 4;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLRenderPipelineErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLRenderPipelineError = NSUInteger;
  MTLRenderPipelineErrorPtr = ^MTLRenderPipelineError;

const
  MTLRenderPipelineErrorInternal = 1;
  MTLRenderPipelineErrorUnsupported = 2;
  MTLRenderPipelineErrorInvalidInput = 3;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLLibraryProtocol = objcprotocol external name 'MTLLibrary' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function newFunctionWithName (functionName: NSString): MTLFunctionProtocol; message 'newFunctionWithName:';
    function functionNames: NSArray; message 'functionNames';
  end;
{$endif}

