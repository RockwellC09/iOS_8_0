{ Parsed from AVFoundation.framework (iPhoneOS8.2) AVSynchronizedLayer.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  AVSynchronizedLayerPtr = ^AVSynchronizedLayer;
{$endif}

{$ifdef CLASSES}

type
  AVSynchronizedLayer = objcclass external (CALayer)
  private
    _syncLayer: AVSynchronizedLayerInternal;
  public
    class function synchronizedLayerWithPlayerItem (playerItem: AVPlayerItem): AVSynchronizedLayer; message 'synchronizedLayerWithPlayerItem:';
    procedure setPlayerItem(newValue: AVPlayerItem); message 'setPlayerItem:';
    function playerItem: AVPlayerItem; message 'playerItem';
  end;
{$endif}

