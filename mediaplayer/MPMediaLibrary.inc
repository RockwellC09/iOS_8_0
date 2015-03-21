{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMediaLibrary.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMediaLibraryPtr = ^MPMediaLibrary;
{$endif}

{$ifdef CLASSES}

type
  MPMediaLibrary = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function defaultMediaLibrary: MPMediaLibrary; message 'defaultMediaLibrary';
    function lastModifiedDate: NSDate; message 'lastModifiedDate';
    procedure beginGeneratingLibraryChangeNotifications; message 'beginGeneratingLibraryChangeNotifications';
    procedure endGeneratingLibraryChangeNotifications; message 'endGeneratingLibraryChangeNotifications';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MPMediaLibraryDidChangeNotification: NSString; cvar; external;
{$endif}

