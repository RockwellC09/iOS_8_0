{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMediaPlaylist.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMediaPlaylistPtr = ^MPMediaPlaylist;
{$endif}

{$ifdef TYPES}
type
  MPMediaPlaylistAttribute = NSUInteger;
  MPMediaPlaylistAttributePtr = ^MPMediaPlaylistAttribute;

const
  MPMediaPlaylistAttributeNone = 0;
  MPMediaPlaylistAttributeOnTheGo = 1 shl 0;
  MPMediaPlaylistAttributeSmart = 1 shl 1;
  MPMediaPlaylistAttributeGenius = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  MPMediaPlaylist = objcclass external (MPMediaItemCollection)
  public
    function persistentID: MPMediaEntityPersistentID; message 'persistentID';
    function name: NSString; message 'name';
    function playlistAttributes: MPMediaPlaylistAttribute; message 'playlistAttributes';
    function seedItems: NSArray; message 'seedItems';
  end;
{$endif}

