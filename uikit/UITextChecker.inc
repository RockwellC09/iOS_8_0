{ Parsed from UIKit.framework (iPhoneOS8.2) UITextChecker.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UITextCheckerPtr = ^UITextChecker;
{$endif}

{$ifdef CLASSES}

type
  UITextChecker = objcclass external (NSObject)
  private
    _reserved: id;
    _usdt: NSInteger;
  public
    function rangeOfMisspelledWordInString_range_startingAt_wrap_language (stringToCheck: NSString; range: NSRange; startingOffset: NSInteger; wrapFlag: boolean; language: NSString): NSRange; message 'rangeOfMisspelledWordInString:range:startingAt:wrap:language:';
    function guessesForWordRange_inString_language (range: NSRange; string_: NSString; language: NSString): NSArray; message 'guessesForWordRange:inString:language:';
    function completionsForPartialWordRange_inString_language (range: NSRange; string_: NSString; language: NSString): NSArray; message 'completionsForPartialWordRange:inString:language:';
    procedure ignoreWord (wordToIgnore: NSString); message 'ignoreWord:';
    function ignoredWords: NSArray; message 'ignoredWords';
    procedure setIgnoredWords (words: NSArray); message 'setIgnoredWords:';
    class procedure learnWord (word: NSString); message 'learnWord:';
    class function hasLearnedWord (word: NSString): boolean; message 'hasLearnedWord:';
    class procedure unlearnWord (word: NSString); message 'unlearnWord:';
    class function availableLanguages: NSArray; message 'availableLanguages';
  end;
{$endif}

