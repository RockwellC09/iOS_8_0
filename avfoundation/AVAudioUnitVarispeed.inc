{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVAudioUnitVarispeed.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVAudioUnitVarispeedPtr = ^AVAudioUnitVarispeed;
{$endif}

{$ifdef CLASSES}

type
  AVAudioUnitVarispeed = objcclass external (AVAudioUnitTimeEffect)
  public
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
  end;
{$endif}

