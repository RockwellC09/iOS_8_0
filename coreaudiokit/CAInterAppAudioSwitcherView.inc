{ Parsed from CoreAudioKit.framework (iPhoneOS8.2) CAInterAppAudioSwitcherView.h }
{ Created on Fri Mar 20 2:10:49 2015 }


{$ifdef TYPES}
type
  CAInterAppAudioSwitcherViewPtr = ^CAInterAppAudioSwitcherView;
{$endif}

{$ifdef CLASSES}

type
  CAInterAppAudioSwitcherView = objcclass external (UIView)
  public
    procedure setShowingAppNames(newValue: boolean); message 'setShowingAppNames:';
    function isShowingAppNames: boolean; message 'isShowingAppNames';
    procedure setOutputAudioUnit (au: AudioUnit); message 'setOutputAudioUnit:';
    function contentWidth: CGFloat; message 'contentWidth';
  end;
{$endif}

