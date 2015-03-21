{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPMediaItemCollection.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPMediaItemCollectionPtr = ^MPMediaItemCollection;
{$endif}

{$ifdef CLASSES}

type
  MPMediaItemCollection = objcclass external (MPMediaEntity)
  public
    class function collectionWithItems (items: NSArray): MPMediaItemCollection; message 'collectionWithItems:';
    function initWithItems (items: NSArray): instancetype; message 'initWithItems:'; { NS_DESIGNATED_INITIALIZER }
    function items: NSArray; message 'items';
    function representativeItem: MPMediaItem; message 'representativeItem';
    function count: NSUInteger; message 'count';
    function mediaTypes: MPMediaType; message 'mediaTypes';
  end;
{$endif}

