{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMediaEntity.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMediaEntityPtr = ^MPMediaEntity;
{$endif}

{$ifdef TYPES}
type
  MPMediaEntityPersistentID = cuint64 { available in 4_2 };
  MPMediaEntityPersistentIDPtr = ^MPMediaEntityPersistentID { available in 4_2 };
{$endif}

{$ifdef CLASSES}

type
  MPMediaEntity = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function canFilterByProperty (property_: NSString): boolean; message 'canFilterByProperty:';
    procedure enumerateValuesForProperties_usingBlock (properties: NSSet; block: OpaqueCBlock); message 'enumerateValuesForProperties:usingBlock:'; { available in 4_0 }
    function objectForKeyedSubscript (key: id): id; message 'objectForKeyedSubscript:'; { available in 8_0 }
    function valueForProperty (property_: NSString): id; message 'valueForProperty:';
    function persistentID: MPMediaEntityPersistentID; message 'persistentID';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

