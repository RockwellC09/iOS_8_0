{ Parsed from UIKit.framework (iPhoneOS8.2) UIPasteboard.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPasteboardPtr = ^UIPasteboard;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIPasteboardNameGeneral: NSString; cvar; external;
  UIPasteboardNameFind: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIPasteboard = objcclass external (NSObject)
  private
    _name: NSString;
  public
    class function generalPasteboard: UIPasteboard; message 'generalPasteboard';
    class function pasteboardWithName_create (pasteboardName: NSString; create_: boolean): UIPasteboard; message 'pasteboardWithName:create:';
    class function pasteboardWithUniqueName: UIPasteboard; message 'pasteboardWithUniqueName';
    function name: NSString; message 'name';
    class procedure removePasteboardWithName (pasteboardName: NSString); message 'removePasteboardWithName:';
    procedure setPersistent(newValue: boolean); message 'setPersistent:';
    function isPersistent: boolean; message 'isPersistent';
    function changeCount: NSInteger; message 'changeCount';
    function pasteboardTypes: NSArray; message 'pasteboardTypes';
    function containsPasteboardTypes (pasteboardTypes_: NSArray): boolean; message 'containsPasteboardTypes:';
    function dataForPasteboardType (pasteboardType: NSString): NSData; message 'dataForPasteboardType:';
    function valueForPasteboardType (pasteboardType: NSString): id; message 'valueForPasteboardType:';
    procedure setValue_forPasteboardType (value: id; pasteboardType: NSString); message 'setValue:forPasteboardType:';
    procedure setData_forPasteboardType (data: NSData; pasteboardType: NSString); message 'setData:forPasteboardType:';
    function numberOfItems: NSInteger; message 'numberOfItems';
    function pasteboardTypesForItemSet (itemSet: NSIndexSet): NSArray; message 'pasteboardTypesForItemSet:';
    function containsPasteboardTypes_inItemSet (pasteboardTypes_: NSArray; itemSet: NSIndexSet): boolean; message 'containsPasteboardTypes:inItemSet:';
    function itemSetWithPasteboardTypes (pasteboardTypes_: NSArray): NSIndexSet; message 'itemSetWithPasteboardTypes:';
    function valuesForPasteboardType_inItemSet (pasteboardType: NSString; itemSet: NSIndexSet): NSArray; message 'valuesForPasteboardType:inItemSet:';
    function dataForPasteboardType_inItemSet (pasteboardType: NSString; itemSet: NSIndexSet): NSArray; message 'dataForPasteboardType:inItemSet:';
    procedure setItems(newValue: NSArray); message 'setItems:';
    function items: NSArray; message 'items';
    procedure addItems (items_: NSArray); message 'addItems:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIPasteboardChangedNotification: NSString; cvar; external;
  UIPasteboardChangedTypesAddedKey: NSString; cvar; external;
  UIPasteboardChangedTypesRemovedKey: NSString; cvar; external;
  UIPasteboardRemovedNotification: NSString; cvar; external;
  UIPasteboardTypeListString: NSArray; cvar; external;
  UIPasteboardTypeListURL: NSArray; cvar; external;
  UIPasteboardTypeListImage: NSArray; cvar; external;
  UIPasteboardTypeListColor: NSArray; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIPasteboardDataExtensions = objccategory external (UIPasteboard)
    procedure setString(newValue: NSString); message 'setString:';
    function string_: NSString; message 'string';
    procedure setStrings(newValue: NSArray); message 'setStrings:';
    function strings: NSArray; message 'strings';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setURLs(newValue: NSArray); message 'setURLs:';
    function URLs: NSArray; message 'URLs';
    procedure setImage(newValue: UIImage); message 'setImage:';
    function image: UIImage; message 'image';
    procedure setImages(newValue: NSArray); message 'setImages:';
    function images: NSArray; message 'images';
    procedure setColor(newValue: UIColor); message 'setColor:';
    function color: UIColor; message 'color';
    procedure setColors(newValue: NSArray); message 'setColors:';
    function colors: NSArray; message 'colors';
  end;
{$endif}

