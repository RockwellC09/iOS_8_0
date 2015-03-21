{ Parsed from Photos.framework (iPhoneOS8.2) PHAdjustmentData.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHAdjustmentDataPtr = ^PHAdjustmentData;
{$endif}

{$ifdef CLASSES}

type
  PHAdjustmentData = objcclass external (NSObject)
  public
    function initWithFormatIdentifier_formatVersion_data (formatIdentifier: NSString; formatVersion: NSString; data: NSData): instancetype; message 'initWithFormatIdentifier:formatVersion:data:';
    function formatIdentifier: NSString; message 'formatIdentifier';
    function formatVersion: NSString; message 'formatVersion';
    function data: NSData; message 'data';
  end;
{$endif}

