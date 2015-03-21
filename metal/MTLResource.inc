{ Parsed from Metal.framework (iPhoneOS8.2) MTLResource.h }
{ Created on Fri Mar 20 2:09:54 2015 }


{$ifdef TYPES}
type
  MTLResourceProtocolPtr = ^MTLResourceProtocol;
{$endif}

{$ifdef TYPES}
type
  MTLPurgeableState = NSUInteger;
  MTLPurgeableStatePtr = ^MTLPurgeableState;

const
  MTLPurgeableStateKeepCurrent = 1;
  MTLPurgeableStateNonVolatile = 2;
  MTLPurgeableStateVolatile = 3;
  MTLPurgeableStateEmpty = 4;

type
  MTLCPUCacheMode = NSUInteger;
  MTLCPUCacheModePtr = ^MTLCPUCacheMode;

const
  MTLCPUCacheModeDefaultCache = 0;
  MTLCPUCacheModeWriteCombined = 1;

type
  MTLResourceOptions = NSUInteger;
  MTLResourceOptionsPtr = ^MTLResourceOptions;

const
  MTLResourceOptionCPUCacheModeDefault = MTLCPUCacheModeDefaultCache shl 0;
  MTLResourceOptionCPUCacheModeWriteCombined = MTLCPUCacheModeWriteCombined shl 0;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLResourceProtocol = objcprotocol external name 'MTLResource' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function cpuCacheMode: MTLCPUCacheMode; message 'cpuCacheMode';
    function setPurgeableState (state: MTLPurgeableState): MTLPurgeableState; message 'setPurgeableState:';
  end;
{$endif}

