{ Parsed from Foundation.framework (iPhoneOS8.2) NSProcessInfo.h }
{ Created on Fri Mar 20 2:11:39 2015 }


{$ifdef TYPES}
type
  NSProcessInfoPtr = ^NSProcessInfo;
{$endif}

{$ifdef TYPES}
const
  NSWindowsNTOperatingSystem = 1;
  NSWindows95OperatingSystem = 2;
  NSSolarisOperatingSystem = 3;
  NSHPUXOperatingSystem = 4;
  NSMACHOperatingSystem = 5;
  NSSunOSOperatingSystem = 6;
  NSOSF1OperatingSystem = 7;

type
  NSOperatingSystemVersion = record
    majorVersion: NSInteger;
    minorVersion: NSInteger;
    patchVersion: NSInteger;
  end;
type
  NSOperatingSystemVersionPtr = ^NSOperatingSystemVersion;
{$endif}

{$ifdef CLASSES}

type
  NSProcessInfo = objcclass external (NSObject)
  private
    environment: NSDictionary;
    arguments: NSArray;
    hostName: NSString;
    name: NSString;
    automaticTerminationOptOutCounter: NSInteger;
  public
    class function processInfo: NSProcessInfo; message 'processInfo';
    function environment_: NSDictionary; message 'environment';
    function arguments_: NSArray; message 'arguments';
    function hostName_: NSString; message 'hostName';
    procedure setProcessName(newValue: NSString); message 'setProcessName:';
    function processName: NSString; message 'processName';
    function processIdentifier: cint; message 'processIdentifier';
    function globallyUniqueString: NSString; message 'globallyUniqueString';
    function operatingSystem: NSUInteger; message 'operatingSystem'; deprecated 'in 10_0, 10_10, 2_0, 8_0, "-operatingSystem always returns NSMACHOperatingSystem, use -operatingSystemVersion or -isOperatingSystemAtLeastVersion: instead"';
    function operatingSystemName: NSString; message 'operatingSystemName'; deprecated 'in 10_0, 10_10, 2_0, 8_0, "-operatingSystemName always returns NSMACHOperatingSystem, use -operatingSystemVersionString instead"';
    function operatingSystemVersionString: NSString; message 'operatingSystemVersionString';
    function operatingSystemVersion: NSOperatingSystemVersion; message 'operatingSystemVersion';
    function processorCount: NSUInteger; message 'processorCount';
    function activeProcessorCount: NSUInteger; message 'activeProcessorCount';
    function physicalMemory: culonglong; message 'physicalMemory';
    function isOperatingSystemAtLeastVersion (version: NSOperatingSystemVersion): boolean; message 'isOperatingSystemAtLeastVersion:'; { available in 10_10, 8_0 }
    function systemUptime: NSTimeInterval; message 'systemUptime';
    procedure disableSuddenTermination; message 'disableSuddenTermination'; { available in 10_6, NA }
    procedure enableSuddenTermination; message 'enableSuddenTermination'; { available in 10_6, NA }
    procedure disableAutomaticTermination (reason: NSString); message 'disableAutomaticTermination:'; { available in 10_7, NA }
    procedure enableAutomaticTermination (reason: NSString); message 'enableAutomaticTermination:'; { available in 10_7, NA }
    procedure setAutomaticTerminationSupportEnabled(newValue: boolean); message 'setAutomaticTerminationSupportEnabled:';
    function automaticTerminationSupportEnabled: boolean; message 'automaticTerminationSupportEnabled';
  end;
{$endif}

{$ifdef TYPES}
type
  NSActivityOptions = cuint64;
  NSActivityOptionsPtr = ^NSActivityOptions;

const
  NSActivityIdleDisplaySleepDisabled = 1 shl 40;
  NSActivityIdleSystemSleepDisabled = 1 shl 20;
  NSActivitySuddenTerminationDisabled = 1 shl 14;
  NSActivityAutomaticTerminationDisabled = 1 shl 15;
  NSActivityUserInitiated = $00FFFFFF + NSActivityIdleSystemSleepDisabled;
  NSActivityUserInitiatedAllowingIdleSystemSleep = NSActivityUserInitiated and not(NSActivityIdleSystemSleepDisabled);
  
  NSActivityBackground = $000000FF;
  NSActivityLatencyCritical = $FF00000000;
{$endif}

{$ifdef CLASSES}

type
  // NSProcessInfo = objcclass external (NSObject)
  NSProcessInfoC = objcclass external (NSObject)
  public
    function beginActivityWithOptions_reason (options: NSActivityOptions; reason: NSString): NSObjectProtocol; message 'beginActivityWithOptions:reason:'; { available in 10_9, 7_0 }
    procedure endActivity (activity: NSObjectProtocol); message 'endActivity:'; { available in 10_9, 7_0 }
    procedure performActivityWithOptions_reason_usingBlock (options: NSActivityOptions; reason: NSString; block: OpaqueCBlock); message 'performActivityWithOptions:reason:usingBlock:'; { available in 10_9, 7_0 }
    procedure performExpiringActivityWithReason_usingBlock (reason: NSString; block: OpaqueCBlock); message 'performExpiringActivityWithReason:usingBlock:'; { available in 8_2 }
  end;
{$endif}

