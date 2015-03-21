{ Parsed from UIKit.framework (iPhoneOS8.2) UITextInputTraits.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UITextInputTraitsProtocolPtr = ^UITextInputTraitsProtocol;
{$endif}

{$ifdef TYPES}
type
  UITextAutocapitalizationType = NSInteger;
  UITextAutocapitalizationTypePtr = ^UITextAutocapitalizationType;

const
  UITextAutocapitalizationTypeNone = 0;
  UITextAutocapitalizationTypeWords = 1;
  UITextAutocapitalizationTypeSentences = 2;
  UITextAutocapitalizationTypeAllCharacters = 3;

type
  UITextAutocorrectionType = NSInteger;
  UITextAutocorrectionTypePtr = ^UITextAutocorrectionType;

const
  UITextAutocorrectionTypeDefault = 0;
  UITextAutocorrectionTypeNo = 1;
  UITextAutocorrectionTypeYes = 2;

type
  UITextSpellCheckingType = NSInteger;
  UITextSpellCheckingTypePtr = ^UITextSpellCheckingType;

const
  UITextSpellCheckingTypeDefault = 0;
  UITextSpellCheckingTypeNo = 1;
  UITextSpellCheckingTypeYes = 2;

type
  UIKeyboardType = NSInteger;
  UIKeyboardTypePtr = ^UIKeyboardType;

const
  UIKeyboardTypeDefault = 0;
  UIKeyboardTypeASCIICapable = 1;
  UIKeyboardTypeNumbersAndPunctuation = 2;
  UIKeyboardTypeURL = 3;
  UIKeyboardTypeNumberPad = 4;
  UIKeyboardTypePhonePad = 5;
  UIKeyboardTypeNamePhonePad = 6;
  UIKeyboardTypeEmailAddress = 7;
  UIKeyboardTypeDecimalPad = 8 { available in 4_1 };
  UIKeyboardTypeTwitter = 9 { available in 5_0 };
  UIKeyboardTypeWebSearch = 10 { available in 7_0 };
  UIKeyboardTypeAlphabet = UIKeyboardTypeASCIICapable;

type
  UIKeyboardAppearance = NSInteger;
  UIKeyboardAppearancePtr = ^UIKeyboardAppearance;

const
  UIKeyboardAppearanceDefault = 0;
  UIKeyboardAppearanceDark = 1 { available in 7_0 };
  UIKeyboardAppearanceLight = 2 { available in 7_0 };
  UIKeyboardAppearanceAlert = UIKeyboardAppearanceDark;

type
  UIReturnKeyType = NSInteger;
  UIReturnKeyTypePtr = ^UIReturnKeyType;

const
  UIReturnKeyDefault = 0;
  UIReturnKeyGo = 1;
  UIReturnKeyGoogle = 2;
  UIReturnKeyJoin = 3;
  UIReturnKeyNext = 4;
  UIReturnKeyRoute = 5;
  UIReturnKeySearch = 6;
  UIReturnKeySend = 7;
  UIReturnKeyYahoo = 8;
  UIReturnKeyDone = 9;
  UIReturnKeyEmergencyCall = 10;
{$endif}

{$ifdef PROTOCOLS}

type
  UITextInputTraitsProtocol = objcprotocol external name 'UITextInputTraits' (NSObjectProtocol)
  optional
    procedure setAutocapitalizationType(newValue: UITextAutocapitalizationType); message 'setAutocapitalizationType:';
    function autocapitalizationType: UITextAutocapitalizationType; message 'autocapitalizationType';
    procedure setAutocorrectionType(newValue: UITextAutocorrectionType); message 'setAutocorrectionType:';
    function autocorrectionType: UITextAutocorrectionType; message 'autocorrectionType';
    procedure setSpellCheckingType(newValue: UITextSpellCheckingType); message 'setSpellCheckingType:';
    function spellCheckingType: UITextSpellCheckingType; message 'spellCheckingType';
    procedure setKeyboardType(newValue: UIKeyboardType); message 'setKeyboardType:';
    function keyboardType: UIKeyboardType; message 'keyboardType';
    procedure setKeyboardAppearance(newValue: UIKeyboardAppearance); message 'setKeyboardAppearance:';
    function keyboardAppearance: UIKeyboardAppearance; message 'keyboardAppearance';
    procedure setReturnKeyType(newValue: UIReturnKeyType); message 'setReturnKeyType:';
    function returnKeyType: UIReturnKeyType; message 'returnKeyType';
    procedure setEnablesReturnKeyAutomatically(newValue: boolean); message 'setEnablesReturnKeyAutomatically:';
    function enablesReturnKeyAutomatically: boolean; message 'enablesReturnKeyAutomatically';
    procedure setSecureTextEntry(newValue: boolean); message 'setSecureTextEntry:';
    function isSecureTextEntry: boolean; message 'isSecureTextEntry';
  end;
{$endif}

