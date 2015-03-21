{ Parsed from UIKit.framework (iPhoneOS8.2) NSShadow.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  NSShadowPtr = ^NSShadow;
{$endif}

{$ifdef CLASSES}

type
  NSShadow = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    procedure setShadowOffset(newValue: CGSize); message 'setShadowOffset:';
    function shadowOffset: CGSize; message 'shadowOffset';
    procedure setShadowBlurRadius(newValue: CGFloat); message 'setShadowBlurRadius:';
    function shadowBlurRadius: CGFloat; message 'shadowBlurRadius';
    procedure setShadowColor(newValue: id); message 'setShadowColor:';
    function shadowColor: id; message 'shadowColor';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

