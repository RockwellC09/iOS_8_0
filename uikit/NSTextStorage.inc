{ Parsed from UIKit.framework (iPhoneOS8.2) NSTextStorage.h }
{ Created on Fri Mar 20 2:11:42 2015 }


{$ifdef TYPES}
type
  NSTextStoragePtr = ^NSTextStorage;
  NSTextStorageDelegateProtocolPtr = ^NSTextStorageDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTextStorageEditActions = NSUInteger;
  NSTextStorageEditActionsPtr = ^NSTextStorageEditActions;

const
  NSTextStorageEditedAttributes = 1 shl 0;
  NSTextStorageEditedCharacters = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSTextStorage = objcclass external (NSMutableAttributedString)
  public
    function layoutManagers: NSArray; message 'layoutManagers';
    procedure addLayoutManager (aLayoutManager: NSLayoutManager); message 'addLayoutManager:';
    procedure removeLayoutManager (aLayoutManager: NSLayoutManager); message 'removeLayoutManager:';
    procedure setEditedMask(newValue: NSTextStorageEditActions); message 'setEditedMask:';
    function editedMask: NSTextStorageEditActions; message 'editedMask';
    procedure setEditedRange(newValue: NSRange); message 'setEditedRange:';
    function editedRange: NSRange; message 'editedRange';
    procedure setChangeInLength(newValue: NSInteger); message 'setChangeInLength:';
    function changeInLength: NSInteger; message 'changeInLength';
    procedure setDelegate(newValue: NSTextStorageDelegateProtocol); message 'setDelegate:';
    function delegate: NSTextStorageDelegateProtocol; message 'delegate';
    procedure edited_range_changeInLength (editedMask_: NSTextStorageEditActions; editedRange_: NSRange; delta: NSInteger); message 'edited:range:changeInLength:';
    procedure processEditing; message 'processEditing';
    function fixesAttributesLazily: boolean; message 'fixesAttributesLazily';
    procedure invalidateAttributesInRange (range: NSRange); message 'invalidateAttributesInRange:';
    procedure ensureAttributesAreFixedInRange (range: NSRange); message 'ensureAttributesAreFixedInRange:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextStorageDelegateProtocol = objcprotocol external name 'NSTextStorageDelegate' (NSObjectProtocol)
  optional
    procedure textStorage_willProcessEditing_range_changeInLength (textStorage: NSTextStorage; editedMask: NSTextStorageEditActions; editedRange: NSRange; delta: NSInteger); message 'textStorage:willProcessEditing:range:changeInLength:'; { available in 7_0 }
    procedure textStorage_didProcessEditing_range_changeInLength (textStorage: NSTextStorage; editedMask: NSTextStorageEditActions; editedRange: NSRange; delta: NSInteger); message 'textStorage:didProcessEditing:range:changeInLength:'; { available in 7_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextStorageWillProcessEditingNotification: NSString { available in 7_0 }; cvar; external;
  NSTextStorageDidProcessEditingNotification: NSString { available in 7_0 }; cvar; external;
{$endif}

