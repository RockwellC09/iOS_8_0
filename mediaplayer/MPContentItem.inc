{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPContentItem.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPContentItemPtr = ^MPContentItem;
{$endif}

{$ifdef CLASSES}

type
  MPContentItem = objcclass external (NSObject)
  public
    function identifier: NSString; message 'identifier';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setSubtitle(newValue: NSString); message 'setSubtitle:';
    function subtitle: NSString; message 'subtitle';
    procedure setArtwork(newValue: MPMediaItemArtwork); message 'setArtwork:';
    function artwork: MPMediaItemArtwork; message 'artwork';
    procedure setContainer(newValue: boolean); message 'setContainer:';
    function isContainer: boolean; message 'isContainer';
    procedure setPlayable(newValue: boolean); message 'setPlayable:';
    function isPlayable: boolean; message 'isPlayable';
    procedure setPlaybackProgress(newValue: single); message 'setPlaybackProgress:';
    function playbackProgress: single; message 'playbackProgress';
    function initWithIdentifier (identifier_: NSString): instancetype; message 'initWithIdentifier:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

