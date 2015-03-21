{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPPlayableContentDataSource.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPPlayableContentDataSourceProtocolPtr = ^MPPlayableContentDataSourceProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MPPlayableContentDataSourceProtocol = objcprotocol external name 'MPPlayableContentDataSource' (NSObjectProtocol)
  optional
    procedure beginLoadingChildItemsAtIndexPath_completionHandler (indexPath: NSIndexPath; completionHandler: OpaqueCBlock); message 'beginLoadingChildItemsAtIndexPath:completionHandler:';
    function childItemsDisplayPlaybackProgressAtIndexPath (indexPath: NSIndexPath): boolean; message 'childItemsDisplayPlaybackProgressAtIndexPath:';
  required
    function numberOfChildItemsAtIndexPath (indexPath: NSIndexPath): NSInteger; message 'numberOfChildItemsAtIndexPath:';
    function contentItemAtIndexPath (indexPath: NSIndexPath): MPContentItem; message 'contentItemAtIndexPath:';
  end;
{$endif}

