{ Parsed from QuartzCore.framework (iPhoneOS8.2) CAEAGLLayer.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  CAEAGLLayerPtr = ^CAEAGLLayer;
{$endif}

{$ifdef CLASSES}

type
  CAEAGLLayer = objcclass external (CALayer, EAGLDrawableProtocol)
  private
    _win: _CAEAGLNativeWindowPtr;
  public 
   procedure setDrawableProperties(newValue: NSDictionary); message 'setDrawableProperties:';
   function drawableProperties: NSDictionary; message 'drawableProperties';
  end;
{$endif}

