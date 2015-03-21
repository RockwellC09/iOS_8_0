{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFStringTokenizer.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFSTRINGTOKENIZER__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFSTRINGTOKENIZER__ = 1;
{$endif}

{$ifdef FUNCTIONS}
function CFStringTokenizerCopyBestStringLanguage(string_: CFStringRef; range: CFRange): CFStringRef; cdecl; external; { available in 10_5, 3_0 }
{$endif}

{$ifdef TYPES}
type
  CFStringTokenizerRef = OpaqueType;

const
  kCFStringTokenizerUnitWord = 0;
  kCFStringTokenizerUnitSentence = 1;
  kCFStringTokenizerUnitParagraph = 2;
  kCFStringTokenizerUnitLineBreak = 3;
  kCFStringTokenizerUnitWordBoundary = 4;
  kCFStringTokenizerAttributeLatinTranscription = 1 shl 16;
  kCFStringTokenizerAttributeLanguage = 1 shl 17;

type
  CFStringTokenizerTokenType = CFOptionFlags;
  CFStringTokenizerTokenTypePtr = ^CFStringTokenizerTokenType;

const
  kCFStringTokenizerTokenNone = 0;
  kCFStringTokenizerTokenNormal = 1 shl 0;
  kCFStringTokenizerTokenHasSubTokensMask = 1 shl 1;
  kCFStringTokenizerTokenHasDerivedSubTokensMask = 1 shl 2;
  kCFStringTokenizerTokenHasHasNumbersMask = 1 shl 3;
  kCFStringTokenizerTokenHasNonLettersMask = 1 shl 4;
  kCFStringTokenizerTokenIsCJWordMask = 1 shl 5;
{$endif}

{$ifdef FUNCTIONS}
function CFStringTokenizerGetTypeID: CFTypeID; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerCreate(alloc: CFAllocatorRef; string_: CFStringRef; range: CFRange; options: CFOptionFlags; locale: CFLocaleRef): CFStringTokenizerRef; cdecl; external; { available in 10_5, 3_0 }
procedure CFStringTokenizerSetString(tokenizer: CFStringTokenizerRef; string_: CFStringRef; range: CFRange); cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerGoToTokenAtIndex(tokenizer: CFStringTokenizerRef; index: CFIndex): CFStringTokenizerTokenType; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerAdvanceToNextToken(tokenizer: CFStringTokenizerRef): CFStringTokenizerTokenType; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerGetCurrentTokenRange(tokenizer: CFStringTokenizerRef): CFRange; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerCopyCurrentTokenAttribute(tokenizer: CFStringTokenizerRef; attribute: CFOptionFlags): CFTypeRef; cdecl; external; { available in 10_5, 3_0 }
function CFStringTokenizerGetCurrentSubTokens(tokenizer: CFStringTokenizerRef; var ranges: CFRange; maxRangeLength: CFIndex; derivedSubTokens: CFMutableArrayRef): CFIndex; cdecl; external; { available in 10_5, 3_0 }
{$endif}

{$endif}
