{ Parsed from CoreMotion.framework (iPhoneOS8.2) CMLogItem.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CMLogItemPtr = ^CMLogItem;
{$endif}

{$ifdef CLASSES}

type
  CMLogItem = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _internalLogItem: id;
  public
    function timestamp: NSTimeInterval; message 'timestamp';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

