{ Parsed from Foundation.framework (iPhoneOS8.2) NSScanner.h }
{ Created on Fri Mar 20 2:11:39 2015 }


{$ifdef TYPES}
type
  NSScannerPtr = ^NSScanner;
{$endif}

{$ifdef CLASSES}

type
  NSScanner = objcclass external (NSObject, NSCopyingProtocol)
  public
    function string_: NSString; message 'string';
    procedure setScanLocation(newValue: NSUInteger); message 'setScanLocation:';
    function scanLocation: NSUInteger; message 'scanLocation';
    procedure setCharactersToBeSkipped(newValue: NSCharacterSet); message 'setCharactersToBeSkipped:';
    function charactersToBeSkipped: NSCharacterSet; message 'charactersToBeSkipped';
    procedure setCaseSensitive(newValue: boolean); message 'setCaseSensitive:';
    function caseSensitive: boolean; message 'caseSensitive';
    procedure setLocale(newValue: id); message 'setLocale:';
    function locale: id; message 'locale';
    function initWithString (string_: NSString): instancetype; message 'initWithString:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  NSExtendedScanner = objccategory external (NSScanner)
    function scanInt (result_: pcint): boolean; message 'scanInt:';
    function scanInteger (result_: NSIntegerPtr): boolean; message 'scanInteger:'; { available in 10_5, 2_0 }
    function scanLongLong (result_: pclonglong): boolean; message 'scanLongLong:';
    function scanUnsignedLongLong (result_: pculonglong): boolean; message 'scanUnsignedLongLong:'; { available in 10_9, 7_0 }
    function scanFloat (result_: psingle): boolean; message 'scanFloat:';
    function scanDouble (result_: pdouble): boolean; message 'scanDouble:';
    function scanHexInt (result_: pcuint): boolean; message 'scanHexInt:';
    function scanHexLongLong (result_: pculonglong): boolean; message 'scanHexLongLong:'; { available in 10_5, 2_0 }
    function scanHexFloat (result_: psingle): boolean; message 'scanHexFloat:'; { available in 10_5, 2_0 }
    function scanHexDouble (result_: pdouble): boolean; message 'scanHexDouble:'; { available in 10_5, 2_0 }
    function scanString_intoString (string_: NSString; result_: NSStringPtr): boolean; message 'scanString:intoString:';
    function scanCharactersFromSet_intoString (set_: NSCharacterSet; result_: NSStringPtr): boolean; message 'scanCharactersFromSet:intoString:';
    function scanUpToString_intoString (string_: NSString; result_: NSStringPtr): boolean; message 'scanUpToString:intoString:';
    function scanUpToCharactersFromSet_intoString (set_: NSCharacterSet; result_: NSStringPtr): boolean; message 'scanUpToCharactersFromSet:intoString:';
    function isAtEnd: boolean; message 'isAtEnd';
    class function scannerWithString (string_: NSString): instancetype; message 'scannerWithString:';
    class function localizedScannerWithString (string_: NSString): id; message 'localizedScannerWithString:';
  end;
{$endif}

