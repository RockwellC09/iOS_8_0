{ Parsed from QuickLook.framework (iPhoneOS8.2) QLPreviewItem.h }
{ Created on Fri Mar 20 2:11:15 2015 }


{$ifdef TYPES}
type
  QLPreviewItemProtocolPtr = ^QLPreviewItemProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewItemProtocol = objcprotocol external name 'QLPreviewItem' (NSObjectProtocol)
  required
    function previewItemURL: NSURL; message 'previewItemURL';
  optional
    function previewItemTitle: NSString; message 'previewItemTitle';
  end;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewConvenienceAdditions = objccategory external (NSURL)
  end;
{$endif}

