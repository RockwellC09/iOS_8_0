{ Parsed from GameController.framework (iPhoneOS8.2) GCControllerDirectionPad.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{ Types from GCControllerDirectionPad }
{$ifdef TYPES}

type
  GCControllerDirectionPadValueChangedHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  GCControllerDirectionPadPtr = ^GCControllerDirectionPad;
{$endif}

{$ifdef CLASSES}

type
  GCControllerDirectionPad = objcclass external (GCControllerElement)
  public
    procedure setValueChangedHandler(newValue: GCControllerDirectionPadValueChangedHandler); message 'setValueChangedHandler:';
    function valueChangedHandler: GCControllerDirectionPadValueChangedHandler; message 'valueChangedHandler';
    function xAxis: GCControllerAxisInput; message 'xAxis';
    function yAxis: GCControllerAxisInput; message 'yAxis';
    function up: GCControllerButtonInput; message 'up';
    function down: GCControllerButtonInput; message 'down';
    function left: GCControllerButtonInput; message 'left';
    function right: GCControllerButtonInput; message 'right';
  end;
{$endif}

