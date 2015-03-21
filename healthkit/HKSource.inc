{ Parsed from HealthKit.framework (iPhoneOS8.2) HKSource.h }
{ Created on Fri Mar 20 2:11:00 2015 }


{$ifdef TYPES}
type
  HKSourcePtr = ^HKSource;
{$endif}

{$ifdef CLASSES}

type
  HKSource = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function name: NSString; message 'name';
    function bundleIdentifier: NSString; message 'bundleIdentifier';
    class function defaultSource: HKSource; message 'defaultSource';
    function init: instancetype; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

