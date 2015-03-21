{ Parsed from EventKit.framework (iPhoneOS8.2) EKObject.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EKObjectPtr = ^EKObject;
{$endif}

{$ifdef CLASSES}

type
  EKObject = objcclass external (NSObject)
  private
  public
    function hasChanges: boolean; message 'hasChanges';
    function isNew: boolean; message 'isNew';
    procedure reset; message 'reset';
    procedure rollback; message 'rollback';
    function refresh: boolean; message 'refresh';
  end;
{$endif}

