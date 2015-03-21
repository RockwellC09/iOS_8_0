{ Parsed from CloudKit.framework (iPhoneOS8.2) CKDiscoveredUserInfo.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CKDiscoveredUserInfoPtr = ^CKDiscoveredUserInfo;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoveredUserInfo = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function userRecordID: CKRecordID; message 'userRecordID';
    function firstName: NSString; message 'firstName';
    function lastName: NSString; message 'lastName';
  end;
{$endif}

