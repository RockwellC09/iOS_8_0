{ Parsed from AudioUnit.framework (iPhoneOS8.2) AudioComponent.h }
{ Created on Fri Mar 20 2:10:49 2015 }

{$ifndef __AUDIOCOMPONENT_H__}

{$ifdef TYPES}
const
  kAudioComponentFlag_Unsearchable = 1;
  kAudioComponentFlag_SandboxSafe = 2;

type
  AudioComponentDescription = record
    componentType: OSType;
    componentSubType: OSType;
    componentManufacturer: OSType;
    componentFlags: UInt32;
    componentFlagsMask: UInt32;
  end;
type
  AudioComponentDescriptionPtr = ^AudioComponentDescription;

type
  AudioComponent = OpaqueType;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  AudioComponentInstance = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  AudioComponentInstance = OpaqueType;
{$endif}

{$endif}
{$ifdef TYPES}
type
  AudioComponentMethod = function (self_: pointer): OSStatus; varargs; cdecl;

type
  AudioComponentPlugInInterface = record
    Open: function (self_: pointer; mInstance: AudioComponentInstance): OSStatus; cdecl;
    Close: function (self_: pointer): OSStatus; cdecl;
    Lookup: function (selector: SInt16): AudioComponentMethod; cdecl;
    reserved: pointer;
  end;
type
  AudioComponentPlugInInterfacePtr = ^AudioComponentPlugInInterface;

type
  AudioComponentFactoryFunction = function (inDesc: AudioComponentDescriptionPtr): AudioComponentPlugInInterfacePtr; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioComponentFindNext(inComponent: AudioComponent; inDesc: AudioComponentDescriptionPtr): AudioComponent; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentCount(inDesc: AudioComponentDescriptionPtr): UInt32; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentCopyName(inComponent: AudioComponent; var outName: CFStringRef): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentGetDescription(inComponent: AudioComponent; var outDesc: AudioComponentDescription): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentGetVersion(inComponent: AudioComponent; var outVersion: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentInstanceNew(inComponent: AudioComponent; var outInstance: AudioComponentInstance): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentInstanceDispose(inInstance: AudioComponentInstance): OSStatus; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentInstanceGetComponent(inInstance: AudioComponentInstance): AudioComponent; cdecl; external; { available starting in __MAC_10_6,__IPHONE_2_0 }
function AudioComponentInstanceCanDo(inInstance: AudioComponentInstance; inSelectorID: SInt16): Boolean; cdecl; external; { available starting in __MAC_10_6,__IPHONE_3_0 }
function AudioComponentRegister(inDesc: AudioComponentDescriptionPtr; inName: CFStringRef; inVersion: UInt32; inFactory: AudioComponentFactoryFunction): AudioComponent; cdecl; external; { available starting in __MAC_10_7,__IPHONE_5_0 }
function AudioComponentCopyConfigurationInfo(inComponent: AudioComponent; outConfigurationInfo: CFDictionaryRefPtr): OSStatus; cdecl; external; { available starting in __MAC_10_7,__IPHONE_NA }
{$endif}

{$endif}
