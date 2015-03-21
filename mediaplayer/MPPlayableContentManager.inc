{ Parsed from MediaPlayer.framework (iPhoneOS8.2) MPPlayableContentManager.h }
{ Created on Fri Mar 20 2:11:02 2015 }


{$ifdef TYPES}
type
  MPPlayableContentManagerPtr = ^MPPlayableContentManager;
{$endif}

{$ifdef CLASSES}

type
  MPPlayableContentManager = objcclass external (NSObject)
  public
    procedure setDataSource(newValue: MPPlayableContentDataSourceProtocol); message 'setDataSource:';
    function dataSource: MPPlayableContentDataSourceProtocol; message 'dataSource';
    procedure setDelegate(newValue: MPPlayableContentDelegateProtocol); message 'setDelegate:';
    function delegate: MPPlayableContentDelegateProtocol; message 'delegate';
    class function sharedContentManager: instancetype; message 'sharedContentManager';
    procedure reloadData; message 'reloadData';
    procedure beginUpdates; message 'beginUpdates';
    procedure endUpdates; message 'endUpdates';
  end;
{$endif}

