{ Parsed from Foundation.framework (iPhoneOS8.2) NSMethodSignature.h }
{ Created on Fri Mar 20 2:11:39 2015 }


{$ifdef TYPES}
type
  NSMethodSignaturePtr = ^NSMethodSignature;
{$endif}

{$ifdef CLASSES}

type
  NSMethodSignature = objcclass external (NSObject)
  private
    _private: pointer;
    _reserved:array[0..5] of pointer;
  public
    class function signatureWithObjCTypes (types: PChar): NSMethodSignature; message 'signatureWithObjCTypes:';
    function numberOfArguments: NSUInteger; message 'numberOfArguments';
    function getArgumentTypeAtIndex (idx: NSUInteger): PChar; message 'getArgumentTypeAtIndex:';
    function frameLength: NSUInteger; message 'frameLength';
    function isOneway: boolean; message 'isOneway';
    function methodReturnType: PChar; message 'methodReturnType';
    function methodReturnLength: NSUInteger; message 'methodReturnLength';
  end;
{$endif}

