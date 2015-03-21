{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVSpeechSynthesis.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVSpeechSynthesisVoicePtr = ^AVSpeechSynthesisVoice;
  AVSpeechUtterancePtr = ^AVSpeechUtterance;
  AVSpeechSynthesizerPtr = ^AVSpeechSynthesizer;
  AVSpeechSynthesizerDelegateProtocolPtr = ^AVSpeechSynthesizerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  AVSpeechBoundary = NSInteger;
  AVSpeechBoundaryPtr = ^AVSpeechBoundary;

const
  AVSpeechBoundaryImmediate = 0;
  AVSpeechBoundaryWord = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVSpeechUtteranceMinimumSpeechRate: single; cvar; external;
  AVSpeechUtteranceMaximumSpeechRate: single; cvar; external;
  AVSpeechUtteranceDefaultSpeechRate: single; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVSpeechSynthesisVoice = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function speechVoices: NSArray; message 'speechVoices';
    class function currentLanguageCode: NSString; message 'currentLanguageCode';
    class function voiceWithLanguage (language: NSString): AVSpeechSynthesisVoice; message 'voiceWithLanguage:';
    function language: NSString; message 'language';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  AVSpeechUtterance = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function speechUtteranceWithString (string_: NSString): instancetype; message 'speechUtteranceWithString:';
    function initWithString (string_: NSString): instancetype; message 'initWithString:';
    procedure setVoice(newValue: AVSpeechSynthesisVoice); message 'setVoice:';
    function voice: AVSpeechSynthesisVoice; message 'voice';
    function speechString: NSString; message 'speechString';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setPitchMultiplier(newValue: single); message 'setPitchMultiplier:';
    function pitchMultiplier: single; message 'pitchMultiplier';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setPreUtteranceDelay(newValue: NSTimeInterval); message 'setPreUtteranceDelay:';
    function preUtteranceDelay: NSTimeInterval; message 'preUtteranceDelay';
    procedure setPostUtteranceDelay(newValue: NSTimeInterval); message 'setPostUtteranceDelay:';
    function postUtteranceDelay: NSTimeInterval; message 'postUtteranceDelay';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;

type
  AVSpeechSynthesizer = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: AVSpeechSynthesizerDelegateProtocol); message 'setDelegate:';
    function delegate: AVSpeechSynthesizerDelegateProtocol; message 'delegate';
    function isSpeaking: boolean; message 'isSpeaking';
    function isPaused: boolean; message 'isPaused';
    procedure speakUtterance (utterance: AVSpeechUtterance); message 'speakUtterance:';
    function stopSpeakingAtBoundary (boundary: AVSpeechBoundary): boolean; message 'stopSpeakingAtBoundary:';
    function pauseSpeakingAtBoundary (boundary: AVSpeechBoundary): boolean; message 'pauseSpeakingAtBoundary:';
    function continueSpeaking: boolean; message 'continueSpeaking';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVSpeechSynthesizerDelegateProtocol = objcprotocol external name 'AVSpeechSynthesizerDelegate' (NSObjectProtocol)
  optional
    procedure speechSynthesizer_didStartSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didStartSpeechUtterance:';
    procedure speechSynthesizer_didFinishSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didFinishSpeechUtterance:';
    procedure speechSynthesizer_didPauseSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didPauseSpeechUtterance:';
    procedure speechSynthesizer_didContinueSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didContinueSpeechUtterance:';
    procedure speechSynthesizer_didCancelSpeechUtterance (synthesizer: AVSpeechSynthesizer; utterance: AVSpeechUtterance); message 'speechSynthesizer:didCancelSpeechUtterance:';
    procedure speechSynthesizer_willSpeakRangeOfSpeechString_utterance (synthesizer: AVSpeechSynthesizer; characterRange: NSRange; utterance: AVSpeechUtterance); message 'speechSynthesizer:willSpeakRangeOfSpeechString:utterance:';
  end;
{$endif}

