{ Parsed from CloudKit.framework (iPhoneOS8.2) CKAsset.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKAssetPtr = ^CKAsset;
{$endif}

{$ifdef CLASSES}

type
  CKAsset = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithFileURL (fileURL: NSURL): instancetype; message 'initWithFileURL:';
    function fileURL: NSURL; message 'fileURL';
  end;
{$endif}

