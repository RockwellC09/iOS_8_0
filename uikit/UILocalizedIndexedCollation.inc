{ Parsed from UIKit.framework (iPhoneOS8.2) UILocalizedIndexedCollation.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UILocalizedIndexedCollationPtr = ^UILocalizedIndexedCollation;
{$endif}

{$ifdef CLASSES}

type
  UILocalizedIndexedCollation = objcclass external (NSObject)
  private
    _locale: NSLocale;
    _sectionTitles: NSArray;
    _sectionStartStrings: NSArray;
    _sectionIndexTitles: NSArray;
    _sectionIndexMapping: NSArray;
    _transform: NSString;
    _firstSectionStartString: NSString;
    _lastSectionStartString: NSString;
    _tokenizer: CFStringTokenizerRef;
  public
    class function currentCollation: id; message 'currentCollation';
    function sectionTitles: NSArray; message 'sectionTitles';
    function sectionIndexTitles: NSArray; message 'sectionIndexTitles';
    function sectionForSectionIndexTitleAtIndex (indexTitleIndex: NSInteger): NSInteger; message 'sectionForSectionIndexTitleAtIndex:';
    function sectionForObject_collationStringSelector (object_: id; selector: SEL): NSInteger; message 'sectionForObject:collationStringSelector:';
    function sortedArrayFromArray_collationStringSelector (array_: NSArray; selector: SEL): NSArray; message 'sortedArrayFromArray:collationStringSelector:';
  end;
{$endif}

