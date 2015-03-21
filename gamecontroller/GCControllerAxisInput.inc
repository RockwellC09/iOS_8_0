{ Parsed from GameController.framework (iPhoneOS8.2) GCControllerAxisInput.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{ Types from GCControllerAxisInput }
{$ifdef TYPES}

type
  GCControllerAxisValueChangedHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  GCControllerAxisInputPtr = ^GCControllerAxisInput;
{$endif}

{$ifdef CLASSES}

type
  GCControllerAxisInput = objcclass external (GCControllerElement)
  public
    procedure setValueChangedHandler(newValue: GCControllerAxisValueChangedHandler); message 'setValueChangedHandler:';
    function valueChangedHandler: GCControllerAxisValueChangedHandler; message 'valueChangedHandler';
    function value: single; message 'value';
  end;
{$endif}

