{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMediaQuerySection.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMediaQuerySectionPtr = ^MPMediaQuerySection;
{$endif}

{$ifdef CLASSES}

type
  MPMediaQuerySection = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function title: NSString; message 'title';
    function range: NSRange; message 'range';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

