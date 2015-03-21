{ Parsed from UIKit.framework (iPhoneOS8.2) UILexicon.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UILexiconEntryPtr = ^UILexiconEntry;
  UILexiconPtr = ^UILexicon;
{$endif}

{$ifdef CLASSES}

type
  UILexiconEntry = objcclass external (NSObject, NSCopyingProtocol)
  public
    function documentText: NSString; message 'documentText';
    function userInput: NSString; message 'userInput';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  UILexicon = objcclass external (NSObject, NSCopyingProtocol)
  public
    function entries: NSArray; message 'entries';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

