{ Parsed from CoreTelephony.framework (iPhoneOS8.2) CTCallCenter.h }
{ Created on Fri Mar 20 2:10:52 2015 }


{$ifdef TYPES}
type
  CTCallCenterPtr = ^CTCallCenter;
{$endif}

{$ifdef CLASSES}

type
  CTCallCenter = objcclass external (NSObject)
  private
    _server: pointer;
    _currentCalls: NSSet;
    _callEventHandler: OpaqueCBlock;
  public
    function currentCalls: NSSet; message 'currentCalls';
    procedure setCallEventHandler(newValue: OpaqueCBlock); message 'setCallEventHandler:';
    function callEventHandler: OpaqueCBlock; message 'callEventHandler';
  end;
{$endif}

