{ Parsed from AudioUnit.framework (iPhoneOS8.2) AudioOutputUnit.h }
{ Created on Fri Mar 20 2:10:49 2015 }

{$ifndef __AUDIOOUTPUTUNIT__}

{$ifdef FUNCTIONS}
function AudioOutputUnitStart(ci: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
function AudioOutputUnitStop(ci: AudioUnit): OSStatus; cdecl; external; { available starting in __MAC_10_0,__IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
const
  kAudioOutputUnitRange = $0200;
  kAudioOutputUnitStartSelect = $0201;
  kAudioOutputUnitStopSelect = $0202;

type
  AudioOutputUnitStartProc = function (self_: pointer): OSStatus; cdecl;
  AudioOutputUnitStopProc = function (self_: pointer): OSStatus; cdecl;
{$endif}

{$endif}
