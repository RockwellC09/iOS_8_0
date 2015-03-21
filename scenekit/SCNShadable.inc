{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNShadable.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNProgramPtr = ^SCNProgram;
  SCNShadableProtocolPtr = ^SCNShadableProtocol;
  SCNProgramDelegateProtocolPtr = ^SCNProgramDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNBindingBlock = OpaqueCBlock;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNShadableProtocol = objcprotocol external name 'SCNShadable' (NSObjectProtocol)
  optional
    procedure setShaderModifiers(newValue: NSDictionary); message 'setShaderModifiers:';
    function shaderModifiers: NSDictionary; message 'shaderModifiers';
    procedure setProgram(newValue: SCNProgram); message 'setProgram:';
    function program_: SCNProgram; message 'program';
    procedure handleBindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleBindingOfSymbol:usingBlock:'; { available in 10_9, 8_0 }
    procedure handleUnbindingOfSymbol_usingBlock (symbol: NSString; block: SCNBindingBlock); message 'handleUnbindingOfSymbol:usingBlock:'; { available in 10_9, 8_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNProgramMappingChannelKey: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNProgram = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _reserved: id;
  public
    class function program_: instancetype; message 'program';
    procedure setVertexShader(newValue: NSString); message 'setVertexShader:';
    function vertexShader: NSString; message 'vertexShader';
    procedure setFragmentShader(newValue: NSString); message 'setFragmentShader:';
    function fragmentShader: NSString; message 'fragmentShader';
    procedure setOpaque(newValue: boolean); message 'setOpaque:';
    function isOpaque: boolean; message 'isOpaque';
    procedure setSemantic_forSymbol_options (semantic: NSString; symbol: NSString; options: NSDictionary); message 'setSemantic:forSymbol:options:';
    function semanticForSymbol (symbol: NSString): NSString; message 'semanticForSymbol:';
    procedure setDelegate(newValue: SCNProgramDelegateProtocol); message 'setDelegate:';
    function delegate: SCNProgramDelegateProtocol; message 'delegate';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNProgramDelegateProtocol = objcprotocol external name 'SCNProgramDelegate' (NSObjectProtocol)
  optional
    procedure program_handleError (program_: SCNProgram; error: NSError); message 'program:handleError:';
    function programIsOpaque (program_: SCNProgram): boolean; message 'programIsOpaque:'; deprecated 'in 10_8, 10_10, NA, NA';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNShaderModifierEntryPointGeometry: NSString { available in 10_9, 8_0 }; cvar; external;
  SCNShaderModifierEntryPointSurface: NSString { available in 10_9, 8_0 }; cvar; external;
  SCNShaderModifierEntryPointLightingModel: NSString { available in 10_9, 8_0 }; cvar; external;
  SCNShaderModifierEntryPointFragment: NSString { available in 10_9, 8_0 }; cvar; external;
{$endif}

