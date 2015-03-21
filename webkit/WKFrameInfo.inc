{ Parsed from WebKit.framework (iPhoneOS8.2) WKFrameInfo.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  WKFrameInfoPtr = ^WKFrameInfo;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKFrameInfo = objcclass external (NSObject, NSCopyingProtocol)
  public
    function isMainFrame: boolean; message 'isMainFrame';
    function request: NSURLRequest; message 'request';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
