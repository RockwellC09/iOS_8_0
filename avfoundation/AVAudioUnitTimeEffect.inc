{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAudioUnitTimeEffect.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVAudioUnitTimeEffectPtr = ^AVAudioUnitTimeEffect;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitTimeEffect = objcclass external (AVAudioUnit)
  public
    function initWithAudioComponentDescription (audioComponentDescription_: AudioComponentDescription): instancetype; message 'initWithAudioComponentDescription:';
    procedure setBypass(newValue: boolean); message 'setBypass:';
    function bypass: boolean; message 'bypass';
  end;
{$endif}

