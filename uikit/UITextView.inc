{ Parsed from UIKit.framework (iPhoneOS8.2) UITextView.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  UITextViewPtr = ^UITextView;
  UITextViewDelegateProtocolPtr = ^UITextViewDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UITextViewDelegateProtocol = objcprotocol external name 'UITextViewDelegate' (NSObjectProtocol, UIScrollViewDelegateProtocol)
  optional
    function textViewShouldBeginEditing (textView: UITextView): boolean; message 'textViewShouldBeginEditing:';
    function textViewShouldEndEditing (textView: UITextView): boolean; message 'textViewShouldEndEditing:';
    procedure textViewDidBeginEditing (textView: UITextView); message 'textViewDidBeginEditing:';
    procedure textViewDidEndEditing (textView: UITextView); message 'textViewDidEndEditing:';
    function textView_shouldChangeTextInRange_replacementText (textView: UITextView; range: NSRange; text: NSString): boolean; message 'textView:shouldChangeTextInRange:replacementText:';
    procedure textViewDidChange (textView: UITextView); message 'textViewDidChange:';
    procedure textViewDidChangeSelection (textView: UITextView); message 'textViewDidChangeSelection:';
    function textView_shouldInteractWithURL_inRange (textView: UITextView; URL: NSURL; characterRange: NSRange): boolean; message 'textView:shouldInteractWithURL:inRange:'; { available in 7_0 }
    function textView_shouldInteractWithTextAttachment_inRange (textView: UITextView; textAttachment: NSTextAttachment; characterRange: NSRange): boolean; message 'textView:shouldInteractWithTextAttachment:inRange:'; { available in 7_0 }
  end;
{$endif}

{$ifdef CLASSES}

type
  UITextView = objcclass external (UIScrollView, UITextInputProtocol)
  public
    procedure setDelegate(newValue: UITextViewDelegateProtocol); message 'setDelegate:';
    function delegate: UITextViewDelegateProtocol; message 'delegate';
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setFont(newValue: UIFont); message 'setFont:';
    function font: UIFont; message 'font';
    procedure setTextColor(newValue: UIColor); message 'setTextColor:';
    function textColor: UIColor; message 'textColor';
    procedure setTextAlignment(newValue: NSTextAlignment); message 'setTextAlignment:';
    function textAlignment: NSTextAlignment; message 'textAlignment';
    procedure setSelectedRange(newValue: NSRange); message 'setSelectedRange:';
    function selectedRange: NSRange; message 'selectedRange';
    procedure setEditable(newValue: boolean); message 'setEditable:';
    function isEditable: boolean; message 'isEditable';
    procedure setSelectable(newValue: boolean); message 'setSelectable:';
    function isSelectable: boolean; message 'isSelectable';
    procedure setDataDetectorTypes(newValue: UIDataDetectorTypes); message 'setDataDetectorTypes:';
    function dataDetectorTypes: UIDataDetectorTypes; message 'dataDetectorTypes';
    procedure setAllowsEditingTextAttributes(newValue: boolean); message 'setAllowsEditingTextAttributes:';
    function allowsEditingTextAttributes: boolean; message 'allowsEditingTextAttributes';
    procedure setAttributedText(newValue: NSAttributedString); message 'setAttributedText:';
    function attributedText: NSAttributedString; message 'attributedText';
    procedure setTypingAttributes(newValue: NSDictionary); message 'setTypingAttributes:';
    function typingAttributes: NSDictionary; message 'typingAttributes';
    procedure scrollRangeToVisible (range: NSRange); message 'scrollRangeToVisible:';
    procedure setInputView(newValue: UIView); message 'setInputView:';
    function inputView: UIView; message 'inputView';
    procedure setInputAccessoryView(newValue: UIView); message 'setInputAccessoryView:';
    function inputAccessoryView: UIView; message 'inputAccessoryView';
    procedure setClearsOnInsertion(newValue: boolean); message 'setClearsOnInsertion:';
    function clearsOnInsertion: boolean; message 'clearsOnInsertion';
    function initWithFrame_textContainer (frame: CGRect; textContainer: NSTextContainer): instancetype; message 'initWithFrame:textContainer:'; { available in 7_0 }
    function textContainer: NSTextContainer; message 'textContainer';
    procedure setTextContainerInset(newValue: UIEdgeInsets); message 'setTextContainerInset:';
    function textContainerInset: UIEdgeInsets; message 'textContainerInset';
    function layoutManager: NSLayoutManager; message 'layoutManager';
    function textStorage: NSTextStorage; message 'textStorage';
    procedure setLinkTextAttributes(newValue: NSDictionary); message 'setLinkTextAttributes:';
    function linkTextAttributes: NSDictionary; message 'linkTextAttributes';

    { Adopted protocols }
    procedure setAutocapitalizationType(newValue: UITextAutocapitalizationType); message 'setAutocapitalizationType:';
    function autocapitalizationType: UITextAutocapitalizationType; message 'autocapitalizationType';
    procedure setAutocorrectionType(newValue: UITextAutocorrectionType); message 'setAutocorrectionType:';
    function autocorrectionType: UITextAutocorrectionType; message 'autocorrectionType';
    function baseWritingDirectionForPosition_inDirection (position: UITextPosition; direction: UITextStorageDirection): UITextWritingDirection; message 'baseWritingDirectionForPosition:inDirection:';
    function beginningOfDocument: UITextPosition; message 'beginningOfDocument';
    function caretRectForPosition (position: UITextPosition): CGRect; message 'caretRectForPosition:';
    function characterOffsetOfPosition_withinRange (position: UITextPosition; range: UITextRange): NSInteger; message 'characterOffsetOfPosition:withinRange:';
    function characterRangeAtPoint (point: CGPoint): UITextRange; message 'characterRangeAtPoint:';
    function characterRangeByExtendingPosition_inDirection (position: UITextPosition; direction: UITextLayoutDirection): UITextRange; message 'characterRangeByExtendingPosition:inDirection:';
    function closestPositionToPoint (point: CGPoint): UITextPosition; message 'closestPositionToPoint:';
    function closestPositionToPoint_withinRange (point: CGPoint; range: UITextRange): UITextPosition; message 'closestPositionToPoint:withinRange:';
    function comparePosition_toPosition (position: UITextPosition; other: UITextPosition): NSComparisonResult; message 'comparePosition:toPosition:';
    procedure deleteBackward; message 'deleteBackward';
    procedure dictationRecognitionFailed; message 'dictationRecognitionFailed';
    procedure dictationRecordingDidEnd; message 'dictationRecordingDidEnd';
    procedure setEnablesReturnKeyAutomatically(newValue: boolean); message 'setEnablesReturnKeyAutomatically:';
    function enablesReturnKeyAutomatically: boolean; message 'enablesReturnKeyAutomatically';
    function endOfDocument: UITextPosition; message 'endOfDocument';
    function firstRectForRange (range: UITextRange): CGRect; message 'firstRectForRange:';
    function frameForDictationResultPlaceholder (placeholder: id): CGRect; message 'frameForDictationResultPlaceholder:';
    function hasText: boolean; message 'hasText';
    procedure setInputDelegate(newValue: UITextInputDelegateProtocol); message 'setInputDelegate:';
    function inputDelegate: UITextInputDelegateProtocol; message 'inputDelegate';
    procedure insertDictationResult (dictationResult: NSArray); message 'insertDictationResult:';
    function insertDictationResultPlaceholder: id; message 'insertDictationResultPlaceholder';
    procedure insertText (text: NSString); message 'insertText:';
    procedure setKeyboardAppearance(newValue: UIKeyboardAppearance); message 'setKeyboardAppearance:';
    function keyboardAppearance: UIKeyboardAppearance; message 'keyboardAppearance';
    procedure setKeyboardType(newValue: UIKeyboardType); message 'setKeyboardType:';
    function keyboardType: UIKeyboardType; message 'keyboardType';
    function markedTextRange: UITextRange; message 'markedTextRange';
    procedure setMarkedTextStyle(newValue: NSDictionary); message 'setMarkedTextStyle:';
    function markedTextStyle: NSDictionary; message 'markedTextStyle';
    function offsetFromPosition_toPosition (from: UITextPosition; toPosition: UITextPosition): NSInteger; message 'offsetFromPosition:toPosition:';
    function positionFromPosition_inDirection_offset (position: UITextPosition; direction: UITextLayoutDirection; offset: NSInteger): UITextPosition; message 'positionFromPosition:inDirection:offset:';
    function positionFromPosition_offset (position: UITextPosition; offset: NSInteger): UITextPosition; message 'positionFromPosition:offset:';
    function positionWithinRange_atCharacterOffset (range: UITextRange; offset: NSInteger): UITextPosition; message 'positionWithinRange:atCharacterOffset:';
    function positionWithinRange_farthestInDirection (range: UITextRange; direction: UITextLayoutDirection): UITextPosition; message 'positionWithinRange:farthestInDirection:';
    procedure removeDictationResultPlaceholder_willInsertResult (placeholder: id; willInsertResult: boolean); message 'removeDictationResultPlaceholder:willInsertResult:';
    procedure replaceRange_withText (range: UITextRange; text: NSString); message 'replaceRange:withText:';
    procedure setReturnKeyType(newValue: UIReturnKeyType); message 'setReturnKeyType:';
    function returnKeyType: UIReturnKeyType; message 'returnKeyType';
    procedure setSecureTextEntry(newValue: boolean); message 'setSecureTextEntry:';
    function isSecureTextEntry: boolean; message 'isSecureTextEntry';
    procedure setSelectedTextRange(newValue: UITextRange); message 'setSelectedTextRange:';
    function selectedTextRange: UITextRange; message 'selectedTextRange';
    procedure setSelectionAffinity(newValue: UITextStorageDirection); message 'setSelectionAffinity:';
    function selectionAffinity: UITextStorageDirection; message 'selectionAffinity';
    function selectionRectsForRange (range: UITextRange): NSArray; message 'selectionRectsForRange:'; { available in 6_0 }
    procedure setBaseWritingDirection_forRange (writingDirection: UITextWritingDirection; range: UITextRange); message 'setBaseWritingDirection:forRange:';
    procedure setMarkedText_selectedRange (markedText: NSString; selectedRange: NSRange); message 'setMarkedText:selectedRange:';
    function shouldChangeTextInRange_replacementText (range: UITextRange; text: NSString): boolean; message 'shouldChangeTextInRange:replacementText:'; { available in 6_0 }
    procedure setSpellCheckingType(newValue: UITextSpellCheckingType); message 'setSpellCheckingType:';
    function spellCheckingType: UITextSpellCheckingType; message 'spellCheckingType';
    function textInputView: UIView; message 'textInputView';
    function textInRange (range: UITextRange): NSString; message 'textInRange:';
    function textRangeFromPosition_toPosition (fromPosition: UITextPosition; toPosition: UITextPosition): UITextRange; message 'textRangeFromPosition:toPosition:';
    function textStylingAtPosition_inDirection (position: UITextPosition; direction: UITextStorageDirection): NSDictionary; message 'textStylingAtPosition:inDirection:';
    function tokenizer: UITextInputTokenizerProtocol; message 'tokenizer';
    procedure unmarkText; message 'unmarkText';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITextViewTextDidBeginEditingNotification: NSString; cvar; external;
  UITextViewTextDidChangeNotification: NSString; cvar; external;
  UITextViewTextDidEndEditingNotification: NSString; cvar; external;
{$endif}

