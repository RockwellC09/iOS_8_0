{ Parsed from Photos.framework (iPhoneOS8.2) PHContentEditingOutput.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHContentEditingOutputPtr = ^PHContentEditingOutput;
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingOutput = objcclass external (NSObject)
  public
    function initWithContentEditingInput (contentEditingInput: PHContentEditingInput): instancetype; message 'initWithContentEditingInput:';
    procedure setAdjustmentData(newValue: PHAdjustmentData); message 'setAdjustmentData:';
    function adjustmentData: PHAdjustmentData; message 'adjustmentData';
    function renderedContentURL: NSURL; message 'renderedContentURL';
  end;
{$endif}

